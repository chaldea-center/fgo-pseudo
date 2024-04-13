void __fastcall UserServantEntity___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6B74 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E6B74 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_21827084(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  __int128 v8; // q1
  __int128 v9; // q1

  if ( (byte_42E6B75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)e, (_DWORD)method, v3);
    byte_42E6B75 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B5D69C(v6, v7);
  v8 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v8;
  v9 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v9;
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


void __fastcall UserServantEntity___ctor_21827392(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t userId; // x21
  __int128 v15; // q1
  int32_t maxLimitCount; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E6B76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)e, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    byte_42E6B76 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B5D69C(v12, v13);
  userId = e->fields.userId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v17, userId, 0LL);
  v15 = *(_OWORD *)&v17.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v17.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v15;
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
  int v2; // w2
  __int64 v3; // x3
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_42E6B73 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B73 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v7, 0LL);
}


bool __fastcall UserServantEntity__GetAdjustMax(
        UserServantEntity_o *this,
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

  if ( (byte_42E6BB2 & 1) == 0 )
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
    byte_42E6BB2 = 1;
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
        Instance = (DataManager_o *)UserServantEntity__getRarity(this, v33),
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


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v23; // x26
  __int64 v24; // x27
  ServantAppendPassiveSkillMaster_o *v25; // x25
  int32_t v26; // w0
  __int128 v27; // q1
  int32_t v28; // w26
  int64_t v29; // x0
  __int128 v30; // q0
  int64_t v31; // x27
  int64_t userSvtId; // x0
  __int64 v33; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E6BDF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___,
      (_DWORD)idList,
      (_DWORD)titleList,
      explanationList);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20, v21);
    byte_42E6BDF = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v24;
  *(_QWORD *)&v37.fields.fakeValue = v23;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
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
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v35, 0LL);
  v30 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v31 = v29;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v30;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v34, 0LL);
  if ( !v25 )
    sub_B5D69C(userSvtId, v33);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v25,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v28,
    v31,
    userSvtId,
    0LL);
}


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_21869468(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x6
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  SkillInfo_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array *v19; // x8
  unsigned __int64 v20; // x21
  __int64 v21; // x22
  SkillInfo_o *v22; // x20
  SkillInfo_array *v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0
  __int64 v31; // x0
  System_Int32_array *lvList; // [xsp+8h] [xbp-58h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-48h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-40h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42E6BE0 & 1) == 0 )
  {
    sub_B5D5C4(&SkillInfo___TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&SkillInfo_TypeInfo, v7, v8, v9);
    byte_42E6BE0 = 1;
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
    v4);
  if ( !idList
    || (v12 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, idList->max_length),
        *skillInfoList = v12,
        sub_B5D560(
          (BattleServantConfConponent_o *)skillInfoList,
          (System_Int32_array **)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (v19 = idList) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(v10, v11);
  }
  v20 = 0LL;
  v21 = 32LL;
  while ( (__int64)v20 < (int)v19->max_length )
  {
    v22 = (SkillInfo_o *)sub_B5D694(SkillInfo_TypeInfo);
    SkillInfo___ctor(v22, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v20 >= idList->max_length )
    {
LABEL_20:
      v30 = sub_B5D6C8(v10);
      sub_B5D668(v30, 0LL);
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
    v23 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v10 = sub_B5D684(v22, v23->obj.klass->_1.element_class);
    if ( !v10 )
    {
      v31 = sub_B5D6BC();
      sub_B5D668(v31, 0LL);
    }
    if ( v20 >= v23->max_length )
      goto LABEL_20;
    v23->m_Items[v20] = v22;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)v23 + v21),
      (System_Int32_array **)v22,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v25; // x23
  __int64 v26; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x21
  ServantEntity_o *Entity; // x23
  SkillLvMaster_o *v29; // x21
  const MethodInfo *v30; // x5
  const MethodInfo *v31; // x7
  unsigned __int64 v32; // x25
  char v33; // w24
  SkillLvEntity_o *v34; // x0
  BalanceConfig_c *v35; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v37; // x22
  unsigned __int64 v38; // x23
  SkillInfo_o *v39; // x8
  int32_t lv; // w2
  __int64 v42; // x0
  SkillInfo_array *v43; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_42E6B92 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)eventUpVallInfo, (_DWORD)questPhaseEntity, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42E6B92 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v43 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v26;
  *(_QWORD *)&v47.fields.fakeValue = v25;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v47, 0LL);
  if ( !v27 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v27,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v29 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v30);
  if ( idList )
  {
    v32 = 0LL;
    v33 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v32 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v32 >= idList->max_length )
      {
LABEL_48:
        v42 = sub_B5D6C8(Instance);
        sub_B5D668(v42, 0LL);
      }
      id = (unsigned int)idList->m_Items[v32 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v29 )
          goto LABEL_47;
        v34 = SkillLvMaster__GetEntity(v29, id, 1, 0LL);
        if ( v34 && SkillLvEntity__GetBonusUpVal(v34, eventUpVallInfo, questPhaseEntity, 0LL) )
          v33 = 1;
      }
      ++v32;
    }
  }
  else
  {
    v33 = 0;
  }
  UserServantEntity__getSkillInfo(this, &v43, -1, -1, 1, 0, -1, v31);
  if ( !Entity )
LABEL_47:
    sub_B5D69C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v35 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v35->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v35->static_fields->SvtSkillListMax;
  }
  v37 = *p_SvtEquipSkillListMax;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    while ( v43 )
    {
      if ( v38 >= v43->max_length )
        goto LABEL_48;
      v39 = v43->m_Items[v38];
      if ( v39 )
      {
        id = (unsigned int)v39->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v39->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v29 )
              goto LABEL_47;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(v29, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__GetBonusUpVal(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            questPhaseEntity,
                                            0LL);
              v33 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( (__int64)++v38 >= v37 )
        return v33 & 1;
    }
    goto LABEL_47;
  }
  return v33 & 1;
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
  __int64 v27; // x25
  __int64 v28; // x26
  int32_t v29; // w25
  int32_t v30; // w26
  const MethodInfo *v31; // x2
  int32_t DispLimitCount; // w27
  EventUpValInfo_o *v33; // x28
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  QuestPhaseEntity_o *v42; // x22
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  unsigned __int64 v46; // x25
  char v47; // w26
  int64_t v48; // x2
  __int64 v49; // x21
  __int64 v50; // x24
  EventUpValInfo_o *v51; // x28
  const MethodInfo *v52; // x3
  __int64 v54; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42E6B91 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_QuestPhaseMaster___,
      (_DWORD)eventUpVallInfo,
      (_DWORD)setupInfo,
      equipIds);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&EventUpValInfo_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E6B91 = 1;
  }
  entity = 0LL;
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v28;
  *(_QWORD *)&v57.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v57, 0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v31);
  v33 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v33, setupInfo, v29, v30, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v33;
  sub_B5D560((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v42 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_B5D69C(Instance, v41);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v42, v44);
  if ( equipIds )
  {
    v45 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v45 >= 1 )
    {
      v46 = 0LL;
      v47 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v46 >= (unsigned int)v45 )
        {
          v54 = sub_B5D6C8(Instance);
          sub_B5D668(v54, 0LL);
        }
        v48 = equipIds->m_Items[v46];
        if ( v48 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_28;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &entity,
                                        v48,
                                        (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_28;
            v50 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v49 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            v51 = *eventUpVallInfo;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v58.fields.currentCryptoKey = v50;
            *(_QWORD *)&v58.fields.fakeValue = v49;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
            if ( !v51 )
              goto LABEL_28;
            v51->fields.equipSvtId = (int)Instance;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_28;
            Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(entity, eventUpVallInfo, v42, v52);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v47 = 1;
          }
        }
        LODWORD(v45) = equipIds->max_length;
        ++v46;
      }
      while ( (__int64)v46 < (int)v45 );
      LOBYTE(Instance) = v47;
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_HashSet_int__o *v45; // x20
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x20
  unsigned __int64 v51; // x25
  bool v52; // w21
  SkillInfo_o *v53; // x8
  int32_t id; // w2
  int32_t lv; // w3
  System_Collections_Generic_HashSet_int__o *v56; // x19
  _BOOL8 v57; // x0
  __int64 v58; // x1
  _BOOL8 v59; // x0
  __int64 v60; // x1
  __int64 count; // x1
  System_Int32_array *v62; // x20
  __int64 v64; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v65; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v67; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_42E6BE2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_FunctionMaster___,
      (_DWORD)enableSkillInfoList,
      includeBeforeOverwrite,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___68716272, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&int___TypeInfo, v42, v43, v44);
    byte_42E6BE2 = 1;
  }
  entity = 0LL;
  memset(&v67, 0, sizeof(v67));
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  ret = v45;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_33;
  v49 = *(_QWORD *)&enableSkillInfoList->max_length;
  v50 = v47;
  if ( (int)v49 >= 1 )
  {
    v51 = 0LL;
    v52 = includeBeforeOverwrite;
    do
    {
      if ( v51 >= (unsigned int)v49 )
      {
        v64 = sub_B5D6C8(v47);
        sub_B5D668(v64, 0LL);
      }
      v53 = enableSkillInfoList->m_Items[v51];
      if ( v53 )
      {
        id = v53->fields.id;
        if ( id >= 1 )
        {
          lv = v53->fields.lv;
          if ( lv >= 1 )
          {
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_33;
            SkillLvMaster__GetUniqueFuncIdsFromSkill(Master_WarQuestSelectionMaster, &ret, id, lv, v52, 0LL);
          }
        }
      }
      LODWORD(v49) = enableSkillInfoList->max_length;
      ++v51;
    }
    while ( (__int64)v51 < (int)v49 );
  }
  v56 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v56,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)ret;
  if ( !ret )
    goto LABEL_33;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v65,
    ret,
    (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v67 = v65;
  while ( 1 )
  {
    v57 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v67,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v57 )
      break;
    if ( !v50 )
      sub_B5D69C(v57, v58);
    v59 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v50,
            &entity,
            (int32_t)v67.fields._current,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v59 )
    {
      if ( !entity )
        sub_B5D69C(v59, v60);
      if ( !v56 )
        sub_B5D69C(v59, v60);
      System_Collections_Generic_HashSet_int___Add(
        v56,
        HIDWORD(entity->fields.emptyMessage),
        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v67,
    (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v56 )
LABEL_33:
    sub_B5D69C(v47, v48);
  count = (unsigned int)v56->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v62 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_38799776(
    v56,
    v62,
    (const MethodInfo_25009A0 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68716272);
  return v62;
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
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v23; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42E6BD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, includeBeforeOverwrite, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12, v13, v14);
    byte_42E6BD3 = 1;
  }
  skillInfoList = 0LL;
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
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v20;
  *(_QWORD *)&v28.fields.fakeValue = v19;
  v17 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v28, 0LL);
  if ( !v21 )
LABEL_18:
    sub_B5D69C(v17, includeBeforeOverwrite);
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v21,
                                   (int32_t)v17,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v23);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v25, skillInfoList, includeBeforeOverwrite, v26);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int32_t ChoiceLimitCount; // w0
  int32_t v14; // w19
  BalanceConfig_c *v15; // x0
  __int64 v17; // x19
  __int64 v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42E6B78 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, ignoreRandomSettings, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v10, v11, v12);
    byte_42E6B78 = 1;
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
    v14 = ChoiceLimitCount;
    if ( ((1 << kind) & 0x16) != 0 )
    {
      v15 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      return v14 - (v14 == v15->static_fields->ServantLimitMax);
    }
    return v14;
  }
  switch ( kind )
  {
    case 0:
      v18 = *(_QWORD *)&this->fields.imageLimitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.imageLimitCount.fields.fakeValue;
      break;
    case 1:
      v18 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
      break;
    case 2:
      v18 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.fakeValue;
      break;
    case 3:
      v18 = *(_QWORD *)&this->fields.iconLimitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.iconLimitCount.fields.fakeValue;
      break;
    case 4:
      v18 = *(_QWORD *)&this->fields.portraitLimitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.portraitLimitCount.fields.fakeValue;
      break;
    default:
      return -1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v18;
  *(_QWORD *)&v19.fields.fakeValue = v17;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
}


System_Int32_array *__fastcall UserServantEntity__GetRandomLimitCountList(
        UserServantEntity_o *this,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  __int64 v27; // x21
  __int64 v28; // x22
  int32_t v29; // w0
  __int64 v30; // x8
  int32_t v31; // w20
  int32_t v32; // w21
  System_Int32_array *CardSelectList; // x19
  System_Collections_Generic_List_int__o *v34; // x20
  BalanceConfig_c *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  unsigned __int64 v38; // x21
  int32_t v39; // w25
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v4 = costumeIds;
  if ( (byte_42E6BDD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)costumeIds, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    byte_42E6BDD = 1;
  }
  if ( !v4 )
    v4 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v28;
  *(_QWORD *)&v42.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL);
  v30 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v31 = v29;
  *(_QWORD *)&v43.fields.currentCryptoKey = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList = ImageLimitCount__GetCardSelectList(v31, v32, v4, 0LL);
  v34 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !CardSelectList )
    goto LABEL_29;
  v37 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    do
    {
      if ( v38 >= (unsigned int)v37 )
      {
        v41 = sub_B5D6C8(v35);
        sub_B5D668(v41, 0LL);
      }
      v39 = CardSelectList->m_Items[v38 + 1];
      if ( v39 == -1 )
      {
        v36 = 0xFFFFFFFFLL;
        if ( !v34 )
          goto LABEL_29;
      }
      else
      {
        v35 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v35 = BalanceConfig_TypeInfo;
        }
        if ( v39 >= v35->static_fields->ServantLimitMax )
          v36 = (unsigned int)v39;
        else
          v36 = (unsigned int)(v39 + 1);
        if ( !v34 )
          goto LABEL_29;
      }
      System_Collections_Generic_List_int___Add(
        v34,
        v36,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v37) = CardSelectList->max_length;
    }
    while ( (__int64)++v38 < (int)v37 );
  }
  if ( !v34 )
LABEL_29:
    sub_B5D69C(v35, v36);
  return System_Collections_Generic_List_int___ToArray(
           v34,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall UserServantEntity__GetSameSvtEquipNumIsLimitUp(
        UserServantEntity_o *this,
        bool isLimitMax,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  char v22; // w1
  char v23; // w2
  __int64 v24; // x3
  WarQuestSelectionMaster_o *v25; // x0
  __int64 v26; // x21
  __int64 v27; // x22
  UserServantMaster_o *v28; // x20
  System_Collections_Generic_List_UserServantEntity__o *v29; // x0
  __int64 v30; // x1
  int32_t v31; // w20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v33; // x21
  __int64 v34; // x22
  UserServantMaster_o *v35; // x20
  bool EntityListBySvtId; // w0
  const MethodInfo *v37; // x1
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_42E6BE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, isLimitMax, isWarehouseServantEquip, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23, v24);
    byte_42E6BE6 = 1;
  }
  userStorageServantList = 0LL;
  memset(&v39, 0, sizeof(v39));
  if ( !isWarehouseServantEquip )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v35 = (UserServantMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v34;
    *(_QWORD *)&v42.fields.fakeValue = v33;
    v29 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                    v42,
                                                                    0LL);
    if ( !v35 )
      goto LABEL_35;
    EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(v35, &userStorageServantList, (int32_t)v29, 0, 0LL);
    v31 = 0;
    if ( !EntityListBySvtId )
      return v31;
LABEL_21:
    v29 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v39,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userStorageServantList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v31 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v39,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v39,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v31;
          }
          if ( !isLimitMax )
            break;
          if ( !v39.fields.current )
            sub_B5D69C(0LL, v37);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v39.fields.current, v37) )
            goto LABEL_29;
        }
        if ( !v39.fields.current )
          sub_B5D69C(0LL, v37);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v39.fields.current, v37) )
LABEL_29:
          ++v31;
      }
    }
LABEL_35:
    sub_B5D69C(v29, v30);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v25 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (UserServantMaster_o *)v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v27;
  *(_QWORD *)&v41.fields.fakeValue = v26;
  v29 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                  v41,
                                                                  0LL);
  if ( !v28 )
    goto LABEL_35;
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v28, &userStorageServantList, (int32_t)v29, 0LL) )
    goto LABEL_21;
  return 0;
}


System_Int32_array *__fastcall UserServantEntity__GetSkillCategoryIdList(
        UserServantEntity_o *this,
        int32_t skillListNum,
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x22
  __int64 v17; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v22; // x7
  bool IsServant; // w8
  UserServantEntity_o *v24; // x0
  const MethodInfo *v25; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42E6BE3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, skillListNum, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    byte_42E6BE3 = 1;
  }
  skillInfoList = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v18,
                                   v19,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsServant = ServantEntity__get_IsServant((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsServant )
    {
      UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, skillListNum, v22);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v24, skillInfoList, 1, v25);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  char v45; // w1
  int v46; // w2
  __int64 v47; // x3
  char v48; // w1
  int v49; // w2
  __int64 v50; // x3
  char v51; // w1
  int v52; // w2
  __int64 v53; // x3
  char v54; // w1
  int v55; // w2
  __int64 v56; // x3
  char v57; // w1
  int v58; // w2
  __int64 v59; // x3
  char v60; // w1
  int v61; // w2
  __int64 v62; // x3
  char v63; // w1
  int v64; // w2
  __int64 v65; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v67; // x22
  __int64 v68; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x21
  DataManager_o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v71; // x1
  ServantEntity_o *v72; // x0
  const MethodInfo *v73; // x2
  __int64 v74; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v76; // x5
  __int64 v77; // x20
  __int64 v78; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v80; // x20
  __int64 v81; // x21
  TreasureDvcMaster_o *v82; // x19
  TreasureDvcEntity_o *v83; // x19
  TreasureDvcLvMaster_o *v84; // x20
  TreasureDvcLvEntity_o *v85; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v86; // x19
  SkillLvMaster_o *v87; // x23
  System_Collections_Generic_HashSet_int__o *v88; // x27
  __int64 v89; // x8
  DataManager_o *v90; // x24
  unsigned __int64 v91; // x20
  unsigned __int64 v92; // x9
  DataVals_o *v93; // x25
  int32_t v94; // w1
  int32_t Param; // w26
  int32_t v96; // w1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *v98; // x22
  int32_t v99; // w26
  int32_t v100; // w27
  void *v101; // x8
  System_Collections_Generic_HashSet_int__o *v102; // x20
  _BOOL8 v103; // x0
  __int64 v104; // x1
  _BOOL8 v105; // x0
  __int64 v106; // x1
  __int64 count; // x1
  __int64 v109; // x0
  TreasureDvcLvMaster_o *v110; // [xsp+0h] [xbp-C0h]
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v112; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v113; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v114; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v115; // [xsp+48h] [xbp-78h] BYREF
  TreasureDvcLvEntity_o *v116; // [xsp+50h] [xbp-70h] BYREF
  SkillLvEntity_o *v117; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_42E6BE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, isLvOne, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___68716272, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&int___TypeInfo, v57, v58, v59);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v63, v64, v65);
    byte_42E6BE4 = 1;
  }
  tdInfo = 0LL;
  v117 = 0LL;
  entity = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v113 = 0LL;
  memset(&v114, 0, sizeof(v114));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v68 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v67 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v120.fields.currentCryptoKey = v68;
  *(_QWORD *)&v120.fields.fakeValue = v67;
  DataValsList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v120, 0LL);
  if ( !v69 )
    goto LABEL_69;
  v72 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v69,
                             (int32_t)DataValsList,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v72 )
    return 0LL;
  v74 = 0LL;
  if ( ServantEntity__get_IsServant(v72, 0LL) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v73);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, DispLimitCount, -1, isLvOne, v76) )
      return 0LL;
    v77 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v77 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v78 = **(_QWORD **)(v77 + 192);
    if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
      sub_AF52C4(v78);
    DataValsList = **(DataManager_o ***)(v78 + 184);
    if ( !DataValsList )
      goto LABEL_69;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           DataValsList,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v81 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v80 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v82 = (TreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v121.fields.currentCryptoKey = v81;
    *(_QWORD *)&v121.fields.fakeValue = v80;
    DataValsList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v121, 0LL);
    if ( !tdInfo || !v82 )
      goto LABEL_69;
    v83 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v82, (int32_t)DataValsList, tdInfo->fields.id, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v83 )
      goto LABEL_69;
    if ( !tdInfo )
      goto LABEL_69;
    v84 = (TreasureDvcLvMaster_o *)DataValsList;
    if ( !DataValsList )
      goto LABEL_69;
    v85 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, v83->fields.id, tdInfo->fields.lv, 0LL);
    v74 = (__int64)v85;
    if ( v85 )
    {
      if ( !v85->fields.funcId )
        return 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v110 = v84;
      v86 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
      v87 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
      v88 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v88,
        (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
      if ( !v88 )
        goto LABEL_69;
      System_Collections_Generic_HashSet_int___UnionWith(
        v88,
        *(System_Collections_Generic_IEnumerable_T__o **)(v74 + 32),
        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      DataValsList = (DataManager_o *)TreasureDvcLvEntity__getDataValsList((TreasureDvcLvEntity_o *)v74, 100, 0LL);
      v89 = *(_QWORD *)(v74 + 32);
      if ( !v89 )
        goto LABEL_69;
      p_lookup = &DataValsList->fields.lookup;
      v90 = DataValsList;
      v91 = 0LL;
      while ( 1 )
      {
        v92 = *(unsigned int *)(v89 + 24);
        if ( (__int64)v91 >= (int)v92 )
        {
          v102 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v102,
            (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
          System_Collections_Generic_HashSet_int___GetEnumerator(
            &v112,
            v88,
            (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
          v114 = v112;
          while ( 1 )
          {
            v103 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                     &v114,
                     (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            if ( !v103 )
              break;
            if ( !v86 )
              sub_B5D69C(v103, v104);
            v105 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     v86,
                     &v113,
                     (int32_t)v114.fields._current,
                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( v105 )
            {
              if ( !v113 )
                sub_B5D69C(v105, v106);
              if ( !v102 )
                sub_B5D69C(v105, v106);
              System_Collections_Generic_HashSet_int___Add(
                v102,
                HIDWORD(v113->fields.emptyMessage),
                (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose(
            &v114,
            (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
          if ( v102 )
          {
            count = (unsigned int)v102->fields._count;
            if ( (int)count >= 1 )
            {
              v74 = sub_B5D5DC(int___TypeInfo, count);
              System_Collections_Generic_HashSet_int___CopyTo_38799776(
                v102,
                (System_Int32_array *)v74,
                (const MethodInfo_25009A0 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68716272);
              return (System_Int32_array *)v74;
            }
            return 0LL;
          }
LABEL_69:
          sub_B5D69C(DataValsList, v71);
        }
        if ( v91 >= v92 )
          goto LABEL_82;
        if ( !v86 )
          goto LABEL_69;
        DataValsList = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          v86,
                                          &entity,
                                          *(_DWORD *)(v89 + 4 * v91 + 32),
                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_69;
          DataValsList = (DataManager_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v90 )
              goto LABEL_69;
            if ( v91 >= LODWORD(v90->fields.datalist) )
            {
LABEL_82:
              v109 = sub_B5D6C8(DataValsList);
              sub_B5D668(v109, 0LL);
            }
            if ( !entity )
              goto LABEL_69;
            v93 = (DataVals_o *)p_lookup[v91];
            if ( !v93 )
              goto LABEL_69;
            DataVals__SetTempType(
              (DataVals_o *)p_lookup[v91],
              (FunctionMaster_o *)v86,
              (int32_t)entity->fields.age,
              0LL);
            v94 = DataVals__isParam(v93, 26, 0LL) ? 26 : 3;
            Param = DataVals__GetParam(v93, v94, 0, 0LL);
            v96 = DataVals__isParam(v93, 27, 0LL) ? 27 : 4;
            DataValsList = (DataManager_o *)DataVals__GetParam(v93, v96, 0, 0LL);
            if ( !v87 )
              goto LABEL_69;
            DataValsList = (DataManager_o *)SkillLvMaster__TryGetEntity(v87, &v117, Param, (int32_t)DataValsList, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              if ( !v117 )
                goto LABEL_69;
              funcId = (System_Collections_Generic_IEnumerable_T__o *)v117->fields.funcId;
              if ( funcId )
                System_Collections_Generic_HashSet_int___UnionWith(
                  v88,
                  funcId,
                  (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
            DataValsList = (DataManager_o *)DataVals__isParam(v93, 92, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              DataValsList = (DataManager_o *)DataVals__isParam(v93, 93, 0LL);
              if ( ((unsigned __int8)DataValsList & 1) != 0 )
              {
                v98 = v88;
                v99 = DataVals__GetParam(v93, 92, 0, 0LL);
                v100 = DataVals__GetParam(v93, 93, 0, 0LL);
                if ( DataVals__isParam(v93, 95, 0LL) )
                {
                  DataValsList = (DataManager_o *)TreasureDvcLvMaster__TryGetEntity(v110, &v116, v99, v100, 0LL);
                  v88 = v98;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v101 = v116;
                    if ( !v116 )
                      goto LABEL_69;
LABEL_66:
                    v71 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v101 + 4);
                    if ( v71 )
                      System_Collections_Generic_HashSet_int___UnionWith(
                        v88,
                        v71,
                        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
                else
                {
                  DataValsList = (DataManager_o *)SkillLvMaster__TryGetEntity(v87, &v115, v99, v100, 0LL);
                  v88 = v98;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v101 = v115;
                    if ( !v115 )
                      goto LABEL_69;
                    goto LABEL_66;
                  }
                }
              }
            }
          }
        }
        v89 = *(_QWORD *)(v74 + 32);
        ++v91;
        if ( !v89 )
          goto LABEL_69;
      }
    }
  }
  return (System_Int32_array *)v74;
}


UserServantCommandCardEntity_o *__fastcall UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
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
  __int64 v15; // x20
  DataManager_o *v16; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v18; // q1
  UserServantCommandCardMaster_o *v19; // x20
  int64_t v20; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  int64_t v23; // x19
  const MethodInfo *v24; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42E6BD1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11, v12, v13);
    byte_42E6BD1 = 1;
  }
  entity = 0LL;
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AF52C4(v15);
  v16 = **(DataManager_o ***)(v15 + 184);
  if ( !v16 )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v16,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v18 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v19 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v26, 0LL);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v22;
  *(_QWORD *)&v29.fields.fakeValue = v21;
  v16 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
  if ( !v19 )
LABEL_16:
    sub_B5D69C(v16, method);
  UserServantCommandCardMaster__TryGetEntity(v19, &entity, v23, (int)v16, v24);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BD6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool __fastcall UserServantEntity__IsCombineExp(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BB9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BA3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCondJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 6) & 1;
}


bool __fastcall UserServantEntity__IsEnableOwnRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x19
  __int64 v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42E6BD7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    byte_42E6BD7 = 1;
  }
  v9 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL) )
  {
    v11 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL) == 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x19
  __int64 v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42E6BD9 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    byte_42E6BD9 = 1;
  }
  v9 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL) )
  {
    v11 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL) == 1;
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
  UserServantEntity__getTreasureDeviceInfo_21848072(this, &tdLv, &tdMaxLv, v3);
  return tdMaxLv < tdLv + targetLv;
}


bool __fastcall UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  char i; // w22
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int128 v32; // q1
  int64_t v33; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37[2]; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_42E6BDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCombineExpMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E6BDE = 1;
  }
  memset(&v38, 0, sizeof(v38));
  memset(&v37[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_21;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= HIDWORD(v38.fields.current[1].klass) == 27 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v30 )
      break;
    if ( !v38.fields.current )
      sub_B5D69C(v30, v31);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
LABEL_18:
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(Instance, v27);
  }
  UserCombineExpMaster__GetUserSvtId(v37, (UserCombineExpMaster_o *)Instance, 0LL);
  v37[1] = v37[0];
  v32 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v37[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37[0].fields.fakeValue = v32;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v36 = v37[0];
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v36, 0LL);
  v35 = v37[1];
  if ( v33 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v35, 0LL) )
    goto LABEL_18;
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BD4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BAF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BD5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6BAB & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BAB = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL);
}


bool __fastcall UserServantEntity__IsLock(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool __fastcall UserServantEntity__IsMaterialTd(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BE1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsModifyBattleVoice(
        UserServantEntity_o *this,
        int32_t battleVoice,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42E6BD2 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, battleVoice, (_DWORD)method, v3);
    byte_42E6BD2 = 1;
  }
  v7 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL) != battleVoice;
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

  if ( (byte_42E6BDC & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      ownSettingParam,
      friendFollowSettingParam,
      method);
    byte_42E6BDC = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v12, 0LL) != ownSettingParam )
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL) != friendFollowSettingParam;
}


bool __fastcall UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t UserId; // x0
  __int128 v12; // q1
  int64_t v13; // x20
  __int128 v14; // q0
  int64_t v15; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-40h]

  if ( (byte_42E6BA9 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v8, v9, v10);
    byte_42E6BA9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v12 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v13 = UserId;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v19, 0LL) )
  {
    v14 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v18 = v20;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v18, 0LL);
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    return UserServantNewManager__IsNew(v15, 0LL);
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
      sub_B5D69C(0LL, v6);
    LOBYTE(EventServant) = EventServantEntity__IsProtectedDuringEvent(v5, 0LL);
  }
  return (char)EventServant;
}


bool __fastcall UserServantEntity__IsSameSvtEquipToLimitMaxNum(
        UserServantEntity_o *this,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  BalanceConfig_c *v30; // x0
  __int64 v31; // x21
  __int64 v32; // x22
  int32_t ServantLimitMax; // w23
  int v34; // w23
  WarQuestSelectionMaster_o *v35; // x0
  __int64 v36; // x21
  __int64 v37; // x22
  UserServantMaster_o *v38; // x20
  System_Collections_Generic_List_UserServantEntity__o *v39; // x0
  __int64 v40; // x1
  int v41; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v44; // x21
  __int64 v45; // x22
  UserServantMaster_o *v46; // x20
  UserServantEntity_Fields *p_fields; // x22
  Il2CppObject *current; // x19
  Il2CppObject v49; // q0
  int64_t v50; // x0
  __int128 v51; // q0
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  int32_t LimitCount; // w20
  BalanceConfig_c *v55; // x0
  _BOOL8 v56; // x0
  __int64 v57; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+60h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+78h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42E6BE5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isWarehouseServantEquip, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42E6BE5 = 1;
  }
  userStorageServantList = 0LL;
  memset(&v61, 0, sizeof(v61));
  v30 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  v32 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  ServantLimitMax = v30->static_fields->ServantLimitMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v32;
  *(_QWORD *)&v63.fields.fakeValue = v31;
  v34 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
  if ( !v34 )
    return 0;
  if ( !isWarehouseServantEquip )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    v45 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v46 = (UserServantMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v65.fields.currentCryptoKey = v45;
    *(_QWORD *)&v65.fields.fakeValue = v44;
    v39 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                    v65,
                                                                    0LL);
    if ( !v46 )
      goto LABEL_46;
    v41 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v46, &userStorageServantList, (int32_t)v39, 0, 0LL) )
      return v34 <= v41;
LABEL_29:
    v39 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v60,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userStorageServantList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v61.fields.current = (Il2CppObject *)v60.fields.fakeValue;
      *(_OWORD *)&v61.fields.list = *(_OWORD *)&v60.fields.currentCryptoKey;
      v41 = 0;
      p_fields = &this->fields;
      while ( 1 )
      {
        v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v61,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v56 )
          break;
        current = v61.fields.current;
        if ( !v61.fields.current )
          sub_B5D69C(v56, v57);
        v49 = v61.fields.current[2];
        *(Il2CppObject *)&v60.fields.currentCryptoKey = v61.fields.current[1];
        *(Il2CppObject *)&v60.fields.fakeValue = v49;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v59 = v60;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v59, 0LL);
        v51 = *(_OWORD *)&p_fields->id.fields.fakeValue;
        *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&v58.fields.fakeValue = v51;
        if ( v50 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v58, 0LL) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v52);
          v55 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v55 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v55->static_fields->ServantLimitMax )
            v41 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v53) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v61,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v34 <= v41;
    }
LABEL_46:
    sub_B5D69C(v39, v40);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v35 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v38 = (UserServantMaster_o *)v35;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v37;
  *(_QWORD *)&v64.fields.fakeValue = v36;
  v39 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                  v64,
                                                                  0LL);
  if ( !v38 )
    goto LABEL_46;
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v38, &userStorageServantList, (int32_t)v39, 0LL) )
    goto LABEL_29;
  v41 = 0;
  return v34 <= v41;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E6BDB & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BDB = 1;
  }
  v6 = *(_QWORD *)&this->fields.limitCountSupport.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.limitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BBA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42E6B96 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    byte_42E6B96 = 1;
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
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_34267908(questRestrictionInfo, v8, v9, DispLimitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_21846248(
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

  if ( (byte_42E6B97 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)partyItem,
      *(_QWORD *)&num);
    byte_42E6B97 = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_34268556(
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E6BD8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BD8 = 1;
  }
  v6 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
}


void __fastcall UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int128 v8; // q1
  int64_t v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-30h]

  if ( (byte_42E6BAA & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v5, v6, v7);
    byte_42E6BAA = 1;
  }
  v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld(v9, 0LL);
}


int32_t __fastcall UserServantEntity__SupportRandomSettingSelectedButtonIndex(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  int32_t v7; // w0
  int32_t v8; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42E6BDA & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BDA = 1;
  }
  v6 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL);
  if ( v7 == 1 )
    v8 = 4;
  else
    v8 = 3;
  if ( v7 == 2 )
    return 5;
  else
    return v8;
}


bool __fastcall UserServantEntity__checkID(UserServantEntity_o *this, int64_t inId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_42E6B9A & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, inId, (_DWORD)method, v3);
    byte_42E6B9A = 1;
  }
  v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL) == inId;
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
  UserServantEntity__getTreasureDeviceInfo_21848072(this, &tdLv, &tdMaxLv, v3);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42E6BCE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineMaster___, materialId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E6BCE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             materialId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  void *Instance; // x0
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v19; // x1
  int32_t v20; // w23
  _DWORD *v21; // x22
  BalanceConfig_c *v22; // x0
  int32_t v23; // w20
  BalanceConfig_c *v24; // x0

  if ( (byte_42E6BB7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)hpData, (_DWORD)atkData, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantRarityMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E6BB7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (void *)UserServantEntity__getRarity(this, v19),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v17);
  }
  v20 = *((_DWORD *)Instance + 5);
  v21 = Instance;
  v22 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= v20 )
    v20 = v21[7];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  *hpData = v22->static_fields->StatusUpAdjustHp * v20;
  v23 = v21[6];
  v24 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustAtk >= v23 )
    v23 = v21[8];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  *atkData = v24->static_fields->StatusUpAdjustAtk * v23;
}


SvtUseSkillData_o *__fastcall UserServantEntity__getAppendSkillInfo(
        UserServantEntity_o *this,
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x20
  __int64 v28; // x22
  ServantAppendPassiveSkillMaster_o *v29; // x19
  int64_t v30; // x0
  __int64 v31; // x1
  SvtUseSkillData_o *SkillData; // x19
  WarQuestSelectionMaster_o *v33; // x0
  __int128 v34; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v35; // x20
  struct System_Int32_array *svtSkillNumsList; // x8
  System_Int32_array **v37; // x0
  struct System_Int32_array **p_svtSkillLvList; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  WarQuestSelectionMaster_o *v45; // x0
  __int128 v46; // q0
  UserServantAppendPassiveSkillMaster_o *v47; // x22
  int64_t v48; // x0
  __int64 v49; // x8
  int64_t v50; // x21
  const MethodInfo *v51; // x4
  struct System_Int32_array *unlockNums; // x8
  struct System_Int32_array *v53; // x10
  unsigned __int64 v54; // x8
  struct System_Int32_array *v55; // x10
  UserServantAppendPassiveSkillEntity_o *v56; // x11
  unsigned __int64 v57; // x10
  struct System_Int32_array *v58; // x12
  unsigned __int64 max_length; // x13
  struct System_Int32_array *v60; // x14
  struct System_Int32_array *v61; // x11
  UserServantEntity_o *v62; // x11
  __int64 v63; // x10
  __int64 v64; // x13
  unsigned __int64 v65; // x14
  unsigned __int64 v66; // x12
  struct System_Int32_array *v67; // x15
  __int64 v68; // x11
  struct System_Int32_array *v69; // x12
  struct System_Int32_array *v70; // x9
  unsigned __int64 v71; // x8
  struct System_Int32_array *v72; // x9
  __int64 v74; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+40h] [xbp-50h]
  UserServantAppendPassiveSkillEntity_o *v78; // [xsp+60h] [xbp-30h] BYREF
  UserServantEntity_o *entity; // [xsp+68h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_42E6B83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&int___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24, v25);
    byte_42E6B83 = 1;
  }
  v78 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v28;
  *(_QWORD *)&v80.fields.fakeValue = v27;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
  if ( !v29 )
    goto LABEL_62;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v29, v30, 0LL);
  v33 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v34 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v35 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v33;
  *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v77.fields.fakeValue = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v76 = v77;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v76, 0LL);
  if ( !v35 )
    goto LABEL_62;
  v30 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v35,
          &entity,
          v30,
          (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_62;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_62;
  v37 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, svtSkillNumsList->max_length);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v37;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_B5D560((BattleServantConfConponent_o *)&SkillData->fields.svtSkillLvList, v37, v39, v40, v41, v42, v43, v44);
  v45 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v46 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v47 = (UserServantAppendPassiveSkillMaster_o *)v45;
  *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v75.fields.fakeValue = v46;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v75, 0LL);
  v49 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v81.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v50 = v48;
  *(_QWORD *)&v81.fields.currentCryptoKey = v49;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81, 0LL);
  if ( !v47 )
    goto LABEL_62;
  v30 = UserServantAppendPassiveSkillMaster__TryGetEntity(v47, &v78, v50, v30, v51);
  if ( (v30 & 1) != 0 )
  {
    if ( !v78 )
      goto LABEL_62;
    unlockNums = v78->fields.unlockNums;
    if ( !unlockNums )
      goto LABEL_62;
    if ( *(_QWORD *)&unlockNums->max_length )
    {
      v53 = SkillData->fields.svtSkillNumsList;
      if ( v53 )
      {
        v54 = 0LL;
        while ( 1 )
        {
          if ( (__int64)v54 >= (int)v53->max_length )
            return SkillData;
          v55 = *p_svtSkillLvList;
          if ( !*p_svtSkillLvList )
            goto LABEL_62;
          if ( v54 >= v55->max_length )
            goto LABEL_64;
          v55->m_Items[v54 + 1] = 0;
          v56 = v78;
          if ( !v78 )
            goto LABEL_62;
          v57 = 0LL;
          while ( 1 )
          {
            v58 = v56->fields.unlockNums;
            if ( !v58 )
              goto LABEL_62;
            max_length = v58->max_length;
            if ( (__int64)v57 >= (int)max_length )
              break;
            v60 = SkillData->fields.svtSkillNumsList;
            if ( !v60 )
              goto LABEL_62;
            if ( v54 >= v60->max_length || v57 >= max_length )
              goto LABEL_64;
            if ( v60->m_Items[v54 + 1] == v58->m_Items[v57 + 1] )
            {
              v61 = *p_svtSkillLvList;
              if ( !*p_svtSkillLvList )
                goto LABEL_62;
              if ( v54 >= v61->max_length )
                goto LABEL_64;
              v61->m_Items[v54 + 1] = 1;
              v56 = v78;
            }
            ++v57;
            if ( !v56 )
              goto LABEL_62;
          }
          v62 = entity;
          if ( entity )
            break;
LABEL_54:
          v53 = SkillData->fields.svtSkillNumsList;
          ++v54;
          if ( !v53 )
            goto LABEL_62;
        }
        v63 = 8LL;
        do
        {
          v64 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
          if ( !v64 )
            break;
          v65 = *(unsigned int *)(v64 + 24);
          v66 = v63 - 8;
          if ( v63 - 8 >= (int)v65 )
            goto LABEL_54;
          v67 = SkillData->fields.svtSkillNumsList;
          if ( !v67 )
            break;
          if ( v54 >= v67->max_length || v66 >= v65 )
            goto LABEL_64;
          if ( v67->m_Items[v54 + 1] == *(_DWORD *)(v64 + 4 * v63) )
          {
            v68 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
            if ( !v68 )
              break;
            if ( v66 >= *(unsigned int *)(v68 + 24) )
              goto LABEL_64;
            v69 = *p_svtSkillLvList;
            if ( !*p_svtSkillLvList )
              break;
            if ( v54 >= v69->max_length )
              goto LABEL_64;
            v69->m_Items[v54 + 1] = *(_DWORD *)(v68 + 4 * v63);
            v62 = entity;
          }
          ++v63;
        }
        while ( v62 );
      }
LABEL_62:
      sub_B5D69C(v30, v31);
    }
  }
  v70 = SkillData->fields.svtSkillNumsList;
  if ( !v70 )
    goto LABEL_62;
  v71 = 0LL;
  while ( (__int64)v71 < (int)v70->max_length )
  {
    v72 = *p_svtSkillLvList;
    if ( *p_svtSkillLvList )
    {
      if ( v71 >= v72->max_length )
      {
LABEL_64:
        v74 = sub_B5D6C8(v30);
        sub_B5D668(v74, 0LL);
      }
      v72->m_Items[v71 + 1] = 0;
      v70 = SkillData->fields.svtSkillNumsList;
      ++v71;
      if ( v70 )
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x27
  __int64 v33; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x26
  SkillLvMaster_o *v35; // x26
  const MethodInfo *v36; // x5
  const MethodInfo *v37; // x7
  unsigned __int64 v38; // x28
  bool v39; // w27
  SkillLvEntity_o *Entity; // x0
  unsigned __int64 v41; // x24
  SkillInfo_o *v42; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v44; // x0
  __int64 v46; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-68h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42E6B8E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, wearersSvtId, wearesLimitCount, *(_QWORD *)&wearesDispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E6B8E = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v33;
  *(_QWORD *)&v52.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL);
  if ( !v34
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v34,
          (int32_t)Instance,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_38:
    sub_B5D69C(Instance, id);
  }
  v35 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v36);
  if ( idList )
  {
    v38 = 0LL;
    v39 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v38 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_38;
      if ( v38 >= idList->max_length )
      {
LABEL_39:
        v46 = sub_B5D6C8(Instance);
        sub_B5D668(v46, 0LL);
      }
      id = (unsigned int)idList->m_Items[v38 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v35 )
          goto LABEL_38;
        Entity = SkillLvMaster__GetEntity(v35, id, 1, 0LL);
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
            return v39;
          }
        }
      }
      ++v38;
    }
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, finishEvent, -1, v37);
  v41 = 0LL;
  v39 = 1;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v41 >= SLODWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      return 0;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v41 >= skillInfoList->max_length )
      goto LABEL_39;
    v42 = skillInfoList->m_Items[v41];
    if ( v42 )
    {
      id = (unsigned int)v42->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v42->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v35 )
            goto LABEL_38;
          v44 = SkillLvMaster__GetEntity(v35, id, lv, 0LL);
          if ( v44 )
          {
            if ( SkillLvEntity__getEventUpVal(
                   v44,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   baseEventId,
                   1,
                   1,
                   0LL) )
            {
              return v39;
            }
          }
        }
      }
    }
    ++v41;
  }
}


bool __fastcall UserServantEntity__getBaseEventUpVal_21843132(
        UserServantEntity_o *this,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v24; // x22
  __int64 v25; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x20
  ServantEntity_o *Entity; // x22
  SkillLvMaster_o *v28; // x20
  const MethodInfo *v29; // x5
  const MethodInfo *v30; // x7
  unsigned __int64 v31; // x24
  char v32; // w23
  SkillLvEntity_o *v33; // x0
  BalanceConfig_c *v34; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v36; // x21
  unsigned __int64 v37; // x22
  SkillInfo_o *v38; // x8
  int32_t lv; // w2
  __int64 v41; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42E6B90 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)eventUpVallInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E6B90 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
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
  *(_QWORD *)&v46.fields.currentCryptoKey = v25;
  *(_QWORD *)&v46.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v46, 0LL);
  if ( !v26 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v26,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v28 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v29);
  if ( idList )
  {
    v31 = 0LL;
    v32 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v31 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v31 >= idList->max_length )
      {
LABEL_48:
        v41 = sub_B5D6C8(Instance);
        sub_B5D668(v41, 0LL);
      }
      id = (unsigned int)idList->m_Items[v31 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v28 )
          goto LABEL_47;
        v33 = SkillLvMaster__GetEntity(v28, id, 1, 0LL);
        if ( v33 && SkillLvEntity__getEventUpVal_26836992(v33, eventUpVallInfo, 1, 1, 0, 0, 0LL) )
          v32 = 1;
      }
      ++v31;
    }
  }
  else
  {
    v32 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v30);
  if ( !Entity )
LABEL_47:
    sub_B5D69C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v34 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v34->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v34->static_fields->SvtSkillListMax;
  }
  v36 = *p_SvtEquipSkillListMax;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    while ( skillInfoList )
    {
      if ( v37 >= skillInfoList->max_length )
        goto LABEL_48;
      v38 = skillInfoList->m_Items[v37];
      if ( v38 )
      {
        id = (unsigned int)v38->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v38->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v28 )
              goto LABEL_47;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(v28, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_26836992(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0LL);
              v32 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( (__int64)++v37 >= v36 )
        return v32 & 1;
    }
    goto LABEL_47;
  }
  return v32 & 1;
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpType(UserServantEntity_o *this, const MethodInfo *method)
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x21
  __int64 v33; // x22
  ServantSkillMaster_o *v34; // x20
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v36; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__52_0; // x21
  Il2CppObject *v39; // x22
  struct UserServantEntity___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int max_length; // w8
  unsigned int v48; // w27
  Il2CppClass **v49; // x8
  ServantSkillEntity_o *v50; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v53; // x24
  __int64 v54; // x25
  int64_t v55; // x23
  int32_t v56; // w0
  const MethodInfo *v57; // x2
  int32_t SkillLevel; // w0
  const MethodInfo *v59; // x2
  int32_t v61; // w0
  __int64 v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_42E6B87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_ServantSkillEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Comparison_ServantSkillEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ServantSkillEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity___c_TypeInfo, v26, v27, v28);
    byte_42E6B87 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v34 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v33;
  *(_QWORD *)&v63.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
  if ( !v34 )
    goto LABEL_34;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(
                                                        v34,
                                                        (int32_t)Instance,
                                                        0LL);
  v36 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v36 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__52_0,
      v39,
      Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v40 = UserServantEntity___c_TypeInfo->static_fields;
    v40->__9__52_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__52_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__52_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_34;
  max_length = ServantSkillList->max_length;
  if ( max_length < 1 )
    return 0;
  v48 = 0;
  while ( 1 )
  {
    if ( v48 >= max_length )
    {
      v62 = sub_B5D6C8(Instance);
      sub_B5D668(v62, 0LL);
    }
    v49 = &ServantSkillList->obj.klass + (int)v48;
    v50 = (ServantSkillEntity_o *)v49[4];
    if ( !v50 )
      goto LABEL_34;
    Instance = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v49[4], 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      lv = this->fields.lv;
      v54 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v53 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v55 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v54;
      *(_QWORD *)&v64.fields.fakeValue = v53;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
      Instance = (DataManager_o *)ServantSkillEntity__isUse(v50, v55, lv, v56, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        SkillLevel = UserServantEntity__getSkillLevel(this, v50->fields.num - 1, v57);
        Instance = (DataManager_o *)ServantSkillEntity__getFriendPointUpVal(v50, SkillLevel, 0LL);
        if ( (int)Instance >= 1 )
          break;
      }
    }
    max_length = ServantSkillList->max_length;
    if ( (int)++v48 >= max_length )
      return 0;
  }
  v61 = UserServantEntity__getSkillLevel(this, v50->fields.num - 1, v59);
  Instance = (DataManager_o *)ServantSkillEntity__getSkillLvEntity(v50, v61, 0LL);
  if ( !Instance )
LABEL_34:
    sub_B5D69C(Instance, v30);
  return SkillLvEntity__getFriendPointUpType((SkillLvEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpVal(UserServantEntity_o *this, const MethodInfo *method)
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  WebViewManager_o *Instance; // x0
  __int64 v30; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x21
  __int64 v33; // x22
  ServantSkillMaster_o *v34; // x20
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v36; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__51_0; // x21
  Il2CppObject *v39; // x22
  struct UserServantEntity___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int max_length; // w8
  unsigned int v48; // w27
  Il2CppClass **v49; // x8
  ServantSkillEntity_o *v50; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v53; // x24
  __int64 v54; // x25
  int64_t v55; // x23
  int32_t v56; // w0
  const MethodInfo *v57; // x2
  int32_t SkillLevel; // w0
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_42E6B86 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_ServantSkillEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Comparison_ServantSkillEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ServantSkillEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity___c_TypeInfo, v26, v27, v28);
    byte_42E6B86 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v34 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v33;
  *(_QWORD *)&v61.fields.fakeValue = v32;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL);
  if ( !v34 )
    goto LABEL_33;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(
                                                        v34,
                                                        (int32_t)Instance,
                                                        0LL);
  v36 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v36 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__51_0,
      v39,
      Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v40 = UserServantEntity___c_TypeInfo->static_fields;
    v40->__9__51_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__51_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__51_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  if ( max_length >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= max_length )
      {
        v59 = sub_B5D6C8(Instance);
        sub_B5D668(v59, 0LL);
      }
      v49 = &ServantSkillList->obj.klass + (int)v48;
      v50 = (ServantSkillEntity_o *)v49[4];
      if ( !v50 )
        break;
      Instance = (WebViewManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v49[4], 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        lv = this->fields.lv;
        v54 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v53 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v55 = UserId;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v62.fields.currentCryptoKey = v54;
        *(_QWORD *)&v62.fields.fakeValue = v53;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v62, 0LL);
        Instance = (WebViewManager_o *)ServantSkillEntity__isUse(v50, v55, lv, v56, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v50->fields.num - 1, v57);
          Instance = (WebViewManager_o *)ServantSkillEntity__getFriendPointUpVal(v50, SkillLevel, 0LL);
          if ( (int)Instance > 0 )
            return (int)Instance;
        }
      }
      max_length = ServantSkillList->max_length;
      if ( (int)++v48 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_B5D69C(Instance, v30);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x3
  BalanceConfig_c *v13; // x0
  int32_t result; // w0
  bool v15; // vf
  __int64 v16; // x20
  __int64 v17; // x21
  int32_t v18; // w0
  __int64 v19; // x8
  int32_t v20; // w19
  int32_t v21; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6BBF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, ignoreRandomSettings, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    byte_42E6BBF = 1;
  }
  if ( !ConstantMaster__IsOtherImage(0LL) || (this->fields.status & 8) != 0 )
  {
    result = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v12);
    if ( result <= 10 )
    {
      v15 = __OFSUB__(result--, 1);
      if ( result < 0 != v15 )
      {
        v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v22.fields.currentCryptoKey = v17;
        *(_QWORD *)&v22.fields.fakeValue = v16;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
        v19 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v20 = v18;
        *(_QWORD *)&v23.fields.currentCryptoKey = v19;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        return ImageLimitCount__GetCardImageLimitCount(v20, v21, 1, 0, 0LL);
      }
    }
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
    return v13->static_fields->OtherImageLimitCount;
  }
  return result;
}


int32_t __fastcall UserServantEntity__getCollectionNo(UserServantEntity_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6B9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6B9F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v19,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return *((_DWORD *)Instance + 52);
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  ServantLimitMaster_o *v19; // x20
  int32_t v20; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6BA5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineQpMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BA5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  if ( !v19
    || (Entity = ServantLimitMaster__GetEntity(v19, v20, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity(
                     (CombineQpMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v15);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  ServantLimitMaster_o *v19; // x20
  int32_t v20; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6BB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BB0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  if ( !v19
    || (Entity = ServantLimitMaster__GetEntity(v19, v20, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v15);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_B5D69C(0LL, v3);
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
      return BasicHelper__DecryptValue_21084824(this->fields.limitCount, 0LL);
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
  __int128 v17; // q1
  WarQuestSelectionMaster_o *v18; // x20
  int64_t v19; // x0
  __int64 v20; // x21
  __int64 v21; // x22
  int64_t v22; // x19
  const MethodInfo *v23; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42E6BCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BCF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v17 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v18 = MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v26;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v25, 0LL);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v21;
  *(_QWORD *)&v27.fields.fakeValue = v20;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v18 )
LABEL_12:
    sub_B5D69C(Instance, v15);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v22,
           (int32_t)Instance,
           v23);
}


int32_t __fastcall UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BBB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
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
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t LimitCountWithRandom; // w0
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BBD & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, ignoreRandomSettings, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42E6BBD = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = LimitCountWithRandom - 1;
  if ( LimitCountWithRandom < 1 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.fakeValue = v10;
    *(_QWORD *)&v16.fields.currentCryptoKey = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  }
  else
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v11;
    *(_QWORD *)&v15.fields.fakeValue = v10;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetLimitCountByDispLimit(v12, v13, 0LL);
  }
}


void __fastcall UserServantEntity__getEquipSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        bool useUserSvtId,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  __int64 v24; // x21
  __int64 v25; // x21
  DataManager_o *UseEntity; // x0
  __int64 v27; // x22
  BalanceConfig_c *v28; // x8
  SkillInfo_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int128 v36; // q0
  __int128 v37; // q1
  __int64 v38; // x19
  __int64 i; // x23
  SkillInfo_o *v40; // x24
  __int64 v41; // x25
  __int64 v42; // x26
  int32_t v43; // w0
  __int128 v44; // q0
  int32_t v45; // w25
  int64_t v46; // x0
  int32_t lv; // w26
  int64_t v48; // x27
  int32_t v49; // w5
  ServantSkillEntity_o *v50; // x25
  int32_t skillNum; // w8
  SkillInfo_array *v52; // x25
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  unsigned __int64 v59; // x21
  BalanceConfig_c *v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  int64_t userSvtId; // [xsp+28h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68[2]; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_42E6B80 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, useUserSvtId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16, v17);
    sub_B5D5C4(&SkillInfo___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SkillInfo_TypeInfo, v21, v22, v23);
    byte_42E6B80 = 1;
  }
  memset(&v68[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AF52C4(v25);
  UseEntity = **(DataManager_o ***)(v25 + 184);
  if ( !UseEntity )
LABEL_45:
    sub_B5D69C(UseEntity, skillInfoList);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 UseEntity,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v27 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  v28 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  v29 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v28->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v29;
  sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  if ( useUserSvtId )
  {
    v37 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v36 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v68, -1LL, 0LL);
    v37 = *(_OWORD *)&v68[0].fields.currentCryptoKey;
    v36 = *(_OWORD *)&v68[0].fields.fakeValue;
  }
  *(_OWORD *)&v68[1].fields.currentCryptoKey = v37;
  *(_OWORD *)&v68[1].fields.fakeValue = v36;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v67 = v68[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v38 = 8LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v59 = v38 - 8;
    v60 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v60 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v59 >= v60->static_fields->SvtEquipSkillListMax )
      break;
    v40 = (SkillInfo_o *)sub_B5D694(SkillInfo_TypeInfo);
    SkillInfo___ctor(v40, 0LL);
    v42 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v69.fields.currentCryptoKey = v42;
    *(_QWORD *)&v69.fields.fakeValue = v41;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
    v44 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v45 = v43;
    *(_OWORD *)&v68[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v68[0].fields.fakeValue = v44;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v66 = v68[0];
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
    lv = this->fields.lv;
    v48 = v46;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_45;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   v45,
                                   (int)v38 - 7,
                                   v48,
                                   lv,
                                   v49,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0LL);
    if ( UseEntity )
    {
      if ( !v40 )
        goto LABEL_45;
      v50 = (ServantSkillEntity_o *)UseEntity;
      v40->fields.id = HIDWORD(UseEntity->fields.datalist);
      if ( !v27 )
        goto LABEL_45;
      if ( v59 >= *(unsigned int *)(v27 + 24) )
        goto LABEL_46;
      v40->fields.lv = *(_DWORD *)(v27 + 4 * v38);
      if ( v59 >= *(unsigned int *)(v27 + 24) )
        goto LABEL_46;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v40->fields.charge,
        &v40->fields.title,
        &v40->fields.explanation,
        *(_DWORD *)(v27 + 4 * v38),
        1,
        0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v50, 0LL);
      v40->fields.strengthStatus = (int)UseEntity;
      skillNum = v50->fields.skillNum;
      v40->fields.isUse = 1;
      v40->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v40 )
        goto LABEL_45;
      v40->fields.lv = -1;
    }
    v52 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_45;
    UseEntity = (DataManager_o *)sub_B5D684(v40, v52->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      v62 = sub_B5D6BC();
      sub_B5D668(v62, 0LL);
    }
    if ( v59 >= v52->max_length )
    {
LABEL_46:
      v61 = sub_B5D6C8(UseEntity);
      sub_B5D668(v61, 0LL);
    }
    *(Il2CppClass **)((char *)&v52->obj.klass + i) = (Il2CppClass *)v40;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)v52 + i),
      (System_Int32_array **)v40,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    ++v38;
  }
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServant(
        UserServantEntity_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  EventServantEntity_o *result; // x0
  __int64 v17; // x8
  EventServantEntity_o *v18; // x20
  __int64 v19; // x26
  __int64 v20; // x8
  EventServantMaster_o *v21; // x21
  int32_t v22; // w22
  __int64 v23; // x23
  __int64 v24; // x24
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42E6BAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventServantMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BAC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_20:
    sub_B5D69C(Instance, v15);
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL);
  if ( result )
  {
    v17 = *(_QWORD *)&result->fields.type;
    v18 = result;
    result = 0LL;
    if ( v17 )
    {
      if ( (int)v17 >= 1 )
      {
        v19 = 0LL;
        do
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_20;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v19 >= v18->fields.type )
          {
            v25 = sub_B5D6C8(Instance);
            sub_B5D668(v25, 0LL);
          }
          v20 = *((_QWORD *)&v18->fields.joinMessage + v19);
          if ( !v20 )
            goto LABEL_20;
          v21 = (EventServantMaster_o *)Instance;
          v22 = *(_DWORD *)(v20 + 16);
          v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v26.fields.currentCryptoKey = v24;
          *(_QWORD *)&v26.fields.fakeValue = v23;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
          if ( !v21 )
            goto LABEL_20;
          result = EventServantMaster__getEntity_31581864(v21, v22, (int32_t)Instance, 0LL);
          if ( result )
            return result;
          ++v19;
        }
        while ( (int)v19 < v18->fields.type );
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  EventServantMaster_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42E6BAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    byte_42E6BAD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (EventServantMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  if ( !v14 )
    sub_B5D69C(v15, v16);
  return EventServantMaster__getEntityServantIgnoreEnd(v14, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_21854464(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v13; // x20
  DataManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42E6BAE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, is_finishedAt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E6BAE = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v13 = EventServant;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v13->fields.eventId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  if ( !EventEntity__IsOpen((EventEntity_o *)Instance, is_finishedAt, 0LL) )
    return 0LL;
  return v13;
}


bool __fastcall UserServantEntity__getEventUpVal(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w23
  int32_t EventId; // w5
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42E6B88 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)setupInfo, (_DWORD)method, v3);
    byte_42E6B88 = 1;
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
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v10);
  EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  return UserServantEntity__getBaseEventUpVal(this, v8, v9, DispLimitCount, setupInfo, EventId, 0, v13);
}


System_Boolean_array *__fastcall UserServantEntity__getEventUpValList(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Int32_array *eventIdList; // x8
  __int64 v10; // x23
  int32_t DispLimitCount; // w22
  System_Boolean_array *v12; // x21
  unsigned __int64 v13; // x25
  signed __int64 v14; // x26
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t v17; // w23
  const MethodInfo *v18; // x7
  struct System_Int32_array *v19; // x8
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v5 = this;
  if ( (byte_42E6B8C & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)setupInfo, (_DWORD)method, v3);
    this = (UserServantEntity_o *)sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42E6B8C = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_19;
  v10 = *(_QWORD *)&eventIdList->max_length;
  if ( !v10 )
    return 0LL;
  DispLimitCount = UserServantEntity__getDispLimitCount(v5, 0, method);
  v12 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, (unsigned int)v10);
  if ( (int)v10 >= 1 )
  {
    v13 = 0LL;
    v14 = (int)v10;
    while ( 1 )
    {
      v16 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v22.fields.currentCryptoKey = v16;
      *(_QWORD *)&v22.fields.fakeValue = v15;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
      this = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      v5->fields.limitCount,
                                      0LL);
      v19 = setupInfo->fields.eventIdList;
      if ( !v19 )
        break;
      if ( v13 >= v19->max_length )
        goto LABEL_20;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v5,
                                      v17,
                                      (int32_t)this,
                                      DispLimitCount,
                                      setupInfo,
                                      v19->m_Items[v13 + 1],
                                      0,
                                      v18);
      if ( !v12 )
        break;
      if ( v13 >= v12->max_length )
      {
LABEL_20:
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      v12->m_Items[v13++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v13 >= v14 )
        return v12;
    }
LABEL_19:
    sub_B5D69C(this, setupInfo);
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_21842244(
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
  if ( (byte_42E6B8D & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_B5D5C4(
                                    &bool___TypeInfo,
                                    wearersSvtId,
                                    wearesLimitCount,
                                    *(_QWORD *)&wearesDispLimitCount);
    byte_42E6B8D = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  this = (UserServantEntity_o *)sub_B5D5DC(bool___TypeInfo, (unsigned int)v12);
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
        v18 = sub_B5D6C8(this);
        sub_B5D668(v18, 0LL);
      }
      v14->m_Items[v15++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v15 >= (int)v12 )
        return v14;
    }
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&wearersSvtId);
  }
  return v14;
}


bool __fastcall UserServantEntity__getEventUpVal_21840416(
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

  if ( (byte_42E6B89 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)setupInfo, eventId, method);
    byte_42E6B89 = 1;
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
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return UserServantEntity__getBaseEventUpVal(this, v9, v10, DispLimitCount, setupInfo, eventId, 0, v13);
}


bool __fastcall UserServantEntity__getEventUpVal_21840644(
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


bool __fastcall UserServantEntity__getEventUpVal_21840756(
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


bool __fastcall UserServantEntity__getEventUpVal_21840776(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
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
  DataManager_o *Instance; // x0
  int64_t v17; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v19; // x2
  int32_t DispLimitCount; // w0
  __int64 v21; // x24
  __int64 v22; // x25
  int32_t v23; // w23
  int32_t v24; // w24
  int32_t v25; // w25
  int32_t EventId; // w0
  const MethodInfo *v27; // x7
  __int64 v29; // x8
  unsigned __int64 v30; // x28
  UserServantEntity_o *v31; // x24
  __int64 v32; // x25
  __int64 v33; // x26
  int32_t v34; // w25
  int32_t v35; // w26
  int32_t v36; // w0
  const MethodInfo *v37; // x7
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_42E6B8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)setupInfo, (_DWORD)equipIds, method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E6B8A = 1;
  }
  if ( setupInfo )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B5D69C(Instance, v17);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v19);
    v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v23 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v22;
    *(_QWORD *)&v39.fields.fakeValue = v21;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal(this, v24, v25, v23, setupInfo, EventId, 0, v27);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    if ( equipIds )
    {
      v29 = *(_QWORD *)&equipIds->max_length;
      if ( (int)v29 >= 1 )
      {
        v30 = 0LL;
        while ( 1 )
        {
          if ( v30 >= (unsigned int)v29 )
          {
            v38 = sub_B5D6C8(Instance);
            sub_B5D668(v38, 0LL);
          }
          v17 = equipIds->m_Items[v30];
          if ( v17 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_24;
            Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          v17,
                                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Instance )
            {
              v31 = (UserServantEntity_o *)Instance;
              v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v40.fields.currentCryptoKey = v33;
              *(_QWORD *)&v40.fields.fakeValue = v32;
              v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v40, 0LL);
              v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
              v36 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal(
                                            v31,
                                            v34,
                                            v35,
                                            v23,
                                            setupInfo,
                                            v36,
                                            0,
                                            v37);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
          LODWORD(v29) = equipIds->max_length;
          if ( (__int64)++v30 >= (int)v29 )
            return 0;
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21841348(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t DispLimitCount; // w0
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w22
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t EventId; // w0
  const MethodInfo *v23; // x7
  _BOOL8 BaseEventUpVal; // x0
  __int64 v26; // x8
  unsigned __int64 i; // x27
  UserServantEntity_o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  int32_t v31; // w24
  int32_t v32; // w25
  int32_t v33; // w0
  const MethodInfo *v34; // x7
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E6B8B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)setupInfo,
      (_DWORD)equipServentEntityList,
      method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E6B8B = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v14);
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v19 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v18;
    *(_QWORD *)&v36.fields.fakeValue = v17;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v20, v21, v19, setupInfo, EventId, 0, v23);
    if ( BaseEventUpVal )
      return 1;
    if ( equipServentEntityList )
    {
      v26 = *(_QWORD *)&equipServentEntityList->max_length;
      if ( (int)v26 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v26; ++i )
        {
          if ( i >= (unsigned int)v26 )
          {
            v35 = sub_B5D6C8(BaseEventUpVal);
            sub_B5D668(v35, 0LL);
          }
          v28 = equipServentEntityList->m_Items[i];
          if ( v28 )
          {
            v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v37.fields.currentCryptoKey = v30;
            *(_QWORD *)&v37.fields.fakeValue = v29;
            v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
            v33 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v28, v31, v32, v19, setupInfo, v33, 0, v34);
            if ( BaseEventUpVal )
              return 1;
            LODWORD(v26) = equipServentEntityList->max_length;
          }
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21842536(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
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
  __int64 v21; // x23
  __int64 v22; // x24
  int32_t v23; // w23
  int32_t v24; // w24
  const MethodInfo *v25; // x2
  int32_t DispLimitCount; // w25
  EventUpValInfo_o *v27; // x26
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v37; // x2
  __int64 v38; // x8
  unsigned __int64 v39; // x24
  char v40; // w25
  int64_t v41; // x2
  EventUpValInfo_o *v42; // x27
  __int64 v43; // x22
  __int64 v44; // x23
  const MethodInfo *v45; // x2
  __int64 v47; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_42E6B8F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)eventUpVallInfo,
      (_DWORD)setupInfo,
      equipIds);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&EventUpValInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E6B8F = 1;
  }
  entity = 0LL;
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v22;
  *(_QWORD *)&v49.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v49, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v25);
  v27 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v27, setupInfo, v23, v24, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v27;
  sub_B5D560((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_B5D69C(Instance, v35);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal_21843132(this, eventUpVallInfo, v37);
  if ( equipIds )
  {
    v38 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v38 >= 1 )
    {
      v39 = 0LL;
      v40 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v39 >= (unsigned int)v38 )
        {
          v47 = sub_B5D6C8(Instance);
          sub_B5D668(v47, 0LL);
        }
        v41 = equipIds->m_Items[v39];
        if ( v41 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &entity,
                                        v41,
                                        (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_25;
            v42 = *eventUpVallInfo;
            v44 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v43 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v50.fields.currentCryptoKey = v44;
            *(_QWORD *)&v50.fields.fakeValue = v43;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50, 0LL);
            if ( !v42 )
              goto LABEL_25;
            v42->fields.equipSvtId = (int)Instance;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_25;
            Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal_21843132(entity, eventUpVallInfo, v45);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v40 = 1;
          }
        }
        LODWORD(v38) = equipIds->max_length;
        ++v39;
      }
      while ( (__int64)v39 < (int)v38 );
      LOBYTE(Instance) = v40;
    }
  }
  return (unsigned __int8)Instance & 1;
}


int32_t __fastcall UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  const MethodInfo *v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x22
  __int64 v19; // x23
  ServantLimitMaster_o *v20; // x21
  int32_t v21; // w22
  ServantLimitEntity_o *v22; // x21
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E6BC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, cnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E6BC7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v19;
  *(_QWORD *)&v25.fields.fakeValue = v18;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                this->fields.limitCount,
                                0LL);
  if ( !v20 )
    goto LABEL_16;
  v22 = ServantLimitMaster__GetEntity(v20, v21, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v22 || !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)ServantExceedMaster__TryGetEntity(
                                (ServantExceedMaster_o *)Instance,
                                &entity,
                                v22->fields.rarity,
                                cnt,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v22->fields.lvMax;
LABEL_16:
    sub_B5D69C(Instance, v16);
  }
  return UserServantEntity__getLevelMax(this, v16);
}


bool __fastcall UserServantEntity__getExpInfo(
        UserServantEntity_o *this,
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

  if ( (byte_42E6BA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, (_DWORD)exp, (_DWORD)lateExp, barExp);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E6BA1 = 1;
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
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v28) )
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


int32_t __fastcall UserServantEntity__getFigureImageLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
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

  if ( (byte_42E6BC1 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, ignoreRandomSettings, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42E6BC1 = 1;
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
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
        v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v15 = v13;
        *(_QWORD *)&v18.fields.currentCryptoKey = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        return ImageLimitCount__GetImageLimitCount(v15, v16, 0LL);
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
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int LimitCountWithRandom; // w8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BC2 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, ignoreRandomSettings, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42E6BC2 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  if ( LimitCountWithRandom > 10 )
    return LimitCountWithRandom;
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = LimitCountWithRandom - 1;
  if ( LimitCountWithRandom < 1 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.fakeValue = v10;
    *(_QWORD *)&v16.fields.currentCryptoKey = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  }
  else
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v11;
    *(_QWORD *)&v15.fields.fakeValue = v10;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetLimitCountByImageLimit_28464584(v12, v13, 0LL);
  }
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  ServantLimitMaster_o *v19; // x20
  int32_t v20; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6BCD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BCD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                this->fields.limitCount,
                                0LL);
  if ( !v19
    || (Entity = ServantLimitMaster__GetEntity(v19, v20, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v15);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
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
  int32_t v20; // w21
  int32_t FrameType_30842504; // w20
  ServantLvDetailMaster_o *v22; // x21
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E6BCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BCB = 1;
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
  *(_QWORD *)&v25.fields.currentCryptoKey = v18;
  *(_QWORD *)&v25.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                   this->fields.limitCount,
                                   0LL);
  if ( !v19
    || (FrameType_30842504 = ServantExceedMaster__GetFrameType_30842504(
                               v19,
                               v20,
                               (int32_t)Instance,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v22 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v23),
        !v22) )
  {
LABEL_11:
    sub_B5D69C(Instance, v15);
  }
  return ServantLvDetailMaster__GetFrameType(v22, (int32_t)Instance, this->fields.lv, FrameType_30842504, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x8
  int v17; // w21
  unsigned __int64 v18; // x24
  UserServantEntity_o *v19; // x22
  UserServantEntity_o *v20; // x23
  __int64 v22; // x0

  if ( (byte_42E6B85 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)equipIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E6B85 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B5D69C(Instance, v13);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal(this, v15);
  if ( !equipIds )
    return 0;
  v16 = *(_QWORD *)&equipIds->max_length;
  if ( (int)v16 < 1 )
    return 0;
  v17 = (int)Instance;
  v18 = 0LL;
  v19 = 0LL;
  do
  {
    if ( v18 >= (unsigned int)v16 )
    {
      v22 = sub_B5D6C8(Instance);
      sub_B5D668(v22, 0LL);
    }
    v13 = (const MethodInfo *)equipIds->m_Items[v18];
    if ( (__int64)v13 >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int64_t)v13,
                                    (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_19;
      v20 = (UserServantEntity_o *)Instance;
      Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v13);
      LODWORD(v16) = equipIds->max_length;
      if ( (int)Instance > v17 )
        v19 = v20;
      if ( (int)Instance > v17 )
        v17 = (int)Instance;
    }
    ++v18;
  }
  while ( (__int64)v18 < (int)v16 );
  if ( v19 )
    return UserServantEntity__getBaseFriendPointUpType(v19, v13);
  else
    return 0;
}


int32_t __fastcall UserServantEntity__getFriendPointUpVal(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v15; // x1
  int32_t v16; // w20
  __int64 v17; // x8
  unsigned __int64 i; // x22
  __int64 v20; // x0

  if ( (byte_42E6B84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)equipIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E6B84 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B5D69C(Instance, v13);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal(this, v15);
  v16 = (int)Instance;
  if ( equipIds )
  {
    v17 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v17 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v17; ++i )
      {
        if ( i >= (unsigned int)v17 )
        {
          v20 = sub_B5D6C8(Instance);
          sub_B5D668(v20, 0LL);
        }
        v13 = (const MethodInfo *)equipIds->m_Items[i];
        if ( (__int64)v13 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_15;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int64_t)v13,
                                        (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_15;
          Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v13);
          LODWORD(v17) = equipIds->max_length;
          if ( (int)Instance > v16 )
            v16 = (int)Instance;
        }
      }
    }
  }
  return v16;
}


int32_t __fastcall UserServantEntity__getFriendshipRank(UserServantEntity_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v17; // q1
  UserServantCollectionMaster_o *v18; // x20
  int64_t v19; // x0
  __int64 v20; // x21
  __int64 v21; // x22
  int64_t v22; // x19
  const MethodInfo *v23; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42E6BA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BA0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v17 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v26;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v25, 0LL);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v21;
  *(_QWORD *)&v27.fields.fakeValue = v20;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v18 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v18, v22, (int32_t)Instance, v23)) == 0LL )
LABEL_13:
    sub_B5D69C(Instance, v15);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  ServantLimitMaster_o *v19; // x20
  int32_t v20; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v22; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E6BA6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BA6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v18;
  *(_QWORD *)&v25.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                this->fields.limitCount,
                                0LL);
  if ( !v19
    || (Entity = ServantLimitMaster__GetEntity(v19, v20, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_14:
    sub_B5D69C(Instance, v15);
  }
  v22 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v22 )
    lvMax += v22->fields.addLvMax;
  return lvMax;
}


int32_t __fastcall UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BA7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BA7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return Instance->fields.nowLoadCount;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E6B7B & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B7B = 1;
  }
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
}


int32_t __fastcall UserServantEntity__getMagnification(
        UserServantEntity_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t combineMaterialId; // w21
  __int64 v17; // x19
  __int64 v18; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v5 = this;
  if ( (byte_42E6B9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineMaster___, (_DWORD)svtEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (UserServantEntity_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E6B9E = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_B5D69C(this, svtEntity);
  if ( *(&entity->fields.id + 1) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    return v5->fields.treasureDeviceLv1;
  v18 = *(_QWORD *)&v5->fields.limitCount.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v5->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v18;
  *(_QWORD *)&v20.fields.fakeValue = v17;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL) + 1;
}


int32_t __fastcall UserServantEntity__getMaxCardImageLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BC0 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42E6BC0 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v12, v13, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxCommandCardLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BBE & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42E6BBE = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v12, v13, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxDispLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BBC & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42E6BBC = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v12, v13, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxFriendIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BC4 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42E6BC4 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v12, v13, 0, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BC3 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42E6BC3 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v12, v13, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxPortraitLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42E6BC5 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42E6BC5 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v12, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantEntity__getNextUseSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **skillNameList,
        int32_t targetLv,
        int32_t targetLimitCnt,
        bool useUserSvtId,
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
  __int64 v30; // x19
  __int64 v31; // x19
  __int64 UseEntity; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v34; // x8
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
  __int128 v49; // q0
  __int128 v50; // q1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x21
  __int64 v52; // x22
  __int64 v53; // x20
  unsigned __int64 v54; // x25
  BalanceConfig_c *v55; // x0
  SkillInfo_o *v56; // x0
  __int64 v57; // x19
  __int64 v58; // x26
  int32_t v59; // w0
  __int128 v60; // q0
  int32_t v61; // w27
  int64_t v62; // x0
  int32_t lv; // w28
  int64_t v64; // x19
  System_Int32_array *v65; // x8
  System_String_array *v66; // x26
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x19
  BattleServantConfConponent_o *v74; // x0
  __int64 v75; // x19
  __int64 v76; // x27
  int32_t v77; // w0
  __int128 v78; // q0
  int32_t v79; // w27
  int64_t v80; // x0
  ServantSkillEntity_o *v81; // x0
  __int128 v82; // q0
  ServantSkillEntity_o *v83; // x26
  int64_t v84; // x0
  System_Int32_array *v85; // x8
  System_String_array *v86; // x27
  __int64 v87; // x0
  __int64 v88; // x0
  int64_t userSvtId; // [xsp+38h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+40h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+60h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_42E6B81 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)idList, (_DWORD)skillNameList, *(_QWORD *)&targetLv);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9, v10, v11);
    sub_B5D5C4(&int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21, v22, v23);
    sub_B5D5C4(&SkillInfo_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&string___TypeInfo, v27, v28, v29);
    byte_42E6B81 = 1;
  }
  memset(&v98[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v31 = **(_QWORD **)(v30 + 192);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AF52C4(v31);
  UseEntity = **(_QWORD **)(v31 + 184);
  if ( !UseEntity )
LABEL_61:
    sub_B5D69C(UseEntity, idList);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)UseEntity,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v34 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  v35 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v34->static_fields->SvtSkillListMax);
  *idList = v35;
  sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_String_array *)sub_B5D5DC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v42;
  sub_B5D560((BattleServantConfConponent_o *)skillNameList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
  if ( useUserSvtId )
  {
    v50 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v49 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v98, -1LL, 0LL);
    v50 = *(_OWORD *)&v98[0].fields.currentCryptoKey;
    v49 = *(_OWORD *)&v98[0].fields.fakeValue;
  }
  *(_OWORD *)&v98[1].fields.currentCryptoKey = v50;
  *(_OWORD *)&v98[1].fields.fakeValue = v49;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v97 = v98[1];
  p_userId = &this->fields.userId;
  v52 = 8LL;
  v53 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v97, 0LL);
  while ( 1 )
  {
    v54 = v52 - 8;
    v55 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v55 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v54 >= v55->static_fields->SvtSkillListMax )
      break;
    v56 = (SkillInfo_o *)sub_B5D694(SkillInfo_TypeInfo);
    SkillInfo___ctor(v56, 0LL);
    v58 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v57 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v99.fields.currentCryptoKey = v58;
    *(_QWORD *)&v99.fields.fakeValue = v57;
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v99, 0LL);
    v60 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v61 = v59;
    *(_OWORD *)&v98[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v98[0].fields.fakeValue = v60;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v96 = v98[0];
    v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v96, 0LL);
    lv = this->fields.lv;
    v64 = v62;
    UseEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_61;
    UseEntity = (__int64)ServantSkillMaster__getUseEntity(
                           MasterData_WarQuestSelectionMaster,
                           v61,
                           (int)v52 - 7,
                           v64,
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
      v65 = *idList;
      if ( !*idList )
        goto LABEL_61;
      if ( v54 >= v65->max_length )
        goto LABEL_62;
      *((_DWORD *)&v65->obj.klass + v52) = *(_DWORD *)(UseEntity + 28);
      v66 = *skillNameList;
      UseEntity = (__int64)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v66 )
        goto LABEL_61;
      v73 = (System_Int32_array **)UseEntity;
      if ( UseEntity )
      {
        UseEntity = sub_B5D684(UseEntity, v66->obj.klass->_1.element_class);
        if ( !UseEntity )
          goto LABEL_63;
      }
      if ( v54 >= v66->max_length )
        goto LABEL_62;
      v74 = (BattleServantConfConponent_o *)((char *)v66 + v53);
LABEL_40:
      v74->klass = (BattleServantConfConponent_c *)v73;
      sub_B5D560(v74, v73, v67, v68, v69, v70, v71, v72);
      goto LABEL_41;
    }
    v76 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v75 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v100.fields.currentCryptoKey = v76;
    *(_QWORD *)&v100.fields.fakeValue = v75;
    v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v100, 0LL);
    v78 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v79 = v77;
    *(_OWORD *)&v98[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v98[0].fields.fakeValue = v78;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v95 = v98[0];
    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v95, 0LL);
    v81 = ServantSkillMaster__getUseEntity(
            MasterData_WarQuestSelectionMaster,
            v79,
            (int)v52 - 7,
            v80,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v81 )
    {
      v82 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v83 = v81;
      *(_OWORD *)&v98[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v98[0].fields.fakeValue = v82;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v94 = v98[0];
      v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v94, 0LL);
      UseEntity = ServantSkillEntity__isUse(v83, v84, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( (UseEntity & 1) != 0 )
      {
        v85 = *idList;
        if ( !*idList )
          goto LABEL_61;
        if ( v54 >= v85->max_length )
        {
LABEL_62:
          v87 = sub_B5D6C8(UseEntity);
          sub_B5D668(v87, 0LL);
        }
        *((_DWORD *)&v85->obj.klass + v52) = v83->fields.skillId;
        v86 = *skillNameList;
        UseEntity = (__int64)ServantSkillEntity__getSkillName(v83, 0LL);
        if ( !v86 )
          goto LABEL_61;
        v73 = (System_Int32_array **)UseEntity;
        if ( UseEntity )
        {
          UseEntity = sub_B5D684(UseEntity, v86->obj.klass->_1.element_class);
          if ( !UseEntity )
          {
LABEL_63:
            v88 = sub_B5D6BC();
            sub_B5D668(v88, 0LL);
          }
        }
        if ( v54 >= v86->max_length )
          goto LABEL_62;
        v74 = (BattleServantConfConponent_o *)((char *)v86 + v53);
        goto LABEL_40;
      }
    }
LABEL_41:
    ++v52;
    v53 += 8LL;
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  void *Instance; // x0
  const MethodInfo *v61; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int128 v63; // q1
  int64_t v64; // x25
  __int64 v65; // x19
  __int64 v66; // x20
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x2
  int32_t friendshipRank; // w24
  __int64 v70; // x19
  __int64 v71; // x19
  WarQuestSelectionMaster_o *v72; // x0
  __int64 v73; // x26
  __int64 v74; // x27
  ServantPassiveSkillMaster_o *v75; // x25
  int32_t v76; // w0
  __int128 v77; // q0
  int32_t v78; // w26
  int64_t v79; // x28
  int32_t lv; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v81; // x19
  BattleServantConfConponent_o *v82; // x28
  char v83; // w23
  BalanceConfig_c *v84; // x0
  System_Int32_array *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  WarQuestSelectionMaster_o *v106; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v107; // x25
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  int v114; // w8
  void *v115; // x26
  int i; // w24
  __int64 v117; // x8
  int32_t v118; // w27
  int64_t UserId; // x28
  __int64 v120; // x19
  __int64 v121; // x20
  int32_t v122; // w4
  int32_t BuddyPoint; // w28
  __int64 v124; // x19
  __int64 v125; // x20
  int32_t v126; // w3
  __int64 v127; // x19
  __int64 v128; // x8
  unsigned __int64 v129; // x20
  System_Int32_array *v130; // x8
  int max_length; // w9
  unsigned int v132; // w10
  __int64 v133; // x27
  char *v134; // x10
  _DWORD *v135; // x10
  int v136; // t1
  System_String_array *v137; // x8
  System_String_array *v138; // x9
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
  __int64 v151; // x0
  EventServantPointRankMaster_o *v152; // [xsp+28h] [xbp-E8h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-E0h]
  System_String_array **explanationLista; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+90h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16

  if ( (byte_42E6B82 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v27, v28, v29);
    sub_B5D5C4(&DataManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v33, v34, v35);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v36, v37, v38);
    sub_B5D5C4(&int___TypeInfo, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&string___TypeInfo, v57, v58, v59);
    byte_42E6B82 = 1;
  }
  explanationLista = explanationList;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v63 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v159.fields.fakeValue = v63;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v158 = v159;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v158, 0LL);
  v66 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v161.fields.currentCryptoKey = v66;
  *(_QWORD *)&v161.fields.fakeValue = v65;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v161, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_87;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(
               MasterData_WarQuestSelectionMaster,
               v64,
               (int32_t)Instance,
               v67);
  if ( !Instance )
    goto LABEL_87;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v61);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v68);
  v70 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v70 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v71 = **(_QWORD **)(v70 + 192);
  if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
    sub_AF52C4(v71);
  Instance = **(void ***)(v71 + 184);
  if ( !Instance )
    goto LABEL_87;
  v72 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v74 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v73 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v75 = (ServantPassiveSkillMaster_o *)v72;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v162.fields.currentCryptoKey = v74;
  *(_QWORD *)&v162.fields.fakeValue = v73;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v162, 0LL);
  v77 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v78 = v76;
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v159.fields.fakeValue = v77;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v157 = v159;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v157, 0LL);
  lv = this->fields.lv;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  if ( !v75 )
    goto LABEL_87;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v75,
    idList,
    titleList,
    explanationLista,
    v78,
    v79,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v81 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  if ( !v81 )
    goto LABEL_87;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v81,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v82 = (BattleServantConfConponent_o *)explanationLista;
  if ( !Instance )
    goto LABEL_87;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  if ( *idList )
  {
    v83 = 0;
  }
  else
  {
    v84 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v84 = BalanceConfig_TypeInfo;
    }
    v85 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v84->static_fields->SvtPassiveSkillListMax);
    *idList = v85;
    sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v85, v86, v87, v88, v89, v90, v91);
    v92 = (System_String_array *)sub_B5D5DC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v92;
    sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v92, v93, v94, v95, v96, v97, v98);
    v99 = (System_Int32_array **)sub_B5D5DC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationLista = (System_String_array *)v99;
    sub_B5D560((BattleServantConfConponent_o *)explanationLista, v99, v100, v101, v102, v103, v104, v105);
    v83 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v106 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v107 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_87:
    sub_B5D69C(Instance, v61);
  v114 = *((_DWORD *)Instance + 6);
  v115 = Instance;
  if ( v114 >= 1 )
  {
    v152 = (EventServantPointRankMaster_o *)v106;
    for ( i = 0; i < v114; ++i )
    {
      if ( i >= (unsigned int)v114 )
        goto LABEL_86;
      v117 = *((_QWORD *)v115 + i + 4);
      if ( !v117 )
        goto LABEL_87;
      v118 = *(_DWORD *)(v117 + 16);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v121 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v120 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v163.fields.currentCryptoKey = v121;
      *(_QWORD *)&v163.fields.fakeValue = v120;
      v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v163, 0LL);
      Instance = Master_WarQuestSelectionMaster;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v118, v122, 0LL) )
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
      v125 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v124 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v164.fields.currentCryptoKey = v125;
      *(_QWORD *)&v164.fields.fakeValue = v124;
      v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v164, 0LL);
      Instance = v152;
      if ( !v152 )
        goto LABEL_87;
      Instance = EventServantPointRankMaster__GetEnableEntity(v152, v118, BuddyPoint, v126, 0LL);
      if ( Instance )
      {
        v127 = *((_QWORD *)Instance + 4);
        v82 = (BattleServantConfConponent_o *)explanationLista;
        if ( !v127 )
          goto LABEL_87;
        v128 = *(_QWORD *)(v127 + 24);
        if ( (int)v128 >= 1 )
        {
          v129 = 0LL;
          while ( v129 < (unsigned int)v128 )
          {
            v130 = *idList;
            if ( !*idList )
              goto LABEL_87;
            max_length = v130->max_length;
            if ( max_length >= 1 )
            {
              v61 = (const MethodInfo *)*(unsigned int *)(v127 + 4 * v129 + 32);
              v132 = 0;
              while ( 1 )
              {
                if ( v132 >= max_length )
                  goto LABEL_86;
                v133 = (int)v132;
                v134 = (char *)v130 + 4 * (int)v132;
                v136 = *((_DWORD *)v134 + 8);
                v135 = v134 + 32;
                if ( !v136 )
                  break;
                v132 = v133 + 1;
                if ( (int)v133 + 1 >= max_length )
                  goto LABEL_79;
              }
              *v135 = (_DWORD)v61;
              if ( !v107 )
                goto LABEL_87;
              Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v107,
                           (int32_t)v61,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v137 = *titleList;
              if ( !*titleList )
                goto LABEL_87;
              v138 = *explanationLista;
              if ( !*explanationLista || !Instance )
                goto LABEL_87;
              if ( (unsigned int)v133 >= v137->max_length || (unsigned int)v133 >= v138->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v137->m_Items[v133],
                &v138->m_Items[v133],
                0,
                0LL);
              v83 = 0;
            }
LABEL_79:
            LODWORD(v128) = *(_DWORD *)(v127 + 24);
            if ( (__int64)++v129 >= (int)v128 )
              goto LABEL_82;
          }
LABEL_86:
          v151 = sub_B5D6C8(Instance);
          sub_B5D668(v151, 0LL);
        }
      }
      else
      {
        v82 = (BattleServantConfConponent_o *)explanationLista;
      }
LABEL_82:
      v114 = *((_DWORD *)v115 + 6);
    }
  }
  if ( (v83 & 1) != 0 )
  {
    *idList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)idList, 0LL, v108, v109, v110, v111, v112, v113);
    *titleList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)titleList, 0LL, v139, v140, v141, v142, v143, v144);
    v82->klass = 0LL;
    sub_B5D560(v82, 0LL, v145, v146, v147, v148, v149, v150);
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

  if ( (byte_42E6B93 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      targetType,
      method);
    byte_42E6B93 = 1;
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
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return QuestRestrictionInfo__IsRestriction_34263116(
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
  int32_t v17; // w0
  __int64 v18; // x8
  int32_t v19; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42E6BB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BB8 = 1;
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
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v22.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v19 = v17;
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
  if ( !v16 || (Instance = ServantLimitMaster__GetEntity(v16, v19, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B5D69C(Instance, v12);
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getRarityIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v14; // x1
  int32_t RarityIcon; // w20
  ServantLvDetailMaster_o *v16; // x21
  const MethodInfo *v17; // x1

  if ( (byte_42E6BCC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BCC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v14),
        !MasterData_WarQuestSelectionMaster)
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       MasterData_WarQuestSelectionMaster,
                       (int32_t)Instance,
                       this->fields.exceedCount,
                       0,
                       0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v16 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v17),
        !v16) )
  {
    sub_B5D69C(Instance, v12);
  }
  return ServantLvDetailMaster__GetRarityIcon(v16, (int32_t)Instance, this->fields.lv, RarityIcon, 0LL);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
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
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6B9C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6B9C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  if ( !v19
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v21),
        !Entity) )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
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
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6B9B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6B9B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  if ( !v19
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v21),
        !Entity) )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
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
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6B9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6B9D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  if ( !v19
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v21),
        !Entity) )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
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
  __int64 v22; // x22
  __int64 v23; // x22
  ServantSkillEntity_o *UseEntity; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v26; // x8
  const MethodInfo *v27; // x2
  System_Int32_array *v28; // x23
  __int128 v29; // q0
  __int128 v30; // q1
  int64_t userSvtId; // x24
  signed __int64 v32; // x26
  __int64 v33; // x25
  __int64 v34; // x26
  int32_t v35; // w0
  __int128 v36; // q0
  int32_t v37; // w25
  int64_t v38; // x0
  int32_t lv; // w27
  int64_t v40; // x28
  unsigned __int64 v41; // x21
  BalanceConfig_c *v42; // x0
  __int64 v44; // x0
  int32_t v46; // [xsp+2Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49[2]; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v46 = dispLimitCount;
  if ( (byte_42E6B7E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, dispLimitCount, specificLimitCount, useUserSvtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7, v8, v9);
    sub_B5D5C4(&int___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20, v21);
    byte_42E6B7E = 1;
  }
  memset(&v49[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AF52C4(v23);
  UseEntity = **(ServantSkillEntity_o ***)(v23 + 184);
  if ( !UseEntity )
LABEL_39:
    sub_B5D69C(UseEntity, *(_QWORD *)&dispLimitCount);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)UseEntity,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v26 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  v28 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v26->static_fields->SvtSkillListMax);
  if ( (v46 & 0x80000000) != 0 )
  {
    v46 = UserServantEntity__getDispLimitCount(this, 0, v27);
    if ( useUserSvtId )
      goto LABEL_13;
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v49, -1LL, 0LL);
    v30 = *(_OWORD *)&v49[0].fields.currentCryptoKey;
    v29 = *(_OWORD *)&v49[0].fields.fakeValue;
    goto LABEL_19;
  }
  if ( !useUserSvtId )
    goto LABEL_15;
LABEL_13:
  v30 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  v29 = *(_OWORD *)&this->fields.id.fields.fakeValue;
LABEL_19:
  *(_OWORD *)&v49[1].fields.currentCryptoKey = v30;
  *(_OWORD *)&v49[1].fields.fakeValue = v29;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v48 = v49[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v48, 0LL);
  v32 = 0LL;
  while ( 1 )
  {
    v41 = v32;
    v42 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = BalanceConfig_TypeInfo;
    }
    if ( v32 >= v42->static_fields->SvtSkillListMax )
      return v28;
    v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v50.fields.currentCryptoKey = v34;
    *(_QWORD *)&v50.fields.fakeValue = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50, 0LL);
    v36 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v37 = v35;
    *(_OWORD *)&v49[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v49[0].fields.fakeValue = v36;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v47 = v49[0];
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v47, 0LL);
    lv = this->fields.lv;
    v40 = v38;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                          this->fields.limitCount,
                                          0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    v32 = v41 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  MasterData_WarQuestSelectionMaster,
                  v37,
                  (int)v41 + 1,
                  v40,
                  lv,
                  (int32_t)UseEntity,
                  v46,
                  -1,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    if ( UseEntity )
    {
      if ( !v28 )
        goto LABEL_39;
      if ( v41 >= v28->max_length )
      {
        v44 = sub_B5D6C8(UseEntity);
        sub_B5D668(v44, 0LL);
      }
      v28->m_Items[v41 + 1] = UseEntity->fields.skillId;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v39; // x19
  __int64 v40; // x19
  __int64 Instance; // x0
  WarQuestSelectionMaster_o *v42; // x0
  __int64 v43; // x20
  __int64 v44; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x19
  _BOOL4 IsServantEquip; // w22
  BalanceConfig_c *v47; // x0
  BalanceConfig_c *v48; // x0
  SkillInfo_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x2
  __int128 v57; // q0
  __int128 v58; // q1
  unsigned __int64 v59; // x27
  __int64 v60; // x23
  SkillInfo_o *v61; // x26
  __int64 v62; // x19
  __int64 v63; // x20
  _BOOL4 v64; // w28
  int32_t v65; // w0
  __int128 v66; // q0
  int32_t v67; // w19
  int64_t v68; // x0
  int32_t lv; // w22
  int64_t v70; // x20
  int32_t v71; // w5
  signed __int64 v72; // x25
  ServantSkillEntity_o *v73; // x19
  int32_t skillNum; // w8
  __int64 v75; // x19
  __int64 v76; // x20
  int32_t v77; // w0
  SkillInfo_array *v78; // x19
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // [xsp+28h] [xbp-128h]
  __int64 v88; // [xsp+30h] [xbp-120h]
  bool v89; // [xsp+3Ch] [xbp-114h]
  signed __int64 v90; // [xsp+40h] [xbp-110h]
  int64_t userSvtId; // [xsp+48h] [xbp-108h]
  int32_t dispLimitCounta; // [xsp+64h] [xbp-ECh]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98[2]; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  dispLimitCounta = dispLimitCount;
  if ( (byte_42E6B7F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, beforeClearQuestId, *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&SkillInfo___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&SkillInfo_TypeInfo, v36, v37, v38);
    byte_42E6B7F = 1;
  }
  memset(&v98[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v40 = **(_QWORD **)(v39 + 192);
  if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
    sub_AF52C4(v40);
  Instance = **(_QWORD **)(v40 + 184);
  if ( !Instance )
    goto LABEL_63;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  v42 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v44 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)v42;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v99.fields.currentCryptoKey = v44;
  *(_QWORD *)&v99.fields.fakeValue = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v99, 0LL);
  if ( !v45 )
    goto LABEL_63;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v45,
                        Instance,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_63;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  v88 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum > 0 )
  {
    if ( !IsServantEquip )
      goto LABEL_25;
    goto LABEL_21;
  }
  v47 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  skillListNum = v47->static_fields->SvtSkillListMax;
  if ( IsServantEquip )
  {
LABEL_21:
    v48 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
    }
    skillListNum = v48->static_fields->SvtEquipSkillListMax;
  }
LABEL_25:
  v49 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v49;
  sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
  if ( (dispLimitCounta & 0x80000000) != 0 )
  {
    dispLimitCounta = UserServantEntity__getDispLimitCount(this, 0, v56);
    if ( useUserSvtId )
      goto LABEL_27;
  }
  else if ( useUserSvtId )
  {
LABEL_27:
    v58 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v57 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    goto LABEL_33;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v98, -1LL, 0LL);
  v58 = *(_OWORD *)&v98[0].fields.currentCryptoKey;
  v57 = *(_OWORD *)&v98[0].fields.fakeValue;
LABEL_33:
  *(_OWORD *)&v98[1].fields.currentCryptoKey = v58;
  *(_OWORD *)&v98[1].fields.fakeValue = v57;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v97 = v98[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v97, 0LL);
  if ( skillListNum >= 1 )
  {
    v90 = skillListNum;
    v59 = 0LL;
    v60 = 32LL;
    v87 = v88 + 32;
    v89 = finishEvent;
    while ( 1 )
    {
      v61 = (SkillInfo_o *)sub_B5D694(SkillInfo_TypeInfo);
      SkillInfo___ctor(v61, 0LL);
      v63 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v62 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v100.fields.currentCryptoKey = v63;
      *(_QWORD *)&v100.fields.fakeValue = v62;
      v64 = IsServantEquip;
      v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v100, 0LL);
      v66 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v67 = v65;
      *(_OWORD *)&v98[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v98[0].fields.fakeValue = v66;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v96 = v98[0];
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v96, 0LL);
      lv = this->fields.lv;
      v70 = v68;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.limitCount, 0LL);
      Instance = (__int64)MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v72 = v59 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            MasterData_WarQuestSelectionMaster,
                            v67,
                            (int)v59 + 1,
                            v70,
                            lv,
                            v71,
                            dispLimitCounta,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v89,
                            0LL);
      if ( Instance )
      {
        if ( !v61 )
          break;
        v73 = (ServantSkillEntity_o *)Instance;
        v61->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v88 )
          break;
        if ( v59 >= *(unsigned int *)(v88 + 24) )
          goto LABEL_64;
        v61->fields.lv = *(_DWORD *)(v87 + 4 * v59);
        if ( v59 >= *(unsigned int *)(v88 + 24) )
          goto LABEL_64;
        IsServantEquip = v64;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v61->fields.charge,
          &v61->fields.title,
          &v61->fields.explanation,
          *(_DWORD *)(v87 + 4 * v59),
          v64,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v73, 0LL);
        v61->fields.strengthStatus = Instance;
        skillNum = v73->fields.skillNum;
        v61->fields.isUse = 1;
        v61->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v61 )
          break;
        IsServantEquip = v64;
        v61->fields.lv = -1;
        if ( !v64 )
        {
          v76 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v75 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v101.fields.currentCryptoKey = v76;
          *(_QWORD *)&v101.fields.fakeValue = v75;
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v101, 0LL);
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(
                                MasterData_WarQuestSelectionMaster,
                                v77,
                                v72,
                                0LL);
          if ( Instance )
          {
            v61->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v61->fields.title,
              &v61->fields.explanation,
              0LL);
          }
        }
      }
      v78 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_B5D684(v61, v78->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v86 = sub_B5D6BC();
        sub_B5D668(v86, 0LL);
      }
      if ( v59 >= v78->max_length )
      {
LABEL_64:
        v85 = sub_B5D6C8(Instance);
        sub_B5D668(v85, 0LL);
      }
      *(Il2CppClass **)((char *)&v78->obj.klass + v60) = (Il2CppClass *)v61;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v78 + v60),
        (System_Int32_array **)v61,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
      v60 += 8LL;
      ++v59;
      if ( v72 >= v90 )
        return;
    }
LABEL_63:
    sub_B5D69C(Instance, skillInfoList);
  }
}


int32_t __fastcall UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  __int64 v3; // x3
  BalanceConfig_c *v7; // x0

  if ( (byte_42E6B7C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, iIdx, (_DWORD)method, v3);
    byte_42E6B7C = 1;
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
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return v7->static_fields->SvtEquipSkillListMax > iIdx;
}


System_Int32_array *__fastcall UserServantEntity__getSkillLevelList(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v12; // x19
  int32_t skillLv3; // w8
  __int64 v14; // x20
  unsigned __int64 v15; // x23
  __int64 v17; // x0

  if ( (byte_42E6B7D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42E6B7D = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (BalanceConfig_c *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->SvtEquipSkillListMax);
  if ( !v9 )
    sub_B5D69C(0LL, v10);
  namespaze = (unsigned int)v9->_1.namespaze;
  v12 = (System_Int32_array *)v9;
  if ( !namespaze
    || (LODWORD(v9->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v9->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    v17 = sub_B5D6C8(v9);
    sub_B5D668(v17, 0LL);
  }
  skillLv3 = this->fields.skillLv3;
  v14 = 11LL;
  v9->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v9 = BalanceConfig_TypeInfo;
    v15 = v14 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v15 >= v9->static_fields->SvtEquipSkillListMax )
      return v12;
    if ( v15 >= v12->max_length )
      goto LABEL_18;
    *((_DWORD *)&v12->obj.klass + v14++) = 1;
  }
}


void __fastcall UserServantEntity__getStatusUpInfo(
        UserServantEntity_o *this,
        int32_t *hpUp,
        int32_t *atkUp,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  void *Instance; // x0
  __int64 v14; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitMaster_o *v18; // x22
  int32_t v19; // w0
  __int64 v20; // x8
  int32_t v21; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6BC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, (_DWORD)hpUp, (_DWORD)atkUp, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E6BC6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v17;
  *(_QWORD *)&v22.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
  v20 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v21 = v19;
  *(_QWORD *)&v23.fields.currentCryptoKey = v20;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  if ( !v18 || (Instance = ServantLimitMaster__GetEntity(v18, v21, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B5D69C(Instance, v14);
  *hpUp = *((_DWORD *)Instance + 9);
  *atkUp = *((_DWORD *)Instance + 11);
}


int32_t __fastcall UserServantEntity__getSvtClassGroupType(
        UserServantEntity_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E6BA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, classId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BA4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     classId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return *((_DWORD *)Instance + 13);
}


int32_t __fastcall UserServantEntity__getSvtClassId(UserServantEntity_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6BA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6BA2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v19,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return *((_DWORD *)Instance + 20);
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x1

  if ( (byte_42E6BCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E6BCA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v11),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B5D69C(Instance, v9);
  }
  return ServantExceedMaster__GetEntity(
           MasterData_WarQuestSelectionMaster,
           (int32_t)Instance,
           this->fields.exceedCount,
           0LL);
}


int32_t __fastcall UserServantEntity__getSvtId(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E6B7A & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B7A = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  TreasureDvcInfo_o *v32; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  int32_t FriendshipRank; // w25
  __int64 v43; // x24
  __int64 v44; // x24
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v47; // x26
  __int64 v48; // x27
  ServantTreasureDvcMaster_o *v49; // x24
  TreasureDvcInfo_o **v50; // x19
  int32_t v51; // w0
  __int128 v52; // q1
  int32_t v53; // w26
  int64_t v54; // x0
  int32_t lv; // w27
  int64_t v56; // x28
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v58; // x21
  __int64 v59; // x22
  TreasureDvcInfo_o **v60; // x28
  int32_t v61; // w0
  __int128 v62; // q0
  int32_t v63; // w21
  int64_t v64; // x0
  ServantTreasureDvcEntity_o *v65; // x21
  WarQuestSelectionMaster_o *v66; // x0
  __int64 v67; // x23
  __int64 v68; // x24
  ServantFlagMaster_o *v69; // x22
  DataManager_o *v70; // x22
  WarQuestSelectionMaster_o *v71; // x0
  __int64 v72; // x24
  __int64 v73; // x25
  ServantFlagReleaseMaster_o *v74; // x23
  WarQuestSelectionMaster_o *v75; // x0
  __int64 v76; // x23
  __int64 v77; // x24
  ServantFlagMaster_o *v78; // x20
  TreasureDvcInfo_o *v79; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v7 = dispLimitCount;
  if ( (byte_42E6B98 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantFlagMaster___,
      (_DWORD)tdInfo,
      beforeClearQuestId,
      *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, v29, v30, v31);
    byte_42E6B98 = 1;
  }
  v32 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v32, 0LL);
  *tdInfo = v32;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v39);
  if ( (v7 & 0x80000000) != 0 )
    v7 = UserServantEntity__getDispLimitCount(this, 0, v41);
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v44 = **(_QWORD **)(v43 + 192);
  if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
    sub_AF52C4(v44);
  Instance = **(DataManager_o ***)(v44 + 184);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v49 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v84.fields.currentCryptoKey = v48;
  *(_QWORD *)&v84.fields.fakeValue = v47;
  v50 = tdInfo;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v84, 0LL);
  v52 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v53 = v51;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v52;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v82 = v83;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v82, 0LL);
  lv = this->fields.lv;
  v56 = v54;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                this->fields.limitCount,
                                0LL);
  if ( !v49 )
    goto LABEL_53;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v49,
                v53,
                v56,
                lv,
                (int32_t)Instance,
                v7,
                FriendshipRank,
                beforeClearQuestId,
                0LL);
  if ( isLvOne )
  {
    v59 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v60 = v50;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v85.fields.currentCryptoKey = v59;
    *(_QWORD *)&v85.fields.fakeValue = v58;
    v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v85, 0LL);
    v62 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v63 = v61;
    *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v83.fields.fakeValue = v62;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v81 = v83;
    v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v81, 0LL);
    v65 = ServantTreasureDvcMaster__getUseEntity(v49, v63, v64, 1, 0, 0, 0, -1, 0LL);
    if ( v65 )
    {
LABEL_25:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v66 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                Instance,
                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFlagMaster___);
        v68 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v67 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v69 = (ServantFlagMaster_o *)v66;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v86.fields.currentCryptoKey = v68;
        *(_QWORD *)&v86.fields.fakeValue = v67;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v86, 0LL);
        if ( v69 )
        {
          Instance = (DataManager_o *)ServantFlagMaster__getEntity(v69, (int32_t)Instance, 1, 0LL);
          if ( *v60 )
          {
            (*v60)->fields.id = v65->fields.treasureDeviceId;
            if ( *v60 )
            {
              v70 = Instance;
              (*v60)->fields.lv = this->fields.treasureDeviceLv1;
              if ( Instance )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_53;
                v71 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
                v73 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                v72 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                v74 = (ServantFlagReleaseMaster_o *)v71;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v87.fields.currentCryptoKey = v73;
                *(_QWORD *)&v87.fields.fakeValue = v72;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v87,
                                              0LL);
                if ( !v74 )
                  goto LABEL_53;
                Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                              v74,
                                              (int32_t)Instance,
                                              *(_DWORD *)&v70->fields._DispLog,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_53;
                  v75 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                          Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFlagMaster___);
                  v77 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                  v76 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                  v78 = (ServantFlagMaster_o *)v75;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v88.fields.currentCryptoKey = v77;
                  *(_QWORD *)&v88.fields.fakeValue = v76;
                  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v88,
                                                0LL);
                  if ( !v78 )
                    goto LABEL_53;
                  Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                                v78,
                                                (int32_t)Instance,
                                                *(_DWORD *)&v70->fields._DispLog,
                                                0LL);
                  if ( (int)Instance >= 1 )
                  {
                    if ( !*v60 )
                      goto LABEL_53;
                    (*v60)->fields.id = (int)Instance;
                  }
                }
              }
              v79 = *v60;
              if ( *v60 )
              {
                Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                              v65,
                                              &v79->fields.name,
                                              &v79->fields.explanation,
                                              &v79->fields.maxLv,
                                              &v79->fields.guageCount,
                                              &v79->fields.cardId,
                                              &v79->fields.strengthStatus,
                                              &v79->fields.treasureDeviceNum,
                                              v79->fields.lv,
                                              0LL);
                v79->fields.isUse = (unsigned __int8)Instance & 1;
                if ( *v60 )
                  return (*v60)->fields.isUse;
              }
            }
          }
        }
      }
LABEL_53:
      sub_B5D69C(Instance, v40);
    }
  }
  else
  {
    v65 = UseEntity;
    v60 = v50;
    if ( UseEntity )
      goto LABEL_25;
  }
  return 0;
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_21848072(
        UserServantEntity_o *this,
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
  void *Instance; // x0
  __int64 v32; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x23
  __int64 v35; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x22
  int treasureDeviceLv1; // w8
  int64_t UserId; // x22
  const MethodInfo *v39; // x2
  int32_t DispLimitCount; // w21
  WarQuestSelectionMaster_o *v41; // x0
  __int64 v42; // x24
  __int64 v43; // x25
  UserServantCollectionMaster_o *v44; // x23
  const MethodInfo *v45; // x3
  int32_t v46; // w22
  __int64 v47; // x23
  __int64 v48; // x23
  ServantTreasureDvcMaster_o *v49; // x23
  int32_t v50; // w0
  __int128 v51; // q1
  int32_t v52; // w24
  int64_t v53; // x0
  __int64 v54; // x8
  int32_t lv; // w25
  int64_t v56; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_42E6B99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)tdLv, (_DWORD)tdMaxLv, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    byte_42E6B99 = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v35 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v35;
  *(_QWORD *)&v61.fields.fakeValue = v34;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL);
  if ( !v36 )
    goto LABEL_34;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v36,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v39);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v41 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v43 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v44 = (UserServantCollectionMaster_o *)v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v43;
  *(_QWORD *)&v62.fields.fakeValue = v42;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v62, 0LL);
  if ( !v44 )
    goto LABEL_34;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v44, UserId, (int32_t)Instance, v45);
  if ( !Instance )
    goto LABEL_34;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0LL);
  v47 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v48 = **(_QWORD **)(v47 + 192);
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AF52C4(v48);
  Instance = **(void ***)(v48 + 184);
  if ( !Instance )
    goto LABEL_34;
  v49 = (ServantTreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  v51 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v52 = v50;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v51;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v59 = v60;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v59, 0LL);
  v54 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v56 = v53;
  *(_QWORD *)&v63.fields.currentCryptoKey = v54;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
  if ( !v49 )
LABEL_34:
    sub_B5D69C(Instance, v32);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(v49, v52, v56, lv, (int32_t)Instance, DispLimitCount, v46, -1, 0LL);
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
  if ( !UserServantEntity__getTreasureDeviceInfo_21848072(this, &tdLv, &tdMaxLv, v2) )
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
  __int64 v3; // x3
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42E6B94 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    byte_42E6B94 = 1;
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
bool __fastcall UserServantEntity__getUniqueSvtRestriction_21845848(
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

  if ( (byte_42E6B95 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)partyItem,
      *(_QWORD *)&num);
    byte_42E6B95 = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_34267560(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
}


ServantSkillEntity_array *__fastcall UserServantEntity__getUseSvtEqSkillInfo(
        UserServantEntity_o *this,
        int32_t targetLv,
        int32_t targetLimitCnt,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  __int64 v26; // x1
  __int64 v27; // x23
  __int64 v28; // x23
  DataManager_o *ServantSkillList; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v31; // x24
  __int64 v32; // x25
  ServantSkillMaster_o *v33; // x23
  int datalist; // w8
  DataManager_o *v35; // x23
  unsigned int v36; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x19
  DataManager_c **v38; // x8
  ServantSkillEntity_o *v39; // x24
  __int128 v40; // q0
  int64_t v41; // x0
  int32_t lv; // w25
  __int64 v43; // x27
  __int64 v44; // x28
  int64_t v45; // x26
  int32_t v46; // w0
  __int128 v47; // q0
  int64_t v48; // x0
  __int64 v50; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // [xsp+10h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42E6BB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, targetLv, targetLimitCnt, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23, v24, v25);
    byte_42E6BB1 = 1;
  }
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v28 = **(_QWORD **)(v27 + 192);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AF52C4(v28);
  ServantSkillList = **(DataManager_o ***)(v28 + 184);
  if ( !ServantSkillList )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         ServantSkillList,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v33 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v32;
  *(_QWORD *)&v57.fields.fakeValue = v31;
  ServantSkillList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v57, 0LL);
  if ( !v33 )
    goto LABEL_34;
  ServantSkillList = (DataManager_o *)ServantSkillMaster__getServantSkillList(v33, (int32_t)ServantSkillList, 0LL);
  if ( !ServantSkillList )
    goto LABEL_34;
  datalist = (int)ServantSkillList->fields.datalist;
  v35 = ServantSkillList;
  if ( datalist >= 1 )
  {
    v36 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v36 >= datalist )
      {
        v50 = sub_B5D6C8(ServantSkillList);
        sub_B5D668(v50, 0LL);
      }
      v38 = &v35->klass + (int)v36;
      v39 = (ServantSkillEntity_o *)v38[4];
      if ( !v39 )
        break;
      ServantSkillList = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v38[4], 0, 0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v40 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v56.fields.fakeValue = v40;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v55 = v56;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v55, 0LL);
        lv = this->fields.lv;
        v44 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v43 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v45 = v41;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v44;
        *(_QWORD *)&v58.fields.fakeValue = v43;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
        ServantSkillList = (DataManager_o *)ServantSkillEntity__isUse(v39, v45, lv, v46, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v47 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v56.fields.fakeValue = v47;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v54 = v56;
          v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v54, 0LL);
          ServantSkillList = (DataManager_o *)ServantSkillEntity__isUse(
                                                v39,
                                                v48,
                                                targetLv,
                                                targetLimitCnt,
                                                -1,
                                                -1,
                                                -1,
                                                -1LL,
                                                0LL);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            ServantSkillList = (DataManager_o *)v51;
            if ( !v51 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v51,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
          }
        }
      }
      datalist = (int)v35->fields.datalist;
      if ( (int)++v36 >= datalist )
        goto LABEL_32;
    }
LABEL_34:
    sub_B5D69C(ServantSkillList, v26);
  }
LABEL_32:
  ServantSkillList = (DataManager_o *)v51;
  if ( !v51 )
    goto LABEL_34;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


UserCommandCodeEntity_o *__fastcall UserServantEntity__getUserCommandCodeEntity(
        UserServantEntity_o *this,
        int32_t index,
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v18; // q1
  UserServantCommandCodeMaster_o *v19; // x21
  int64_t v20; // x0
  __int64 v21; // x22
  __int64 v22; // x23
  int64_t v23; // x20
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-50h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E6BD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, index, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E6BD0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v18 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v19 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v27 = v28;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v27, 0LL);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v22;
  *(_QWORD *)&v30.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  if ( !v19 )
    goto LABEL_16;
  if ( UserServantCommandCodeMaster__TryGetEntity(v19, &entity, v23, (int)Instance, v24) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v25);
LABEL_16:
    sub_B5D69C(Instance, v16);
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_42E6B79 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B79 = 1;
  }
  v5 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v7, 0LL);
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_42E6B77 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B77 = 1;
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
  return v5->static_fields->enableRandomLimitCount && UserServantEntity__IsEnableOwnRandomLimitCount(this, method);
}


bool __fastcall UserServantEntity__isAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E6BB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantRarityMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BB5 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance->fields.datalist);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E6BB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantRarityMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BB3 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  return this->fields.adjustHp >= *(_DWORD *)&Instance->fields._DispLog;
}


bool __fastcall UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x21
  __int64 v27; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x20
  WarEntity_o *v29; // x20
  WarQuestSelectionMaster_o *v30; // x0
  __int128 v31; // q1
  UserServantCollectionMaster_o *v32; // x21
  int64_t v33; // x0
  __int64 v34; // x8
  int64_t v35; // x19
  const MethodInfo *v36; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-50h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42E6BC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FriendshipMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E6BC9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v27;
  *(_QWORD *)&v42.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL);
  if ( !v28 )
    goto LABEL_18;
  v29 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v28,
          (int32_t)Instance,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v30 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v31 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v32 = (UserServantCollectionMaster_o *)v30;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v31;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v39 = v40;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v39, 0LL);
  v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v35 = v33;
  *(_QWORD *)&v43.fields.currentCryptoKey = v34;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
  if ( !v32
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v32, v35, (int32_t)Instance, v36),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v29)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_18:
    sub_B5D69C(Instance, v24);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            v29->fields.eventId,
            v29->fields.lastQuestId + EntityDefinitely->fields.friendshipExceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  __int64 Rarity; // x0
  __int64 v11; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E6BC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E6BC8 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v9);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(Rarity, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t LimitCntMax; // w0
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42E6BA8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BA8 = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = LimitCntMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  return v8 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E6BB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantRarityMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BB6 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  return this->fields.adjustAtk == LODWORD(Instance->fields.lookup);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E6BB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantRarityMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BB4 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  return this->fields.adjustHp == HIDWORD(Instance->fields.datalist);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7029 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7029 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserServantEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpVal_b__51_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}