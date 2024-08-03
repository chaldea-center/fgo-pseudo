void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FD1E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, method);
    byte_49FD1E5 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_39858792(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int128 v6; // q0
  __int128 v7; // q0

  if ( (byte_49FD1E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, e);
    byte_49FD1E6 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1B64324(v5);
  v6 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v6;
  v7 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v7;
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


void __fastcall UserServantEntity___ctor_39859024(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  int64_t userId; // x21
  __int128 v10; // q0
  int32_t maxLimitCount; // w21
  int32_t v12; // w20
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14[2]; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_49FD1E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, e);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_49FD1E7 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1B64324(v8);
  userId = e->fields.userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v14, userId, 0LL);
  v10 = *(_OWORD *)&v14[0].fields.fakeValue;
  v14[1] = v14[0];
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v14[0].fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v10;
  this->fields.svtId = e->fields.svtId;
  maxLimitCount = e->fields.maxLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(maxLimitCount, 0LL);
  this->fields.limitCount = v15;
  this->fields.lv = e->fields.maxLv;
  *(int32x2_t *)&this->fields.atk = vrev64_s32(*(int32x2_t *)&e->fields.maxHp);
  *(_OWORD *)&this->fields.skillLv1 = *(_OWORD *)&e->fields.skillLv1;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  DispLimitCount = ImageLimitCount__GetDispLimitCount(v12, 0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(DispLimitCount, 0LL);
}


int64_t __fastcall UserServantEntity__CreatePrimaryKey(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_49FD1E4 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49FD1E4 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v5, 0LL);
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

  if ( (byte_49FD228 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FD228 = 1;
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
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v22),
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
  Il2CppObject *Master_object; // x0
  __int64 v17; // x26
  __int64 v18; // x27
  ServantAppendPassiveSkillMaster_o *v19; // x25
  int32_t v20; // w0
  __int128 v21; // q0
  int32_t v22; // w26
  int64_t v23; // x0
  __int128 v24; // q1
  int64_t v25; // x27
  int64_t userSvtId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_49FD255 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_49FD255 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v18;
  *(_QWORD *)&v30.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v30, 0LL);
  v21 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v28 = v29;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v28, 0LL);
  v24 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v25 = v23;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v24;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v27, 0LL);
  if ( !v19 )
    sub_1B64324(userSvtId);
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


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_39898768(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  __int64 v7; // x0
  SkillInfo_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *v13; // x8
  unsigned __int64 v14; // x21
  __int64 v15; // x23
  SkillInfo_o *v16; // x20
  __int64 v17; // x1
  SkillInfo_array *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x0
  System_Int32_array *v22; // [xsp+0h] [xbp-60h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_49FD256 & 1) == 0 )
  {
    sub_1B640C8(&SkillInfo___TypeInfo, skillInfoList);
    sub_1B640C8(&SkillInfo_TypeInfo, v6);
    byte_49FD256 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v22 = 0LL;
  releaseStateList = 0LL;
  UserServantEntity__GetAppendPassiveSkillInfo(this, &idList, &titleList, &explanationList, &releaseStateList, &v22, v3);
  if ( !idList
    || (v8 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, idList->max_length),
        *skillInfoList = v8,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v8, v9, v10),
        (v13 = idList) == 0LL) )
  {
LABEL_18:
    sub_1B64324(v7);
  }
  v14 = 0LL;
  v15 = 32LL;
  while ( (__int64)v14 < (int)v13->max_length )
  {
    v16 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v11, v12);
    SkillInfo___ctor(v16, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v14 >= idList->max_length )
LABEL_20:
      sub_1B6432C(v7, v17);
    if ( !v16 )
      goto LABEL_18;
    v16->fields.id = idList->m_Items[v14 + 1];
    if ( !v22 )
      goto LABEL_18;
    if ( v14 >= v22->max_length )
      goto LABEL_20;
    v16->fields.lv = v22->m_Items[v14 + 1];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v14 >= releaseStateList->max_length )
      goto LABEL_20;
    v16->fields.isUse = releaseStateList->m_Items[v14 + 4];
    v18 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v7 = sub_1B64204(v16, v18->obj.klass->_1.element_class);
    if ( !v7 )
    {
      v21 = sub_1B64348(0LL);
      sub_1B641F0(v21, 0LL);
    }
    if ( v14 >= v18->max_length )
      goto LABEL_20;
    v18->m_Items[v14] = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v18 + v15), (int32_t)v16, v19, v20);
    v13 = idList;
    ++v14;
    v15 += 8LL;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x6
  __int64 id; // x1
  const MethodInfo *v21; // x7
  unsigned __int64 v22; // x26
  char v23; // w25
  SkillLvEntity_o *v24; // x0
  BalanceConfig_c *v25; // x8
  char v26; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v28; // x9
  __int64 v29; // x22
  unsigned __int64 v30; // x23
  SkillInfo_o *v31; // x8
  int32_t lv; // w2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_49FD207 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FD207 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v15;
  *(_QWORD *)&v38.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38, 0LL);
  if ( !v16 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v18 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, 0LL, v19);
  if ( idList )
  {
    v22 = 0LL;
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v22 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v22 >= idList->max_length )
LABEL_41:
        sub_1B6432C(Instance, id);
      id = (unsigned int)idList->m_Items[v22 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v18 )
          goto LABEL_40;
        v24 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v18, id, 1, 0LL);
        if ( v24 )
        {
          if ( SkillLvEntity__GetBonusUpVal(v24, eventUpVallInfo, questPhaseEntity, 0LL) )
            v23 = 1;
        }
      }
      ++v22;
    }
  }
  else
  {
    v23 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v21);
  if ( !Entity )
LABEL_40:
    sub_1B64324(Instance);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v25 = BalanceConfig_TypeInfo;
  v26 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  static_fields = v25->static_fields;
  v28 = 32LL;
  if ( (v26 & 1) != 0 )
    v28 = 44LL;
  v29 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v28);
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    while ( skillInfoList )
    {
      if ( v30 >= skillInfoList->max_length )
        goto LABEL_41;
      v31 = skillInfoList->m_Items[v30];
      if ( v31 )
      {
        id = (unsigned int)v31->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v31->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v18 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v18, id, lv, 0LL);
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
      if ( v29 == ++v30 )
        return v23 & 1;
    }
    goto LABEL_40;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w25
  int32_t v21; // w26
  const MethodInfo *v22; // x2
  int32_t DispLimitCount; // w27
  __int64 v24; // x1
  __int64 v25; // x2
  EventUpValInfo_o *v26; // x28
  int32_t v27; // w2
  int32_t v28; // w3
  DataManager_o *Instance; // x0
  QuestPhaseEntity_o *v30; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  __int64 v34; // x8
  unsigned __int64 v35; // x25
  char v36; // w26
  int64_t v37; // x2
  EventUpValInfo_o *v38; // x29
  void *monitor; // x21
  Il2CppClass *klass; // x24
  const MethodInfo *v41; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49FD206 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, eventUpVallInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14);
    sub_1B640C8(&EventUpValInfo_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FD206 = 1;
  }
  entity = 0LL;
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v19;
  *(_QWORD *)&v44.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v22);
  v26 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v24, v25);
  EventUpValInfo___ctor(v26, setupInfo, v20, v21, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v26, v27, v28);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v30 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v30, v32);
  if ( equipIds )
  {
    v34 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      v36 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v35 >= (unsigned int)v34 )
          sub_1B6432C(Instance, v33);
        v37 = equipIds->m_Items[v35];
        if ( v37 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_26;
          Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        v37,
                                        (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_26;
            v38 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v45.fields.currentCryptoKey = klass;
            *(_QWORD *)&v45.fields.fakeValue = monitor;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
            if ( !v38 )
              goto LABEL_26;
            v38->fields.equipSvtId = (int)Instance;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_26;
            Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(
                                          (UserServantEntity_o *)entity,
                                          eventUpVallInfo,
                                          v30,
                                          v41);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v36 = 1;
          }
        }
        LODWORD(v34) = equipIds->max_length;
        ++v35;
      }
      while ( (__int64)v35 < (int)v34 );
      LOBYTE(Instance) = v36;
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
  System_Collections_Generic_HashSet_int__o *v19; // x20
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x0
  __int64 v22; // x1
  __int64 id; // x2
  __int64 v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x20
  unsigned __int64 v26; // x25
  bool v27; // w21
  SkillInfo_o *v28; // x8
  int32_t lv; // w3
  System_Collections_Generic_HashSet_int__o *v30; // x19
  _BOOL8 v31; // x0
  _BOOL8 v32; // x0
  __int64 count; // x1
  System_Int32_array *v34; // x20
  System_Collections_Generic_HashSet_Enumerator_T__o v36; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49FD258 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1B640C8(&int___TypeInfo, v18);
    byte_49FD258 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  entity = 0LL;
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       enableSkillInfoList,
                                                       includeBeforeOverwrite);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v19;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_32;
  v24 = *(_QWORD *)&enableSkillInfoList->max_length;
  v25 = v21;
  if ( (int)v24 >= 1 )
  {
    v26 = 0LL;
    v27 = includeBeforeOverwrite;
    do
    {
      if ( v26 >= (unsigned int)v24 )
        sub_1B6432C(v21, v22);
      v28 = enableSkillInfoList->m_Items[v26];
      if ( v28 )
      {
        id = (unsigned int)v28->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v28->fields.lv;
          if ( lv >= 1 )
          {
            if ( !Master_object )
              goto LABEL_32;
            SkillLvMaster__GetUniqueFuncIdsFromSkill((SkillLvMaster_o *)Master_object, &ret, id, lv, v27, 0LL);
          }
        }
      }
      LODWORD(v24) = enableSkillInfoList->max_length;
      ++v26;
    }
    while ( (__int64)v26 < (int)v24 );
  }
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v22,
                                                       id);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)ret;
  if ( !ret )
    goto LABEL_32;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v36,
    ret,
    (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    v31 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v31 )
      break;
    if ( !v25 )
      sub_1B64324(v31);
    v32 = DataMasterBase_object__object__int___TryGetEntity(
            v25,
            &entity,
            (int32_t)v38.fields._current,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v32 )
    {
      if ( !entity )
        sub_1B64324(v32);
      if ( !v30 )
        sub_1B64324(v32);
      System_Collections_Generic_HashSet_int___Add(
        v30,
        HIDWORD(entity[4].monitor),
        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v38,
    (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v30 )
LABEL_32:
    sub_1B64324(v21);
  count = (unsigned int)v30->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v34 = (System_Int32_array *)sub_1B64170(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_53890792(
    v30,
    v34,
    (const MethodInfo_3364EE8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v34;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *v10; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v16; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v18; // x0
  const MethodInfo *v19; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_49FD249 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, includeBeforeOverwrite);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_49FD249 = 1;
  }
  skillInfoList = 0LL;
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(v9);
  v10 = **(DataManager_o ***)(v9 + 184);
  if ( !v10 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v10,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v10 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
  if ( !v14 )
LABEL_17:
    sub_1B64324(v10);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v14,
                                   (int32_t)v10,
                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v16);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v18, skillInfoList, includeBeforeOverwrite, v19);
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

  if ( (byte_49FD1EA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v8);
    byte_49FD1EA = 1;
  }
  if ( UserServantEntity__get_IsRandomChoice(this, *(const MethodInfo **)&kind) && !ignoreRandomSettings )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    ChoiceLimitCount = RandomLimitCountManager__GetChoiceLimitCount(this, 0LL);
    if ( (unsigned int)kind > 4 )
      return -1;
    v10 = ChoiceLimitCount;
    if ( ((1 << kind) & 0x16) != 0 )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v14;
  *(_QWORD *)&v15.fields.fakeValue = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int128 v32; // q0
  UserServantCollectionMaster_o *v33; // x26
  int64_t v34; // x0
  __int64 v35; // x22
  __int64 v36; // x23
  int64_t v37; // x27
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  int32_t friendshipRank; // w26
  __int64 v41; // x0
  __int64 v42; // x0
  Il2CppObject *v43; // x0
  __int128 v44; // q0
  ServantPassiveSkillMaster_o *v45; // x27
  int64_t v46; // x0
  int32_t lv; // w28
  __int64 v48; // x22
  __int64 v49; // x23
  int64_t v50; // x29
  Il2CppObject *v51; // x24
  ServantStatusBattleListViewItem_o *v52; // x29
  bool v53; // w19
  BalanceConfig_c *v54; // x0
  System_Int32_array *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *Master_object; // x20
  Il2CppObject *v65; // x25
  Il2CppObject *v66; // x26
  __int64 v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  int v70; // w8
  void *v71; // x27
  unsigned int v72; // w20
  __int64 v73; // x8
  int32_t v74; // w28
  int64_t UserId; // x0
  __int64 v76; // x22
  __int64 v77; // x23
  int64_t v78; // x29
  int32_t v79; // w4
  int32_t v80; // w2
  __int64 v81; // x22
  __int64 v82; // x8
  unsigned __int64 v83; // x23
  System_Int32_array *v84; // x8
  int max_length; // w9
  unsigned int v86; // w10
  __int64 v87; // x28
  char *v88; // x10
  _DWORD *v89; // x10
  int v90; // t1
  System_String_array *v91; // x8
  ServantStatusBattleListViewItem_c *klass; // x9
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  UserEventServantPointMaster_o *v97; // [xsp+38h] [xbp-F8h]
  UserServantEntity_o *v99; // [xsp+48h] [xbp-E8h]
  System_String_array **v100; // [xsp+50h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+A0h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_49FD1F7 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_1B640C8(&int___TypeInfo, v23);
    sub_1B640C8(&NetworkManager_TypeInfo, v24);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B640C8(&string___TypeInfo, v29);
    byte_49FD1F7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v32 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v33 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v104.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v103 = v104;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v103, 0LL);
  v36 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v37 = v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v106.fields.currentCryptoKey = v36;
  *(_QWORD *)&v106.fields.fakeValue = v35;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v106, 0LL);
  if ( !v33 )
    goto LABEL_73;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v33, v37, (int32_t)Instance, v38);
  if ( !Instance )
    goto LABEL_73;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v39);
  v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1BB5FA4(v41);
  v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
  if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
    v42 = sub_1BB5FA4(v42);
  Instance = **(void ***)(v42 + 184);
  if ( !Instance )
    goto LABEL_73;
  v100 = explanationList;
  v43 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v44 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v45 = (ServantPassiveSkillMaster_o *)v43;
  *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v104.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v102 = v104;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v102, 0LL);
  lv = this->fields.lv;
  v49 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v48 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v99 = this;
  v50 = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v107.fields.currentCryptoKey = v49;
  *(_QWORD *)&v107.fields.fakeValue = v48;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v107, 0LL);
  if ( !v45 )
    goto LABEL_73;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v45,
    idList,
    titleList,
    v100,
    dispSvtId,
    v50,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    nowTime,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  v51 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v99->fields.svtId, 0LL);
  if ( !v51 )
    goto LABEL_73;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v52 = (ServantStatusBattleListViewItem_o *)v100;
  if ( !Instance )
    goto LABEL_73;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  v53 = *idList == 0LL;
  if ( !*idList )
  {
    v54 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v54 = BalanceConfig_TypeInfo;
    }
    v55 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v54->static_fields->SvtPassiveSkillListMax);
    *idList = v55;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v55, v56, v57);
    v58 = (System_String_array *)sub_1B64170(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v58;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v58, v59, v60);
    v61 = sub_1B64170(string___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *v100 = (System_String_array *)v61;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v100, v61, v62, v63);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v65 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v66 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_73:
    sub_1B64324(Instance);
  v70 = *((_DWORD *)Instance + 6);
  v71 = Instance;
  if ( v70 >= 1 )
  {
    v97 = (UserEventServantPointMaster_o *)Master_object;
    v72 = 0;
    while ( 1 )
    {
      if ( v72 >= v70 )
        goto LABEL_72;
      v73 = *((_QWORD *)v71 + (int)v72 + 4);
      if ( !v73 )
        goto LABEL_73;
      v74 = *(_DWORD *)(v73 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v77 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
      v76 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
      v78 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v108.fields.currentCryptoKey = v77;
      *(_QWORD *)&v108.fields.fakeValue = v76;
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v108, 0LL);
      Instance = v97;
      if ( !v97 )
        goto LABEL_73;
      Instance = (void *)UserEventServantPointMaster__TryGetEntity(v97, &entity, v78, v74, v79, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = entity;
        v52 = (ServantStatusBattleListViewItem_o *)v100;
        if ( !entity )
          goto LABEL_73;
        Instance = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v80 = (int)Instance;
      }
      else
      {
        v52 = (ServantStatusBattleListViewItem_o *)v100;
        v80 = 0;
      }
      if ( !v65 )
        goto LABEL_73;
      Instance = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)v65,
                   v74,
                   v80,
                   dispSvtId,
                   0LL);
      if ( Instance )
      {
        v81 = *((_QWORD *)Instance + 4);
        if ( !v81 )
          goto LABEL_73;
        v82 = *(_QWORD *)(v81 + 24);
        if ( (int)v82 >= 1 )
          break;
      }
LABEL_68:
      v70 = *((_DWORD *)v71 + 6);
      if ( (int)++v72 >= v70 )
        goto LABEL_69;
    }
    v83 = 0LL;
    while ( v83 < (unsigned int)v82 )
    {
      v84 = *idList;
      if ( !*idList )
        goto LABEL_73;
      max_length = v84->max_length;
      if ( max_length >= 1 )
      {
        v67 = *(unsigned int *)(v81 + 4 * v83 + 32);
        v86 = 0;
        while ( 1 )
        {
          if ( v86 >= max_length )
            goto LABEL_72;
          v87 = (int)v86;
          v88 = (char *)v84 + 4 * (int)v86;
          v90 = *((_DWORD *)v88 + 8);
          v89 = v88 + 32;
          if ( !v90 )
            break;
          v86 = v87 + 1;
          if ( (int)v87 + 1 >= max_length )
            goto LABEL_67;
        }
        *v89 = v67;
        if ( !v66 )
          goto LABEL_73;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v66,
                     v67,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v91 = *titleList;
        if ( !*titleList )
          goto LABEL_73;
        klass = v52->klass;
        if ( !v52->klass || !Instance )
          goto LABEL_73;
        if ( (unsigned int)v87 >= v91->max_length || (unsigned int)v87 >= LODWORD(klass->_1.namespaze) )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          &v91->m_Items[v87],
          (System_String_o **)&klass->_1.byval_arg.data + v87,
          0,
          0LL);
        v53 = 0;
      }
LABEL_67:
      LODWORD(v82) = *(_DWORD *)(v81 + 24);
      if ( (__int64)++v83 >= (int)v82 )
        goto LABEL_68;
    }
LABEL_72:
    sub_1B6432C(Instance, v67);
  }
LABEL_69:
  if ( v53 )
  {
    *idList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, 0, v68, v69);
    *titleList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, 0, v93, v94);
    v52->klass = 0LL;
    sub_1B6406C(v52, 0, v95, v96);
  }
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
  System_Int32_array *CardSelectList; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x19
  BalanceConfig_c *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  unsigned __int64 v25; // x21
  int32_t v26; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v3 = costumeIds;
  if ( (byte_49FD253 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, costumeIds);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49FD253 = 1;
  }
  if ( !v3 )
    v3 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v13;
  *(_QWORD *)&v31.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v32.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v32.fields.currentCryptoKey = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v32, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList = ImageLimitCount__GetCardSelectList(v16, v17, v3, 0LL);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v19, v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !CardSelectList )
    goto LABEL_29;
  v24 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)v24 )
        sub_1B6432C(v22, v23);
      v26 = CardSelectList->m_Items[v25 + 1];
      if ( v26 == -1 )
      {
        v23 = 0xFFFFFFFFLL;
        if ( !v21 )
          goto LABEL_29;
      }
      else
      {
        v22 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v22 = BalanceConfig_TypeInfo;
        }
        if ( v26 >= v22->static_fields->ServantLimitMax )
          v23 = (unsigned int)v26;
        else
          v23 = (unsigned int)(v26 + 1);
        if ( !v21 )
          goto LABEL_29;
      }
      items = v21->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          v23,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = size + 1;
        items->m_Items[size + 1] = v23;
      }
      LODWORD(v24) = CardSelectList->max_length;
      ++v25;
    }
    while ( (__int64)v25 < (int)v24 );
  }
  if ( !v21 )
LABEL_29:
    sub_1B64324(v22);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetSameSvtEquipNumIsLimitUp(
        UserServantEntity_o *this,
        bool isLimitMax,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x22
  __int64 v15; // x23
  UserServantMaster_o *v16; // x21
  System_Collections_Generic_List_UserServantEntity__o *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x4
  int32_t v20; // w20
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_49FD25C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, isLimitMax);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_49FD25C = 1;
  }
  userStorageServantList = 0LL;
  memset(&v24, 0, sizeof(v24));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v15;
  *(_QWORD *)&v26.fields.fakeValue = v14;
  v17 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                  v26,
                                                                  0LL);
  if ( !v16 )
    goto LABEL_26;
  if ( !isWarehouseServantEquip )
  {
    v20 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v16, &userStorageServantList, (int32_t)v17, 0, v19) )
      return v20;
LABEL_12:
    v17 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v20 = 0;
      v24 = v23;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v24,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v24,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v20;
          }
          if ( !isLimitMax )
            break;
          if ( !v24.fields._current )
            sub_1B64324(0LL);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v24.fields._current, v21) )
            goto LABEL_21;
        }
        if ( !v24.fields._current )
          sub_1B64324(0LL);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v24.fields._current, v21) )
LABEL_21:
          ++v20;
      }
    }
LABEL_26:
    sub_1B64324(v17);
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v17,
         &userStorageServantList,
         (int32_t)v17,
         v18) )
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  __int64 v12; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v14; // x7
  bool IsServant; // w8
  UserServantEntity_o *v16; // x0
  const MethodInfo *v17; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49FD259 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&skillListNum);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD259 = 1;
  }
  skillInfoList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v10;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v11,
                                   v12,
                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsServant = ServantEntity__get_IsServant((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsServant )
    {
      UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, skillListNum, v14);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v16, skillInfoList, 1, v17);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x0
  ServantSkillEntity_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v18; // x8
  ServantSkillMaster_o *v19; // x24
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x19
  __int128 v22; // q0
  int64_t userSvtId; // x26
  signed __int64 v24; // x27
  BalanceConfig_c *v25; // x0
  unsigned __int64 v26; // x23
  __int128 v27; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v29; // x25
  int64_t v30; // x0
  int32_t lv; // w28
  __int64 v32; // x19
  __int64 v33; // x27
  int64_t v34; // x29
  __int64 v35; // x1
  System_Int32_array *v37; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49FD1F1 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    byte_49FD1F1 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  UseEntity = **(ServantSkillEntity_o ***)(v15 + 184);
  if ( !UseEntity )
LABEL_33:
    sub_1B64324(UseEntity);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v18 = BalanceConfig_TypeInfo;
  v19 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v37 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v18->static_fields->SvtSkillListMax);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v20);
  v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v22 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v45.fields.fakeValue = v22;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v44, -1LL, 0LL);
    v45 = v44;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v45;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v43, 0LL);
  v24 = 0LL;
  while ( 1 )
  {
    v25 = BalanceConfig_TypeInfo;
    v26 = v24;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( v24 >= v25->static_fields->SvtSkillListMax )
      return v37;
    v27 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v28 = *v21;
    v29 = v21;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v27;
    if ( !v28->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v28);
    v42 = v44;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v42, 0LL);
    lv = this->fields.lv;
    v32 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v33 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    v34 = v30;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = v32;
    *(_QWORD *)&v46.fields.fakeValue = v33;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
    if ( !v19 )
      goto LABEL_33;
    v24 = v26 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  v19,
                  servantId,
                  (int)v26 + 1,
                  v34,
                  lv,
                  (int32_t)UseEntity,
                  dispLimitCount,
                  beforeQuestClear,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    v21 = v29;
    if ( UseEntity )
    {
      if ( !v37 )
        goto LABEL_33;
      if ( v26 >= v37->max_length )
        sub_1B6432C(UseEntity, v35);
      v37->m_Items[v26 + 1] = UseEntity->fields.skillId;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x19
  bool IsServantEquip; // w24
  BalanceConfig_c *v27; // x0
  BalanceConfig_c *v28; // x0
  SkillInfo_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v33; // x19
  __int128 v34; // q0
  __int64 v35; // x1
  __int64 v36; // x2
  unsigned __int64 v37; // x29
  __int64 v38; // x25
  SkillInfo_o *v39; // x27
  __int128 v40; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v42; // x26
  int64_t v43; // x0
  int32_t lv; // w19
  __int64 v45; // x21
  __int64 v46; // x28
  int64_t v47; // x23
  int32_t v48; // w5
  unsigned __int64 v49; // x28
  __int64 v50; // x1
  ServantSkillEntity_o *v51; // x19
  int32_t skillNum; // w8
  SkillInfo_array *v53; // x19
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x0
  __int64 v57; // [xsp+30h] [xbp-130h]
  __int64 v58; // [xsp+38h] [xbp-128h]
  __int64 v59; // [xsp+40h] [xbp-120h]
  bool v60; // [xsp+4Ch] [xbp-114h]
  int64_t userSvtId; // [xsp+50h] [xbp-110h]
  ServantSkillMaster_o *v65; // [xsp+70h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_49FD1F3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v14);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&SkillInfo___TypeInfo, v20);
    sub_1B640C8(&SkillInfo_TypeInfo, v21);
    byte_49FD1F3 = 1;
  }
  memset(&v69[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BB5FA4(v22);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1BB5FA4(v23);
  Instance = **(_QWORD **)(v23 + 184);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v65 = (ServantSkillMaster_o *)MasterData_object;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        dispSvtId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_49;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  v58 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum <= 0 )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    skillListNum = v27->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    skillListNum = v28->static_fields->SvtEquipSkillListMax;
  }
  v29 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v29, v30, v31);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v32);
  v33 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v34 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v69[1].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v69[1].fields.fakeValue = v34;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v69, -1LL, 0LL);
    v69[1] = v69[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v68 = v69[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v68, 0LL);
  if ( skillListNum >= 1 )
  {
    v59 = (unsigned int)skillListNum;
    v37 = 0LL;
    v38 = 32LL;
    v57 = v58 + 32;
    v60 = finishEvent;
    while ( 1 )
    {
      v39 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v35, v36);
      SkillInfo___ctor(v39, 0LL);
      v40 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v41 = *v33;
      v42 = v33;
      *(_OWORD *)&v69[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v69[0].fields.fakeValue = v40;
      if ( !v41->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v41);
      v67 = v69[0];
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v67, 0LL);
      lv = this->fields.lv;
      v45 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v46 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v47 = v43;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v70.fields.currentCryptoKey = v45;
      *(_QWORD *)&v70.fields.fakeValue = v46;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v70, 0LL);
      Instance = (__int64)v65;
      if ( !v65 )
        break;
      v49 = v37 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v65,
                            dispSvtId,
                            (int)v37 + 1,
                            v47,
                            lv,
                            v48,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v60,
                            0LL);
      if ( Instance )
      {
        if ( !v39 )
          break;
        v51 = (ServantSkillEntity_o *)Instance;
        v39->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v58 )
          break;
        if ( v37 >= *(unsigned int *)(v58 + 24) )
          goto LABEL_50;
        v39->fields.lv = *(_DWORD *)(v57 + 4 * v37);
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v39->fields.charge,
          &v39->fields.title,
          &v39->fields.explanation,
          *(_DWORD *)(v57 + 4 * v37),
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v51, 0LL);
        v39->fields.strengthStatus = Instance;
        skillNum = v51->fields.skillNum;
        v39->fields.isUse = 1;
        v39->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v39 )
          break;
        v39->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v65, dispSvtId, v49, 0LL);
          if ( Instance )
          {
            v39->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v39->fields.title,
              &v39->fields.explanation,
              0LL);
          }
        }
      }
      v53 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1B64204(v39, v53->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v56 = sub_1B64348(0LL);
        sub_1B641F0(v56, 0LL);
      }
      if ( v37 >= v53->max_length )
LABEL_50:
        sub_1B6432C(Instance, v50);
      v53->m_Items[v37] = v39;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v53 + v38), (int32_t)v39, v54, v55);
      v38 += 8LL;
      ++v37;
      v33 = v42;
      if ( v59 == v49 )
        return;
    }
LABEL_49:
    sub_1B64324(Instance);
  }
}


System_String_o *__fastcall UserServantEntity__GetSvtName(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantLimitAddMaster_o *v13; // x20
  __int64 ServantLimitCountSealAfter; // x0
  bool IsOverwriteSvtDetailName; // w20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x2
  int32_t CardImageLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w20
  Il2CppObject *v20; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  ServantLimitImageMaster_o *v23; // x19
  int32_t v24; // w2
  int32_t v25; // w1
  Il2CppObject *v26; // x0
  Il2CppObject *v28; // x20
  __int64 v29; // x19
  __int64 v30; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_49FD263 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&string_TypeInfo, v9);
    byte_49FD263 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v12;
  *(_QWORD *)&v32.fields.fakeValue = v11;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v32, 0LL);
  if ( !v13 )
    goto LABEL_26;
  IsOverwriteSvtDetailName = ServantLimitAddMaster__IsOverwriteSvtDetailName(v13, ServantLimitCountSealAfter, 0LL);
  v16 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                 this->fields.svtId,
                                 0LL);
  if ( !v16 )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
          &entity,
          ServantLimitCountSealAfter,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return string_TypeInfo->static_fields->Empty;
  if ( !IsOverwriteSvtDetailName )
  {
    v28 = entity;
    v30 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v30;
    *(_QWORD *)&v34.fields.fakeValue = v29;
    ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v34, 0LL);
    if ( v28 )
    {
      v25 = ServantLimitCountSealAfter;
      v24 = -1;
      v26 = v28;
      return ServantEntity__getName((ServantEntity_o *)v26, v25, v24, 0LL);
    }
LABEL_26:
    sub_1B64324(ServantLimitCountSealAfter);
  }
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(this, 0, v17);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (ServantLimitImageMaster_o *)v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v22;
  *(_QWORD *)&v33.fields.fakeValue = v21;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
  if ( !v23 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v23,
                                 ServantLimitCountSealAfter,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  if ( !entity )
    goto LABEL_26;
  v24 = ServantLimitCountSealAfter;
  v25 = -1;
  v26 = entity;
  return ServantEntity__getName((ServantEntity_o *)v26, v25, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetTransformCount(
        UserServantEntity_o *this,
        bool includeBaseServant,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  ServantTransformMaster_o *v11; // x21
  int32_t v12; // w0
  __int64 v13; // x8
  int32_t v14; // w20
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD261 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTransformMaster___, includeBaseServant);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD261 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  v13 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v14 = v12;
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                    v18,
                                                                    0LL);
  if ( !v11
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(
                                v11,
                                v14,
                                (int32_t)TransformServantIds,
                                0LL)) == 0LL )
  {
    sub_1B64324(TransformServantIds);
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

  if ( (byte_49FD262 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&skillId);
    byte_49FD262 = 1;
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
          sub_1B64324(v16);
        if ( v15 >= v12->max_length )
LABEL_18:
          sub_1B6432C(v16, v13);
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
    sub_1B64324(IsNullOrEmpty);
  if ( v15 >= v11->max_length )
LABEL_12:
    sub_1B6432C(IsNullOrEmpty, v13);
  return v11->m_Items[v15 + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetTransformedServantId(
        UserServantEntity_o *this,
        int32_t transformCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  ServantTransformMaster_o *v12; // x21
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w20
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49FD25D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTransformMaster___, *(_QWORD *)&transformCount);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_49FD25D = 1;
  }
  if ( !transformCount )
    return UserServantEntity__getSvtId(this, *(const MethodInfo **)&transformCount);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  v14 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                    v19,
                                                                    0LL);
  if ( !v12
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(
                                v12,
                                v15,
                                (int32_t)TransformServantIds,
                                0LL)) == 0LL )
  {
    sub_1B64324(TransformServantIds);
  }
  if ( TransformServantIds->fields._size >= transformCount )
    return System_Collections_Generic_List_int___get_Item(
             TransformServantIds,
             transformCount - 1,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TransformServantInfo_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Master_object; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantTransformMaster_o *v18; // x22
  int32_t v19; // w0
  __int64 v20; // x8
  int32_t v21; // w21
  System_Collections_Generic_List_TransformServantInfo__o *TransformServantInfo; // x0
  int32_t size; // w21
  Il2CppObject *Item; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_49FD25E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTransformMaster___, transformInfo);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_TransformServantInfo__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&TransformServantInfo_TypeInfo, v11);
    byte_49FD25E = 1;
  }
  v12 = (TransformServantInfo_o *)sub_1B64314(TransformServantInfo_TypeInfo, transformInfo, *(_QWORD *)&transformCount);
  TransformServantInfo___ctor(v12, 0LL);
  *transformInfo = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)transformInfo, (int32_t)v12, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v17;
  *(_QWORD *)&v28.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
  v20 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v29.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v21 = v19;
  *(_QWORD *)&v29.fields.currentCryptoKey = v20;
  TransformServantInfo = (System_Collections_Generic_List_TransformServantInfo__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                                      v29,
                                                                                      0LL);
  if ( !v18
    || (TransformServantInfo = ServantTransformMaster__GetTransformServantInfo(
                                 v18,
                                 v21,
                                 (int32_t)TransformServantInfo,
                                 0LL)) == 0LL )
  {
    sub_1B64324(TransformServantInfo);
  }
  size = TransformServantInfo->fields._size;
  if ( size > transformCount )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)TransformServantInfo,
             transformCount,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    *transformInfo = (TransformServantInfo_o *)Item;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)transformInfo, (int32_t)Item, v25, v26);
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
  const MethodInfo *v14; // x6
  TransformServantInfo_o *v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FD25F & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&transformIndex);
    byte_49FD25F = 1;
  }
  transformInfo = 0LL;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformIndex,
                             *(const MethodInfo **)&specificLimitCount);
  if ( (useDispLimitCount & 0x80000000) != 0 )
  {
    v15 = transformInfo;
    v17 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v17;
    *(_QWORD *)&v20.fields.fakeValue = v16;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
    if ( !v15 )
LABEL_10:
      sub_1B64324(TransformedServantInfo);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v15, TransformedServantInfo, 0LL);
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
           v14);
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
  const MethodInfo *v14; // x6
  TransformServantInfo_o *v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FD260 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_49FD260 = 1;
  }
  transformInfo = 0LL;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformCount,
                             *(const MethodInfo **)&beforeClearQuestId);
  if ( (useDispLimitCount & 0x80000000) != 0 )
  {
    v15 = transformInfo;
    v17 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v17;
    *(_QWORD *)&v20.fields.fakeValue = v16;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
    if ( !v15 )
LABEL_10:
      sub_1B64324(TransformedServantInfo);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v15, TransformedServantInfo, 0LL);
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
           v14);
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
  Il2CppObject *Master_object; // x0
  __int64 v26; // x22
  __int64 v27; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  DataVals_array *DataValsList; // x0
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x2
  __int64 v32; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v34; // x5
  __int64 v35; // x0
  __int64 v36; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v38; // x20
  __int64 v39; // x21
  TreasureDvcMaster_o *v40; // x19
  TreasureDvcEntity_o *v41; // x19
  TreasureDvcLvMaster_o *v42; // x20
  TreasureDvcLvEntity_o *v43; // x0
  Il2CppObject *v44; // x19
  Il2CppObject *v45; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_HashSet_int__o *v48; // x22
  const MethodInfo_3364BC0 **v49; // x27
  System_Collections_Generic_IEnumerable_T__o *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v54; // x24
  unsigned __int64 v55; // x29
  unsigned __int64 v56; // x9
  DataVals_o *v57; // x25
  int32_t v58; // w1
  int32_t Param; // w26
  int32_t v60; // w1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *v62; // x20
  const MethodInfo_3364BC0 **v63; // x22
  int32_t v64; // w26
  int32_t v65; // w27
  void *v66; // x8
  System_Collections_Generic_HashSet_int__o *v67; // x20
  _BOOL8 v68; // x0
  _BOOL8 v69; // x0
  __int64 count; // x1
  TreasureDvcLvMaster_o *v72; // [xsp+0h] [xbp-D0h]
  DataVals_o **v73; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v74; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v75; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v76; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v77; // [xsp+48h] [xbp-88h] BYREF
  TreasureDvcLvEntity_o *v78; // [xsp+50h] [xbp-80h] BYREF
  SkillLvEntity_o *v79; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_49FD25A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, isLvOne);
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v20);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v21);
    sub_1B640C8(&int___TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24);
    byte_49FD25A = 1;
  }
  entity = 0LL;
  tdInfo = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v77 = 0LL;
  memset(&v76, 0, sizeof(v76));
  v75 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v82.fields.currentCryptoKey = v27;
  *(_QWORD *)&v82.fields.fakeValue = v26;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v82, 0LL);
  if ( !v28 )
    goto LABEL_64;
  v30 = DataMasterBase_object__object__int___GetEntity(
          v28,
          (int32_t)DataValsList,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v30 )
    return 0LL;
  v32 = 0LL;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)v30, 0LL) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v31);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, DispLimitCount, -1, isLvOne, v34) )
      return 0LL;
    v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BB5FA4(v35);
    v36 = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 16LL);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1BB5FA4(v36);
    DataValsList = **(DataVals_array ***)(v36 + 184);
    if ( !DataValsList )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)DataValsList,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v39 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v40 = (TreasureDvcMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v83.fields.currentCryptoKey = v39;
    *(_QWORD *)&v83.fields.fakeValue = v38;
    DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v83, 0LL);
    if ( !tdInfo || !v40 )
      goto LABEL_64;
    v41 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v40, (int32_t)DataValsList, tdInfo->fields.id, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v41 )
      goto LABEL_64;
    if ( !tdInfo )
      goto LABEL_64;
    v42 = (TreasureDvcLvMaster_o *)DataValsList;
    if ( !DataValsList )
      goto LABEL_64;
    v43 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, v41->fields.id, tdInfo->fields.lv, 0LL);
    v32 = (__int64)v43;
    if ( v43 )
    {
      if ( !v43->fields.funcId )
        return 0LL;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v72 = v42;
      v44 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
      v45 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v48 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v46,
                                                           v47);
      System_Collections_Generic_HashSet_int____ctor(
        v48,
        (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( !v48 )
        goto LABEL_64;
      v49 = (const MethodInfo_3364BC0 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
      System_Collections_Generic_HashSet_int___UnionWith(
        v48,
        *(System_Collections_Generic_IEnumerable_T__o **)(v32 + 32),
        (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      DataValsList = TreasureDvcLvEntity__getDataValsList((TreasureDvcLvEntity_o *)v32, 100, 0LL);
      v52 = *(_QWORD *)(v32 + 32);
      if ( !v52 )
        goto LABEL_64;
      m_Items = DataValsList->m_Items;
      v54 = DataValsList;
      v55 = 0LL;
      v73 = DataValsList->m_Items;
      while ( 1 )
      {
        v56 = *(unsigned int *)(v52 + 24);
        if ( (__int64)v55 >= (int)v56 )
        {
          v67 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                               System_Collections_Generic_HashSet_int__TypeInfo,
                                                               v50,
                                                               v51);
          System_Collections_Generic_HashSet_int____ctor(
            v67,
            (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
          System_Collections_Generic_HashSet_int___GetEnumerator(
            &v74,
            v48,
            (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
          v76 = v74;
          while ( 1 )
          {
            v68 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                    &v76,
                    (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            if ( !v68 )
              break;
            if ( !v44 )
              sub_1B64324(v68);
            v69 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                    &v75,
                    (int32_t)v76.fields._current,
                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( v69 )
            {
              if ( !v75 )
                sub_1B64324(v69);
              if ( !v67 )
                sub_1B64324(v69);
              System_Collections_Generic_HashSet_int___Add(
                v67,
                HIDWORD(v75[4].monitor),
                (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose(
            &v76,
            (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
          if ( v67 )
          {
            count = (unsigned int)v67->fields._count;
            if ( (int)count > 0 )
            {
              v32 = sub_1B64170(int___TypeInfo, count);
              System_Collections_Generic_HashSet_int___CopyTo_53890792(
                v67,
                (System_Int32_array *)v32,
                (const MethodInfo_3364EE8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
              return (System_Int32_array *)v32;
            }
            return 0LL;
          }
LABEL_64:
          sub_1B64324(DataValsList);
        }
        if ( v55 >= v56 )
          goto LABEL_77;
        if ( !v44 )
          goto LABEL_64;
        DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                                           &entity,
                                           *(_DWORD *)(v52 + 4 * v55 + 32),
                                           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_64;
          DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v54 )
              goto LABEL_64;
            if ( v55 >= v54->max_length )
LABEL_77:
              sub_1B6432C(DataValsList, v50);
            if ( !entity )
              goto LABEL_64;
            v57 = m_Items[v55];
            if ( !v57 )
              goto LABEL_64;
            DataVals__SetTempType(m_Items[v55], (FunctionMaster_o *)v44, (int32_t)entity[1].monitor, 0LL);
            v58 = DataVals__isParam(v57, 26, 0LL) ? 26 : 3;
            Param = DataVals__GetParam(v57, v58, 0, 0LL);
            v60 = DataVals__isParam(v57, 27, 0LL) ? 27 : 4;
            DataValsList = (DataVals_array *)DataVals__GetParam(v57, v60, 0, 0LL);
            if ( !v45 )
              goto LABEL_64;
            DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                               (SkillLvMaster_o *)v45,
                                               &v79,
                                               Param,
                                               (int32_t)DataValsList,
                                               0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              if ( !v79 )
                goto LABEL_64;
              funcId = (System_Collections_Generic_IEnumerable_T__o *)v79->fields.funcId;
              if ( funcId )
                System_Collections_Generic_HashSet_int___UnionWith(v48, funcId, *v49);
            }
            DataValsList = (DataVals_array *)DataVals__isParam(v57, 92, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              DataValsList = (DataVals_array *)DataVals__isParam(v57, 93, 0LL);
              if ( ((unsigned __int8)DataValsList & 1) != 0 )
              {
                v62 = v48;
                v63 = v49;
                v64 = DataVals__GetParam(v57, 92, 0, 0LL);
                v65 = DataVals__GetParam(v57, 93, 0, 0LL);
                if ( DataVals__isParam(v57, 95, 0LL) )
                {
                  DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v72, &v78, v64, v65, 0LL);
                  v49 = v63;
                  v48 = v62;
                  m_Items = v73;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v66 = v78;
                    if ( !v78 )
                      goto LABEL_64;
LABEL_61:
                    v50 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v66 + 4);
                    if ( v50 )
                      System_Collections_Generic_HashSet_int___UnionWith(v48, v50, *v49);
                  }
                }
                else
                {
                  DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                     (SkillLvMaster_o *)v45,
                                                     &v77,
                                                     v64,
                                                     v65,
                                                     0LL);
                  v49 = v63;
                  v48 = v62;
                  m_Items = v73;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v66 = v77;
                    if ( !v77 )
                      goto LABEL_64;
                    goto LABEL_61;
                  }
                }
              }
            }
          }
        }
        v52 = *(_QWORD *)(v32 + 32);
        ++v55;
        if ( !v52 )
          goto LABEL_64;
      }
    }
  }
  return (System_Int32_array *)v32;
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  TreasureDvcInfo_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t FriendshipRank; // w24
  __int64 v26; // x0
  __int64 v27; // x0
  DataManager_o *Instance; // x0
  bool v29; // w20
  int32_t v30; // w23
  int32_t v31; // w19
  Il2CppObject *MasterData_object; // x0
  __int128 v33; // q0
  ServantTreasureDvcMaster_o *v34; // x26
  int64_t v35; // x0
  int32_t lv; // w27
  __int64 v37; // x22
  __int64 v38; // x29
  int64_t v39; // x28
  int32_t v40; // w29
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int128 v42; // q0
  TreasureDvcInfo_o **v43; // x19
  int64_t v44; // x0
  ServantTreasureDvcEntity_o *v45; // x23
  TreasureDvcInfo_o *v46; // x8
  DataManager_o *v47; // x22
  TreasureDvcInfo_o *v48; // x20
  TreasureDvcInfo_o **v50; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49FD20E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFlagMaster___, tdInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&TreasureDvcInfo_TypeInfo, v19);
    byte_49FD20E = 1;
  }
  v20 = (TreasureDvcInfo_o *)sub_1B64314(TreasureDvcInfo_TypeInfo, tdInfo, *(_QWORD *)&dispSvtId);
  TreasureDvcInfo___ctor(v20, 0LL);
  *tdInfo = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v20, v21, v22);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v23);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v24);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1BB5FA4(v26);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1BB5FA4(v27);
  Instance = **(DataManager_o ***)(v27 + 184);
  if ( !Instance )
    goto LABEL_38;
  v50 = tdInfo;
  v29 = isLvOne;
  v30 = dispSvtId;
  v31 = beforeClearQuestId;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v33 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v34 = (ServantTreasureDvcMaster_o *)MasterData_object;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  lv = this->fields.lv;
  v37 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v39 = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v37;
  *(_QWORD *)&v54.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v34 )
    goto LABEL_38;
  v40 = v30;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v34,
                v30,
                v39,
                lv,
                (int32_t)Instance,
                dispLimitCount,
                FriendshipRank,
                v31,
                0LL);
  if ( v29 )
  {
    v42 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v43 = v50;
    *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v53.fields.fakeValue = v42;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v51 = v53;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
    UseEntity = ServantTreasureDvcMaster__getUseEntity(v34, v30, v44, 1, 0, 0, 0, -1, 0LL);
  }
  else
  {
    v43 = v50;
  }
  v45 = UseEntity;
  if ( UseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFlagMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, v40, 1, 0LL);
        v46 = *v43;
        if ( *v43 )
        {
          v47 = Instance;
          v46->fields.id = v45->fields.treasureDeviceId;
          v46->fields.lv = this->fields.treasureDeviceLv1;
          if ( Instance )
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                          (ServantFlagReleaseMaster_o *)Instance,
                                          v40,
                                          *((_DWORD *)&v47->fields.UnityEngine_Behaviour_Fields + 1),
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFlagMaster___);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                            (ServantFlagMaster_o *)Instance,
                                            v40,
                                            *((_DWORD *)&v47->fields.UnityEngine_Behaviour_Fields + 1),
                                            0LL);
              if ( (int)Instance >= 1 )
              {
                if ( !*v43 )
                  goto LABEL_38;
                (*v43)->fields.id = (int)Instance;
              }
            }
          }
          v48 = *v43;
          if ( *v43 )
          {
            Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                          v45,
                                          &v48->fields.name,
                                          &v48->fields.explanation,
                                          &v48->fields.maxLv,
                                          &v48->fields.guageCount,
                                          &v48->fields.cardId,
                                          &v48->fields.strengthStatus,
                                          &v48->fields.treasureDeviceNum,
                                          v48->fields.lv,
                                          0LL);
            v48->fields.isUse = (unsigned __int8)Instance & 1;
            if ( *v43 )
              return (*v43)->fields.isUse;
          }
        }
      }
    }
LABEL_38:
    sub_1B64324(Instance);
  }
  return 0;
}


UserServantCommandCardEntity_o *__fastcall UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *v8; // x0
  Il2CppObject *MasterData_object; // x0
  __int128 v10; // q0
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

  if ( (byte_49FD247 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_49FD247 = 1;
  }
  entity = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v10 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v11 = (UserServantCommandCardMaster_o *)MasterData_object;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v18, 0LL);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  *(_QWORD *)&v21.fields.fakeValue = v13;
  v8 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
  if ( !v11 )
LABEL_14:
    sub_1B64324(v8);
  UserServantCommandCardMaster__TryGetEntity(v11, &entity, v15, (int)v8, v16);
  return entity;
}


bool __fastcall UserServantEntity__HasStatus(UserServantEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool __fastcall UserServantEntity__HasTransform(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantTransformMaster_o *v8; // x20
  int32_t v9; // w0
  __int64 v10; // x8
  int32_t v11; // w19
  __int64 v12; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FD1E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTransformMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_49FD1E9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  v10 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  if ( !v8 )
    sub_1B64324(v12);
  return ServantTransformMaster__TryGetEntity(v8, &entity, v11, v12, 0LL);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD24C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD24C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD22F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD22F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD219 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD219 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCondJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 6) & 1;
}


bool __fastcall UserServantEntity__IsEnableOwnRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_49FD24D & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    byte_49FD24D = 1;
  }
  v5 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL) )
  {
    v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL) == 1;
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
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_49FD24F & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    byte_49FD24F = 1;
  }
  v5 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL) )
  {
    v7 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL) == 1;
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
  UserServantEntity__getTreasureDeviceInfo_39878768(this, &tdMaxLv[1], tdMaxLv, v3);
  return tdMaxLv[0] < tdMaxLv[1] + targetLv;
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
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_object__o *CombineEventCampaigns; // x0
  char i; // w23
  _BOOL8 v13; // x0
  __int128 v14; // q1
  int64_t v15; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+60h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+88h] [xbp-48h] BYREF

  if ( (byte_49FD254 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCombineExpMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FD254 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  CombineEventCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns(
                                                                         (EventCampaignMaster_o *)Instance,
                                                                         0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    CombineEventCampaigns,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= HIDWORD(v21.fields._current[1].klass) == 27 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current )
      sub_1B64324(v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
LABEL_17:
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_20:
    sub_1B64324(Instance);
  }
  UserCombineExpMaster__GetUserSvtId(&v19, (UserCombineExpMaster_o *)Instance, 0LL);
  v20 = v19;
  v14 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v18, 0LL);
  v17 = v20;
  if ( v15 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v17, 0LL) )
    goto LABEL_17;
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD24A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD24A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD225 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD225 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD24B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD24B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FD221 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_TypeInfo, method);
    byte_49FD221 = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37376848(126, 0LL);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD257 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD257 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
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

  if ( (byte_49FD248 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&battleVoice);
    byte_49FD248 = 1;
  }
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL) != battleVoice;
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
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_49FD252 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&ownSettingParam);
    byte_49FD252 = 1;
  }
  v8 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL) != ownSettingParam )
    return 1;
  v10 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL) != friendFollowSettingParam;
}


bool __fastcall UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x0
  __int128 v6; // q0
  int64_t v7; // x20
  __int128 v8; // q0
  int64_t v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_49FD21F & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1B640C8(&UserServantNewManager_TypeInfo, v4);
    byte_49FD21F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = UserId;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  if ( v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v13, 0LL) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v14.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v14;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v12, 0LL);
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
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
      sub_1B64324(0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BalanceConfig_c *v13; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t ServantLimitMax; // w24
  int v17; // w24
  Il2CppObject *Master_object; // x0
  __int64 v19; // x22
  __int64 v20; // x23
  UserServantMaster_o *v21; // x21
  System_Collections_Generic_List_UserServantEntity__o *v22; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x4
  int v25; // w21
  bool EntityListBySvtId; // w0
  UserServantEntity_Fields *p_fields; // x22
  _BOOL8 v29; // x0
  Il2CppObject *current; // x19
  Il2CppObject v31; // q0
  int64_t v32; // x0
  __int128 v33; // q0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  int32_t LimitCount; // w20
  BalanceConfig_c *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_49FD25B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isWarehouseServantEquip);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_49FD25B = 1;
  }
  v13 = BalanceConfig_TypeInfo;
  userStorageServantList = 0LL;
  memset(&v41, 0, sizeof(v41));
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  ServantLimitMax = v13->static_fields->ServantLimitMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v15;
  *(_QWORD *)&v43.fields.fakeValue = v14;
  v17 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
  if ( !v17 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v20;
  *(_QWORD *)&v44.fields.fakeValue = v19;
  v22 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                  v44,
                                                                  0LL);
  if ( !v21 )
    goto LABEL_33;
  if ( !isWarehouseServantEquip )
  {
    EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(v21, &userStorageServantList, (int32_t)v22, 0, v24);
    v25 = 0;
    if ( !EntityListBySvtId )
      return v17 <= v25;
    goto LABEL_18;
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v22,
         &userStorageServantList,
         (int32_t)v22,
         v23) )
  {
LABEL_18:
    v22 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      *(_OWORD *)&v41.fields._list = *(_OWORD *)&v40.fields.currentCryptoKey;
      v41.fields._current = (Il2CppObject *)v40.fields.fakeValue;
      v25 = 0;
      p_fields = &this->fields;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v29 )
          break;
        current = v41.fields._current;
        if ( !v41.fields._current )
          sub_1B64324(v29);
        v31 = v41.fields._current[2];
        *(Il2CppObject *)&v40.fields.currentCryptoKey = v41.fields._current[1];
        *(Il2CppObject *)&v40.fields.fakeValue = v31;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v39, 0LL);
        v33 = *(_OWORD *)&p_fields->id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v33;
        if ( v32 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v38, 0LL) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v34);
          v37 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v37 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v37->static_fields->ServantLimitMax )
            v25 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v35) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v17 <= v25;
    }
LABEL_33:
    sub_1B64324(v22);
  }
  v25 = 0;
  return v17 <= v25;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_49FD251 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD251 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD230 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD230 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
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

  if ( (byte_49FD20B & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD20B = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  return QuestRestrictionInfo__IsUniqueIndividuality_40104816(questRestrictionInfo, v7, v8, DispLimitCount, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_39877124(
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

  if ( (byte_49FD20C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD20C = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_40105436(
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

  if ( (byte_49FD24E & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD24E = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
}


void __fastcall UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int128 v4; // q0
  int64_t v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_49FD220 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1B640C8(&UserServantNewManager_TypeInfo, v3);
    byte_49FD220 = 1;
  }
  v4 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v6, 0LL);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld(v5, 0LL);
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

  if ( (byte_49FD250 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD250 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL);
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

  if ( (byte_49FD210 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, inId);
    byte_49FD210 = 1;
  }
  v5 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v7, 0LL) == inId;
}


int32_t __fastcall UserServantEntity__checkTreasureDeviceLevelUp(
        UserServantEntity_o *this,
        int32_t targetLv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0LL;
  UserServantEntity__getTreasureDeviceInfo_39878768(this, &tdMaxLv[1], tdMaxLv, v3);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49FD244 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineMaster___, *(_QWORD *)&materialId);
    sub_1B640C8(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FD244 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
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
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v12; // x1
  int32_t klass_high; // w23
  _DWORD *v14; // x22
  BalanceConfig_c *v15; // x0
  int32_t adjustAtk; // w8
  int32_t v17; // w20

  if ( (byte_49FD22D & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, hpData);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantRarityMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FD22D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v12),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  klass_high = HIDWORD(Instance[1].klass);
  v14 = Instance;
  v15 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= klass_high )
    klass_high = v14[7];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  *hpData = v15->static_fields->StatusUpAdjustHp * klass_high;
  adjustAtk = this->fields.adjustAtk;
  v17 = v14[6];
  if ( adjustAtk >= v17 )
  {
    v17 = v14[8];
    if ( !v15->_2.cctor_finished )
    {
LABEL_14:
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BalanceConfig_TypeInfo;
    }
  }
  else if ( !v15->_2.cctor_finished )
  {
    goto LABEL_14;
  }
  *atkData = v15->static_fields->StatusUpAdjustAtk * v17;
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
  Il2CppObject *Master_object; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantAppendPassiveSkillMaster_o *v13; // x19
  unsigned __int64 v14; // x0
  SvtUseSkillData_o *SkillData; // x19
  Il2CppObject *v16; // x0
  __int128 v17; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  struct System_Int32_array *svtSkillNumsList; // x8
  __int64 v20; // x0
  struct System_Int32_array **p_svtSkillLvList; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x0
  __int128 v25; // q1
  UserServantAppendPassiveSkillMaster_o *v26; // x22
  int64_t v27; // x0
  __int64 v28; // x8
  int64_t v29; // x20
  Il2CppClass *klass; // x1
  struct System_Int32_array *unlockNums; // x16
  __int64 v32; // x8
  struct System_Int32_array *v33; // x9
  unsigned __int64 max_length; // x10
  Il2CppObject *v35; // x12
  struct System_Int32_array *v36; // x14
  unsigned __int64 v37; // x11
  int32_t *v38; // x16
  __int64 v39; // x0
  __int64 v40; // x2
  int32_t *v41; // x3
  unsigned __int64 namespaze_low; // x2
  __int64 v43; // x5
  _DWORD *monitor; // x7
  __int64 v45; // x6
  struct System_Int32_array *v46; // x8
  __int64 v47; // x10
  struct System_Int32_array *v48; // x9
  unsigned __int64 v49; // x8
  __int64 v50; // x11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-60h]
  UserServantAppendPassiveSkillEntity_o *v55; // [xsp+68h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_49FD1F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_49FD1F8 = 1;
  }
  entity = 0LL;
  v55 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v12;
  *(_QWORD *)&v57.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v57, 0LL);
  if ( !v13 )
    goto LABEL_50;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v13, v14, 0LL);
  v16 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v17 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)v16;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v54;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v53, 0LL);
  if ( !v18 )
    goto LABEL_50;
  v14 = DataMasterBase_object__object__long___TryGetEntity(
          v18,
          &entity,
          v14,
          (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_50;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_50;
  v20 = sub_1B64170(int___TypeInfo, svtSkillNumsList->max_length);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v20;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&SkillData->fields.svtSkillLvList, v20, v22, v23);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v25 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v26 = (UserServantAppendPassiveSkillMaster_o *)v24;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = v27;
  *(_QWORD *)&v58.fields.currentCryptoKey = v28;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v58, 0LL);
  if ( !v26 )
    goto LABEL_50;
  v14 = UserServantAppendPassiveSkillMaster__TryGetEntity(v26, &v55, v29, v14, 0LL);
  if ( (v14 & 1) == 0 )
    goto LABEL_42;
  if ( !v55 )
    goto LABEL_50;
  unlockNums = v55->fields.unlockNums;
  if ( !unlockNums )
    goto LABEL_50;
  v32 = *(_QWORD *)&unlockNums->max_length;
  if ( !v32 )
  {
LABEL_42:
    v46 = SkillData->fields.svtSkillNumsList;
    if ( v46 )
    {
      v47 = *(_QWORD *)&v46->max_length;
      if ( v47 << 32 < 1 )
        return SkillData;
      v48 = *p_svtSkillLvList;
      v49 = 0LL;
      v50 = (__int64)&(*p_svtSkillLvList)->m_Items[1];
      while ( v48 )
      {
        if ( v49 >= v48->max_length )
          goto LABEL_49;
        *(_DWORD *)(v50 + 4 * v49++) = 0;
        if ( (__int64)v49 >= (int)v47 )
          return SkillData;
      }
    }
LABEL_50:
    sub_1B64324(v14);
  }
  v33 = SkillData->fields.svtSkillNumsList;
  if ( !v33 )
    goto LABEL_50;
  max_length = v33->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v35 = entity;
    v36 = *p_svtSkillLvList;
    v37 = 0LL;
    v38 = &unlockNums->m_Items[1];
    while ( 1 )
    {
      if ( !v36 )
        goto LABEL_50;
      v14 = v36->max_length;
      if ( v37 >= v14 )
        goto LABEL_49;
      v39 = (__int64)v36 + 4 * v37;
      *(_DWORD *)(v39 + 32) = 0;
      v14 = v39 + 32;
      if ( (int)v32 >= 1 )
      {
        if ( v37 >= max_length )
          goto LABEL_49;
        klass = (Il2CppClass *)&v33->m_Items[v37 + 1];
        v40 = (unsigned int)v32;
        v41 = v38;
        do
        {
          if ( LODWORD(klass->_1.image) == *v41 )
            *(_DWORD *)v14 = 1;
          --v40;
          ++v41;
        }
        while ( v40 );
      }
      if ( v35 )
      {
        klass = v35[5].klass;
        if ( !klass )
          goto LABEL_50;
        namespaze_low = LODWORD(klass->_1.namespaze);
        if ( (__int64)(namespaze_low << 32) >= 1 )
          break;
      }
LABEL_40:
      if ( (__int64)++v37 >= (int)max_length )
        return SkillData;
    }
    v43 = 8LL;
    while ( v37 < max_length && v43 - 8 < namespaze_low )
    {
      if ( v33->m_Items[v37 + 1] == *((_DWORD *)&klass->_1.image + v43) )
      {
        monitor = v35[5].monitor;
        if ( !monitor )
          goto LABEL_50;
        if ( v43 - 8 >= (unsigned __int64)(unsigned int)monitor[6] )
          break;
        *(_DWORD *)v14 = monitor[v43];
      }
      v45 = v43 - 7;
      ++v43;
      if ( v45 >= (int)namespaze_low )
        goto LABEL_40;
    }
LABEL_49:
    sub_1B6432C(v14, klass);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v23; // x28
  __int64 v24; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x26
  Il2CppObject *v26; // x26
  const MethodInfo *v27; // x6
  __int64 id; // x1
  const MethodInfo *v29; // x7
  unsigned __int64 v30; // x25
  char v31; // w27
  SkillLvEntity_o *Entity; // x0
  signed __int64 i; // x24
  signed __int64 v34; // x8
  SkillInfo_o *v35; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v37; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_49FD203 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_49FD203 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  skillInfoList = 0LL;
  explanationList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v24;
  *(_QWORD *)&v44.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
  if ( !v25
    || (DataMasterBase_object__object__int___GetEntity(
          v25,
          (int32_t)Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_34:
    sub_1B64324(Instance);
  }
  v26 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v27);
  if ( idList )
  {
    v30 = 0LL;
    v31 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v30 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_34;
      if ( v30 >= idList->max_length )
LABEL_35:
        sub_1B6432C(Instance, id);
      id = (unsigned int)idList->m_Items[v30 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v26 )
          goto LABEL_34;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)v26, id, 1, 0LL);
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
            return v31;
          }
        }
      }
      ++v30;
    }
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, finishEvent, -1, v29);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v34 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    v31 = i < v34;
    if ( i >= v34 )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( i >= (unsigned __int64)skillInfoList->max_length )
      goto LABEL_35;
    v35 = skillInfoList->m_Items[i];
    if ( v35 )
    {
      id = (unsigned int)v35->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v35->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v26 )
            goto LABEL_34;
          v37 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v26, id, lv, 0LL);
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
              break;
            }
          }
        }
      }
    }
  }
  return v31;
}


bool __fastcall UserServantEntity__getBaseEventUpVal_39874228(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  Il2CppObject *Entity; // x23
  Il2CppObject *v18; // x20
  const MethodInfo *v19; // x6
  __int64 id; // x1
  const MethodInfo *v21; // x7
  unsigned __int64 v22; // x26
  char v23; // w25
  SkillLvEntity_o *v24; // x0
  char v25; // w22
  BalanceConfig_c *v26; // x8
  char v27; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v29; // x9
  __int64 v30; // x21
  unsigned __int64 v31; // x23
  SkillInfo_o *v32; // x8
  int32_t lv; // w2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_49FD205 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FD205 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v15;
  *(_QWORD *)&v39.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
  if ( !v16 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v18 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v19);
  if ( idList )
  {
    v22 = 0LL;
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v22 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v22 >= idList->max_length )
LABEL_41:
        sub_1B6432C(Instance, id);
      id = (unsigned int)idList->m_Items[v22 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v18 )
          goto LABEL_40;
        v24 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v18, id, 1, 0LL);
        if ( v24 )
        {
          if ( SkillLvEntity__getEventUpVal_39537972(v24, eventUpVallInfo, 1, 1, 0, 0, nowTime, 0LL) )
            v23 = 1;
        }
      }
      ++v22;
    }
    v25 = v23;
  }
  else
  {
    v25 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v21);
  if ( !Entity )
LABEL_40:
    sub_1B64324(Instance);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v26 = BalanceConfig_TypeInfo;
  v27 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  static_fields = v26->static_fields;
  v29 = 32LL;
  if ( (v27 & 1) != 0 )
    v29 = 44LL;
  v30 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v29);
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( skillInfoList )
    {
      if ( v31 >= skillInfoList->max_length )
        goto LABEL_41;
      v32 = skillInfoList->m_Items[v31];
      if ( v32 )
      {
        id = (unsigned int)v32->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v32->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v18 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v18, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_39537972(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0LL,
                                            0LL);
              v25 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v30 == ++v31 )
        return v25 & 1;
    }
    goto LABEL_40;
  }
  return v25 & 1;
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
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  ServantSkillMaster_o *v14; // x20
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantEntity___c_c *v18; // x8
  System_Object_array *v19; // x20
  System_Comparison_T__o *_9__58_0; // x21
  Il2CppObject *v21; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  int max_length; // w8
  unsigned int v27; // w27
  Il2CppClass **v28; // x8
  ServantSkillEntity_o *v29; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v32; // x24
  __int64 v33; // x25
  int64_t v34; // x23
  int32_t v35; // w0
  const MethodInfo *v36; // x2
  int32_t SkillLevel; // w0
  const MethodInfo *v38; // x2
  int32_t v40; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_49FD1FC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_ServantSkillEntity___, method);
    sub_1B640C8(&System_Comparison_ServantSkillEntity__TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_UserServantEntity___c__getBaseFriendPointUpType_b__58_0__, v8);
    sub_1B640C8(&UserServantEntity___c_TypeInfo, v9);
    byte_49FD1FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v13;
  *(_QWORD *)&v41.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  if ( !v14 )
    goto LABEL_29;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v14, (int32_t)Instance, 0LL);
  v18 = UserServantEntity___c_TypeInfo;
  v19 = (System_Object_array *)ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v18 = UserServantEntity___c_TypeInfo;
  }
  _9__58_0 = (System_Comparison_T__o *)v18->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = UserServantEntity___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__58_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantSkillEntity__TypeInfo, v16, v17);
    System_Comparison_object____ctor(
      _9__58_0,
      v21,
      Method_UserServantEntity___c__getBaseFriendPointUpType_b__58_0__,
      0LL);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__58_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v23, v24);
  }
  System_Array__Sort_object__48264584(
    v19,
    _9__58_0,
    (const MethodInfo_2E07588 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v19 )
    goto LABEL_29;
  max_length = v19->max_length;
  if ( max_length < 1 )
    return 0;
  v27 = 0;
  while ( 1 )
  {
    if ( v27 >= max_length )
      sub_1B6432C(Instance, v25);
    v28 = &v19->obj.klass + (int)v27;
    v29 = (ServantSkillEntity_o *)v28[4];
    if ( !v29 )
      goto LABEL_29;
    Instance = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v28[4], 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      lv = this->fields.lv;
      v33 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v32 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v34 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = v33;
      *(_QWORD *)&v42.fields.fakeValue = v32;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v42, 0LL);
      Instance = (DataManager_o *)ServantSkillEntity__isUse(v29, v34, lv, v35, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        SkillLevel = UserServantEntity__getSkillLevel(this, v29->fields.num - 1, v36);
        Instance = (DataManager_o *)ServantSkillEntity__getFriendPointUpVal(v29, SkillLevel, 0LL);
        if ( (int)Instance >= 1 )
          break;
      }
    }
    max_length = v19->max_length;
    if ( (int)++v27 >= max_length )
      return 0;
  }
  v40 = UserServantEntity__getSkillLevel(this, v29->fields.num - 1, v38);
  Instance = (DataManager_o *)ServantSkillEntity__getSkillLvEntity(v29, v40, 0LL);
  if ( !Instance )
LABEL_29:
    sub_1B64324(Instance);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  ServantSkillMaster_o *v14; // x20
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantEntity___c_c *v18; // x8
  System_Object_array *v19; // x20
  System_Comparison_T__o *_9__57_0; // x21
  Il2CppObject *v21; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  int max_length; // w8
  unsigned int v27; // w27
  Il2CppClass **v28; // x8
  ServantSkillEntity_o *v29; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v32; // x24
  __int64 v33; // x25
  int64_t v34; // x23
  int32_t v35; // w0
  const MethodInfo *v36; // x2
  int32_t SkillLevel; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FD1FB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_ServantSkillEntity___, method);
    sub_1B640C8(&System_Comparison_ServantSkillEntity__TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_UserServantEntity___c__getBaseFriendPointUpVal_b__57_0__, v8);
    sub_1B640C8(&UserServantEntity___c_TypeInfo, v9);
    byte_49FD1FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v13;
  *(_QWORD *)&v39.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
  if ( !v14 )
    goto LABEL_28;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v14, (int32_t)Instance, 0LL);
  v18 = UserServantEntity___c_TypeInfo;
  v19 = (System_Object_array *)ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v18 = UserServantEntity___c_TypeInfo;
  }
  _9__57_0 = (System_Comparison_T__o *)v18->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = UserServantEntity___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__57_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantSkillEntity__TypeInfo, v16, v17);
    System_Comparison_object____ctor(
      _9__57_0,
      v21,
      Method_UserServantEntity___c__getBaseFriendPointUpVal_b__57_0__,
      0LL);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__57_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v23, v24);
  }
  System_Array__Sort_object__48264584(
    v19,
    _9__57_0,
    (const MethodInfo_2E07588 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v19 )
    goto LABEL_28;
  max_length = v19->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_1B6432C(Instance, v25);
      v28 = &v19->obj.klass + (int)v27;
      v29 = (ServantSkillEntity_o *)v28[4];
      if ( !v29 )
        break;
      Instance = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v28[4], 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        lv = this->fields.lv;
        v33 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v32 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v34 = UserId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = v33;
        *(_QWORD *)&v40.fields.fakeValue = v32;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v40, 0LL);
        Instance = (Il2CppObject *)ServantSkillEntity__isUse(v29, v34, lv, v35, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v29->fields.num - 1, v36);
          Instance = (Il2CppObject *)ServantSkillEntity__getFriendPointUpVal(v29, SkillLevel, 0LL);
          if ( (int)Instance > 0 )
            return (int)Instance;
        }
      }
      max_length = v19->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B64324(Instance);
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

  if ( (byte_49FD235 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, ignoreRandomSettings);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_49FD235 = 1;
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v12;
        *(_QWORD *)&v17.fields.fakeValue = v11;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
        v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v15 = v13;
        *(_QWORD *)&v18.fields.currentCryptoKey = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        return ImageLimitCount__GetCardImageLimitCount(v15, v16, 1, 0, 0LL);
      }
    }
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD215 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD215 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return (int32_t)Instance[13].klass;
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD21B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineQpMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD21B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity(
                     (CombineQpMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD226 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD226 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_1B64324(0LL);
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
      return BasicHelper__DecryptValue_40698696(this->fields.limitCount, 0LL);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int128 v8; // q0
  Il2CppObject *v9; // x20
  int64_t v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD245 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD245 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v9 = MasterData_object;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v9 )
LABEL_10:
    sub_1B64324(Instance);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v13,
           (int32_t)Instance,
           v14);
}


int32_t __fastcall UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD231 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD231 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
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
  int32_t LimitCountWithRandom; // w0
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w19
  int32_t result; // w0
  bool v12; // cc
  int32_t v13; // w20
  int32_t v14; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_49FD233 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_49FD233 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = LimitCountWithRandom;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  v13 = v10 - 1;
  v12 = v10 < 1;
  v14 = result;
  if ( !v12 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetLimitCountByDispLimit(v13, v14, 0LL);
  }
  return result;
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
  __int64 v12; // x0
  __int64 v13; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v15; // x24
  __int64 v16; // x0
  BalanceConfig_c *v17; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v18; // x27
  SkillInfo_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int128 v22; // q0
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x23
  __int64 i; // x22
  BalanceConfig_c *v27; // x0
  BalanceConfig_c **v28; // x19
  SkillInfo_o *v29; // x24
  __int64 v30; // x25
  __int64 v31; // x26
  int32_t v32; // w0
  __int128 v33; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v35; // x21
  int32_t v36; // w26
  int64_t v37; // x0
  int32_t lv; // w27
  int64_t v39; // x28
  int32_t v40; // w5
  __int64 v41; // x1
  ServantSkillEntity_o *v42; // x26
  int32_t skillNum; // w8
  SkillInfo_array *v44; // x26
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x0
  __int64 v48; // [xsp+28h] [xbp-108h]
  __int64 v49; // [xsp+30h] [xbp-100h]
  int64_t userSvtId; // [xsp+38h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_object; // [xsp+40h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_49FD1F4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B640C8(&SkillInfo___TypeInfo, v10);
    sub_1B640C8(&SkillInfo_TypeInfo, v11);
    byte_49FD1F4 = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  UseEntity = **(DataManager_o ***)(v13 + 184);
  if ( !UseEntity )
LABEL_38:
    sub_1B64324(UseEntity);
  v15 = &BalanceConfig_TypeInfo;
  MasterData_object = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                                UseEntity,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v16 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  v17 = BalanceConfig_TypeInfo;
  v49 = v16;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v19 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)v17->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v19, v20, v21);
  if ( useUserSvtId )
  {
    v22 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v56.fields.fakeValue = v22;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v55, -1LL, 0LL);
    v56 = v55;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v54 = v56;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v54, 0LL);
  v25 = 0LL;
  v48 = v49 + 32;
  for ( i = 32LL; ; i += 8LL )
  {
    v27 = *v15;
    if ( !(*v15)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = *v15;
    }
    if ( (__int64)v25 >= v27->static_fields->SvtEquipSkillListMax )
      break;
    v28 = v15;
    v29 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v23, v24);
    SkillInfo___ctor(v29, 0LL);
    v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v57.fields.currentCryptoKey = v31;
    *(_QWORD *)&v57.fields.fakeValue = v30;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v57, 0LL);
    v33 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v34 = *v18;
    v35 = v18;
    v36 = v32;
    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v55.fields.fakeValue = v33;
    if ( !v34->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v34);
    v53 = v55;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v53, 0LL);
    lv = this->fields.lv;
    v39 = v37;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_38;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_object,
                                   v36,
                                   (int)v25 + 1,
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
      if ( !v29 )
        goto LABEL_38;
      v42 = (ServantSkillEntity_o *)UseEntity;
      v29->fields.id = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      if ( !v49 )
        goto LABEL_38;
      if ( v25 >= *(unsigned int *)(v49 + 24) )
        goto LABEL_39;
      v29->fields.lv = *(_DWORD *)(v48 + 4 * v25);
      v18 = v35;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v29->fields.charge,
        &v29->fields.title,
        &v29->fields.explanation,
        *(_DWORD *)(v48 + 4 * v25),
        1,
        0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v42, 0LL);
      v29->fields.strengthStatus = (int)UseEntity;
      skillNum = v42->fields.skillNum;
      v29->fields.isUse = 1;
      v29->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v29 )
        goto LABEL_38;
      v18 = v35;
      v29->fields.lv = -1;
    }
    v44 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_38;
    UseEntity = (DataManager_o *)sub_1B64204(v29, v44->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      v47 = sub_1B64348(0LL);
      sub_1B641F0(v47, 0LL);
    }
    if ( v25 >= v44->max_length )
LABEL_39:
      sub_1B6432C(UseEntity, v41);
    *(Il2CppClass **)((char *)&v44->obj.klass + i) = (Il2CppClass *)v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v44 + i), (int32_t)v29, v45, v46);
    ++v25;
    v15 = v28;
  }
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServant(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  EventServantEntity_o *result; // x0
  __int64 v8; // x8
  EventServantEntity_o *v9; // x20
  __int64 v10; // x26
  __int64 v11; // x1
  __int64 v12; // x8
  EventServantMaster_o *v13; // x21
  int32_t v14; // w22
  __int64 v15; // x23
  __int64 v16; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FD222 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventServantMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD222 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_19:
    sub_1B64324(Instance);
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL);
  if ( result )
  {
    v8 = *(_QWORD *)&result->fields.type;
    v9 = result;
    result = 0LL;
    if ( v8 )
    {
      if ( (int)v8 >= 1 )
      {
        v10 = 0LL;
        do
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_19;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v10 >= v9->fields.type )
            sub_1B6432C(Instance, v11);
          v12 = *((_QWORD *)&v9->fields.joinMessage + v10);
          if ( !v12 )
            goto LABEL_19;
          v13 = (EventServantMaster_o *)Instance;
          v14 = *(_DWORD *)(v12 + 16);
          v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v17.fields.currentCryptoKey = v16;
          *(_QWORD *)&v17.fields.fakeValue = v15;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
          if ( !v13 )
            goto LABEL_19;
          result = EventServantMaster__getEntity_38946032(v13, v14, (int32_t)Instance, 0LL);
          if ( result )
            return result;
          ++v10;
        }
        while ( (int)v10 < v9->fields.type );
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  EventServantMaster_o *v8; // x19
  __int64 v9; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_49FD223 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_49FD223 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  return EventServantMaster__getEntityServantIgnoreEnd(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_39884712(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v8; // x20
  Il2CppObject *Instance; // x0

  if ( (byte_49FD224 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, is_finishedAt);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FD224 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v8 = EventServant;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v8->fields.eventId,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
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
  int32_t EventId; // w0
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD1FD & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FD1FD = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
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
  struct System_Int32_array *eventIdList; // x8
  __int64 v7; // x23
  int32_t DispLimitCount; // w22
  System_Boolean_array *v9; // x21
  unsigned __int64 v10; // x25
  __int64 v11; // x26
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w23
  __int64 v15; // x1
  struct System_Int32_array *v16; // x8
  const MethodInfo *v18; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_49FD201 & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, setupInfo);
    this = (UserServantEntity_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49FD201 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_18;
  v7 = *(_QWORD *)&eventIdList->max_length;
  if ( !v7 )
    return 0LL;
  DispLimitCount = UserServantEntity__getDispLimitCount(v4, 0, method);
  v9 = (System_Boolean_array *)sub_1B64170(bool___TypeInfo, (unsigned int)v7);
  if ( (int)v7 >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)v7;
    while ( 1 )
    {
      v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v13;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL);
      this = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                      v4->fields.limitCount,
                                      0LL);
      v16 = setupInfo->fields.eventIdList;
      if ( !v16 )
        break;
      if ( v10 >= v16->max_length )
        goto LABEL_19;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v4,
                                      v14,
                                      (int32_t)this,
                                      DispLimitCount,
                                      setupInfo,
                                      v16->m_Items[v10 + 1],
                                      0,
                                      0LL,
                                      v18);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
LABEL_19:
        sub_1B6432C(this, v15);
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( v11 == v10 )
        return v9;
    }
LABEL_18:
    sub_1B64324(this);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_39873364(
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
  __int64 v13; // x1
  System_Boolean_array *v14; // x24
  unsigned __int64 v15; // x26
  struct System_Int32_array *v16; // x8
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  v10 = this;
  if ( (byte_49FD202 & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_1B640C8(&bool___TypeInfo, *(_QWORD *)&wearersSvtId);
    byte_49FD202 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  this = (UserServantEntity_o *)sub_1B64170(bool___TypeInfo, (unsigned int)v12);
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
                                      0LL,
                                      v18);
      if ( !v14 )
        break;
      if ( v15 >= v14->max_length )
LABEL_17:
        sub_1B6432C(this, v13);
      v14->m_Items[v15++ + 4] = (unsigned __int8)this & 1;
      if ( (unsigned int)v12 == v15 )
        return v14;
    }
LABEL_16:
    sub_1B64324(this);
  }
  return v14;
}


bool __fastcall UserServantEntity__getEventUpVal_39871536(
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

  if ( (byte_49FD1FE & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FD1FE = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
  return UserServantEntity__getBaseEventUpVal(this, v11, v12, DispLimitCount, setupInfo, eventId, 0, nowTime, v16);
}


bool __fastcall UserServantEntity__getEventUpVal_39871760(
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


bool __fastcall UserServantEntity__getEventUpVal_39871880(
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


bool __fastcall UserServantEntity__getEventUpVal_39871928(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v12; // x2
  int32_t DispLimitCount; // w0
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t v18; // w25
  int32_t EventId; // w0
  int64_t v20; // x1
  __int64 v22; // x8
  unsigned __int64 v23; // x28
  UserServantEntity_o *v24; // x24
  __int64 v25; // x25
  __int64 v26; // x26
  int32_t v27; // w25
  int32_t v28; // w26
  int32_t v29; // w0
  const MethodInfo *v30; // [xsp+0h] [xbp-70h]
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_49FD1FF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FD1FF = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1B64324(Instance);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v12);
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v16 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v15;
    *(_QWORD *)&v32.fields.fakeValue = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v32, 0LL);
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                 this,
                                 v17,
                                 v18,
                                 v16,
                                 setupInfo,
                                 EventId,
                                 0,
                                 0LL,
                                 v30);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    if ( equipIds )
    {
      v22 = *(_QWORD *)&equipIds->max_length;
      if ( (int)v22 >= 1 )
      {
        v23 = 0LL;
        while ( 1 )
        {
          if ( v23 >= (unsigned int)v22 )
            sub_1B6432C(Instance, v20);
          v20 = equipIds->m_Items[v23];
          if ( v20 >= 1 )
          {
            if ( !MasterData_object )
              goto LABEL_22;
            Instance = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v20,
                         (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Instance )
            {
              v24 = (UserServantEntity_o *)Instance;
              v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v33.fields.currentCryptoKey = v26;
              *(_QWORD *)&v33.fields.fakeValue = v25;
              v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
              v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
              v29 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                           v24,
                                           v27,
                                           v28,
                                           v16,
                                           setupInfo,
                                           v29,
                                           0,
                                           0LL,
                                           v31);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
          LODWORD(v22) = equipIds->max_length;
          if ( (__int64)++v23 >= (int)v22 )
            return 0;
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_39872488(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w0
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t EventId; // w0
  _BOOL8 BaseEventUpVal; // x0
  __int64 v19; // x1
  __int64 v21; // x8
  unsigned __int64 i; // x27
  UserServantEntity_o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t v26; // w24
  int32_t v27; // w25
  int32_t v28; // w0
  const MethodInfo *v29; // [xsp+0h] [xbp-70h]
  const MethodInfo *v30; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_49FD200 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FD200 = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    DataManager__GetMasterData_object_(
      (DataManager_o *)Instance,
      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v10);
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v14 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v31.fields.currentCryptoKey = v13;
    *(_QWORD *)&v31.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v15, v16, v14, setupInfo, EventId, 0, 0LL, v29);
    if ( BaseEventUpVal )
      return 1;
    if ( equipServentEntityList )
    {
      v21 = *(_QWORD *)&equipServentEntityList->max_length;
      if ( (int)v21 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v21; ++i )
        {
          if ( i >= (unsigned int)v21 )
            sub_1B6432C(BaseEventUpVal, v19);
          v23 = equipServentEntityList->m_Items[i];
          if ( v23 )
          {
            v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v32.fields.currentCryptoKey = v25;
            *(_QWORD *)&v32.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v32, 0LL);
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
            v28 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v23, v26, v27, v14, setupInfo, v28, 0, 0LL, v30);
            if ( BaseEventUpVal )
              return 1;
            LODWORD(v21) = equipServentEntityList->max_length;
          }
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_39873648(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w24
  int32_t v18; // w25
  const MethodInfo *v19; // x2
  int32_t DispLimitCount; // w26
  __int64 v21; // x1
  __int64 v22; // x2
  EventUpValInfo_o *v23; // x27
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  char v32; // w26
  int64_t v33; // x2
  EventUpValInfo_o *v34; // x28
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v37; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_49FD204 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, eventUpVallInfo);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_1B640C8(&EventUpValInfo_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FD204 = 1;
  }
  entity = 0LL;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v16;
  *(_QWORD *)&v40.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v40, 0LL);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v19);
  v23 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v21, v22);
  EventUpValInfo___ctor(v23, setupInfo, v17, v18, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v23, v24, v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_39874228(this, eventUpVallInfo, nowTime, v28);
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
          sub_1B6432C(Instance, v29);
        v33 = equipIds->m_Items[v31];
        if ( v33 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_23;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                       &entity,
                                       v33,
                                       (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_23;
            v34 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = klass;
            *(_QWORD *)&v41.fields.fakeValue = monitor;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
            if ( !v34 )
              goto LABEL_23;
            v34->fields.equipSvtId = (int)Instance;
            Instance = entity;
            if ( !entity )
              goto LABEL_23;
            Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_39874228(
                                         (UserServantEntity_o *)entity,
                                         eventUpVallInfo,
                                         nowTime,
                                         v37);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v32 = 1;
          }
        }
        LODWORD(v30) = equipIds->max_length;
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  ServantLimitMaster_o *v12; // x21
  int32_t v13; // w22
  ServantLimitEntity_o *v14; // x21
  const MethodInfo *v15; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD23D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&cnt);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD23D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                               this->fields.limitCount,
                               0LL);
  if ( !v12 )
    goto LABEL_14;
  v14 = ServantLimitMaster__GetEntity(v12, v13, (int32_t)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v14 || !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)ServantExceedMaster__TryGetEntity(
                               (ServantExceedMaster_o *)Instance,
                               &entity,
                               v14->fields.rarity,
                               cnt,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v14->fields.lvMax;
LABEL_14:
    sub_1B64324(Instance);
  }
  return UserServantEntity__getLevelMax(this, v15);
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

  if ( (byte_49FD217 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FD217 = 1;
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
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v19) )
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

  if ( (byte_49FD237 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_49FD237 = 1;
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = v10;
        *(_QWORD *)&v15.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
        v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v13 = v11;
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
  int32_t LimitCountWithRandom; // w0
  int32_t v8; // w21
  int v9; // w20
  __int64 v10; // x19
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_49FD238 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_49FD238 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  v8 = LimitCountWithRandom;
  if ( LimitCountWithRandom > 10 )
    return v8;
  v9 = LimitCountWithRandom;
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  if ( v9 < 1 )
    return v8;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetLimitCountByImageLimit_37380784(v9 - 1, v8, 0LL);
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD243 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD243 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                this->fields.limitCount,
                                0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0LL)) == 0LL )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantExceedMaster_o *v10; // x20
  int32_t v11; // w21
  int32_t FrameType_39340080; // w20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FD241 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD241 = 1;
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
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                               this->fields.limitCount,
                               0LL);
  if ( !v10
    || (FrameType_39340080 = ServantExceedMaster__GetFrameType_39340080(
                               v10,
                               v11,
                               (int32_t)Instance,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v14),
        !v13) )
  {
LABEL_10:
    sub_1B64324(Instance);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v13,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_39340080,
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  int v12; // w21
  unsigned __int64 v13; // x24
  UserServantEntity_o *v14; // x22
  const MethodInfo *v15; // x1
  UserServantEntity_o *v16; // x23

  if ( (byte_49FD1FA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FD1FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal(this, v9);
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
      sub_1B6432C(Instance, v10);
    v10 = (const MethodInfo *)equipIds->m_Items[v13];
    if ( (__int64)v10 >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_19;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)v10,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_19;
      v16 = (UserServantEntity_o *)Instance;
      Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v15);
      LODWORD(v11) = equipIds->max_length;
      if ( (int)Instance > v12 )
        v14 = v16;
      if ( (int)Instance > v12 )
        v12 = (int)Instance;
    }
    ++v13;
  }
  while ( (__int64)v13 < (int)v11 );
  if ( v14 )
    return UserServantEntity__getBaseFriendPointUpType(v14, v10);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v9; // x1
  int64_t v10; // x1
  int32_t v11; // w20
  __int64 v12; // x8
  unsigned __int64 i; // x22
  const MethodInfo *v14; // x1

  if ( (byte_49FD1F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FD1F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal(this, v9);
  v11 = (int)Instance;
  if ( equipIds )
  {
    v12 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v12 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v12; ++i )
      {
        if ( i >= (unsigned int)v12 )
          sub_1B6432C(Instance, v10);
        v10 = equipIds->m_Items[i];
        if ( v10 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_15;
          Instance = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v10,
                       (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_15;
          Instance = (Il2CppObject *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v14);
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
  Il2CppObject *MasterData_object; // x0
  __int128 v8; // q0
  UserServantCollectionMaster_o *v9; // x20
  int64_t v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD216 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD216 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v9 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v9, v13, (int32_t)Instance, v14)) == 0LL )
LABEL_11:
    sub_1B64324(Instance);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v13; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FD21C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD21C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                               this->fields.limitCount,
                               0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_13:
    sub_1B64324(Instance);
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


int32_t __fastcall UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD21D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD21D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return (int32_t)Instance[5].monitor;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_49FD1ED & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD1ED = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_49FD214 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineMaster___, svtEntity);
    sub_1B640C8(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (UserServantEntity_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD214 = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_1B64324(this);
  if ( HIDWORD(entity[1].klass) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    return v4->fields.treasureDeviceLv1;
  v11 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL) + 1;
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

  if ( (byte_49FD236 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD236 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_49FD234 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD234 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_49FD232 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD232 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_49FD23A & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD23A = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_49FD239 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD239 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_49FD23B & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD23B = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
  __int64 v16; // x0
  __int64 v17; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v19; // x26
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v21; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v22; // x28
  System_Int32_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int128 v29; // q0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x22
  __int64 v31; // x19
  __int64 v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  BalanceConfig_c *v35; // x0
  unsigned __int64 v36; // x21
  BalanceConfig_c **v37; // x25
  SkillInfo_o *v38; // x0
  __int64 v39; // x26
  __int64 v40; // x27
  int32_t v41; // w0
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x24
  int32_t v45; // w27
  int64_t v46; // x0
  int32_t lv; // w28
  int64_t v48; // x29
  int32_t v49; // w5
  System_Int32_array *v50; // x8
  System_String_array *v51; // x26
  int32_t v52; // w2
  int32_t v53; // w3
  ServantStatusBattleListViewItem_c *v54; // x1
  ServantStatusBattleListViewItem_o *v55; // x0
  __int64 v56; // x27
  __int64 v57; // x28
  int32_t v58; // w0
  __int128 v59; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v60; // x8
  int32_t v61; // w27
  int64_t v62; // x0
  ServantSkillEntity_o *v63; // x0
  __int128 v64; // q0
  ServantSkillEntity_o *v65; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v66; // x0
  int64_t v67; // x0
  System_Int32_array *v68; // x8
  System_String_array *v69; // x27
  int64_t userSvtId; // [xsp+40h] [xbp-130h]
  ServantSkillMaster_o *v75; // [xsp+48h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_49FD1F5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_1B640C8(&SkillInfo_TypeInfo, v14);
    sub_1B640C8(&string___TypeInfo, v15);
    byte_49FD1F5 = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB5FA4(v17);
  UseEntity = **(DataManager_o ***)(v17 + 184);
  if ( !UseEntity )
LABEL_48:
    sub_1B64324(UseEntity);
  v19 = &BalanceConfig_TypeInfo;
  MasterData_object = DataManager__GetMasterData_object_(
                        UseEntity,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v21 = BalanceConfig_TypeInfo;
  v75 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v23 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v21->static_fields->SvtSkillListMax);
  *idList = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v23, v24, v25);
  v26 = (System_String_array *)sub_1B64170(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)skillNameList, (int32_t)v26, v27, v28);
  if ( useUserSvtId )
  {
    v29 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v81.fields.fakeValue = v29;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v80, -1LL, 0LL);
    v81 = v80;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v81;
  p_userId = &this->fields.userId;
  v31 = 8LL;
  v32 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v79, 0LL);
  while ( 1 )
  {
    v35 = *v19;
    v36 = v31 - 8;
    if ( !(*v19)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = *v19;
    }
    if ( (__int64)v36 >= v35->static_fields->SvtSkillListMax )
      break;
    v37 = v19;
    v38 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v33, v34);
    SkillInfo___ctor(v38, 0LL);
    v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v82.fields.currentCryptoKey = v40;
    *(_QWORD *)&v82.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v82, 0LL);
    v42 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v43 = *v22;
    v44 = v22;
    v45 = v41;
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v80.fields.fakeValue = v42;
    if ( !v43->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v43);
    v78 = v80;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v78, 0LL);
    lv = this->fields.lv;
    v48 = v46;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)v75;
    if ( !v75 )
      goto LABEL_48;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   v75,
                                   v45,
                                   (int)v31 - 7,
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
      v50 = *idList;
      if ( !*idList )
        goto LABEL_48;
      if ( v36 >= v50->max_length )
        goto LABEL_49;
      v22 = v44;
      *((_DWORD *)&v50->obj.klass + v31) = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      v51 = *skillNameList;
      UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v51 )
        goto LABEL_48;
      if ( v36 >= v51->max_length )
        goto LABEL_49;
      v54 = (ServantStatusBattleListViewItem_c *)UseEntity;
      v55 = (ServantStatusBattleListViewItem_o *)((char *)v51 + v32);
LABEL_32:
      v55->klass = v54;
      sub_1B6406C(v55, (int32_t)v54, v52, v53);
      goto LABEL_33;
    }
    v57 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v56 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v83.fields.currentCryptoKey = v57;
    *(_QWORD *)&v83.fields.fakeValue = v56;
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v83, 0LL);
    v59 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v60 = *v44;
    v22 = v44;
    v61 = v58;
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v80.fields.fakeValue = v59;
    if ( !v60->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v60);
    v77 = v80;
    v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v77, 0LL);
    v63 = ServantSkillMaster__getUseEntity(
            v75,
            v61,
            (int)v31 - 7,
            v62,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v63 )
    {
      v64 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v65 = v63;
      v66 = *v44;
      *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v80.fields.fakeValue = v64;
      if ( !v66->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v66);
      v76 = v80;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v76, 0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__isUse(v65, v67, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)UseEntity & 1) != 0 )
      {
        v68 = *idList;
        if ( !*idList )
          goto LABEL_48;
        if ( v36 >= v68->max_length )
          goto LABEL_49;
        *((_DWORD *)&v68->obj.klass + v31) = v65->fields.skillId;
        v69 = *skillNameList;
        UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName(v65, 0LL);
        if ( !v69 )
          goto LABEL_48;
        if ( v36 >= v69->max_length )
LABEL_49:
          sub_1B6432C(UseEntity, v33);
        v54 = (ServantStatusBattleListViewItem_c *)UseEntity;
        v55 = (ServantStatusBattleListViewItem_o *)((char *)v69 + v32);
        goto LABEL_32;
      }
    }
LABEL_33:
    ++v31;
    v32 += 8LL;
    v19 = v37;
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

  if ( (byte_49FD1F6 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
    byte_49FD1F6 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
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

  if ( (byte_49FD208 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD208 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return QuestRestrictionInfo__IsRestriction_40100520(
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
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_49FD22E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD22E = 1;
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
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  if ( !v9 || (Instance = ServantLimitMaster__GetEntity(v9, v12, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1B64324(Instance);
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getRarityIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v7; // x1
  int32_t RarityIcon; // w20
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x1

  if ( (byte_49FD242 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD242 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v7),
        !MasterData_object)
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       (ServantExceedMaster_o *)MasterData_object,
                       (int32_t)Instance,
                       this->fields.exceedCount,
                       0,
                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v9 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v10),
        !v9) )
  {
    sub_1B64324(Instance);
  }
  return ServantLvDetailMaster__GetRarityIcon(
           (ServantLvDetailMaster_o *)v9,
           (int32_t)Instance,
           this->fields.lv,
           RarityIcon,
           0LL);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD212 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD212 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v10,
                                      (int32_t)Instance,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v12),
        !Entity) )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD211 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD211 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v10,
                                      (int32_t)Instance,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v12),
        !Entity) )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD213 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD213 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v10,
                                      (int32_t)Instance,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v12),
        !Entity) )
  {
LABEL_9:
    sub_1B64324(Instance);
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

  if ( (byte_49FD1F0 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&dispLimitCount);
    byte_49FD1F0 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
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

  if ( (byte_49FD1F2 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_49FD1F2 = 1;
  }
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL);
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

  if ( (byte_49FD1EE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&iIdx);
    byte_49FD1EE = 1;
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x19
  int32_t skillLv3; // w8
  __int64 v10; // x20
  unsigned __int64 v11; // x23

  if ( (byte_49FD1EF & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v3);
    byte_49FD1EF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1B64170(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
    sub_1B64324(0LL);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1B6432C(v5, v6);
  }
  skillLv3 = this->fields.skillLv3;
  v10 = 11LL;
  v5->_1.byval_arg.bits = skillLv3;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v11 = v10 - 8;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v11 >= v5->static_fields->SvtEquipSkillListMax )
      return v8;
    if ( v11 >= v8->max_length )
      goto LABEL_16;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitMaster_o *v13; // x22
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD23C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, hpUp);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FD23C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v13 || (Instance = ServantLimitMaster__GetEntity(v13, v16, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1B64324(Instance);
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
  Il2CppObject *Instance; // x0

  if ( (byte_49FD21A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classId);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD21A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return HIDWORD(Instance[3].klass);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSvtClassId(
        UserServantEntity_o *this,
        bool isAvailableValidToBase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FD218 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, isAvailableValidToBase);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD218 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  if ( !v12
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Instance, isAvailableValidToBase, 0LL);
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1

  if ( (byte_49FD240 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FD240 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v6),
        !MasterData_object) )
  {
    sub_1B64324(Instance);
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

  if ( (byte_49FD1EC & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD1EC = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
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

  if ( (byte_49FD20D & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_49FD20D = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  return UserServantEntity__GetTreasureDeviceInfo(this, tdInfo, v13, beforeClearQuestId, dispLimitCount, isLvOne, v14);
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_39878768(
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
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  int treasureDeviceLv1; // w8
  int64_t UserId; // x22
  const MethodInfo *v22; // x2
  int32_t DispLimitCount; // w21
  Il2CppObject *v24; // x0
  __int64 v25; // x24
  __int64 v26; // x25
  UserServantCollectionMaster_o *v27; // x23
  const MethodInfo *v28; // x3
  int32_t v29; // w22
  __int64 v30; // x8
  __int64 v31; // x0
  Il2CppObject *v32; // x23
  int32_t v33; // w0
  __int128 v34; // q1
  int32_t v35; // w24
  int64_t v36; // x0
  __int64 v37; // x8
  int32_t lv; // w25
  int64_t v39; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49FD20F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, tdLv);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FD20F = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v18;
  *(_QWORD *)&v44.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
  if ( !v19 )
    goto LABEL_30;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v24 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (UserServantCollectionMaster_o *)v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v26;
  *(_QWORD *)&v45.fields.fakeValue = v25;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
  if ( !v27 )
    goto LABEL_30;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v27, UserId, (int32_t)Instance, v28);
  if ( !Instance )
    goto LABEL_30;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0LL);
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1BB5FA4(v31);
  Instance = **(void ***)(v31 + 184);
  if ( !Instance )
    goto LABEL_30;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.svtId, 0LL);
  v34 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v35 = v33;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v42, 0LL);
  v37 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v39 = v36;
  *(_QWORD *)&v46.fields.currentCryptoKey = v37;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
  if ( !v32 )
LABEL_30:
    sub_1B64324(Instance);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)v32,
                v35,
                v39,
                lv,
                (int32_t)Instance,
                DispLimitCount,
                v29,
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
  if ( !UserServantEntity__getTreasureDeviceInfo_39878768(this, &tdMaxLv[1], tdMaxLv, v2) )
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

  if ( (byte_49FD209 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD209 = 1;
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


bool __fastcall UserServantEntity__getUniqueSvtRestriction_39876748(
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

  if ( (byte_49FD20A & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD20A = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40104488(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
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
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x0
  ServantSkillEntity_array *ServantSkillList; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  ServantSkillMaster_o *v19; // x23
  __int64 v20; // x1
  int max_length; // w8
  ServantSkillEntity_array *v22; // x23
  unsigned int v23; // w19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x29
  Il2CppClass **v25; // x8
  ServantSkillEntity_o *v26; // x24
  __int128 v27; // q0
  int64_t v28; // x0
  int32_t lv; // w25
  __int64 v30; // x27
  __int64 v31; // x28
  int64_t v32; // x26
  int32_t v33; // w0
  __int128 v34; // q0
  int64_t v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_49FD227 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&targetLv);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_49FD227 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                       *(_QWORD *)&targetLv,
                                                       *(_QWORD *)&targetLimitCnt);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  ServantSkillList = **(ServantSkillEntity_array ***)(v14 + 184);
  if ( !ServantSkillList )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ServantSkillList,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v18;
  *(_QWORD *)&v48.fields.fakeValue = v17;
  ServantSkillList = (ServantSkillEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v48,
                                                   0LL);
  if ( !v19 )
    goto LABEL_33;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v19, (int32_t)ServantSkillList, 0LL);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  v22 = ServantSkillList;
  if ( max_length >= 1 )
  {
    v23 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1B6432C(ServantSkillList, v20);
      v25 = &v22->obj.klass + (int)v23;
      v26 = (ServantSkillEntity_o *)v25[4];
      if ( !v26 )
        break;
      ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(
                                                       (ServantSkillEntity_o *)v25[4],
                                                       0,
                                                       0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v27 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v47.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v46 = v47;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v46, 0LL);
        lv = this->fields.lv;
        v31 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v30 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v32 = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v31;
        *(_QWORD *)&v49.fields.fakeValue = v30;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v49, 0LL);
        ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                         v26,
                                                         v32,
                                                         lv,
                                                         v33,
                                                         -1,
                                                         -1,
                                                         -1,
                                                         -1LL,
                                                         0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v34 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v47.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v45 = v47;
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v45, 0LL);
          ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                           v26,
                                                           v35,
                                                           targetLv,
                                                           targetLimitCnt,
                                                           -1,
                                                           -1,
                                                           -1,
                                                           -1LL,
                                                           0LL);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v39 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v26,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v26;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v26, v36, v37);
            }
          }
        }
      }
      max_length = v22->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_1B64324(ServantSkillList);
  }
LABEL_31:
  if ( !v12 )
    goto LABEL_33;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x0
  __int128 v10; // q0
  UserServantCommandCodeMaster_o *v11; // x21
  int64_t v12; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  int64_t v15; // x20
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49FD246 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD246 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v10 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v11 = (UserServantCommandCodeMaster_o *)MasterData_object;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v19, 0LL);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
  if ( !v11 )
    goto LABEL_14;
  if ( UserServantCommandCodeMaster__TryGetEntity(v11, &entity, v15, (int)Instance, v16) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v17);
LABEL_14:
    sub_1B64324(Instance);
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_49FD1EB & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49FD1EB = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v5, 0LL);
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0

  if ( (byte_49FD1E8 & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, method);
    byte_49FD1E8 = 1;
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
  return v3->static_fields->enableRandomLimitCount && UserServantEntity__IsEnableOwnRandomLimitCount(this, method);
}


bool __fastcall UserServantEntity__isAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0

  if ( (byte_49FD22B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD22B = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance[1].monitor);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0

  if ( (byte_49FD229 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD229 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return this->fields.adjustHp >= SHIDWORD(Instance[1].klass);
}


bool __fastcall UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  __int128 v16; // q0
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x0
  __int64 v19; // x8
  int64_t v20; // x19
  const MethodInfo *v21; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_49FD23F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FD23F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v12;
  *(_QWORD *)&v27.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v14 = DataMasterBase_object__object__int___GetEntity(
          v13,
          (int32_t)Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v16 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v17 = (UserServantCollectionMaster_o *)v15;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v24 = v25;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v24, 0LL);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v28.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = v18;
  *(_QWORD *)&v28.fields.currentCryptoKey = v19;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
  if ( !v17
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v20, (int32_t)Instance, v21),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v14)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            (int32_t)v14[6].klass,
            HIDWORD(v14[6].klass) + EntityDefinitely->fields.friendshipExceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  __int64 Rarity; // x0
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FD23E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExceedMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FD23E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v5);
  if ( !Master_object )
    sub_1B64324(Rarity);
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

  if ( (byte_49FD21E & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD21E = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v6 = LimitCntMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  return v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0

  if ( (byte_49FD22C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD22C = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return this->fields.adjustAtk == LODWORD(Instance[2].klass);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0

  if ( (byte_49FD22A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD22A = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return this->fields.adjustHp == HIDWORD(Instance[1].monitor);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD264 & 1) == 0 )
  {
    sub_1B640C8(&UserServantEntity___c_TypeInfo, v1);
    byte_49FD264 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserServantEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserServantEntity___c_TypeInfo->static_fields->__9 = (struct UserServantEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)UserServantEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpVal_b__57_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}