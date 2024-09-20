void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BF5F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5BF5F = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_40192384(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0

  if ( (byte_4A5BF60 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5BF60 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1B8880C(v5, v6);
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


void __fastcall UserServantEntity___ctor_40192616(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t userId; // x21
  __int128 v8; // q0
  int32_t maxLimitCount; // w21
  int32_t v10; // w20
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12[2]; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5BF61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BF61 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1B8880C(v5, v6);
  userId = e->fields.userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v12, userId, 0LL);
  v8 = *(_OWORD *)&v12[0].fields.fakeValue;
  v12[1] = v12[0];
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v12[0].fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v8;
  this->fields.svtId = e->fields.svtId;
  maxLimitCount = e->fields.maxLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(maxLimitCount, 0LL);
  this->fields.limitCount = v13;
  this->fields.lv = e->fields.maxLv;
  *(int32x2_t *)&this->fields.atk = vrev64_s32(*(int32x2_t *)&e->fields.maxHp);
  *(_OWORD *)&this->fields.skillLv1 = *(_OWORD *)&e->fields.skillLv1;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  DispLimitCount = ImageLimitCount__GetDispLimitCount(v10, 0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(DispLimitCount, 0LL);
}


int64_t __fastcall UserServantEntity__CreatePrimaryKey(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5BF5E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BF5E = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v5, 0LL);
}


bool __fastcall UserServantEntity__GetAdjustMax(
        UserServantEntity_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  Il2CppObject *v17; // x24
  const MethodInfo *v18; // x1
  int32_t *Entity; // x0
  int32_t v20; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A5BFA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !v16 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_13:
    v20 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v17 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v18),
        !v17) )
  {
LABEL_15:
    sub_1B8880C(Instance, v12);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                        (int32_t)Instance,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v20 = Entity[8];
  result = 1;
LABEL_14:
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
  Il2CppObject *Master_object; // x0
  __int64 v14; // x26
  __int64 v15; // x27
  ServantAppendPassiveSkillMaster_o *v16; // x25
  int32_t v17; // w0
  __int128 v18; // q0
  int32_t v19; // w26
  int64_t v20; // x0
  __int128 v21; // q1
  int64_t v22; // x27
  int64_t userSvtId; // x0
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5BFCF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BFCF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
  v18 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v19 = v17;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
  v21 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v21;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
  if ( !v16 )
    sub_1B8880C(userSvtId, v24);
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


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_40232352(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x0
  __int64 v7; // x1
  SkillInfo_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Int32_array *v11; // x8
  unsigned __int64 v12; // x21
  __int64 v13; // x23
  SkillInfo_o *v14; // x20
  SkillInfo_array *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x0
  System_Int32_array *v19; // [xsp+0h] [xbp-60h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4A5BFD0 & 1) == 0 )
  {
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&SkillInfo_TypeInfo);
    byte_4A5BFD0 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v19 = 0LL;
  releaseStateList = 0LL;
  UserServantEntity__GetAppendPassiveSkillInfo(this, &idList, &titleList, &explanationList, &releaseStateList, &v19, v3);
  if ( !idList
    || (v8 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, idList->max_length),
        *skillInfoList = v8,
        sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v8, v9, v10),
        (v11 = idList) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(v6, v7);
  }
  v12 = 0LL;
  v13 = 32LL;
  while ( (__int64)v12 < (int)v11->max_length )
  {
    v14 = (SkillInfo_o *)sub_1B887FC(SkillInfo_TypeInfo);
    SkillInfo___ctor(v14, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v12 >= idList->max_length )
LABEL_20:
      sub_1B88814(v6, v7);
    if ( !v14 )
      goto LABEL_18;
    v14->fields.id = idList->m_Items[v12 + 1];
    if ( !v19 )
      goto LABEL_18;
    if ( v12 >= v19->max_length )
      goto LABEL_20;
    v14->fields.lv = v19->m_Items[v12 + 1];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v12 >= releaseStateList->max_length )
      goto LABEL_20;
    v14->fields.isUse = releaseStateList->m_Items[v12 + 4];
    v15 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v6 = sub_1B886EC(v14, v15->obj.klass->_1.element_class);
    if ( !v6 )
    {
      v18 = sub_1B88830(0LL);
      sub_1B886D8(v18, 0LL);
    }
    if ( v12 >= v15->max_length )
      goto LABEL_20;
    v15->m_Items[v12] = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v15 + v13), (int32_t)v14, v16, v17);
    v11 = idList;
    ++v12;
    v13 += 8LL;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x7
  unsigned __int64 v17; // x26
  char v18; // w25
  SkillLvEntity_o *v19; // x0
  BalanceConfig_c *v20; // x8
  char v21; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v23; // x9
  __int64 v24; // x22
  unsigned __int64 v25; // x23
  SkillInfo_o *v26; // x8
  int32_t lv; // w2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A5BF81 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF81 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v11;
  *(_QWORD *)&v33.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL);
  if ( !v12 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v14 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, 0LL, v15);
  if ( idList )
  {
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v17 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v17 >= idList->max_length )
LABEL_41:
        sub_1B88814(Instance, id);
      id = (unsigned int)idList->m_Items[v17 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v14 )
          goto LABEL_40;
        v19 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v14, id, 1, 0LL);
        if ( v19 )
        {
          if ( SkillLvEntity__GetBonusUpVal(v19, eventUpVallInfo, questPhaseEntity, 0LL) )
            v18 = 1;
        }
      }
      ++v17;
    }
  }
  else
  {
    v18 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v16);
  if ( !Entity )
LABEL_40:
    sub_1B8880C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v20 = BalanceConfig_TypeInfo;
  v21 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  static_fields = v20->static_fields;
  v23 = 32LL;
  if ( (v21 & 1) != 0 )
    v23 = 44LL;
  v24 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v23);
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    while ( skillInfoList )
    {
      if ( v25 >= skillInfoList->max_length )
        goto LABEL_41;
      v26 = skillInfoList->m_Items[v25];
      if ( v26 )
      {
        id = (unsigned int)v26->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v26->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v14 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v14, id, lv, 0LL);
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
      if ( v24 == ++v25 )
        return v18 & 1;
    }
    goto LABEL_40;
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
  __int64 v13; // x25
  __int64 v14; // x26
  int32_t v15; // w25
  int32_t v16; // w26
  const MethodInfo *v17; // x2
  int32_t DispLimitCount; // w27
  EventUpValInfo_o *v19; // x28
  int32_t v20; // w2
  int32_t v21; // w3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  QuestPhaseEntity_o *v24; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  unsigned __int64 v28; // x25
  char v29; // w26
  int64_t v30; // x2
  EventUpValInfo_o *v31; // x29
  void *monitor; // x21
  Il2CppClass *klass; // x24
  const MethodInfo *v34; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5BF80 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF80 = 1;
  }
  entity = 0LL;
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v14;
  *(_QWORD *)&v37.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v17);
  v19 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v19, setupInfo, v15, v16, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v19, v20, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v24 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_1B8880C(Instance, v23);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v24, v26);
  if ( equipIds )
  {
    v27 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v27 >= 1 )
    {
      v28 = 0LL;
      v29 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v28 >= (unsigned int)v27 )
          sub_1B88814(Instance, v23);
        v30 = equipIds->m_Items[v28];
        if ( v30 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_26;
          Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        v30,
                                        (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_26;
            v31 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = klass;
            *(_QWORD *)&v38.fields.fakeValue = monitor;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
            if ( !v31 )
              goto LABEL_26;
            v31->fields.equipSvtId = (int)Instance;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_26;
            Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(
                                          (UserServantEntity_o *)entity,
                                          eventUpVallInfo,
                                          v24,
                                          v34);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v29 = 1;
          }
        }
        LODWORD(v27) = equipIds->max_length;
        ++v28;
      }
      while ( (__int64)v28 < (int)v27 );
      LOBYTE(Instance) = v29;
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
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
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
  System_Collections_Generic_HashSet_Enumerator_T__o v25; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v27; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4A5BFD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BFD2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  entity = 0LL;
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v6;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_32;
  v10 = *(_QWORD *)&enableSkillInfoList->max_length;
  v11 = v8;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    v13 = includeBeforeOverwrite;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        sub_1B88814(v8, v9);
      v14 = enableSkillInfoList->m_Items[v12];
      if ( v14 )
      {
        id = v14->fields.id;
        if ( id >= 1 )
        {
          lv = v14->fields.lv;
          if ( lv >= 1 )
          {
            if ( !Master_object )
              goto LABEL_32;
            SkillLvMaster__GetUniqueFuncIdsFromSkill((SkillLvMaster_o *)Master_object, &ret, id, lv, v13, 0LL);
          }
        }
      }
      LODWORD(v10) = enableSkillInfoList->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v10 );
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)ret;
  if ( !ret )
    goto LABEL_32;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v25,
    ret,
    (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v27 = v25;
  while ( 1 )
  {
    v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    if ( !v11 )
      sub_1B8880C(v18, v19);
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            v11,
            &entity,
            (int32_t)v27.fields._current,
            (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !entity )
        sub_1B8880C(v20, v21);
      if ( !v17 )
        sub_1B8880C(v20, v21);
      System_Collections_Generic_HashSet_int___Add(
        v17,
        HIDWORD(entity[4].monitor),
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v17 )
LABEL_32:
    sub_1B8880C(v8, v9);
  count = (unsigned int)v17->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v23 = (System_Int32_array *)sub_1B88658(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_54214840(
    v17,
    v23,
    (const MethodInfo_33B40B8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
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
  __int64 v5; // x0
  __int64 v6; // x0
  DataManager_o *v7; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v13; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v15; // x0
  const MethodInfo *v16; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5BFC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BFC3 = 1;
  }
  skillInfoList = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  if ( !v11 )
LABEL_17:
    sub_1B8880C(v7, includeBeforeOverwrite);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v11,
                                   (int32_t)v7,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_4A5BF64 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5BF64 = 1;
  }
  if ( UserServantEntity__get_IsRandomChoice(this, *(const MethodInfo **)&kind) && !ignoreRandomSettings )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    ChoiceLimitCount = RandomLimitCountManager__GetChoiceLimitCount(this, 0LL);
    if ( (unsigned int)kind > 4 )
      return -1;
    v8 = ChoiceLimitCount;
    if ( ((1 << kind) & 0x16) != 0 )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v12;
  *(_QWORD *)&v13.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
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
  void *Instance; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int128 v16; // q0
  UserServantCollectionMaster_o *v17; // x26
  int64_t v18; // x0
  __int64 v19; // x22
  __int64 v20; // x23
  int64_t v21; // x27
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  int32_t friendshipRank; // w26
  __int64 v25; // x0
  __int64 v26; // x0
  Il2CppObject *v27; // x0
  __int128 v28; // q0
  ServantPassiveSkillMaster_o *v29; // x27
  int64_t v30; // x0
  int32_t lv; // w28
  __int64 v32; // x22
  __int64 v33; // x23
  int64_t v34; // x29
  Il2CppObject *v35; // x24
  ServantStatusBattleListViewItem_o *v36; // x29
  bool v37; // w19
  BalanceConfig_c *v38; // x0
  System_Int32_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *Master_object; // x20
  Il2CppObject *v49; // x25
  Il2CppObject *v50; // x26
  int32_t v51; // w2
  int32_t v52; // w3
  int v53; // w8
  void *v54; // x27
  unsigned int v55; // w20
  __int64 v56; // x8
  int32_t v57; // w28
  int64_t UserId; // x0
  __int64 v59; // x22
  __int64 v60; // x23
  int64_t v61; // x29
  int32_t v62; // w4
  int32_t v63; // w2
  __int64 v64; // x22
  __int64 v65; // x8
  unsigned __int64 v66; // x23
  System_Int32_array *v67; // x8
  int max_length; // w9
  unsigned int v69; // w10
  __int64 v70; // x28
  char *v71; // x10
  _DWORD *v72; // x10
  int v73; // t1
  System_String_array *v74; // x8
  ServantStatusBattleListViewItem_c *klass; // x9
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t v78; // w2
  int32_t v79; // w3
  UserEventServantPointMaster_o *v80; // [xsp+38h] [xbp-F8h]
  UserServantEntity_o *v82; // [xsp+48h] [xbp-E8h]
  System_String_array **v83; // [xsp+50h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+A0h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4A5BF71 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5BF71 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v16 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v17 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v86 = v87;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v86, 0LL);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v89.fields.currentCryptoKey = v20;
  *(_QWORD *)&v89.fields.fakeValue = v19;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v89, 0LL);
  if ( !v17 )
    goto LABEL_73;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v17, v21, (int32_t)Instance, v22);
  if ( !Instance )
    goto LABEL_73;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v14);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v23);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BDA48C(v25);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1BDA48C(v26);
  Instance = **(void ***)(v26 + 184);
  if ( !Instance )
    goto LABEL_73;
  v83 = explanationList;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v28 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v29 = (ServantPassiveSkillMaster_o *)v27;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v85 = v87;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v85, 0LL);
  lv = this->fields.lv;
  v33 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v82 = this;
  v34 = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v90.fields.currentCryptoKey = v33;
  *(_QWORD *)&v90.fields.fakeValue = v32;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v90, 0LL);
  if ( !v29 )
    goto LABEL_73;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v29,
    idList,
    titleList,
    v83,
    dispSvtId,
    v34,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    nowTime,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v82->fields.svtId, 0LL);
  if ( !v35 )
    goto LABEL_73;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v35,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v36 = (ServantStatusBattleListViewItem_o *)v83;
  if ( !Instance )
    goto LABEL_73;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  v37 = *idList == 0LL;
  if ( !*idList )
  {
    v38 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v38 = BalanceConfig_TypeInfo;
    }
    v39 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v38->static_fields->SvtPassiveSkillListMax);
    *idList = v39;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)v39, v40, v41);
    v42 = (System_String_array *)sub_1B88658(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v42;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v42, v43, v44);
    v45 = sub_1B88658(string___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *v83 = (System_String_array *)v45;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v83, v45, v46, v47);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v49 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v50 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_73:
    sub_1B8880C(Instance, v14);
  v53 = *((_DWORD *)Instance + 6);
  v54 = Instance;
  if ( v53 >= 1 )
  {
    v80 = (UserEventServantPointMaster_o *)Master_object;
    v55 = 0;
    while ( 1 )
    {
      if ( v55 >= v53 )
        goto LABEL_72;
      v56 = *((_QWORD *)v54 + (int)v55 + 4);
      if ( !v56 )
        goto LABEL_73;
      v57 = *(_DWORD *)(v56 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v60 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
      v59 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
      v61 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v91.fields.currentCryptoKey = v60;
      *(_QWORD *)&v91.fields.fakeValue = v59;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v91, 0LL);
      Instance = v80;
      if ( !v80 )
        goto LABEL_73;
      Instance = (void *)UserEventServantPointMaster__TryGetEntity(v80, &entity, v61, v57, v62, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = entity;
        v36 = (ServantStatusBattleListViewItem_o *)v83;
        if ( !entity )
          goto LABEL_73;
        Instance = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v63 = (int)Instance;
      }
      else
      {
        v36 = (ServantStatusBattleListViewItem_o *)v83;
        v63 = 0;
      }
      if ( !v49 )
        goto LABEL_73;
      Instance = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)v49,
                   v57,
                   v63,
                   dispSvtId,
                   0LL);
      if ( Instance )
      {
        v64 = *((_QWORD *)Instance + 4);
        if ( !v64 )
          goto LABEL_73;
        v65 = *(_QWORD *)(v64 + 24);
        if ( (int)v65 >= 1 )
          break;
      }
LABEL_68:
      v53 = *((_DWORD *)v54 + 6);
      if ( (int)++v55 >= v53 )
        goto LABEL_69;
    }
    v66 = 0LL;
    while ( v66 < (unsigned int)v65 )
    {
      v67 = *idList;
      if ( !*idList )
        goto LABEL_73;
      max_length = v67->max_length;
      if ( max_length >= 1 )
      {
        v14 = (const MethodInfo *)*(unsigned int *)(v64 + 4 * v66 + 32);
        v69 = 0;
        while ( 1 )
        {
          if ( v69 >= max_length )
            goto LABEL_72;
          v70 = (int)v69;
          v71 = (char *)v67 + 4 * (int)v69;
          v73 = *((_DWORD *)v71 + 8);
          v72 = v71 + 32;
          if ( !v73 )
            break;
          v69 = v70 + 1;
          if ( (int)v70 + 1 >= max_length )
            goto LABEL_67;
        }
        *v72 = (_DWORD)v14;
        if ( !v50 )
          goto LABEL_73;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v50,
                     (int32_t)v14,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v74 = *titleList;
        if ( !*titleList )
          goto LABEL_73;
        klass = v36->klass;
        if ( !v36->klass || !Instance )
          goto LABEL_73;
        if ( (unsigned int)v70 >= v74->max_length || (unsigned int)v70 >= LODWORD(klass->_1.namespaze) )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          &v74->m_Items[v70],
          (System_String_o **)&klass->_1.byval_arg.data + v70,
          0,
          0LL);
        v37 = 0;
      }
LABEL_67:
      LODWORD(v65) = *(_DWORD *)(v64 + 24);
      if ( (__int64)++v66 >= (int)v65 )
        goto LABEL_68;
    }
LABEL_72:
    sub_1B88814(Instance, v14);
  }
LABEL_69:
  if ( v37 )
  {
    *idList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, 0, v51, v52);
    *titleList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, 0, v76, v77);
    v36->klass = 0LL;
    sub_1B88554(v36, 0, v78, v79);
  }
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
  System_Int32_array *CardSelectList; // x20
  System_Collections_Generic_List_int__o *v12; // x19
  BalanceConfig_c *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  int32_t v17; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5BFCD & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFCD = 1;
  }
  if ( !costumeIds )
    costumeIds = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v6;
  *(_QWORD *)&v22.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  v8 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v9 = v7;
  *(_QWORD *)&v23.fields.currentCryptoKey = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList = ImageLimitCount__GetCardSelectList(v9, v10, costumeIds, 0LL);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !CardSelectList )
    goto LABEL_29;
  v15 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1B88814(v13, v14);
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
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          v14,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = v14;
      }
      LODWORD(v15) = CardSelectList->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)v15 );
  }
  if ( !v12 )
LABEL_29:
    sub_1B8880C(v13, v14);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall UserServantEntity__GetSameSvtEquipNumIsLimitUp(
        UserServantEntity_o *this,
        bool isLimitMax,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  UserServantMaster_o *v10; // x21
  System_Collections_Generic_List_UserServantEntity__o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  int32_t v15; // w20
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5BFD6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFD6 = 1;
  }
  userStorageServantList = 0LL;
  memset(&v19, 0, sizeof(v19));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v9;
  *(_QWORD *)&v21.fields.fakeValue = v8;
  v11 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                  v21,
                                                                  0LL);
  if ( !v10 )
    goto LABEL_26;
  if ( !isWarehouseServantEquip )
  {
    v15 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v10, &userStorageServantList, (int32_t)v11, 0, v14) )
      return v15;
LABEL_12:
    v11 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v15 = 0;
      v19 = v18;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v19,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v15;
          }
          if ( !isLimitMax )
            break;
          if ( !v19.fields._current )
            sub_1B8880C(0LL, v16);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v19.fields._current, v16) )
            goto LABEL_21;
        }
        if ( !v19.fields._current )
          sub_1B8880C(0LL, v16);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v19.fields._current, v16) )
LABEL_21:
          ++v15;
      }
    }
LABEL_26:
    sub_1B8880C(v11, v12);
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v11,
         &userStorageServantList,
         (int32_t)v11,
         v13) )
  {
    goto LABEL_12;
  }
  return 0;
}


System_Int32_array *__fastcall UserServantEntity__GetSkillCategoryIdList(
        UserServantEntity_o *this,
        int32_t skillListNum,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v12; // x7
  bool IsServant; // w8
  UserServantEntity_o *v14; // x0
  const MethodInfo *v15; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5BFD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFD3 = 1;
  }
  skillInfoList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v7;
  *(_QWORD *)&v17.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !v8 )
    sub_1B8880C(v9, v10);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v8,
                                   v9,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  __int64 v9; // x0
  __int64 v10; // x0
  ServantSkillEntity_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v13; // x8
  ServantSkillMaster_o *v14; // x24
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v16; // x19
  __int128 v17; // q0
  int64_t userSvtId; // x26
  signed __int64 v19; // x27
  BalanceConfig_c *v20; // x0
  unsigned __int64 v21; // x23
  __int128 v22; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v24; // x25
  int64_t v25; // x0
  int32_t lv; // w28
  __int64 v27; // x19
  __int64 v28; // x27
  int64_t v29; // x29
  System_Int32_array *v31; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A5BF6B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BF6B = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  UseEntity = **(ServantSkillEntity_o ***)(v10 + 184);
  if ( !UseEntity )
LABEL_33:
    sub_1B8880C(UseEntity, *(_QWORD *)&servantId);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v13 = BalanceConfig_TypeInfo;
  v14 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  v31 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v13->static_fields->SvtSkillListMax);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  v16 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v17 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v39.fields.fakeValue = v17;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v38, -1LL, 0LL);
    v39 = v38;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v37 = v39;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v37, 0LL);
  v19 = 0LL;
  while ( 1 )
  {
    v20 = BalanceConfig_TypeInfo;
    v21 = v19;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v20->static_fields->SvtSkillListMax )
      return v31;
    v22 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v23 = *v16;
    v24 = v16;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v22;
    if ( !v23->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v23);
    v36 = v38;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v36, 0LL);
    lv = this->fields.lv;
    v27 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v28 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    v29 = v25;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v27;
    *(_QWORD *)&v40.fields.fakeValue = v28;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
    if ( !v14 )
      goto LABEL_33;
    v19 = v21 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  v14,
                  servantId,
                  (int)v21 + 1,
                  v29,
                  lv,
                  (int32_t)UseEntity,
                  dispLimitCount,
                  beforeQuestClear,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    v16 = v24;
    if ( UseEntity )
    {
      if ( !v31 )
        goto LABEL_33;
      if ( v21 >= v31->max_length )
        sub_1B88814(UseEntity, *(_QWORD *)&servantId);
      v31->m_Items[v21 + 1] = UseEntity->fields.skillId;
    }
  }
}


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
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x19
  bool IsServantEquip; // w24
  BalanceConfig_c *v18; // x0
  BalanceConfig_c *v19; // x0
  SkillInfo_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v24; // x19
  __int128 v25; // q0
  unsigned __int64 v26; // x29
  __int64 v27; // x25
  SkillInfo_o *v28; // x27
  __int128 v29; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v31; // x26
  int64_t v32; // x0
  int32_t lv; // w19
  __int64 v34; // x21
  __int64 v35; // x28
  int64_t v36; // x23
  int32_t v37; // w5
  unsigned __int64 v38; // x28
  ServantSkillEntity_o *v39; // x19
  int32_t skillNum; // w8
  SkillInfo_array *v41; // x19
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0
  __int64 v45; // [xsp+30h] [xbp-130h]
  __int64 v46; // [xsp+38h] [xbp-128h]
  __int64 v47; // [xsp+40h] [xbp-120h]
  bool v48; // [xsp+4Ch] [xbp-114h]
  int64_t userSvtId; // [xsp+50h] [xbp-110h]
  ServantSkillMaster_o *v53; // [xsp+70h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4A5BF6D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&SkillInfo_TypeInfo);
    byte_4A5BF6D = 1;
  }
  memset(&v57[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BDA48C(v13);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BDA48C(v14);
  Instance = **(_QWORD **)(v14 + 184);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v53 = (ServantSkillMaster_o *)MasterData_object;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        dispSvtId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_49;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  v46 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum <= 0 )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    skillListNum = v18->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    skillListNum = v19->static_fields->SvtEquipSkillListMax;
  }
  v20 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v20, v21, v22);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v23);
  v24 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v25 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v57[1].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v57[1].fields.fakeValue = v25;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v57, -1LL, 0LL);
    v57[1] = v57[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v56 = v57[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v56, 0LL);
  if ( skillListNum >= 1 )
  {
    v47 = (unsigned int)skillListNum;
    v26 = 0LL;
    v27 = 32LL;
    v45 = v46 + 32;
    v48 = finishEvent;
    while ( 1 )
    {
      v28 = (SkillInfo_o *)sub_1B887FC(SkillInfo_TypeInfo);
      SkillInfo___ctor(v28, 0LL);
      v29 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v30 = *v24;
      v31 = v24;
      *(_OWORD *)&v57[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v57[0].fields.fakeValue = v29;
      if ( !v30->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v30);
      v55 = v57[0];
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v55, 0LL);
      lv = this->fields.lv;
      v34 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v35 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v36 = v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v34;
      *(_QWORD *)&v58.fields.fakeValue = v35;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v58, 0LL);
      Instance = (__int64)v53;
      if ( !v53 )
        break;
      v38 = v26 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v53,
                            dispSvtId,
                            (int)v26 + 1,
                            v36,
                            lv,
                            v37,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v48,
                            0LL);
      if ( Instance )
      {
        if ( !v28 )
          break;
        v39 = (ServantSkillEntity_o *)Instance;
        v28->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v46 )
          break;
        if ( v26 >= *(unsigned int *)(v46 + 24) )
          goto LABEL_50;
        v28->fields.lv = *(_DWORD *)(v45 + 4 * v26);
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v28->fields.charge,
          &v28->fields.title,
          &v28->fields.explanation,
          *(_DWORD *)(v45 + 4 * v26),
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v39, 0LL);
        v28->fields.strengthStatus = Instance;
        skillNum = v39->fields.skillNum;
        v28->fields.isUse = 1;
        v28->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v28 )
          break;
        v28->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v53, dispSvtId, v38, 0LL);
          if ( Instance )
          {
            v28->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v28->fields.title,
              &v28->fields.explanation,
              0LL);
          }
        }
      }
      v41 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1B886EC(v28, v41->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v44 = sub_1B88830(0LL);
        sub_1B886D8(v44, 0LL);
      }
      if ( v26 >= v41->max_length )
LABEL_50:
        sub_1B88814(Instance, skillInfoList);
      v41->m_Items[v26] = v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v41 + v27), (int32_t)v28, v42, v43);
      v27 += 8LL;
      ++v26;
      v24 = v31;
      if ( v47 == v38 )
        return;
    }
LABEL_49:
    sub_1B8880C(Instance, skillInfoList);
  }
}


System_String_o *__fastcall UserServantEntity__GetSvtName(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x21
  __int64 v5; // x22
  ServantLimitAddMaster_o *v6; // x20
  __int64 ServantLimitCountSealAfter; // x0
  __int64 v8; // x1
  bool IsOverwriteSvtDetailName; // w20
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x2
  int32_t CardImageLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w20
  Il2CppObject *v14; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  ServantLimitImageMaster_o *v17; // x19
  int32_t v18; // w2
  int32_t v19; // w1
  Il2CppObject *v20; // x0
  Il2CppObject *v22; // x20
  __int64 v23; // x19
  __int64 v24; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5BFDD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5BFDD = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v5;
  *(_QWORD *)&v26.fields.fakeValue = v4;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
  if ( !v6 )
    goto LABEL_26;
  IsOverwriteSvtDetailName = ServantLimitAddMaster__IsOverwriteSvtDetailName(v6, ServantLimitCountSealAfter, 0LL);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                 this->fields.svtId,
                                 0LL);
  if ( !v10 )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
          &entity,
          ServantLimitCountSealAfter,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return string_TypeInfo->static_fields->Empty;
  if ( !IsOverwriteSvtDetailName )
  {
    v22 = entity;
    v24 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v24;
    *(_QWORD *)&v28.fields.fakeValue = v23;
    ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
    if ( v22 )
    {
      v19 = ServantLimitCountSealAfter;
      v18 = -1;
      v20 = v22;
      return ServantEntity__getName((ServantEntity_o *)v20, v19, v18, 0LL);
    }
LABEL_26:
    sub_1B8880C(ServantLimitCountSealAfter, v8);
  }
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(this, 0, v11);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (ServantLimitImageMaster_o *)v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v15;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
  if ( !v17 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v17,
                                 ServantLimitCountSealAfter,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  if ( !entity )
    goto LABEL_26;
  v18 = ServantLimitCountSealAfter;
  v19 = -1;
  v20 = entity;
  return ServantEntity__getName((ServantEntity_o *)v20, v19, v18, 0LL);
}


int32_t __fastcall UserServantEntity__GetTransformCount(
        UserServantEntity_o *this,
        bool includeBaseServant,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantTransformMaster_o *v8; // x21
  int32_t v9; // w0
  __int64 v10; // x8
  int32_t v11; // w20
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BFDB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFDB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  v10 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                    v16,
                                                                    0LL);
  if ( !v8
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(v8, v11, (int32_t)TransformServantIds, 0LL)) == 0LL )
  {
    sub_1B8880C(TransformServantIds, v13);
  }
  return TransformServantIds->fields._size + includeBaseServant;
}


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

  if ( (byte_4A5BFDC & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5BFDC = 1;
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
        j_il2cpp_runtime_class_init_0(v16);
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
          sub_1B8880C(v16, v13);
        if ( v15 >= v12->max_length )
LABEL_18:
          sub_1B88814(v16, v13);
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
    sub_1B8880C(IsNullOrEmpty, v13);
  if ( v15 >= v11->max_length )
LABEL_12:
    sub_1B88814(IsNullOrEmpty, v13);
  return v11->m_Items[v15 + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetTransformedServantId(
        UserServantEntity_o *this,
        int32_t transformCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantTransformMaster_o *v8; // x21
  int32_t v9; // w0
  __int64 v10; // x8
  int32_t v11; // w20
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BFD7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFD7 = 1;
  }
  if ( !transformCount )
    return UserServantEntity__getSvtId(this, *(const MethodInfo **)&transformCount);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  v10 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                    v16,
                                                                    0LL);
  if ( !v8
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(v8, v11, (int32_t)TransformServantIds, 0LL)) == 0LL )
  {
    sub_1B8880C(TransformServantIds, v13);
  }
  if ( TransformServantIds->fields._size >= transformCount )
    return System_Collections_Generic_List_int___get_Item(
             TransformServantIds,
             transformCount - 1,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
  else
    return 0;
}


bool __fastcall UserServantEntity__GetTransformedServantInfo(
        UserServantEntity_o *this,
        TransformServantInfo_o **transformInfo,
        int32_t transformCount,
        const MethodInfo *method)
{
  TransformServantInfo_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Master_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantTransformMaster_o *v13; // x22
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w21
  System_Collections_Generic_List_TransformServantInfo__o *TransformServantInfo; // x0
  __int64 v18; // x1
  int32_t size; // w21
  Il2CppObject *Item; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A5BFD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_TransformServantInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&TransformServantInfo_TypeInfo);
    byte_4A5BFD8 = 1;
  }
  v7 = (TransformServantInfo_o *)sub_1B887FC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor(v7, 0LL);
  *transformInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)transformInfo, (int32_t)v7, v8, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v12;
  *(_QWORD *)&v24.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  v15 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v25.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  TransformServantInfo = (System_Collections_Generic_List_TransformServantInfo__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                                      v25,
                                                                                      0LL);
  if ( !v13
    || (TransformServantInfo = ServantTransformMaster__GetTransformServantInfo(
                                 v13,
                                 v16,
                                 (int32_t)TransformServantInfo,
                                 0LL)) == 0LL )
  {
    sub_1B8880C(TransformServantInfo, v18);
  }
  size = TransformServantInfo->fields._size;
  if ( size > transformCount )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)TransformServantInfo,
             transformCount,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    *transformInfo = (TransformServantInfo_o *)Item;
    sub_1B88554((ServantStatusBattleListViewItem_o *)transformInfo, (int32_t)Item, v21, v22);
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
  __int64 TransformedServantInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  TransformServantInfo_o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5BFD9 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFD9 = 1;
  }
  transformInfo = 0LL;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformIndex,
                             *(const MethodInfo **)&specificLimitCount);
  if ( (useDispLimitCount & 0x80000000) != 0 )
  {
    v16 = transformInfo;
    v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v18;
    *(_QWORD *)&v21.fields.fakeValue = v17;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
    if ( !v16 )
LABEL_10:
      sub_1B8880C(TransformedServantInfo, v14);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v16, TransformedServantInfo, 0LL);
    useDispLimitCount = TransformedServantInfo;
  }
  if ( !transformInfo )
    goto LABEL_10;
  return UserServantEntity__GetSkillIdList(
           this,
           transformInfo->fields.svtId,
           useDispLimitCount,
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

  if ( (byte_4A5BFDA & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFDA = 1;
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
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v18;
    *(_QWORD *)&v21.fields.fakeValue = v17;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
    if ( !v16 )
LABEL_10:
      sub_1B8880C(TransformedServantInfo, v14);
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


System_Int32_array *__fastcall UserServantEntity__GetTreasureDeviceCategoryIdList(
        UserServantEntity_o *this,
        bool isLvOne,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x1
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v15; // x5
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  TreasureDvcMaster_o *v21; // x19
  TreasureDvcEntity_o *v22; // x19
  TreasureDvcLvMaster_o *v23; // x20
  TreasureDvcLvEntity_o *v24; // x0
  Il2CppObject *v25; // x19
  Il2CppObject *v26; // x23
  System_Collections_Generic_HashSet_int__o *v27; // x22
  const MethodInfo_33B3D90 **v28; // x27
  __int64 v29; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v31; // x24
  unsigned __int64 v32; // x29
  unsigned __int64 v33; // x9
  DataVals_o *v34; // x25
  int32_t v35; // w1
  int32_t Param; // w26
  int32_t v37; // w1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *v39; // x20
  const MethodInfo_33B3D90 **v40; // x22
  int32_t v41; // w26
  int32_t v42; // w27
  void *v43; // x8
  System_Collections_Generic_HashSet_int__o *v44; // x20
  _BOOL8 v45; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v51; // [xsp+0h] [xbp-D0h]
  DataVals_o **v52; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v53; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v54; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v55; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v56; // [xsp+48h] [xbp-88h] BYREF
  TreasureDvcLvEntity_o *v57; // [xsp+50h] [xbp-80h] BYREF
  SkillLvEntity_o *v58; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4A5BFD4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BFD4 = 1;
  }
  entity = 0LL;
  tdInfo = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  memset(&v55, 0, sizeof(v55));
  v54 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v7;
  *(_QWORD *)&v61.fields.fakeValue = v6;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v61, 0LL);
  if ( !v8 )
    goto LABEL_64;
  v11 = DataMasterBase_object__object__int___GetEntity(
          v8,
          (int32_t)DataValsList,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v11 )
    return 0LL;
  v13 = 0LL;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)v11, 0LL) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v12);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, DispLimitCount, -1, isLvOne, v15) )
      return 0LL;
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BDA48C(v16);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1BDA48C(v17);
    DataValsList = **(DataVals_array ***)(v17 + 184);
    if ( !DataValsList )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)DataValsList,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v21 = (TreasureDvcMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v20;
    *(_QWORD *)&v62.fields.fakeValue = v19;
    DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v62, 0LL);
    if ( !tdInfo || !v21 )
      goto LABEL_64;
    v22 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v21, (int32_t)DataValsList, tdInfo->fields.id, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v22 )
      goto LABEL_64;
    if ( !tdInfo )
      goto LABEL_64;
    v23 = (TreasureDvcLvMaster_o *)DataValsList;
    if ( !DataValsList )
      goto LABEL_64;
    v24 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, v22->fields.id, tdInfo->fields.lv, 0LL);
    v13 = (__int64)v24;
    if ( v24 )
    {
      if ( !v24->fields.funcId )
        return 0LL;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v51 = v23;
      v25 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
      v26 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v27 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v27,
        (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( !v27 )
        goto LABEL_64;
      v28 = (const MethodInfo_33B3D90 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
      System_Collections_Generic_HashSet_int___UnionWith(
        v27,
        *(System_Collections_Generic_IEnumerable_T__o **)(v13 + 32),
        (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      DataValsList = TreasureDvcLvEntity__getDataValsList((TreasureDvcLvEntity_o *)v13, 100, 0LL);
      v29 = *(_QWORD *)(v13 + 32);
      if ( !v29 )
        goto LABEL_64;
      m_Items = DataValsList->m_Items;
      v31 = DataValsList;
      v32 = 0LL;
      v52 = DataValsList->m_Items;
      while ( 1 )
      {
        v33 = *(unsigned int *)(v29 + 24);
        if ( (__int64)v32 >= (int)v33 )
        {
          v44 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v44,
            (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
          System_Collections_Generic_HashSet_int___GetEnumerator(
            &v53,
            v27,
            (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
          v55 = v53;
          while ( 1 )
          {
            v45 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                    &v55,
                    (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            if ( !v45 )
              break;
            if ( !v25 )
              sub_1B8880C(v45, v46);
            v47 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)v25,
                    &v54,
                    (int32_t)v55.fields._current,
                    (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( v47 )
            {
              if ( !v54 )
                sub_1B8880C(v47, v48);
              if ( !v44 )
                sub_1B8880C(v47, v48);
              System_Collections_Generic_HashSet_int___Add(
                v44,
                HIDWORD(v54[4].monitor),
                (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose(
            &v55,
            (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
          if ( v44 )
          {
            count = (unsigned int)v44->fields._count;
            if ( (int)count > 0 )
            {
              v13 = sub_1B88658(int___TypeInfo, count);
              System_Collections_Generic_HashSet_int___CopyTo_54214840(
                v44,
                (System_Int32_array *)v13,
                (const MethodInfo_33B40B8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
              return (System_Int32_array *)v13;
            }
            return 0LL;
          }
LABEL_64:
          sub_1B8880C(DataValsList, v10);
        }
        if ( v32 >= v33 )
          goto LABEL_77;
        if ( !v25 )
          goto LABEL_64;
        DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v25,
                                           &entity,
                                           *(_DWORD *)(v29 + 4 * v32 + 32),
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_64;
          DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v31 )
              goto LABEL_64;
            if ( v32 >= v31->max_length )
LABEL_77:
              sub_1B88814(DataValsList, v10);
            if ( !entity )
              goto LABEL_64;
            v34 = m_Items[v32];
            if ( !v34 )
              goto LABEL_64;
            DataVals__SetTempType(m_Items[v32], (FunctionMaster_o *)v25, (int32_t)entity[1].monitor, 0LL);
            v35 = DataVals__isParam(v34, 26, 0LL) ? 26 : 3;
            Param = DataVals__GetParam(v34, v35, 0, 0LL);
            v37 = DataVals__isParam(v34, 27, 0LL) ? 27 : 4;
            DataValsList = (DataVals_array *)DataVals__GetParam(v34, v37, 0, 0LL);
            if ( !v26 )
              goto LABEL_64;
            DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                               (SkillLvMaster_o *)v26,
                                               &v58,
                                               Param,
                                               (int32_t)DataValsList,
                                               0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              if ( !v58 )
                goto LABEL_64;
              funcId = (System_Collections_Generic_IEnumerable_T__o *)v58->fields.funcId;
              if ( funcId )
                System_Collections_Generic_HashSet_int___UnionWith(v27, funcId, *v28);
            }
            DataValsList = (DataVals_array *)DataVals__isParam(v34, 92, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              DataValsList = (DataVals_array *)DataVals__isParam(v34, 93, 0LL);
              if ( ((unsigned __int8)DataValsList & 1) != 0 )
              {
                v39 = v27;
                v40 = v28;
                v41 = DataVals__GetParam(v34, 92, 0, 0LL);
                v42 = DataVals__GetParam(v34, 93, 0, 0LL);
                if ( DataVals__isParam(v34, 95, 0LL) )
                {
                  DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v51, &v57, v41, v42, 0LL);
                  v28 = v40;
                  v27 = v39;
                  m_Items = v52;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v43 = v57;
                    if ( !v57 )
                      goto LABEL_64;
LABEL_61:
                    v10 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v43 + 4);
                    if ( v10 )
                      System_Collections_Generic_HashSet_int___UnionWith(v27, v10, *v28);
                  }
                }
                else
                {
                  DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                     (SkillLvMaster_o *)v26,
                                                     &v56,
                                                     v41,
                                                     v42,
                                                     0LL);
                  v28 = v40;
                  v27 = v39;
                  m_Items = v52;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v43 = v56;
                    if ( !v56 )
                      goto LABEL_64;
                    goto LABEL_61;
                  }
                }
              }
            }
          }
        }
        v29 = *(_QWORD *)(v13 + 32);
        ++v32;
        if ( !v29 )
          goto LABEL_64;
      }
    }
  }
  return (System_Int32_array *)v13;
}


bool __fastcall UserServantEntity__GetTreasureDeviceInfo(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  int32_t FriendshipRank; // w24
  __int64 v20; // x0
  __int64 v21; // x0
  DataManager_o *Instance; // x0
  bool v23; // w20
  int32_t v24; // w23
  int32_t v25; // w19
  Il2CppObject *MasterData_object; // x0
  __int128 v27; // q0
  ServantTreasureDvcMaster_o *v28; // x26
  int64_t v29; // x0
  int32_t lv; // w27
  __int64 v31; // x22
  __int64 v32; // x29
  int64_t v33; // x28
  int32_t v34; // w29
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int128 v36; // q0
  TreasureDvcInfo_o **v37; // x19
  int64_t v38; // x0
  ServantTreasureDvcEntity_o *v39; // x23
  TreasureDvcInfo_o *v40; // x8
  DataManager_o *v41; // x22
  TreasureDvcInfo_o *v42; // x20
  TreasureDvcInfo_o **v44; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4A5BF88 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A5BF88 = 1;
  }
  v13 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v13, 0LL);
  *tdInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v13, v14, v15);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v16);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v18);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BDA48C(v20);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BDA48C(v21);
  Instance = **(DataManager_o ***)(v21 + 184);
  if ( !Instance )
    goto LABEL_38;
  v44 = tdInfo;
  v23 = isLvOne;
  v24 = dispSvtId;
  v25 = beforeClearQuestId;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v27 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v28 = (ServantTreasureDvcMaster_o *)MasterData_object;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v47;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v46, 0LL);
  lv = this->fields.lv;
  v31 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v33 = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v31;
  *(_QWORD *)&v48.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v48, 0LL);
  if ( !v28 )
    goto LABEL_38;
  v34 = v24;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v28,
                v24,
                v33,
                lv,
                (int32_t)Instance,
                dispLimitCount,
                FriendshipRank,
                v25,
                0LL);
  if ( v23 )
  {
    v36 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v37 = v44;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v36;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v45 = v47;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v45, 0LL);
    UseEntity = ServantTreasureDvcMaster__getUseEntity(v28, v24, v38, 1, 0, 0, 0, -1, 0LL);
  }
  else
  {
    v37 = v44;
  }
  v39 = UseEntity;
  if ( UseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, v34, 1, 0LL);
        v40 = *v37;
        if ( *v37 )
        {
          v41 = Instance;
          v40->fields.id = v39->fields.treasureDeviceId;
          v40->fields.lv = this->fields.treasureDeviceLv1;
          if ( Instance )
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                          (ServantFlagReleaseMaster_o *)Instance,
                                          v34,
                                          *((_DWORD *)&v41->fields.UnityEngine_Behaviour_Fields + 1),
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                            (ServantFlagMaster_o *)Instance,
                                            v34,
                                            *((_DWORD *)&v41->fields.UnityEngine_Behaviour_Fields + 1),
                                            0LL);
              if ( (int)Instance >= 1 )
              {
                if ( !*v37 )
                  goto LABEL_38;
                (*v37)->fields.id = (int)Instance;
              }
            }
          }
          v42 = *v37;
          if ( *v37 )
          {
            Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                          v39,
                                          &v42->fields.name,
                                          &v42->fields.explanation,
                                          &v42->fields.maxLv,
                                          &v42->fields.guageCount,
                                          &v42->fields.cardId,
                                          &v42->fields.strengthStatus,
                                          &v42->fields.treasureDeviceNum,
                                          v42->fields.lv,
                                          0LL);
            v42->fields.isUse = (unsigned __int8)Instance & 1;
            if ( *v37 )
              return (*v37)->fields.isUse;
          }
        }
      }
    }
LABEL_38:
    sub_1B8880C(Instance, v17);
  }
  return 0;
}


UserServantCommandCardEntity_o *__fastcall UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  DataManager_o *v5; // x0
  Il2CppObject *MasterData_object; // x0
  __int128 v7; // q0
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

  if ( (byte_4A5BFC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BFC1 = 1;
  }
  entity = 0LL;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = **(DataManager_o ***)(v4 + 184);
  if ( !v5 )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        v5,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v7 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v8 = (UserServantCommandCardMaster_o *)MasterData_object;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v15, 0LL);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v5 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  if ( !v8 )
LABEL_14:
    sub_1B8880C(v5, method);
  UserServantCommandCardMaster__TryGetEntity(v8, &entity, v12, (int)v5, v13);
  return entity;
}


bool __fastcall UserServantEntity__HasStatus(UserServantEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool __fastcall UserServantEntity__HasTransform(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x21
  __int64 v5; // x22
  ServantTransformMaster_o *v6; // x20
  int32_t v7; // w0
  __int64 v8; // x8
  int32_t v9; // w19
  __int64 v10; // x0
  __int64 v11; // x1
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BF63 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF63 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v5;
  *(_QWORD *)&v14.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  v8 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v9 = v7;
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !v6 )
    sub_1B8880C(v10, v11);
  return ServantTransformMaster__TryGetEntity(v6, &entity, v9, v10, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BFC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool __fastcall UserServantEntity__IsCombineExp(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BFA9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BF93 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF93 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5BFC7 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5BFC7 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL) )
  {
    v6 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL) == 1;
  }
  else
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
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

  if ( (byte_4A5BFC9 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5BFC9 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL) )
  {
    v6 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL) == 1;
  }
  else
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
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
  UserServantEntity__getTreasureDeviceInfo_40212352(this, &tdMaxLv[1], tdMaxLv, v3);
  return tdMaxLv[0] < tdMaxLv[1] + targetLv;
}


bool __fastcall UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *CombineEventCampaigns; // x0
  char i; // w23
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int128 v9; // q1
  int64_t v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+60h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+88h] [xbp-48h] BYREF

  if ( (byte_4A5BFCE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCombineExpMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFCE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  CombineEventCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns(
                                                                         (EventCampaignMaster_o *)Instance,
                                                                         0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    CombineEventCampaigns,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= HIDWORD(v16.fields._current[1].klass) == 27 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v16.fields._current )
      sub_1B8880C(v7, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
LABEL_17:
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(Instance, v4);
  }
  UserCombineExpMaster__GetUserSvtId(&v14, (UserCombineExpMaster_o *)Instance, 0LL);
  v15 = v14;
  v9 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
  v12 = v15;
  if ( v10 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL) )
    goto LABEL_17;
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BFC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFC4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BF9F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BFC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFC5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BF9B & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5BF9B = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37688364(126, 0LL);
}


bool __fastcall UserServantEntity__IsLock(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool __fastcall UserServantEntity__IsMaterialTd(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BFD1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFD1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5BFC2 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFC2 = 1;
  }
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL) != battleVoice;
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

  if ( (byte_4A5BFCC & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFCC = 1;
  }
  v8 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL) != ownSettingParam )
    return 1;
  v10 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL) != friendFollowSettingParam;
}


bool __fastcall UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  int64_t UserId; // x0
  __int128 v4; // q0
  int64_t v5; // x20
  __int128 v6; // q0
  int64_t v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  if ( (byte_4A5BF99 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    byte_4A5BF99 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v5 = UserId;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  if ( v5 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v11, 0LL) )
  {
    v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v10 = v12;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v10, 0LL);
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
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
      sub_1B8880C(0LL, v6);
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
  int32_t ServantLimitMax; // w24
  int v9; // w24
  Il2CppObject *Master_object; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  UserServantMaster_o *v13; // x21
  System_Collections_Generic_List_UserServantEntity__o *v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  int v18; // w21
  bool EntityListBySvtId; // w0
  UserServantEntity_Fields *p_fields; // x22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x19
  Il2CppObject v25; // q0
  int64_t v26; // x0
  __int128 v27; // q0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  int32_t LimitCount; // w20
  BalanceConfig_c *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5BFD5 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BFD5 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  userStorageServantList = 0LL;
  memset(&v35, 0, sizeof(v35));
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  ServantLimitMax = v5->static_fields->ServantLimitMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v7;
  *(_QWORD *)&v37.fields.fakeValue = v6;
  v9 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  if ( !v9 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v12;
  *(_QWORD *)&v38.fields.fakeValue = v11;
  v14 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                  v38,
                                                                  0LL);
  if ( !v13 )
    goto LABEL_33;
  if ( !isWarehouseServantEquip )
  {
    EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(v13, &userStorageServantList, (int32_t)v14, 0, v17);
    v18 = 0;
    if ( !EntityListBySvtId )
      return v9 <= v18;
    goto LABEL_18;
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v14,
         &userStorageServantList,
         (int32_t)v14,
         v16) )
  {
LABEL_18:
    v14 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      *(_OWORD *)&v35.fields._list = *(_OWORD *)&v34.fields.currentCryptoKey;
      v35.fields._current = (Il2CppObject *)v34.fields.fakeValue;
      v18 = 0;
      p_fields = &this->fields;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v22 )
          break;
        current = v35.fields._current;
        if ( !v35.fields._current )
          sub_1B8880C(v22, v23);
        v25 = v35.fields._current[2];
        *(Il2CppObject *)&v34.fields.currentCryptoKey = v35.fields._current[1];
        *(Il2CppObject *)&v34.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
        v27 = *(_OWORD *)&p_fields->id.fields.fakeValue;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v27;
        if ( v26 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v28);
          v31 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v31 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v31->static_fields->ServantLimitMax )
            v18 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v29) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v9 <= v18;
    }
LABEL_33:
    sub_1B8880C(v14, v15);
  }
  v18 = 0;
  return v9 <= v18;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5BFCB & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFCB = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BFAA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFAA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5BF85 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF85 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  return QuestRestrictionInfo__IsUniqueIndividuality_40439764(questRestrictionInfo, v7, v8, DispLimitCount, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_40210708(
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

  if ( (byte_4A5BF86 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF86 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_40440384(
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

  if ( (byte_4A5BFC8 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFC8 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


void __fastcall UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5BF9A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    byte_4A5BF9A = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v5, 0LL);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
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

  if ( (byte_4A5BFCA & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFCA = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL);
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
  __int128 v5; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-50h]

  if ( (byte_4A5BF8A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BF8A = 1;
  }
  v5 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v7, 0LL) == inId;
}


int32_t __fastcall UserServantEntity__checkTreasureDeviceLevelUp(
        UserServantEntity_o *this,
        int32_t targetLv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0LL;
  UserServantEntity__getTreasureDeviceInfo_40212352(this, &tdMaxLv[1], tdMaxLv, v3);
  if ( tdMaxLv[1] + targetLv >= tdMaxLv[0] )
    return tdMaxLv[0];
  else
    return tdMaxLv[1] + targetLv;
}


int32_t __fastcall UserServantEntity__getAddTotalExp(
        UserServantEntity_o *this,
        int32_t materialId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5BFBE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_1B885B0(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v10; // x1
  int32_t klass_high; // w23
  _DWORD *v12; // x22
  BalanceConfig_c *v13; // x0
  int32_t adjustAtk; // w8
  int32_t v15; // w20

  if ( (byte_4A5BFA7 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v10),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  klass_high = HIDWORD(Instance[1].klass);
  v12 = Instance;
  v13 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= klass_high )
    klass_high = v12[7];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  *hpData = v13->static_fields->StatusUpAdjustHp * klass_high;
  adjustAtk = this->fields.adjustAtk;
  v15 = v12[6];
  if ( adjustAtk >= v15 )
  {
    v15 = v12[8];
    if ( !v13->_2.cctor_finished )
    {
LABEL_14:
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BalanceConfig_TypeInfo;
    }
  }
  else if ( !v13->_2.cctor_finished )
  {
    goto LABEL_14;
  }
  *atkData = v13->static_fields->StatusUpAdjustAtk * v15;
}


SvtUseSkillData_o *__fastcall UserServantEntity__getAppendSkillInfo(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x21
  __int64 v5; // x22
  ServantAppendPassiveSkillMaster_o *v6; // x19
  unsigned __int64 v7; // x0
  Il2CppClass *klass; // x1
  SvtUseSkillData_o *SkillData; // x19
  Il2CppObject *v10; // x0
  __int128 v11; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  struct System_Int32_array *svtSkillNumsList; // x8
  __int64 v14; // x0
  struct System_Int32_array **p_svtSkillLvList; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x0
  __int128 v19; // q1
  UserServantAppendPassiveSkillMaster_o *v20; // x22
  int64_t v21; // x0
  __int64 v22; // x8
  int64_t v23; // x20
  const MethodInfo *v24; // x4
  struct System_Int32_array *unlockNums; // x16
  __int64 v26; // x8
  struct System_Int32_array *v27; // x9
  unsigned __int64 max_length; // x10
  Il2CppObject *v29; // x12
  struct System_Int32_array *v30; // x14
  unsigned __int64 v31; // x11
  int32_t *v32; // x16
  __int64 v33; // x0
  __int64 v34; // x2
  int32_t *v35; // x3
  unsigned __int64 namespaze_low; // x2
  __int64 v37; // x5
  _DWORD *monitor; // x7
  __int64 v39; // x6
  struct System_Int32_array *v40; // x8
  __int64 v41; // x10
  struct System_Int32_array *v42; // x9
  unsigned __int64 v43; // x8
  __int64 v44; // x11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-60h]
  UserServantAppendPassiveSkillEntity_o *v49; // [xsp+68h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4A5BF72 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BF72 = 1;
  }
  entity = 0LL;
  v49 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v5;
  *(_QWORD *)&v51.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
  if ( !v6 )
    goto LABEL_50;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v6, v7, 0LL);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v11 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v10;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v47 = v48;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v47, 0LL);
  if ( !v12 )
    goto LABEL_50;
  v7 = DataMasterBase_object__object__long___TryGetEntity(
         v12,
         &entity,
         v7,
         (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_50;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_50;
  v14 = sub_1B88658(int___TypeInfo, svtSkillNumsList->max_length);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v14;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&SkillData->fields.svtSkillLvList, v14, v16, v17);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v19 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v20 = (UserServantAppendPassiveSkillMaster_o *)v18;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v46, 0LL);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v52.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = v21;
  *(_QWORD *)&v52.fields.currentCryptoKey = v22;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL);
  if ( !v20 )
    goto LABEL_50;
  v7 = UserServantAppendPassiveSkillMaster__TryGetEntity(v20, &v49, v23, v7, v24);
  if ( (v7 & 1) == 0 )
    goto LABEL_42;
  if ( !v49 )
    goto LABEL_50;
  unlockNums = v49->fields.unlockNums;
  if ( !unlockNums )
    goto LABEL_50;
  v26 = *(_QWORD *)&unlockNums->max_length;
  if ( !v26 )
  {
LABEL_42:
    v40 = SkillData->fields.svtSkillNumsList;
    if ( v40 )
    {
      v41 = *(_QWORD *)&v40->max_length;
      if ( v41 << 32 < 1 )
        return SkillData;
      v42 = *p_svtSkillLvList;
      v43 = 0LL;
      v44 = (__int64)&(*p_svtSkillLvList)->m_Items[1];
      while ( v42 )
      {
        if ( v43 >= v42->max_length )
          goto LABEL_49;
        *(_DWORD *)(v44 + 4 * v43++) = 0;
        if ( (__int64)v43 >= (int)v41 )
          return SkillData;
      }
    }
LABEL_50:
    sub_1B8880C(v7, klass);
  }
  v27 = SkillData->fields.svtSkillNumsList;
  if ( !v27 )
    goto LABEL_50;
  max_length = v27->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v29 = entity;
    v30 = *p_svtSkillLvList;
    v31 = 0LL;
    v32 = &unlockNums->m_Items[1];
    while ( 1 )
    {
      if ( !v30 )
        goto LABEL_50;
      v7 = v30->max_length;
      if ( v31 >= v7 )
        goto LABEL_49;
      v33 = (__int64)v30 + 4 * v31;
      *(_DWORD *)(v33 + 32) = 0;
      v7 = v33 + 32;
      if ( (int)v26 >= 1 )
      {
        if ( v31 >= max_length )
          goto LABEL_49;
        klass = (Il2CppClass *)&v27->m_Items[v31 + 1];
        v34 = (unsigned int)v26;
        v35 = v32;
        do
        {
          if ( LODWORD(klass->_1.image) == *v35 )
            *(_DWORD *)v7 = 1;
          --v34;
          ++v35;
        }
        while ( v34 );
      }
      if ( v29 )
      {
        klass = v29[5].klass;
        if ( !klass )
          goto LABEL_50;
        namespaze_low = LODWORD(klass->_1.namespaze);
        if ( (__int64)(namespaze_low << 32) >= 1 )
          break;
      }
LABEL_40:
      if ( (__int64)++v31 >= (int)max_length )
        return SkillData;
    }
    v37 = 8LL;
    while ( v31 < max_length && v37 - 8 < namespaze_low )
    {
      if ( v27->m_Items[v31 + 1] == *((_DWORD *)&klass->_1.image + v37) )
      {
        monitor = v29[5].monitor;
        if ( !monitor )
          goto LABEL_50;
        if ( v37 - 8 >= (unsigned __int64)(unsigned int)monitor[6] )
          break;
        *(_DWORD *)v7 = monitor[v37];
      }
      v39 = v37 - 7;
      ++v37;
      if ( v39 >= (int)namespaze_low )
        goto LABEL_40;
    }
LABEL_49:
    sub_1B88814(v7, klass);
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
        int64_t nowTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x28
  __int64 v20; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x26
  Il2CppObject *v22; // x26
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x7
  unsigned __int64 v25; // x25
  char v26; // w27
  SkillLvEntity_o *Entity; // x0
  signed __int64 i; // x24
  signed __int64 v29; // x8
  SkillInfo_o *v30; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v32; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4A5BF7D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF7D = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  skillInfoList = 0LL;
  explanationList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v20;
  *(_QWORD *)&v39.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
  if ( !v21
    || (DataMasterBase_object__object__int___GetEntity(
          v21,
          (int32_t)Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_34:
    sub_1B8880C(Instance, id);
  }
  v22 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v23);
  if ( idList )
  {
    v25 = 0LL;
    v26 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v25 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_34;
      if ( v25 >= idList->max_length )
LABEL_35:
        sub_1B88814(Instance, id);
      id = (unsigned int)idList->m_Items[v25 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v22 )
          goto LABEL_34;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)v22, id, 1, 0LL);
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
            return v26;
          }
        }
      }
      ++v25;
    }
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, finishEvent, -1, v24);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v29 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    v26 = i < v29;
    if ( i >= v29 )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( i >= (unsigned __int64)skillInfoList->max_length )
      goto LABEL_35;
    v30 = skillInfoList->m_Items[i];
    if ( v30 )
    {
      id = (unsigned int)v30->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v30->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v22 )
            goto LABEL_34;
          v32 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v22, id, lv, 0LL);
          if ( v32 )
          {
            if ( SkillLvEntity__getEventUpVal(
                   v32,
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
  return v26;
}


bool __fastcall UserServantEntity__getBaseEventUpVal_40207812(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        int64_t nowTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x23
  Il2CppObject *v14; // x20
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x7
  unsigned __int64 v17; // x26
  char v18; // w25
  SkillLvEntity_o *v19; // x0
  char v20; // w22
  BalanceConfig_c *v21; // x8
  char v22; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v24; // x9
  __int64 v25; // x21
  unsigned __int64 v26; // x23
  SkillInfo_o *v27; // x8
  int32_t lv; // w2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A5BF7F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF7F = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v11;
  *(_QWORD *)&v34.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
  if ( !v12 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v14 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v15);
  if ( idList )
  {
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v17 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v17 >= idList->max_length )
LABEL_41:
        sub_1B88814(Instance, id);
      id = (unsigned int)idList->m_Items[v17 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v14 )
          goto LABEL_40;
        v19 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v14, id, 1, 0LL);
        if ( v19 )
        {
          if ( SkillLvEntity__getEventUpVal_39954432(v19, eventUpVallInfo, 1, 1, 0, 0, nowTime, 0LL) )
            v18 = 1;
        }
      }
      ++v17;
    }
    v20 = v18;
  }
  else
  {
    v20 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v16);
  if ( !Entity )
LABEL_40:
    sub_1B8880C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v21 = BalanceConfig_TypeInfo;
  v22 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  static_fields = v21->static_fields;
  v24 = 32LL;
  if ( (v22 & 1) != 0 )
    v24 = 44LL;
  v25 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v24);
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( skillInfoList )
    {
      if ( v26 >= skillInfoList->max_length )
        goto LABEL_41;
      v27 = skillInfoList->m_Items[v26];
      if ( v27 )
      {
        id = (unsigned int)v27->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v27->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v14 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v14, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_39954432(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0LL,
                                            0LL);
              v20 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v25 == ++v26 )
        return v20 & 1;
    }
    goto LABEL_40;
  }
  return v20 & 1;
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpType(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantSkillMaster_o *v8; // x20
  ServantSkillEntity_array *ServantSkillList; // x0
  UserServantEntity___c_c *v10; // x8
  System_Object_array *v11; // x20
  System_Comparison_T__o *_9__58_0; // x21
  Il2CppObject *v13; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int max_length; // w8
  unsigned int v18; // w27
  Il2CppClass **v19; // x8
  ServantSkillEntity_o *v20; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v23; // x24
  __int64 v24; // x25
  int64_t v25; // x23
  int32_t v26; // w0
  const MethodInfo *v27; // x2
  int32_t SkillLevel; // w0
  const MethodInfo *v29; // x2
  int32_t v31; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A5BF76 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_ServantSkillEntity___);
    sub_1B885B0(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantEntity___c__getBaseFriendPointUpType_b__58_0__);
    sub_1B885B0(&UserServantEntity___c_TypeInfo);
    byte_4A5BF76 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v7;
  *(_QWORD *)&v32.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32, 0LL);
  if ( !v8 )
    goto LABEL_29;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v8, (int32_t)Instance, 0LL);
  v10 = UserServantEntity___c_TypeInfo;
  v11 = (System_Object_array *)ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v10 = UserServantEntity___c_TypeInfo;
  }
  _9__58_0 = (System_Comparison_T__o *)v10->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = UserServantEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__58_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__58_0,
      v13,
      Method_UserServantEntity___c__getBaseFriendPointUpType_b__58_0__,
      0LL);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__58_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v15, v16);
  }
  System_Array__Sort_object__48551928(
    v11,
    _9__58_0,
    (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v11 )
    goto LABEL_29;
  max_length = v11->max_length;
  if ( max_length < 1 )
    return 0;
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= max_length )
      sub_1B88814(Instance, v4);
    v19 = &v11->obj.klass + (int)v18;
    v20 = (ServantSkillEntity_o *)v19[4];
    if ( !v20 )
      goto LABEL_29;
    Instance = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v19[4], 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      lv = this->fields.lv;
      v24 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v23 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v25 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v24;
      *(_QWORD *)&v33.fields.fakeValue = v23;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL);
      Instance = (DataManager_o *)ServantSkillEntity__isUse(v20, v25, lv, v26, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        SkillLevel = UserServantEntity__getSkillLevel(this, v20->fields.num - 1, v27);
        Instance = (DataManager_o *)ServantSkillEntity__getFriendPointUpVal(v20, SkillLevel, 0LL);
        if ( (int)Instance >= 1 )
          break;
      }
    }
    max_length = v11->max_length;
    if ( (int)++v18 >= max_length )
      return 0;
  }
  v31 = UserServantEntity__getSkillLevel(this, v20->fields.num - 1, v29);
  Instance = (DataManager_o *)ServantSkillEntity__getSkillLvEntity(v20, v31, 0LL);
  if ( !Instance )
LABEL_29:
    sub_1B8880C(Instance, v4);
  return SkillLvEntity__getFriendPointUpType((SkillLvEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpVal(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantSkillMaster_o *v8; // x20
  ServantSkillEntity_array *ServantSkillList; // x0
  UserServantEntity___c_c *v10; // x8
  System_Object_array *v11; // x20
  System_Comparison_T__o *_9__57_0; // x21
  Il2CppObject *v13; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int max_length; // w8
  unsigned int v18; // w27
  Il2CppClass **v19; // x8
  ServantSkillEntity_o *v20; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v23; // x24
  __int64 v24; // x25
  int64_t v25; // x23
  int32_t v26; // w0
  const MethodInfo *v27; // x2
  int32_t SkillLevel; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A5BF75 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_ServantSkillEntity___);
    sub_1B885B0(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantEntity___c__getBaseFriendPointUpVal_b__57_0__);
    sub_1B885B0(&UserServantEntity___c_TypeInfo);
    byte_4A5BF75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v7;
  *(_QWORD *)&v30.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
  if ( !v8 )
    goto LABEL_28;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v8, (int32_t)Instance, 0LL);
  v10 = UserServantEntity___c_TypeInfo;
  v11 = (System_Object_array *)ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v10 = UserServantEntity___c_TypeInfo;
  }
  _9__57_0 = (System_Comparison_T__o *)v10->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = UserServantEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__57_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__57_0,
      v13,
      Method_UserServantEntity___c__getBaseFriendPointUpVal_b__57_0__,
      0LL);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__57_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v15, v16);
  }
  System_Array__Sort_object__48551928(
    v11,
    _9__57_0,
    (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v11 )
    goto LABEL_28;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1B88814(Instance, v4);
      v19 = &v11->obj.klass + (int)v18;
      v20 = (ServantSkillEntity_o *)v19[4];
      if ( !v20 )
        break;
      Instance = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v19[4], 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        lv = this->fields.lv;
        v24 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v23 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v25 = UserId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v31.fields.currentCryptoKey = v24;
        *(_QWORD *)&v31.fields.fakeValue = v23;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
        Instance = (Il2CppObject *)ServantSkillEntity__isUse(v20, v25, lv, v26, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v20->fields.num - 1, v27);
          Instance = (Il2CppObject *)ServantSkillEntity__getFriendPointUpVal(v20, SkillLevel, 0LL);
          if ( (int)Instance > 0 )
            return (int)Instance;
        }
      }
      max_length = v11->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B8880C(Instance, v4);
  }
LABEL_26:
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

  if ( (byte_4A5BFAF & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFAF = 1;
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = v10;
        *(_QWORD *)&v15.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
        v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v13 = v11;
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        return ImageLimitCount__GetCardImageLimitCount(v13, v14, 1, 0, 0LL);
      }
    }
  }
  else
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BF8F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF8F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return (int32_t)Instance[13].klass;
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BF95 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineQpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity(
                     (CombineQpMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BFA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_1B8880C(0LL, v3);
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
      return BasicHelper__DecryptValue_41109412(this->fields.limitCount, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int128 v6; // q0
  Il2CppObject *v7; // x20
  int64_t v8; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  int64_t v11; // x19
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BFBF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = MasterData_object;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v7 )
LABEL_10:
    sub_1B8880C(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v11,
           (int32_t)Instance,
           v12);
}


int32_t __fastcall UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BFAB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFAB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
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
  int32_t result; // w0
  bool v11; // cc
  int32_t v12; // w20
  int32_t v13; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BFAD & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFAD = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  v8 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v9 = LimitCountWithRandom;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  v12 = v9 - 1;
  v11 = v9 < 1;
  v13 = result;
  if ( !v11 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetLimitCountByDispLimit(v12, v13, 0LL);
  }
  return result;
}


void __fastcall UserServantEntity__getEquipSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        bool useUserSvtId,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v9; // x24
  __int64 v10; // x0
  BalanceConfig_c *v11; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v12; // x27
  SkillInfo_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int128 v16; // q0
  unsigned __int64 v17; // x23
  __int64 i; // x22
  BalanceConfig_c *v19; // x0
  BalanceConfig_c **v20; // x19
  SkillInfo_o *v21; // x24
  __int64 v22; // x25
  __int64 v23; // x26
  int32_t v24; // w0
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x21
  int32_t v28; // w26
  int64_t v29; // x0
  int32_t lv; // w27
  int64_t v31; // x28
  int32_t v32; // w5
  ServantSkillEntity_o *v33; // x26
  int32_t skillNum; // w8
  SkillInfo_array *v35; // x26
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x0
  __int64 v39; // [xsp+28h] [xbp-108h]
  __int64 v40; // [xsp+30h] [xbp-100h]
  int64_t userSvtId; // [xsp+38h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_object; // [xsp+40h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4A5BF6E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&SkillInfo_TypeInfo);
    byte_4A5BF6E = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  UseEntity = **(DataManager_o ***)(v7 + 184);
  if ( !UseEntity )
LABEL_38:
    sub_1B8880C(UseEntity, skillInfoList);
  v9 = &BalanceConfig_TypeInfo;
  MasterData_object = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                                UseEntity,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v10 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  v11 = BalanceConfig_TypeInfo;
  v40 = v10;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v13 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v11->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v13, v14, v15);
  if ( useUserSvtId )
  {
    v16 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v16;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v46, -1LL, 0LL);
    v47 = v46;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v45 = v47;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v45, 0LL);
  v17 = 0LL;
  v39 = v40 + 32;
  for ( i = 32LL; ; i += 8LL )
  {
    v19 = *v9;
    if ( !(*v9)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = *v9;
    }
    if ( (__int64)v17 >= v19->static_fields->SvtEquipSkillListMax )
      break;
    v20 = v9;
    v21 = (SkillInfo_o *)sub_1B887FC(SkillInfo_TypeInfo);
    SkillInfo___ctor(v21, 0LL);
    v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v23;
    *(_QWORD *)&v48.fields.fakeValue = v22;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v48, 0LL);
    v25 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v26 = *v12;
    v27 = v12;
    v28 = v24;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v25;
    if ( !v26->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v26);
    v44 = v46;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v44, 0LL);
    lv = this->fields.lv;
    v31 = v29;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_38;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_object,
                                   v28,
                                   (int)v17 + 1,
                                   v31,
                                   lv,
                                   v32,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0LL);
    if ( UseEntity )
    {
      if ( !v21 )
        goto LABEL_38;
      v33 = (ServantSkillEntity_o *)UseEntity;
      v21->fields.id = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      if ( !v40 )
        goto LABEL_38;
      if ( v17 >= *(unsigned int *)(v40 + 24) )
        goto LABEL_39;
      v21->fields.lv = *(_DWORD *)(v39 + 4 * v17);
      v12 = v27;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v21->fields.charge,
        &v21->fields.title,
        &v21->fields.explanation,
        *(_DWORD *)(v39 + 4 * v17),
        1,
        0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v33, 0LL);
      v21->fields.strengthStatus = (int)UseEntity;
      skillNum = v33->fields.skillNum;
      v21->fields.isUse = 1;
      v21->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v21 )
        goto LABEL_38;
      v12 = v27;
      v21->fields.lv = -1;
    }
    v35 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_38;
    UseEntity = (DataManager_o *)sub_1B886EC(v21, v35->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      v38 = sub_1B88830(0LL);
      sub_1B886D8(v38, 0LL);
    }
    if ( v17 >= v35->max_length )
LABEL_39:
      sub_1B88814(UseEntity, skillInfoList);
    *(Il2CppClass **)((char *)&v35->obj.klass + i) = (Il2CppClass *)v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v35 + i), (int32_t)v21, v36, v37);
    ++v17;
    v9 = v20;
  }
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServant(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BF9C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(Instance, v4);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_19;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v8 >= v7->fields.type )
            sub_1B88814(Instance, v4);
          v9 = *((_QWORD *)&v7->fields.joinMessage + v8);
          if ( !v9 )
            goto LABEL_19;
          v10 = (EventServantMaster_o *)Instance;
          v11 = *(_DWORD *)(v9 + 16);
          v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v14.fields.currentCryptoKey = v13;
          *(_QWORD *)&v14.fields.fakeValue = v12;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
          if ( !v10 )
            goto LABEL_19;
          result = EventServantMaster__getEntity_39266948(v10, v11, (int32_t)Instance, 0LL);
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  EventServantMaster_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BF9D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF9D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  return EventServantMaster__getEntityServantIgnoreEnd(v6, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_40218296(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A5BF9E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF9E = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v6 = EventServant;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v6->fields.eventId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
  int32_t EventId; // w0
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BF77 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF77 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
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
  struct System_Int32_array *eventIdList; // x8
  __int64 v6; // x23
  int32_t DispLimitCount; // w22
  System_Boolean_array *v8; // x21
  unsigned __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w23
  struct System_Int32_array *v14; // x8
  const MethodInfo *v16; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4A5BF7B & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    this = (UserServantEntity_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF7B = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_18;
  v6 = *(_QWORD *)&eventIdList->max_length;
  if ( !v6 )
    return 0LL;
  DispLimitCount = UserServantEntity__getDispLimitCount(v4, 0, method);
  v8 = (System_Boolean_array *)sub_1B88658(bool___TypeInfo, (unsigned int)v6);
  if ( (int)v6 >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v6;
    while ( 1 )
    {
      v12 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v12;
      *(_QWORD *)&v17.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
      this = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                      v4->fields.limitCount,
                                      0LL);
      v14 = setupInfo->fields.eventIdList;
      if ( !v14 )
        break;
      if ( v9 >= v14->max_length )
        goto LABEL_19;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v4,
                                      v13,
                                      (int32_t)this,
                                      DispLimitCount,
                                      setupInfo,
                                      v14->m_Items[v9 + 1],
                                      0,
                                      0LL,
                                      v16);
      if ( !v8 )
        break;
      if ( v9 >= v8->max_length )
LABEL_19:
        sub_1B88814(this, setupInfo);
      v8->m_Items[v9++ + 4] = (unsigned __int8)this & 1;
      if ( v10 == v9 )
        return v8;
    }
LABEL_18:
    sub_1B8880C(this, setupInfo);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_40206948(
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
  if ( (byte_4A5BF7C & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_1B885B0(&bool___TypeInfo);
    byte_4A5BF7C = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  this = (UserServantEntity_o *)sub_1B88658(bool___TypeInfo, (unsigned int)v12);
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
        sub_1B88814(this, *(_QWORD *)&wearersSvtId);
      v13->m_Items[v14++ + 4] = (unsigned __int8)this & 1;
      if ( (unsigned int)v12 == v14 )
        return v13;
    }
LABEL_16:
    sub_1B8880C(this, *(_QWORD *)&wearersSvtId);
  }
  return v13;
}


bool __fastcall UserServantEntity__getEventUpVal_40205120(
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

  if ( (byte_4A5BF78 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF78 = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
  return UserServantEntity__getBaseEventUpVal(this, v11, v12, DispLimitCount, setupInfo, eventId, 0, nowTime, v16);
}


bool __fastcall UserServantEntity__getEventUpVal_40205344(
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


bool __fastcall UserServantEntity__getEventUpVal_40205464(
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


bool __fastcall UserServantEntity__getEventUpVal_40205512(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int64_t v8; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w0
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w25
  int32_t EventId; // w0
  __int64 v19; // x8
  unsigned __int64 v20; // x28
  UserServantEntity_o *v21; // x24
  __int64 v22; // x25
  __int64 v23; // x26
  int32_t v24; // w25
  int32_t v25; // w26
  int32_t v26; // w0
  const MethodInfo *v27; // [xsp+0h] [xbp-70h]
  const MethodInfo *v28; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4A5BF79 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF79 = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1B8880C(Instance, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v10);
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v14 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v13;
    *(_QWORD *)&v29.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                 this,
                                 v15,
                                 v16,
                                 v14,
                                 setupInfo,
                                 EventId,
                                 0,
                                 0LL,
                                 v27);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    if ( equipIds )
    {
      v19 = *(_QWORD *)&equipIds->max_length;
      if ( (int)v19 >= 1 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          if ( v20 >= (unsigned int)v19 )
            sub_1B88814(Instance, v8);
          v8 = equipIds->m_Items[v20];
          if ( v8 >= 1 )
          {
            if ( !MasterData_object )
              goto LABEL_22;
            Instance = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v8,
                         (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Instance )
            {
              v21 = (UserServantEntity_o *)Instance;
              v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v30.fields.currentCryptoKey = v23;
              *(_QWORD *)&v30.fields.fakeValue = v22;
              v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
              v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
              v26 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                           v21,
                                           v24,
                                           v25,
                                           v14,
                                           setupInfo,
                                           v26,
                                           0,
                                           0LL,
                                           v28);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
          LODWORD(v19) = equipIds->max_length;
          if ( (__int64)++v20 >= (int)v19 )
            return 0;
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_40206072(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t DispLimitCount; // w0
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t EventId; // w0
  _BOOL8 BaseEventUpVal; // x0
  __int64 v18; // x1
  __int64 v20; // x8
  unsigned __int64 i; // x27
  UserServantEntity_o *v22; // x23
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t v25; // w24
  int32_t v26; // w25
  int32_t v27; // w0
  const MethodInfo *v28; // [xsp+0h] [xbp-70h]
  const MethodInfo *v29; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A5BF7A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF7A = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v8);
    DataManager__GetMasterData_object_(
      (DataManager_o *)Instance,
      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
    v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v13 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v12;
    *(_QWORD *)&v30.fields.fakeValue = v11;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v14, v15, v13, setupInfo, EventId, 0, 0LL, v28);
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
            sub_1B88814(BaseEventUpVal, v18);
          v22 = equipServentEntityList->m_Items[i];
          if ( v22 )
          {
            v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v31.fields.currentCryptoKey = v24;
            *(_QWORD *)&v31.fields.fakeValue = v23;
            v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
            v27 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v22, v25, v26, v13, setupInfo, v27, 0, 0LL, v29);
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


bool __fastcall UserServantEntity__getEventUpVal_40207232(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w24
  int32_t v14; // w25
  const MethodInfo *v15; // x2
  int32_t DispLimitCount; // w26
  EventUpValInfo_o *v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  char v26; // w26
  int64_t v27; // x2
  EventUpValInfo_o *v28; // x28
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v31; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A5BF7E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF7E = 1;
  }
  entity = 0LL;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v12;
  *(_QWORD *)&v34.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  v17 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v17, setupInfo, v13, v14, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1B8880C(Instance, v21);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_40207812(this, eventUpVallInfo, nowTime, v23);
  if ( equipIds )
  {
    v24 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      v26 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v25 >= (unsigned int)v24 )
          sub_1B88814(Instance, v21);
        v27 = equipIds->m_Items[v25];
        if ( v27 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_23;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                       &entity,
                                       v27,
                                       (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_23;
            v28 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = klass;
            *(_QWORD *)&v35.fields.fakeValue = monitor;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
            if ( !v28 )
              goto LABEL_23;
            v28->fields.equipSvtId = (int)Instance;
            Instance = entity;
            if ( !entity )
              goto LABEL_23;
            Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_40207812(
                                         (UserServantEntity_o *)entity,
                                         eventUpVallInfo,
                                         nowTime,
                                         v31);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v26 = 1;
          }
        }
        LODWORD(v24) = equipIds->max_length;
        ++v25;
      }
      while ( (__int64)v25 < (int)v24 );
      LOBYTE(Instance) = v26;
    }
  }
  return (unsigned __int8)Instance & 1;
}


int32_t __fastcall UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  ServantLimitMaster_o *v10; // x21
  int32_t v11; // w22
  ServantLimitEntity_o *v12; // x21
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BFB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFB7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                               this->fields.limitCount,
                               0LL);
  if ( !v10 )
    goto LABEL_14;
  v12 = ServantLimitMaster__GetEntity(v10, v11, (int32_t)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v12 || !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)ServantExceedMaster__TryGetEntity(
                               (ServantExceedMaster_o *)Instance,
                               &entity,
                               v12->fields.rarity,
                               cnt,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v12->fields.lvMax;
LABEL_14:
    sub_1B8880C(Instance, v6);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v16; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v18; // x24
  int m_CancellationTokenSource; // w25
  float v20; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A5BF91 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF91 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !v14 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v16) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v18 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1B8880C(Instance, v10);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
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

  if ( (byte_4A5BFB1 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFB1 = 1;
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = v9;
        *(_QWORD *)&v14.fields.fakeValue = v8;
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
        v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v12 = v10;
        *(_QWORD *)&v15.fields.currentCryptoKey = v11;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
  int32_t LimitCountWithRandom; // w0
  int32_t v7; // w21
  int v8; // w20
  __int64 v9; // x19
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BFB2 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFB2 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  v7 = LimitCountWithRandom;
  if ( LimitCountWithRandom > 10 )
    return v7;
  v8 = LimitCountWithRandom;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( v8 < 1 )
    return v7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetLimitCountByImageLimit_37692300(v8 - 1, v7, 0LL);
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BFBD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFBD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                this->fields.limitCount,
                                0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0LL)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantExceedMaster_o *v8; // x20
  int32_t v9; // w21
  int32_t FrameType_39669416; // w20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BFBB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFBB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                               this->fields.limitCount,
                               0LL);
  if ( !v8
    || (FrameType_39669416 = ServantExceedMaster__GetFrameType_39669416(
                               v8,
                               v9,
                               (int32_t)Instance,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v11 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v12),
        !v11) )
  {
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v11,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_39669416,
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  int v10; // w21
  unsigned __int64 v11; // x24
  UserServantEntity_o *v12; // x22
  UserServantEntity_o *v13; // x23

  if ( (byte_4A5BF74 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF74 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_1B8880C(Instance, v6);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal(this, v8);
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
      sub_1B88814(Instance, v6);
    v6 = (const MethodInfo *)equipIds->m_Items[v11];
    if ( (__int64)v6 >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_19;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)v6,
                   (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_19;
      v13 = (UserServantEntity_o *)Instance;
      Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v6);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  __int64 v10; // x8
  unsigned __int64 i; // x22

  if ( (byte_4A5BF73 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1B8880C(Instance, v6);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal(this, v8);
  v9 = (int)Instance;
  if ( equipIds )
  {
    v10 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v10 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v10; ++i )
      {
        if ( i >= (unsigned int)v10 )
          sub_1B88814(Instance, v6);
        v6 = (const MethodInfo *)equipIds->m_Items[i];
        if ( (__int64)v6 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_15;
          Instance = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       (int64_t)v6,
                       (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_15;
          Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v6);
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
  Il2CppObject *MasterData_object; // x0
  __int128 v6; // q0
  UserServantCollectionMaster_o *v7; // x20
  int64_t v8; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  int64_t v11; // x19
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BF90 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v7 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v7, v11, (int32_t)Instance, v12)) == 0LL )
LABEL_11:
    sub_1B8880C(Instance, v4);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v11; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BF96 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                               this->fields.limitCount,
                               0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_13:
    sub_1B8880C(Instance, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BF97 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF97 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return (int32_t)Instance[5].monitor;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5BF67 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF67 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4A5BF8E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_1B885B0(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UserServantEntity_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF8E = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_311D988 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_1B8880C(this, svtEntity);
  if ( HIDWORD(entity[1].klass) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    return v4->fields.treasureDeviceLv1;
  v8 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL) + 1;
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

  if ( (byte_4A5BFB0 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFB0 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_4A5BFAE & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFAE = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_4A5BFAC & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFAC = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_4A5BFB4 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFB4 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_4A5BFB3 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFB3 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_4A5BFB5 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BFB5 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
  __int64 v9; // x0
  __int64 v10; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v12; // x26
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x28
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int128 v22; // q0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x22
  __int64 v24; // x19
  __int64 v25; // x20
  BalanceConfig_c *v26; // x0
  unsigned __int64 v27; // x21
  BalanceConfig_c **v28; // x25
  SkillInfo_o *v29; // x0
  __int64 v30; // x26
  __int64 v31; // x27
  int32_t v32; // w0
  __int128 v33; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v35; // x24
  int32_t v36; // w27
  int64_t v37; // x0
  int32_t lv; // w28
  int64_t v39; // x29
  int32_t v40; // w5
  System_Int32_array *v41; // x8
  System_String_array *v42; // x26
  int32_t v43; // w2
  int32_t v44; // w3
  ServantStatusBattleListViewItem_c *v45; // x1
  ServantStatusBattleListViewItem_o *v46; // x0
  __int64 v47; // x27
  __int64 v48; // x28
  int32_t v49; // w0
  __int128 v50; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v51; // x8
  int32_t v52; // w27
  int64_t v53; // x0
  ServantSkillEntity_o *v54; // x0
  __int128 v55; // q0
  ServantSkillEntity_o *v56; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v57; // x0
  int64_t v58; // x0
  System_Int32_array *v59; // x8
  System_String_array *v60; // x27
  int64_t userSvtId; // [xsp+40h] [xbp-130h]
  ServantSkillMaster_o *v66; // [xsp+48h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4A5BF6F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&SkillInfo_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5BF6F = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  UseEntity = **(DataManager_o ***)(v10 + 184);
  if ( !UseEntity )
LABEL_48:
    sub_1B8880C(UseEntity, idList);
  v12 = &BalanceConfig_TypeInfo;
  MasterData_object = DataManager__GetMasterData_object_(
                        UseEntity,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v14 = BalanceConfig_TypeInfo;
  v66 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v16 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v14->static_fields->SvtSkillListMax);
  *idList = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)v16, v17, v18);
  v19 = (System_String_array *)sub_1B88658(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillNameList, (int32_t)v19, v20, v21);
  if ( useUserSvtId )
  {
    v22 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v72.fields.fakeValue = v22;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v71, -1LL, 0LL);
    v72 = v71;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v70 = v72;
  p_userId = &this->fields.userId;
  v24 = 8LL;
  v25 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v70, 0LL);
  while ( 1 )
  {
    v26 = *v12;
    v27 = v24 - 8;
    if ( !(*v12)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = *v12;
    }
    if ( (__int64)v27 >= v26->static_fields->SvtSkillListMax )
      break;
    v28 = v12;
    v29 = (SkillInfo_o *)sub_1B887FC(SkillInfo_TypeInfo);
    SkillInfo___ctor(v29, 0LL);
    v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v73.fields.currentCryptoKey = v31;
    *(_QWORD *)&v73.fields.fakeValue = v30;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v73, 0LL);
    v33 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v34 = *v15;
    v35 = v15;
    v36 = v32;
    *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v71.fields.fakeValue = v33;
    if ( !v34->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v34);
    v69 = v71;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v69, 0LL);
    lv = this->fields.lv;
    v39 = v37;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)v66;
    if ( !v66 )
      goto LABEL_48;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   v66,
                                   v36,
                                   (int)v24 - 7,
                                   v39,
                                   lv,
                                   v40,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0LL);
    if ( UseEntity )
    {
      v41 = *idList;
      if ( !*idList )
        goto LABEL_48;
      if ( v27 >= v41->max_length )
        goto LABEL_49;
      v15 = v35;
      *((_DWORD *)&v41->obj.klass + v24) = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      v42 = *skillNameList;
      UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v42 )
        goto LABEL_48;
      if ( v27 >= v42->max_length )
        goto LABEL_49;
      v45 = (ServantStatusBattleListViewItem_c *)UseEntity;
      v46 = (ServantStatusBattleListViewItem_o *)((char *)v42 + v25);
LABEL_32:
      v46->klass = v45;
      sub_1B88554(v46, (int32_t)v45, v43, v44);
      goto LABEL_33;
    }
    v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v74.fields.currentCryptoKey = v48;
    *(_QWORD *)&v74.fields.fakeValue = v47;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v74, 0LL);
    v50 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v51 = *v35;
    v15 = v35;
    v52 = v49;
    *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v71.fields.fakeValue = v50;
    if ( !v51->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v51);
    v68 = v71;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v68, 0LL);
    v54 = ServantSkillMaster__getUseEntity(
            v66,
            v52,
            (int)v24 - 7,
            v53,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v54 )
    {
      v55 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v56 = v54;
      v57 = *v35;
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v71.fields.fakeValue = v55;
      if ( !v57->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v57);
      v67 = v71;
      v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v67, 0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__isUse(v56, v58, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)UseEntity & 1) != 0 )
      {
        v59 = *idList;
        if ( !*idList )
          goto LABEL_48;
        if ( v27 >= v59->max_length )
          goto LABEL_49;
        *((_DWORD *)&v59->obj.klass + v24) = v56->fields.skillId;
        v60 = *skillNameList;
        UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName(v56, 0LL);
        if ( !v60 )
          goto LABEL_48;
        if ( v27 >= v60->max_length )
LABEL_49:
          sub_1B88814(UseEntity, idList);
        v45 = (ServantStatusBattleListViewItem_c *)UseEntity;
        v46 = (ServantStatusBattleListViewItem_o *)((char *)v60 + v25);
        goto LABEL_32;
      }
    }
LABEL_33:
    ++v24;
    v25 += 8LL;
    v12 = v28;
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

  if ( (byte_4A5BF70 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF70 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
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

  if ( (byte_4A5BF82 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF82 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return QuestRestrictionInfo__IsRestriction_40435468(
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
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w0
  __int64 v10; // x8
  int32_t v11; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BFA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  v10 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v14.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  if ( !v8 || (Instance = ServantLimitMaster__GetEntity(v8, v11, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1B8880C(Instance, v4);
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getRarityIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  int32_t RarityIcon; // w20
  Il2CppObject *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_4A5BFBC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFBC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v6),
        !MasterData_object)
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       (ServantExceedMaster_o *)MasterData_object,
                       (int32_t)Instance,
                       this->fields.exceedCount,
                       0,
                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v8 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v9),
        !v8) )
  {
    sub_1B8880C(Instance, v4);
  }
  return ServantLvDetailMaster__GetRarityIcon(
           (ServantLvDetailMaster_o *)v8,
           (int32_t)Instance,
           this->fields.lv,
           RarityIcon,
           0LL);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BF8C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BF8B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF8B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BF8D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5BF6A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF6A = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  return UserServantEntity__GetSkillIdList(
           this,
           v13,
           dispLimitCount,
           specificLimitCount,
           useUserSvtId,
           beforeQuestClear,
           v14);
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
  __int64 v15; // x26
  __int64 v16; // x27
  int32_t v17; // w0
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5BF6C & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF6C = 1;
  }
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
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


int32_t __fastcall UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_4A5BF68 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5BF68 = 1;
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

  if ( (byte_4A5BF69 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BF69 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_1B8880C(0LL, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1B88814(v4, v5);
  }
  skillLv3 = this->fields.skillLv3;
  v9 = 11LL;
  v4->_1.byval_arg.bits = skillLv3;
  v4 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v10 = v9 - 8;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= v4->static_fields->SvtEquipSkillListMax )
      return v7;
    if ( v10 >= v7->max_length )
      goto LABEL_16;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitMaster_o *v12; // x22
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5BFB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !v12 || (Instance = ServantLimitMaster__GetEntity(v12, v15, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1B8880C(Instance, v8);
  *hpUp = *((_DWORD *)Instance + 9);
  *atkUp = *((_DWORD *)Instance + 11);
}


int32_t __fastcall UserServantEntity__getSvtClassGroupType(
        UserServantEntity_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5BF94 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return HIDWORD(Instance[3].klass);
}


int32_t __fastcall UserServantEntity__getSvtClassId(
        UserServantEntity_o *this,
        bool isPlayableBeastToBase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BF92 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v6);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Instance, isPlayableBeastToBase, 0LL);
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4A5BFBA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFBA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v6),
        !MasterData_object) )
  {
    sub_1B8880C(Instance, v4);
  }
  return ServantExceedMaster__GetEntity(
           (ServantExceedMaster_o *)MasterData_object,
           (int32_t)Instance,
           this->fields.exceedCount,
           0LL);
}


int32_t __fastcall UserServantEntity__getSvtId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5BF66 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF66 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


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

  if ( (byte_4A5BF87 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF87 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  return UserServantEntity__GetTreasureDeviceInfo(this, tdInfo, v13, beforeClearQuestId, dispLimitCount, isLvOne, v14);
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_40212352(
        UserServantEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  int treasureDeviceLv1; // w8
  int64_t UserId; // x22
  const MethodInfo *v15; // x2
  int32_t DispLimitCount; // w21
  Il2CppObject *v17; // x0
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionMaster_o *v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w22
  __int64 v23; // x8
  __int64 v24; // x0
  Il2CppObject *v25; // x23
  int32_t v26; // w0
  __int128 v27; // q1
  int32_t v28; // w24
  int64_t v29; // x0
  __int64 v30; // x8
  int32_t lv; // w25
  int64_t v32; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4A5BF89 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF89 = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v11;
  *(_QWORD *)&v37.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  if ( !v12 )
    goto LABEL_30;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (UserServantCollectionMaster_o *)v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v19;
  *(_QWORD *)&v38.fields.fakeValue = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
  if ( !v20 )
    goto LABEL_30;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v20, UserId, (int32_t)Instance, v21);
  if ( !Instance )
    goto LABEL_30;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0LL);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BDA48C(v24);
  Instance = **(void ***)(v24 + 184);
  if ( !Instance )
    goto LABEL_30;
  v25 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  v27 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v28 = v26;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v35 = v36;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v35, 0LL);
  v30 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v39.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v32 = v29;
  *(_QWORD *)&v39.fields.currentCryptoKey = v30;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
  if ( !v25 )
LABEL_30:
    sub_1B8880C(Instance, v8);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)v25,
                v28,
                v32,
                lv,
                (int32_t)Instance,
                DispLimitCount,
                v22,
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
  if ( !UserServantEntity__getTreasureDeviceInfo_40212352(this, &tdMaxLv[1], tdMaxLv, v2) )
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

  if ( (byte_4A5BF83 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF83 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40439236(questRestrictionInfo, v7, 0LL);
}


bool __fastcall UserServantEntity__getUniqueSvtRestriction_40210332(
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

  if ( (byte_4A5BF84 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF84 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40439436(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
}


ServantSkillEntity_array *__fastcall UserServantEntity__getUseSvtEqSkillInfo(
        UserServantEntity_o *this,
        int32_t targetLv,
        int32_t targetLimitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  ServantSkillEntity_array *ServantSkillList; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x24
  __int64 v12; // x25
  ServantSkillMaster_o *v13; // x23
  int max_length; // w8
  ServantSkillEntity_array *v15; // x23
  unsigned int v16; // w19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x29
  Il2CppClass **v18; // x8
  ServantSkillEntity_o *v19; // x24
  __int128 v20; // q0
  int64_t v21; // x0
  int32_t lv; // w25
  __int64 v23; // x27
  __int64 v24; // x28
  int64_t v25; // x26
  int32_t v26; // w0
  __int128 v27; // q0
  int64_t v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4A5BFA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BFA1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  ServantSkillList = **(ServantSkillEntity_array ***)(v8 + 184);
  if ( !ServantSkillList )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ServantSkillList,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v12;
  *(_QWORD *)&v41.fields.fakeValue = v11;
  ServantSkillList = (ServantSkillEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                   v41,
                                                   0LL);
  if ( !v13 )
    goto LABEL_33;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v13, (int32_t)ServantSkillList, 0LL);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  v15 = ServantSkillList;
  if ( max_length >= 1 )
  {
    v16 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1B88814(ServantSkillList, v6);
      v18 = &v15->obj.klass + (int)v16;
      v19 = (ServantSkillEntity_o *)v18[4];
      if ( !v19 )
        break;
      ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(
                                                       (ServantSkillEntity_o *)v18[4],
                                                       0,
                                                       0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v20 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v40.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
        lv = this->fields.lv;
        v24 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v23 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v25 = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v24;
        *(_QWORD *)&v42.fields.fakeValue = v23;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL);
        ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                         v19,
                                                         v25,
                                                         lv,
                                                         v26,
                                                         -1,
                                                         -1,
                                                         -1,
                                                         -1LL,
                                                         0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v27 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v40.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                           v19,
                                                           v28,
                                                           targetLv,
                                                           targetLimitCnt,
                                                           -1,
                                                           -1,
                                                           -1,
                                                           -1LL,
                                                           0LL);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v32 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v19,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v19;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v19, v29, v30);
            }
          }
        }
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_1B8880C(ServantSkillList, v6);
  }
LABEL_31:
  if ( !v5 )
    goto LABEL_33;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


UserCommandCodeEntity_o *__fastcall UserServantEntity__getUserCommandCodeEntity(
        UserServantEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int128 v8; // q0
  UserServantCommandCodeMaster_o *v9; // x21
  int64_t v10; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  int64_t v13; // x20
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A5BFC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFC0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v9 = (UserServantCommandCodeMaster_o *)MasterData_object;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
  if ( !v9 )
    goto LABEL_14;
  if ( UserServantCommandCodeMaster__TryGetEntity(v9, &entity, v13, (int)Instance, v14) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v15);
LABEL_14:
    sub_1B8880C(Instance, v6);
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5BF65 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BF65 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v5, 0LL);
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0

  if ( (byte_4A5BF62 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5BF62 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  return v3->static_fields->enableRandomLimitCount && UserServantEntity__IsEnableOwnRandomLimitCount(this, method);
}


bool __fastcall UserServantEntity__isAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5BFA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA5 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance[1].monitor);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5BFA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA3 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return this->fields.adjustHp >= SHIDWORD(Instance[1].klass);
}


bool __fastcall UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  __int128 v11; // q0
  UserServantCollectionMaster_o *v12; // x21
  int64_t v13; // x0
  __int64 v14; // x8
  int64_t v15; // x19
  const MethodInfo *v16; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5BFB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFB9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v7;
  *(_QWORD *)&v22.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !v8 )
    goto LABEL_16;
  v9 = DataMasterBase_object__object__int___GetEntity(
         v8,
         (int32_t)Instance,
         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v11 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v12 = (UserServantCollectionMaster_o *)v10;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v19, 0LL);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
  if ( !v12
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v12, v15, (int32_t)Instance, v16),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v9)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_16:
    sub_1B8880C(Instance, v4);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            (int32_t)v9[6].klass,
            HIDWORD(v9[6].klass) + EntityDefinitely->fields.friendshipExceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  __int64 Rarity; // x0
  __int64 v6; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BFB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BFB8 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v4);
  if ( !Master_object )
    sub_1B8880C(Rarity, v6);
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
  int32_t LimitCntMax; // w0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4A5BF98 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF98 = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v6 = LimitCntMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  return v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5BFA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA6 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return this->fields.adjustAtk == LODWORD(Instance[2].klass);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5BFA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFA4 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return this->fields.adjustHp == HIDWORD(Instance[1].monitor);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BFDE & 1) == 0 )
  {
    sub_1B885B0(&UserServantEntity___c_TypeInfo);
    byte_4A5BFDE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserServantEntity___c_TypeInfo->static_fields->__9 = (struct UserServantEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)UserServantEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpVal_b__57_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}