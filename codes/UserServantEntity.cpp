void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D474 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_long___ctor__, method);
    byte_4B1D474 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32C5964 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_42294652(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int128 v9; // q0
  __int128 v10; // q0
  struct UserServantGrandInfo_o *grandInfo; // x1

  if ( (byte_4B1D475 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_long___ctor__, e);
    byte_4B1D475 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32C5964 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1BCB254(v5, v6);
  v9 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v9;
  v10 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v10;
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
  this->fields.status2 = e->fields.status2;
  this->fields.randomLimitCount = e->fields.randomLimitCount;
  this->fields.randomLimitCountSupport = e->fields.randomLimitCountSupport;
  this->fields.limitCountSupport = e->fields.limitCountSupport;
  this->fields.createdAt = e->fields.createdAt;
  grandInfo = e->fields.grandInfo;
  this->fields.grandInfo = grandInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v7, v8);
}


void __fastcall UserServantEntity___ctor_42294904(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t userId; // x21
  __int128 v11; // q0
  int32_t maxLimitCount; // w21
  int32_t v13; // w20
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15[2]; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B1D476 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_long___ctor__, e);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4B1D476 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32C5964 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1BCB254(v8, v9);
  userId = e->fields.userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v15, userId, 0LL);
  v11 = *(_OWORD *)&v15[0].fields.fakeValue;
  v15[1] = v15[0];
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v15[0].fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v11;
  this->fields.svtId = e->fields.svtId;
  maxLimitCount = e->fields.maxLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(maxLimitCount, 0LL);
  this->fields.limitCount = v16;
  this->fields.lv = e->fields.maxLv;
  *(int32x2_t *)&this->fields.atk = vrev64_s32(*(int32x2_t *)&e->fields.maxHp);
  *(_OWORD *)&this->fields.skillLv1 = *(_OWORD *)&e->fields.skillLv1;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v16, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  DispLimitCount = ImageLimitCount__GetDispLimitCount(v13, 0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(DispLimitCount, 0LL);
}


void __fastcall UserServantEntity__ClearCache(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.overwriteStatusMap = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.overwriteStatusMap, 0, v2, v3);
  this->fields.grandInfo = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.grandInfo, 0, v5, v6);
}


int64_t __fastcall UserServantEntity__CreatePrimaryKey(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1D473 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B1D473 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v5, 0LL);
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
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x25
  __int64 v20; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  Il2CppObject *v22; // x24
  const MethodInfo *v23; // x1
  int32_t *Entity; // x0
  int32_t v25; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B1D4B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1D4B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v20;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v27, 0LL);
  if ( !v21 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)Instance,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_13:
    v25 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v23),
        !v22) )
  {
LABEL_15:
    sub_1BCB254(Instance, v17);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                        (int32_t)Instance,
                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v25 = Entity[8];
  result = 1;
LABEL_14:
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
  __int64 v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B1D4E6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_4B1D4E6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v31, 0LL);
  v21 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v29 = v30;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v29, 0LL);
  v24 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v25 = v23;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v24;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v28, 0LL);
  if ( !v19 )
    sub_1BCB254(userSvtId, v27);
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


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_42335728(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  SkillInfo_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Int32_array *v12; // x8
  unsigned __int64 v13; // x21
  __int64 v14; // x23
  SkillInfo_o *v15; // x20
  __int64 v16; // x2
  SkillInfo_array *v17; // x24
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  System_Int32_array *v20; // [xsp+0h] [xbp-60h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B1D4E7 & 1) == 0 )
  {
    sub_1BCAFF8(&SkillInfo___TypeInfo, skillInfoList);
    sub_1BCAFF8(&SkillInfo_TypeInfo, v6);
    byte_4B1D4E7 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v20 = 0LL;
  releaseStateList = 0LL;
  UserServantEntity__GetAppendPassiveSkillInfo(this, &idList, &titleList, &explanationList, &releaseStateList, &v20, v3);
  if ( !idList
    || (v9 = (SkillInfo_array *)sub_1BCB0A0(SkillInfo___TypeInfo, idList->max_length),
        *skillInfoList = v9,
        sub_1BCAF9C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v9, v10, v11),
        (v12 = idList) == 0LL) )
  {
LABEL_18:
    sub_1BCB254(v7, v8);
  }
  v13 = 0LL;
  v14 = 32LL;
  while ( (__int64)v13 < (int)v12->max_length )
  {
    v15 = (SkillInfo_o *)sub_1BCB244(SkillInfo_TypeInfo);
    SkillInfo___ctor(v15, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v13 >= idList->max_length )
LABEL_20:
      sub_1BCB25C(v7, v8, v16);
    if ( !v15 )
      goto LABEL_18;
    v15->fields.id = idList->m_Items[v13 + 1];
    if ( !v20 )
      goto LABEL_18;
    if ( v13 >= v20->max_length )
      goto LABEL_20;
    v15->fields.lv = v20->m_Items[v13 + 1];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v13 >= releaseStateList->max_length )
      goto LABEL_20;
    v15->fields.isUse = releaseStateList->m_Items[v13 + 4];
    v17 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v7 = sub_1BCB134(v15, v17->obj.klass->_1.element_class);
    if ( !v7 )
    {
      v19 = sub_1BCB278(0LL);
      sub_1BCB120(v19, 0LL);
    }
    if ( v13 >= v17->max_length )
      goto LABEL_20;
    v17->m_Items[v13] = v15;
    sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v17 + v14), (int32_t)v15, v16, v18);
    v12 = idList;
    ++v13;
    v14 += 8LL;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x6
  __int64 lv; // x2
  const MethodInfo *v22; // x7
  unsigned __int64 v23; // x26
  char v24; // w25
  SkillLvEntity_o *v25; // x0
  BalanceConfig_c *v26; // x8
  char v27; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v29; // x9
  __int64 v30; // x22
  unsigned __int64 v31; // x23
  SkillInfo_o *v32; // x8
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B1D494 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B1D494 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v16;
  *(_QWORD *)&v38.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v38, 0LL);
  if ( !v17 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, 0LL, v20);
  if ( idList )
  {
    v23 = 0LL;
    v24 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v23 >= idList->max_length )
LABEL_41:
        sub_1BCB25C(Instance, id, lv);
      id = (unsigned int)idList->m_Items[v23 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v19 )
          goto LABEL_40;
        v25 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v19, id, 1, 0LL);
        if ( v25 )
        {
          if ( SkillLvEntity__GetBonusUpVal(v25, eventUpVallInfo, questPhaseEntity, 0LL) )
            v24 = 1;
        }
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
LABEL_40:
    sub_1BCB254(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v26 = BalanceConfig_TypeInfo;
  v27 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  static_fields = v26->static_fields;
  v29 = 40LL;
  if ( (v27 & 1) != 0 )
    v29 = 56LL;
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
          lv = (unsigned int)v32->fields.lv;
          if ( (int)lv >= 1 )
          {
            if ( !v19 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v19, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__GetBonusUpVal(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            questPhaseEntity,
                                            0LL);
              v24 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v30 == ++v31 )
        return v24 & 1;
    }
    goto LABEL_40;
  }
  return v24 & 1;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o __fastcall UserServantEntity__GetBaseFriendPointUpTypeVal(
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
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  ServantSkillMaster_o *v14; // x20
  ServantSkillEntity_array *ServantSkillList; // x0
  UserServantEntity___c_c *v17; // x8
  System_Object_array *v18; // x20
  System_Comparison_T__o *_9__70_0; // x21
  Il2CppObject *v20; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  int max_length; // w8
  unsigned int v26; // w28
  Il2CppClass **v27; // x8
  ServantSkillEntity_o *v28; // x22
  NetworkManager_c *v29; // x0
  int32_t lv; // w23
  __int64 v31; // x25
  __int64 v32; // x26
  int64_t userIdNumber; // x24
  int32_t v34; // w0
  int32_t SkillLevel; // w0
  System_Nullable_ValueTuple_FuncList_TYPE__int___o result; // 0:x0.12 OVERLAPPED
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B1D489 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_ServantSkillEntity___, method);
    sub_1BCAFF8(&System_Comparison_ServantSkillEntity__TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantSkillMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&Method_UserServantEntity___c__GetBaseFriendPointUpTypeVal_b__70_0__, v9);
    sub_1BCAFF8(&UserServantEntity___c_TypeInfo, v10);
    byte_4B1D489 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v13;
  *(_QWORD *)&v37.fields.fakeValue = v12;
  *(_QWORD *)&result.fields.hasValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v37, 0LL);
  if ( !v14 )
    goto LABEL_34;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v14, *(int32_t *)&result.fields.hasValue, 0LL);
  v17 = UserServantEntity___c_TypeInfo;
  v18 = (System_Object_array *)ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v17 = UserServantEntity___c_TypeInfo;
  }
  _9__70_0 = (System_Comparison_T__o *)v17->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = UserServantEntity___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__70_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__70_0,
      v20,
      Method_UserServantEntity___c__GetBaseFriendPointUpTypeVal_b__70_0__,
      0LL);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__70_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__70_0, (int32_t)_9__70_0, v22, v23);
  }
  System_Array__Sort_object__50232124(
    v18,
    _9__70_0,
    (const MethodInfo_2FE7B3C *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v18 )
    goto LABEL_34;
  max_length = v18->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1BCB25C(*(_QWORD *)&result.fields.hasValue, *(_QWORD *)&result.fields.value.fields.Item2, v24);
      v27 = &v18->obj.klass + (int)v26;
      v28 = (ServantSkillEntity_o *)v27[4];
      if ( !v28 )
        break;
      *(_QWORD *)&result.fields.hasValue = ServantSkillEntity__isEnable((ServantSkillEntity_o *)v27[4], 0, 0LL);
      if ( result.fields.hasValue )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&result.fields.value.fields.Item2);
          byte_4B165D1 = 1;
        }
        v29 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v29 = NetworkManager_TypeInfo;
        }
        lv = this->fields.lv;
        v32 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v31 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        userIdNumber = v29->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v32;
        *(_QWORD *)&v38.fields.fakeValue = v31;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v38, 0LL);
        *(_QWORD *)&result.fields.hasValue = ServantSkillEntity__isUse(
                                               v28,
                                               userIdNumber,
                                               lv,
                                               v34,
                                               -1,
                                               -1,
                                               -1,
                                               -1LL,
                                               0LL);
        if ( result.fields.hasValue )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v28->fields.num - 1, v24);
          result = ServantSkillEntity__GetFriendPointUpTypeVal(v28, SkillLevel, 0LL);
          if ( result.fields.hasValue )
            return result;
        }
      }
      max_length = v18->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_31;
    }
LABEL_34:
    sub_1BCB254(*(_QWORD *)&result.fields.hasValue, *(_QWORD *)&result.fields.value.fields.Item2);
  }
LABEL_31:
  *(_QWORD *)&result.fields.hasValue = 0LL;
  result.fields.value.fields.Item2 = 0;
  return result;
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
  EventUpValInfo_o *v24; // x28
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  QuestPhaseEntity_o *v29; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v31; // x3
  int64_t v32; // x2
  __int64 v33; // x8
  unsigned __int64 v34; // x25
  char v35; // w26
  EventUpValInfo_o *v36; // x29
  void *monitor; // x21
  Il2CppClass *klass; // x24
  const MethodInfo *v39; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B1D493 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, eventUpVallInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14);
    sub_1BCAFF8(&EventUpValInfo_TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B1D493 = 1;
  }
  entity = 0LL;
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v19;
  *(_QWORD *)&v42.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v42, 0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v22);
  v24 = (EventUpValInfo_o *)sub_1BCB244(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v24, setupInfo, v20, v21, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)eventUpVallInfo, (int32_t)v24, v25, v26);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v29 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_1BCB254(Instance, v28);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v29, v31);
  if ( equipIds )
  {
    v33 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v33 >= 1 )
    {
      v34 = 0LL;
      v35 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v34 >= (unsigned int)v33 )
          sub_1BCB25C(Instance, v28, v32);
        v32 = equipIds->m_Items[v34];
        if ( v32 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_26;
          Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        v32,
                                        (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_26;
            v36 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = klass;
            *(_QWORD *)&v43.fields.fakeValue = monitor;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v43, 0LL);
            if ( !v36 )
              goto LABEL_26;
            v36->fields.equipSvtId = (int)Instance;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_26;
            Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(
                                          (UserServantEntity_o *)entity,
                                          eventUpVallInfo,
                                          v29,
                                          v39);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v35 = 1;
          }
        }
        LODWORD(v33) = equipIds->max_length;
        ++v34;
      }
      while ( (__int64)v34 < (int)v33 );
      LOBYTE(Instance) = v35;
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
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 count; // x1
  System_Int32_array *v36; // x20
  System_Collections_Generic_HashSet_Enumerator_T__o v38; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v40; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B1D4E9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1BCAFF8(&int___TypeInfo, v18);
    byte_4B1D4E9 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  entity = 0LL;
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v19;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
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
        sub_1BCB25C(v21, v22, id);
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
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)ret;
  if ( !ret )
    goto LABEL_32;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v38,
    ret,
    (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v40 = v38;
  while ( 1 )
  {
    v31 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v31 )
      break;
    if ( !v25 )
      sub_1BCB254(v31, v32);
    v33 = DataMasterBase_object__object__int___TryGetEntity(
            v25,
            &entity,
            (int32_t)v40.fields._current,
            (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v33 )
    {
      if ( !entity )
        sub_1BCB254(v33, v34);
      if ( !v30 )
        sub_1BCB254(v33, v34);
      System_Collections_Generic_HashSet_int___Add(
        v30,
        HIDWORD(entity[4].monitor),
        (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v40,
    (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v30 )
LABEL_32:
    sub_1BCB254(v21, v22);
  count = (unsigned int)v30->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v36 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_56041812(
    v30,
    v36,
    (const MethodInfo_3572154 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v36;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  DataManager_o *v11; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v17; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v19; // x0
  const MethodInfo *v20; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B1D4DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, includeBeforeOverwrite);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_4B1D4DA = 1;
  }
  skillInfoList = 0LL;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1B45C(v3);
  v11 = **(DataManager_o ***)(v10 + 184);
  if ( !v11 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v22, 0LL);
  if ( !v15 )
LABEL_17:
    sub_1BCB254(v11, includeBeforeOverwrite);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v15,
                                   (int32_t)v11,
                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v17);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v19, skillInfoList, includeBeforeOverwrite, v20);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  EventServantMaster_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x20
  System_Func_object__bool__o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B1D4B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventServantMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___, v4);
    sub_1BCAFF8(&System_Func_EventServantEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_UserServantEntity__GetEventServantWithinCreatedAt_b__132_0__, v7);
    byte_4B1D4B2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v17, 0LL);
  if ( !v11 )
    sub_1BCB254(v12, v13);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)EventServantMaster__GetEntities(v11, v12, 0LL);
  v15 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_UserServantEntity__GetEventServantWithinCreatedAt_b__132_0__,
    0LL);
  return (EventServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                   Entities,
                                   (System_Func_TSource__bool__o *)v15,
                                   (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetFrameType(
        UserServantEntity_o *this,
        int32_t actualRarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool IsGrandServant; // w21
  Il2CppObject *Master_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantExceedMaster_o *v12; // x22
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  bool v15; // w21
  int32_t FrameTypeFixRarity; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1D4D2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&actualRarity);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B1D4D2 = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, *(const MethodInfo **)&actualRarity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantExceedMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v13 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
  if ( !v12
    || (v15 = IsGrandServant,
        FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               v12,
                               (int32_t)v13,
                               this->fields.exceedCount,
                               actualRarity,
                               v15,
                               0LL),
        (v13 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0LL) )
  {
    sub_1BCB254(v13, v14);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v13,
           actualRarity,
           this->fields.lv,
           FrameTypeFixRarity,
           v15,
           0LL);
}


System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *__fastcall UserServantEntity__GetFriendPointUpTypeVals(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_T__o *v12; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v14; // x1
  __int128 v15; // x0
  const MethodInfo_37D4890 *v16; // x2
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  __int64 v20; // x8
  unsigned __int64 i; // x22
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v26; // [xsp+0h] [xbp-60h] BYREF
  int v27; // [xsp+8h] [xbp-58h]
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_T__o v29; // 0:x0.16
  System_Nullable_T__o v30; // 0:x0.16

  if ( (byte_4B1D488 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, equipIds);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__, v10);
    sub_1BCAFF8(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__, v11);
    byte_4B1D488 = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_List_T__o *)sub_1BCB244(System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int_____ctor(
    v12,
    (const MethodInfo_366627C *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v15 = UserServantEntity__GetBaseFriendPointUpTypeVal(this, v14);
  v26 = v15;
  v27 = DWORD2(v15);
  if ( (_BYTE)v15 )
  {
    v29.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
    *(_QWORD *)&v29.fields.hasValue = &v26;
    *(System_ValueTuple_Int32Enum__int__o *)&v15 = System_Nullable_ValueTuple_Int32Enum__int____get_Value(v29, v16);
    if ( !v12
      || (items = v12->fields._items,
          v18 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__,
          ++v12->fields._version,
          !items) )
    {
LABEL_28:
      sub_1BCB254(v15, *((_QWORD *)&v15 + 1));
    }
    size = v12->fields._size;
    *((_QWORD *)&v15 + 1) = v15;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
        v12,
        *(System_ValueTuple_Int32Enum__int__o *)((char *)&v15 + 8),
        *(const MethodInfo_3666AD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      if ( !equipIds )
        return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v12;
      goto LABEL_13;
    }
    v12->fields._size = size + 1;
    items->m_Items[size] = (Il2CppObject *)v15;
  }
  if ( !equipIds )
    return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v12;
LABEL_13:
  v20 = *(_QWORD *)&equipIds->max_length;
  if ( (int)v20 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v20; ++i )
    {
      if ( i >= (unsigned int)v20 )
        sub_1BCB25C(v15, *((_QWORD *)&v15 + 1), v16);
      v16 = (const MethodInfo_37D4890 *)equipIds->m_Items[i];
      if ( (__int64)v16 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_28;
        *(_QWORD *)&v15 = DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &entity,
                            (int64_t)v16,
                            (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( (v15 & 1) != 0 )
        {
          *(_QWORD *)&v15 = entity;
          if ( !entity )
            goto LABEL_28;
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v15 = UserServantEntity__GetBaseFriendPointUpTypeVal(
                                                                         (UserServantEntity_o *)entity,
                                                                         *((const MethodInfo **)&v15 + 1));
          v26 = v15;
          v27 = DWORD2(v15);
          if ( (_BYTE)v15 )
          {
            v30.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
            *(_QWORD *)&v30.fields.hasValue = &v26;
            *(System_ValueTuple_Int32Enum__int__o *)&v15 = System_Nullable_ValueTuple_Int32Enum__int____get_Value(
                                                             v30,
                                                             v16);
            if ( !v12 )
              goto LABEL_28;
            v22 = v12->fields._items;
            v23 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
            ++v12->fields._version;
            if ( !v22 )
              goto LABEL_28;
            v24 = v12->fields._size;
            *((_QWORD *)&v15 + 1) = v15;
            if ( (unsigned int)v24 >= v22->max_length )
            {
              System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
                v12,
                *(System_ValueTuple_Int32Enum__int__o *)((char *)&v15 + 8),
                *(const MethodInfo_3666AD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = v24 + 1;
              v22->m_Items[v24] = (Il2CppObject *)v15;
            }
          }
        }
      }
      LODWORD(v20) = equipIds->max_length;
    }
  }
  return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v12;
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

  if ( (byte_4B1D479 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, v8);
    byte_4B1D479 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
}


ServantOverwriteStatus_o *__fastcall UserServantEntity__GetOverwriteStatus(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t DispLimitCount; // w20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *Master_object; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t ServantLimitCountSealAfter; // w1
  const MethodInfo *v17; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1D4C0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, questRestrictionInfo);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B1D4C0 = 1;
  }
  if ( !questRestrictionInfo
    || (DispLimitCount = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42573068(questRestrictionInfo, this, 0LL),
        (DispLimitCount & 0x80000000) != 0) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, method);
  }
  v10 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v10;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v11, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.svtId, 0LL);
  if ( !Master_object )
    sub_1BCB254(v14, v15);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v14,
                                 LimitCountByDispLimit,
                                 0LL);
  return UserServantEntity__GetOverwriteStatus_42324696(this, ServantLimitCountSealAfter, v17);
}


// local variable allocation has failed, the output may be wrong!
ServantOverwriteStatus_o *__fastcall UserServantEntity__GetOverwriteStatus_42324696(
        UserServantEntity_o *this,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *overwriteStatusMap; // x0
  struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o **p_overwriteStatusMap; // x21
  System_Collections_Generic_Dictionary_int__object__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  ServantOverwriteStatus_o *v16; // x22

  if ( (byte_4B1D4C1 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__,
      *(_QWORD *)&selectedLimitCount);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__, v7);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo, v8);
    sub_1BCAFF8(&ServantOverwriteStatus_TypeInfo, v9);
    byte_4B1D4C1 = 1;
  }
  overwriteStatusMap = this->fields.overwriteStatusMap;
  p_overwriteStatusMap = &this->fields.overwriteStatusMap;
  if ( !overwriteStatusMap )
  {
    v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v12,
      (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    *p_overwriteStatusMap = (struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *)v12;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.overwriteStatusMap, (int32_t)v12, v13, v14);
    overwriteStatusMap = *p_overwriteStatusMap;
    if ( !*p_overwriteStatusMap )
      goto LABEL_10;
  }
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
          selectedLimitCount,
          (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__) )
  {
    v16 = (ServantOverwriteStatus_o *)sub_1BCB244(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor(v16, this, selectedLimitCount, 0LL);
    overwriteStatusMap = this->fields.overwriteStatusMap;
    if ( !overwriteStatusMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
      selectedLimitCount,
      (Il2CppObject *)v16,
      (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
  }
  overwriteStatusMap = *p_overwriteStatusMap;
  if ( !*p_overwriteStatusMap )
LABEL_10:
    sub_1BCB254(overwriteStatusMap, v15);
  return (ServantOverwriteStatus_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
                                       selectedLimitCount,
                                       (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
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
  const MethodInfo *v31; // x1
  Il2CppObject *MasterData_object; // x0
  __int128 v33; // q0
  UserServantCollectionMaster_o *v34; // x26
  int64_t v35; // x0
  __int64 v36; // x23
  __int64 v37; // x27
  int64_t v38; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  int32_t friendshipRank; // w26
  long double v42; // q0
  __int64 v43; // x0
  __int64 v44; // x0
  Il2CppObject *v45; // x0
  __int128 v46; // q0
  ServantPassiveSkillMaster_o *v47; // x27
  int64_t v48; // x0
  int32_t lv; // w28
  __int64 v50; // x22
  __int64 v51; // x23
  int64_t v52; // x29
  Il2CppObject *v53; // x22
  CGThumbnailListItem_o *v54; // x29
  bool v55; // w19
  BalanceConfig_c *v56; // x0
  System_Int32_array *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_String_array *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x25
  Il2CppObject *v67; // x26
  __int64 v68; // x2
  const MethodInfo *v69; // x3
  int v70; // w8
  void *v71; // x27
  int i; // w20
  __int64 v73; // x8
  int32_t v74; // w29
  NetworkManager_c *v75; // x0
  int64_t userIdNumber; // x22
  __int64 v77; // x23
  __int64 v78; // x28
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
  System_String_array *v92; // x9
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  UserEventServantPointMaster_o *Master_object; // [xsp+38h] [xbp-F8h]
  UserServantEntity_o *v99; // [xsp+48h] [xbp-E8h]
  System_String_array **v100; // [xsp+50h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+A0h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_4B1D486 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, idList);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1BCAFF8(&DataManager_TypeInfo, v20);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_1BCAFF8(&int___TypeInfo, v23);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v24);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1BCAFF8(&string___TypeInfo, v29);
    byte_4B1D486 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v33 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v34 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v104.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v103 = v104;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v103, 0LL);
  v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v38 = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v106.fields.currentCryptoKey = v37;
  *(_QWORD *)&v106.fields.fakeValue = v36;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v106, 0LL);
  if ( !v34 )
    goto LABEL_79;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v34, v38, (int32_t)Instance, v39);
  if ( !Instance )
    goto LABEL_79;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v31);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v40);
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C1B45C(v42);
  v44 = *(_QWORD *)(*(_QWORD *)(v43 + 192) + 16LL);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C1B45C(v42);
  Instance = **(void ***)(v44 + 184);
  if ( !Instance )
    goto LABEL_79;
  v100 = explanationList;
  v45 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v46 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v47 = (ServantPassiveSkillMaster_o *)v45;
  *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v104.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v102 = v104;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v102, 0LL);
  lv = this->fields.lv;
  v51 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v50 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v99 = this;
  v52 = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v107.fields.currentCryptoKey = v51;
  *(_QWORD *)&v107.fields.fakeValue = v50;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v107, 0LL);
  if ( !v47 )
    goto LABEL_79;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v47,
    idList,
    titleList,
    v100,
    dispSvtId,
    v52,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    nowTime,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v99->fields.svtId, 0LL);
  if ( !v53 )
    goto LABEL_79;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
               (int32_t)Instance,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v54 = (CGThumbnailListItem_o *)v100;
  if ( !Instance )
    goto LABEL_79;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  v55 = *idList == 0LL;
  if ( !*idList )
  {
    v56 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v56 = BalanceConfig_TypeInfo;
    }
    v57 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, (unsigned int)v56->static_fields->SvtPassiveSkillListMax);
    *idList = v57;
    sub_1BCAF9C((CGThumbnailListItem_o *)idList, (int32_t)v57, v58, v59);
    v60 = (System_String_array *)sub_1BCB0A0(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v60;
    sub_1BCAF9C((CGThumbnailListItem_o *)titleList, (int32_t)v60, v61, v62);
    v63 = sub_1BCB0A0(string___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *v100 = (System_String_array *)v63;
    sub_1BCAF9C((CGThumbnailListItem_o *)v100, v63, v64, v65);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v66 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v67 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0LL)) == 0LL )
LABEL_79:
    sub_1BCB254(Instance, v31);
  v70 = *((_DWORD *)Instance + 6);
  v71 = Instance;
  if ( v70 >= 1 )
  {
    for ( i = 0; i < v70; ++i )
    {
      if ( i >= (unsigned int)v70 )
        goto LABEL_78;
      v73 = *((_QWORD *)v71 + i + 4);
      if ( !v73 )
        goto LABEL_79;
      v74 = *(_DWORD *)(v73 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      v75 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v75 = NetworkManager_TypeInfo;
      }
      userIdNumber = v75->static_fields->userIdNumber;
      v78 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
      v77 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v108.fields.currentCryptoKey = v78;
      *(_QWORD *)&v108.fields.fakeValue = v77;
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v108, 0LL);
      Instance = Master_object;
      if ( !Master_object )
        goto LABEL_79;
      Instance = (void *)UserEventServantPointMaster__TryGetEntity(Master_object, &entity, userIdNumber, v74, v79, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_79;
        Instance = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v80 = (int)Instance;
      }
      else
      {
        v80 = 0;
      }
      if ( !v66 )
        goto LABEL_79;
      Instance = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)v66,
                   v74,
                   v80,
                   dispSvtId,
                   0LL);
      if ( Instance )
      {
        v81 = *((_QWORD *)Instance + 4);
        v54 = (CGThumbnailListItem_o *)v100;
        if ( !v81 )
          goto LABEL_79;
        v82 = *(_QWORD *)(v81 + 24);
        if ( (int)v82 >= 1 )
        {
          v83 = 0LL;
          while ( v83 < (unsigned int)v82 )
          {
            v84 = *idList;
            if ( !*idList )
              goto LABEL_79;
            max_length = v84->max_length;
            if ( max_length >= 1 )
            {
              v31 = (const MethodInfo *)*(unsigned int *)(v81 + 4 * v83 + 32);
              v86 = 0;
              while ( 1 )
              {
                if ( v86 >= max_length )
                  goto LABEL_78;
                v87 = (int)v86;
                v88 = (char *)v84 + 4 * (int)v86;
                v90 = *((_DWORD *)v88 + 8);
                v89 = v88 + 32;
                if ( !v90 )
                  break;
                v86 = v87 + 1;
                if ( (int)v87 + 1 >= max_length )
                  goto LABEL_71;
              }
              *v89 = (_DWORD)v31;
              if ( !v67 )
                goto LABEL_79;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v67,
                           (int32_t)v31,
                           (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v91 = *titleList;
              if ( !*titleList )
                goto LABEL_79;
              v92 = *v100;
              if ( !*v100 || !Instance )
                goto LABEL_79;
              if ( (unsigned int)v87 >= v91->max_length || (unsigned int)v87 >= v92->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v91->m_Items[v87],
                &v92->m_Items[v87],
                0,
                0LL);
              v55 = 0;
            }
LABEL_71:
            LODWORD(v82) = *(_DWORD *)(v81 + 24);
            if ( (__int64)++v83 >= (int)v82 )
              goto LABEL_74;
          }
LABEL_78:
          sub_1BCB25C(Instance, v31, v68);
        }
      }
      else
      {
        v54 = (CGThumbnailListItem_o *)v100;
      }
LABEL_74:
      v70 = *((_DWORD *)v71 + 6);
    }
  }
  if ( v55 )
  {
    *idList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)idList, 0, v68, v69);
    *titleList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)titleList, 0, v93, v94);
    v54->klass = 0LL;
    sub_1BCAF9C(v54, 0, v95, v96);
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
  System_Collections_Generic_List_int__o *v19; // x19
  BalanceConfig_c *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x8
  unsigned __int64 v24; // x21
  int32_t v25; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v3 = costumeIds;
  if ( (byte_4B1D4E4 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, costumeIds);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v5);
    sub_1BCAFF8(&int___TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B1D4E4 = 1;
  }
  if ( !v3 )
    v3 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v13;
  *(_QWORD *)&v30.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v30, 0LL);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v31.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v31.fields.currentCryptoKey = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v31, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList = ImageLimitCount__GetCardSelectList(v16, v17, v3, 0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !CardSelectList )
    goto LABEL_29;
  v23 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)v23 )
        sub_1BCB25C(v20, v21, v22);
      v25 = CardSelectList->m_Items[v24 + 1];
      if ( v25 == -1 )
      {
        v21 = 0xFFFFFFFFLL;
        if ( !v19 )
          goto LABEL_29;
      }
      else
      {
        v20 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v20 = BalanceConfig_TypeInfo;
        }
        if ( v25 >= v20->static_fields->ServantLimitMax )
          v21 = (unsigned int)v25;
        else
          v21 = (unsigned int)(v25 + 1);
        if ( !v19 )
          goto LABEL_29;
      }
      items = v19->fields._items;
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          v21,
          *(const MethodInfo_369CBAC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = v21;
      }
      LODWORD(v23) = CardSelectList->max_length;
      ++v24;
    }
    while ( (__int64)v24 < (int)v23 );
  }
  if ( !v19 )
LABEL_29:
    sub_1BCB254(v20, v21);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetRarity(UserServantEntity_o *this, bool useOverwrite, const MethodInfo *method)
{
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v4; // x1

  if ( !useOverwrite )
    return UserServantEntity__getRarity(this, (const MethodInfo *)useOverwrite);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(this, 0LL, method);
  if ( !OverwriteStatus )
    sub_1BCB254(0LL, v4);
  return OverwriteStatus->fields._Rarity_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetRarityIcon(
        UserServantEntity_o *this,
        int32_t actualRarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool IsGrandServant; // w21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t RarityIcon; // w22

  if ( (byte_4B1D4D3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&actualRarity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1D4D3 = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, *(const MethodInfo **)&actualRarity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       (ServantExceedMaster_o *)Instance,
                       actualRarity,
                       this->fields.exceedCount,
                       0,
                       IsGrandServant,
                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v9);
  }
  return ServantLvDetailMaster__GetRarityIcon(
           (ServantLvDetailMaster_o *)Instance,
           actualRarity,
           this->fields.lv,
           RarityIcon,
           IsGrandServant,
           0LL);
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
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  int32_t v21; // w20
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B1D4ED & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, isLimitMax);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4B1D4ED = 1;
  }
  userStorageServantList = 0LL;
  memset(&v25, 0, sizeof(v25));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  v17 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                  v27,
                                                                  0LL);
  if ( !v16 )
    goto LABEL_26;
  if ( !isWarehouseServantEquip )
  {
    v21 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v16, &userStorageServantList, (int32_t)v17, 0, v20) )
      return v21;
LABEL_12:
    v17 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v21 = 0;
      v25 = v24;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v21;
          }
          if ( !isLimitMax )
            break;
          if ( !v25.fields._current )
            sub_1BCB254(0LL, v22);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v25.fields._current, v22) )
            goto LABEL_21;
        }
        if ( !v25.fields._current )
          sub_1BCB254(0LL, v22);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v25.fields._current, v22) )
LABEL_21:
          ++v21;
      }
    }
LABEL_26:
    sub_1BCB254(v17, v18);
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v17,
         &userStorageServantList,
         (int32_t)v17,
         v19) )
  {
    goto LABEL_12;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetSkillCategoryIdList(
        UserServantEntity_o *this,
        int32_t skillListNum,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x7
  bool IsServant; // w8
  UserServantEntity_o *v20; // x0
  const MethodInfo *v21; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B1D4EA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&skillListNum);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B1D4EA = 1;
  }
  skillInfoList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v12;
  *(_QWORD *)&v23.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v23, 0LL);
  if ( !v13 )
    sub_1BCB254(v14, v15);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v13,
                                   v14,
                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsServant = ServantEntity__get_IsServant((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsServant )
    {
      if ( (dispLimitCount & 0x80000000) != 0 )
        dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v17);
      UserServantEntity__getSkillInfo(this, &skillInfoList, -1, dispLimitCount, 1, 0, skillListNum, v18);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v20, skillInfoList, 1, v21);
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
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  long double v8; // q0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x0
  ServantSkillEntity_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v21; // x8
  ServantSkillMaster_o *v22; // x24
  const MethodInfo *v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v24; // x19
  __int128 v25; // q0
  int64_t userSvtId; // x26
  signed __int64 v27; // x27
  BalanceConfig_c *v28; // x0
  unsigned __int64 v29; // x23
  __int128 v30; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v32; // x25
  int64_t v33; // x0
  int32_t lv; // w28
  __int64 v35; // x19
  __int64 v36; // x27
  int64_t v37; // x29
  __int64 v38; // x2
  System_Int32_array *v40; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B1D480 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&servantId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v12);
    sub_1BCAFF8(&int___TypeInfo, v13);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    byte_4B1D480 = 1;
  }
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1B45C(v8);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1B45C(v8);
  UseEntity = **(ServantSkillEntity_o ***)(v18 + 184);
  if ( !UseEntity )
LABEL_33:
    sub_1BCB254(UseEntity, *(_QWORD *)&servantId);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v21 = BalanceConfig_TypeInfo;
  v22 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v40 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, (unsigned int)v21->static_fields->SvtSkillListMax);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, ignoreRandomSettings, v23);
  v24 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v25 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v48.fields.fakeValue = v25;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v47, -1LL, 0LL);
    v48 = v47;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v48;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v46, 0LL);
  v27 = 0LL;
  while ( 1 )
  {
    v28 = BalanceConfig_TypeInfo;
    v29 = v27;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    if ( v27 >= v28->static_fields->SvtSkillListMax )
      return v40;
    v30 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v31 = *v24;
    v32 = v24;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v30;
    if ( !v31->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v31);
    v45 = v47;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v45, 0LL);
    lv = this->fields.lv;
    v35 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v36 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    v37 = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v35;
    *(_QWORD *)&v49.fields.fakeValue = v36;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v49, 0LL);
    if ( !v22 )
      goto LABEL_33;
    v27 = v29 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  v22,
                  servantId,
                  (int)v29 + 1,
                  v37,
                  lv,
                  (int32_t)UseEntity,
                  dispLimitCount,
                  beforeQuestClear,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    v24 = v32;
    if ( UseEntity )
    {
      if ( !v40 )
        goto LABEL_33;
      if ( v29 >= v40->max_length )
        sub_1BCB25C(UseEntity, *(_QWORD *)&servantId, v38);
      v40->m_Items[v29 + 1] = UseEntity->fields.skillId;
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
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x19
  bool IsServantEquip; // w24
  BalanceConfig_c *v28; // x0
  BalanceConfig_c *v29; // x0
  SkillInfo_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v34; // x19
  __int128 v35; // q0
  unsigned __int64 v36; // x29
  __int64 v37; // x25
  SkillInfo_o *v38; // x27
  __int128 v39; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v41; // x26
  int64_t v42; // x0
  int32_t lv; // w19
  __int64 v44; // x21
  __int64 v45; // x28
  int64_t v46; // x23
  int32_t v47; // w5
  unsigned __int64 v48; // x28
  __int64 v49; // x2
  ServantSkillEntity_o *v50; // x19
  int32_t skillNum; // w8
  SkillInfo_array *v52; // x19
  const MethodInfo *v53; // x3
  __int64 v54; // x0
  __int64 v55; // [xsp+30h] [xbp-130h]
  __int64 v56; // [xsp+38h] [xbp-128h]
  __int64 v57; // [xsp+40h] [xbp-120h]
  bool v58; // [xsp+4Ch] [xbp-114h]
  int64_t userSvtId; // [xsp+50h] [xbp-110h]
  ServantSkillMaster_o *v63; // [xsp+70h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4B1D482 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v14);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BCAFF8(&SkillInfo___TypeInfo, v20);
    sub_1BCAFF8(&SkillInfo_TypeInfo, v21);
    byte_4B1D482 = 1;
  }
  *(_OWORD *)&v22 = 0uLL;
  memset(&v67[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C1B45C(COERCE_LONG_DOUBLE((unsigned __int128)0LL));
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1B45C(v22);
  Instance = **(_QWORD **)(v24 + 184);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v63 = (ServantSkillMaster_o *)MasterData_object;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        dispSvtId,
                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_49;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  v56 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum <= 0 )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    skillListNum = v28->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    skillListNum = v29->static_fields->SvtEquipSkillListMax;
  }
  v30 = (SkillInfo_array *)sub_1BCB0A0(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v30;
  sub_1BCAF9C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v30, v31, v32);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v33);
  v34 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v35 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v67[1].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v67[1].fields.fakeValue = v35;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v67, -1LL, 0LL);
    v67[1] = v67[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v66 = v67[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v66, 0LL);
  if ( skillListNum >= 1 )
  {
    v57 = (unsigned int)skillListNum;
    v36 = 0LL;
    v37 = 32LL;
    v55 = v56 + 32;
    v58 = finishEvent;
    while ( 1 )
    {
      v38 = (SkillInfo_o *)sub_1BCB244(SkillInfo_TypeInfo);
      SkillInfo___ctor(v38, 0LL);
      v39 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v40 = *v34;
      v41 = v34;
      *(_OWORD *)&v67[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v67[0].fields.fakeValue = v39;
      if ( !v40->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v40);
      v65 = v67[0];
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v65, 0LL);
      lv = this->fields.lv;
      v44 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v45 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v46 = v42;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v44;
      *(_QWORD *)&v68.fields.fakeValue = v45;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v68, 0LL);
      Instance = (__int64)v63;
      if ( !v63 )
        break;
      v48 = v36 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v63,
                            dispSvtId,
                            (int)v36 + 1,
                            v46,
                            lv,
                            v47,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v58,
                            0LL);
      if ( Instance )
      {
        if ( !v38 )
          break;
        v50 = (ServantSkillEntity_o *)Instance;
        v38->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v56 )
          break;
        if ( v36 >= *(unsigned int *)(v56 + 24) )
          goto LABEL_50;
        v38->fields.lv = *(_DWORD *)(v55 + 4 * v36);
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v38->fields.charge,
          &v38->fields.title,
          &v38->fields.explanation,
          *(_DWORD *)(v55 + 4 * v36),
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v50, 0LL);
        v38->fields.strengthStatus = Instance;
        skillNum = v50->fields.skillNum;
        v38->fields.isUse = 1;
        v38->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v38 )
          break;
        v38->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v63, dispSvtId, v48, 0LL);
          if ( Instance )
          {
            v38->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v38->fields.title,
              &v38->fields.explanation,
              0LL);
          }
        }
      }
      v52 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1BCB134(v38, v52->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v54 = sub_1BCB278(0LL);
        sub_1BCB120(v54, 0LL);
      }
      if ( v36 >= v52->max_length )
LABEL_50:
        sub_1BCB25C(Instance, skillInfoList, v49);
      v52->m_Items[v36] = v38;
      sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v52 + v37), (int32_t)v38, v49, v53);
      v37 += 8LL;
      ++v36;
      v34 = v41;
      if ( v57 == v48 )
        return;
    }
LABEL_49:
    sub_1BCB254(Instance, skillInfoList);
  }
}


int32_t __fastcall UserServantEntity__GetSkillMaxCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x19
  const MethodInfo *v6; // x7
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  SkillInfo_array *v10; // x21
  signed int max_length; // w8
  unsigned int v12; // w22
  int32_t v13; // w20
  SkillInfo_o *v14; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1D4F6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    byte_4B1D4F6 = 1;
  }
  skillInfoList = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v6);
  v10 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_19;
  max_length = skillInfoList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCB25C(v7, v8, v9);
      v14 = v10->m_Items[v12];
      if ( !v14 || !Master_object )
        break;
      v7 = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             v14->fields.id,
             (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( v7 )
      {
        if ( !entity )
          break;
        if ( v14->fields.lv >= SLODWORD(entity[2].monitor) )
          ++v13;
      }
      max_length = v10->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_19:
    sub_1BCB254(v7, v8);
  }
  return 0;
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
  __int64 v15; // x1
  bool IsOverwriteSvtDetailName; // w20
  Il2CppObject *v17; // x21
  const MethodInfo *v18; // x2
  int32_t CardImageLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w20
  Il2CppObject *v21; // x0
  __int64 v22; // x21
  __int64 v23; // x22
  ServantLimitImageMaster_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w1
  Il2CppObject *v27; // x0
  Il2CppObject *v29; // x20
  __int64 v30; // x19
  __int64 v31; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4B1D4F4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&string_TypeInfo, v9);
    byte_4B1D4F4 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v12;
  *(_QWORD *)&v33.fields.fakeValue = v11;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v33, 0LL);
  if ( !v13 )
    goto LABEL_26;
  IsOverwriteSvtDetailName = ServantLimitAddMaster__IsOverwriteSvtDetailName(v13, ServantLimitCountSealAfter, 0LL);
  v17 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                 this->fields.svtId,
                                 0LL);
  if ( !v17 )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
          &entity,
          ServantLimitCountSealAfter,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return string_TypeInfo->static_fields->Empty;
  if ( !IsOverwriteSvtDetailName )
  {
    v29 = entity;
    v31 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v30 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v31;
    *(_QWORD *)&v35.fields.fakeValue = v30;
    ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v35, 0LL);
    if ( v29 )
    {
      v26 = ServantLimitCountSealAfter;
      v25 = -1;
      v27 = v29;
      return ServantEntity__getName((ServantEntity_o *)v27, v26, v25, 0, 0LL);
    }
LABEL_26:
    sub_1BCB254(ServantLimitCountSealAfter, v15);
  }
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(this, 0, v18);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v21 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (ServantLimitImageMaster_o *)v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v23;
  *(_QWORD *)&v34.fields.fakeValue = v22;
  ServantLimitCountSealAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v34, 0LL);
  if ( !v24 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v24,
                                 ServantLimitCountSealAfter,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  if ( !entity )
    goto LABEL_26;
  v25 = ServantLimitCountSealAfter;
  v26 = -1;
  v27 = entity;
  return ServantEntity__getName((ServantEntity_o *)v27, v26, v25, 0, 0LL);
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
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1D4F2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantTransformMaster___, includeBaseServant);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B1D4F2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
  v13 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v14 = v12;
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                    v19,
                                                                    0LL);
  if ( !v11
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(
                                v11,
                                v14,
                                (int32_t)TransformServantIds,
                                0LL)) == 0LL )
  {
    sub_1BCB254(TransformServantIds, v16);
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
  const MethodInfo *v5; // x7
  System_Int32_array *TransformedSkillIdList; // x20
  const MethodInfo *v11; // x7
  System_Int32_array *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  il2cpp_array_size_t v16; // w23
  BalanceConfig_c *v17; // x0

  if ( (byte_4B1D4F3 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&skillId);
    byte_4B1D4F3 = 1;
  }
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, -1, 1, v5);
  v12 = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, questId, 1, v11);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)TransformedSkillIdList, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0LL) )
  {
    v16 = 0;
    v17 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BalanceConfig_TypeInfo;
      }
      if ( (signed int)v16 >= v17->static_fields->SvtSkillListMax )
        break;
      if ( !TransformedSkillIdList )
        goto LABEL_17;
      if ( v16 >= TransformedSkillIdList->max_length )
        goto LABEL_18;
      if ( TransformedSkillIdList->m_Items[v16 + 1] == skillId )
      {
        if ( !v12 )
LABEL_17:
          sub_1BCB254(v17, v13);
        if ( v16 >= v12->max_length )
LABEL_18:
          sub_1BCB25C(v17, v13, v14);
        return v12->m_Items[v16 + 1];
      }
      ++v16;
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
  const MethodInfo *v5; // x7
  System_Int32_array *TransformedSkillIdList; // x20
  const MethodInfo *v10; // x7
  System_Int32_array *v11; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  il2cpp_array_size_t v16; // w9

  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(this, transformCountBef, -1, -1, 1, -1, 1, v5);
  v11 = UserServantEntity__GetTransformedSkillIdList(this, transformCountAft, -1, -1, 1, -1, 1, v10);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !TransformedSkillIdList )
    goto LABEL_13;
  max_length = TransformedSkillIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( max_length == v16 )
      goto LABEL_12;
    if ( TransformedSkillIdList->m_Items[v16 + 1] == skillId )
      break;
    if ( max_length == ++v16 )
      return 0;
  }
  if ( !v11 )
LABEL_13:
    sub_1BCB254(IsNullOrEmpty, v13);
  if ( v16 >= v11->max_length )
LABEL_12:
    sub_1BCB25C(IsNullOrEmpty, v13, v14);
  return v11->m_Items[v16 + 1];
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
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B1D4EE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantTransformMaster___, *(_QWORD *)&transformCount);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B1D4EE = 1;
  }
  if ( !transformCount )
    return UserServantEntity__getSvtId(this, *(const MethodInfo **)&transformCount);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
  v14 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v20.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                    v20,
                                                                    0LL);
  if ( !v12
    || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(
                                v12,
                                v15,
                                (int32_t)TransformServantIds,
                                0LL)) == 0LL )
  {
    sub_1BCB254(TransformServantIds, v17);
  }
  if ( TransformServantIds->fields._size >= transformCount )
    return System_Collections_Generic_List_int___get_Item(
             TransformServantIds,
             transformCount - 1,
             (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
  else
    return 0;
}


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
  const MethodInfo *v14; // x3
  Il2CppObject *Master_object; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantTransformMaster_o *v18; // x22
  int32_t v19; // w0
  __int64 v20; // x8
  int32_t v21; // w21
  System_Collections_Generic_List_TransformServantInfo__o *TransformServantInfo; // x0
  __int64 v23; // x1
  int32_t size; // w21
  Il2CppObject *Item; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B1D4EF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantTransformMaster___, transformInfo);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TransformServantInfo__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&TransformServantInfo_TypeInfo, v11);
    byte_4B1D4EF = 1;
  }
  v12 = (TransformServantInfo_o *)sub_1BCB244(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor(v12, 0LL);
  *transformInfo = v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)transformInfo, (int32_t)v12, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v17;
  *(_QWORD *)&v29.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v29, 0LL);
  v20 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v30.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v21 = v19;
  *(_QWORD *)&v30.fields.currentCryptoKey = v20;
  TransformServantInfo = (System_Collections_Generic_List_TransformServantInfo__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                                      v30,
                                                                                      0LL);
  if ( !v18
    || (TransformServantInfo = ServantTransformMaster__GetTransformServantInfo(
                                 v18,
                                 v21,
                                 (int32_t)TransformServantInfo,
                                 0LL)) == 0LL )
  {
    sub_1BCB254(TransformServantInfo, v23);
  }
  size = TransformServantInfo->fields._size;
  if ( size > transformCount )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)TransformServantInfo,
             transformCount,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    *transformInfo = (TransformServantInfo_o *)Item;
    sub_1BCAF9C((CGThumbnailListItem_o *)transformInfo, (int32_t)Item, v26, v27);
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
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 TransformedServantInfo; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7
  TransformServantInfo_o *v18; // x24
  __int64 v19; // x25
  __int64 v20; // x26
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B1D4F0 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&transformIndex);
    byte_4B1D4F0 = 1;
  }
  transformInfo = 0LL;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformIndex,
                             *(const MethodInfo **)&specificLimitCount);
  if ( (ignoreRandomSettings & ((unsigned int)useDispLimitCount >> 31)) != 0 )
  {
    v18 = transformInfo;
    v20 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v20;
    *(_QWORD *)&v23.fields.fakeValue = v19;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v23, 0LL);
    if ( !v18 )
LABEL_10:
      sub_1BCB254(TransformedServantInfo, v16);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v18, TransformedServantInfo, 0LL);
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
           ignoreRandomSettings,
           v17);
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

  if ( (byte_4B1D4F1 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_4B1D4F1 = 1;
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
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v21, 0LL);
    if ( !v16 )
LABEL_10:
      sub_1BCB254(TransformedServantInfo, v14);
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
        int32_t dispLimitCount,
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
  Il2CppObject *Master_object; // x0
  __int64 v28; // x23
  __int64 v29; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x22
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x1
  Il2CppObject *v33; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x5
  System_Int32_array *v36; // x22
  long double v37; // q0
  __int64 v38; // x0
  __int64 v39; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v41; // x20
  __int64 v42; // x21
  TreasureDvcMaster_o *v43; // x19
  TreasureDvcEntity_o *v44; // x19
  TreasureDvcLvMaster_o *v45; // x20
  TreasureDvcLvEntity_o *v46; // x0
  TreasureDvcLvEntity_o *v47; // x21
  Il2CppObject *v48; // x19
  Il2CppObject *v49; // x23
  System_Collections_Generic_HashSet_int__o *v50; // x22
  const MethodInfo_3571E2C **v51; // x27
  __int64 v52; // x2
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v55; // x24
  unsigned __int64 v56; // x29
  unsigned __int64 max_length; // x9
  DataVals_o *v58; // x25
  int32_t v59; // w1
  int32_t Param; // w26
  int32_t v61; // w1
  System_Collections_Generic_IEnumerable_T__o *v62; // x1
  System_Collections_Generic_HashSet_int__o *v63; // x20
  const MethodInfo_3571E2C **v64; // x22
  int32_t v65; // w26
  int32_t v66; // w27
  void *v67; // x8
  System_Collections_Generic_HashSet_int__o *v68; // x20
  _BOOL8 v69; // x0
  __int64 v70; // x1
  _BOOL8 v71; // x0
  __int64 v72; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v75; // [xsp+0h] [xbp-D0h]
  DataVals_o **v76; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v77; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v78; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v79; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v80; // [xsp+48h] [xbp-88h] BYREF
  TreasureDvcLvEntity_o *v81; // [xsp+50h] [xbp-80h] BYREF
  SkillLvEntity_o *v82; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4B1D4EB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, isLvOne);
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v22);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v23);
    sub_1BCAFF8(&int___TypeInfo, v24);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v26);
    byte_4B1D4EB = 1;
  }
  entity = 0LL;
  tdInfo = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  memset(&v79, 0, sizeof(v79));
  v78 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v29;
  *(_QWORD *)&v85.fields.fakeValue = v28;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v85, 0LL);
  if ( !v30 )
    goto LABEL_66;
  v33 = DataMasterBase_object__object__int___GetEntity(
          v30,
          (int32_t)DataValsList,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v33 )
    return 0LL;
  v36 = 0LL;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)v33, 0LL) )
  {
    if ( (dispLimitCount & 0x80000000) != 0 )
      dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v34);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, -1, dispLimitCount, isLvOne, v35) )
      return 0LL;
    v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C1B45C(v37);
    v39 = *(_QWORD *)(*(_QWORD *)(v38 + 192) + 16LL);
    if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
      v39 = sub_1C1B45C(v37);
    DataValsList = **(DataVals_array ***)(v39 + 184);
    if ( !DataValsList )
      goto LABEL_66;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)DataValsList,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v42 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v43 = (TreasureDvcMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v86.fields.currentCryptoKey = v42;
    *(_QWORD *)&v86.fields.fakeValue = v41;
    DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v86, 0LL);
    if ( !tdInfo || !v43 )
      goto LABEL_66;
    v44 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v43, (int32_t)DataValsList, tdInfo->fields.id, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v44 )
      goto LABEL_66;
    if ( !tdInfo )
      goto LABEL_66;
    v45 = (TreasureDvcLvMaster_o *)DataValsList;
    if ( !DataValsList )
      goto LABEL_66;
    v46 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, v44->fields.id, tdInfo->fields.lv, 0LL);
    if ( !v46 )
      return 0LL;
    v47 = v46;
    if ( !v46->fields.funcId )
      return 0LL;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v75 = v45;
    v48 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
    v49 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v50 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v50,
      (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v50 )
      goto LABEL_66;
    v51 = (const MethodInfo_3571E2C **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v50,
      (System_Collections_Generic_IEnumerable_T__o *)v47->fields.funcId,
      (const MethodInfo_3571E2C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v47, 100, 0LL);
    funcId = v47->fields.funcId;
    if ( !funcId )
      goto LABEL_66;
    m_Items = DataValsList->m_Items;
    v55 = DataValsList;
    v56 = 0LL;
    v76 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v56 >= (int)max_length )
      {
        v68 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v68,
          (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v77,
          v50,
          (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v79 = v77;
        while ( 1 )
        {
          v69 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v79,
                  (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v69 )
            break;
          if ( !v48 )
            sub_1BCB254(v69, v70);
          v71 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                  &v78,
                  (int32_t)v79.fields._current,
                  (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v71 )
          {
            if ( !v78 )
              sub_1BCB254(v71, v72);
            if ( !v68 )
              sub_1BCB254(v71, v72);
            System_Collections_Generic_HashSet_int___Add(
              v68,
              HIDWORD(v78[4].monitor),
              (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v79,
          (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v68 )
        {
          count = (unsigned int)v68->fields._count;
          if ( (int)count > 0 )
          {
            v36 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_56041812(
              v68,
              v36,
              (const MethodInfo_3572154 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return v36;
          }
          return 0LL;
        }
LABEL_66:
        sub_1BCB254(DataValsList, v32);
      }
      if ( v56 >= max_length )
        goto LABEL_79;
      if ( !v48 )
        goto LABEL_66;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                                         &entity,
                                         funcId->m_Items[v56 + 1],
                                         (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_66;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v55 )
            goto LABEL_66;
          if ( v56 >= v55->max_length )
LABEL_79:
            sub_1BCB25C(DataValsList, v32, v52);
          if ( !entity )
            goto LABEL_66;
          v58 = m_Items[v56];
          if ( !v58 )
            goto LABEL_66;
          DataVals__SetTempType(m_Items[v56], (FunctionMaster_o *)v48, (int32_t)entity[1].monitor, 0LL);
          v59 = DataVals__isParam(v58, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v58, v59, 0, 0LL);
          v61 = DataVals__isParam(v58, 27, 0LL) ? 27 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v58, v61, 0, 0LL);
          if ( !v49 )
            goto LABEL_66;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v49,
                                             &v82,
                                             Param,
                                             (int32_t)DataValsList,
                                             0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v82 )
              goto LABEL_66;
            v62 = (System_Collections_Generic_IEnumerable_T__o *)v82->fields.funcId;
            if ( v62 )
              System_Collections_Generic_HashSet_int___UnionWith(v50, v62, *v51);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v58, 93, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v58, 94, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v63 = v50;
              v64 = v51;
              v65 = DataVals__GetParam(v58, 93, 0, 0LL);
              v66 = DataVals__GetParam(v58, 94, 0, 0LL);
              if ( DataVals__isParam(v58, 96, 0LL) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v75, &v81, v65, v66, 0LL);
                v51 = v64;
                v50 = v63;
                m_Items = v76;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v67 = v81;
                  if ( !v81 )
                    goto LABEL_66;
LABEL_63:
                  v32 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v67 + 4);
                  if ( v32 )
                    System_Collections_Generic_HashSet_int___UnionWith(v50, v32, *v51);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                   (SkillLvMaster_o *)v49,
                                                   &v80,
                                                   v65,
                                                   v66,
                                                   0LL);
                v51 = v64;
                v50 = v63;
                m_Items = v76;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v67 = v80;
                  if ( !v80 )
                    goto LABEL_66;
                  goto LABEL_63;
                }
              }
            }
          }
        }
      }
      funcId = v47->fields.funcId;
      ++v56;
      if ( !funcId )
        goto LABEL_66;
    }
  }
  return v36;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  TreasureDvcInfo_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t FriendshipRank; // w24
  long double v27; // q0
  __int64 v28; // x0
  __int64 v29; // x0
  DataManager_o *Instance; // x0
  bool v31; // w20
  int32_t v32; // w23
  int32_t v33; // w19
  Il2CppObject *MasterData_object; // x0
  __int128 v35; // q0
  ServantTreasureDvcMaster_o *v36; // x26
  int64_t v37; // x0
  int32_t lv; // w27
  __int64 v39; // x22
  __int64 v40; // x29
  int64_t v41; // x28
  int32_t v42; // w29
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int128 v44; // q0
  TreasureDvcInfo_o **v45; // x19
  int64_t v46; // x0
  ServantTreasureDvcEntity_o *v47; // x23
  TreasureDvcInfo_o *v48; // x8
  DataManager_o *v49; // x22
  TreasureDvcInfo_o *v50; // x20
  TreasureDvcInfo_o **v52; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4B1D49B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantFlagMaster___, tdInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BCAFF8(&TreasureDvcInfo_TypeInfo, v19);
    byte_4B1D49B = 1;
  }
  v20 = (TreasureDvcInfo_o *)sub_1BCB244(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v20, 0LL);
  *tdInfo = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)tdInfo, (int32_t)v20, v21, v22);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v23);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v25);
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C1B45C(v27);
  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C1B45C(v27);
  Instance = **(DataManager_o ***)(v29 + 184);
  if ( !Instance )
    goto LABEL_38;
  v52 = tdInfo;
  v31 = isLvOne;
  v32 = dispSvtId;
  v33 = beforeClearQuestId;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v35 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v36 = (ServantTreasureDvcMaster_o *)MasterData_object;
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v54 = v55;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v54, 0LL);
  lv = this->fields.lv;
  v39 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v40 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v41 = v37;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v39;
  *(_QWORD *)&v56.fields.fakeValue = v40;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v56, 0LL);
  if ( !v36 )
    goto LABEL_38;
  v42 = v32;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v36,
                v32,
                v41,
                lv,
                (int32_t)Instance,
                dispLimitCount,
                FriendshipRank,
                v33,
                0LL);
  if ( v31 )
  {
    v44 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v45 = v52;
    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v55.fields.fakeValue = v44;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v53 = v55;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v53, 0LL);
    UseEntity = ServantTreasureDvcMaster__getUseEntity(v36, v32, v46, 1, 0, 0, 0, -1, 0LL);
  }
  else
  {
    v45 = v52;
  }
  v47 = UseEntity;
  if ( UseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, v42, 1, 0LL);
        v48 = *v45;
        if ( *v45 )
        {
          v49 = Instance;
          v48->fields.id = v47->fields.treasureDeviceId;
          v48->fields.lv = this->fields.treasureDeviceLv1;
          if ( Instance )
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                          (ServantFlagReleaseMaster_o *)Instance,
                                          v42,
                                          *((_DWORD *)&v49->fields.UnityEngine_Behaviour_Fields + 1),
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                            (ServantFlagMaster_o *)Instance,
                                            v42,
                                            *((_DWORD *)&v49->fields.UnityEngine_Behaviour_Fields + 1),
                                            0LL);
              if ( (int)Instance >= 1 )
              {
                if ( !*v45 )
                  goto LABEL_38;
                (*v45)->fields.id = (int)Instance;
              }
            }
          }
          v50 = *v45;
          if ( *v45 )
          {
            Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                          v47,
                                          &v50->fields.name,
                                          &v50->fields.explanation,
                                          &v50->fields.maxLv,
                                          &v50->fields.guageCount,
                                          &v50->fields.cardId,
                                          &v50->fields.strengthStatus,
                                          &v50->fields.treasureDeviceNum,
                                          v50->fields.lv,
                                          0LL);
            v50->fields.isUse = (unsigned __int8)Instance & 1;
            if ( *v45 )
              return (*v45)->fields.isUse;
          }
        }
      }
    }
LABEL_38:
    sub_1BCB254(Instance, v24);
  }
  return 0;
}


UserServantCommandCardEntity_o *__fastcall UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  DataManager_o *v9; // x0
  Il2CppObject *MasterData_object; // x0
  __int128 v11; // q0
  UserServantCommandCardMaster_o *v12; // x20
  int64_t v13; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  int64_t v16; // x19
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B1D4D8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4B1D4D8 = 1;
  }
  entity = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1B45C(v2);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C(v2);
  v9 = **(DataManager_o ***)(v8 + 184);
  if ( !v9 )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        v9,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v11 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v12 = (UserServantCommandCardMaster_o *)MasterData_object;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v19, 0LL);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  v9 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v22, 0LL);
  if ( !v12 )
LABEL_14:
    sub_1BCB254(v9, method);
  UserServantCommandCardMaster__TryGetEntity(v12, &entity, v16, (int)v9, v17);
  return entity;
}


bool __fastcall UserServantEntity__HasStatus(UserServantEntity_o *this, int64_t statusFlag, const MethodInfo *method)
{
  bool v3; // zf

  if ( statusFlag <= 128 )
    v3 = (this->fields.status & (unsigned int)statusFlag) == 0;
  else
    v3 = (this->fields.status2 & statusFlag) == 0;
  return !v3;
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
  __int64 v13; // x1
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B1D478 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantTransformMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4B1D478 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v7;
  *(_QWORD *)&v16.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v16, 0LL);
  v10 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v17, 0LL);
  if ( !v8 )
    sub_1BCB254(v12, v13);
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
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4DD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
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
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4BD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4A6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1D4DE & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BCAFF8(&OptionManager_TypeInfo, v3);
    byte_4B1D4DE = 1;
  }
  v5 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL) )
  {
    v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v10, 0LL) == 1;
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

  if ( (byte_4B1D4E0 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BCAFF8(&OptionManager_TypeInfo, v3);
    byte_4B1D4E0 = 1;
  }
  v5 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL) )
  {
    v7 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v10, 0LL) == 1;
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
  UserServantEntity__getTreasureDeviceInfo_42314120(this, &tdMaxLv[1], tdMaxLv, v3);
  return tdMaxLv[0] < tdMaxLv[1] + targetLv;
}


bool __fastcall UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  __int128 v10; // q1
  int64_t v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+60h] [xbp-40h]

  if ( (byte_4B1D4E5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCombineExpMaster___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1D4E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_14:
    sub_1BCB254(Instance, v8);
  }
  UserCombineExpMaster__GetUserSvtId(&v15, (UserCombineExpMaster_o *)Instance, 0LL);
  v16 = v15;
  v10 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v14, 0LL);
  v13 = v16;
  LOBYTE(ExchangeSvtCombineExpCampaign) = v11 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                                   &v13,
                                                   0LL);
  return (char)ExchangeSvtCombineExpCampaign;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4DB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsGrandServant(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  System_Collections_ICollection_o *Entitys; // x20
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4B1D4F8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_UserServantGrandEntity___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantGrandMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_UserServantGrandEntity___, v6);
    sub_1BCAFF8(&System_Func_UserServantGrandEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_UserServantEntity__IsGrandServant_b__221_0__, v8);
    byte_4B1D4F8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v10);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_32CBB3C *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  if ( BasicHelper__IsNullOrEmpty(Entitys, 0LL) )
    return 0;
  v13 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)Entitys,
          (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v14, (Il2CppObject *)this, Method_UserServantEntity__IsGrandServant_b__221_0__, 0LL);
  return System_Linq_Enumerable__Any_object__50496752(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_30284F0 *)Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4DC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D4AE & 1) == 0 )
  {
    sub_1BCAFF8(&TutorialFlag_TypeInfo, method);
    byte_4B1D4AE = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39617644(126, 0LL);
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
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4E8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1D4D9 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&battleVoice);
    byte_4B1D4D9 = 1;
  }
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v8, 0LL) != battleVoice;
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

  if ( (byte_4B1D4E3 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&ownSettingParam);
    byte_4B1D4E3 = 1;
  }
  v8 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL) != ownSettingParam )
    return 1;
  v10 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL) != friendFollowSettingParam;
}


bool __fastcall UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  __int128 v6; // q0
  int64_t userIdNumber; // x20
  __int128 v8; // q0
  int64_t v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4B1D4AC & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1BCAFF8(&UserServantNewManager_TypeInfo, v4);
    byte_4B1D4AC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  userIdNumber = v5->static_fields->userIdNumber;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  if ( userIdNumber == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v13, 0LL) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v14.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v14;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v12, 0LL);
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
  __int64 v6; // x1

  EventServant = UserServantEntity__getEventServant(this, method);
  if ( EventServant )
  {
    v5 = UserServantEntity__getEventServant(this, v4);
    if ( !v5 )
      sub_1BCB254(0LL, v6);
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
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x4
  int v26; // w21
  bool EntityListBySvtId; // w0
  UserServantEntity_Fields *p_fields; // x22
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x19
  Il2CppObject v33; // q0
  int64_t v34; // x0
  __int128 v35; // q0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  int32_t LimitCount; // w20
  BalanceConfig_c *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B1D4EC & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, isWarehouseServantEquip);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4B1D4EC = 1;
  }
  v13 = BalanceConfig_TypeInfo;
  userStorageServantList = 0LL;
  memset(&v43, 0, sizeof(v43));
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
  *(_QWORD *)&v45.fields.currentCryptoKey = v15;
  *(_QWORD *)&v45.fields.fakeValue = v14;
  v17 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v45, 0LL);
  if ( !v17 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v20;
  *(_QWORD *)&v46.fields.fakeValue = v19;
  v22 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                  v46,
                                                                  0LL);
  if ( !v21 )
    goto LABEL_33;
  if ( !isWarehouseServantEquip )
  {
    EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(v21, &userStorageServantList, (int32_t)v22, 0, v25);
    v26 = 0;
    if ( !EntityListBySvtId )
      return v17 <= v26;
    goto LABEL_18;
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(
         (UserServantMaster_o *)v22,
         &userStorageServantList,
         (int32_t)v22,
         v24) )
  {
LABEL_18:
    v22 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      *(_OWORD *)&v43.fields._list = *(_OWORD *)&v42.fields.currentCryptoKey;
      v43.fields._current = (Il2CppObject *)v42.fields.fakeValue;
      v26 = 0;
      p_fields = &this->fields;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v30 )
          break;
        current = v43.fields._current;
        if ( !v43.fields._current )
          sub_1BCB254(v30, v31);
        v33 = v43.fields._current[2];
        *(Il2CppObject *)&v42.fields.currentCryptoKey = v43.fields._current[1];
        *(Il2CppObject *)&v42.fields.fakeValue = v33;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v41 = v42;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v41, 0LL);
        v35 = *(_OWORD *)&p_fields->id.fields.fakeValue;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&v40.fields.fakeValue = v35;
        if ( v34 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v40, 0LL) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v36);
          v39 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v39 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v39->static_fields->ServantLimitMax )
            v26 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v37) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v17 <= v26;
    }
LABEL_33:
    sub_1BCB254(v22, v23);
  }
  v26 = 0;
  return v17 <= v26;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B1D4E2 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D4E2 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsSkillSwitchable(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  const MethodInfo *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  System_Int32_array *SkillIdList; // x20
  signed __int64 i; // x21
  BalanceConfig_c *ServantSkillAddBySkillId; // x0
  signed __int64 SvtSkillListMax; // x24
  struct System_Int32_array *skillIds; // x8
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1D4F7 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B1D4F7 = 1;
  }
  svtSkillAddEnt = 0LL;
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v5;
  *(_QWORD *)&v18.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
  SkillIdList = UserServantEntity__GetSkillIdList(this, v6, -1, -1, 1, -1, 0, v7);
  for ( i = 0LL; ; ++i )
  {
    ServantSkillAddBySkillId = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      ServantSkillAddBySkillId = BalanceConfig_TypeInfo;
    }
    SvtSkillListMax = ServantSkillAddBySkillId->static_fields->SvtSkillListMax;
    if ( i >= SvtSkillListMax )
      break;
    if ( !SkillIdList )
      goto LABEL_17;
    if ( i >= (unsigned __int64)SkillIdList->max_length )
      sub_1BCB25C(ServantSkillAddBySkillId, v8, v9);
    ServantSkillAddBySkillId = (BalanceConfig_c *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                                    this,
                                                    &svtSkillAddEnt,
                                                    SkillIdList->m_Items[i + 1],
                                                    v10);
    if ( ((unsigned __int8)ServantSkillAddBySkillId & 1) != 0 )
    {
      if ( !svtSkillAddEnt || (skillIds = svtSkillAddEnt->fields.skillIds) == 0LL )
LABEL_17:
        sub_1BCB254(ServantSkillAddBySkillId, v8);
      if ( (int)skillIds->max_length > 1 )
        break;
    }
  }
  return i < SvtSkillListMax;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4BE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1D498 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B1D498 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  return QuestRestrictionInfo__IsUniqueIndividuality_42559812(questRestrictionInfo, v7, v8, DispLimitCount, 0LL, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_42312472(
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

  if ( (byte_4B1D499 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B1D499 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_42561296(
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


bool __fastcall UserServantEntity__IsUseFriendshipExceedItemHeroine(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( UserServantEntity__IsHeroine(this, method) )
    return (BYTE1(this->fields.status2) >> 1) & 1;
  else
    LOBYTE(v3) = 0;
  return v3;
}


bool __fastcall UserServantEntity__IsUseLevelExceedItemHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( UserServantEntity__IsHeroine(this, method) )
    return BYTE1(this->fields.status2) & 1;
  else
    return 0;
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

  if ( (byte_4B1D4DF & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D4DF = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6, 0LL);
}


void __fastcall UserServantEntity__SetDispLimitCountAfter(
        UserServantEntity_o *this,
        int32_t val,
        const MethodInfo *method)
{
  this->fields.dispLimitCountAfter = val;
}


void __fastcall UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int128 v4; // q0
  int64_t v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1D4AD & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1BCAFF8(&UserServantNewManager_TypeInfo, v3);
    byte_4B1D4AD = 1;
  }
  v4 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v6, 0LL);
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

  if ( (byte_4B1D4E1 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D4E1 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v8, 0LL);
  if ( v5 == 1 )
    v6 = 4;
  else
    v6 = 3;
  if ( v5 == 2 )
    return 5;
  else
    return v6;
}


bool __fastcall UserServantEntity__TryGetServantSkillAddBySkillId(
        UserServantEntity_o *this,
        ServantSkillAddEntity_o **svtSkillAddEnt,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantSkillAddMaster_o *v12; // x22
  int32_t v13; // w23
  int32_t v14; // w24
  const MethodInfo *v15; // x2
  __int64 DispLimitCount; // x0
  __int64 v17; // x1
  ServantSkillAddEntity_o *EnableEntity; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B1D4F5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantSkillAddMaster___, svtSkillAddEnt);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B1D4F5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantSkillAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v22, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 1, v15);
  if ( !v12 )
    sub_1BCB254(DispLimitCount, v17);
  EnableEntity = ServantSkillAddMaster__GetEnableEntity(v12, v13, v14, skillId, 0, DispLimitCount, 1, 0LL);
  *svtSkillAddEnt = EnableEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)svtSkillAddEnt, (int32_t)EnableEntity, v19, v20);
  return *svtSkillAddEnt != 0LL;
}


bool __fastcall UserServantEntity___GetEventServantWithinCreatedAt_b__132_0(
        UserServantEntity_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  int64_t createdAt; // x8

  if ( !x )
    sub_1BCB254(this, 0LL);
  createdAt = this->fields.createdAt;
  return x->fields.startedAt <= createdAt && createdAt <= x->fields.endedAt;
}


bool __fastcall UserServantEntity___IsGrandServant_b__221_0(
        UserServantEntity_o *this,
        UserServantGrandEntity_o *userServantGrandEntity,
        const MethodInfo *method)
{
  __int128 v5; // q0
  int64_t v6; // x0
  __int64 v7; // x1
  __int128 v8; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-50h]

  if ( (byte_4B1D4F9 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantGrandEntity);
    byte_4B1D4F9 = 1;
  }
  v5 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v11, 0LL);
  if ( !userServantGrandEntity )
    sub_1BCB254(v6, v7);
  if ( v6 != userServantGrandEntity->fields.userId )
    return 0;
  v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v10, 0LL) == userServantGrandEntity->fields.userSvtId;
}


bool __fastcall UserServantEntity__checkID(UserServantEntity_o *this, int64_t inId, const MethodInfo *method)
{
  __int128 v5; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-50h]

  if ( (byte_4B1D49D & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, inId);
    byte_4B1D49D = 1;
  }
  v5 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v7, 0LL) == inId;
}


int32_t __fastcall UserServantEntity__checkTreasureDeviceLevelUp(
        UserServantEntity_o *this,
        int32_t targetLv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0LL;
  UserServantEntity__getTreasureDeviceInfo_42314120(this, &tdMaxLv[1], tdMaxLv, v3);
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
  __int64 v8; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B1D4D5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineMaster___, *(_QWORD *)&materialId);
    sub_1BCAFF8(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1D4D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
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
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v13; // x1
  int32_t klass_high; // w23
  _DWORD *v15; // x22
  BalanceConfig_c *v16; // x0
  int32_t adjustAtk; // w8
  int32_t v18; // w20

  if ( (byte_4B1D4BB & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, hpData);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantRarityMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1D4BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v13),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v11);
  }
  klass_high = HIDWORD(Instance[1].klass);
  v15 = Instance;
  v16 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= klass_high )
    klass_high = v15[7];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  *hpData = v16->static_fields->StatusUpAdjustHp * klass_high;
  adjustAtk = this->fields.adjustAtk;
  v18 = v15[6];
  if ( adjustAtk >= v18 )
  {
    v18 = v15[8];
    if ( !v16->_2.cctor_finished )
    {
LABEL_14:
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BalanceConfig_TypeInfo;
    }
  }
  else if ( !v16->_2.cctor_finished )
  {
    goto LABEL_14;
  }
  *atkData = v16->static_fields->StatusUpAdjustAtk * v18;
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
  Il2CppClass *klass; // x1
  SvtUseSkillData_o *SkillData; // x19
  Il2CppObject *v17; // x0
  __int128 v18; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  struct System_Int32_array *svtSkillNumsList; // x8
  __int64 v21; // x0
  struct System_Int32_array **p_svtSkillLvList; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  __int128 v26; // q1
  UserServantAppendPassiveSkillMaster_o *v27; // x22
  int64_t v28; // x0
  __int64 v29; // x8
  int64_t v30; // x20
  const MethodInfo *v31; // x4
  unsigned __int64 namespaze_low; // x2
  struct System_Int32_array *unlockNums; // x16
  __int64 v34; // x8
  struct System_Int32_array *v35; // x9
  unsigned __int64 max_length; // x10
  Il2CppObject *v37; // x12
  struct System_Int32_array *v38; // x14
  unsigned __int64 v39; // x11
  int32_t *v40; // x16
  __int64 v41; // x0
  int32_t *v42; // x3
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

  if ( (byte_4B1D487 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v6);
    sub_1BCAFF8(&int___TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4B1D487 = 1;
  }
  entity = 0LL;
  v55 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v12;
  *(_QWORD *)&v57.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v57, 0LL);
  if ( !v13 )
    goto LABEL_50;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v13, v14, 0LL);
  v17 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v18 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)v17;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v54;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v53, 0LL);
  if ( !v19 )
    goto LABEL_50;
  v14 = DataMasterBase_object__object__long___TryGetEntity(
          v19,
          &entity,
          v14,
          (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_50;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_50;
  v21 = sub_1BCB0A0(int___TypeInfo, svtSkillNumsList->max_length);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v21;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&SkillData->fields.svtSkillLvList, v21, v23, v24);
  v25 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v27 = (UserServantAppendPassiveSkillMaster_o *)v25;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v52, 0LL);
  v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v30 = v28;
  *(_QWORD *)&v58.fields.currentCryptoKey = v29;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v58, 0LL);
  if ( !v27 )
    goto LABEL_50;
  v14 = UserServantAppendPassiveSkillMaster__TryGetEntity(v27, &v55, v30, v14, v31);
  if ( (v14 & 1) == 0 )
    goto LABEL_42;
  if ( !v55 )
    goto LABEL_50;
  unlockNums = v55->fields.unlockNums;
  if ( !unlockNums )
    goto LABEL_50;
  v34 = *(_QWORD *)&unlockNums->max_length;
  if ( !v34 )
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
    sub_1BCB254(v14, klass);
  }
  v35 = SkillData->fields.svtSkillNumsList;
  if ( !v35 )
    goto LABEL_50;
  max_length = v35->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v37 = entity;
    v38 = *p_svtSkillLvList;
    v39 = 0LL;
    v40 = &unlockNums->m_Items[1];
    while ( 1 )
    {
      if ( !v38 )
        goto LABEL_50;
      v14 = v38->max_length;
      if ( v39 >= v14 )
        goto LABEL_49;
      v41 = (__int64)v38 + 4 * v39;
      *(_DWORD *)(v41 + 32) = 0;
      v14 = v41 + 32;
      if ( (int)v34 >= 1 )
      {
        if ( v39 >= max_length )
          goto LABEL_49;
        klass = (Il2CppClass *)&v35->m_Items[v39 + 1];
        namespaze_low = (unsigned int)v34;
        v42 = v40;
        do
        {
          if ( LODWORD(klass->_1.image) == *v42 )
            *(_DWORD *)v14 = 1;
          --namespaze_low;
          ++v42;
        }
        while ( namespaze_low );
      }
      if ( v37 )
      {
        klass = v37[5].klass;
        if ( !klass )
          goto LABEL_50;
        namespaze_low = LODWORD(klass->_1.namespaze);
        if ( (__int64)(namespaze_low << 32) >= 1 )
          break;
      }
LABEL_40:
      if ( (__int64)++v39 >= (int)max_length )
        return SkillData;
    }
    v43 = 8LL;
    while ( v39 < max_length && v43 - 8 < namespaze_low )
    {
      if ( v35->m_Items[v39 + 1] == *((_DWORD *)&klass->_1.image + v43) )
      {
        monitor = v37[5].monitor;
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
    sub_1BCB25C(v14, klass, namespaze_low);
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
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x28
  __int64 v25; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x26
  Il2CppObject *v27; // x26
  const MethodInfo *v28; // x6
  __int64 lv; // x2
  const MethodInfo *v30; // x7
  unsigned __int64 v31; // x25
  char v32; // w27
  SkillLvEntity_o *Entity; // x0
  signed __int64 i; // x24
  signed __int64 v35; // x8
  SkillInfo_o *v36; // x8
  SkillLvEntity_o *v37; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B1D490 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4B1D490 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  skillInfoList = 0LL;
  explanationList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v25;
  *(_QWORD *)&v44.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v44, 0LL);
  if ( !v26
    || (DataMasterBase_object__object__int___GetEntity(
          v26,
          (int32_t)Instance,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_34:
    sub_1BCB254(Instance, id);
  }
  v27 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v28);
  if ( idList )
  {
    v31 = 0LL;
    v32 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v31 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_34;
      if ( v31 >= idList->max_length )
LABEL_35:
        sub_1BCB25C(Instance, id, lv);
      id = (unsigned int)idList->m_Items[v31 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v27 )
          goto LABEL_34;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)v27, id, 1, 0LL);
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
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v35 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL);
    v32 = i < v35;
    if ( i >= v35 )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( i >= (unsigned __int64)skillInfoList->max_length )
      goto LABEL_35;
    v36 = skillInfoList->m_Items[i];
    if ( v36 )
    {
      id = (unsigned int)v36->fields.id;
      if ( (int)id >= 1 )
      {
        lv = (unsigned int)v36->fields.lv;
        if ( (int)lv >= 1 )
        {
          if ( !v27 )
            goto LABEL_34;
          v37 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v27, id, lv, 0LL);
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
  return v32;
}


bool __fastcall UserServantEntity__getBaseEventUpVal_42309552(
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
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  Il2CppObject *Entity; // x23
  Il2CppObject *v19; // x20
  const MethodInfo *v20; // x6
  __int64 lv; // x2
  const MethodInfo *v22; // x7
  unsigned __int64 v23; // x26
  char v24; // w25
  SkillLvEntity_o *v25; // x0
  char v26; // w22
  BalanceConfig_c *v27; // x8
  char v28; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v30; // x9
  __int64 v31; // x21
  unsigned __int64 v32; // x23
  SkillInfo_o *v33; // x8
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4B1D492 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B1D492 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v16;
  *(_QWORD *)&v39.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v39, 0LL);
  if ( !v17 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, nowTime, v20);
  if ( idList )
  {
    v23 = 0LL;
    v24 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v23 >= idList->max_length )
LABEL_41:
        sub_1BCB25C(Instance, id, lv);
      id = (unsigned int)idList->m_Items[v23 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v19 )
          goto LABEL_40;
        v25 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v19, id, 1, 0LL);
        if ( v25 )
        {
          if ( SkillLvEntity__getEventUpVal_42041432(v25, eventUpVallInfo, 1, 1, 0, 0, nowTime, 0LL) )
            v24 = 1;
        }
      }
      ++v23;
    }
    v26 = v24;
  }
  else
  {
    v26 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v22);
  if ( !Entity )
LABEL_40:
    sub_1BCB254(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  v27 = BalanceConfig_TypeInfo;
  v28 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  static_fields = v27->static_fields;
  v30 = 40LL;
  if ( (v28 & 1) != 0 )
    v30 = 56LL;
  v31 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v30);
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( skillInfoList )
    {
      if ( v32 >= skillInfoList->max_length )
        goto LABEL_41;
      v33 = skillInfoList->m_Items[v32];
      if ( v33 )
      {
        id = (unsigned int)v33->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v33->fields.lv;
          if ( (int)lv >= 1 )
          {
            if ( !v19 )
              goto LABEL_40;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v19, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_42041432(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0LL,
                                            0LL);
              v26 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v31 == ++v32 )
        return v26 & 1;
    }
    goto LABEL_40;
  }
  return v26 & 1;
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

  if ( (byte_4B1D4C5 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, ignoreRandomSettings);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B1D4C5 = 1;
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
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v17, 0LL);
        v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v15 = v13;
        *(_QWORD *)&v18.fields.currentCryptoKey = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
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
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4A2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return (int32_t)Instance[13].klass;
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1D4A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineQpMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity(
                     (CombineQpMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(Instance, v7);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1D4B4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(Instance, v7);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_1BCB254(0LL, v3);
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
      return BasicHelper__DecryptValue_43270112(this->fields.limitCount, 0LL);
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
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int128 v9; // q0
  Il2CppObject *v10; // x20
  int64_t v11; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  int64_t v14; // x19
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1D4D6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v9 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v10 = MasterData_object;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v17, 0LL);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
  if ( !v10 )
LABEL_10:
    sub_1BCB254(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4BF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1D4C3 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B1D4C3 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = LimitCountWithRandom;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
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
  long double v4; // q0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v16; // x24
  __int64 v17; // x0
  BalanceConfig_c *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v19; // x27
  SkillInfo_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int128 v23; // q0
  unsigned __int64 v24; // x23
  __int64 i; // x22
  BalanceConfig_c *v26; // x0
  BalanceConfig_c **v27; // x19
  SkillInfo_o *v28; // x24
  __int64 v29; // x25
  __int64 v30; // x26
  int32_t v31; // w0
  __int128 v32; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v33; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v34; // x21
  int32_t v35; // w26
  int64_t v36; // x0
  int32_t lv; // w27
  int64_t v38; // x28
  int32_t v39; // w5
  __int64 v40; // x2
  ServantSkillEntity_o *v41; // x26
  int32_t skillNum; // w8
  SkillInfo_array *v43; // x26
  const MethodInfo *v44; // x3
  __int64 v45; // x0
  __int64 v46; // [xsp+28h] [xbp-108h]
  __int64 v47; // [xsp+30h] [xbp-100h]
  int64_t userSvtId; // [xsp+38h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_object; // [xsp+40h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B1D483 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1BCAFF8(&SkillInfo___TypeInfo, v11);
    sub_1BCAFF8(&SkillInfo_TypeInfo, v12);
    byte_4B1D483 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1B45C(v4);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1B45C(v4);
  UseEntity = **(DataManager_o ***)(v14 + 184);
  if ( !UseEntity )
LABEL_38:
    sub_1BCB254(UseEntity, skillInfoList);
  v16 = &BalanceConfig_TypeInfo;
  MasterData_object = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                                UseEntity,
                                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v17 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  v18 = BalanceConfig_TypeInfo;
  v47 = v17;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v19 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v20 = (SkillInfo_array *)sub_1BCB0A0(SkillInfo___TypeInfo, (unsigned int)v18->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v20, v21, v22);
  if ( useUserSvtId )
  {
    v23 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v54.fields.fakeValue = v23;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v53, -1LL, 0LL);
    v54 = v53;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v54;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v52, 0LL);
  v24 = 0LL;
  v46 = v47 + 32;
  for ( i = 32LL; ; i += 8LL )
  {
    v26 = *v16;
    if ( !(*v16)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = *v16;
    }
    if ( (__int64)v24 >= v26->static_fields->SvtEquipSkillListMax )
      break;
    v27 = v16;
    v28 = (SkillInfo_o *)sub_1BCB244(SkillInfo_TypeInfo);
    SkillInfo___ctor(v28, 0LL);
    v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v55.fields.currentCryptoKey = v30;
    *(_QWORD *)&v55.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v55, 0LL);
    v32 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v33 = *v19;
    v34 = v19;
    v35 = v31;
    *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v53.fields.fakeValue = v32;
    if ( !v33->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v33);
    v51 = v53;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v51, 0LL);
    lv = this->fields.lv;
    v38 = v36;
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_38;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_object,
                                   v35,
                                   (int)v24 + 1,
                                   v38,
                                   lv,
                                   v39,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0LL);
    if ( UseEntity )
    {
      if ( !v28 )
        goto LABEL_38;
      v41 = (ServantSkillEntity_o *)UseEntity;
      v28->fields.id = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      if ( !v47 )
        goto LABEL_38;
      if ( v24 >= *(unsigned int *)(v47 + 24) )
        goto LABEL_39;
      v28->fields.lv = *(_DWORD *)(v46 + 4 * v24);
      v19 = v34;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v28->fields.charge,
        &v28->fields.title,
        &v28->fields.explanation,
        *(_DWORD *)(v46 + 4 * v24),
        1,
        0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v41, 0LL);
      v28->fields.strengthStatus = (int)UseEntity;
      skillNum = v41->fields.skillNum;
      v28->fields.isUse = 1;
      v28->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v28 )
        goto LABEL_38;
      v19 = v34;
      v28->fields.lv = -1;
    }
    v43 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_38;
    UseEntity = (DataManager_o *)sub_1BCB134(v28, v43->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      v45 = sub_1BCB278(0LL);
      sub_1BCB120(v45, 0LL);
    }
    if ( v24 >= v43->max_length )
LABEL_39:
      sub_1BCB25C(UseEntity, skillInfoList, v40);
    *(Il2CppClass **)((char *)&v43->obj.klass + i) = (Il2CppClass *)v28;
    sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v43 + i), (int32_t)v28, v40, v44);
    ++v24;
    v16 = v27;
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
  __int64 v7; // x1
  EventServantEntity_o *result; // x0
  __int64 v9; // x8
  EventServantEntity_o *v10; // x20
  __int64 v11; // x26
  __int64 v12; // x2
  __int64 v13; // x8
  EventServantMaster_o *v14; // x21
  int32_t v15; // w22
  __int64 v16; // x23
  __int64 v17; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1D4AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventServantMaster___, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_19:
    sub_1BCB254(Instance, v7);
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0, 0LL);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_19;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v11 >= v10->fields.type )
            sub_1BCB25C(Instance, v7, v12);
          v13 = *((_QWORD *)&v10->fields.joinMessage + v11);
          if ( !v13 )
            goto LABEL_19;
          v14 = (EventServantMaster_o *)Instance;
          v15 = *(_DWORD *)(v13 + 16);
          v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v18.fields.currentCryptoKey = v17;
          *(_QWORD *)&v18.fields.fakeValue = v16;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
          if ( !v14 )
            goto LABEL_19;
          result = EventServantMaster__getEntity_41279968(v14, v15, (int32_t)Instance, 0LL);
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  EventServantMaster_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B1D4B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventServantMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4B1D4B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  return EventServantMaster__getEntityServantIgnoreEnd(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_42320268(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1D4B1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, is_finishedAt);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1D4B1 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v8 = EventServant;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v8->fields.eventId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1D48A & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4B1D48A = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v14, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
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
  __int64 v15; // x2
  struct System_Int32_array *v16; // x8
  const MethodInfo *v18; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_4B1D48E & 1) == 0 )
  {
    sub_1BCAFF8(&bool___TypeInfo, setupInfo);
    this = (UserServantEntity_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B1D48E = 1;
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
  v9 = (System_Boolean_array *)sub_1BCB0A0(bool___TypeInfo, (unsigned int)v7);
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
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
      this = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
        sub_1BCB25C(this, setupInfo, v15);
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( v11 == v10 )
        return v9;
    }
LABEL_18:
    sub_1BCB254(this, setupInfo);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_42308688(
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
  __int64 v13; // x2
  System_Boolean_array *v14; // x24
  unsigned __int64 v15; // x26
  struct System_Int32_array *v16; // x8
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  v10 = this;
  if ( (byte_4B1D48F & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_1BCAFF8(&bool___TypeInfo, *(_QWORD *)&wearersSvtId);
    byte_4B1D48F = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  this = (UserServantEntity_o *)sub_1BCB0A0(bool___TypeInfo, (unsigned int)v12);
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
        sub_1BCB25C(this, *(_QWORD *)&wearersSvtId, v13);
      v14->m_Items[v15++ + 4] = (unsigned __int8)this & 1;
      if ( (unsigned int)v12 == v15 )
        return v14;
    }
LABEL_16:
    sub_1BCB254(this, *(_QWORD *)&wearersSvtId);
  }
  return v14;
}


bool __fastcall UserServantEntity__getEventUpVal_42306860(
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

  if ( (byte_4B1D48B & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4B1D48B = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v17, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
  return UserServantEntity__getBaseEventUpVal(this, v11, v12, DispLimitCount, setupInfo, eventId, 0, nowTime, v16);
}


bool __fastcall UserServantEntity__getEventUpVal_42307084(
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


bool __fastcall UserServantEntity__getEventUpVal_42307204(
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


bool __fastcall UserServantEntity__getEventUpVal_42307252(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  int64_t v11; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w0
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w23
  int32_t v18; // w24
  int32_t v19; // w25
  int32_t EventId; // w0
  __int64 v21; // x2
  __int64 v23; // x8
  unsigned __int64 v24; // x28
  UserServantEntity_o *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w25
  int32_t v29; // w26
  int32_t v30; // w0
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  const MethodInfo *v32; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B1D48C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1D48C = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1BCB254(Instance, v11);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
    v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v17 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v16;
    *(_QWORD *)&v33.fields.fakeValue = v15;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v33, 0LL);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                 this,
                                 v18,
                                 v19,
                                 v17,
                                 setupInfo,
                                 EventId,
                                 0,
                                 0LL,
                                 v31);
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
            sub_1BCB25C(Instance, v11, v21);
          v11 = equipIds->m_Items[v24];
          if ( v11 >= 1 )
          {
            if ( !MasterData_object )
              goto LABEL_22;
            Instance = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v11,
                         (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Instance )
            {
              v25 = (UserServantEntity_o *)Instance;
              v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v34.fields.currentCryptoKey = v27;
              *(_QWORD *)&v34.fields.fakeValue = v26;
              v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v34, 0LL);
              v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
              v30 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal(
                                           v25,
                                           v28,
                                           v29,
                                           v17,
                                           setupInfo,
                                           v30,
                                           0,
                                           0LL,
                                           v32);
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


bool __fastcall UserServantEntity__getEventUpVal_42307812(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t DispLimitCount; // w0
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t EventId; // w0
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
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  const MethodInfo *v32; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B1D48D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1D48D = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v10);
    DataManager__GetMasterData_object_(
      (DataManager_o *)Instance,
      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
    v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v15 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v14;
    *(_QWORD *)&v33.fields.fakeValue = v13;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v33, 0LL);
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v16, v17, v15, setupInfo, EventId, 0, 0LL, v31);
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
            sub_1BCB25C(BaseEventUpVal, v20, v21);
          v25 = equipServentEntityList->m_Items[i];
          if ( v25 )
          {
            v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v27;
            *(_QWORD *)&v34.fields.fakeValue = v26;
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v34, 0LL);
            v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
            v30 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v25, v28, v29, v15, setupInfo, v30, 0, 0LL, v32);
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


bool __fastcall UserServantEntity__getEventUpVal_42308972(
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
  EventUpValInfo_o *v21; // x27
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v27; // x3
  int64_t v28; // x2
  __int64 v29; // x8
  unsigned __int64 v30; // x25
  char v31; // w26
  EventUpValInfo_o *v32; // x28
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v35; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4B1D491 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, eventUpVallInfo);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_1BCAFF8(&EventUpValInfo_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B1D491 = 1;
  }
  entity = 0LL;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v16;
  *(_QWORD *)&v38.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v38, 0LL);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v19);
  v21 = (EventUpValInfo_o *)sub_1BCB244(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v21, setupInfo, v17, v18, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)eventUpVallInfo, (int32_t)v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1BCB254(Instance, v25);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_42309552(this, eventUpVallInfo, nowTime, v27);
  if ( equipIds )
  {
    v29 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v29 >= 1 )
    {
      v30 = 0LL;
      v31 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v30 >= (unsigned int)v29 )
          sub_1BCB25C(Instance, v25, v28);
        v28 = equipIds->m_Items[v30];
        if ( v28 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_23;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                       &entity,
                                       v28,
                                       (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_23;
            v32 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v39.fields.currentCryptoKey = klass;
            *(_QWORD *)&v39.fields.fakeValue = monitor;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v39, 0LL);
            if ( !v32 )
              goto LABEL_23;
            v32->fields.equipSvtId = (int)Instance;
            Instance = entity;
            if ( !entity )
              goto LABEL_23;
            Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_42309552(
                                         (UserServantEntity_o *)entity,
                                         eventUpVallInfo,
                                         nowTime,
                                         v35);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v31 = 1;
          }
        }
        LODWORD(v29) = equipIds->max_length;
        ++v30;
      }
      while ( (__int64)v30 < (int)v29 );
      LOBYTE(Instance) = v31;
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
  const MethodInfo *v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  ServantLimitMaster_o *v13; // x21
  int32_t v14; // w22
  ServantLimitEntity_o *v15; // x21
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B1D4CD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&cnt);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1D4CD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                               this->fields.limitCount,
                               0LL);
  if ( !v13 )
    goto LABEL_14;
  v15 = ServantLimitMaster__GetEntity(v13, v14, (int32_t)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v15 || !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)ServantExceedMaster__TryGetEntity(
                               (ServantExceedMaster_o *)Instance,
                               &entity,
                               v15->fields.rarity,
                               cnt,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v15->fields.lvMax;
LABEL_14:
    sub_1BCB254(Instance, v9);
  }
  return UserServantEntity__getLevelMax(this, v9);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v20; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v22; // x24
  int m_CancellationTokenSource; // w25
  float v24; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B1D4A4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B1D4A4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v26, 0LL);
  if ( !v18 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v20) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v22 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v22, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v24 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1BCB254(Instance, v14);
  }
  v24 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
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

  if ( (byte_4B1D4C7 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B1D4C7 = 1;
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
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
        v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v13 = v11;
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v16, 0LL);
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

  if ( (byte_4B1D4C8 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B1D4C8 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( v9 < 1 )
    return v8;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetLimitCountByImageLimit_39621860(v9 - 1, v8, 0LL);
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1D4D4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4D4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                this->fields.limitCount,
                                0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(Instance, v7);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  bool IsGrandServant; // w20
  Il2CppObject *Master_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  ServantExceedMaster_o *v10; // x21
  int32_t v11; // w22
  __int64 Rarity; // x0
  __int64 v13; // x1
  bool v14; // w20
  int32_t FrameType_41831384; // w21
  Il2CppObject *v16; // x22
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1D4D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantExceedMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B1D4D1 = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantExceedMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
  Rarity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  if ( !v10
    || (v14 = IsGrandServant,
        FrameType_41831384 = ServantExceedMaster__GetFrameType_41831384(
                               v10,
                               v11,
                               Rarity,
                               this->fields.exceedCount,
                               v14,
                               0LL),
        v16 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLvDetailMaster___),
        Rarity = UserServantEntity__getRarity(this, v17),
        !v16) )
  {
    sub_1BCB254(Rarity, v13);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v16,
           Rarity,
           this->fields.lv,
           FrameType_41831384,
           v14,
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


int32_t __fastcall UserServantEntity__getFriendshipRank(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int128 v9; // q0
  UserServantCollectionMaster_o *v10; // x20
  int64_t v11; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  int64_t v14; // x19
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1D4A3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v9 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v17, 0LL);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
  if ( !v10 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v10, v14, (int32_t)Instance, v15)) == 0LL )
LABEL_11:
    sub_1BCB254(Instance, v7);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v14; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B1D4A9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v17, 0LL);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                               this->fields.limitCount,
                               0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_13:
    sub_1BCB254(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1D4AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return (int32_t)Instance[5].monitor;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B1D47C & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D47C = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6, 0LL);
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
  if ( (byte_4B1D4A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineMaster___, svtEntity);
    sub_1BCAFF8(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (UserServantEntity_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1D4A1 = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_32C7E4C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_1BCB254(this, svtEntity);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL) + 1;
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

  if ( (byte_4B1D4C6 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B1D4C6 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
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

  if ( (byte_4B1D4C4 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B1D4C4 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
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

  if ( (byte_4B1D4C2 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B1D4C2 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
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

  if ( (byte_4B1D4CA & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B1D4CA = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
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

  if ( (byte_4B1D4C9 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B1D4C9 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
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

  if ( (byte_4B1D4CB & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B1D4CB = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
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
  long double v7; // q0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v20; // x26
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v22; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v23; // x28
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int128 v30; // q0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x22
  __int64 v32; // x19
  __int64 v33; // x20
  BalanceConfig_c *v34; // x0
  unsigned __int64 v35; // x21
  BalanceConfig_c **v36; // x25
  SkillInfo_o *v37; // x0
  __int64 v38; // x26
  __int64 v39; // x27
  int32_t v40; // w0
  __int128 v41; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v43; // x24
  int32_t v44; // w27
  int64_t v45; // x0
  int32_t lv; // w28
  int64_t v47; // x29
  int32_t v48; // w5
  __int64 v49; // x2
  System_Int32_array *v50; // x8
  System_String_array *v51; // x26
  const MethodInfo *v52; // x3
  CGThumbnailListItem_c *v53; // x1
  CGThumbnailListItem_o *v54; // x0
  __int64 v55; // x27
  __int64 v56; // x28
  int32_t v57; // w0
  __int128 v58; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v59; // x8
  int32_t v60; // w27
  int64_t v61; // x0
  ServantSkillEntity_o *v62; // x0
  __int128 v63; // q0
  ServantSkillEntity_o *v64; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v65; // x0
  int64_t v66; // x0
  System_Int32_array *v67; // x8
  System_String_array *v68; // x27
  int64_t userSvtId; // [xsp+40h] [xbp-130h]
  ServantSkillMaster_o *v74; // [xsp+48h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4B1D484 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, idList);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1BCAFF8(&int___TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1BCAFF8(&SkillInfo_TypeInfo, v15);
    sub_1BCAFF8(&string___TypeInfo, v16);
    byte_4B1D484 = 1;
  }
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1B45C(v7);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1B45C(v7);
  UseEntity = **(DataManager_o ***)(v18 + 184);
  if ( !UseEntity )
LABEL_48:
    sub_1BCB254(UseEntity, idList);
  v20 = &BalanceConfig_TypeInfo;
  MasterData_object = DataManager__GetMasterData_object_(
                        UseEntity,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v22 = BalanceConfig_TypeInfo;
  v74 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  v23 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v24 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, (unsigned int)v22->static_fields->SvtSkillListMax);
  *idList = v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)idList, (int32_t)v24, v25, v26);
  v27 = (System_String_array *)sub_1BCB0A0(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v27;
  sub_1BCAF9C((CGThumbnailListItem_o *)skillNameList, (int32_t)v27, v28, v29);
  if ( useUserSvtId )
  {
    v30 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v80.fields.fakeValue = v30;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v79, -1LL, 0LL);
    v80 = v79;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v78 = v80;
  p_userId = &this->fields.userId;
  v32 = 8LL;
  v33 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v78, 0LL);
  while ( 1 )
  {
    v34 = *v20;
    v35 = v32 - 8;
    if ( !(*v20)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = *v20;
    }
    if ( (__int64)v35 >= v34->static_fields->SvtSkillListMax )
      break;
    v36 = v20;
    v37 = (SkillInfo_o *)sub_1BCB244(SkillInfo_TypeInfo);
    SkillInfo___ctor(v37, 0LL);
    v39 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v81.fields.currentCryptoKey = v39;
    *(_QWORD *)&v81.fields.fakeValue = v38;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v81, 0LL);
    v41 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v42 = *v23;
    v43 = v23;
    v44 = v40;
    *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v79.fields.fakeValue = v41;
    if ( !v42->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v42);
    v77 = v79;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v77, 0LL);
    lv = this->fields.lv;
    v47 = v45;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)v74;
    if ( !v74 )
      goto LABEL_48;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   v74,
                                   v44,
                                   (int)v32 - 7,
                                   v47,
                                   lv,
                                   v48,
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
      if ( v35 >= v50->max_length )
        goto LABEL_49;
      v23 = v43;
      *((_DWORD *)&v50->obj.klass + v32) = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      v51 = *skillNameList;
      UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v51 )
        goto LABEL_48;
      if ( v35 >= v51->max_length )
        goto LABEL_49;
      v53 = (CGThumbnailListItem_c *)UseEntity;
      v54 = (CGThumbnailListItem_o *)((char *)v51 + v33);
LABEL_32:
      v54->klass = v53;
      sub_1BCAF9C(v54, (int32_t)v53, v49, v52);
      goto LABEL_33;
    }
    v56 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v55 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v82.fields.currentCryptoKey = v56;
    *(_QWORD *)&v82.fields.fakeValue = v55;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v82, 0LL);
    v58 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v59 = *v43;
    v23 = v43;
    v60 = v57;
    *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v79.fields.fakeValue = v58;
    if ( !v59->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v59);
    v76 = v79;
    v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v76, 0LL);
    v62 = ServantSkillMaster__getUseEntity(
            v74,
            v60,
            (int)v32 - 7,
            v61,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v62 )
    {
      v63 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v64 = v62;
      v65 = *v43;
      *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v79.fields.fakeValue = v63;
      if ( !v65->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v65);
      v75 = v79;
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v75, 0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__isUse(v64, v66, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)UseEntity & 1) != 0 )
      {
        v67 = *idList;
        if ( !*idList )
          goto LABEL_48;
        if ( v35 >= v67->max_length )
          goto LABEL_49;
        *((_DWORD *)&v67->obj.klass + v32) = v64->fields.skillId;
        v68 = *skillNameList;
        UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName(v64, 0LL);
        if ( !v68 )
          goto LABEL_48;
        if ( v35 >= v68->max_length )
LABEL_49:
          sub_1BCB25C(UseEntity, idList, v49);
        v53 = (CGThumbnailListItem_c *)UseEntity;
        v54 = (CGThumbnailListItem_o *)((char *)v68 + v33);
        goto LABEL_32;
      }
    }
LABEL_33:
    ++v32;
    v33 += 8LL;
    v20 = v36;
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

  if ( (byte_4B1D485 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
    byte_4B1D485 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v17, 0LL);
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
        int32_t rarity,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B1D495 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B1D495 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v16, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
  return QuestRestrictionInfo__IsRestriction_42555508(
           questRestrictionInfo,
           v11,
           v12,
           DispLimitCount,
           rarity,
           this->fields.lv,
           targetType,
           0LL);
}


int32_t __fastcall UserServantEntity__getRarity(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w0
  __int64 v12; // x8
  int32_t v13; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B1D4BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1D4BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v13 = v11;
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v16, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, v13, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1BCB254(Instance, v6);
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1D49F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D49F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  if ( !v11
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1D49E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D49E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  if ( !v11
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B1D4A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  if ( !v11
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_9:
    sub_1BCB254(Instance, v7);
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
  const MethodInfo *v14; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B1D47F & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&dispLimitCount);
    byte_4B1D47F = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v16, 0LL);
  return UserServantEntity__GetSkillIdList(
           this,
           v13,
           dispLimitCount,
           specificLimitCount,
           useUserSvtId,
           beforeQuestClear,
           0,
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

  if ( (byte_4B1D481 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_4B1D481 = 1;
  }
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
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

  if ( (byte_4B1D47D & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&iIdx);
    byte_4B1D47D = 1;
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
  __int64 v7; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v9; // x19
  int32_t skillLv3; // w8
  __int64 v11; // x20
  unsigned __int64 v12; // x23

  if ( (byte_4B1D47E & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&int___TypeInfo, v3);
    byte_4B1D47E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1BCB0A0(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
    sub_1BCB254(0LL, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v9 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1BCB25C(v5, v6, v7);
  }
  skillLv3 = this->fields.skillLv3;
  v11 = 11LL;
  v5->_1.byval_arg.bits = skillLv3;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v12 = v11 - 8;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= v5->static_fields->SvtEquipSkillListMax )
      return v9;
    if ( v12 >= v9->max_length )
      goto LABEL_16;
    *((_DWORD *)&v9->obj.klass + v11++) = 1;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantLimitMaster_o *v14; // x22
  int32_t v15; // w0
  __int64 v16; // x8
  int32_t v17; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1D4CC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, hpUp);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1D4CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v18, 0LL);
  v16 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v17 = v15;
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
  if ( !v14 || (Instance = ServantLimitMaster__GetEntity(v14, v17, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1BCB254(Instance, v10);
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
  __int64 v7; // x1

  if ( (byte_4B1D4A7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classId);
    sub_1BCAFF8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D4A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  return (int32_t)Instance[3].monitor;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSvtClassId(
        UserServantEntity_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B1D4A5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, isPlayableBeastToBase);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1D4A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v17, 0LL);
  if ( !v15
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(Instance, v11);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Instance, isPlayableBeastToBase, isGrandServant, 0LL);
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4B1D4D0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1D4D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v7),
        !MasterData_object) )
  {
    sub_1BCB254(Instance, v5);
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

  if ( (byte_4B1D47B & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D47B = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6, 0LL);
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

  if ( (byte_4B1D49A & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_4B1D49A = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v16, 0LL);
  return UserServantEntity__GetTreasureDeviceInfo(this, tdInfo, v13, beforeClearQuestId, dispLimitCount, isLvOne, v14);
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_42314120(
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
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  int treasureDeviceLv1; // w8
  NetworkManager_c *v24; // x0
  int64_t userIdNumber; // x22
  int32_t DispLimitCount; // w21
  Il2CppObject *v27; // x0
  __int64 v28; // x24
  __int64 v29; // x25
  UserServantCollectionMaster_o *v30; // x23
  const MethodInfo *v31; // x3
  int32_t v32; // w22
  long double v33; // q0
  __int64 v34; // x8
  __int64 v35; // x0
  Il2CppObject *v36; // x23
  int32_t v37; // w0
  __int128 v38; // q1
  int32_t v39; // w24
  int64_t v40; // x0
  __int64 v41; // x8
  int32_t lv; // w25
  int64_t v43; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B1D49C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, tdLv);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B1D49C = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v19;
  *(_QWORD *)&v48.fields.fakeValue = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v48, 0LL);
  if ( !v20 )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v21);
    byte_4B165D1 = 1;
  }
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  userIdNumber = v24->static_fields->userIdNumber;
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v30 = (UserServantCollectionMaster_o *)v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v29;
  *(_QWORD *)&v49.fields.fakeValue = v28;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v49, 0LL);
  if ( !v30 )
    goto LABEL_34;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v30, userIdNumber, (int32_t)Instance, v31);
  if ( !Instance )
    goto LABEL_34;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0LL);
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1B45C(v33);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C1B45C(v33);
  Instance = **(void ***)(v35 + 184);
  if ( !Instance )
    goto LABEL_34;
  v36 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(this->fields.svtId, 0LL);
  v38 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v39 = v37;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v47;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v46, 0LL);
  v41 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v50.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v43 = v40;
  *(_QWORD *)&v50.fields.currentCryptoKey = v41;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v50, 0LL);
  if ( !v36 )
LABEL_34:
    sub_1BCB254(Instance, v16);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)v36,
                v39,
                v43,
                lv,
                (int32_t)Instance,
                DispLimitCount,
                v32,
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
  if ( !UserServantEntity__getTreasureDeviceInfo_42314120(this, &tdMaxLv[1], tdMaxLv, v2) )
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

  if ( (byte_4B1D496 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B1D496 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_42559284(questRestrictionInfo, v7, 0LL);
}


bool __fastcall UserServantEntity__getUniqueSvtRestriction_42312092(
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

  if ( (byte_4B1D497 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B1D497 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_42559484(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
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
  __int64 v13; // x1
  long double v14; // q0
  __int64 v15; // x0
  __int64 v16; // x0
  ServantSkillEntity_array *ServantSkillList; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x24
  __int64 v20; // x25
  ServantSkillMaster_o *v21; // x23
  __int64 v22; // x2
  int max_length; // w8
  ServantSkillEntity_array *v24; // x23
  unsigned int v25; // w19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x29
  Il2CppClass **v27; // x8
  ServantSkillEntity_o *v28; // x24
  __int128 v29; // q0
  int64_t v30; // x0
  int32_t lv; // w25
  __int64 v32; // x27
  __int64 v33; // x28
  int64_t v34; // x26
  int32_t v35; // w0
  __int128 v36; // q0
  int64_t v37; // x0
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B1D4B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&targetLv);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_4B1D4B5 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1B45C(v14);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1B45C(v14);
  ServantSkillList = **(ServantSkillEntity_array ***)(v16 + 184);
  if ( !ServantSkillList )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ServantSkillList,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v20;
  *(_QWORD *)&v49.fields.fakeValue = v19;
  ServantSkillList = (ServantSkillEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                   v49,
                                                   0LL);
  if ( !v21 )
    goto LABEL_33;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v21, (int32_t)ServantSkillList, 0LL);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  v24 = ServantSkillList;
  if ( max_length >= 1 )
  {
    v25 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1BCB25C(ServantSkillList, v13, v22);
      v27 = &v24->obj.klass + (int)v25;
      v28 = (ServantSkillEntity_o *)v27[4];
      if ( !v28 )
        break;
      ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(
                                                       (ServantSkillEntity_o *)v27[4],
                                                       0,
                                                       0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v29 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v47 = v48;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v47, 0LL);
        lv = this->fields.lv;
        v33 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v32 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v34 = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v50.fields.currentCryptoKey = v33;
        *(_QWORD *)&v50.fields.fakeValue = v32;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v50, 0LL);
        ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                         v28,
                                                         v34,
                                                         lv,
                                                         v35,
                                                         -1,
                                                         -1,
                                                         -1,
                                                         -1LL,
                                                         0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v36 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v48.fields.fakeValue = v36;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v46, 0LL);
          ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                           v28,
                                                           v37,
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
            v40 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v28,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v28;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v28, v22, v38);
            }
          }
        }
      }
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_1BCB254(ServantSkillList, v13);
  }
LABEL_31:
  if ( !v12 )
    goto LABEL_33;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x0
  __int128 v11; // q0
  UserServantCommandCodeMaster_o *v12; // x21
  int64_t v13; // x0
  __int64 v14; // x22
  __int64 v15; // x23
  int64_t v16; // x20
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B1D4D7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1D4D7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v11 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v12 = (UserServantCommandCodeMaster_o *)MasterData_object;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v20, 0LL);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v23, 0LL);
  if ( !v12 )
    goto LABEL_14;
  if ( UserServantCommandCodeMaster__TryGetEntity(v12, &entity, v16, (int)Instance, v17) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v18);
LABEL_14:
    sub_1BCB254(Instance, v9);
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1D47A & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B1D47A = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v5, 0LL);
}


int32_t __fastcall UserServantEntity__get_AtkBoostValue(UserServantEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustAtk; // w20
  int32_t StatusUpAdjustAtk; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1

  if ( (byte_4B1D472 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    byte_4B1D472 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustAtk = this->fields.adjustAtk;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustAtk = v3->static_fields->StatusUpAdjustAtk;
  GrandInfo = UserServantEntity__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_1BCB254(0LL, v7);
  return UserServantGrandInfo__get_AddedAtk(GrandInfo, 0LL) + StatusUpAdjustAtk * adjustAtk;
}


int32_t __fastcall UserServantEntity__get_DispLimitCountAfter(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispLimitCountAfter;
}


UserServantGrandInfo_o *__fastcall UserServantEntity__get_GrandInfo(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  struct UserServantGrandInfo_o *grandInfo; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1D470 & 1) == 0 )
  {
    sub_1BCAFF8(&UserServantGrandInfo_TypeInfo, method);
    byte_4B1D470 = 1;
  }
  grandInfo = this->fields.grandInfo;
  if ( !grandInfo )
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    grandInfo = UserServantGrandInfo__Make(this, 0, 0LL);
    this->fields.grandInfo = grandInfo;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v4, v5);
  }
  return grandInfo;
}


int32_t __fastcall UserServantEntity__get_HpBoostValue(UserServantEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustHp; // w20
  int32_t StatusUpAdjustHp; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1

  if ( (byte_4B1D471 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    byte_4B1D471 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustHp = this->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustHp = v3->static_fields->StatusUpAdjustHp;
  GrandInfo = UserServantEntity__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_1BCB254(0LL, v7);
  return UserServantGrandInfo__get_AddedHp(GrandInfo, 0LL) + StatusUpAdjustHp * adjustHp;
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0

  if ( (byte_4B1D477 & 1) == 0 )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, method);
    byte_4B1D477 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B1825A )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, method);
    byte_4B1825A = 1;
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
  __int64 v7; // x1

  if ( (byte_4B1D4B9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1D4B9 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance[1].monitor);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1D4B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1D4B7 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x0
  __int128 v17; // q0
  UserServantCollectionMaster_o *v18; // x21
  int64_t v19; // x0
  __int64 v20; // x8
  int64_t v21; // x19
  const MethodInfo *v22; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B1D4CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1D4CF = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v13;
  *(_QWORD *)&v28.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v28, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v15 = DataMasterBase_object__object__int___GetEntity(
          v14,
          (int32_t)Instance,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v17 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v18 = (UserServantCollectionMaster_o *)v16;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v26;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v25, 0LL);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v29.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = v19;
  *(_QWORD *)&v29.fields.currentCryptoKey = v20;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v29, 0LL);
  if ( !v18
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, v21, (int32_t)Instance, v22),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v15)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_16:
    sub_1BCB254(Instance, v10);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            (int32_t)v15[6].klass,
            HIDWORD(v15[6].klass) + EntityDefinitely->fields.friendshipExceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  __int64 Rarity; // x0
  __int64 v7; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1D4CE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantExceedMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1D4CE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v5);
  if ( !Master_object )
    sub_1BCB254(Rarity, v7);
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

  if ( (byte_4B1D4AB & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D4AB = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v6 = LimitCntMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  return v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v8, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1D4BA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1D4BA = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  return this->fields.adjustAtk == LODWORD(Instance[2].klass);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1D4B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1D4B8 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  return this->fields.adjustHp == HIDWORD(Instance[1].monitor);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D4FA & 1) == 0 )
  {
    sub_1BCAFF8(&UserServantEntity___c_TypeInfo, v1);
    byte_4B1D4FA = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(UserServantEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantEntity___c_TypeInfo->static_fields->__9 = (struct UserServantEntity___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)UserServantEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UserServantEntity___c___ctor(UserServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserServantEntity___c___GetBaseFriendPointUpTypeVal_b__70_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}