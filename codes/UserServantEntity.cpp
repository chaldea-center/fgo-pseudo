void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17017 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B17017 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_40923816(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0

  if ( (byte_4B17018 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, e, method);
    byte_4B17018 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1BCAA3C(v5, v6);
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
  *(_OWORD *)&this->fields.lv = *(_OWORD *)&e->fields.lv;
  *(_OWORD *)&this->fields.adjustAtk = *(_OWORD *)&e->fields.adjustAtk;
  *(_OWORD *)&this->fields.skillLv3 = *(_OWORD *)&e->fields.skillLv3;
  this->fields.randomLimitCount = e->fields.randomLimitCount;
  this->fields.randomLimitCountSupport = e->fields.randomLimitCountSupport;
  this->fields.limitCountSupport = e->fields.limitCountSupport;
  this->fields.createdAt = e->fields.createdAt;
}


void __fastcall UserServantEntity___ctor_40924048(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t userId; // x21
  __int64 v14; // x1
  __int128 v15; // q0
  int32_t maxLimitCount; // w21
  __int64 v17; // x1
  int32_t v18; // w20
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20[2]; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B17019 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, e, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    byte_4B17019 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1BCAA3C(v11, v12);
  userId = e->fields.userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v20, userId, 0LL);
  v15 = *(_OWORD *)&v20[0].fields.fakeValue;
  v20[1] = v20[0];
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v20[0].fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v15;
  this->fields.svtId = e->fields.svtId;
  maxLimitCount = e->fields.maxLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(maxLimitCount, 0LL);
  this->fields.limitCount = v21;
  this->fields.lv = e->fields.maxLv;
  *(int32x2_t *)&this->fields.atk = vrev64_s32(*(int32x2_t *)&e->fields.maxHp);
  *(_OWORD *)&this->fields.skillLv1 = *(_OWORD *)&e->fields.skillLv1;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v17);
  DispLimitCount = ImageLimitCount__GetDispLimitCount(v18, 0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(DispLimitCount, 0LL);
}


int64_t __fastcall UserServantEntity__CreatePrimaryKey(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4B17016 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B17016 = 1;
  }
  v4 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v6, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  __int64 v25; // x25
  __int64 v26; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x24
  Il2CppObject *v28; // x24
  const MethodInfo *v29; // x1
  int32_t *Entity; // x0
  int32_t v31; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B1705B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp, maxAjustAtk);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B1705B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v33.fields.currentCryptoKey = v26;
  *(_QWORD *)&v33.fields.fakeValue = v25;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
  if ( !v27 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v27,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_13:
    v31 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v28 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v29),
        !v28) )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v22);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                        (int32_t)Instance,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v31 = Entity[8];
  result = 1;
LABEL_14:
  *secondMaxAdjustAtk = v31;
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  __int64 v21; // x26
  __int64 v22; // x27
  ServantAppendPassiveSkillMaster_o *v23; // x25
  int32_t v24; // w0
  __int64 v25; // x1
  __int128 v26; // q0
  int32_t v27; // w26
  int64_t v28; // x0
  __int128 v29; // q1
  int64_t v30; // x27
  int64_t userSvtId; // x0
  __int64 v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B17088 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList, titleList);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    byte_4B17088 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v36.fields.currentCryptoKey = v22;
  *(_QWORD *)&v36.fields.fakeValue = v21;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
  v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v27 = v24;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
  v34 = v35;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
  v29 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v30 = v28;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v29;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v33, 0LL);
  if ( !v23 )
    sub_1BCAA3C(userSvtId, v32);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v23,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v27,
    v30,
    userSvtId,
    0LL);
}


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_40963832(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  SkillInfo_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  System_Int32_array *v19; // x8
  unsigned __int64 v20; // x21
  __int64 v21; // x23
  SkillInfo_o *v22; // x20
  SkillInfo_array *v23; // x24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x0
  System_Int32_array *v31; // [xsp+0h] [xbp-60h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B17089 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillInfo___TypeInfo, skillInfoList, method);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v6, v7);
    byte_4B17089 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v31 = 0LL;
  releaseStateList = 0LL;
  UserServantEntity__GetAppendPassiveSkillInfo(this, &idList, &titleList, &explanationList, &releaseStateList, &v31, v3);
  if ( !idList
    || (v10 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, idList->max_length),
        *skillInfoList = v10,
        sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v10, v11, v12, v13, v14, v15, v16),
        (v19 = idList) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(v8, v9);
  }
  v20 = 0LL;
  v21 = 32LL;
  while ( (__int64)v20 < (int)v19->max_length )
  {
    v22 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, v9, v17, v18);
    SkillInfo___ctor(v22, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v20 >= idList->max_length )
LABEL_20:
      sub_1BCAA44(v8, v9);
    if ( !v22 )
      goto LABEL_18;
    v22->fields.id = idList->m_Items[v20 + 1];
    if ( !v31 )
      goto LABEL_18;
    if ( v20 >= v31->max_length )
      goto LABEL_20;
    v22->fields.lv = v31->m_Items[v20 + 1];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v20 >= releaseStateList->max_length )
      goto LABEL_20;
    v22->fields.isUse = releaseStateList->m_Items[v20 + 4];
    v23 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v8 = sub_1BCA91C(v22, v23->obj.klass->_1.element_class);
    if ( !v8 )
    {
      v30 = sub_1BCAA60(0LL);
      sub_1BCA908(v30, 0LL);
    }
    if ( v20 >= v23->max_length )
      goto LABEL_20;
    v23->m_Items[v20] = v22;
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)v23 + v21), (int64_t)v22, v24, v25, v26, v27, v28, v29);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v25; // x21
  const MethodInfo *v26; // x6
  const MethodInfo *v27; // x7
  unsigned __int64 v28; // x26
  char v29; // w25
  SkillLvEntity_o *v30; // x0
  BalanceConfig_c *v31; // x8
  char v32; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v34; // x9
  __int64 v35; // x22
  unsigned __int64 v36; // x23
  SkillInfo_o *v37; // x8
  int32_t lv; // w2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B17039 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, eventUpVallInfo, questPhaseEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B17039 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v44, 0LL);
  if ( !v23 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v25 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, 0LL, v26);
  if ( idList )
  {
    v28 = 0LL;
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v28 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v28 >= idList->max_length )
LABEL_41:
        sub_1BCAA44(Instance, id);
      id = (unsigned int)idList->m_Items[v28 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v25 )
          goto LABEL_40;
        v30 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v25, id, 1, 0LL);
        if ( v30 )
        {
          if ( SkillLvEntity__GetBonusUpVal(v30, eventUpVallInfo, questPhaseEntity, 0LL) )
            v29 = 1;
        }
      }
      ++v28;
    }
  }
  else
  {
    v29 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v27);
  if ( !Entity )
LABEL_40:
    sub_1BCAA3C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v31 = BalanceConfig_TypeInfo;
  v32 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
    v31 = BalanceConfig_TypeInfo;
  }
  static_fields = v31->static_fields;
  v34 = 32LL;
  if ( (v32 & 1) != 0 )
    v34 = 44LL;
  v35 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v34);
  if ( (int)v35 >= 1 )
  {
    v36 = 0LL;
    while ( skillInfoList )
    {
      if ( v36 >= skillInfoList->max_length )
        goto LABEL_41;
      v37 = skillInfoList->m_Items[v36];
      if ( v37 )
      {
        id = (unsigned int)v37->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v37->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v25 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v25, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__GetBonusUpVal(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            questPhaseEntity,
                                            0LL);
              v29 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v35 == ++v36 )
        return v29 & 1;
    }
    goto LABEL_40;
  }
  return v29 & 1;
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w25
  int32_t v26; // w26
  const MethodInfo *v27; // x2
  int32_t DispLimitCount; // w27
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  EventUpValInfo_o *v32; // x28
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  QuestPhaseEntity_o *v41; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  unsigned __int64 v45; // x25
  char v46; // w26
  int64_t v47; // x2
  EventUpValInfo_o *v48; // x29
  void *monitor; // x21
  Il2CppClass *klass; // x24
  const MethodInfo *v51; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B17038 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, eventUpVallInfo, setupInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B17038 = 1;
  }
  entity = 0LL;
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v24;
  *(_QWORD *)&v54.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v27);
  v32 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v29, v30, v31);
  EventUpValInfo___ctor(v32, setupInfo, v25, v26, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)eventUpVallInfo, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v41 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_1BCAA3C(Instance, v40);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v41, v43);
  if ( equipIds )
  {
    v44 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v44 >= 1 )
    {
      v45 = 0LL;
      v46 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v45 >= (unsigned int)v44 )
          sub_1BCAA44(Instance, v40);
        v47 = equipIds->m_Items[v45];
        if ( v47 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_26;
          Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        v47,
                                        (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_26;
            v48 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
            *(_QWORD *)&v55.fields.currentCryptoKey = klass;
            *(_QWORD *)&v55.fields.fakeValue = monitor;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL);
            if ( !v48 )
              goto LABEL_26;
            v48->fields.equipSvtId = (int)Instance;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_26;
            Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(
                                          (UserServantEntity_o *)entity,
                                          eventUpVallInfo,
                                          v41,
                                          v51);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v46 = 1;
          }
        }
        LODWORD(v44) = equipIds->max_length;
        ++v45;
      }
      while ( (__int64)v45 < (int)v44 );
      LOBYTE(Instance) = v46;
    }
  }
  return (unsigned __int8)Instance & 1;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetCategoryIdList(
        UserServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        bool includeBeforeOverwrite,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_HashSet_int__o *v32; // x20
  __int64 v33; // x1
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x0
  __int64 v36; // x1
  __int64 id; // x2
  __int64 lv; // x3
  __int64 v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  unsigned __int64 v41; // x25
  bool v42; // w21
  SkillInfo_o *v43; // x8
  System_Collections_Generic_HashSet_int__o *v44; // x19
  _BOOL8 v45; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  __int64 count; // x1
  System_Int32_array *v50; // x20
  System_Collections_Generic_HashSet_Enumerator_T__o v52; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v54; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B1708B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList, includeBeforeOverwrite);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&int___TypeInfo, v30, v31);
    byte_4B1708B = 1;
  }
  memset(&v54, 0, sizeof(v54));
  entity = 0LL;
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       enableSkillInfoList,
                                                       includeBeforeOverwrite,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_32;
  v39 = *(_QWORD *)&enableSkillInfoList->max_length;
  v40 = v35;
  if ( (int)v39 >= 1 )
  {
    v41 = 0LL;
    v42 = includeBeforeOverwrite;
    do
    {
      if ( v41 >= (unsigned int)v39 )
        sub_1BCAA44(v35, v36);
      v43 = enableSkillInfoList->m_Items[v41];
      if ( v43 )
      {
        id = (unsigned int)v43->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v43->fields.lv;
          if ( (int)lv >= 1 )
          {
            if ( !Master_object )
              goto LABEL_32;
            SkillLvMaster__GetUniqueFuncIdsFromSkill((SkillLvMaster_o *)Master_object, &ret, id, lv, v42, 0LL);
          }
        }
      }
      LODWORD(v39) = enableSkillInfoList->max_length;
      ++v41;
    }
    while ( (__int64)v41 < (int)v39 );
  }
  v44 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v36,
                                                       id,
                                                       lv);
  System_Collections_Generic_HashSet_int____ctor(
    v44,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)ret;
  if ( !ret )
    goto LABEL_32;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v52,
    ret,
    (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v54 = v52;
  while ( 1 )
  {
    v45 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v54,
            (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v45 )
      break;
    if ( !v40 )
      sub_1BCAA3C(v45, v46);
    v47 = DataMasterBase_object__object__int___TryGetEntity(
            v40,
            &entity,
            (int32_t)v54.fields._current,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v47 )
    {
      if ( !entity )
        sub_1BCAA3C(v47, v48);
      if ( !v44 )
        sub_1BCAA3C(v47, v48);
      System_Collections_Generic_HashSet_int___Add(
        v44,
        HIDWORD(entity[4].monitor),
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v54,
    (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v44 )
LABEL_32:
    sub_1BCAA3C(v35, v36);
  count = (unsigned int)v44->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v50 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_54878432(
    v44,
    v50,
    (const MethodInfo_34560E0 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v50;
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
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x0
  DataManager_o *v14; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v21; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v23; // x0
  const MethodInfo *v24; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B1707C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, includeBeforeOverwrite, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    byte_4B1707C = 1;
  }
  skillInfoList = 0LL;
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(v3);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(v3);
  v14 = **(DataManager_o ***)(v13 + 184);
  if ( !v14 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v14,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  *(_QWORD *)&v26.fields.fakeValue = v17;
  v14 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  if ( !v19 )
LABEL_17:
    sub_1BCAA3C(v14, includeBeforeOverwrite);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v19,
                                   (int32_t)v14,
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v21);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v23, skillInfoList, includeBeforeOverwrite, v24);
      else
        return 0LL;
    }
  }
  return result;
}


EventServantEntity_o *__fastcall UserServantEntity__GetEventServantWithinCreatedAt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  EventServantMaster_o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_object__bool__o *v25; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B17057 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_EventServantEntity__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UserServantEntity__GetEventServantWithinCreatedAt_b__118_0__, v12, v13);
    byte_4B17057 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  if ( !v18 )
    sub_1BCAA3C(v19, v20);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)EventServantMaster__GetEntities(v18, v19, 0LL);
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventServantEntity__bool__TypeInfo, v22, v23, v24);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)this,
    Method_UserServantEntity__GetEventServantWithinCreatedAt_b__118_0__,
    0LL);
  return (EventServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                   Entities,
                                   (System_Func_TSource__bool__o *)v25,
                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetLimitCountWithRandom(
        UserServantEntity_o *this,
        int32_t kind,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  int32_t ChoiceLimitCount; // w0
  __int64 v13; // x1
  int32_t v14; // w19
  BalanceConfig_c *v15; // x0
  __int64 v17; // x19
  __int64 v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1701C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, ignoreRandomSettings);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v9, v10);
    byte_4B1701C = 1;
  }
  if ( UserServantEntity__get_IsRandomChoice(this, *(const MethodInfo **)&kind) && !ignoreRandomSettings )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v11);
    ChoiceLimitCount = RandomLimitCountManager__GetChoiceLimitCount(this, 0LL);
    if ( (unsigned int)kind > 4 )
      return -1;
    v14 = ChoiceLimitCount;
    if ( ((1 << kind) & 0x16) != 0 )
    {
      v15 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v19.fields.currentCryptoKey = v18;
  *(_QWORD *)&v19.fields.fakeValue = v17;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
}


void __fastcall UserServantEntity__GetPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispSvtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  void *Instance; // x0
  const MethodInfo *v48; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v50; // x1
  __int128 v51; // q0
  UserServantCollectionMaster_o *v52; // x26
  int64_t v53; // x0
  __int64 v54; // x1
  __int64 v55; // x22
  __int64 v56; // x23
  int64_t v57; // x27
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x2
  int32_t friendshipRank; // w26
  long double v61; // q0
  __int64 v62; // x0
  __int64 v63; // x0
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  __int128 v66; // q0
  ServantPassiveSkillMaster_o *v67; // x27
  int64_t v68; // x0
  __int64 v69; // x1
  int32_t lv; // w28
  __int64 v71; // x22
  __int64 v72; // x23
  int64_t v73; // x29
  Il2CppObject *v74; // x24
  PartyOrganizationUtility_o *v75; // x29
  __int64 v76; // x1
  bool v77; // w19
  BalanceConfig_c *v78; // x0
  System_Int32_array *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_String_array *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  Il2CppObject *Master_object; // x20
  Il2CppObject *v101; // x25
  Il2CppObject *v102; // x26
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int v109; // w8
  void *v110; // x27
  unsigned int v111; // w20
  __int64 v112; // x8
  int32_t v113; // w28
  int64_t UserId; // x0
  __int64 v115; // x1
  __int64 v116; // x22
  __int64 v117; // x23
  int64_t v118; // x29
  int32_t v119; // w4
  int32_t v120; // w2
  __int64 v121; // x22
  __int64 v122; // x8
  unsigned __int64 v123; // x23
  System_Int32_array *v124; // x8
  int max_length; // w9
  unsigned int v126; // w10
  __int64 v127; // x28
  char *v128; // x10
  _DWORD *v129; // x10
  int v130; // t1
  System_String_array *v131; // x8
  PartyOrganizationUtility_c *klass; // x9
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  UserEventServantPointMaster_o *v145; // [xsp+38h] [xbp-F8h]
  UserServantEntity_o *v147; // [xsp+48h] [xbp-E8h]
  System_String_array **v148; // [xsp+50h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+A0h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  if ( (byte_4B17029 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, idList, titleList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v25, v26);
    sub_1BCA7E0(&DataManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&int___TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&string___TypeInfo, v45, v46);
    byte_4B17029 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v51 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v52 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v152.fields.fakeValue = v51;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50);
  v151 = v152;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v151, 0LL);
  v56 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v57 = v53;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v54);
  *(_QWORD *)&v154.fields.currentCryptoKey = v56;
  *(_QWORD *)&v154.fields.fakeValue = v55;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v154, 0LL);
  if ( !v52 )
    goto LABEL_73;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v52, v57, (int32_t)Instance, v58);
  if ( !Instance )
    goto LABEL_73;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v48);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v59);
  v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
    v62 = sub_1C1C6BC(v61);
  v63 = *(_QWORD *)(*(_QWORD *)(v62 + 192) + 16LL);
  if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
    v63 = sub_1C1C6BC(v61);
  Instance = **(void ***)(v63 + 184);
  if ( !Instance )
    goto LABEL_73;
  v148 = explanationList;
  v64 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v66 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v67 = (ServantPassiveSkillMaster_o *)v64;
  *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v152.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v65);
  v150 = v152;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v150, 0LL);
  lv = this->fields.lv;
  v72 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v71 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v147 = this;
  v73 = v68;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v69);
  *(_QWORD *)&v155.fields.currentCryptoKey = v72;
  *(_QWORD *)&v155.fields.fakeValue = v71;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v155, 0LL);
  if ( !v67 )
    goto LABEL_73;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v67,
    idList,
    titleList,
    v148,
    dispSvtId,
    v73,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    nowTime,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v147->fields.svtId, 0LL);
  if ( !v74 )
    goto LABEL_73;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v74,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v75 = (PartyOrganizationUtility_o *)v148;
  if ( !Instance )
    goto LABEL_73;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  v77 = *idList == 0LL;
  if ( !*idList )
  {
    v78 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v76);
      v78 = BalanceConfig_TypeInfo;
    }
    v79 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v78->static_fields->SvtPassiveSkillListMax);
    *idList = v79;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v79, v80, v81, v82, v83, v84, v85);
    v86 = (System_String_array *)sub_1BCA888(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v86;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v86, v87, v88, v89, v90, v91, v92);
    v93 = sub_1BCA888(string___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *v148 = (System_String_array *)v93;
    sub_1BCA784((PartyOrganizationUtility_o *)v148, v93, v94, v95, v96, v97, v98, v99);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v76);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v101 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v102 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_73:
    sub_1BCAA3C(Instance, v48);
  v109 = *((_DWORD *)Instance + 6);
  v110 = Instance;
  if ( v109 >= 1 )
  {
    v145 = (UserEventServantPointMaster_o *)Master_object;
    v111 = 0;
    while ( 1 )
    {
      if ( v111 >= v109 )
        goto LABEL_72;
      v112 = *((_QWORD *)v110 + (int)v111 + 4);
      if ( !v112 )
        goto LABEL_73;
      v113 = *(_DWORD *)(v112 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
      UserId = NetworkManager__get_UserId(0LL);
      v117 = *(_QWORD *)&v147->fields.svtId.fields.currentCryptoKey;
      v116 = *(_QWORD *)&v147->fields.svtId.fields.fakeValue;
      v118 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v115);
      *(_QWORD *)&v156.fields.currentCryptoKey = v117;
      *(_QWORD *)&v156.fields.fakeValue = v116;
      v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v156, 0LL);
      Instance = v145;
      if ( !v145 )
        goto LABEL_73;
      Instance = (void *)UserEventServantPointMaster__TryGetEntity(v145, &entity, v118, v113, v119, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = entity;
        v75 = (PartyOrganizationUtility_o *)v148;
        if ( !entity )
          goto LABEL_73;
        Instance = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v120 = (int)Instance;
      }
      else
      {
        v75 = (PartyOrganizationUtility_o *)v148;
        v120 = 0;
      }
      if ( !v101 )
        goto LABEL_73;
      Instance = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)v101,
                   v113,
                   v120,
                   dispSvtId,
                   0LL);
      if ( Instance )
      {
        v121 = *((_QWORD *)Instance + 4);
        if ( !v121 )
          goto LABEL_73;
        v122 = *(_QWORD *)(v121 + 24);
        if ( (int)v122 >= 1 )
          break;
      }
LABEL_68:
      v109 = *((_DWORD *)v110 + 6);
      if ( (int)++v111 >= v109 )
        goto LABEL_69;
    }
    v123 = 0LL;
    while ( v123 < (unsigned int)v122 )
    {
      v124 = *idList;
      if ( !*idList )
        goto LABEL_73;
      max_length = v124->max_length;
      if ( max_length >= 1 )
      {
        v48 = (const MethodInfo *)*(unsigned int *)(v121 + 4 * v123 + 32);
        v126 = 0;
        while ( 1 )
        {
          if ( v126 >= max_length )
            goto LABEL_72;
          v127 = (int)v126;
          v128 = (char *)v124 + 4 * (int)v126;
          v130 = *((_DWORD *)v128 + 8);
          v129 = v128 + 32;
          if ( !v130 )
            break;
          v126 = v127 + 1;
          if ( (int)v127 + 1 >= max_length )
            goto LABEL_67;
        }
        *v129 = (_DWORD)v48;
        if ( !v102 )
          goto LABEL_73;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v102,
                     (int32_t)v48,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v131 = *titleList;
        if ( !*titleList )
          goto LABEL_73;
        klass = v75->klass;
        if ( !v75->klass || !Instance )
          goto LABEL_73;
        if ( (unsigned int)v127 >= v131->max_length || (unsigned int)v127 >= LODWORD(klass->_1.namespaze) )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          &v131->m_Items[v127],
          (System_String_o **)&klass->_1.byval_arg.data + v127,
          0,
          0LL);
        v77 = 0;
      }
LABEL_67:
      LODWORD(v122) = *(_DWORD *)(v121 + 24);
      if ( (__int64)++v123 >= (int)v122 )
        goto LABEL_68;
    }
LABEL_72:
    sub_1BCAA44(Instance, v48);
  }
LABEL_69:
  if ( v77 )
  {
    *idList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, 0LL, v103, v104, v105, v106, v107, v108);
    *titleList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, 0LL, v133, v134, v135, v136, v137, v138);
    v75->klass = 0LL;
    sub_1BCA784(v75, 0LL, v139, v140, v141, v142, v143, v144);
  }
}


System_Int32_array *__fastcall UserServantEntity__GetRandomLimitCountList(
        UserServantEntity_o *this,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w0
  __int64 v22; // x8
  int32_t v23; // w20
  __int64 v24; // x1
  int32_t v25; // w21
  System_Int32_array *CardSelectList; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_int__o *v30; // x19
  BalanceConfig_c *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  unsigned __int64 v34; // x21
  int32_t v35; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v3 = costumeIds;
  if ( (byte_4B17086 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, costumeIds, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    byte_4B17086 = 1;
  }
  if ( !v3 )
    v3 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, costumeIds);
  *(_QWORD *)&v40.fields.currentCryptoKey = v20;
  *(_QWORD *)&v40.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
  v22 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v41.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v23 = v21;
  *(_QWORD *)&v41.fields.currentCryptoKey = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v41, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v24);
  CardSelectList = ImageLimitCount__GetCardSelectList(v23, v25, v3, 0LL);
  v30 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !CardSelectList )
    goto LABEL_29;
  v33 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    do
    {
      if ( v34 >= (unsigned int)v33 )
        sub_1BCAA44(v31, v32);
      v35 = CardSelectList->m_Items[v34 + 1];
      if ( v35 == -1 )
      {
        v32 = 0xFFFFFFFFLL;
        if ( !v30 )
          goto LABEL_29;
      }
      else
      {
        v31 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v32);
          v31 = BalanceConfig_TypeInfo;
        }
        if ( v35 >= v31->static_fields->ServantLimitMax )
          v32 = (unsigned int)v35;
        else
          v32 = (unsigned int)(v35 + 1);
        if ( !v30 )
          goto LABEL_29;
      }
      items = v30->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v30->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v30->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v30,
          v32,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = size + 1;
        items->m_Items[size + 1] = v32;
      }
      LODWORD(v33) = CardSelectList->max_length;
      ++v34;
    }
    while ( (__int64)v34 < (int)v33 );
  }
  if ( !v30 )
LABEL_29:
    sub_1BCAA3C(v31, v32);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetSameSvtEquipNumIsLimitUp(
        UserServantEntity_o *this,
        bool isLimitMax,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  __int64 v21; // x22
  __int64 v22; // x23
  UserServantMaster_o *v23; // x21
  System_Collections_Generic_List_UserServantEntity__o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x4
  int32_t v28; // w20
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B1708F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, isLimitMax, isWarehouseServantEquip);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    byte_4B1708F = 1;
  }
  userStorageServantList = 0LL;
  memset(&v32, 0, sizeof(v32));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isLimitMax);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  v24 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                  v34,
                                                                  0LL);
  if ( !v23 )
    goto LABEL_26;
  if ( !isWarehouseServantEquip )
  {
    v28 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v23, &userStorageServantList, (int32_t)v24, 0, v27) )
      return v28;
LABEL_12:
    v24 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v28 = 0;
      v32 = v31;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v32,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v28;
          }
          if ( !isLimitMax )
            break;
          if ( !v32.fields._current )
            sub_1BCAA3C(0LL, v29);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v32.fields._current, v29) )
            goto LABEL_21;
        }
        if ( !v32.fields._current )
          sub_1BCAA3C(0LL, v29);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v32.fields._current, v29) )
LABEL_21:
          ++v28;
      }
    }
LABEL_26:
    sub_1BCAA3C(v24, v25);
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v24,
         &userStorageServantList,
         (int32_t)v24,
         v26) )
  {
    goto LABEL_12;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetSkillCategoryIdList(
        UserServantEntity_o *this,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v19; // x7
  bool IsServant; // w8
  UserServantEntity_o *v21; // x0
  const MethodInfo *v22; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B1708C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&skillListNum, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1708C = 1;
  }
  skillInfoList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&skillListNum);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v24.fields.currentCryptoKey = v14;
  *(_QWORD *)&v24.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v15,
                                   v16,
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsServant = ServantEntity__get_IsServant((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsServant )
    {
      UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, skillListNum, v19);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v21, skillInfoList, 1, v22);
      else
        return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetSkillIdList(
        UserServantEntity_o *this,
        int32_t servantId,
        int32_t dispLimitCount,
        int32_t specificLimitCount,
        bool useUserSvtId,
        int32_t beforeQuestClear,
        const MethodInfo *method)
{
  long double v7; // q0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x0
  ServantSkillEntity_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  BalanceConfig_c *v25; // x8
  ServantSkillMaster_o *v26; // x24
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v29; // x19
  __int128 v30; // q0
  int64_t userSvtId; // x26
  signed __int64 v32; // x27
  BalanceConfig_c *v33; // x0
  unsigned __int64 v34; // x23
  __int128 v35; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v37; // x25
  int64_t v38; // x0
  __int64 v39; // x1
  int32_t lv; // w28
  __int64 v41; // x19
  __int64 v42; // x27
  int64_t v43; // x29
  System_Int32_array *v45; // [xsp+38h] [xbp-F8h]
  int32_t v49; // [xsp+4Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v49 = dispLimitCount;
  if ( (byte_4B17023 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&servantId, *(_QWORD *)&dispLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10, v11);
    sub_1BCA7E0(&int___TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18, v19);
    byte_4B17023 = 1;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC(v7);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC(v7);
  UseEntity = **(ServantSkillEntity_o ***)(v21 + 184);
  if ( !UseEntity )
LABEL_33:
    sub_1BCAA3C(UseEntity, *(_QWORD *)&servantId);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v25 = BalanceConfig_TypeInfo;
  v26 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
    v25 = BalanceConfig_TypeInfo;
  }
  v45 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v25->static_fields->SvtSkillListMax);
  if ( (v49 & 0x80000000) != 0 )
    v49 = UserServantEntity__getDispLimitCount(this, 0, v28);
  v29 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v30 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v53.fields.fakeValue = v30;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v52, -1LL, 0LL);
    v53 = v52;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
  v51 = v53;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
  v32 = 0LL;
  while ( 1 )
  {
    v33 = BalanceConfig_TypeInfo;
    v34 = v32;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&servantId);
      v33 = BalanceConfig_TypeInfo;
    }
    if ( v32 >= v33->static_fields->SvtSkillListMax )
      return v45;
    v35 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v36 = *v29;
    v37 = v29;
    *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v52.fields.fakeValue = v35;
    if ( !v36->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v36, *(_QWORD *)&servantId);
    v50 = v52;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
    lv = this->fields.lv;
    v41 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v42 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    v43 = v38;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    *(_QWORD *)&v54.fields.currentCryptoKey = v41;
    *(_QWORD *)&v54.fields.fakeValue = v42;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
    if ( !v26 )
      goto LABEL_33;
    v32 = v34 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  v26,
                  servantId,
                  (int)v34 + 1,
                  v43,
                  lv,
                  (int32_t)UseEntity,
                  v49,
                  beforeQuestClear,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    v29 = v37;
    if ( UseEntity )
    {
      if ( !v45 )
        goto LABEL_33;
      if ( v34 >= v45->max_length )
        sub_1BCAA44(UseEntity, *(_QWORD *)&servantId);
      v45->m_Items[v34 + 1] = UseEntity->fields.skillId;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantEntity__GetSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool useUserSvtId,
        bool finishEvent,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  long double v31; // q0
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x19
  bool IsServantEquip; // w24
  __int64 v37; // x1
  BalanceConfig_c *v38; // x0
  BalanceConfig_c *v39; // x0
  SkillInfo_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v49; // x19
  __int128 v50; // q0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  unsigned __int64 v54; // x29
  __int64 v55; // x25
  SkillInfo_o *v56; // x27
  __int64 v57; // x1
  __int128 v58; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v60; // x26
  int64_t v61; // x0
  __int64 v62; // x1
  int32_t lv; // w19
  __int64 v64; // x21
  __int64 v65; // x28
  int64_t v66; // x23
  int32_t v67; // w5
  unsigned __int64 v68; // x28
  ServantSkillEntity_o *v69; // x19
  int32_t skillNum; // w8
  SkillInfo_array *v71; // x19
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x0
  __int64 v79; // [xsp+30h] [xbp-130h]
  __int64 v80; // [xsp+38h] [xbp-128h]
  __int64 v81; // [xsp+40h] [xbp-120h]
  bool v82; // [xsp+4Ch] [xbp-114h]
  int64_t userSvtId; // [xsp+50h] [xbp-110h]
  ServantSkillMaster_o *v87; // [xsp+70h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4B17025 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, *(_QWORD *)&dispSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v27, v28);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v29, v30);
    byte_4B17025 = 1;
  }
  *(_OWORD *)&v31 = 0uLL;
  memset(&v91[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C1C6BC(COERCE_LONG_DOUBLE((unsigned __int128)0LL));
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1C6BC(v31);
  Instance = **(_QWORD **)(v33 + 184);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v87 = (ServantSkillMaster_o *)MasterData_object;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        dispSvtId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_49;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  v80 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum <= 0 )
  {
    v38 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37);
      v38 = BalanceConfig_TypeInfo;
    }
    skillListNum = v38->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37);
      v39 = BalanceConfig_TypeInfo;
    }
    skillListNum = v39->static_fields->SvtEquipSkillListMax;
  }
  v40 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v48);
  v49 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v50 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v91[1].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v91[1].fields.fakeValue = v50;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v91, -1LL, 0LL);
    v91[1] = v91[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
  v90 = v91[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v90, 0LL);
  if ( skillListNum >= 1 )
  {
    v81 = (unsigned int)skillListNum;
    v54 = 0LL;
    v55 = 32LL;
    v79 = v80 + 32;
    v82 = finishEvent;
    while ( 1 )
    {
      v56 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, v51, v52, v53);
      SkillInfo___ctor(v56, 0LL);
      v58 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v59 = *v49;
      v60 = v49;
      *(_OWORD *)&v91[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v91[0].fields.fakeValue = v58;
      if ( !v59->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v59, v57);
      v89 = v91[0];
      v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v89, 0LL);
      lv = this->fields.lv;
      v64 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v65 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v66 = v61;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
      *(_QWORD *)&v92.fields.currentCryptoKey = v64;
      *(_QWORD *)&v92.fields.fakeValue = v65;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v92, 0LL);
      Instance = (__int64)v87;
      if ( !v87 )
        break;
      v68 = v54 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v87,
                            dispSvtId,
                            (int)v54 + 1,
                            v66,
                            lv,
                            v67,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v82,
                            0LL);
      if ( Instance )
      {
        if ( !v56 )
          break;
        v69 = (ServantSkillEntity_o *)Instance;
        v56->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v80 )
          break;
        if ( v54 >= *(unsigned int *)(v80 + 24) )
          goto LABEL_50;
        v56->fields.lv = *(_DWORD *)(v79 + 4 * v54);
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v56->fields.charge,
          &v56->fields.title,
          &v56->fields.explanation,
          *(_DWORD *)(v79 + 4 * v54),
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v69, 0LL);
        v56->fields.strengthStatus = Instance;
        skillNum = v69->fields.skillNum;
        v56->fields.isUse = 1;
        v56->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v56 )
          break;
        v56->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v87, dispSvtId, v68, 0LL);
          if ( Instance )
          {
            v56->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v56->fields.title,
              &v56->fields.explanation,
              0LL);
          }
        }
      }
      v71 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1BCA91C(v56, v71->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v78 = sub_1BCAA60(0LL);
        sub_1BCA908(v78, 0LL);
      }
      if ( v54 >= v71->max_length )
LABEL_50:
        sub_1BCAA44(Instance, skillInfoList);
      v71->m_Items[v54] = v56;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v71 + v55), (int64_t)v56, v72, v73, v74, v75, v76, v77);
      v55 += 8LL;
      ++v54;
      v49 = v60;
      if ( v81 == v68 )
        return;
    }
LABEL_49:
    sub_1BCAA3C(Instance, skillInfoList);
  }
}


System_String_o *__fastcall UserServantEntity__GetSvtName(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x22
  ServantLimitAddMaster_o *v22; // x20
  __int64 ServantLimitCountSealAfter; // x0
  __int64 v24; // x1
  bool IsOverwriteSvtDetailName; // w20
  Il2CppObject *v26; // x21
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  int32_t CardImageLimitCount; // w20
  __int64 v31; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x21
  __int64 v36; // x22
  ServantLimitImageMaster_o *v37; // x19
  int32_t v38; // w2
  int32_t v39; // w1
  Il2CppObject *v40; // x0
  Il2CppObject *v42; // x20
  __int64 v43; // x19
  __int64 v44; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B17096 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&string_TypeInfo, v16, v17);
    byte_4B17096 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v46.fields.currentCryptoKey = v21;
  *(_QWORD *)&v46.fields.fakeValue = v20;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL);
  if ( !v22 )
    goto LABEL_26;
  IsOverwriteSvtDetailName = ServantLimitAddMaster__IsOverwriteSvtDetailName(v22, ServantLimitCountSealAfter, 0LL);
  v26 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                 this->fields.svtId,
                                 0LL);
  if ( !v26 )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
          &entity,
          ServantLimitCountSealAfter,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return string_TypeInfo->static_fields->Empty;
  if ( !IsOverwriteSvtDetailName )
  {
    v42 = entity;
    v44 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v43 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    *(_QWORD *)&v48.fields.currentCryptoKey = v44;
    *(_QWORD *)&v48.fields.fakeValue = v43;
    ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
    if ( v42 )
    {
      v39 = ServantLimitCountSealAfter;
      v38 = -1;
      v40 = v42;
      return ServantEntity__getName((ServantEntity_o *)v40, v39, v38, 0LL);
    }
LABEL_26:
    sub_1BCAA3C(ServantLimitCountSealAfter, v24);
  }
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(this, 0, v28);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v29);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v36 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v37 = (ServantLimitImageMaster_o *)v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
  *(_QWORD *)&v47.fields.currentCryptoKey = v36;
  *(_QWORD *)&v47.fields.fakeValue = v35;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v47, 0LL);
  if ( !v37 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v37,
                                 ServantLimitCountSealAfter,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  if ( !entity )
    goto LABEL_26;
  v38 = ServantLimitCountSealAfter;
  v39 = -1;
  v40 = entity;
  return ServantEntity__getName((ServantEntity_o *)v40, v39, v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetTransformCount(
        UserServantEntity_o *this,
        bool includeBaseServant,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  ServantTransformMaster_o *v15; // x21
  int32_t v16; // w0
  __int64 v17; // x8
  int32_t v18; // w20
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  __int64 v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B17094 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTransformMaster___, includeBaseServant, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B17094 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, includeBaseServant);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  v17 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v18 = v16;
  *(_QWORD *)&v23.fields.currentCryptoKey = v17;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                    v23,
                                                                    0LL);
  if ( !v15
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(
                                v15,
                                v18,
                                (int32_t)TransformServantIds,
                                0LL)) == 0LL )
  {
    sub_1BCAA3C(TransformServantIds, v20);
  }
  return TransformServantIds->fields._size + includeBaseServant;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetTransformedOldSkillId(
        UserServantEntity_o *this,
        int32_t skillId,
        int32_t questId,
        int32_t transformIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  System_Int32_array *TransformedSkillIdList; // x20
  const MethodInfo *v11; // x6
  System_Int32_array *v12; // x21
  __int64 v13; // x1
  il2cpp_array_size_t v15; // w23
  BalanceConfig_c *v16; // x0

  if ( (byte_4B17095 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&skillId, *(_QWORD *)&questId);
    byte_4B17095 = 1;
  }
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, -1, v5);
  v12 = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, questId, v11);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)TransformedSkillIdList, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0LL) )
  {
    v15 = 0;
    v16 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, v13);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( (signed int)v15 >= v16->static_fields->SvtSkillListMax )
        break;
      if ( !TransformedSkillIdList )
        goto LABEL_17;
      if ( v15 >= TransformedSkillIdList->max_length )
        goto LABEL_18;
      if ( TransformedSkillIdList->m_Items[v15 + 1] == skillId )
      {
        if ( !v12 )
LABEL_17:
          sub_1BCAA3C(v16, v13);
        if ( v15 >= v12->max_length )
LABEL_18:
          sub_1BCAA44(v16, v13);
        return v12->m_Items[v15 + 1];
      }
      ++v15;
    }
  }
  return 0;
}


int32_t __fastcall UserServantEntity__GetTransformedSameSlotSkillId(
        UserServantEntity_o *this,
        int32_t skillId,
        int32_t transformCountBef,
        int32_t transformCountAft,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  System_Int32_array *TransformedSkillIdList; // x21
  const MethodInfo *v10; // x6
  System_Int32_array *v11; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  int max_length; // w8
  il2cpp_array_size_t v15; // w9

  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(this, transformCountBef, -1, -1, 1, -1, v5);
  v11 = UserServantEntity__GetTransformedSkillIdList(this, transformCountAft, -1, -1, 1, -1, v10);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !TransformedSkillIdList )
    goto LABEL_13;
  max_length = TransformedSkillIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( max_length == v15 )
      goto LABEL_12;
    if ( TransformedSkillIdList->m_Items[v15 + 1] == skillId )
      break;
    if ( max_length == ++v15 )
      return 0;
  }
  if ( !v11 )
LABEL_13:
    sub_1BCAA3C(IsNullOrEmpty, v13);
  if ( v15 >= v11->max_length )
LABEL_12:
    sub_1BCAA44(IsNullOrEmpty, v13);
  return v11->m_Items[v15 + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetTransformedServantId(
        UserServantEntity_o *this,
        int32_t transformCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  ServantTransformMaster_o *v17; // x21
  int32_t v18; // w0
  __int64 v19; // x8
  int32_t v20; // w20
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  __int64 v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B17090 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTransformMaster___, *(_QWORD *)&transformCount, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B17090 = 1;
  }
  if ( !transformCount )
    return UserServantEntity__getSvtId(this, *(const MethodInfo **)&transformCount);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&transformCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v24.fields.currentCryptoKey = v16;
  *(_QWORD *)&v24.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  v19 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v25.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v20 = v18;
  *(_QWORD *)&v25.fields.currentCryptoKey = v19;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                    v25,
                                                                    0LL);
  if ( !v17
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(
                                v17,
                                v20,
                                (int32_t)TransformServantIds,
                                0LL)) == 0LL )
  {
    sub_1BCAA3C(TransformServantIds, v22);
  }
  if ( TransformServantIds->fields._size >= transformCount )
    return System_Collections_Generic_List_int___get_Item(
             TransformServantIds,
             transformCount - 1,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__GetTransformedServantInfo(
        UserServantEntity_o *this,
        TransformServantInfo_o **transformInfo,
        int32_t transformCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  TransformServantInfo_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  Il2CppObject *Master_object; // x0
  __int64 v26; // x1
  __int64 v27; // x23
  __int64 v28; // x24
  ServantTransformMaster_o *v29; // x22
  int32_t v30; // w0
  __int64 v31; // x8
  int32_t v32; // w21
  System_Collections_Generic_List_TransformServantInfo__o *TransformServantInfo; // x0
  __int64 v34; // x1
  int32_t size; // w21
  Il2CppObject *Item; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B17091 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTransformMaster___, transformInfo, *(_QWORD *)&transformCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TransformServantInfo__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&TransformServantInfo_TypeInfo, v15, v16);
    byte_4B17091 = 1;
  }
  v17 = (TransformServantInfo_o *)sub_1BCAA2C(
                                    TransformServantInfo_TypeInfo,
                                    transformInfo,
                                    *(_QWORD *)&transformCount,
                                    method);
  TransformServantInfo___ctor(v17, 0LL);
  *transformInfo = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)transformInfo, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v44.fields.currentCryptoKey = v28;
  *(_QWORD *)&v44.fields.fakeValue = v27;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v44, 0LL);
  v31 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v32 = v30;
  *(_QWORD *)&v45.fields.currentCryptoKey = v31;
  TransformServantInfo = (System_Collections_Generic_List_TransformServantInfo__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                                      v45,
                                                                                      0LL);
  if ( !v29
    || (TransformServantInfo = ServantTransformMaster__GetTransformServantInfo(
                                 v29,
                                 v32,
                                 (int32_t)TransformServantInfo,
                                 0LL)) == 0LL )
  {
    sub_1BCAA3C(TransformServantInfo, v34);
  }
  size = TransformServantInfo->fields._size;
  if ( size > transformCount )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)TransformServantInfo,
             transformCount,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    *transformInfo = (TransformServantInfo_o *)Item;
    sub_1BCA784((PartyOrganizationUtility_o *)transformInfo, (int64_t)Item, v37, v38, v39, v40, v41, v42);
  }
  return size > transformCount;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetTransformedSkillIdList(
        UserServantEntity_o *this,
        int32_t transformIndex,
        int32_t useDispLimitCount,
        int32_t specificLimitCount,
        bool useUserSvtId,
        int32_t beforeQuestClear,
        const MethodInfo *method)
{
  int32_t v10; // w23
  __int64 TransformedServantInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  TransformServantInfo_o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v10 = useDispLimitCount;
  if ( (byte_4B17092 & 1) == 0 )
  {
    sub_1BCA7E0(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&transformIndex,
      *(_QWORD *)&useDispLimitCount);
    byte_4B17092 = 1;
  }
  transformInfo = 0LL;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformIndex,
                             *(const MethodInfo **)&specificLimitCount);
  if ( (v10 & 0x80000000) != 0 )
  {
    v16 = transformInfo;
    v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v21.fields.currentCryptoKey = v18;
    *(_QWORD *)&v21.fields.fakeValue = v17;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
    if ( !v16 )
LABEL_10:
      sub_1BCAA3C(TransformedServantInfo, v14);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v16, TransformedServantInfo, 0LL);
    v10 = TransformedServantInfo;
  }
  if ( !transformInfo )
    goto LABEL_10;
  return UserServantEntity__GetSkillIdList(
           this,
           transformInfo->fields.svtId,
           v10,
           specificLimitCount,
           useUserSvtId,
           beforeQuestClear,
           v15);
}


void __fastcall UserServantEntity__GetTransformedSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t svtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool useUserSvtId,
        bool finishEvent,
        int32_t skillListNum,
        const MethodInfo *method)
{
  UserServantEntity__GetSkillInfo(
    this,
    skillInfoList,
    svtId,
    beforeClearQuestId,
    dispLimitCount,
    useUserSvtId,
    finishEvent,
    skillListNum,
    method);
}


bool __fastcall UserServantEntity__GetTransformedTreasureDeviceInfo(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t svtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  return UserServantEntity__GetTreasureDeviceInfo(
           this,
           tdInfo,
           svtId,
           beforeClearQuestId,
           dispLimitCount,
           isLvOne,
           method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t transformCount,
        int32_t beforeClearQuestId,
        int32_t useDispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  __int64 TransformedServantInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  TransformServantInfo_o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B17093 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo, *(_QWORD *)&transformCount);
    byte_4B17093 = 1;
  }
  transformInfo = 0LL;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformCount,
                             *(const MethodInfo **)&beforeClearQuestId);
  if ( (useDispLimitCount & 0x80000000) != 0 )
  {
    v16 = transformInfo;
    v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v21.fields.currentCryptoKey = v18;
    *(_QWORD *)&v21.fields.fakeValue = v17;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
    if ( !v16 )
LABEL_10:
      sub_1BCAA3C(TransformedServantInfo, v14);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v16, TransformedServantInfo, 0LL);
    useDispLimitCount = TransformedServantInfo;
  }
  if ( !transformInfo )
    goto LABEL_10;
  return UserServantEntity__GetTreasureDeviceInfo(
           this,
           tdInfo,
           transformInfo->fields.svtId,
           beforeClearQuestId,
           useDispLimitCount,
           isLvOne,
           v15);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetTreasureDeviceCategoryIdList(
        UserServantEntity_o *this,
        bool isLvOne,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *Master_object; // x0
  __int64 v46; // x1
  __int64 v47; // x22
  __int64 v48; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x21
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v51; // x1
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v56; // x5
  long double v57; // q0
  __int64 v58; // x0
  __int64 v59; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v61; // x1
  __int64 v62; // x20
  __int64 v63; // x21
  TreasureDvcMaster_o *v64; // x19
  __int64 v65; // x1
  TreasureDvcEntity_o *v66; // x19
  TreasureDvcLvMaster_o *v67; // x20
  TreasureDvcLvEntity_o *v68; // x0
  __int64 v69; // x1
  Il2CppObject *v70; // x19
  Il2CppObject *v71; // x23
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_HashSet_int__o *v75; // x22
  const MethodInfo_3455DB8 **v76; // x27
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v81; // x24
  unsigned __int64 v82; // x29
  unsigned __int64 v83; // x9
  DataVals_o *v84; // x25
  int32_t v85; // w1
  int32_t Param; // w26
  int32_t v87; // w1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *v89; // x20
  const MethodInfo_3455DB8 **v90; // x22
  int32_t v91; // w26
  int32_t v92; // w27
  void *v93; // x8
  System_Collections_Generic_HashSet_int__o *v94; // x20
  _BOOL8 v95; // x0
  __int64 v96; // x1
  _BOOL8 v97; // x0
  __int64 v98; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v101; // [xsp+0h] [xbp-D0h]
  DataVals_o **v102; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v103; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v104; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v105; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v106; // [xsp+48h] [xbp-88h] BYREF
  TreasureDvcLvEntity_o *v107; // [xsp+50h] [xbp-80h] BYREF
  SkillLvEntity_o *v108; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4B1708D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, isLvOne, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v37, v38);
    sub_1BCA7E0(&int___TypeInfo, v39, v40);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v43, v44);
    byte_4B1708D = 1;
  }
  entity = 0LL;
  tdInfo = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v106 = 0LL;
  memset(&v105, 0, sizeof(v105));
  v104 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isLvOne);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46);
  *(_QWORD *)&v111.fields.currentCryptoKey = v48;
  *(_QWORD *)&v111.fields.fakeValue = v47;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v111, 0LL);
  if ( !v49 )
    goto LABEL_64;
  v52 = DataMasterBase_object__object__int___GetEntity(
          v49,
          (int32_t)DataValsList,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v52 )
    return 0LL;
  v54 = 0LL;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)v52, 0LL) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v53);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, DispLimitCount, -1, isLvOne, v56) )
      return 0LL;
    v58 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
      v58 = sub_1C1C6BC(v57);
    v59 = *(_QWORD *)(*(_QWORD *)(v58 + 192) + 16LL);
    if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
      v59 = sub_1C1C6BC(v57);
    DataValsList = **(DataVals_array ***)(v59 + 184);
    if ( !DataValsList )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)DataValsList,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v63 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v62 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v64 = (TreasureDvcMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
    *(_QWORD *)&v112.fields.currentCryptoKey = v63;
    *(_QWORD *)&v112.fields.fakeValue = v62;
    DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v112, 0LL);
    if ( !tdInfo || !v64 )
      goto LABEL_64;
    v66 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v64, (int32_t)DataValsList, tdInfo->fields.id, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v66 )
      goto LABEL_64;
    if ( !tdInfo )
      goto LABEL_64;
    v67 = (TreasureDvcLvMaster_o *)DataValsList;
    if ( !DataValsList )
      goto LABEL_64;
    v68 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, v66->fields.id, tdInfo->fields.lv, 0LL);
    v54 = (__int64)v68;
    if ( v68 )
    {
      if ( !v68->fields.funcId )
        return 0LL;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
      v101 = v67;
      v70 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
      v71 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
      v75 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v72,
                                                           v73,
                                                           v74);
      System_Collections_Generic_HashSet_int____ctor(
        v75,
        (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( !v75 )
        goto LABEL_64;
      v76 = (const MethodInfo_3455DB8 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
      System_Collections_Generic_HashSet_int___UnionWith(
        v75,
        *(System_Collections_Generic_IEnumerable_T__o **)(v54 + 32),
        (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      DataValsList = TreasureDvcLvEntity__getDataValsList((TreasureDvcLvEntity_o *)v54, 100, 0LL);
      v79 = *(_QWORD *)(v54 + 32);
      if ( !v79 )
        goto LABEL_64;
      m_Items = DataValsList->m_Items;
      v81 = DataValsList;
      v82 = 0LL;
      v102 = DataValsList->m_Items;
      while ( 1 )
      {
        v83 = *(unsigned int *)(v79 + 24);
        if ( (__int64)v82 >= (int)v83 )
        {
          v94 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_HashSet_int__TypeInfo,
                                                               v51,
                                                               v77,
                                                               v78);
          System_Collections_Generic_HashSet_int____ctor(
            v94,
            (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
          System_Collections_Generic_HashSet_int___GetEnumerator(
            &v103,
            v75,
            (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
          v105 = v103;
          while ( 1 )
          {
            v95 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                    &v105,
                    (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            if ( !v95 )
              break;
            if ( !v70 )
              sub_1BCAA3C(v95, v96);
            v97 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)v70,
                    &v104,
                    (int32_t)v105.fields._current,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( v97 )
            {
              if ( !v104 )
                sub_1BCAA3C(v97, v98);
              if ( !v94 )
                sub_1BCAA3C(v97, v98);
              System_Collections_Generic_HashSet_int___Add(
                v94,
                HIDWORD(v104[4].monitor),
                (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose(
            &v105,
            (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
          if ( v94 )
          {
            count = (unsigned int)v94->fields._count;
            if ( (int)count > 0 )
            {
              v54 = sub_1BCA888(int___TypeInfo, count);
              System_Collections_Generic_HashSet_int___CopyTo_54878432(
                v94,
                (System_Int32_array *)v54,
                (const MethodInfo_34560E0 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
              return (System_Int32_array *)v54;
            }
            return 0LL;
          }
LABEL_64:
          sub_1BCAA3C(DataValsList, v51);
        }
        if ( v82 >= v83 )
          goto LABEL_77;
        if ( !v70 )
          goto LABEL_64;
        DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v70,
                                           &entity,
                                           *(_DWORD *)(v79 + 4 * v82 + 32),
                                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_64;
          DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v81 )
              goto LABEL_64;
            if ( v82 >= v81->max_length )
LABEL_77:
              sub_1BCAA44(DataValsList, v51);
            if ( !entity )
              goto LABEL_64;
            v84 = m_Items[v82];
            if ( !v84 )
              goto LABEL_64;
            DataVals__SetTempType(m_Items[v82], (FunctionMaster_o *)v70, (int32_t)entity[1].monitor, 0LL);
            v85 = DataVals__isParam(v84, 26, 0LL) ? 26 : 3;
            Param = DataVals__GetParam(v84, v85, 0, 0LL);
            v87 = DataVals__isParam(v84, 27, 0LL) ? 27 : 4;
            DataValsList = (DataVals_array *)DataVals__GetParam(v84, v87, 0, 0LL);
            if ( !v71 )
              goto LABEL_64;
            DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                               (SkillLvMaster_o *)v71,
                                               &v108,
                                               Param,
                                               (int32_t)DataValsList,
                                               0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              if ( !v108 )
                goto LABEL_64;
              funcId = (System_Collections_Generic_IEnumerable_T__o *)v108->fields.funcId;
              if ( funcId )
                System_Collections_Generic_HashSet_int___UnionWith(v75, funcId, *v76);
            }
            DataValsList = (DataVals_array *)DataVals__isParam(v84, 92, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              DataValsList = (DataVals_array *)DataVals__isParam(v84, 93, 0LL);
              if ( ((unsigned __int8)DataValsList & 1) != 0 )
              {
                v89 = v75;
                v90 = v76;
                v91 = DataVals__GetParam(v84, 92, 0, 0LL);
                v92 = DataVals__GetParam(v84, 93, 0, 0LL);
                if ( DataVals__isParam(v84, 95, 0LL) )
                {
                  DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v101, &v107, v91, v92, 0LL);
                  v76 = v90;
                  v75 = v89;
                  m_Items = v102;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v93 = v107;
                    if ( !v107 )
                      goto LABEL_64;
LABEL_61:
                    v51 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v93 + 4);
                    if ( v51 )
                      System_Collections_Generic_HashSet_int___UnionWith(v75, v51, *v76);
                  }
                }
                else
                {
                  DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                     (SkillLvMaster_o *)v71,
                                                     &v106,
                                                     v91,
                                                     v92,
                                                     0LL);
                  v76 = v90;
                  v75 = v89;
                  m_Items = v102;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v93 = v106;
                    if ( !v106 )
                      goto LABEL_64;
                    goto LABEL_61;
                  }
                }
              }
            }
          }
        }
        v79 = *(_QWORD *)(v54 + 32);
        ++v82;
        if ( !v79 )
          goto LABEL_64;
      }
    }
  }
  return (System_Int32_array *)v54;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__GetTreasureDeviceInfo(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  TreasureDvcInfo_o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  int32_t FriendshipRank; // w24
  long double v38; // q0
  __int64 v39; // x0
  __int64 v40; // x0
  DataManager_o *Instance; // x0
  bool v42; // w20
  int32_t v43; // w23
  int32_t v44; // w19
  Il2CppObject *MasterData_object; // x0
  __int64 v46; // x1
  __int128 v47; // q0
  ServantTreasureDvcMaster_o *v48; // x26
  int64_t v49; // x0
  __int64 v50; // x1
  int32_t lv; // w27
  __int64 v52; // x22
  __int64 v53; // x29
  int64_t v54; // x28
  int32_t v55; // w29
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v57; // x1
  __int128 v58; // q0
  TreasureDvcInfo_o **v59; // x19
  int64_t v60; // x0
  ServantTreasureDvcEntity_o *v61; // x23
  TreasureDvcInfo_o *v62; // x8
  DataManager_o *v63; // x22
  TreasureDvcInfo_o *v64; // x20
  TreasureDvcInfo_o **v66; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4B17040 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFlagMaster___, tdInfo, *(_QWORD *)&dispSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, v25, v26);
    byte_4B17040 = 1;
  }
  v27 = (TreasureDvcInfo_o *)sub_1BCAA2C(
                               TreasureDvcInfo_TypeInfo,
                               tdInfo,
                               *(_QWORD *)&dispSvtId,
                               *(_QWORD *)&beforeClearQuestId);
  TreasureDvcInfo___ctor(v27, 0LL);
  *tdInfo = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v34);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v36);
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1C1C6BC(v38);
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C1C6BC(v38);
  Instance = **(DataManager_o ***)(v40 + 184);
  if ( !Instance )
    goto LABEL_38;
  v66 = tdInfo;
  v42 = isLvOne;
  v43 = dispSvtId;
  v44 = beforeClearQuestId;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v47 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v48 = (ServantTreasureDvcMaster_o *)MasterData_object;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v47;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
  v68 = v69;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
  lv = this->fields.lv;
  v52 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v53 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v54 = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
  *(_QWORD *)&v70.fields.currentCryptoKey = v52;
  *(_QWORD *)&v70.fields.fakeValue = v53;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
  if ( !v48 )
    goto LABEL_38;
  v55 = v43;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v48,
                v43,
                v54,
                lv,
                (int32_t)Instance,
                dispLimitCount,
                FriendshipRank,
                v44,
                0LL);
  if ( v42 )
  {
    v58 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v59 = v66;
    *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v69.fields.fakeValue = v58;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v57);
    v67 = v69;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v67, 0LL);
    UseEntity = ServantTreasureDvcMaster__getUseEntity(v48, v43, v60, 1, 0, 0, 0, -1, 0LL);
  }
  else
  {
    v59 = v66;
  }
  v61 = UseEntity;
  if ( UseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, v55, 1, 0LL);
        v62 = *v59;
        if ( *v59 )
        {
          v63 = Instance;
          v62->fields.id = v61->fields.treasureDeviceId;
          v62->fields.lv = this->fields.treasureDeviceLv1;
          if ( Instance )
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                          (ServantFlagReleaseMaster_o *)Instance,
                                          v55,
                                          *((_DWORD *)&v63->fields.UnityEngine_Behaviour_Fields + 1),
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                            (ServantFlagMaster_o *)Instance,
                                            v55,
                                            *((_DWORD *)&v63->fields.UnityEngine_Behaviour_Fields + 1),
                                            0LL);
              if ( (int)Instance >= 1 )
              {
                if ( !*v59 )
                  goto LABEL_38;
                (*v59)->fields.id = (int)Instance;
              }
            }
          }
          v64 = *v59;
          if ( *v59 )
          {
            Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                          v61,
                                          &v64->fields.name,
                                          &v64->fields.explanation,
                                          &v64->fields.maxLv,
                                          &v64->fields.guageCount,
                                          &v64->fields.cardId,
                                          &v64->fields.strengthStatus,
                                          &v64->fields.treasureDeviceNum,
                                          v64->fields.lv,
                                          0LL);
            v64->fields.isUse = (unsigned __int8)Instance & 1;
            if ( *v59 )
              return (*v59)->fields.isUse;
          }
        }
      }
    }
LABEL_38:
    sub_1BCAA3C(Instance, v35);
  }
  return 0;
}


UserServantCommandCardEntity_o *__fastcall UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x0
  DataManager_o *v13; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  __int128 v16; // q0
  UserServantCommandCardMaster_o *v17; // x20
  int64_t v18; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x22
  int64_t v22; // x19
  const MethodInfo *v23; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B1707A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9, v10);
    byte_4B1707A = 1;
  }
  entity = 0LL;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v3);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(v3);
  v13 = **(DataManager_o ***)(v12 + 184);
  if ( !v13 )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        v13,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v16 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v17 = (UserServantCommandCardMaster_o *)MasterData_object;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
  v25 = v26;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v25, 0LL);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v28.fields.currentCryptoKey = v21;
  *(_QWORD *)&v28.fields.fakeValue = v20;
  v13 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
  if ( !v17 )
LABEL_14:
    sub_1BCAA3C(v13, method);
  UserServantCommandCardMaster__TryGetEntity(v17, &entity, v22, (int)v13, v23);
  return entity;
}


bool __fastcall UserServantEntity__HasStatus(UserServantEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool __fastcall UserServantEntity__HasTransform(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x22
  ServantTransformMaster_o *v12; // x20
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w19
  __int64 v16; // x0
  __int64 v17; // x1
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1701B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTransformMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B1701B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  v14 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v21.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v16, v17);
  return ServantTransformMaster__TryGetEntity(v12, &entity, v15, v16, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1707F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1707F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool __fastcall UserServantEntity__IsCombineExp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B17062 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17062 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1704B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1704B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCondJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 6) & 1;
}


bool __fastcall UserServantEntity__IsEnableOwnRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B17080 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    byte_4B17080 = 1;
  }
  v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL) )
  {
    v10 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL) == 1;
  }
  else
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8);
    return OptionManager__GetRandomLimitCountOwn(0LL);
  }
}


bool __fastcall UserServantEntity__IsEnableSupportRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B17082 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    byte_4B17082 = 1;
  }
  v7 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL) )
  {
    v10 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL) == 1;
  }
  else
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8);
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
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0LL;
  UserServantEntity__getTreasureDeviceInfo_40943792(this, &tdMaxLv[1], tdMaxLv, v3);
  return tdMaxLv[0] < tdMaxLv[1] + targetLv;
}


bool __fastcall UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  __int64 v15; // x1
  __int128 v16; // q1
  int64_t v17; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+60h] [xbp-40h]

  if ( (byte_4B17087 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCombineExpMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B17087 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_14;
  ExchangeSvtCombineExpCampaign = EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                    (EventCampaignMaster_o *)Instance,
                                    0LL);
  if ( !ExchangeSvtCombineExpCampaign )
    return (char)ExchangeSvtCombineExpCampaign;
  if ( !ExchangeSvtCombineExpCampaign->fields._size )
  {
    LOBYTE(ExchangeSvtCombineExpCampaign) = 0;
    return (char)ExchangeSvtCombineExpCampaign;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(Instance, v13);
  }
  UserCombineExpMaster__GetUserSvtId(&v21, (UserCombineExpMaster_o *)Instance, 0LL);
  v22 = v21;
  v16 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
  v20 = v21;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v20, 0LL);
  v19 = v22;
  LOBYTE(ExchangeSvtCombineExpCampaign) = v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                   &v19,
                                                   0LL);
  return (char)ExchangeSvtCombineExpCampaign;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1707D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1707D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B17058 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17058 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1707E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1707E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1

  if ( (byte_4B17053 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B17053 = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4);
  return TutorialFlag__Get_38402052(126, 0LL);
}


bool __fastcall UserServantEntity__IsLock(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool __fastcall UserServantEntity__IsMaterialTd(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1708A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1708A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
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

  if ( (byte_4B1707B & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&battleVoice, method);
    byte_4B1707B = 1;
  }
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&battleVoice);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL) != battleVoice;
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
        int32_t ownSettingParam,
        int32_t friendFollowSettingParam,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B17085 & 1) == 0 )
  {
    sub_1BCA7E0(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&ownSettingParam,
      *(_QWORD *)&friendFollowSettingParam);
    byte_4B17085 = 1;
  }
  v8 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&ownSettingParam);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL) != ownSettingParam )
    return 1;
  v11 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL) != friendFollowSettingParam;
}


bool __fastcall UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t UserId; // x0
  __int64 v9; // x1
  __int128 v10; // q0
  int64_t v11; // x20
  __int64 v12; // x1
  __int128 v13; // q0
  __int64 v14; // x1
  int64_t v15; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-40h]

  if ( (byte_4B17051 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v6, v7);
    byte_4B17051 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  v10 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v11 = UserId;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
  v19 = v20;
  if ( v11 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v19, 0LL) )
  {
    v13 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    v18 = v20;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v18, 0LL);
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v14);
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
      sub_1BCAA3C(0LL, v6);
    LOBYTE(EventServant) = EventServantEntity__IsProtectedDuringEvent(v5, 0LL);
  }
  return (char)EventServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsSameSvtEquipToLimitMaxNum(
        UserServantEntity_o *this,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  BalanceConfig_c *v21; // x0
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t ServantLimitMax; // w24
  __int64 v25; // x1
  int v26; // w24
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  __int64 v29; // x22
  __int64 v30; // x23
  UserServantMaster_o *v31; // x21
  System_Collections_Generic_List_UserServantEntity__o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x4
  int v36; // w21
  bool EntityListBySvtId; // w0
  UserServantEntity_Fields *p_fields; // x22
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x19
  Il2CppObject v43; // q0
  int64_t v44; // x0
  __int128 v45; // q0
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  int32_t LimitCount; // w20
  BalanceConfig_c *v49; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4B1708E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isWarehouseServantEquip, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    byte_4B1708E = 1;
  }
  v21 = BalanceConfig_TypeInfo;
  userStorageServantList = 0LL;
  memset(&v53, 0, sizeof(v53));
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWarehouseServantEquip);
    v21 = BalanceConfig_TypeInfo;
  }
  v23 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  ServantLimitMax = v21->static_fields->ServantLimitMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isWarehouseServantEquip);
  *(_QWORD *)&v55.fields.currentCryptoKey = v23;
  *(_QWORD *)&v55.fields.fakeValue = v22;
  v26 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL);
  if ( !v26 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v31 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
  *(_QWORD *)&v56.fields.currentCryptoKey = v30;
  *(_QWORD *)&v56.fields.fakeValue = v29;
  v32 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                  v56,
                                                                  0LL);
  if ( !v31 )
    goto LABEL_33;
  if ( !isWarehouseServantEquip )
  {
    EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(v31, &userStorageServantList, (int32_t)v32, 0, v35);
    v36 = 0;
    if ( !EntityListBySvtId )
      return v26 <= v36;
    goto LABEL_18;
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v32,
         &userStorageServantList,
         (int32_t)v32,
         v34) )
  {
LABEL_18:
    v32 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v52,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      *(_OWORD *)&v53.fields._list = *(_OWORD *)&v52.fields.currentCryptoKey;
      v53.fields._current = (Il2CppObject *)v52.fields.fakeValue;
      v36 = 0;
      p_fields = &this->fields;
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v53,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v40 )
          break;
        current = v53.fields._current;
        if ( !v53.fields._current )
          sub_1BCAA3C(v40, v41);
        v43 = v53.fields._current[2];
        *(Il2CppObject *)&v52.fields.currentCryptoKey = v53.fields._current[1];
        *(Il2CppObject *)&v52.fields.fakeValue = v43;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
        v51 = v52;
        v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
        v45 = *(_OWORD *)&p_fields->id.fields.fakeValue;
        *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&v50.fields.fakeValue = v45;
        if ( v44 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v46);
          v49 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47);
            v49 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v49->static_fields->ServantLimitMax )
            v36 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v47) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v53,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v26 <= v36;
    }
LABEL_33:
    sub_1BCAA3C(v32, v33);
  }
  v36 = 0;
  return v26 <= v36;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B17084 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B17084 = 1;
  }
  v5 = *(_QWORD *)&this->fields.limitCountSupport.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B17063 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17063 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
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

  if ( (byte_4B1703D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, method);
    byte_4B1703D = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  return QuestRestrictionInfo__IsUniqueIndividuality_41176740(questRestrictionInfo, v7, v8, DispLimitCount, 0LL, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_40942144(
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
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1703E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, partyItem);
    byte_4B1703E = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_41178148(
           questRestrictionInfo,
           v13,
           v14,
           DispLimitCount,
           partyItem,
           num,
           partyIndex,
           0LL,
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
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B17081 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B17081 = 1;
  }
  v5 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


void __fastcall UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int128 v6; // q0
  __int64 v7; // x1
  int64_t v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4B17052 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v4, v5);
    byte_4B17052 = 1;
  }
  v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v9 = v10;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v7);
  UserServantNewManager__SetOld(v8, 0LL);
}


int32_t __fastcall UserServantEntity__SupportRandomSettingSelectedButtonIndex(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  int32_t v6; // w0
  int32_t v7; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B17083 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B17083 = 1;
  }
  v5 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
  if ( v6 == 1 )
    v7 = 4;
  else
    v7 = 3;
  if ( v6 == 2 )
    return 5;
  else
    return v7;
}


bool __fastcall UserServantEntity___GetEventServantWithinCreatedAt_b__118_0(
        UserServantEntity_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  int64_t createdAt; // x8

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  createdAt = this->fields.createdAt;
  return x->fields.startedAt <= createdAt && createdAt <= x->fields.endedAt;
}


bool __fastcall UserServantEntity__checkID(UserServantEntity_o *this, int64_t inId, const MethodInfo *method)
{
  __int128 v5; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-50h]

  if ( (byte_4B17042 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, inId, method);
    byte_4B17042 = 1;
  }
  v5 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, inId);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL) == inId;
}


int32_t __fastcall UserServantEntity__checkTreasureDeviceLevelUp(
        UserServantEntity_o *this,
        int32_t targetLv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0LL;
  UserServantEntity__getTreasureDeviceInfo_40943792(this, &tdMaxLv[1], tdMaxLv, v3);
  if ( tdMaxLv[1] + targetLv >= tdMaxLv[0] )
    return tdMaxLv[0];
  else
    return tdMaxLv[1] + targetLv;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getAddTotalExp(
        UserServantEntity_o *this,
        int32_t materialId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B17077 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineMaster___, *(_QWORD *)&materialId, method);
    sub_1BCA7E0(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B17077 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 2 )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v16; // x1
  int32_t klass_high; // w23
  _DWORD *v18; // x22
  BalanceConfig_c *v19; // x0
  int32_t adjustAtk; // w8
  int32_t v21; // w20

  if ( (byte_4B17060 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, hpData, atkData);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantRarityMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B17060 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v16),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v14);
  }
  klass_high = HIDWORD(Instance[1].klass);
  v18 = Instance;
  v19 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= klass_high )
    klass_high = v18[7];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
    v19 = BalanceConfig_TypeInfo;
  }
  *hpData = v19->static_fields->StatusUpAdjustHp * klass_high;
  adjustAtk = this->fields.adjustAtk;
  v21 = v18[6];
  if ( adjustAtk >= v21 )
  {
    v21 = v18[8];
    if ( !v19->_2.cctor_finished )
    {
LABEL_14:
      j_il2cpp_runtime_class_init_0(v19, v14);
      v19 = BalanceConfig_TypeInfo;
    }
  }
  else if ( !v19->_2.cctor_finished )
  {
    goto LABEL_14;
  }
  *atkData = v19->static_fields->StatusUpAdjustAtk * v21;
}


SvtUseSkillData_o *__fastcall UserServantEntity__getAppendSkillInfo(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x22
  ServantAppendPassiveSkillMaster_o *v22; // x19
  unsigned __int64 v23; // x0
  Il2CppClass *klass; // x1
  SvtUseSkillData_o *SkillData; // x19
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  __int128 v28; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  struct System_Int32_array *svtSkillNumsList; // x8
  int64_t v31; // x0
  struct System_Int32_array **p_svtSkillLvList; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  __int128 v40; // q1
  UserServantAppendPassiveSkillMaster_o *v41; // x22
  int64_t v42; // x0
  __int64 v43; // x8
  int64_t v44; // x20
  const MethodInfo *v45; // x4
  struct System_Int32_array *unlockNums; // x16
  __int64 v47; // x8
  struct System_Int32_array *v48; // x9
  unsigned __int64 max_length; // x10
  Il2CppObject *v50; // x12
  struct System_Int32_array *v51; // x14
  unsigned __int64 v52; // x11
  int32_t *v53; // x16
  __int64 v54; // x0
  __int64 v55; // x2
  int32_t *v56; // x3
  unsigned __int64 namespaze_low; // x2
  __int64 v58; // x5
  _DWORD *monitor; // x7
  __int64 v60; // x6
  struct System_Int32_array *v61; // x8
  __int64 v62; // x10
  struct System_Int32_array *v63; // x9
  unsigned __int64 v64; // x8
  __int64 v65; // x11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-60h]
  UserServantAppendPassiveSkillEntity_o *v70; // [xsp+68h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4B1702A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v10,
      v11);
    sub_1BCA7E0(&int___TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17);
    byte_4B1702A = 1;
  }
  entity = 0LL;
  v70 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v72.fields.currentCryptoKey = v21;
  *(_QWORD *)&v72.fields.fakeValue = v20;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v72, 0LL);
  if ( !v22 )
    goto LABEL_50;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v22, v23, 0LL);
  v26 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v28 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)v26;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
  v68 = v69;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
  if ( !v29 )
    goto LABEL_50;
  v23 = DataMasterBase_object__object__long___TryGetEntity(
          v29,
          &entity,
          v23,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_50;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_50;
  v31 = sub_1BCA888(int___TypeInfo, svtSkillNumsList->max_length);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v31;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_1BCA784((PartyOrganizationUtility_o *)&SkillData->fields.svtSkillLvList, v31, v33, v34, v35, v36, v37, v38);
  v39 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v40 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v41 = (UserServantAppendPassiveSkillMaster_o *)v39;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v40;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v67, 0LL);
  v43 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v73.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v44 = v42;
  *(_QWORD *)&v73.fields.currentCryptoKey = v43;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73, 0LL);
  if ( !v41 )
    goto LABEL_50;
  v23 = UserServantAppendPassiveSkillMaster__TryGetEntity(v41, &v70, v44, v23, v45);
  if ( (v23 & 1) == 0 )
    goto LABEL_42;
  if ( !v70 )
    goto LABEL_50;
  unlockNums = v70->fields.unlockNums;
  if ( !unlockNums )
    goto LABEL_50;
  v47 = *(_QWORD *)&unlockNums->max_length;
  if ( !v47 )
  {
LABEL_42:
    v61 = SkillData->fields.svtSkillNumsList;
    if ( v61 )
    {
      v62 = *(_QWORD *)&v61->max_length;
      if ( v62 << 32 < 1 )
        return SkillData;
      v63 = *p_svtSkillLvList;
      v64 = 0LL;
      v65 = (__int64)&(*p_svtSkillLvList)->m_Items[1];
      while ( v63 )
      {
        if ( v64 >= v63->max_length )
          goto LABEL_49;
        *(_DWORD *)(v65 + 4 * v64++) = 0;
        if ( (__int64)v64 >= (int)v62 )
          return SkillData;
      }
    }
LABEL_50:
    sub_1BCAA3C(v23, klass);
  }
  v48 = SkillData->fields.svtSkillNumsList;
  if ( !v48 )
    goto LABEL_50;
  max_length = v48->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v50 = entity;
    v51 = *p_svtSkillLvList;
    v52 = 0LL;
    v53 = &unlockNums->m_Items[1];
    while ( 1 )
    {
      if ( !v51 )
        goto LABEL_50;
      v23 = v51->max_length;
      if ( v52 >= v23 )
        goto LABEL_49;
      v54 = (__int64)v51 + 4 * v52;
      *(_DWORD *)(v54 + 32) = 0;
      v23 = v54 + 32;
      if ( (int)v47 >= 1 )
      {
        if ( v52 >= max_length )
          goto LABEL_49;
        klass = (Il2CppClass *)&v48->m_Items[v52 + 1];
        v55 = (unsigned int)v47;
        v56 = v53;
        do
        {
          if ( LODWORD(klass->_1.image) == *v56 )
            *(_DWORD *)v23 = 1;
          --v55;
          ++v56;
        }
        while ( v55 );
      }
      if ( v50 )
      {
        klass = v50[5].klass;
        if ( !klass )
          goto LABEL_50;
        namespaze_low = LODWORD(klass->_1.namespaze);
        if ( (__int64)(namespaze_low << 32) >= 1 )
          break;
      }
LABEL_40:
      if ( (__int64)++v52 >= (int)max_length )
        return SkillData;
    }
    v58 = 8LL;
    while ( v52 < max_length && v58 - 8 < namespaze_low )
    {
      if ( v48->m_Items[v52 + 1] == *((_DWORD *)&klass->_1.image + v58) )
      {
        monitor = v50[5].monitor;
        if ( !monitor )
          goto LABEL_50;
        if ( v58 - 8 >= (unsigned __int64)(unsigned int)monitor[6] )
          break;
        *(_DWORD *)v23 = monitor[v58];
      }
      v60 = v58 - 7;
      ++v58;
      if ( v60 >= (int)namespaze_low )
        goto LABEL_40;
    }
LABEL_49:
    sub_1BCAA44(v23, klass);
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
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  DataManager_o *Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v29; // x1
  __int64 v30; // x28
  __int64 v31; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x26
  Il2CppObject *v33; // x26
  const MethodInfo *v34; // x6
  const MethodInfo *v35; // x7
  unsigned __int64 v36; // x25
  char v37; // w27
  SkillLvEntity_o *Entity; // x0
  signed __int64 i; // x24
  signed __int64 v40; // x8
  SkillInfo_o *v41; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v43; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B17035 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId, *(_QWORD *)&wearesLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B17035 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  skillInfoList = 0LL;
  explanationList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
  *(_QWORD *)&v50.fields.currentCryptoKey = v31;
  *(_QWORD *)&v50.fields.fakeValue = v30;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
  if ( !v32
    || (DataMasterBase_object__object__int___GetEntity(
          v32,
          (int32_t)Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_34:
    sub_1BCAA3C(Instance, id);
  }
  v33 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v34);
  if ( idList )
  {
    v36 = 0LL;
    v37 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v36 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_34;
      if ( v36 >= idList->max_length )
LABEL_35:
        sub_1BCAA44(Instance, id);
      id = (unsigned int)idList->m_Items[v36 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v33 )
          goto LABEL_34;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)v33, id, 1, 0LL);
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
            return v37;
          }
        }
      }
      ++v36;
    }
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, finishEvent, -1, v35);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v40 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    v37 = i < v40;
    if ( i >= v40 )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( i >= (unsigned __int64)skillInfoList->max_length )
      goto LABEL_35;
    v41 = skillInfoList->m_Items[i];
    if ( v41 )
    {
      id = (unsigned int)v41->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v41->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v33 )
            goto LABEL_34;
          v43 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v33, id, lv, 0LL);
          if ( v43 )
          {
            if ( SkillLvEntity__getEventUpVal(
                   v43,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   baseEventId,
                   1,
                   1,
                   0LL) )
            {
              break;
            }
          }
        }
      }
    }
  }
  return v37;
}


bool __fastcall UserServantEntity__getBaseEventUpVal_40939244(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  Il2CppObject *Entity; // x23
  Il2CppObject *v25; // x20
  const MethodInfo *v26; // x6
  const MethodInfo *v27; // x7
  unsigned __int64 v28; // x26
  char v29; // w25
  SkillLvEntity_o *v30; // x0
  char v31; // w22
  BalanceConfig_c *v32; // x8
  char v33; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v35; // x9
  __int64 v36; // x21
  unsigned __int64 v37; // x23
  SkillInfo_o *v38; // x8
  int32_t lv; // w2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B17037 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, eventUpVallInfo, nowTime);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B17037 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v45.fields.currentCryptoKey = v22;
  *(_QWORD *)&v45.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
  if ( !v23 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v25 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v26);
  if ( idList )
  {
    v28 = 0LL;
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v28 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v28 >= idList->max_length )
LABEL_41:
        sub_1BCAA44(Instance, id);
      id = (unsigned int)idList->m_Items[v28 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v25 )
          goto LABEL_40;
        v30 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v25, id, 1, 0LL);
        if ( v30 )
        {
          if ( SkillLvEntity__getEventUpVal_40683416(v30, eventUpVallInfo, 1, 1, 0, 0, nowTime, 0LL) )
            v29 = 1;
        }
      }
      ++v28;
    }
    v31 = v29;
  }
  else
  {
    v31 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v27);
  if ( !Entity )
LABEL_40:
    sub_1BCAA3C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v32 = BalanceConfig_TypeInfo;
  v33 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
    v32 = BalanceConfig_TypeInfo;
  }
  static_fields = v32->static_fields;
  v35 = 32LL;
  if ( (v33 & 1) != 0 )
    v35 = 44LL;
  v36 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v35);
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    while ( skillInfoList )
    {
      if ( v37 >= skillInfoList->max_length )
        goto LABEL_41;
      v38 = skillInfoList->m_Items[v37];
      if ( v38 )
      {
        id = (unsigned int)v38->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v38->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v25 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v25, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_40683416(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0LL,
                                            0LL);
              v31 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v36 == ++v37 )
        return v31 & 1;
    }
    goto LABEL_40;
  }
  return v31 & 1;
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpType(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  __int64 v22; // x21
  __int64 v23; // x22
  ServantSkillMaster_o *v24; // x20
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UserServantEntity___c_c *v29; // x8
  System_Object_array *v30; // x20
  System_Comparison_T__o *_9__58_0; // x21
  Il2CppObject *v32; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int max_length; // w8
  unsigned int v41; // w27
  Il2CppClass **v42; // x8
  ServantSkillEntity_o *v43; // x21
  int64_t UserId; // x0
  __int64 v45; // x1
  int32_t lv; // w22
  __int64 v47; // x24
  __int64 v48; // x25
  int64_t v49; // x23
  int32_t v50; // w0
  const MethodInfo *v51; // x2
  int32_t SkillLevel; // w0
  const MethodInfo *v53; // x2
  int32_t v55; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4B1702E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_ServantSkillEntity___, method, v2);
    sub_1BCA7E0(&System_Comparison_ServantSkillEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_UserServantEntity___c__getBaseFriendPointUpType_b__58_0__, v14, v15);
    sub_1BCA7E0(&UserServantEntity___c_TypeInfo, v16, v17);
    byte_4B1702E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v56.fields.currentCryptoKey = v23;
  *(_QWORD *)&v56.fields.fakeValue = v22;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56, 0LL);
  if ( !v24 )
    goto LABEL_29;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v24, (int32_t)Instance, 0LL);
  v29 = UserServantEntity___c_TypeInfo;
  v30 = (System_Object_array *)ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo, v26);
    v29 = UserServantEntity___c_TypeInfo;
  }
  _9__58_0 = (System_Comparison_T__o *)v29->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29, v26);
      v29 = UserServantEntity___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__58_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantSkillEntity__TypeInfo, v26, v27, v28);
    System_Comparison_object____ctor(
      _9__58_0,
      v32,
      Method_UserServantEntity___c__getBaseFriendPointUpType_b__58_0__,
      0LL);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__58_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
      (int64_t)_9__58_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  System_Array__Sort_object__49153980(
    v30,
    _9__58_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v30 )
    goto LABEL_29;
  max_length = v30->max_length;
  if ( max_length < 1 )
    return 0;
  v41 = 0;
  while ( 1 )
  {
    if ( v41 >= max_length )
      sub_1BCAA44(Instance, v19);
    v42 = &v30->obj.klass + (int)v41;
    v43 = (ServantSkillEntity_o *)v42[4];
    if ( !v43 )
      goto LABEL_29;
    Instance = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v42[4], 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
      UserId = NetworkManager__get_UserId(0LL);
      lv = this->fields.lv;
      v48 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v47 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v49 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
      *(_QWORD *)&v57.fields.currentCryptoKey = v48;
      *(_QWORD *)&v57.fields.fakeValue = v47;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v57, 0LL);
      Instance = (DataManager_o *)ServantSkillEntity__isUse(v43, v49, lv, v50, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        SkillLevel = UserServantEntity__getSkillLevel(this, v43->fields.num - 1, v51);
        Instance = (DataManager_o *)ServantSkillEntity__getFriendPointUpVal(v43, SkillLevel, 0LL);
        if ( (int)Instance >= 1 )
          break;
      }
    }
    max_length = v30->max_length;
    if ( (int)++v41 >= max_length )
      return 0;
  }
  v55 = UserServantEntity__getSkillLevel(this, v43->fields.num - 1, v53);
  Instance = (DataManager_o *)ServantSkillEntity__getSkillLvEntity(v43, v55, 0LL);
  if ( !Instance )
LABEL_29:
    sub_1BCAA3C(Instance, v19);
  return SkillLvEntity__getFriendPointUpType((SkillLvEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpVal(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  __int64 v22; // x21
  __int64 v23; // x22
  ServantSkillMaster_o *v24; // x20
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UserServantEntity___c_c *v29; // x8
  System_Object_array *v30; // x20
  System_Comparison_T__o *_9__57_0; // x21
  Il2CppObject *v32; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int max_length; // w8
  unsigned int v41; // w27
  Il2CppClass **v42; // x8
  ServantSkillEntity_o *v43; // x21
  int64_t UserId; // x0
  __int64 v45; // x1
  int32_t lv; // w22
  __int64 v47; // x24
  __int64 v48; // x25
  int64_t v49; // x23
  int32_t v50; // w0
  const MethodInfo *v51; // x2
  int32_t SkillLevel; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B1702D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_ServantSkillEntity___, method, v2);
    sub_1BCA7E0(&System_Comparison_ServantSkillEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_UserServantEntity___c__getBaseFriendPointUpVal_b__57_0__, v14, v15);
    sub_1BCA7E0(&UserServantEntity___c_TypeInfo, v16, v17);
    byte_4B1702D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v54.fields.currentCryptoKey = v23;
  *(_QWORD *)&v54.fields.fakeValue = v22;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
  if ( !v24 )
    goto LABEL_28;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v24, (int32_t)Instance, 0LL);
  v29 = UserServantEntity___c_TypeInfo;
  v30 = (System_Object_array *)ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo, v26);
    v29 = UserServantEntity___c_TypeInfo;
  }
  _9__57_0 = (System_Comparison_T__o *)v29->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29, v26);
      v29 = UserServantEntity___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__57_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantSkillEntity__TypeInfo, v26, v27, v28);
    System_Comparison_object____ctor(
      _9__57_0,
      v32,
      Method_UserServantEntity___c__getBaseFriendPointUpVal_b__57_0__,
      0LL);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__57_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  System_Array__Sort_object__49153980(
    v30,
    _9__57_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v30 )
    goto LABEL_28;
  max_length = v30->max_length;
  if ( max_length >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= max_length )
        sub_1BCAA44(Instance, v19);
      v42 = &v30->obj.klass + (int)v41;
      v43 = (ServantSkillEntity_o *)v42[4];
      if ( !v43 )
        break;
      Instance = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v42[4], 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
        UserId = NetworkManager__get_UserId(0LL);
        lv = this->fields.lv;
        v48 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v47 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v49 = UserId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
        *(_QWORD *)&v55.fields.currentCryptoKey = v48;
        *(_QWORD *)&v55.fields.fakeValue = v47;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL);
        Instance = (Il2CppObject *)ServantSkillEntity__isUse(v43, v49, lv, v50, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v43->fields.num - 1, v51);
          Instance = (Il2CppObject *)ServantSkillEntity__getFriendPointUpVal(v43, SkillLevel, 0LL);
          if ( (int)Instance > 0 )
            return (int)Instance;
        }
      }
      max_length = v30->max_length;
      if ( (int)++v41 >= max_length )
        goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA3C(Instance, v19);
  }
LABEL_26:
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  BalanceConfig_c *v11; // x0
  int32_t result; // w0
  __int64 v13; // x1
  bool v14; // vf
  __int64 v15; // x20
  __int64 v16; // x21
  int32_t v17; // w0
  __int64 v18; // x8
  int32_t v19; // w19
  __int64 v20; // x1
  int32_t v21; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B17068 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, ignoreRandomSettings, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    byte_4B17068 = 1;
  }
  if ( !ConstantMaster__IsOtherImage(0LL) || (this->fields.status & 8) != 0 )
  {
    result = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v10);
    if ( result <= 10 )
    {
      v14 = __OFSUB__(result--, 1);
      if ( result < 0 != v14 )
      {
        v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
        *(_QWORD *)&v22.fields.currentCryptoKey = v16;
        *(_QWORD *)&v22.fields.fakeValue = v15;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
        v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v19 = v17;
        *(_QWORD *)&v23.fields.currentCryptoKey = v18;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v20);
        return ImageLimitCount__GetCardImageLimitCount(v19, v21, 1, 0, 0LL);
      }
    }
  }
  else
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v11 = BalanceConfig_TypeInfo;
    }
    return v11->static_fields->OtherImageLimitCount;
  }
  return result;
}


int32_t __fastcall UserServantEntity__getCollectionNo(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B17047 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17047 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return (int32_t)Instance[13].klass;
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitMaster_o *v16; // x20
  int32_t v17; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B1704D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineQpMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1704D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  if ( !v16
    || (Entity = ServantLimitMaster__GetEntity(v16, v17, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity(
                     (CombineQpMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitMaster_o *v16; // x20
  int32_t v17; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B17059 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17059 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  if ( !v16
    || (Entity = ServantLimitMaster__GetEntity(v16, v17, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_1BCAA3C(0LL, v3);
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
      return BasicHelper__DecryptValue_41845724(this->fields.limitCount, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int128 v14; // q0
  Il2CppObject *v15; // x20
  int64_t v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  int64_t v20; // x19
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B17078 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17078 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v14 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v15 = MasterData_object;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
  v23 = v24;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v23, 0LL);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v25.fields.currentCryptoKey = v19;
  *(_QWORD *)&v25.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  if ( !v15 )
LABEL_10:
    sub_1BCAA3C(Instance, v11);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v20,
           (int32_t)Instance,
           v21);
}


int32_t __fastcall UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B17064 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17064 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return (int32_t)Instance[9].monitor;
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
  __int64 v7; // x2
  int32_t LimitCountWithRandom; // w0
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w19
  int32_t result; // w0
  __int64 v14; // x1
  bool v15; // cc
  int32_t v16; // w20
  int32_t v17; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B17066 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, ignoreRandomSettings, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B17066 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = LimitCountWithRandom;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  v16 = v12 - 1;
  v15 = v12 < 1;
  v17 = result;
  if ( !v15 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v14);
    return ImageLimitCount__GetLimitCountByDispLimit(v16, v17, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantEntity__getEquipSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        bool useUserSvtId,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  BalanceConfig_c *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v26; // x27
  SkillInfo_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int128 v35; // q0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  unsigned __int64 v39; // x23
  __int64 i; // x22
  BalanceConfig_c *v41; // x0
  BalanceConfig_c **v42; // x19
  SkillInfo_o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x25
  __int64 v46; // x26
  int32_t v47; // w0
  __int64 v48; // x1
  __int128 v49; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v50; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v51; // x21
  int32_t v52; // w26
  int64_t v53; // x0
  int32_t lv; // w27
  int64_t v55; // x28
  int32_t v56; // w5
  ServantSkillEntity_o *v57; // x26
  int32_t skillNum; // w8
  SkillInfo_array *v59; // x26
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x0
  __int64 v67; // [xsp+28h] [xbp-108h]
  __int64 v68; // [xsp+30h] [xbp-100h]
  int64_t userSvtId; // [xsp+38h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_object; // [xsp+40h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4B17026 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, useUserSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13, v14);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v15, v16);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v17, v18);
    byte_4B17026 = 1;
  }
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1C6BC(v4);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC(v4);
  UseEntity = **(DataManager_o ***)(v20 + 184);
  if ( !UseEntity )
LABEL_38:
    sub_1BCAA3C(UseEntity, skillInfoList);
  v22 = &BalanceConfig_TypeInfo;
  MasterData_object = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                                UseEntity,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v23 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  v25 = BalanceConfig_TypeInfo;
  v68 = v23;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
    v25 = BalanceConfig_TypeInfo;
  }
  v26 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v27 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v25->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  if ( useUserSvtId )
  {
    v35 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v75.fields.fakeValue = v35;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v74, -1LL, 0LL);
    v75 = v74;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
  v73 = v75;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v73, 0LL);
  v39 = 0LL;
  v67 = v68 + 32;
  for ( i = 32LL; ; i += 8LL )
  {
    v41 = *v22;
    if ( !(*v22)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v36);
      v41 = *v22;
    }
    if ( (__int64)v39 >= v41->static_fields->SvtEquipSkillListMax )
      break;
    v42 = v22;
    v43 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, v36, v37, v38);
    SkillInfo___ctor(v43, 0LL);
    v46 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    *(_QWORD *)&v76.fields.currentCryptoKey = v46;
    *(_QWORD *)&v76.fields.fakeValue = v45;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76, 0LL);
    v49 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v50 = *v26;
    v51 = v26;
    v52 = v47;
    *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v74.fields.fakeValue = v49;
    if ( !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50, v48);
    v72 = v74;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v72, 0LL);
    lv = this->fields.lv;
    v55 = v53;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_38;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_object,
                                   v52,
                                   (int)v39 + 1,
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
      if ( !v43 )
        goto LABEL_38;
      v57 = (ServantSkillEntity_o *)UseEntity;
      v43->fields.id = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      if ( !v68 )
        goto LABEL_38;
      if ( v39 >= *(unsigned int *)(v68 + 24) )
        goto LABEL_39;
      v43->fields.lv = *(_DWORD *)(v67 + 4 * v39);
      v26 = v51;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v43->fields.charge,
        &v43->fields.title,
        &v43->fields.explanation,
        *(_DWORD *)(v67 + 4 * v39),
        1,
        0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v57, 0LL);
      v43->fields.strengthStatus = (int)UseEntity;
      skillNum = v57->fields.skillNum;
      v43->fields.isUse = 1;
      v43->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v43 )
        goto LABEL_38;
      v26 = v51;
      v43->fields.lv = -1;
    }
    v59 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_38;
    UseEntity = (DataManager_o *)sub_1BCA91C(v43, v59->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      v66 = sub_1BCAA60(0LL);
      sub_1BCA908(v66, 0LL);
    }
    if ( v39 >= v59->max_length )
LABEL_39:
      sub_1BCAA44(UseEntity, skillInfoList);
    *(Il2CppClass **)((char *)&v59->obj.klass + i) = (Il2CppClass *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)v59 + i), (int64_t)v43, v60, v61, v62, v63, v64, v65);
    ++v39;
    v22 = v42;
  }
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServant(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  EventServantEntity_o *result; // x0
  __int64 v13; // x8
  EventServantEntity_o *v14; // x20
  __int64 v15; // x26
  __int64 v16; // x8
  EventServantMaster_o *v17; // x21
  int32_t v18; // w22
  __int64 v19; // x23
  __int64 v20; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B17054 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventServantMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17054 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(Instance, v11);
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL);
  if ( result )
  {
    v13 = *(_QWORD *)&result->fields.type;
    v14 = result;
    result = 0LL;
    if ( v13 )
    {
      if ( (int)v13 >= 1 )
      {
        v15 = 0LL;
        do
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_19;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v15 >= v14->fields.type )
            sub_1BCAA44(Instance, v11);
          v16 = *((_QWORD *)&v14->fields.joinMessage + v15);
          if ( !v16 )
            goto LABEL_19;
          v17 = (EventServantMaster_o *)Instance;
          v18 = *(_DWORD *)(v16 + 16);
          v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
          *(_QWORD *)&v21.fields.currentCryptoKey = v20;
          *(_QWORD *)&v21.fields.fakeValue = v19;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
          if ( !v17 )
            goto LABEL_19;
          result = EventServantMaster__getEntity_39987104(v17, v18, (int32_t)Instance, 0LL);
          if ( result )
            return result;
          ++v15;
        }
        while ( (int)v15 < v14->fields.type );
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x21
  EventServantMaster_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B17055 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B17055 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  return EventServantMaster__getEntityServantIgnoreEnd(v12, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_40949736(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B17056 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, is_finishedAt, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B17056 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v10 = EventServant;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v10->fields.eventId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
  }
  if ( !EventEntity__IsOpen((EventEntity_o *)Instance, is_finishedAt, 0LL) )
    return 0LL;
  return v10;
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
  int32_t EventId; // w0
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B1702F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo, method);
    byte_4B1702F = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  return UserServantEntity__getBaseEventUpVal(this, v7, v8, DispLimitCount, setupInfo, EventId, 0, 0LL, v13);
}


System_Boolean_array *__fastcall UserServantEntity__getEventUpValList(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Int32_array *eventIdList; // x8
  __int64 v8; // x23
  int32_t DispLimitCount; // w22
  System_Boolean_array *v10; // x21
  unsigned __int64 v11; // x25
  __int64 v12; // x26
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w23
  struct System_Int32_array *v16; // x8
  const MethodInfo *v18; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_4B17033 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, setupInfo, method);
    this = (UserServantEntity_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B17033 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_18;
  v8 = *(_QWORD *)&eventIdList->max_length;
  if ( !v8 )
    return 0LL;
  DispLimitCount = UserServantEntity__getDispLimitCount(v4, 0, method);
  v10 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, (unsigned int)v8);
  if ( (int)v8 >= 1 )
  {
    v11 = 0LL;
    v12 = (unsigned int)v8;
    while ( 1 )
    {
      v14 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v14;
      *(_QWORD *)&v19.fields.fakeValue = v13;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
      this = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                      v4->fields.limitCount,
                                      0LL);
      v16 = setupInfo->fields.eventIdList;
      if ( !v16 )
        break;
      if ( v11 >= v16->max_length )
        goto LABEL_19;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v4,
                                      v15,
                                      (int32_t)this,
                                      DispLimitCount,
                                      setupInfo,
                                      v16->m_Items[v11 + 1],
                                      0,
                                      0LL,
                                      v18);
      if ( !v10 )
        break;
      if ( v11 >= v10->max_length )
LABEL_19:
        sub_1BCAA44(this, setupInfo);
      v10->m_Items[v11++ + 4] = (unsigned __int8)this & 1;
      if ( v12 == v11 )
        return v10;
    }
LABEL_18:
    sub_1BCAA3C(this, setupInfo);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_40938380(
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
  System_Boolean_array *v13; // x24
  unsigned __int64 v14; // x26
  struct System_Int32_array *v15; // x8
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  v10 = this;
  if ( (byte_4B17034 & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_1BCA7E0(&bool___TypeInfo, *(_QWORD *)&wearersSvtId, *(_QWORD *)&wearesLimitCount);
    byte_4B17034 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  this = (UserServantEntity_o *)sub_1BCA888(bool___TypeInfo, (unsigned int)v12);
  v13 = (System_Boolean_array *)this;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = setupInfo->fields.eventIdList;
      if ( !v15 )
        break;
      if ( v14 >= v15->max_length )
        goto LABEL_17;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v10,
                                      wearersSvtId,
                                      wearesLimitCount,
                                      wearesDispLimitCount,
                                      setupInfo,
                                      v15->m_Items[v14 + 1],
                                      0,
                                      0LL,
                                      v17);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
LABEL_17:
        sub_1BCAA44(this, *(_QWORD *)&wearersSvtId);
      v13->m_Items[v14++ + 4] = (unsigned __int8)this & 1;
      if ( (unsigned int)v12 == v14 )
        return v13;
    }
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&wearersSvtId);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__getEventUpVal_40936552(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t eventId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v16; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B17030 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo, *(_QWORD *)&eventId);
    byte_4B17030 = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
  return UserServantEntity__getBaseEventUpVal(this, v11, v12, DispLimitCount, setupInfo, eventId, 0, nowTime, v16);
}


bool __fastcall UserServantEntity__getEventUpVal_40936776(
        UserServantEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t EventId; // w0
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]

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
           0LL,
           v13);
}


bool __fastcall UserServantEntity__getEventUpVal_40936896(
        UserServantEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        int32_t eventId,
        bool finishEvent,
        const MethodInfo *method)
{
  const MethodInfo *v9; // [xsp+0h] [xbp-20h]

  return setupInfo
      && UserServantEntity__getBaseEventUpVal(
           this,
           wearersSvtId,
           wearesLimitCount,
           wearesDispLimitCount,
           setupInfo,
           eventId,
           finishEvent,
           0LL,
           v9);
}


bool __fastcall UserServantEntity__getEventUpVal_40936944(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  int64_t v14; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v16; // x2
  int32_t DispLimitCount; // w0
  __int64 v18; // x1
  __int64 v19; // x24
  __int64 v20; // x25
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w25
  int32_t EventId; // w0
  __int64 v26; // x8
  unsigned __int64 v27; // x28
  UserServantEntity_o *v28; // x24
  __int64 v29; // x25
  __int64 v30; // x26
  int32_t v31; // w25
  int32_t v32; // w26
  int32_t v33; // w0
  const MethodInfo *v34; // [xsp+0h] [xbp-70h]
  const MethodInfo *v35; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B17031 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo, equipIds);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B17031 = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1BCAA3C(Instance, v14);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v16);
    v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v21 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v36.fields.currentCryptoKey = v20;
    *(_QWORD *)&v36.fields.fakeValue = v19;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                 this,
                                 v22,
                                 v23,
                                 v21,
                                 setupInfo,
                                 EventId,
                                 0,
                                 0LL,
                                 v34);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    if ( equipIds )
    {
      v26 = *(_QWORD *)&equipIds->max_length;
      if ( (int)v26 >= 1 )
      {
        v27 = 0LL;
        while ( 1 )
        {
          if ( v27 >= (unsigned int)v26 )
            sub_1BCAA44(Instance, v14);
          v14 = equipIds->m_Items[v27];
          if ( v14 >= 1 )
          {
            if ( !MasterData_object )
              goto LABEL_22;
            Instance = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v14,
                         (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Instance )
            {
              v28 = (UserServantEntity_o *)Instance;
              v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
              *(_QWORD *)&v37.fields.currentCryptoKey = v30;
              *(_QWORD *)&v37.fields.fakeValue = v29;
              v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
              v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
              v33 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                           v28,
                                           v31,
                                           v32,
                                           v21,
                                           setupInfo,
                                           v33,
                                           0,
                                           0LL,
                                           v35);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
          LODWORD(v26) = equipIds->max_length;
          if ( (__int64)++v27 >= (int)v26 )
            return 0;
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_40937504(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w0
  __int64 v15; // x1
  __int64 v16; // x23
  __int64 v17; // x24
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w24
  int32_t EventId; // w0
  _BOOL8 BaseEventUpVal; // x0
  __int64 v23; // x1
  __int64 v25; // x8
  unsigned __int64 i; // x27
  UserServantEntity_o *v27; // x23
  __int64 v28; // x24
  __int64 v29; // x25
  int32_t v30; // w24
  int32_t v31; // w25
  int32_t v32; // w0
  const MethodInfo *v33; // [xsp+0h] [xbp-70h]
  const MethodInfo *v34; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B17032 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo, equipServentEntityList);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B17032 = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v12);
    DataManager__GetMasterData_object_(
      (DataManager_o *)Instance,
      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
    v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v18 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    *(_QWORD *)&v35.fields.currentCryptoKey = v17;
    *(_QWORD *)&v35.fields.fakeValue = v16;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v19, v20, v18, setupInfo, EventId, 0, 0LL, v33);
    if ( BaseEventUpVal )
      return 1;
    if ( equipServentEntityList )
    {
      v25 = *(_QWORD *)&equipServentEntityList->max_length;
      if ( (int)v25 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v25; ++i )
        {
          if ( i >= (unsigned int)v25 )
            sub_1BCAA44(BaseEventUpVal, v23);
          v27 = equipServentEntityList->m_Items[i];
          if ( v27 )
          {
            v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v28 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
            *(_QWORD *)&v36.fields.currentCryptoKey = v29;
            *(_QWORD *)&v36.fields.fakeValue = v28;
            v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
            v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
            v32 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v27, v30, v31, v18, setupInfo, v32, 0, 0LL, v34);
            if ( BaseEventUpVal )
              return 1;
            LODWORD(v25) = equipServentEntityList->max_length;
          }
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_40938664(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x24
  __int64 v20; // x25
  int32_t v21; // w24
  int32_t v22; // w25
  const MethodInfo *v23; // x2
  int32_t DispLimitCount; // w26
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  EventUpValInfo_o *v28; // x27
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  unsigned __int64 v40; // x25
  char v41; // w26
  int64_t v42; // x2
  EventUpValInfo_o *v43; // x28
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v46; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B17036 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, eventUpVallInfo, setupInfo);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B17036 = 1;
  }
  entity = 0LL;
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v20;
  *(_QWORD *)&v49.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v49, 0LL);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v23);
  v28 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v25, v26, v27);
  EventUpValInfo___ctor(v28, setupInfo, v21, v22, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)eventUpVallInfo, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1BCAA3C(Instance, v36);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_40939244(this, eventUpVallInfo, nowTime, v38);
  if ( equipIds )
  {
    v39 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v39 >= 1 )
    {
      v40 = 0LL;
      v41 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v40 >= (unsigned int)v39 )
          sub_1BCAA44(Instance, v36);
        v42 = equipIds->m_Items[v40];
        if ( v42 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_23;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                       &entity,
                                       v42,
                                       (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_23;
            v43 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
            *(_QWORD *)&v50.fields.currentCryptoKey = klass;
            *(_QWORD *)&v50.fields.fakeValue = monitor;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
            if ( !v43 )
              goto LABEL_23;
            v43->fields.equipSvtId = (int)Instance;
            Instance = entity;
            if ( !entity )
              goto LABEL_23;
            Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_40939244(
                                         (UserServantEntity_o *)entity,
                                         eventUpVallInfo,
                                         nowTime,
                                         v46);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v41 = 1;
          }
        }
        LODWORD(v39) = equipIds->max_length;
        ++v40;
      }
      while ( (__int64)v40 < (int)v39 );
      LOBYTE(Instance) = v41;
    }
  }
  return (unsigned __int8)Instance & 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  ServantLimitMaster_o *v17; // x21
  int32_t v18; // w22
  ServantLimitEntity_o *v19; // x21
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B17070 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&cnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B17070 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v22.fields.currentCryptoKey = v16;
  *(_QWORD *)&v22.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                               this->fields.limitCount,
                               0LL);
  if ( !v17 )
    goto LABEL_14;
  v19 = ServantLimitMaster__GetEntity(v17, v18, (int32_t)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v19 || !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)ServantExceedMaster__TryGetEntity(
                               (ServantExceedMaster_o *)Instance,
                               &entity,
                               v19->fields.rarity,
                               cnt,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v19->fields.lvMax;
LABEL_14:
    sub_1BCAA3C(Instance, v12);
  }
  return UserServantEntity__getLevelMax(this, v12);
}


bool __fastcall UserServantEntity__getExpInfo(
        UserServantEntity_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x24
  __int64 v22; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v25; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v27; // x24
  int m_CancellationTokenSource; // w25
  float v29; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B17049 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, exp, lateExp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B17049 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v31.fields.currentCryptoKey = v22;
  *(_QWORD *)&v31.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  if ( !v23 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v25) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v27 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v27, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v29 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1BCAA3C(Instance, v18);
  }
  v29 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v29;
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
  __int64 v7; // x2
  int32_t result; // w0
  __int64 v9; // x1
  bool v10; // vf
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w19
  __int64 v16; // x1
  int32_t v17; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1706A & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, ignoreRandomSettings, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B1706A = 1;
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
        *(_QWORD *)&v18.fields.currentCryptoKey = v12;
        *(_QWORD *)&v18.fields.fakeValue = v11;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
        v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v15 = v13;
        *(_QWORD *)&v19.fields.currentCryptoKey = v14;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
        return ImageLimitCount__GetImageLimitCount(v15, v17, 0LL);
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
  __int64 v7; // x2
  int32_t LimitCountWithRandom; // w0
  __int64 v9; // x1
  int32_t v10; // w21
  int v11; // w20
  __int64 v12; // x19
  __int64 v13; // x21
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B1706B & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, ignoreRandomSettings, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B1706B = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  v10 = LimitCountWithRandom;
  if ( LimitCountWithRandom > 10 )
    return v10;
  v11 = LimitCountWithRandom;
  v13 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  if ( v11 < 1 )
    return v10;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v14);
  return ImageLimitCount__GetLimitCountByImageLimit_38405988(v11 - 1, v10, 0LL);
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitMaster_o *v16; // x20
  int32_t v17; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B17076 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17076 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                this->fields.limitCount,
                                0LL);
  if ( !v16
    || (Entity = ServantLimitMaster__GetEntity(v16, v17, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  ServantExceedMaster_o *v16; // x20
  int32_t v17; // w21
  int32_t FrameType_40396124; // w20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B17074 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17074 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                               this->fields.limitCount,
                               0LL);
  if ( !v16
    || (FrameType_40396124 = ServantExceedMaster__GetFrameType_40396124(
                               v16,
                               v17,
                               (int32_t)Instance,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v19 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v20),
        !v19) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v19,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_40396124,
           0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x8
  int v14; // w21
  unsigned __int64 v15; // x24
  UserServantEntity_o *v16; // x22
  UserServantEntity_o *v17; // x23

  if ( (byte_4B1702C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1702C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_1BCAA3C(Instance, v10);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal(this, v12);
  if ( !equipIds )
    return 0;
  v13 = *(_QWORD *)&equipIds->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = (int)Instance;
  v15 = 0LL;
  v16 = 0LL;
  do
  {
    if ( v15 >= (unsigned int)v13 )
      sub_1BCAA44(Instance, v10);
    v10 = (const MethodInfo *)equipIds->m_Items[v15];
    if ( (__int64)v10 >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_19;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)v10,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_19;
      v17 = (UserServantEntity_o *)Instance;
      Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v10);
      LODWORD(v13) = equipIds->max_length;
      if ( (int)Instance > v14 )
        v16 = v17;
      if ( (int)Instance > v14 )
        v14 = (int)Instance;
    }
    ++v15;
  }
  while ( (__int64)v15 < (int)v13 );
  if ( v16 )
    return UserServantEntity__getBaseFriendPointUpType(v16, v10);
  else
    return 0;
}


int32_t __fastcall UserServantEntity__getFriendPointUpVal(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v12; // x1
  int32_t v13; // w20
  __int64 v14; // x8
  unsigned __int64 i; // x22

  if ( (byte_4B1702B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1702B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v10);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal(this, v12);
  v13 = (int)Instance;
  if ( equipIds )
  {
    v14 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v14 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v14; ++i )
      {
        if ( i >= (unsigned int)v14 )
          sub_1BCAA44(Instance, v10);
        v10 = (const MethodInfo *)equipIds->m_Items[i];
        if ( (__int64)v10 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_15;
          Instance = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       (int64_t)v10,
                       (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_15;
          Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v10);
          LODWORD(v14) = equipIds->max_length;
          if ( (int)Instance > v13 )
            v13 = (int)Instance;
        }
      }
    }
  }
  return v13;
}


int32_t __fastcall UserServantEntity__getFriendshipRank(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int128 v14; // q0
  UserServantCollectionMaster_o *v15; // x20
  int64_t v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  int64_t v20; // x19
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B17048 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17048 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v14 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v15 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
  v23 = v24;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v23, 0LL);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v25.fields.currentCryptoKey = v19;
  *(_QWORD *)&v25.fields.fakeValue = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  if ( !v15 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v15, v20, (int32_t)Instance, v21)) == 0LL )
LABEL_11:
    sub_1BCAA3C(Instance, v11);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitMaster_o *v16; // x20
  int32_t v17; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v19; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B1704E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1704E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                               this->fields.limitCount,
                               0LL);
  if ( !v16
    || (Entity = ServantLimitMaster__GetEntity(v16, v17, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v11);
  }
  v19 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v19 )
    lvMax += v19->fields.addLvMax;
  return lvMax;
}


int32_t __fastcall UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1704F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1704F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return (int32_t)Instance[5].monitor;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B1701F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B1701F = 1;
  }
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


int32_t __fastcall UserServantEntity__getMagnification(
        UserServantEntity_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t combineMaterialId; // w21
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4B17046 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineMaster___, svtEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (UserServantEntity_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B17046 = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_1BCAA3C(this, svtEntity);
  if ( HIDWORD(entity[1].klass) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    return v4->fields.treasureDeviceLv1;
  v15 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL) + 1;
}


int32_t __fastcall UserServantEntity__getMaxCardImageLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x1
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B17069 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B17069 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = v8;
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  return ImageLimitCount__GetCardImageLimitCount(v10, v12, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxCommandCardLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x1
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B17067 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B17067 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = v8;
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  return ImageLimitCount__GetImageLimitCount(v10, v12, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxDispLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x1
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B17065 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B17065 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = v8;
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  return ImageLimitCount__GetImageLimitCount(v10, v12, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxFriendIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x1
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1706D & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B1706D = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = v8;
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  return ImageLimitCount__GetCardImageLimitCount(v10, v12, 0, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x1
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1706C & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B1706C = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = v8;
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  return ImageLimitCount__GetCardImageLimitCount(v10, v12, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxPortraitLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x1
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1706E & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B1706E = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = v8;
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  return ImageLimitCount__GetImageLimitCount(v10, v12, 0LL);
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
  long double v7; // q0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x0
  __int64 v25; // x0
  int64_t UseEntity; // x0
  BalanceConfig_c **v27; // x26
  Il2CppObject *MasterData_object; // x0
  __int64 v29; // x1
  BalanceConfig_c *v30; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v31; // x28
  System_Int32_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int128 v47; // q0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x22
  __int64 v49; // x19
  __int64 v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  BalanceConfig_c *v53; // x0
  unsigned __int64 v54; // x21
  BalanceConfig_c **v55; // x25
  SkillInfo_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x26
  __int64 v59; // x27
  int32_t v60; // w0
  __int64 v61; // x1
  __int128 v62; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v63; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v64; // x24
  int32_t v65; // w27
  int64_t v66; // x0
  int32_t lv; // w28
  int64_t v68; // x29
  int32_t v69; // w5
  System_Int32_array *v70; // x8
  System_String_array *v71; // x26
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  PartyOrganizationUtility_o *v79; // x0
  __int64 v80; // x27
  __int64 v81; // x28
  int32_t v82; // w0
  __int64 v83; // x1
  __int128 v84; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v85; // x8
  int32_t v86; // w27
  int64_t v87; // x0
  ServantSkillEntity_o *v88; // x0
  __int128 v89; // q0
  ServantSkillEntity_o *v90; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v91; // x0
  int64_t v92; // x0
  System_Int32_array *v93; // x8
  System_String_array *v94; // x27
  int64_t userSvtId; // [xsp+40h] [xbp-130h]
  ServantSkillMaster_o *v100; // [xsp+48h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_4B17027 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, idList, skillNameList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10, v11);
    sub_1BCA7E0(&int___TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18, v19);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v20, v21);
    sub_1BCA7E0(&string___TypeInfo, v22, v23);
    byte_4B17027 = 1;
  }
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v7);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v7);
  UseEntity = **(_QWORD **)(v25 + 184);
  if ( !UseEntity )
LABEL_48:
    sub_1BCAA3C(UseEntity, idList);
  v27 = &BalanceConfig_TypeInfo;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v30 = BalanceConfig_TypeInfo;
  v100 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
    v30 = BalanceConfig_TypeInfo;
  }
  v31 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v32 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v30->static_fields->SvtSkillListMax);
  *idList = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_String_array *)sub_1BCA888(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)skillNameList, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  if ( useUserSvtId )
  {
    v47 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v106.fields.fakeValue = v47;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v105, -1LL, 0LL);
    v106 = v105;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
  v104 = v106;
  p_userId = &this->fields.userId;
  v49 = 8LL;
  v50 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v104, 0LL);
  while ( 1 )
  {
    v53 = *v27;
    v54 = v49 - 8;
    if ( !(*v27)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, idList);
      v53 = *v27;
    }
    if ( (__int64)v54 >= v53->static_fields->SvtSkillListMax )
      break;
    v55 = v27;
    v56 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, idList, v51, v52);
    SkillInfo___ctor(v56, 0LL);
    v59 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v57);
    *(_QWORD *)&v107.fields.currentCryptoKey = v59;
    *(_QWORD *)&v107.fields.fakeValue = v58;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v107, 0LL);
    v62 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v63 = *v31;
    v64 = v31;
    v65 = v60;
    *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v105.fields.fakeValue = v62;
    if ( !v63->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v63, v61);
    v103 = v105;
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v103, 0LL);
    lv = this->fields.lv;
    v68 = v66;
    v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
    UseEntity = (int64_t)v100;
    if ( !v100 )
      goto LABEL_48;
    UseEntity = (int64_t)ServantSkillMaster__getUseEntity(
                           v100,
                           v65,
                           (int)v49 - 7,
                           v68,
                           lv,
                           v69,
                           -1,
                           -1,
                           -1,
                           userSvtId,
                           0,
                           0LL);
    if ( UseEntity )
    {
      v70 = *idList;
      if ( !*idList )
        goto LABEL_48;
      if ( v54 >= v70->max_length )
        goto LABEL_49;
      v31 = v64;
      *((_DWORD *)&v70->obj.klass + v49) = *(_DWORD *)(UseEntity + 28);
      v71 = *skillNameList;
      UseEntity = (int64_t)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v71 )
        goto LABEL_48;
      if ( v54 >= v71->max_length )
        goto LABEL_49;
      v78 = UseEntity;
      v79 = (PartyOrganizationUtility_o *)((char *)v71 + v50);
LABEL_32:
      v79->klass = (PartyOrganizationUtility_c *)v78;
      sub_1BCA784(v79, v78, v72, v73, v74, v75, v76, v77);
      goto LABEL_33;
    }
    v81 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v80 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
    *(_QWORD *)&v108.fields.currentCryptoKey = v81;
    *(_QWORD *)&v108.fields.fakeValue = v80;
    v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v108, 0LL);
    v84 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v85 = *v64;
    v31 = v64;
    v86 = v82;
    *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v105.fields.fakeValue = v84;
    if ( !v85->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v85, v83);
    v102 = v105;
    v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v102, 0LL);
    v88 = ServantSkillMaster__getUseEntity(
            v100,
            v86,
            (int)v49 - 7,
            v87,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v88 )
    {
      v89 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v90 = v88;
      v91 = *v64;
      *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v105.fields.fakeValue = v89;
      if ( !v91->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v91, idList);
      v101 = v105;
      v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v101, 0LL);
      UseEntity = ServantSkillEntity__isUse(v90, v92, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( (UseEntity & 1) != 0 )
      {
        v93 = *idList;
        if ( !*idList )
          goto LABEL_48;
        if ( v54 >= v93->max_length )
          goto LABEL_49;
        *((_DWORD *)&v93->obj.klass + v49) = v90->fields.skillId;
        v94 = *skillNameList;
        UseEntity = (int64_t)ServantSkillEntity__getSkillName(v90, 0LL);
        if ( !v94 )
          goto LABEL_48;
        if ( v54 >= v94->max_length )
LABEL_49:
          sub_1BCAA44(UseEntity, idList);
        v78 = UseEntity;
        v79 = (PartyOrganizationUtility_o *)((char *)v94 + v50);
        goto LABEL_32;
      }
    }
LABEL_33:
    ++v49;
    v50 += 8LL;
    v27 = v55;
  }
}


void __fastcall UserServantEntity__getPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v13; // x25
  __int64 v14; // x26
  int32_t v15; // w4
  const MethodInfo *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B17028 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList, titleList);
    byte_4B17028 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  UserServantEntity__GetPassiveSkillInfo(this, idList, titleList, explanationList, v15, dispLimitCount, nowTime, v16);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B1703A & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, *(_QWORD *)&targetType);
    byte_4B1703A = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return QuestRestrictionInfo__IsRestriction_41172444(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x22
  ServantLimitMaster_o *v14; // x20
  int32_t v15; // w0
  __int64 v16; // x8
  int32_t v17; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B17061 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B17061 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  v16 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v20.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v17 = v15;
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  if ( !v14 || (Instance = ServantLimitMaster__GetEntity(v14, v17, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1BCAA3C(Instance, v9);
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getRarityIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v11; // x1
  int32_t RarityIcon; // w20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x1

  if ( (byte_4B17075 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B17075 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v11),
        !MasterData_object)
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       (ServantExceedMaster_o *)MasterData_object,
                       (int32_t)Instance,
                       this->fields.exceedCount,
                       0,
                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v14),
        !v13) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ServantLvDetailMaster__GetRarityIcon(
           (ServantLvDetailMaster_o *)v13,
           (int32_t)Instance,
           this->fields.lv,
           RarityIcon,
           0LL);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B17044 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17044 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  if ( !v16
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      (int32_t)Instance,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v18),
        !Entity) )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B17043 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17043 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  if ( !v16
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      (int32_t)Instance,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v18),
        !Entity) )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B17045 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17045 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  if ( !v16
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      (int32_t)Instance,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v18),
        !Entity) )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
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
        int32_t beforeQuestClear,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w0
  const MethodInfo *v14; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B17022 & 1) == 0 )
  {
    sub_1BCA7E0(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&dispLimitCount,
      *(_QWORD *)&specificLimitCount);
    byte_4B17022 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&dispLimitCount);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  return UserServantEntity__GetSkillIdList(
           this,
           v13,
           dispLimitCount,
           specificLimitCount,
           useUserSvtId,
           beforeQuestClear,
           v14);
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
  __int64 v15; // x26
  __int64 v16; // x27
  int32_t v17; // w0
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B17024 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList, *(_QWORD *)&beforeClearQuestId);
    byte_4B17024 = 1;
  }
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  UserServantEntity__GetSkillInfo(
    this,
    skillInfoList,
    v17,
    beforeClearQuestId,
    dispLimitCount,
    useUserSvtId,
    finishEvent,
    skillListNum,
    v18);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_4B17020 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&iIdx, method);
    byte_4B17020 = 1;
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
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&iIdx);
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
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x19
  int32_t skillLv3; // w8
  __int64 v12; // x20
  unsigned __int64 v13; // x23

  if ( (byte_4B17021 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B17021 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (BalanceConfig_c *)sub_1BCA888(int___TypeInfo, (unsigned int)v6->static_fields->SvtEquipSkillListMax);
  if ( !v7 )
    sub_1BCAA3C(0LL, v8);
  namespaze = (unsigned int)v7->_1.namespaze;
  v10 = (System_Int32_array *)v7;
  if ( !namespaze
    || (LODWORD(v7->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v7->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1BCAA44(v7, v8);
  }
  skillLv3 = this->fields.skillLv3;
  v12 = 11LL;
  v7->_1.byval_arg.bits = skillLv3;
  v7 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v13 = v12 - 8;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7, v8);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v7->static_fields->SvtEquipSkillListMax )
      return v10;
    if ( v13 >= v10->max_length )
      goto LABEL_16;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitMaster_o *v17; // x22
  int32_t v18; // w0
  __int64 v19; // x8
  int32_t v20; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B1706F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, hpUp, atkUp);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1706F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v21.fields.currentCryptoKey = v16;
  *(_QWORD *)&v21.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  v19 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v22.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v20 = v18;
  *(_QWORD *)&v22.fields.currentCryptoKey = v19;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  if ( !v17 || (Instance = ServantLimitMaster__GetEntity(v17, v20, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1BCAA3C(Instance, v12);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1704C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classId, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1704C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return (int32_t)Instance[3].monitor;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSvtClassId(
        UserServantEntity_o *this,
        bool isPlayableBeastToBase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1704A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, isPlayableBeastToBase, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1704A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  if ( !v17
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v17,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v12);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Instance, isPlayableBeastToBase, 0LL);
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B17073 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B17073 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v9),
        !MasterData_object) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return ServantExceedMaster__GetEntity(
           (ServantExceedMaster_o *)MasterData_object,
           (int32_t)Instance,
           this->fields.exceedCount,
           0LL);
}


int32_t __fastcall UserServantEntity__getSvtId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B1701E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B1701E = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
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
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w0
  const MethodInfo *v14; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B1703F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4B1703F = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  return UserServantEntity__GetTreasureDeviceInfo(this, tdInfo, v13, beforeClearQuestId, dispLimitCount, isLvOne, v14);
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_40943792(
        UserServantEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  void *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v26; // x1
  __int64 v27; // x23
  __int64 v28; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x22
  __int64 v30; // x1
  int treasureDeviceLv1; // w8
  int64_t UserId; // x22
  const MethodInfo *v33; // x2
  int32_t DispLimitCount; // w21
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x24
  __int64 v38; // x25
  UserServantCollectionMaster_o *v39; // x23
  const MethodInfo *v40; // x3
  int32_t v41; // w22
  long double v42; // q0
  __int64 v43; // x8
  __int64 v44; // x0
  Il2CppObject *v45; // x23
  int32_t v46; // w0
  __int64 v47; // x1
  __int128 v48; // q1
  int32_t v49; // w24
  int64_t v50; // x0
  __int64 v51; // x8
  int32_t lv; // w25
  int64_t v53; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B17041 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, tdLv, tdMaxLv);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B17041 = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v58.fields.currentCryptoKey = v28;
  *(_QWORD *)&v58.fields.fakeValue = v27;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
  if ( !v29 )
    goto LABEL_30;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v29,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_30;
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
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  UserId = NetworkManager__get_UserId(0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v33);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v39 = (UserServantCollectionMaster_o *)v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
  *(_QWORD *)&v59.fields.currentCryptoKey = v38;
  *(_QWORD *)&v59.fields.fakeValue = v37;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59, 0LL);
  if ( !v39 )
    goto LABEL_30;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v39, UserId, (int32_t)Instance, v40);
  if ( !Instance )
    goto LABEL_30;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0LL);
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C1C6BC(v42);
  v44 = *(_QWORD *)(*(_QWORD *)(v43 + 192) + 16LL);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C1C6BC(v42);
  Instance = **(void ***)(v44 + 184);
  if ( !Instance )
    goto LABEL_30;
  v45 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  v48 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v49 = v46;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
  v56 = v57;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v56, 0LL);
  v51 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v60.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v53 = v50;
  *(_QWORD *)&v60.fields.currentCryptoKey = v51;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v60, 0LL);
  if ( !v45 )
LABEL_30:
    sub_1BCAA3C(Instance, v24);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)v45,
                v49,
                v53,
                lv,
                (int32_t)Instance,
                DispLimitCount,
                v41,
                -1,
                0LL);
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
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)tdMaxLv = 0LL;
  if ( !UserServantEntity__getTreasureDeviceInfo_40943792(this, &tdMaxLv[1], tdMaxLv, v2) )
    return 0;
  if ( tdMaxLv[1] >= tdMaxLv[0] )
    return 2;
  return tdMaxLv[1] > 1;
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

  if ( (byte_4B1703B & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, method);
    byte_4B1703B = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_41176212(questRestrictionInfo, v7, 0LL);
}


bool __fastcall UserServantEntity__getUniqueSvtRestriction_40941764(
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

  if ( (byte_4B1703C & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, partyItem);
    byte_4B1703C = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_41176412(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall UserServantEntity__getUseSvtEqSkillInfo(
        UserServantEntity_o *this,
        int32_t targetLv,
        int32_t targetLimitCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x22
  __int64 v20; // x1
  long double v21; // q0
  __int64 v22; // x0
  __int64 v23; // x0
  ServantSkillEntity_array *ServantSkillList; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v26; // x1
  __int64 v27; // x24
  __int64 v28; // x25
  ServantSkillMaster_o *v29; // x23
  int max_length; // w8
  ServantSkillEntity_array *v31; // x23
  unsigned int v32; // w19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x29
  Il2CppClass **v34; // x8
  ServantSkillEntity_o *v35; // x24
  __int128 v36; // q0
  int64_t v37; // x0
  __int64 v38; // x1
  int32_t lv; // w25
  __int64 v40; // x27
  __int64 v41; // x28
  int64_t v42; // x26
  int32_t v43; // w0
  __int128 v44; // q0
  int64_t v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4B1705A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantSkillMaster___,
      *(_QWORD *)&targetLv,
      *(_QWORD *)&targetLimitCnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17, v18);
    byte_4B1705A = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                       *(_QWORD *)&targetLv,
                                                       *(_QWORD *)&targetLimitCnt,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C1C6BC(v21);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C1C6BC(v21);
  ServantSkillList = **(ServantSkillEntity_array ***)(v23 + 184);
  if ( !ServantSkillList )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ServantSkillList,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v62.fields.currentCryptoKey = v28;
  *(_QWORD *)&v62.fields.fakeValue = v27;
  ServantSkillList = (ServantSkillEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v62,
                                                   0LL);
  if ( !v29 )
    goto LABEL_33;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v29, (int32_t)ServantSkillList, 0LL);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  v31 = ServantSkillList;
  if ( max_length >= 1 )
  {
    v32 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v32 >= max_length )
        sub_1BCAA44(ServantSkillList, v20);
      v34 = &v31->obj.klass + (int)v32;
      v35 = (ServantSkillEntity_o *)v34[4];
      if ( !v35 )
        break;
      ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(
                                                       (ServantSkillEntity_o *)v34[4],
                                                       0,
                                                       0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v36 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v61.fields.fakeValue = v36;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
        v60 = v61;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v60, 0LL);
        lv = this->fields.lv;
        v41 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v40 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v42 = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
        *(_QWORD *)&v63.fields.currentCryptoKey = v41;
        *(_QWORD *)&v63.fields.fakeValue = v40;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v63, 0LL);
        ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                         v35,
                                                         v42,
                                                         lv,
                                                         v43,
                                                         -1,
                                                         -1,
                                                         -1,
                                                         -1LL,
                                                         0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v44 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v61.fields.fakeValue = v44;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
          v59 = v61;
          v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                           v35,
                                                           v45,
                                                           targetLv,
                                                           targetLimitCnt,
                                                           -1,
                                                           -1,
                                                           -1,
                                                           -1LL,
                                                           0LL);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v53 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v35,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v55 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v55[4] = (Il2CppClass *)v35;
              sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v35, v46, v47, v48, v49, v50, v51);
            }
          }
        }
      }
      max_length = v31->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_1BCAA3C(ServantSkillList, v20);
  }
LABEL_31:
  if ( !v19 )
    goto LABEL_33;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v19,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_o *__fastcall UserServantEntity__getUserCommandCodeEntity(
        UserServantEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  __int128 v15; // q0
  UserServantCommandCodeMaster_o *v16; // x21
  int64_t v17; // x0
  __int64 v18; // x1
  __int64 v19; // x22
  __int64 v20; // x23
  int64_t v21; // x20
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B17079 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B17079 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v15 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v16 = (UserServantCommandCodeMaster_o *)MasterData_object;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
  v25 = v26;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v25, 0LL);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v28.fields.currentCryptoKey = v20;
  *(_QWORD *)&v28.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
  if ( !v16 )
    goto LABEL_14;
  if ( UserServantCommandCodeMaster__TryGetEntity(v16, &entity, v21, (int)Instance, v22) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v23);
LABEL_14:
    sub_1BCAA3C(Instance, v12);
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1701D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B1701D = 1;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v6, 0LL);
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0

  if ( (byte_4B1701A & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B1701A = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  return v4->static_fields->enableRandomLimitCount && UserServantEntity__IsEnableOwnRandomLimitCount(this, method);
}


bool __fastcall UserServantEntity__isAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1705E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantRarityMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1705E = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance[1].monitor);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1705C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantRarityMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1705C = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return this->fields.adjustHp >= SHIDWORD(Instance[1].klass);
}


bool __fastcall UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  __int128 v26; // q0
  UserServantCollectionMaster_o *v27; // x21
  int64_t v28; // x0
  __int64 v29; // x8
  int64_t v30; // x19
  const MethodInfo *v31; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B17072 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B17072 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v37.fields.currentCryptoKey = v21;
  *(_QWORD *)&v37.fields.fakeValue = v20;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
  if ( !v22 )
    goto LABEL_16;
  v23 = DataMasterBase_object__object__int___GetEntity(
          v22,
          (int32_t)Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v24 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v27 = (UserServantCollectionMaster_o *)v24;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
  v34 = v35;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
  v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v38.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v30 = v28;
  *(_QWORD *)&v38.fields.currentCryptoKey = v29;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v38, 0LL);
  if ( !v27
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v27, v30, (int32_t)Instance, v31),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v23)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v17);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            (int32_t)v23[6].klass,
            HIDWORD(v23[6].klass) + EntityDefinitely->fields.friendshipExceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v7; // x1
  __int64 Rarity; // x0
  __int64 v9; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17071 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B17071 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v7);
  if ( !Master_object )
    sub_1BCAA3C(Rarity, v9);
  return !ServantExceedMaster__TryGetEntity(
            (ServantExceedMaster_o *)Master_object,
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
  __int64 v2; // x2
  int32_t LimitCntMax; // w0
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B17050 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B17050 = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = LimitCntMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  return v8 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1705F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantRarityMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1705F = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return this->fields.adjustAtk == LODWORD(Instance[2].klass);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1705D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantRarityMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1705D = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return this->fields.adjustHp == HIDWORD(Instance[1].monitor);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17097 & 1) == 0 )
  {
    sub_1BCA7E0(&UserServantEntity___c_TypeInfo, v1, v2);
    byte_4B17097 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserServantEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserServantEntity___c_TypeInfo->static_fields->__9 = (struct UserServantEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserServantEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall UserServantEntity___c___ctor(UserServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpType_b__58_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpVal_b__57_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}