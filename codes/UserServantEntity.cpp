void UserServantEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4E786FF & 1) == 0 )
  {
    sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E786FF = 1;
  }
  *UserServantEntity_TypeInfo->static_fields = (struct UserServantEntity_StaticFields)0xFFFFFFFF00000000LL;
}


void UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  UserServantEntity_c *v3; // x0

  if ( (byte_4E78681 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_long___ctor__);
    sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E78681 = 1;
  }
  v3 = UserServantEntity_TypeInfo;
  if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
    v3 = UserServantEntity_TypeInfo;
  }
  this->fields.dispLimitCountAfter = v3->static_fields->InitDispLimitCountAfter;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_353348C *)Method_DataEntityBase_long___ctor__);
}


void UserServantEntity___ctor_44524940(UserServantEntity_o *this, UserServantEntity_o *e, const MethodInfo *method)
{
  UserServantEntity_c *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int128 v14; // q0
  __int128 v15; // q0
  struct UserServantGrandInfo_o *grandInfo; // x1

  if ( (byte_4E78682 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_long___ctor__);
    sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E78682 = 1;
  }
  v5 = UserServantEntity_TypeInfo;
  if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
    v5 = UserServantEntity_TypeInfo;
  }
  this->fields.dispLimitCountAfter = v5->static_fields->InitDispLimitCountAfter;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_353348C *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1D0F30C(v6, v7);
  v14 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v14;
  v15 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v15;
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
  this->fields.imageLimitCount2 = e->fields.imageLimitCount2;
  this->fields.dispLimitCount2 = e->fields.dispLimitCount2;
  this->fields.commandCardLimitCount2 = e->fields.commandCardLimitCount2;
  this->fields.iconLimitCount2 = e->fields.iconLimitCount2;
  this->fields.portraitLimitCount2 = e->fields.portraitLimitCount2;
  this->fields.transformVal = e->fields.transformVal;
  this->fields.randomLimitCount2 = e->fields.randomLimitCount2;
  this->fields.randomLimitCountSupport2 = e->fields.randomLimitCountSupport2;
  this->fields.limitCountSupport2 = e->fields.limitCountSupport2;
  this->fields.createdAt = e->fields.createdAt;
  grandInfo = e->fields.grandInfo;
  this->fields.grandInfo = grandInfo;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v8, v9, v10, v11, v12, v13);
}


void UserServantEntity___ctor_44525316(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        bool calcExceedCount,
        const MethodInfo *method)
{
  UserServantEntity_c *v7; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int64_t userId; // x22
  __int128 v11; // q0
  int32_t maxLimitCount; // w22
  int32_t v13; // w21
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // kr00_16
  int32_t v16; // w20
  Il2CppObject *Master_object; // x0
  __int64 v18; // x22
  __int64 v19; // x23
  ServantLimitMaster_o *v20; // x21
  int32_t v21; // w22
  ServantLimitEntity_o *Entity; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23[2]; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4E78683 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_long___ctor__);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E78683 = 1;
  }
  v7 = UserServantEntity_TypeInfo;
  if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
    v7 = UserServantEntity_TypeInfo;
  }
  this->fields.dispLimitCountAfter = v7->static_fields->InitDispLimitCountAfter;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_353348C *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    goto LABEL_23;
  userId = e->fields.userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v23, userId, 0);
  v11 = *(_OWORD *)&v23[0].fields.fakeValue;
  v23[1] = v23[0];
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v23[0].fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v11;
  this->fields.svtId = e->fields.svtId;
  maxLimitCount = e->fields.maxLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(maxLimitCount, 0);
  this->fields.limitCount = v24;
  this->fields.lv = e->fields.maxLv;
  *(int32x2_t *)&this->fields.atk = vrev64_s32(*(int32x2_t *)&e->fields.maxHp);
  *(_OWORD *)&this->fields.skillLv1 = *(_OWORD *)&e->fields.skillLv1;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v24, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  DispLimitCount = ImageLimitCount__GetDispLimitCount(v13, 0);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(DispLimitCount, 0);
  this->fields.dispLimitCount = v15;
  if ( calcExceedCount )
  {
    v16 = this->fields.lv - UserServantEntity__getLevelMax(this, *(const MethodInfo **)&v15.fields.fakeValue);
    if ( v16 >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v20 = (ServantLimitMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = v19;
      *(_QWORD *)&v25.fields.fakeValue = v18;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v25, 0);
      v8 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                             this->fields.limitCount,
                             0);
      if ( v20 )
      {
        Entity = ServantLimitMaster__GetEntity(v20, v21, (int32_t)v8, 0);
        v8 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( Entity )
        {
          if ( v8 )
          {
            this->fields.exceedCount = ServantExceedMaster__GetExceedCount(
                                         (ServantExceedMaster_o *)v8,
                                         Entity->fields.rarity,
                                         v16,
                                         0);
            return;
          }
        }
      }
LABEL_23:
      sub_1D0F30C(v8, v9);
    }
  }
}


bool UserServantEntity__CheckBaseServant(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4E7867F & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7867F = 1;
  }
  if ( overrideTransformVal < 0 )
  {
    v6 = *(_QWORD *)&this->fields.transformVal.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.transformVal.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    overrideTransformVal = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v8, 0);
  }
  return overrideTransformVal == 0;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantEntity__CheckEnableRandomLimitCount(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t transformVal,
        const MethodInfo *method)
{
  bool v7; // w21
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  struct ServantEntity_o *baseServantEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_randomLimitCount; // x8
  int32_t *p_fakeValue; // x9
  __int64 v17; // x19
  __int64 v18; // x20
  UserServantEntity_o *v19; // x0
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4E78684 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E78684 = 1;
  }
  v7 = UserServantEntity__CheckBaseServant(this, transformVal, *(const MethodInfo **)&transformVal);
  UserServantEntity__Init(this, v8);
  if ( v7 )
  {
    baseServantEntity = this->fields.baseServantEntity;
    if ( !baseServantEntity )
      goto LABEL_17;
  }
  else
  {
    baseServantEntity = this->fields.saveTransformServantEntity;
    if ( !baseServantEntity )
      goto LABEL_17;
  }
  v13 = *(_QWORD *)&baseServantEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v21, 0);
  if ( !questRestrictionInfo )
LABEL_17:
    sub_1D0F30C(v9, v10);
  if ( QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v9, 0) )
    return 0;
  p_randomLimitCount = &this->fields.randomLimitCount;
  p_fakeValue = &this->fields.randomLimitCount.fields.fakeValue;
  if ( !v7 )
  {
    p_fakeValue = &this->fields.randomLimitCount2.fields.fakeValue;
    p_randomLimitCount = &this->fields.randomLimitCount2;
  }
  v17 = *(_QWORD *)&p_randomLimitCount->fields.currentCryptoKey;
  v18 = *(_QWORD *)p_fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v17;
  *(_QWORD *)&v22.fields.fakeValue = v18;
  v19 = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
  return UserServantEntity__CheckEnableRandomLimitCount_44526580(v19, (int32_t)v19, v20);
}


bool UserServantEntity__CheckEnableRandomLimitCount_44526580(
        UserServantEntity_o *this,
        int32_t setting,
        const MethodInfo *method)
{
  if ( (byte_4E78685 & 1) == 0 )
  {
    sub_1D0F0B4(&OptionManager_TypeInfo);
    byte_4E78685 = 1;
  }
  if ( setting )
    return setting == 1;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  return OptionManager__GetRandomLimitCountOwn(0);
}


void UserServantEntity__ClearCache(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.overwriteStatusMap = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.overwriteStatusMap, 0, v2, v3, v4, v5, v6, v7);
  this->fields.grandInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.grandInfo, 0, v9, v10, v11, v12, v13, v14);
}


int64_t UserServantEntity__CreatePrimaryKey(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4E7867D & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E7867D = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v5, 0);
}


bool UserServantEntity__GetAdjustMax(
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

  if ( (byte_4E786B9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
  if ( !v16 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
  {
LABEL_13:
    v20 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v17 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v18),
        !v17) )
  {
LABEL_15:
    sub_1D0F30C(Instance, v12);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                        (int32_t)Instance,
                        (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
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


void UserServantEntity__GetAppendPassiveSkillInfo(
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

  if ( (byte_4E786E8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E786E8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v28, 0);
  v18 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v19 = v17;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v26, 0);
  v21 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v21;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v25, 0);
  if ( !v16 )
    sub_1D0F30C(userSvtId, v24);
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
    0);
}


void UserServantEntity__GetAppendPassiveSkillInfo_44564848(
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Int32_array *v15; // x8
  unsigned __int64 v16; // x21
  __int64 v17; // x23
  SkillInfo_o *v18; // x20
  unsigned int *v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x0
  System_Int32_array *v27; // [xsp+0h] [xbp-60h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4E786E9 & 1) == 0 )
  {
    sub_1D0F0B4(&SkillInfo___TypeInfo);
    sub_1D0F0B4(&SkillInfo_TypeInfo);
    byte_4E786E9 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  v27 = 0;
  releaseStateList = 0;
  UserServantEntity__GetAppendPassiveSkillInfo(this, &idList, &titleList, &explanationList, &releaseStateList, &v27, v3);
  if ( !idList
    || (v8 = (SkillInfo_array *)sub_1D0F15C(SkillInfo___TypeInfo, *(unsigned int *)((char *)&off_18 + (_QWORD)idList)),
        *skillInfoList = v8,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v8, v9, v10, v11, v12, v13, v14),
        (v15 = idList) == 0) )
  {
LABEL_18:
    sub_1D0F30C(v6, v7);
  }
  v16 = 0;
  v17 = 8;
  while ( (__int64)v16 < *(int *)((char *)&off_18 + (_QWORD)v15) )
  {
    v18 = (SkillInfo_o *)sub_1D0F300(SkillInfo_TypeInfo);
    SkillInfo___ctor(v18, 0);
    if ( !idList )
      goto LABEL_18;
    if ( v16 >= *(unsigned int *)((char *)&off_18 + (_QWORD)idList) )
LABEL_20:
      sub_1D0F314(v6);
    if ( !v18 )
      goto LABEL_18;
    v18->fields.id = idList->m_Items[v16];
    if ( !v27 )
      goto LABEL_18;
    if ( v16 >= LODWORD(v27->max_length) )
      goto LABEL_20;
    v18->fields.lv = v27->m_Items[v16];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v16 >= LODWORD(releaseStateList->max_length) )
      goto LABEL_20;
    v18->fields.isUse = releaseStateList->m_Items[v16];
    v19 = (unsigned int *)*skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v6 = sub_1D0F1F0(v18, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v6 )
    {
      v26 = sub_1D0F330(0);
      sub_1D0F1DC(v26, 0);
    }
    if ( v16 >= v19[6] )
      goto LABEL_20;
    *(_QWORD *)&v19[2 * v16 + 8] = v18;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v19[v17], (int32_t)v18, v20, v21, v22, v23, v24, v25);
    v15 = idList;
    ++v16;
    v17 += 2;
    if ( !idList )
      goto LABEL_18;
  }
}


bool UserServantEntity__GetBaseBonusUpVal(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        bool useDatabaseGrandStatus,
        bool isGrand,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x23
  __int64 v15; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2
  int32_t ServantId; // w0
  const MethodInfo *v21; // x2
  unsigned __int64 v22; // x25
  char v23; // w24
  SkillLvEntity_o *v24; // x0
  int32_t v25; // w0
  BalanceConfig_c *v26; // x8
  char v27; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v29; // x9
  __int64 v30; // x22
  unsigned __int64 v31; // x23
  SkillInfo_o *v32; // x8
  int32_t lv; // w2
  const MethodInfo *isGranda; // [xsp+0h] [xbp-80h]
  const MethodInfo *v36; // [xsp+8h] [xbp-78h]
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-68h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4E78699 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E78699 = 1;
  }
  titleList = 0;
  idList = 0;
  skillInfoList = 0;
  explanationList = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v15;
  *(_QWORD *)&v41.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v41, 0);
  if ( !v16 )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             (int32_t)Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v18 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  ServantId = UserServantEntity__GetServantId(this, -1, v19);
  UserServantEntity__GetPassiveSkillInfo(
    this,
    &idList,
    &titleList,
    &explanationList,
    ServantId,
    -1,
    0,
    useDatabaseGrandStatus,
    isGrand,
    v36);
  if ( idList )
  {
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v22 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_40;
      if ( v22 >= LODWORD(idList->max_length) )
LABEL_41:
        sub_1D0F314(Instance);
      id = (unsigned int)idList->m_Items[v22];
      if ( (int)id >= 1 )
      {
        if ( !v18 )
          goto LABEL_40;
        v24 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v18, id, 1, 0);
        if ( v24 )
        {
          if ( SkillLvEntity__GetBonusUpVal(v24, eventUpVallInfo, questPhaseEntity, 0) )
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
  v25 = UserServantEntity__GetServantId(this, -1, v21);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v25, -1, -1, 1, 0, -1, isGranda);
  if ( !Entity )
LABEL_40:
    sub_1D0F30C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0);
  v26 = BalanceConfig_TypeInfo;
  v27 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  static_fields = v26->static_fields;
  v29 = 40;
  if ( (v27 & 1) != 0 )
    v29 = 56;
  v30 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v29);
  if ( (int)v30 >= 1 )
  {
    v31 = 0;
    while ( skillInfoList )
    {
      if ( v31 >= LODWORD(skillInfoList->max_length) )
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
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v18, id, lv, 0);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__GetBonusUpVal(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            questPhaseEntity,
                                            0);
              v23 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v30 == ++v31 )
        return v23 & 1;
    }
    goto LABEL_40;
  }
  return v23 & 1;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o UserServantEntity__GetBaseFriendPointUpTypeVal(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x21
  __int64 v5; // x22
  ServantSkillMaster_o *v6; // x20
  System_Nullable_ValueTuple_FuncList_TYPE__int___o FriendPointUpTypeVal; // x0 OVERLAPPED
  ServantSkillEntity_array *ServantSkillList; // x0
  UserServantEntity___c_c *v10; // x8
  ServantSkillEntity_array *v11; // x20
  System_Comparison_T__o *_9__94_0; // x21
  Il2CppObject *v13; // x22
  struct UserServantEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int max_length; // w8
  unsigned int v22; // w28
  Il2CppClass **v23; // x8
  ServantSkillEntity_o *v24; // x22
  NetworkManager_c *v25; // x0
  int32_t lv; // w23
  __int64 v27; // x25
  __int64 v28; // x26
  int64_t userIdNumber; // x24
  int32_t v30; // w0
  const MethodInfo *v31; // x2
  int32_t SkillLevel; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4E78693 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_ServantSkillEntity___);
    sub_1D0F0B4(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_UserServantEntity___c__GetBaseFriendPointUpTypeVal_b__94_0__);
    sub_1D0F0B4(&UserServantEntity___c_TypeInfo);
    byte_4E78693 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (ServantSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v5;
  *(_QWORD *)&v34.fields.fakeValue = v4;
  *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                       v34,
                                                       0);
  if ( !v6 )
    goto LABEL_34;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v6, *(int32_t *)&FriendPointUpTypeVal.fields.hasValue, 0);
  v10 = UserServantEntity___c_TypeInfo;
  v11 = ServantSkillList;
  if ( !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v10 = UserServantEntity___c_TypeInfo;
  }
  _9__94_0 = (System_Comparison_T__o *)v10->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = UserServantEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__94_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__94_0,
      v13,
      Method_UserServantEntity___c__GetBaseFriendPointUpTypeVal_b__94_0__,
      0);
    static_fields = UserServantEntity___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__94_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__94_0,
      (int32_t)_9__94_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  System_Array__Sort_object__52538372(
    (System_Object_array *)v11,
    _9__94_0,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v11 )
    goto LABEL_34;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1D0F314(*(_QWORD *)&FriendPointUpTypeVal.fields.hasValue);
      v23 = &v11->obj.klass + (int)v22;
      v24 = (ServantSkillEntity_o *)v23[4];
      if ( !v24 )
        break;
      *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = ServantSkillEntity__isEnable(
                                                           (ServantSkillEntity_o *)v23[4],
                                                           0,
                                                           0);
      if ( FriendPointUpTypeVal.fields.hasValue )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4E710BF )
        {
          sub_1D0F0B4(&NetworkManager_TypeInfo);
          byte_4E710BF = 1;
        }
        v25 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v25 = NetworkManager_TypeInfo;
        }
        lv = this->fields.lv;
        v28 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v27 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        userIdNumber = v25->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v28;
        *(_QWORD *)&v35.fields.fakeValue = v27;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v35, 0);
        *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = ServantSkillEntity__isUse(
                                                             v24,
                                                             userIdNumber,
                                                             lv,
                                                             v30,
                                                             -1,
                                                             -1,
                                                             -1,
                                                             -1,
                                                             0);
        if ( FriendPointUpTypeVal.fields.hasValue )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v24->fields.num - 1, v31);
          FriendPointUpTypeVal = ServantSkillEntity__GetFriendPointUpTypeVal(v24, SkillLevel, 0);
          if ( FriendPointUpTypeVal.fields.hasValue )
            return FriendPointUpTypeVal;
        }
      }
      max_length = v11->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_31;
    }
LABEL_34:
    sub_1D0F30C(
      *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue,
      *(_QWORD *)&FriendPointUpTypeVal.fields.value.fields.Item2);
  }
LABEL_31:
  *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = 0;
  FriendPointUpTypeVal.fields.value.fields.Item2 = 0;
  return FriendPointUpTypeVal;
}


bool UserServantEntity__GetBonusUpVal(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        int32_t questId,
        int32_t questPhase,
        bool useDatabaseGrandStatus,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v15; // x27
  __int64 v16; // x28
  int32_t v17; // w27
  int32_t v18; // w28
  const MethodInfo *v19; // x4
  int32_t DispLimitCountStage; // w0
  int32_t v21; // w29
  EventUpValInfo_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  QuestPhaseEntity_o *v31; // x24
  Il2CppObject *MasterData_object; // x25
  const MethodInfo *v33; // x5
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v35; // x23
  char v36; // w26
  int64_t v37; // x2
  EventUpValInfo_o *v38; // x29
  void *monitor; // x21
  Il2CppClass *klass; // x22
  const MethodInfo *v41; // x5
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4E78698 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&EventUpValInfo_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E78698 = 1;
  }
  entity = 0;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v16;
  *(_QWORD *)&v46.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v46, 0);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v19);
  v21 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  v22 = (EventUpValInfo_o *)sub_1D0F300(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v22, setupInfo, v17, v18, v21, 0, 0);
  *eventUpVallInfo = v22;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)eventUpVallInfo, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v31 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_1D0F30C(Instance, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(
                                this,
                                eventUpVallInfo,
                                v31,
                                useDatabaseGrandStatus,
                                isGrand,
                                v33);
  if ( equipIds )
  {
    max_length = equipIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v35 = 0;
      v36 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v35 >= (unsigned int)max_length )
          sub_1D0F314(Instance);
        v37 = equipIds->m_Items[v35];
        if ( v37 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_26;
          Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        v37,
                                        (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_26;
            v38 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v47.fields.currentCryptoKey = klass;
            *(_QWORD *)&v47.fields.fakeValue = monitor;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v47, 0);
            if ( !v38 )
              goto LABEL_26;
            v38->fields.equipSvtId = (int)Instance;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_26;
            Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(
                                          (UserServantEntity_o *)entity,
                                          eventUpVallInfo,
                                          v31,
                                          1,
                                          0,
                                          v41);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v36 = 1;
          }
        }
        LODWORD(max_length) = equipIds->max_length;
        ++v35;
      }
      while ( (__int64)v35 < (int)max_length );
      LOBYTE(Instance) = v36;
    }
  }
  return (unsigned __int8)Instance & 1;
}


int32_t UserServantEntity__GetCardImageLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  int32_t v12; // w0
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E786CC & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786CC = 1;
  }
  v10 = *(_QWORD *)&this->fields.imageLimitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.imageLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.imageLimitCount2, 0);
  return UserServantEntity__GetLimitCountStage(
           this,
           overrideTransformVal,
           v11,
           v12,
           1,
           ignoreRandomSettings,
           questRestrictionInfo,
           v13);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetCardImageLimitCountStageSealAfter(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v10; // x24
  __int64 v11; // x25
  int32_t v12; // w23
  int32_t v13; // w24
  const MethodInfo *v14; // x4
  int32_t CardImageLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E786CD & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786CD = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v17, 0);
  CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(
                               this,
                               overrideTransformVal,
                               ignoreRandomSettings,
                               questRestrictionInfo,
                               v14);
  return LimitCountUtility__GetSealAfter(v12, v13, CardImageLimitCountStage, 1, 0);
}


int32_t UserServantEntity__GetCardImageLimitCountStageSealAfterAtStageLimitCount(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  const MethodInfo *v10; // x4
  int32_t CardImageLimitCountStageSealAfter; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4E786CE & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786CE = 1;
  }
  v8 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v13, 0);
  CardImageLimitCountStageSealAfter = UserServantEntity__GetCardImageLimitCountStageSealAfter(
                                        this,
                                        overrideTransformVal,
                                        ignoreRandomSettings,
                                        0,
                                        v10);
  return LimitCountUtility__ConvertStageToLimitCount(v9, CardImageLimitCountStageSealAfter, 1, 0);
}


System_Int32_array *UserServantEntity__GetCategoryIdList(
        UserServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        bool includeBeforeOverwrite,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v6; // x20
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // x8
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

  if ( (byte_4E786EB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E786EB = 1;
  }
  memset(&v27, 0, sizeof(v27));
  entity = 0;
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v6;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_32;
  max_length = enableSkillInfoList->max_length;
  v11 = v8;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = includeBeforeOverwrite;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1D0F314(v8);
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
            SkillLvMaster__GetUniqueFuncIdsFromSkill((SkillLvMaster_o *)Master_object, &ret, id, lv, v13, 0);
          }
        }
      }
      LODWORD(max_length) = enableSkillInfoList->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)max_length );
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)ret;
  if ( !ret )
    goto LABEL_32;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v25,
    ret,
    (const MethodInfo_38012F8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v27 = v25;
  while ( 1 )
  {
    v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_36C9F08 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    if ( !v11 )
      sub_1D0F30C(v18, v19);
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            v11,
            &entity,
            (int32_t)v27.fields._current,
            (const MethodInfo_3535BC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !entity )
        sub_1D0F30C(v20, v21);
      if ( !v17 )
        sub_1D0F30C(v20, v21);
      System_Collections_Generic_HashSet_int___Add(
        v17,
        HIDWORD(entity[4].monitor),
        (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_36C9F04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v17 )
LABEL_32:
    sub_1D0F30C(v8, v9);
  count = (unsigned int)v17->fields._count;
  if ( (int)count <= 0 )
    return 0;
  v23 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_58727596(
    v17,
    v23,
    (const MethodInfo_3801CAC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v23;
}


int32_t UserServantEntity__GetCollectionMaxLimitCountSealAfter(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v4; // x0
  __int64 v5; // x22
  __int64 v6; // x23
  int64_t userIdNumber; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  UserServantCollectionEntity_o *Entity; // x20
  Il2CppObject *v12; // x21
  const MethodInfo *v13; // x2
  bool v14; // w22
  const MethodInfo *v15; // x1
  __int64 v16; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v17; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4E786C4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786C4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v6;
  *(_QWORD *)&v19.fields.fakeValue = v5;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v19, 0);
  if ( !Master_object )
    goto LABEL_20;
  Entity = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)Master_object, userIdNumber, v8, v10);
  v12 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v14 = UserServantEntity__CheckBaseServant(this, -1, v13);
  UserServantEntity__Init(this, v15);
  v16 = 496;
  if ( v14 )
    v16 = 488;
  v17 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&this->klass + v16);
  if ( !v17 || (v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v17[1], 0), !Entity) || !v12 )
LABEL_20:
    sub_1D0F30C(v8, v9);
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)v12,
           v8,
           Entity->fields.maxLimitCount,
           0);
}


int32_t UserServantEntity__GetCommandCardLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w0
  const MethodInfo *v11; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4E786CA & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786CA = 1;
  }
  v8 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v13, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.commandCardLimitCount2, 0);
  return UserServantEntity__GetLimitCountStage(this, overrideTransformVal, v9, v10, 0, ignoreRandomSettings, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetCommandCardLimitCountStageSealAfter(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v8; // x23
  __int64 v9; // x24
  int32_t v10; // w22
  int32_t v11; // w23
  const MethodInfo *v12; // x3
  int32_t CommandCardLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E786CB & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786CB = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  CommandCardLimitCountStage = UserServantEntity__GetCommandCardLimitCountStage(
                                 this,
                                 overrideTransformVal,
                                 ignoreRandomSettings,
                                 v12);
  return LimitCountUtility__GetSealAfter(v10, v11, CommandCardLimitCountStage, 0, 0);
}


System_Int32_array *UserServantEntity__GetCommandCardParam(UserServantEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)UserServantEntity__GetUserCommandCardEntity(this, method);
  if ( result )
    return *(System_Int32_array **)&result->m_Items[12];
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetCostumeOverrideTransformVal(
        UserServantEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x2
  __int64 ServantId; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v11; // w0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E786FE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E786FE = 1;
  }
  entity = 0;
  UserServantEntity__Init(this, *(const MethodInfo **)&costumeId);
  if ( !this->fields.saveTransformServantEntity )
    return -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  ServantId = UserServantEntity__GetServantId(this, 0, v6);
  if ( !Master_object )
    sub_1D0F30C(ServantId, v8);
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, &entity, ServantId, costumeId, 0) )
    return 0;
  v11 = UserServantEntity__GetServantId(this, 1, v9);
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, &entity, v11, costumeId, 0) )
    return 1;
  else
    return -1;
}


int32_t UserServantEntity__GetDispLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  int32_t v12; // w0
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E786C6 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786C6 = 1;
  }
  v10 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.dispLimitCount2, 0);
  return UserServantEntity__GetLimitCountStage(
           this,
           overrideTransformVal,
           v11,
           v12,
           0,
           ignoreRandomSettings,
           questRestrictionInfo,
           v13);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetDispLimitCountStageSealAfter(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v10; // x24
  __int64 v11; // x25
  int32_t v12; // w23
  int32_t v13; // w24
  const MethodInfo *v14; // x4
  int32_t DispLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E786C7 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786C7 = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v17, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(
                          this,
                          overrideTransformVal,
                          ignoreRandomSettings,
                          questRestrictionInfo,
                          v14);
  return LimitCountUtility__GetSealAfter(v12, v13, DispLimitCountStage, 0, 0);
}


int32_t UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  const MethodInfo *v12; // x4
  int32_t DispLimitCountStageSealAfter; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E786C8 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786C8 = 1;
  }
  v10 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                   this,
                                   overrideTransformVal,
                                   ignoreRandomSettings,
                                   questRestrictionInfo,
                                   v12);
  return LimitCountUtility__ConvertStageToLimitCount(v11, DispLimitCountStageSealAfter, 0, 0);
}


int32_t UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t DispLimitCountStageSealAfter; // w0

  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                   this,
                                   overrideTransformVal,
                                   0,
                                   questRestrictionInfo,
                                   v4);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
}


System_Int32_array *UserServantEntity__GetEquipAllCategoryIdList(
        UserServantEntity_o *this,
        ServantSkillEntity_array *skillEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 StrengthStatus; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // x23
  SkillInfo_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  ServantSkillEntity_o *v15; // x22
  ServantSkillEntity_o *v16; // x0
  int32_t skillNum; // w8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  UserServantEntity_o *v22; // x0
  const MethodInfo *v23; // x3

  if ( (byte_4E786E3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1D0F0B4(&SkillInfo_TypeInfo);
    byte_4E786E3 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( !skillEntities )
    goto LABEL_18;
  if ( SLODWORD(skillEntities->max_length) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (SkillInfo_o *)sub_1D0F300(SkillInfo_TypeInfo);
      SkillInfo___ctor(v8, 0);
      if ( v7 >= LODWORD(skillEntities->max_length) )
        sub_1D0F314(StrengthStatus);
      v15 = skillEntities->m_Items[v7];
      if ( v15 )
      {
        if ( !v8 )
          break;
        v16 = skillEntities->m_Items[v7];
        v8->fields.id = v15->fields.skillId;
        v8->fields.lv = 1;
        ServantSkillEntity__getEffectExplanation(
          v16,
          &v8->fields.charge,
          &v8->fields.title,
          &v8->fields.explanation,
          1,
          1,
          0);
        StrengthStatus = ServantSkillEntity__GetStrengthStatus(v15, -1, 0);
        v8->fields.strengthStatus = StrengthStatus;
        skillNum = v15->fields.skillNum;
        v8->fields.isUse = 1;
        v8->fields.skillRecord = skillNum;
      }
      if ( !v4 )
        break;
      items = v4->fields._items;
      v19 = Method_System_Collections_Generic_List_SkillInfo__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v8,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v8;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
      }
      if ( (__int64)++v7 >= SLODWORD(skillEntities->max_length) )
        goto LABEL_16;
    }
LABEL_18:
    sub_1D0F30C(StrengthStatus, v6);
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v22 = (UserServantEntity_o *)System_Collections_Generic_List_object___ToArray(
                                 v4,
                                 (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
  return UserServantEntity__GetCategoryIdList(v22, (SkillInfo_array *)v22, 1, v23);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *UserServantEntity__GetEquipCategoryIdList(
        UserServantEntity_o *this,
        bool includeBeforeOverwrite,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *v8; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v14; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v16; // x0
  const MethodInfo *v17; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4E786E2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E786E2 = 1;
  }
  skillInfoList = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1CE513C(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1CE513C(v3);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  v8 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v19, 0);
  if ( !v12 )
LABEL_17:
    sub_1D0F30C(v8, includeBeforeOverwrite);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v12,
                                   (int32_t)v8,
                                   (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0);
    result = 0;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v14);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v16, skillInfoList, includeBeforeOverwrite, v17);
      else
        return 0;
    }
  }
  return result;
}


EventServantEntity_o *UserServantEntity__GetEventServantWithinCreatedAt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x21
  __int64 v5; // x22
  EventServantMaster_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x20
  System_Func_object__bool__o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4E786B5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___);
    sub_1D0F0B4(&System_Func_EventServantEntity__bool__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_UserServantEntity__GetEventServantWithinCreatedAt_b__150_0__);
    byte_4E786B5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v5;
  *(_QWORD *)&v12.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  if ( !v6 )
    sub_1D0F30C(v7, v8);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)EventServantMaster__GetEntities(v6, v7, 0);
  v10 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_EventServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_UserServantEntity__GetEventServantWithinCreatedAt_b__150_0__,
    0);
  return (EventServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52923832(
                                   Entities,
                                   (System_Func_TSource__bool__o *)v10,
                                   (const MethodInfo_3278DB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetFigureImage(
        UserServantEntity_o *this,
        bool forGrand,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  bool v7; // w20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x4
  __int64 v10; // x8
  __int64 v11; // x20
  __int64 CardImageLimitCountStage; // x0
  __int64 v13; // x1
  int32_t v14; // w22
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t v17; // w0
  __int64 v18; // x8
  int32_t v19; // w21
  int32_t v20; // w0
  int32_t SealAfter; // w21
  bool IsRewardStage; // w0
  int32_t overwrite[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4E786CF & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786CF = 1;
  }
  *(_QWORD *)overwrite = 0;
  v7 = UserServantEntity__CheckBaseServant(this, overrideTransformVal, *(const MethodInfo **)&overrideTransformVal);
  UserServantEntity__Init(this, v8);
  v10 = 496;
  if ( v7 )
    v10 = 488;
  v11 = *(__int64 *)((char *)&this->klass + v10);
  CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(this, overrideTransformVal, 1, 0, v9);
  if ( !v11 )
    sub_1D0F30C(CardImageLimitCountStage, v13);
  v14 = CardImageLimitCountStage;
  v16 = *(_QWORD *)(v11 + 16);
  v15 = *(_QWORD *)(v11 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v25, 0);
  v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v26.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v19 = v17;
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v26, 0);
  SealAfter = LimitCountUtility__GetSealAfter(v19, v20, v14, 1, 0);
  if ( forGrand )
  {
    if ( ServantEntity__TryGetOverwriteGrandGraphImage((ServantEntity_o *)v11, SealAfter, &overwrite[1], 0) )
    {
      SealAfter = overwrite[1];
    }
    else if ( LimitCountUtility__IsRewardStage(SealAfter, 0)
           && ServantEntity__IsContainOverwriteGrandGraphImageLimitCount((ServantEntity_o *)v11, overwrite, 0) )
    {
      SealAfter = LimitCountUtility__ConvertLimitCountToStage(overwrite[0], 0, 0);
    }
  }
  IsRewardStage = LimitCountUtility__IsRewardStage(SealAfter, 0);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(SealAfter - IsRewardStage, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetFrameType(UserServantEntity_o *this, int32_t actualRarity, const MethodInfo *method)
{
  bool IsGrandServant; // w21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantExceedMaster_o *v9; // x22
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  bool v12; // w21
  int32_t FrameTypeFixRarity; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E786DB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786DB = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, *(const MethodInfo **)&actualRarity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantExceedMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v10 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  if ( !v9
    || (v12 = IsGrandServant,
        FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               v9,
                               (int32_t)v10,
                               this->fields.exceedCount,
                               actualRarity,
                               v12,
                               0),
        (v10 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
  {
    sub_1D0F30C(v10, v11);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v10,
           actualRarity,
           this->fields.lv,
           FrameTypeFixRarity,
           v12,
           0);
}


System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *UserServantEntity__GetFriendPointUpTypeVals(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v5; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v7; // x1
  __int128 v8; // x0
  const MethodInfo_3A7FD50 *v9; // x2
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  int64_t v15; // x2
  const MethodInfo_3A7FD50 *v16; // x2
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v21; // [xsp+0h] [xbp-60h] BYREF
  int v22; // [xsp+8h] [xbp-58h]
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_T__o v24; // 0:x0.16
  System_Nullable_T__o v25; // 0:x0.16

  if ( (byte_4E78692 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
    sub_1D0F0B4(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1D0F0B4(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__);
    byte_4E78692 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_T__o *)sub_1D0F300(System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int_____ctor(
    v5,
    (const MethodInfo_3903204 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
  *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v8 = UserServantEntity__GetBaseFriendPointUpTypeVal(this, v7);
  v21 = v8;
  v22 = DWORD2(v8);
  if ( (_BYTE)v8 )
  {
    v24.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
    *(_QWORD *)&v24.fields.hasValue = &v21;
    *(System_ValueTuple_Int32Enum__int__o *)&v8 = System_Nullable_ValueTuple_Int32Enum__int____get_Value(v24, v9);
    if ( !v5
      || (items = v5->fields._items,
          v11 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__,
          ++v5->fields._version,
          !items) )
    {
LABEL_28:
      sub_1D0F30C(v8, *((_QWORD *)&v8 + 1));
    }
    size = v5->fields._size;
    *((_QWORD *)&v8 + 1) = v8;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
        v5,
        *(System_ValueTuple_Int32Enum__int__o *)((char *)&v8 + 8),
        *(const MethodInfo_3903A58 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      if ( !equipIds )
        return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v5;
      goto LABEL_13;
    }
    v5->fields._size = size + 1;
    items->m_Items[size] = (Il2CppObject *)v8;
  }
  if ( !equipIds )
    return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v5;
LABEL_13:
  max_length = equipIds->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1D0F314(v8);
      v15 = equipIds->m_Items[i];
      if ( v15 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_28;
        *(_QWORD *)&v8 = DataMasterBase_object__object__long___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           &entity,
                           v15,
                           (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( (v8 & 1) != 0 )
        {
          *(_QWORD *)&v8 = entity;
          if ( !entity )
            goto LABEL_28;
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v8 = UserServantEntity__GetBaseFriendPointUpTypeVal(
                                                                        (UserServantEntity_o *)entity,
                                                                        *((const MethodInfo **)&v8 + 1));
          v21 = v8;
          v22 = DWORD2(v8);
          if ( (_BYTE)v8 )
          {
            v25.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
            *(_QWORD *)&v25.fields.hasValue = &v21;
            *(System_ValueTuple_Int32Enum__int__o *)&v8 = System_Nullable_ValueTuple_Int32Enum__int____get_Value(
                                                            v25,
                                                            v16);
            if ( !v5 )
              goto LABEL_28;
            v17 = v5->fields._items;
            v18 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
            ++v5->fields._version;
            if ( !v17 )
              goto LABEL_28;
            v19 = v5->fields._size;
            *((_QWORD *)&v8 + 1) = v8;
            if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
            {
              System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
                v5,
                *(System_ValueTuple_Int32Enum__int__o *)((char *)&v8 + 8),
                *(const MethodInfo_3903A58 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = v19 + 1;
              v17->m_Items[v19] = (Il2CppObject *)v8;
            }
          }
        }
      }
      LODWORD(max_length) = equipIds->max_length;
    }
  }
  return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v5;
}


int32_t UserServantEntity__GetIconLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  int32_t v12; // w0
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E786D1 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786D1 = 1;
  }
  v10 = *(_QWORD *)&this->fields.iconLimitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.iconLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.iconLimitCount2, 0);
  return UserServantEntity__GetLimitCountStage(
           this,
           overrideTransformVal,
           v11,
           v12,
           1,
           ignoreRandomSettings,
           questRestrictionInfo,
           v13);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetIconLimitCountStageSealAfter(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v10; // x24
  __int64 v11; // x25
  int32_t v12; // w23
  int32_t v13; // w24
  const MethodInfo *v14; // x4
  int32_t IconLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E786D2 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786D2 = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v17, 0);
  IconLimitCountStage = UserServantEntity__GetIconLimitCountStage(
                          this,
                          overrideTransformVal,
                          ignoreRandomSettings,
                          questRestrictionInfo,
                          v14);
  return LimitCountUtility__GetSealAfter(v12, v13, IconLimitCountStage, 1, 0);
}


int32_t UserServantEntity__GetIconLimitCountStageSealAfterIndexZero(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t IconLimitCountStageSealAfter; // w0

  IconLimitCountStageSealAfter = UserServantEntity__GetIconLimitCountStageSealAfter(
                                   this,
                                   overrideTransformVal,
                                   0,
                                   questRestrictionInfo,
                                   v4);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(IconLimitCountStageSealAfter, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        int32_t baseStage,
        int32_t transformStage,
        bool hasRewardStage,
        bool ignoreRandomSettings,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x2
  bool v17; // w22
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v22; // x21
  __int64 v23; // x27
  int32_t v24; // w21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_dispLimitCount; // x8
  int32_t *p_fakeValue; // x9
  __int64 v27; // x27
  __int64 v28; // x28
  int32_t v29; // w0
  int32_t v30; // w0
  int32_t v31; // w8
  RandomLimitCountManager_c *v32; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_randomLimitCount; // x8
  int32_t *v34; // x9
  __int64 v35; // x23
  __int64 v36; // x24
  UserServantEntity_o *v37; // x0
  const MethodInfo *v38; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_dispLimitCount2; // x8
  int32_t *v40; // x9
  __int64 v41; // x22
  __int64 v42; // x23
  __int128 v43; // q1
  int64_t v44; // x22
  int32_t v45; // w23
  int32_t v46; // w0
  __int64 v47; // x8
  int32_t lv; // w24
  int32_t v49; // w20
  int32_t v50; // w0
  int32_t v51; // w25
  __int64 v52; // x20
  __int64 v53; // x21
  int32_t v54; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+20h] [xbp-90h]
  int32_t afterLimitCountStage; // [xsp+4Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4E786C5 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E786C5 = 1;
  }
  if ( UserServantEntity__get_IsEquip(this, *(const MethodInfo **)&overrideTransformVal) )
    return 1;
  v17 = UserServantEntity__CheckBaseServant(this, overrideTransformVal, v15);
  UserServantEntity__Init(this, v18);
  if ( !v17 )
  {
    saveTransformServantEntity = this->fields.saveTransformServantEntity;
    if ( saveTransformServantEntity )
      goto LABEL_7;
LABEL_46:
    sub_1D0F30C(v19, v20);
  }
  saveTransformServantEntity = this->fields.baseServantEntity;
  if ( !saveTransformServantEntity )
    goto LABEL_46;
LABEL_7:
  v23 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v23;
  *(_QWORD *)&v58.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v58, 0);
  if ( !questRestrictionInfo )
    goto LABEL_16;
  p_dispLimitCount = &this->fields.dispLimitCount;
  p_fakeValue = &this->fields.dispLimitCount.fields.fakeValue;
  if ( !v17 )
  {
    p_fakeValue = &this->fields.dispLimitCount2.fields.fakeValue;
    p_dispLimitCount = &this->fields.dispLimitCount2;
  }
  v27 = *(_QWORD *)&p_dispLimitCount->fields.currentCryptoKey;
  v28 = *(_QWORD *)p_fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v27;
  *(_QWORD *)&v59.fields.fakeValue = v28;
  afterLimitCountStage = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v59, 0);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  v30 = LimitCountUtility__GetLimitCountStageCheckZero(v29, afterLimitCountStage, 0, 0);
  if ( QuestRestrictionInfo__TryConvertOverwriteImageLimitCount(
         questRestrictionInfo,
         v24,
         v30,
         &afterLimitCountStage,
         0) )
  {
    return afterLimitCountStage;
  }
LABEL_16:
  if ( v17 )
    v31 = baseStage;
  else
    v31 = transformStage;
  afterLimitCountStage = v31;
  if ( ignoreRandomSettings )
    goto LABEL_41;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4E72E18 )
  {
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E72E18 = 1;
  }
  v32 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v32 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v32->static_fields->enableRandomLimitCount )
    goto LABEL_41;
  p_randomLimitCount = &this->fields.randomLimitCount;
  v34 = &this->fields.randomLimitCount.fields.fakeValue;
  if ( !v17 )
  {
    v34 = &this->fields.randomLimitCount2.fields.fakeValue;
    p_randomLimitCount = &this->fields.randomLimitCount2;
  }
  v35 = *(_QWORD *)&p_randomLimitCount->fields.currentCryptoKey;
  v36 = *(_QWORD *)v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v35;
  *(_QWORD *)&v60.fields.fakeValue = v36;
  v37 = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v60, 0);
  if ( UserServantEntity__CheckEnableRandomLimitCount_44526580(v37, (int32_t)v37, v38) )
  {
    p_dispLimitCount2 = &this->fields.dispLimitCount;
    v40 = &this->fields.dispLimitCount.fields.fakeValue;
    if ( !v17 )
    {
      v40 = &this->fields.dispLimitCount2.fields.fakeValue;
      p_dispLimitCount2 = &this->fields.dispLimitCount2;
    }
    v41 = *(_QWORD *)&p_dispLimitCount2->fields.currentCryptoKey;
    v42 = *(_QWORD *)v40;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v41;
    *(_QWORD *)&v61.fields.fakeValue = v42;
    afterLimitCountStage = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v61, 0);
    v43 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v56.fields.fakeValue = v43;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v55 = v56;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v55, 0);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.svtId, 0);
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
    v47 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    lv = this->fields.lv;
    v49 = v46;
    *(_QWORD *)&v62.fields.currentCryptoKey = v47;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v62, 0);
    v51 = LimitCountUtility__GetLimitCountStageCheckZero(v50, afterLimitCountStage, 0, 0);
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    return RandomLimitCountManager__ChoiceLimitCount(v44, v45, v24, v49, lv, v51, hasRewardStage, 0);
  }
  else
  {
LABEL_41:
    v53 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v52 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = v53;
    *(_QWORD *)&v63.fields.fakeValue = v52;
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v63, 0);
    return LimitCountUtility__GetLimitCountStageCheckZero(v54, afterLimitCountStage, hasRewardStage, 0);
  }
}


ServantOverwriteStatus_o *UserServantEntity__GetOverwriteStatus(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w1
  const MethodInfo *v6; // x2

  DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    this,
                                                    -1,
                                                    0,
                                                    questRestrictionInfo,
                                                    v3);
  return UserServantEntity__GetOverwriteStatus_44553664(this, DispLimitCountStageSealAfterAtStageLimitCount, v6);
}


ServantOverwriteStatus_o *UserServantEntity__GetOverwriteStatus_44553664(
        UserServantEntity_o *this,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *overwriteStatusMap; // x0
  struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o **p_overwriteStatusMap; // x21
  System_Collections_Generic_Dictionary_int__object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  ServantOverwriteStatus_o *v17; // x22
  const MethodInfo *v18; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4E786C3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&ServantOverwriteStatus_TypeInfo);
    byte_4E786C3 = 1;
  }
  overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.overwriteStatusMap;
  p_overwriteStatusMap = &this->fields.overwriteStatusMap;
  if ( !overwriteStatusMap )
  {
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v7,
      (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    *p_overwriteStatusMap = (struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *)v7;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteStatusMap,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)*p_overwriteStatusMap;
    if ( !*p_overwriteStatusMap )
      goto LABEL_17;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         overwriteStatusMap,
         stageLimitCount,
         (const MethodInfo_35A83FC *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__) )
  {
    goto LABEL_15;
  }
  if ( UserServantEntity__CheckBaseServant(this, -1, v15) )
  {
    v17 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor(v17, this, stageLimitCount, 0);
  }
  else
  {
    UserServantEntity__Init(this, v16);
    saveTransformServantEntity = this->fields.saveTransformServantEntity;
    if ( !saveTransformServantEntity )
      goto LABEL_17;
    v21 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
    v20 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = v21;
    *(_QWORD *)&v24.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v24, 0);
    v17 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_35208276(v17, this, v22, stageLimitCount, 0);
  }
  overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)UserServantEntity__get_GrandInfo(
                                                                                 this,
                                                                                 v18);
  if ( !v17
    || (ServantOverwriteStatus__ApplyGrandServantEffect(v17, (UserServantGrandInfo_o *)overwriteStatusMap, 0),
        (overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)*p_overwriteStatusMap) == 0) )
  {
LABEL_17:
    sub_1D0F30C(overwriteStatusMap, v14);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    overwriteStatusMap,
    stageLimitCount,
    (Il2CppObject *)v17,
    (const MethodInfo_35A81F4 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
LABEL_15:
  overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)*p_overwriteStatusMap;
  if ( !*p_overwriteStatusMap )
    goto LABEL_17;
  return (ServantOverwriteStatus_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       overwriteStatusMap,
                                       stageLimitCount,
                                       (const MethodInfo_35A8168 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
}


void UserServantEntity__GetPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispSvtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        bool useDatabaseGrandStatus,
        bool isGrand,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int128 v19; // q0
  UserServantCollectionMaster_o *v20; // x27
  int64_t v21; // x0
  __int64 v22; // x23
  __int64 v23; // x24
  int64_t v24; // x22
  const MethodInfo *v25; // x3
  int64_t v26; // x19
  const MethodInfo *v28; // x4
  int32_t friendshipRank; // w27
  long double v30; // q0
  int32_t DispLimitCountStage; // w0
  __int64 v32; // x0
  __int64 v33; // x0
  Il2CppObject *v34; // x0
  __int128 v35; // q0
  ServantPassiveSkillMaster_o *v36; // x26
  int64_t v37; // x0
  int32_t lv; // w29
  __int64 v39; // x23
  __int64 v40; // x22
  int64_t v41; // x24
  UserServantEntity_o *v42; // x23
  Il2CppObject *v43; // x22
  GrandQuestFolderBoardItem_o *v44; // x29
  bool v45; // w19
  BalanceConfig_c *v46; // x0
  System_Int32_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_String_array *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  __int64 v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  Il2CppObject *v68; // x25
  Il2CppObject *v69; // x26
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int v76; // w8
  void *v77; // x27
  int i; // w20
  __int64 v79; // x8
  int32_t v80; // w29
  NetworkManager_c *v81; // x0
  __int64 v82; // x23
  __int64 v83; // x28
  int64_t userIdNumber; // x22
  int32_t v85; // w4
  int32_t v86; // w2
  __int64 v87; // x22
  __int64 v88; // x8
  unsigned __int64 v89; // x23
  System_Int32_array *v90; // x8
  int max_length; // w9
  unsigned int v92; // w10
  __int64 v93; // x28
  char *v94; // x10
  _DWORD *v95; // x10
  int v96; // t1
  System_String_array *v97; // x8
  System_String_array *v98; // x9
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  UserEventServantPointMaster_o *Master_object; // [xsp+48h] [xbp-F8h]
  UserServantEntity_o *v113; // [xsp+58h] [xbp-E8h]
  System_String_array **v114; // [xsp+60h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+B0h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4E78690 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    byte_4E78690 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v19 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v20 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v118.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v117 = v118;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v117, 0);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v113 = this;
  v24 = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v120.fields.currentCryptoKey = v23;
  *(_QWORD *)&v120.fields.fakeValue = v22;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v120, 0);
  if ( !v20 )
    goto LABEL_81;
  v26 = nowTime;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v20, v24, (int32_t)Instance, v25);
  if ( !Instance )
    goto LABEL_81;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v17);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(v113, -1, 0, 0, v28);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  if ( useDatabaseGrandStatus )
    isGrand = UserServantEntity__IsGrandServant(v113, v17);
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1CE513C(v30);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1CE513C(v30);
  Instance = **(void ***)(v33 + 184);
  if ( !Instance )
    goto LABEL_81;
  v114 = explanationList;
  v34 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v35 = *(_OWORD *)&v113->fields.userId.fields.fakeValue;
  v36 = (ServantPassiveSkillMaster_o *)v34;
  *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&v113->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v118.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v116 = v118;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v116, 0);
  lv = v113->fields.lv;
  v39 = *(_QWORD *)&v113->fields.limitCount.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v113->fields.limitCount.fields.fakeValue;
  v41 = v37;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v121.fields.currentCryptoKey = v39;
  *(_QWORD *)&v121.fields.fakeValue = v40;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v121, 0);
  if ( !v36 )
    goto LABEL_81;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v36,
    idList,
    titleList,
    v114,
    dispSvtId,
    v41,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    v26,
    isGrand,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v42 = v113;
  if ( !Instance )
    goto LABEL_81;
  v43 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v113->fields.svtId, 0);
  if ( !v43 )
    goto LABEL_81;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v43,
               (int32_t)Instance,
               (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v44 = (GrandQuestFolderBoardItem_o *)v114;
  if ( !Instance )
    goto LABEL_81;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
    return;
  v45 = *idList == 0;
  if ( !*idList )
  {
    v46 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    v47 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, (unsigned int)v46->static_fields->SvtPassiveSkillListMax);
    *idList = v47;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)idList, (int32_t)v47, v48, v49, v50, v51, v52, v53);
    v54 = (System_String_array *)sub_1D0F15C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v54;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v54, v55, v56, v57, v58, v59, v60);
    v61 = sub_1D0F15C(string___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *v114 = (System_String_array *)v61;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)v114, v61, v62, v63, v64, v65, v66, v67);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v68 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v69 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0)) == 0 )
LABEL_81:
    sub_1D0F30C(Instance, v17);
  v76 = *((_DWORD *)Instance + 6);
  v77 = Instance;
  if ( v76 >= 1 )
  {
    for ( i = 0; i < v76; ++i )
    {
      if ( i >= (unsigned int)v76 )
        goto LABEL_80;
      v79 = *((_QWORD *)v77 + i + 4);
      if ( !v79 )
        goto LABEL_81;
      v80 = *(_DWORD *)(v79 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4E710BF )
      {
        sub_1D0F0B4(&NetworkManager_TypeInfo);
        byte_4E710BF = 1;
      }
      v81 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v81 = NetworkManager_TypeInfo;
      }
      v83 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
      v82 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
      userIdNumber = v81->static_fields->userIdNumber;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v122.fields.currentCryptoKey = v83;
      *(_QWORD *)&v122.fields.fakeValue = v82;
      v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v122, 0);
      Instance = Master_object;
      if ( !Master_object )
        goto LABEL_81;
      Instance = (void *)UserEventServantPointMaster__TryGetEntity(Master_object, &entity, userIdNumber, v80, v85, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_81;
        Instance = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0);
        v86 = (int)Instance;
      }
      else
      {
        v86 = 0;
      }
      if ( !v68 )
        goto LABEL_81;
      Instance = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)v68,
                   v80,
                   v86,
                   dispSvtId,
                   0);
      if ( Instance )
      {
        v87 = *((_QWORD *)Instance + 4);
        v44 = (GrandQuestFolderBoardItem_o *)v114;
        if ( !v87 )
          goto LABEL_81;
        v88 = *(_QWORD *)(v87 + 24);
        if ( (int)v88 >= 1 )
        {
          v89 = 0;
          while ( v89 < (unsigned int)v88 )
          {
            v90 = *idList;
            if ( !*idList )
              goto LABEL_81;
            max_length = v90->max_length;
            if ( max_length >= 1 )
            {
              v17 = (const MethodInfo *)*(unsigned int *)(v87 + 4 * v89 + 32);
              v92 = 0;
              while ( 1 )
              {
                if ( v92 >= max_length )
                  goto LABEL_80;
                v93 = (int)v92;
                v94 = (char *)v90 + 4 * (int)v92;
                v96 = *((_DWORD *)v94 + 8);
                v95 = v94 + 32;
                if ( !v96 )
                  break;
                v92 = v93 + 1;
                if ( (int)v93 + 1 >= max_length )
                  goto LABEL_73;
              }
              *v95 = (_DWORD)v17;
              if ( !v69 )
                goto LABEL_81;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v69,
                           (int32_t)v17,
                           (const MethodInfo_3535B7C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v97 = *titleList;
              if ( !*titleList )
                goto LABEL_81;
              v98 = *v114;
              if ( !*v114 || !Instance )
                goto LABEL_81;
              if ( (unsigned int)v93 >= LODWORD(v97->max_length) || (unsigned int)v93 >= LODWORD(v98->max_length) )
                break;
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &v97->m_Items[v93], &v98->m_Items[v93], 0, 0);
              v45 = 0;
            }
LABEL_73:
            LODWORD(v88) = *(_DWORD *)(v87 + 24);
            if ( (__int64)++v89 >= (int)v88 )
              goto LABEL_76;
          }
LABEL_80:
          sub_1D0F314(Instance);
        }
      }
      else
      {
        v44 = (GrandQuestFolderBoardItem_o *)v114;
      }
LABEL_76:
      v76 = *((_DWORD *)v77 + 6);
      v42 = v113;
    }
  }
  if ( v45 )
  {
    *idList = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)idList, 0, v70, v71, v72, v73, v74, v75);
    *titleList = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)titleList, 0, v99, v100, v101, v102, v103, v104);
    v44->klass = 0;
    sub_1D0F058(v44, 0, v105, v106, v107, v108, v109, v110);
  }
}


int32_t UserServantEntity__GetPortraitLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w0
  const MethodInfo *v11; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4E786D3 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786D3 = 1;
  }
  v8 = *(_QWORD *)&this->fields.portraitLimitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.portraitLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v13, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.portraitLimitCount2, 0);
  return UserServantEntity__GetLimitCountStage(this, overrideTransformVal, v9, v10, 0, ignoreRandomSettings, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetPortraitLimitCountStageSealAfter(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v8; // x23
  __int64 v9; // x24
  int32_t v10; // w22
  int32_t v11; // w23
  const MethodInfo *v12; // x3
  int32_t PortraitLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E786D4 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786D4 = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  PortraitLimitCountStage = UserServantEntity__GetPortraitLimitCountStage(
                              this,
                              overrideTransformVal,
                              ignoreRandomSettings,
                              v12);
  return LimitCountUtility__GetSealAfter(v10, v11, PortraitLimitCountStage, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetRarity(UserServantEntity_o *this, bool useOverwrite, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w0
  const MethodInfo *v6; // x2
  ServantOverwriteStatus_o *OverwriteStatus_44553664; // x0
  __int64 v8; // x1

  if ( !useOverwrite )
    return UserServantEntity__getRarity(this, (const MethodInfo *)useOverwrite);
  DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    this,
                                                    -1,
                                                    0,
                                                    0,
                                                    v3);
  OverwriteStatus_44553664 = UserServantEntity__GetOverwriteStatus_44553664(
                               this,
                               DispLimitCountStageSealAfterAtStageLimitCount,
                               v6);
  if ( !OverwriteStatus_44553664 )
    sub_1D0F30C(0, v8);
  return OverwriteStatus_44553664->fields._Rarity_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetRarityIcon(UserServantEntity_o *this, int32_t actualRarity, const MethodInfo *method)
{
  bool IsGrandServant; // w21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t RarityIcon; // w22

  if ( (byte_4E786DC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786DC = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, *(const MethodInfo **)&actualRarity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       (ServantExceedMaster_o *)Instance,
                       actualRarity,
                       this->fields.exceedCount,
                       0,
                       IsGrandServant,
                       0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___)) == 0 )
  {
    sub_1D0F30C(Instance, v7);
  }
  return ServantLvDetailMaster__GetRarityIcon(
           (ServantLvDetailMaster_o *)Instance,
           actualRarity,
           this->fields.lv,
           RarityIcon,
           IsGrandServant,
           0);
}


int32_t UserServantEntity__GetSameSvtEquipNumIsLimitUp(
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
  int32_t v13; // w20
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4E786EF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786EF = 1;
  }
  userStorageServantList = 0;
  memset(&v17, 0, sizeof(v17));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  v11 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                  v19,
                                                                  0);
  if ( !v10 )
    goto LABEL_26;
  if ( !isWarehouseServantEquip )
  {
    v13 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v10, &userStorageServantList, (int32_t)v11, 0, 0) )
      return v13;
LABEL_12:
    v11 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v13 = 0;
      v17 = v16;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v17,
                  (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v17,
              (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v13;
          }
          if ( !isLimitMax )
            break;
          if ( !v17.fields._current )
            sub_1D0F30C(0, v14);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v17.fields._current, v14) )
            goto LABEL_21;
        }
        if ( !v17.fields._current )
          sub_1D0F30C(0, v14);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v17.fields._current, v14) )
LABEL_21:
          ++v13;
      }
    }
LABEL_26:
    sub_1D0F30C(v11, v12);
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v10, &userStorageServantList, (int32_t)v11, 0) )
    goto LABEL_12;
  return 0;
}


System_Collections_Generic_List_TransformServantInfo__o *UserServantEntity__GetSaveTransformedServantList(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t ServantId; // w21
  const MethodInfo *v6; // x4
  const MethodInfo *v7; // x1
  int32_t DispLimitCountStage; // w22
  __int64 v9; // x1
  ServantEntity_o *baseServantEntity; // x0
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  __int64 v12; // x8
  System_String_o *v13; // x24
  TransformServantInfo_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  const MethodInfo *v25; // x2
  int32_t v26; // w21
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x1
  int32_t v29; // w22
  ServantEntity_TransformInfo_o *v30; // x0
  __int64 v31; // x8
  System_String_o *v32; // x23
  TransformServantInfo_o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4E786F0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TransformServantInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_TransformServantInfo__TypeInfo);
    sub_1D0F0B4(&TransformServantInfo_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E786F0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  ServantId = UserServantEntity__GetServantId(this, 0, v4);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, 0, 0, 0, v6);
  if ( (byte_4E7867F & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7867F = 1;
  }
  UserServantEntity__Init(this, v7);
  baseServantEntity = this->fields.baseServantEntity;
  if ( !baseServantEntity )
    goto LABEL_31;
  TransformInfo = ServantEntity__GetTransformInfo(baseServantEntity, 0);
  v12 = TransformInfo ? (__int64)TransformInfo->fields.condLabelTitle : 0LL;
  v13 = (System_String_o *)(v12 ? v12 : StringLiteral_1/*""*/);
  v14 = (TransformServantInfo_o *)sub_1D0F300(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_44972732(v14, ServantId, DispLimitCountStage, v13, 0);
  if ( !v3 )
    goto LABEL_31;
  items = v3->fields._items;
  v22 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)v14,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v14;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  v26 = UserServantEntity__GetServantId(this, 1, v25);
  v29 = UserServantEntity__GetDispLimitCountStage(this, 1, 0, 0, v27);
  if ( (byte_4E7867F & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7867F = 1;
  }
  UserServantEntity__Init(this, v28);
  baseServantEntity = this->fields.saveTransformServantEntity;
  if ( !baseServantEntity )
    goto LABEL_31;
  v30 = ServantEntity__GetTransformInfo(baseServantEntity, 0);
  v31 = v30 ? (__int64)v30->fields.condLabelTitle : 0LL;
  v32 = (System_String_o *)(v31 ? v31 : StringLiteral_1/*""*/);
  v33 = (TransformServantInfo_o *)sub_1D0F300(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_44972732(v33, v26, v29, v32, 0);
  v40 = v3->fields._items;
  v41 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v3->fields._version;
  if ( !v40 )
LABEL_31:
    sub_1D0F30C(baseServantEntity, v9);
  v42 = v3->fields._size;
  if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)v33,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v3->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v33;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
  }
  return (System_Collections_Generic_List_TransformServantInfo__o *)v3;
}


ServantEntity_o *UserServantEntity__GetServantEntity(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  bool v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x8

  v4 = UserServantEntity__CheckBaseServant(this, overrideTransformVal, method);
  UserServantEntity__Init(this, v5);
  v6 = 496;
  if ( v4 )
    v6 = 488;
  return *(ServantEntity_o **)((char *)&this->klass + v6);
}


int32_t UserServantEntity__GetServantId(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  bool v5; // w20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x19
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E78680 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E78680 = 1;
  }
  v5 = UserServantEntity__CheckBaseServant(this, overrideTransformVal, method);
  UserServantEntity__Init(this, v6);
  v9 = 496;
  if ( v5 )
    v9 = 488;
  v10 = *(__int64 *)((char *)&this->klass + v9);
  if ( !v10 )
    sub_1D0F30C(v7, v8);
  v12 = *(_QWORD *)(v10 + 16);
  v11 = *(_QWORD *)(v10 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *UserServantEntity__GetSkillCategoryIdList(
        UserServantEntity_o *this,
        int32_t skillListNum,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t v4; // w21
  bool v7; // w22
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  __int64 v10; // x22
  const MethodInfo *v11; // x4
  bool IsServant; // w8
  System_Int32_array *result; // x0
  int32_t DispLimitCountStage; // w0
  __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w0
  UserServantEntity_o *v18; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // [xsp+0h] [xbp-40h]
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v4 = dispLimitCount;
  if ( (byte_4E786EC & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786EC = 1;
  }
  skillInfoList = 0;
  v7 = UserServantEntity__CheckBaseServant(this, -1, *(const MethodInfo **)&dispLimitCount);
  UserServantEntity__Init(this, v8);
  v9 = 496;
  if ( v7 )
    v9 = 488;
  v10 = *(__int64 *)((char *)&this->klass + v9);
  if ( !v10 )
    return 0;
  IsServant = ServantEntity__get_IsServant(*(ServantEntity_o **)((char *)&this->klass + v9), 0);
  result = 0;
  if ( !IsServant )
    return result;
  if ( v4 < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v11);
    v4 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v16 = *(_QWORD *)(v10 + 16);
  v15 = *(_QWORD *)(v10 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v16;
  *(_QWORD *)&v22.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v17, -1, v4, 1, 0, skillListNum, v20);
  if ( skillInfoList )
    return UserServantEntity__GetCategoryIdList(v18, skillInfoList, 1, v19);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *UserServantEntity__GetSkillIdList(
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
  __int64 v12; // x0
  __int64 v13; // x0
  ServantSkillEntity_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v16; // x8
  ServantSkillMaster_o *v17; // x24
  const MethodInfo *v18; // x4
  int32_t DispLimitCountStage; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v20; // x19
  __int128 v21; // q0
  int64_t userSvtId; // x26
  signed __int64 v23; // x27
  BalanceConfig_c *v24; // x0
  unsigned __int64 v25; // x23
  __int128 v26; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v28; // x25
  int64_t v29; // x0
  int32_t lv; // w28
  __int64 v31; // x19
  __int64 v32; // x27
  int64_t v33; // x29
  __int64 v35; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4E7868C & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E7868C = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1CE513C(v8);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1CE513C(v8);
  UseEntity = **(ServantSkillEntity_o ***)(v13 + 184);
  if ( !UseEntity )
LABEL_33:
    sub_1D0F30C(UseEntity, *(_QWORD *)&servantId);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v16 = BalanceConfig_TypeInfo;
  v17 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v35 = sub_1D0F15C(int___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, ignoreRandomSettings, 0, v18);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v20 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v21 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v43.fields.fakeValue = v21;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v42, -1, 0);
    v43 = v42;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v43;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v41, 0);
  v23 = 0;
  while ( 1 )
  {
    v24 = BalanceConfig_TypeInfo;
    v25 = v23;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    if ( v23 >= v24->static_fields->SvtSkillListMax )
      return (System_Int32_array *)v35;
    v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v27 = *v20;
    v28 = v20;
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v42.fields.fakeValue = v26;
    if ( !v27->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v27);
    v40 = v42;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v40, 0);
    lv = this->fields.lv;
    v31 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v32 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    v33 = v29;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v31;
    *(_QWORD *)&v44.fields.fakeValue = v32;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v44, 0);
    if ( !v17 )
      goto LABEL_33;
    v23 = v25 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  v17,
                  servantId,
                  (int)v25 + 1,
                  v33,
                  lv,
                  (int32_t)UseEntity,
                  dispLimitCount,
                  beforeQuestClear,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0);
    v20 = v28;
    if ( UseEntity )
    {
      if ( !v35 )
        goto LABEL_33;
      if ( v25 >= *(unsigned int *)(v35 + 24) )
        sub_1D0F314(UseEntity);
      *(_DWORD *)(v35 + 32 + 4 * v25) = UseEntity->fields.skillId;
    }
  }
}


void UserServantEntity__GetSkillInfo(
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
  long double v13; // q0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x20
  bool IsServantEquip; // w24
  BalanceConfig_c *v19; // x0
  BalanceConfig_c *v20; // x0
  SkillInfo_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x4
  int32_t DispLimitCountStage; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v30; // x20
  __int128 v31; // q0
  unsigned __int64 v32; // x29
  __int64 v33; // x19
  SkillInfo_o *v34; // x27
  __int128 v35; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v37; // x26
  int64_t v38; // x0
  int32_t lv; // w23
  __int64 v40; // x20
  __int64 v41; // x28
  int64_t v42; // x21
  unsigned __int64 v43; // x28
  ServantSkillEntity_o *v44; // x23
  int32_t skillNum; // w8
  unsigned int *v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  __int64 v53; // x0
  __int64 v54; // [xsp+28h] [xbp-128h]
  __int64 v55; // [xsp+30h] [xbp-120h]
  __int64 v56; // [xsp+38h] [xbp-118h]
  bool v57; // [xsp+44h] [xbp-10Ch]
  int64_t userSvtId; // [xsp+48h] [xbp-108h]
  ServantSkillMaster_o *v59; // [xsp+50h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66[2]; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4E7868D & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&SkillInfo___TypeInfo);
    sub_1D0F0B4(&SkillInfo_TypeInfo);
    byte_4E7868D = 1;
  }
  *(_OWORD *)&v13 = 0u;
  memset(&v66[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1CE513C(COERCE_LONG_DOUBLE((unsigned __int128)0LL));
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1CE513C(v13);
  Instance = **(_QWORD **)(v15 + 184);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        dispSvtId,
                        (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_49;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
  v55 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
          this,
          this->klass->vtable._6_getSkillLevelList.method);
  if ( skillListNum <= 0 )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    skillListNum = v19->static_fields->SvtSkillListMax;
  }
  v59 = (ServantSkillMaster_o *)MasterData_object;
  if ( IsServantEquip )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    skillListNum = v20->static_fields->SvtEquipSkillListMax;
  }
  v21 = (SkillInfo_array *)sub_1D0F15C(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v21;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v28);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v30 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v31 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v66[1].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v66[1].fields.fakeValue = v31;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v66, -1, 0);
    v66[1] = v66[0];
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v65 = v66[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v65, 0);
  if ( skillListNum >= 1 )
  {
    v56 = (unsigned int)skillListNum;
    v32 = 0;
    v33 = 8;
    v54 = v55 + 32;
    v57 = finishEvent;
    while ( 1 )
    {
      v34 = (SkillInfo_o *)sub_1D0F300(SkillInfo_TypeInfo);
      SkillInfo___ctor(v34, 0);
      v35 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v36 = *v30;
      v37 = v30;
      *(_OWORD *)&v66[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v66[0].fields.fakeValue = v35;
      if ( !v36->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v36);
      v64 = v66[0];
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v64, 0);
      lv = this->fields.lv;
      v40 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v41 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v42 = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = v40;
      *(_QWORD *)&v67.fields.fakeValue = v41;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v67, 0);
      if ( !v59 )
        break;
      v43 = v32 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v59,
                            dispSvtId,
                            (int)v32 + 1,
                            v42,
                            lv,
                            Instance,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v57,
                            0);
      if ( Instance )
      {
        if ( !v34 )
          break;
        v44 = (ServantSkillEntity_o *)Instance;
        v34->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v55 )
          break;
        if ( v32 >= *(unsigned int *)(v55 + 24) )
          goto LABEL_50;
        v34->fields.lv = *(_DWORD *)(v54 + 4 * v32);
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v34->fields.charge,
          &v34->fields.title,
          &v34->fields.explanation,
          *(_DWORD *)(v54 + 4 * v32),
          IsServantEquip,
          0);
        Instance = ServantSkillEntity__GetStrengthStatus(v44, beforeClearQuestId, 0);
        v34->fields.strengthStatus = Instance;
        skillNum = v44->fields.skillNum;
        v34->fields.isUse = 1;
        v34->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v34 )
          break;
        v34->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v59, dispSvtId, v43, 0);
          if ( Instance )
          {
            v34->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v34->fields.title,
              &v34->fields.explanation,
              0);
          }
        }
      }
      v46 = (unsigned int *)*skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1D0F1F0(v34, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
      if ( !Instance )
      {
        v53 = sub_1D0F330(0);
        sub_1D0F1DC(v53, 0);
      }
      if ( v32 >= v46[6] )
LABEL_50:
        sub_1D0F314(Instance);
      *(_QWORD *)&v46[2 * v32 + 8] = v34;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v46[v33], (int32_t)v34, v47, v48, v49, v50, v51, v52);
      v33 += 2;
      ++v32;
      v30 = v37;
      if ( v56 == v43 )
        return;
    }
LABEL_49:
    sub_1D0F30C(Instance, skillInfoList);
  }
}


int32_t UserServantEntity__GetSkillMaxCount(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  const MethodInfo *v4; // x2
  int32_t ServantId; // w0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  SkillInfo_array *v8; // x21
  int max_length; // w8
  unsigned int v10; // w22
  int32_t v11; // w20
  SkillInfo_o *v12; // x24
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E786F8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4E786F8 = 1;
  }
  skillInfoList = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillMaster___);
  ServantId = UserServantEntity__GetServantId(this, -1, v4);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, ServantId, -1, -1, 1, 0, -1, v14);
  v8 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_19;
  max_length = skillInfoList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1D0F314(v6);
      v12 = v8->m_Items[v10];
      if ( !v12 || !Master_object )
        break;
      v6 = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             v12->fields.id,
             (const MethodInfo_3535BC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( v6 )
      {
        if ( !entity )
          break;
        if ( v12->fields.lv >= SLODWORD(entity[2].monitor) )
          ++v11;
      }
      max_length = v8->max_length;
      if ( (int)++v10 >= max_length )
        return v11;
    }
LABEL_19:
    sub_1D0F30C(v6, v7);
  }
  return 0;
}


System_String_o *UserServantEntity__GetSvtName(UserServantEntity_o *this, bool isCommonName, const MethodInfo *method)
{
  bool v5; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  ServantEntity_o *v9; // x20
  __int64 CardImageLimitCountStageSealAfterAtStageLimitCount; // x0
  __int64 v11; // x1

  v5 = UserServantEntity__CheckBaseServant(this, -1, method);
  UserServantEntity__Init(this, v6);
  v8 = 496;
  if ( v5 )
    v8 = 488;
  v9 = *(ServantEntity_o **)((char *)&this->klass + v8);
  CardImageLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetCardImageLimitCountStageSealAfterAtStageLimitCount(
                                                         this,
                                                         -1,
                                                         0,
                                                         v7);
  if ( !v9 )
    sub_1D0F30C(CardImageLimitCountStageSealAfterAtStageLimitCount, v11);
  return ServantEntity__getName(v9, CardImageLimitCountStageSealAfterAtStageLimitCount, -1, 0, isCommonName, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetTransformCount(
        UserServantEntity_o *this,
        bool includeBaseServant,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x22
  __int64 v8; // x23
  ServantTransformMaster_o *v9; // x21
  int32_t v10; // w22
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  const MethodInfo *v12; // x1
  int size; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E786F5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786F5 = 1;
  }
  UserServantEntity__Init(this, (const MethodInfo *)includeBaseServant);
  if ( this->fields.saveTransformServantEntity )
  {
    if ( includeBaseServant )
      return 2;
    else
      return 1;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v9 = (ServantTransformMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v8;
    *(_QWORD *)&v14.fields.fakeValue = v7;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
    TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                      this->fields.dispLimitCount,
                                                                      0);
    if ( !v9
      || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(v9, v10, (int32_t)TransformServantIds, 0)) == 0 )
    {
      sub_1D0F30C(TransformServantIds, v12);
    }
    size = TransformServantIds->fields._size;
    if ( size >= 1 && !UserServantEntity__HasTransform(this, v12) )
      size = 0;
    return size + includeBaseServant;
  }
}


int32_t UserServantEntity__GetTransformedOldSkillId(
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
  unsigned int v15; // w23
  BalanceConfig_c *v16; // x0

  if ( (byte_4E786F6 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E786F6 = 1;
  }
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, -1, 1, v5);
  v12 = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, questId, 1, v11);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)TransformedSkillIdList, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0) )
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
      if ( v15 >= LODWORD(TransformedSkillIdList->max_length) )
        goto LABEL_18;
      if ( TransformedSkillIdList->m_Items[v15] == skillId )
      {
        if ( !v12 )
LABEL_17:
          sub_1D0F30C(v16, v13);
        if ( v15 >= LODWORD(v12->max_length) )
LABEL_18:
          sub_1D0F314(v16);
        return v12->m_Items[v15];
      }
      ++v15;
    }
  }
  return 0;
}


void UserServantEntity__GetTransformedPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        bool useDatabaseGrandStatus,
        bool isGrand,
        const MethodInfo *method)
{
  UserServantEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    svtId,
    dispLimitCount,
    nowTime,
    useDatabaseGrandStatus,
    isGrand,
    method);
}


int32_t UserServantEntity__GetTransformedSameSlotSkillId(
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
  int max_length; // w8
  unsigned int v15; // w9

  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(this, transformCountBef, -1, -1, 1, -1, 1, v5);
  v11 = UserServantEntity__GetTransformedSkillIdList(this, transformCountAft, -1, -1, 1, -1, 1, v10);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0);
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
    if ( TransformedSkillIdList->m_Items[v15] == skillId )
      break;
    if ( max_length == ++v15 )
      return 0;
  }
  if ( !v11 )
LABEL_13:
    sub_1D0F30C(IsNullOrEmpty, v13);
  if ( v15 >= LODWORD(v11->max_length) )
LABEL_12:
    sub_1D0F314(IsNullOrEmpty);
  return v11->m_Items[v15];
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetTransformedServantId(
        UserServantEntity_o *this,
        int32_t transformCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_T__o *SaveTransformedServantList; // x20
  void *IsValidIndex_object; // x0
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  ServantTransformMaster_o *v13; // x21
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4E786F1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_IsValidIndex_TransformServantInfo___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786F1 = 1;
  }
  if ( !transformCount )
    return UserServantEntity__getSvtId(this, *(const MethodInfo **)&transformCount);
  UserServantEntity__Init(this, *(const MethodInfo **)&transformCount);
  if ( this->fields.saveTransformServantEntity )
  {
    SaveTransformedServantList = (System_Collections_Generic_List_T__o *)UserServantEntity__GetSaveTransformedServantList(
                                                                           this,
                                                                           v5);
    IsValidIndex_object = (void *)BasicHelper__IsValidIndex_object_(
                                    SaveTransformedServantList,
                                    transformCount,
                                    (const MethodInfo_323D858 *)Method_BasicHelper_IsValidIndex_TransformServantInfo___);
    if ( ((unsigned __int8)IsValidIndex_object & 1) != 0 )
    {
      if ( SaveTransformedServantList )
      {
        IsValidIndex_object = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)SaveTransformedServantList,
                                transformCount,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
        if ( IsValidIndex_object )
          return *((_DWORD *)IsValidIndex_object + 4);
      }
LABEL_19:
      sub_1D0F30C(IsValidIndex_object, v8);
    }
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v17, 0);
  v15 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  IsValidIndex_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v18, 0);
  if ( !v13 )
    goto LABEL_19;
  IsValidIndex_object = ServantTransformMaster__GetTransformServantIds(v13, v16, (int32_t)IsValidIndex_object, 0);
  if ( !IsValidIndex_object )
    goto LABEL_19;
  if ( *((_DWORD *)IsValidIndex_object + 6) < transformCount )
    return 0;
  return System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)IsValidIndex_object,
           transformCount - 1,
           (const MethodInfo_393F0FC *)Method_System_Collections_Generic_List_int__get_Item__);
}


bool UserServantEntity__GetTransformedServantInfo(
        UserServantEntity_o *this,
        TransformServantInfo_o **transformInfo,
        int32_t transformCount,
        const MethodInfo *method)
{
  TransformServantInfo_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_TransformServantInfo__o *SaveTransformedServantList; // x0
  __int64 v17; // x1
  Il2CppObject *Master_object; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  ServantTransformMaster_o *v21; // x22
  int32_t v22; // w0
  __int64 v23; // x8
  int32_t v24; // w21
  Il2CppObject *Item; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4E786F2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TransformServantInfo__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&TransformServantInfo_TypeInfo);
    byte_4E786F2 = 1;
  }
  v7 = (TransformServantInfo_o *)sub_1D0F300(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor(v7, 0);
  *transformInfo = v7;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)transformInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  UserServantEntity__Init(this, v14);
  if ( this->fields.saveTransformServantEntity )
  {
    SaveTransformedServantList = UserServantEntity__GetSaveTransformedServantList(this, v15);
    if ( !SaveTransformedServantList )
      goto LABEL_15;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v21 = (ServantTransformMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v20;
    *(_QWORD *)&v33.fields.fakeValue = v19;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v33, 0);
    v23 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
    *(_QWORD *)&v34.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
    v24 = v22;
    *(_QWORD *)&v34.fields.currentCryptoKey = v23;
    SaveTransformedServantList = (System_Collections_Generic_List_TransformServantInfo__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                              v34,
                                                                                              0);
    if ( !v21
      || (SaveTransformedServantList = ServantTransformMaster__GetTransformServantInfo(
                                         v21,
                                         v24,
                                         (int32_t)SaveTransformedServantList,
                                         0)) == 0 )
    {
LABEL_15:
      sub_1D0F30C(SaveTransformedServantList, v17);
    }
  }
  if ( SaveTransformedServantList->fields._size <= transformCount )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)SaveTransformedServantList,
           transformCount,
           (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
  *transformInfo = (TransformServantInfo_o *)Item;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)transformInfo, (int32_t)Item, v26, v27, v28, v29, v30, v31);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *UserServantEntity__GetTransformedSkillIdList(
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

  if ( (byte_4E786F3 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786F3 = 1;
  }
  transformInfo = 0;
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
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v23, 0);
    if ( !v18 )
LABEL_10:
      sub_1D0F30C(TransformedServantInfo, v16);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v18, TransformedServantInfo, 0);
    useDispLimitCount = TransformedServantInfo;
  }
  if ( !transformInfo )
    goto LABEL_10;
  return UserServantEntity__GetSkillIdList(
           this,
           *(_DWORD *)((char *)&word_10 + (_QWORD)transformInfo),
           useDispLimitCount,
           specificLimitCount,
           useUserSvtId,
           beforeQuestClear,
           ignoreRandomSettings,
           v17);
}


void UserServantEntity__GetTransformedSkillInfo(
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


bool UserServantEntity__GetTransformedTreasureDeviceInfo(
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
bool UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
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

  if ( (byte_4E786F4 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786F4 = 1;
  }
  transformInfo = 0;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformCount,
                             *(const MethodInfo **)&beforeClearQuestId);
  if ( useDispLimitCount < 0 )
  {
    v16 = transformInfo;
    v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v18;
    *(_QWORD *)&v21.fields.fakeValue = v17;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v21, 0);
    if ( !v16 )
LABEL_10:
      sub_1D0F30C(TransformedServantInfo, v14);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v16, TransformedServantInfo, 0);
    useDispLimitCount = TransformedServantInfo;
  }
  if ( !transformInfo )
    goto LABEL_10;
  return UserServantEntity__GetTreasureDeviceInfo(
           this,
           tdInfo,
           *(_DWORD *)((char *)&word_10 + (_QWORD)transformInfo),
           beforeClearQuestId,
           useDispLimitCount,
           isLvOne,
           v15);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *UserServantEntity__GetTreasureDeviceCategoryIdList(
        UserServantEntity_o *this,
        bool isLvOne,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t v4; // w21
  bool v7; // w22
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  __int64 v10; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x4
  System_Int32_array *v13; // x23
  int32_t DispLimitCountStage; // w0
  int32_t ServantId; // w0
  const MethodInfo *v16; // x6
  System_Collections_Generic_IEnumerable_T__o *v17; // x1
  long double v18; // q0
  __int64 v19; // x0
  __int64 v20; // x0
  DataVals_array *Master_object; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v23; // x20
  __int64 v24; // x21
  TreasureDvcMaster_o *v25; // x19
  TreasureDvcEntity_o *v26; // x19
  TreasureDvcLvMaster_o *v27; // x22
  TreasureDvcLvEntity_o *v28; // x0
  TreasureDvcLvEntity_o *v29; // x21
  Il2CppObject *v30; // x19
  Il2CppObject *v31; // x23
  System_Collections_Generic_HashSet_int__o *v32; // x22
  const MethodInfo_3801984 **v33; // x27
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v36; // x24
  unsigned __int64 v37; // x29
  unsigned __int64 max_length_low; // x9
  DataVals_o *v39; // x25
  int32_t v40; // w1
  int32_t Param; // w26
  int32_t v42; // w1
  System_Collections_Generic_IEnumerable_T__o *v43; // x1
  System_Collections_Generic_HashSet_int__o *v44; // x20
  const MethodInfo_3801984 **v45; // x22
  int32_t v46; // w26
  int32_t v47; // w27
  void *v48; // x8
  System_Collections_Generic_HashSet_int__o *v49; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  _BOOL8 v52; // x0
  __int64 v53; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v56; // [xsp+0h] [xbp-D0h]
  DataVals_o **v57; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v58; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v59; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v60; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v61; // [xsp+48h] [xbp-88h] BYREF
  TreasureDvcLvEntity_o *v62; // [xsp+50h] [xbp-80h] BYREF
  SkillLvEntity_o *v63; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v4 = dispLimitCount;
  if ( (byte_4E786ED & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E786ED = 1;
  }
  entity = 0;
  tdInfo = 0;
  v62 = 0;
  v63 = 0;
  v61 = 0;
  memset(&v60, 0, sizeof(v60));
  v59 = 0;
  v7 = UserServantEntity__CheckBaseServant(this, -1, *(const MethodInfo **)&dispLimitCount);
  UserServantEntity__Init(this, v8);
  v9 = 496;
  if ( v7 )
    v9 = 488;
  v10 = *(__int64 *)((char *)&this->klass + v9);
  if ( !v10 )
    return 0;
  v13 = 0;
  if ( ServantEntity__get_IsServant(*(ServantEntity_o **)((char *)&this->klass + v9), 0) )
  {
    if ( v4 < 0 )
    {
      DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v12);
      v4 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
    }
    ServantId = UserServantEntity__GetServantId(this, -1, v11);
    if ( !UserServantEntity__GetTreasureDeviceInfo(this, &tdInfo, ServantId, -1, v4, isLvOne, v16) )
      return 0;
    v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1CE513C(v18);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1CE513C(v18);
    Master_object = **(DataVals_array ***)(v20 + 184);
    if ( !Master_object )
      goto LABEL_63;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v24 = *(_QWORD *)(v10 + 16);
    v23 = *(_QWORD *)(v10 + 24);
    v25 = (TreasureDvcMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v66.fields.currentCryptoKey = v24;
    *(_QWORD *)&v66.fields.fakeValue = v23;
    Master_object = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v66, 0);
    if ( !tdInfo || !v25 )
      goto LABEL_63;
    v26 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v25, (int32_t)Master_object, tdInfo->fields.id, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v26 )
      goto LABEL_63;
    if ( !tdInfo )
      goto LABEL_63;
    v27 = (TreasureDvcLvMaster_o *)Master_object;
    if ( !Master_object )
      goto LABEL_63;
    v28 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v26->fields.id, tdInfo->fields.lv, 0);
    if ( !v28 )
      return 0;
    v29 = v28;
    if ( !v28->fields.funcId )
      return 0;
    v56 = v27;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v30 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_FunctionMaster___);
    v31 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v32 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v32,
      (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v32 )
      goto LABEL_63;
    v33 = (const MethodInfo_3801984 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v32,
      (System_Collections_Generic_IEnumerable_T__o *)v29->fields.funcId,
      (const MethodInfo_3801984 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    Master_object = TreasureDvcLvEntity__getDataValsList(v29, 100, 0);
    funcId = v29->fields.funcId;
    if ( !funcId )
      goto LABEL_63;
    m_Items = Master_object->m_Items;
    v36 = Master_object;
    v37 = 0;
    v57 = Master_object->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(funcId->max_length);
      if ( (__int64)v37 >= (int)max_length_low )
      {
        v49 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v49,
          (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v58,
          v32,
          (const MethodInfo_38012F8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v60 = v58;
        while ( 1 )
        {
          v50 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v60,
                  (const MethodInfo_36C9F08 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v50 )
            break;
          if ( !v30 )
            sub_1D0F30C(v50, v51);
          v52 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                  &v59,
                  (int32_t)v60.fields._current,
                  (const MethodInfo_3535BC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v52 )
          {
            if ( !v59 )
              sub_1D0F30C(v52, v53);
            if ( !v49 )
              sub_1D0F30C(v52, v53);
            System_Collections_Generic_HashSet_int___Add(
              v49,
              HIDWORD(v59[4].monitor),
              (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v60,
          (const MethodInfo_36C9F04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v49 )
        {
          count = (unsigned int)v49->fields._count;
          if ( (int)count > 0 )
          {
            v13 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_58727596(
              v49,
              v13,
              (const MethodInfo_3801CAC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return v13;
          }
          return 0;
        }
LABEL_63:
        sub_1D0F30C(Master_object, v17);
      }
      if ( v37 >= max_length_low )
        goto LABEL_76;
      if ( !v30 )
        goto LABEL_63;
      Master_object = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                          &entity,
                                          funcId->m_Items[v37],
                                          (const MethodInfo_3535BC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_63;
        Master_object = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_63;
          if ( v37 >= LODWORD(v36->max_length) )
LABEL_76:
            sub_1D0F314(Master_object);
          if ( !entity )
            goto LABEL_63;
          v39 = m_Items[v37];
          if ( !v39 )
            goto LABEL_63;
          DataVals__SetTempType(m_Items[v37], (FunctionMaster_o *)v30, (int32_t)entity[1].monitor, 0);
          v40 = DataVals__isParam(v39, 28, 0) ? 28 : 3;
          Param = DataVals__GetParam(v39, v40, 0, 0);
          v42 = DataVals__isParam(v39, 29, 0) ? 29 : 4;
          Master_object = (DataVals_array *)DataVals__GetParam(v39, v42, 0, 0);
          if ( !v31 )
            goto LABEL_63;
          Master_object = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                              (SkillLvMaster_o *)v31,
                                              &v63,
                                              Param,
                                              (int32_t)Master_object,
                                              0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( !v63 )
              goto LABEL_63;
            v43 = (System_Collections_Generic_IEnumerable_T__o *)v63->fields.funcId;
            if ( v43 )
              System_Collections_Generic_HashSet_int___UnionWith(v32, v43, *v33);
          }
          Master_object = (DataVals_array *)DataVals__isParam(v39, 96, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (DataVals_array *)DataVals__isParam(v39, 97, 0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v44 = v32;
              v45 = v33;
              v46 = DataVals__GetParam(v39, 96, 0, 0);
              v47 = DataVals__GetParam(v39, 97, 0, 0);
              if ( DataVals__isParam(v39, 99, 0) )
              {
                Master_object = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v56, &v62, v46, v47, 0);
                v33 = v45;
                v32 = v44;
                m_Items = v57;
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  v48 = v62;
                  if ( !v62 )
                    goto LABEL_63;
LABEL_60:
                  v17 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v48 + 4);
                  if ( v17 )
                    System_Collections_Generic_HashSet_int___UnionWith(v32, v17, *v33);
                }
              }
              else
              {
                Master_object = (DataVals_array *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v31, &v61, v46, v47, 0);
                v33 = v45;
                v32 = v44;
                m_Items = v57;
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  v48 = v61;
                  if ( !v61 )
                    goto LABEL_63;
                  goto LABEL_60;
                }
              }
            }
          }
        }
      }
      funcId = v29->fields.funcId;
      ++v37;
      if ( !funcId )
        goto LABEL_63;
    }
  }
  return v13;
}


bool UserServantEntity__GetTreasureDeviceInfo(
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
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  int32_t FriendshipRank; // w24
  long double v24; // q0
  int32_t DispLimitCountStage; // w0
  __int64 v26; // x0
  __int64 v27; // x0
  DataManager_o *Instance; // x0
  bool v29; // w19
  int32_t v30; // w23
  int32_t v31; // w20
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

  if ( (byte_4E7869F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TreasureDvcInfo_TypeInfo);
    byte_4E7869F = 1;
  }
  v13 = (TreasureDvcInfo_o *)sub_1D0F300(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v13, 0);
  *tdInfo = v13;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v20);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v22);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1CE513C(v24);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1CE513C(v24);
  Instance = **(DataManager_o ***)(v27 + 184);
  if ( !Instance )
    goto LABEL_38;
  v50 = tdInfo;
  v29 = isLvOne;
  v30 = dispSvtId;
  v31 = beforeClearQuestId;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v33 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v34 = (ServantTreasureDvcMaster_o *)MasterData_object;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v52, 0);
  lv = this->fields.lv;
  v37 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v39 = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v37;
  *(_QWORD *)&v54.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v54, 0);
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
                0);
  if ( v29 )
  {
    v42 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v43 = v50;
    *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v53.fields.fakeValue = v42;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v51 = v53;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v51, 0);
    UseEntity = ServantTreasureDvcMaster__getUseEntity(v34, v30, v44, 1, 0, 0, 0, -1, 0);
  }
  else
  {
    v43 = v50;
  }
  v45 = UseEntity;
  if ( UseEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, v40, 1, 0);
        v46 = *v43;
        if ( *v43 )
        {
          v47 = Instance;
          v46->fields.id = v45->fields.treasureDeviceId;
          v46->fields.lv = this->fields.treasureDeviceLv1;
          if ( Instance )
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
            if ( !Instance )
              goto LABEL_38;
            Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                          (ServantFlagReleaseMaster_o *)Instance,
                                          v40,
                                          HIDWORD(v47->fields.m_CachedPtr),
                                          0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
              if ( !Instance )
                goto LABEL_38;
              Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                            (ServantFlagMaster_o *)Instance,
                                            v40,
                                            HIDWORD(v47->fields.m_CachedPtr),
                                            0);
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
                                          0);
            v48->fields.isUse = (unsigned __int8)Instance & 1;
            if ( *v43 )
              return (*v43)->fields.isUse;
          }
        }
      }
    }
LABEL_38:
    sub_1D0F30C(Instance, v21);
  }
  return 0;
}


UserServantCommandCardEntity_o *UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  DataManager_o *v6; // x0
  Il2CppObject *MasterData_object; // x0
  __int128 v8; // q0
  UserServantCommandCardMaster_o *v9; // x20
  int64_t v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  const MethodInfo *v14; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4E786E0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E786E0 = 1;
  }
  entity = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1CE513C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1CE513C(v2);
  v6 = **(DataManager_o ***)(v5 + 184);
  if ( !v6 )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        v6,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v9 = (UserServantCommandCardMaster_o *)MasterData_object;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v16, 0);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v6 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v19, 0);
  if ( !v9 )
LABEL_14:
    sub_1D0F30C(v6, method);
  UserServantCommandCardMaster__TryGetEntity(v9, &entity, v13, (int)v6, v14);
  return entity;
}


bool UserServantEntity__HasStatus(UserServantEntity_o *this, int64_t statusFlag, const MethodInfo *method)
{
  bool v3; // zf

  if ( statusFlag <= 128 )
    v3 = (this->fields.status & (unsigned int)statusFlag) == 0;
  else
    v3 = (this->fields.status2 & statusFlag) == 0;
  return !v3;
}


bool UserServantEntity__HasTransform(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x21
  __int64 v5; // x22
  ServantTransformMaster_o *v6; // x20
  int32_t v7; // w0
  __int64 v8; // x8
  int32_t v9; // w19
  ServantTransformEntity_o *v10; // x0
  __int64 v11; // x1
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E78686 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E78686 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v5;
  *(_QWORD *)&v15.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  v8 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v9 = v7;
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  v10 = (ServantTransformEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  if ( !v6 )
    goto LABEL_13;
  if ( !ServantTransformMaster__TryGetEntity(v6, &entity, v9, (int32_t)v10, 0) )
    return 0;
  v10 = entity;
  if ( !entity )
LABEL_13:
    sub_1D0F30C(v10, v11);
  return ServantTransformEntity__IsUnlockTransformed(entity, -1, 0);
}


void UserServantEntity__Init(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x20
  __int64 v5; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  ServantEntity_o *baseServantEntity; // x0
  __int64 v8; // x1
  struct ServantEntity_o **p_baseServantEntity; // x20
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  ServantEntity_TransformInfo_o *v18; // x20
  Il2CppObject *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4E7867E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7867E = 1;
  }
  if ( !this->fields.baseServantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v5;
    *(_QWORD *)&v26.fields.fakeValue = v4;
    baseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v26, 0);
    if ( !v6 )
      goto LABEL_19;
    p_baseServantEntity = &this->fields.baseServantEntity;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v6,
               (int32_t)baseServantEntity,
               (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.baseServantEntity = (struct ServantEntity_o *)Entity;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseServantEntity,
      (int32_t)Entity,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    baseServantEntity = this->fields.baseServantEntity;
    if ( !baseServantEntity )
      goto LABEL_19;
    if ( !ServantEntity__get_IsServantEquip(baseServantEntity, 0) )
    {
      baseServantEntity = *p_baseServantEntity;
      if ( !*p_baseServantEntity )
        goto LABEL_19;
      TransformInfo = ServantEntity__GetTransformInfo(baseServantEntity, 0);
      if ( TransformInfo )
      {
        v18 = TransformInfo;
        if ( TransformInfo->fields.saveTransform >= 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseServantEntity = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( baseServantEntity )
          {
            v19 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)baseServantEntity,
                    v18->fields.saveTransform,
                    (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            this->fields.saveTransformServantEntity = (struct ServantEntity_o *)v19;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&this->fields.saveTransformServantEntity,
              (int32_t)v19,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            return;
          }
LABEL_19:
          sub_1D0F30C(baseServantEntity, v8);
        }
      }
    }
  }
}


bool UserServantEntity__IsAddFriendShipHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( UserServantEntity__IsHeroine(this, method) )
    return LOBYTE(this->fields.status) >> 7;
  else
    LOBYTE(v3) = 0;
  return v3;
}


bool UserServantEntity__IsChocolateSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786E6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool UserServantEntity__IsCombineExp(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786C0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786A9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsCondJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 6) & 1;
}


bool UserServantEntity__IsEventJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 1) & 1;
}


bool UserServantEntity__IsExceedMaxLv(UserServantEntity_o *this, int32_t targetLv, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0;
  UserServantEntity__getTreasureDeviceInfo_44543568(this, &tdMaxLv[1], tdMaxLv, v3);
  return tdMaxLv[0] < tdMaxLv[1] + targetLv;
}


bool UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  __int128 v6; // q1
  int64_t v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+60h] [xbp-40h]

  if ( (byte_4E786E7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserCombineExpMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_14;
  ExchangeSvtCombineExpCampaign = EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                    (EventCampaignMaster_o *)Instance,
                                    0);
  if ( !ExchangeSvtCombineExpCampaign )
    return (char)ExchangeSvtCombineExpCampaign;
  if ( !ExchangeSvtCombineExpCampaign->fields._size )
  {
    LOBYTE(ExchangeSvtCombineExpCampaign) = 0;
    return (char)ExchangeSvtCombineExpCampaign;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0 )
  {
LABEL_14:
    sub_1D0F30C(Instance, v4);
  }
  UserCombineExpMaster__GetUserSvtId(&v11, (UserCombineExpMaster_o *)Instance, 0);
  v12 = v11;
  v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v10, 0);
  v9 = v12;
  LOBYTE(ExchangeSvtCombineExpCampaign) = v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(
                                                  &v9,
                                                  0);
  return (char)ExchangeSvtCombineExpCampaign;
}


bool UserServantEntity__IsExtra(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  Il2CppObject *Entity; // x0
  __int64 v8; // x1
  ServantEntity_o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4E786FD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786FD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v11, 0);
  if ( !v6
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v6,
                   (int32_t)Entity,
                   (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Entity, v8);
  }
  v9 = (ServantEntity_o *)Entity;
  return ServantEntity__IsExtra1((ServantEntity_o *)Entity, 0) || ServantEntity__IsExtra2(v9, 0);
}


bool UserServantEntity__IsExtra1(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  Il2CppObject *Entity; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786FB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786FB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v6
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v6,
                   (int32_t)Entity,
                   (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Entity, v8);
  }
  return ServantEntity__IsExtra1((ServantEntity_o *)Entity, 0);
}


bool UserServantEntity__IsExtra2(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  Il2CppObject *Entity; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786FC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786FC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v6
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v6,
                   (int32_t)Entity,
                   (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Entity, v8);
  }
  return ServantEntity__IsExtra2((ServantEntity_o *)Entity, 0);
}


bool UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786E4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsGrandServant(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ICollection_o *Entitys; // x20
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  System_Func_object__bool__o *v8; // x21

  if ( (byte_4E786FA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
    sub_1D0F0B4(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_UserServantEntity__IsGrandServant_b__238_0__);
    byte_4E786FA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v4);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_3539D60 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  if ( BasicHelper__IsNullOrEmpty(Entitys, 0) )
    return 0;
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)Entitys,
         (const MethodInfo_3238C40 *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
  v8 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_UserServantEntity__IsGrandServant_b__238_0__, 0);
  return System_Linq_Enumerable__Any_object__52817792(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_325EF80 *)Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
}


bool UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786B6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786E5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E786B1 & 1) == 0 )
  {
    sub_1D0F0B4(&TutorialFlag_TypeInfo);
    byte_4E786B1 = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41786532(126, 0);
}


bool UserServantEntity__IsLock(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool UserServantEntity__IsMaterialTd(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786EA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsModifyBattleVoice(UserServantEntity_o *this, int32_t battleVoice, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4E786E1 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786E1 = 1;
  }
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v8, 0) != battleVoice;
}


bool UserServantEntity__IsModifyChoice(UserServantEntity_o *this, bool isChoice, const MethodInfo *method)
{
  return (isChoice ^ (LOBYTE(this->fields.status) >> 4)) & 1;
}


bool UserServantEntity__IsModifyLock(UserServantEntity_o *this, bool isLock, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) ^ isLock) & 1;
}


bool UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int128 v4; // q0
  int64_t userIdNumber; // x20
  __int128 v6; // q0
  int64_t v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  if ( (byte_4E786AF & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&UserServantNewManager_TypeInfo);
    byte_4E786AF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  userIdNumber = v3->static_fields->userIdNumber;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  if ( userIdNumber == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v11, 0) )
  {
    v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v10 = v12;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v10, 0);
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    return UserServantNewManager__IsNew(v7, 0);
  }
  else
  {
    return 0;
  }
}


bool UserServantEntity__IsNoPeriod(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 5) & 1;
}


bool UserServantEntity__IsNotCombineResourceServant(UserServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.status2) >> 3) & 1;
}


bool UserServantEntity__IsNotSaleServant(UserServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.status2) >> 2) & 1;
}


bool UserServantEntity__IsNotSendStorageServant(UserServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.status2) >> 4) & 1;
}


bool UserServantEntity__IsProtectedEventServant(UserServantEntity_o *this, const MethodInfo *method)
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
      sub_1D0F30C(0, v6);
    LOBYTE(EventServant) = EventServantEntity__IsProtectedDuringEvent(v5, 0);
  }
  return (char)EventServant;
}


bool UserServantEntity__IsSameSvtEquipToLimitMaxNum(
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
  int32_t v16; // w2
  UserServantMaster_o *v17; // x0
  int v18; // w21
  UserServantEntity_Fields *p_fields; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x19
  Il2CppObject v24; // q0
  int64_t v25; // x0
  __int128 v26; // q0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  int32_t LimitCount; // w20
  BalanceConfig_c *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4E786EE & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E786EE = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  userStorageServantList = 0;
  memset(&v34, 0, sizeof(v34));
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
  *(_QWORD *)&v36.fields.currentCryptoKey = v7;
  *(_QWORD *)&v36.fields.fakeValue = v6;
  v9 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v36, 0);
  if ( !v9 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (UserServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v12;
  *(_QWORD *)&v37.fields.fakeValue = v11;
  v14 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                  v37,
                                                                  0);
  if ( !v13 )
    goto LABEL_33;
  v16 = (int)v14;
  v17 = v13;
  if ( !isWarehouseServantEquip )
  {
    v18 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v17, &userStorageServantList, v16, 0, 0) )
      return v9 <= v18;
    goto LABEL_18;
  }
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v13, &userStorageServantList, v16, 0) )
  {
LABEL_18:
    v14 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v33,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      *(_OWORD *)&v34.fields._list = *(_OWORD *)&v33.fields.currentCryptoKey;
      v34.fields._current = (Il2CppObject *)v33.fields.fakeValue;
      v18 = 0;
      p_fields = &this->fields;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v34,
                (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v21 )
          break;
        current = v34.fields._current;
        if ( !v34.fields._current )
          sub_1D0F30C(v21, v22);
        v24 = v34.fields._current[2];
        *(Il2CppObject *)&v33.fields.currentCryptoKey = v34.fields._current[1];
        *(Il2CppObject *)&v33.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v32, 0);
        v26 = *(_OWORD *)&p_fields->id.fields.fakeValue;
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&v31.fields.fakeValue = v26;
        if ( v25 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v31, 0) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v27);
          v30 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v30 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v30->static_fields->ServantLimitMax )
            v18 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v28) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v34,
        (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v9 <= v18;
    }
LABEL_33:
    sub_1D0F30C(v14, v15);
  }
  v18 = 0;
  return v9 <= v18;
}


bool UserServantEntity__IsSkillSwitchable(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  const MethodInfo *v6; // x7
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Int32_array *SkillIdList; // x20
  signed __int64 i; // x21
  BalanceConfig_c *ServantSkillAddBySkillId; // x0
  signed __int64 SvtSkillListMax; // x24
  struct System_Int32_array *skillIds; // x8
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E786F9 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786F9 = 1;
  }
  svtSkillAddEnt = 0;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v4;
  *(_QWORD *)&v16.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  SkillIdList = UserServantEntity__GetSkillIdList(this, v5, -1, -1, 1, -1, 0, v6);
  for ( i = 0; ; ++i )
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
    if ( i >= (unsigned __int64)LODWORD(SkillIdList->max_length) )
      sub_1D0F314(ServantSkillAddBySkillId);
    ServantSkillAddBySkillId = (BalanceConfig_c *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                                    this,
                                                    &svtSkillAddEnt,
                                                    SkillIdList->m_Items[i],
                                                    v8);
    if ( ((unsigned __int8)ServantSkillAddBySkillId & 1) != 0 )
    {
      if ( !svtSkillAddEnt || (skillIds = svtSkillAddEnt->fields.skillIds) == 0 )
LABEL_17:
        sub_1D0F30C(ServantSkillAddBySkillId, v7);
      if ( SLODWORD(skillIds->max_length) > 1 )
        break;
    }
  }
  return i < SvtSkillListMax;
}


bool UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786C1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsUniqueIndividualityRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v6; // x22
  __int64 v7; // x23
  int32_t v8; // w21
  int32_t v9; // w22
  const MethodInfo *v10; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v12; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E7869D & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7869D = 1;
  }
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isUniqueIndividuality )
    return 0;
  ServantId = UserServantEntity__GetServantId(this, -1, method);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                   this,
                                   -1,
                                   0,
                                   questRestrictionInfo,
                                   v10);
  v12 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsUniqueIndividuality_44791072(questRestrictionInfo, v8, v9, v12, 0, 0);
}


bool UserServantEntity__IsUniqueIndividualityRestriction_44541948(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w24
  int32_t v15; // w25
  const MethodInfo *v16; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v18; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4E7869E & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7869E = 1;
  }
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isUniqueIndividuality )
    return 0;
  ServantId = UserServantEntity__GetServantId(this, -1, (const MethodInfo *)partyItem);
  v13 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v14 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v13;
  *(_QWORD *)&v20.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v20, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                   this,
                                   -1,
                                   0,
                                   questRestrictionInfo,
                                   v16);
  v18 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsUniqueIndividuality_44792348(
           questRestrictionInfo,
           v14,
           v15,
           v18,
           partyItem,
           num,
           partyIndex,
           0,
           0);
}


bool UserServantEntity__IsUseFriendshipExceedItemHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( UserServantEntity__IsHeroine(this, method) )
    return (BYTE1(this->fields.status2) >> 1) & 1;
  else
    LOBYTE(v3) = 0;
  return v3;
}


bool UserServantEntity__IsUseLevelExceedItemHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( UserServantEntity__IsHeroine(this, method) )
    return BYTE1(this->fields.status2) & 1;
  else
    return 0;
}


bool UserServantEntity__IsWithdrawal(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 2) & 1;
}


void UserServantEntity__SetDispLimitCountAfter(UserServantEntity_o *this, int32_t val, const MethodInfo *method)
{
  this->fields.dispLimitCountAfter = val;
}


void UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4E786B0 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&UserServantNewManager_TypeInfo);
    byte_4E786B0 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v5, 0);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld(v4, 0);
}


bool UserServantEntity__TryGetServantSkillAddBySkillId(
        UserServantEntity_o *this,
        ServantSkillAddEntity_o **svtSkillAddEnt,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x23
  __int64 v9; // x24
  ServantSkillAddMaster_o *v10; // x22
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x4
  int32_t DispLimitCountStage; // w0
  __int64 v15; // x0
  __int64 v16; // x1
  ServantSkillAddEntity_o *EnableEntity; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4E786F7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786F7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantSkillAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v9;
  *(_QWORD *)&v25.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v25, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 1, 0, v13);
  v15 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  if ( !v10 )
    sub_1D0F30C(v15, v16);
  EnableEntity = ServantSkillAddMaster__GetEnableEntity(v10, v11, v12, skillId, 0, v15, 1, 0);
  *svtSkillAddEnt = EnableEntity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)svtSkillAddEnt, (int32_t)EnableEntity, v18, v19, v20, v21, v22, v23);
  return *svtSkillAddEnt != 0;
}


bool UserServantEntity___GetEventServantWithinCreatedAt_b__150_0(
        UserServantEntity_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  int64_t createdAt; // x8

  if ( !x )
    sub_1D0F30C(this, 0);
  createdAt = this->fields.createdAt;
  return x->fields.startedAt <= createdAt && createdAt <= x->fields.endedAt;
}


bool UserServantEntity___IsGrandServant_b__238_0(
        UserServantEntity_o *this,
        UserServantGrandEntity_o *userServantGrandEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x20
  __int128 v5; // q1
  __int128 v6; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_4E78700 & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E78700 = 1;
  }
  if ( !userServantGrandEntity )
    sub_1D0F30C(this, userServantGrandEntity);
  if ( !userServantGrandEntity->fields.userSvtId )
    return 0;
  v5 = *(_OWORD *)&v4->fields.userId.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&v4->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v9, 0) != userServantGrandEntity->fields.userId )
    return 0;
  v6 = *(_OWORD *)&v4->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&v4->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v8, 0) == userServantGrandEntity->fields.userSvtId;
}


int32_t UserServantEntity__checkTreasureDeviceLevelUp(
        UserServantEntity_o *this,
        int32_t targetLv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0;
  UserServantEntity__getTreasureDeviceInfo_44543568(this, &tdMaxLv[1], tdMaxLv, v3);
  if ( tdMaxLv[1] + targetLv >= tdMaxLv[0] )
    return tdMaxLv[0];
  else
    return tdMaxLv[1] + targetLv;
}


int32_t UserServantEntity__getAddTotalExp(UserServantEntity_o *this, int32_t materialId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4E786DE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CombineMaster___)) == 0 )
  {
    sub_1D0F30C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialId,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 2 )
      LODWORD(Entity) = this->fields.exp;
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t UserServantEntity__getAdjustAtk(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.adjustAtk;
}


int32_t UserServantEntity__getAdjustHp(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.adjustHp;
}


void UserServantEntity__getAdjustMaxData(
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

  if ( (byte_4E786BE & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v10),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Instance, v8);
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


SvtUseSkillData_o *UserServantEntity__getAppendSkillInfo(UserServantEntity_o *this, const MethodInfo *method)
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
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *v22; // x0
  __int128 v23; // q1
  UserServantAppendPassiveSkillMaster_o *v24; // x22
  int64_t v25; // x0
  __int64 v26; // x8
  int64_t v27; // x20
  const MethodInfo *v28; // x4
  struct System_Int32_array *unlockNums; // x16
  il2cpp_array_size_t max_length; // x8
  struct System_Int32_array *v31; // x9
  unsigned __int64 max_length_low; // x10
  Il2CppObject *v33; // x12
  struct System_Int32_array *v34; // x14
  unsigned __int64 v35; // x11
  int32_t *v36; // x16
  __int64 v37; // x0
  __int64 v38; // x2
  int32_t *v39; // x3
  unsigned __int64 namespaze_low; // x2
  __int64 v41; // x5
  _DWORD *monitor; // x7
  __int64 v43; // x6
  struct System_Int32_array *v44; // x8
  il2cpp_array_size_t v45; // x10
  struct System_Int32_array *v46; // x9
  unsigned __int64 v47; // x8
  __int64 m_Items; // x11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-60h]
  UserServantAppendPassiveSkillEntity_o *v53; // [xsp+68h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4E78691 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E78691 = 1;
  }
  entity = 0;
  v53 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v5;
  *(_QWORD *)&v55.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v55, 0);
  if ( !v6 )
    goto LABEL_50;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v6, v7, 0);
  v10 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v11 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v10;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v51, 0);
  if ( !v12 )
    goto LABEL_50;
  v7 = DataMasterBase_object__object__long___TryGetEntity(
         v12,
         &entity,
         v7,
         (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_50;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_50;
  v14 = sub_1D0F15C(int___TypeInfo, LODWORD(svtSkillNumsList->max_length));
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v14;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&SkillData->fields.svtSkillLvList, v14, v16, v17, v18, v19, v20, v21);
  v22 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v23 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v24 = (UserServantAppendPassiveSkillMaster_o *)v22;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v50, 0);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v56.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = v25;
  *(_QWORD *)&v56.fields.currentCryptoKey = v26;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v56, 0);
  if ( !v24 )
    goto LABEL_50;
  v7 = UserServantAppendPassiveSkillMaster__TryGetEntity(v24, &v53, v27, v7, v28);
  if ( (v7 & 1) == 0 )
    goto LABEL_42;
  if ( !v53 )
    goto LABEL_50;
  unlockNums = v53->fields.unlockNums;
  if ( !unlockNums )
    goto LABEL_50;
  max_length = unlockNums->max_length;
  if ( !max_length )
  {
LABEL_42:
    v44 = SkillData->fields.svtSkillNumsList;
    if ( v44 )
    {
      v45 = v44->max_length;
      if ( (__int64)(v45 << 32) < 1 )
        return SkillData;
      v46 = *p_svtSkillLvList;
      v47 = 0;
      m_Items = (__int64)(*p_svtSkillLvList)->m_Items;
      while ( v46 )
      {
        if ( v47 >= LODWORD(v46->max_length) )
          goto LABEL_49;
        *(_DWORD *)(m_Items + 4 * v47++) = 0;
        if ( (__int64)v47 >= (int)v45 )
          return SkillData;
      }
    }
LABEL_50:
    sub_1D0F30C(v7, klass);
  }
  v31 = SkillData->fields.svtSkillNumsList;
  if ( !v31 )
    goto LABEL_50;
  max_length_low = LODWORD(v31->max_length);
  if ( (__int64)(max_length_low << 32) >= 1 )
  {
    v33 = entity;
    v34 = *p_svtSkillLvList;
    v35 = 0;
    v36 = unlockNums->m_Items;
    while ( 1 )
    {
      if ( !v34 )
        goto LABEL_50;
      v7 = LODWORD(v34->max_length);
      if ( v35 >= v7 )
        goto LABEL_49;
      v37 = (__int64)v34 + 4 * v35;
      *(_DWORD *)(v37 + 32) = 0;
      v7 = v37 + 32;
      if ( (int)max_length >= 1 )
      {
        if ( v35 >= max_length_low )
          goto LABEL_49;
        klass = (Il2CppClass *)&v31->m_Items[v35];
        v38 = (unsigned int)max_length;
        v39 = v36;
        do
        {
          if ( LODWORD(klass->_1.image) == *v39 )
            *(_DWORD *)v7 = 1;
          --v38;
          ++v39;
        }
        while ( v38 );
      }
      if ( v33 )
      {
        klass = v33[5].klass;
        if ( !klass )
          goto LABEL_50;
        namespaze_low = LODWORD(klass->_1.namespaze);
        if ( (__int64)(namespaze_low << 32) >= 1 )
          break;
      }
LABEL_40:
      if ( (__int64)++v35 >= (int)max_length_low )
        return SkillData;
    }
    v41 = 8;
    while ( v35 < max_length_low && v41 - 8 < namespaze_low )
    {
      if ( v31->m_Items[v35] == *((_DWORD *)&klass->_1.image + v41) )
      {
        monitor = v33[5].monitor;
        if ( !monitor )
          goto LABEL_50;
        if ( v41 - 8 >= (unsigned __int64)(unsigned int)monitor[6] )
          break;
        *(_DWORD *)v7 = monitor[v41];
      }
      v43 = v41 - 7;
      ++v41;
      if ( v43 >= (int)namespaze_low )
        goto LABEL_40;
    }
LABEL_49:
    sub_1D0F314(v7);
  }
  return SkillData;
}


bool UserServantEntity__getBaseEventUpVal(
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
  const MethodInfo *v23; // x2
  int32_t ServantId; // w0
  const MethodInfo *v25; // x2
  unsigned __int64 v26; // x25
  char v27; // w27
  SkillLvEntity_o *Entity; // x0
  int32_t v29; // w0
  signed __int64 i; // x24
  signed __int64 v31; // x8
  SkillInfo_o *v32; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v34; // x0
  const MethodInfo *isGrand; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v37; // [xsp+8h] [xbp-98h]
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4E78695 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E78695 = 1;
  }
  titleList = 0;
  idList = 0;
  skillInfoList = 0;
  explanationList = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v20;
  *(_QWORD *)&v43.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v43, 0);
  if ( !v21
    || (DataMasterBase_object__object__int___GetEntity(
          v21,
          (int32_t)Instance,
          (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_34:
    sub_1D0F30C(Instance, id);
  }
  v22 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  ServantId = UserServantEntity__GetServantId(this, -1, v23);
  UserServantEntity__GetPassiveSkillInfo(this, &idList, &titleList, &explanationList, ServantId, -1, nowTime, 1, 0, v37);
  if ( idList )
  {
    v26 = 0;
    v27 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v26 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_34;
      if ( v26 >= LODWORD(idList->max_length) )
LABEL_35:
        sub_1D0F314(Instance);
      id = (unsigned int)idList->m_Items[v26];
      if ( (int)id >= 1 )
      {
        if ( !v22 )
          goto LABEL_34;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)v22, id, 1, 0);
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
                 0) )
          {
            return v27;
          }
        }
      }
      ++v26;
    }
  }
  v29 = UserServantEntity__GetServantId(this, -1, v25);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v29, -1, -1, 1, finishEvent, -1, isGrand);
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v31 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL);
    v27 = i < v31;
    if ( i >= v31 )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( i >= (unsigned __int64)LODWORD(skillInfoList->max_length) )
      goto LABEL_35;
    v32 = skillInfoList->m_Items[i];
    if ( v32 )
    {
      id = (unsigned int)v32->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v32->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v22 )
            goto LABEL_34;
          v34 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v22, id, lv, 0);
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
                   0) )
            {
              break;
            }
          }
        }
      }
    }
  }
  return v27;
}


bool UserServantEntity__getBaseEventUpVal_44538532(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        int64_t nowTime,
        bool useDatabaseGrandStatus,
        bool isGrand,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x23
  __int64 v17; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  Il2CppObject *Entity; // x23
  Il2CppObject *v20; // x20
  const MethodInfo *v21; // x2
  int32_t ServantId; // w0
  const MethodInfo *v23; // x2
  Il2CppObject *Master_object; // x0
  __int64 v25; // x25
  __int64 v26; // x26
  ServantPassiveSkillMaster_o *v27; // x24
  ServantPassiveSkillEntity_array *ServantSkillList; // x24
  char v29; // w22
  unsigned __int64 v30; // x28
  char v31; // w26
  SkillLvEntity_o *v32; // x25
  int32_t v33; // w7
  il2cpp_array_size_t max_length; // x8
  __int64 v35; // x23
  int32_t v36; // w0
  BalanceConfig_c *v37; // x8
  char v38; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v40; // x9
  __int64 v41; // x21
  unsigned __int64 v42; // x23
  SkillInfo_o *v43; // x8
  int32_t lv; // w2
  const MethodInfo *isGranda; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v47; // [xsp+8h] [xbp-98h]
  Il2CppObject *v48; // [xsp+10h] [xbp-90h]
  int32_t otherValidEventId; // [xsp+1Ch] [xbp-84h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4E78697 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E78697 = 1;
  }
  titleList = 0;
  idList = 0;
  skillInfoList = 0;
  explanationList = 0;
  otherValidEventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v17;
  *(_QWORD *)&v54.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v54, 0);
  if ( !v18 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  ServantId = UserServantEntity__GetServantId(this, -1, v21);
  UserServantEntity__GetPassiveSkillInfo(
    this,
    &idList,
    &titleList,
    &explanationList,
    ServantId,
    -1,
    nowTime,
    useDatabaseGrandStatus,
    isGrand,
    v47);
  if ( idList )
  {
    v48 = Entity;
    if ( otherValidEventIdFilter )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
      v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v27 = (ServantPassiveSkillMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v55.fields.currentCryptoKey = v26;
      *(_QWORD *)&v55.fields.fakeValue = v25;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v55, 0);
      if ( !v27 )
        goto LABEL_59;
      ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(v27, (int32_t)Instance, 0);
    }
    else
    {
      ServantSkillList = 0;
    }
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v30 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_59;
      if ( v30 >= LODWORD(idList->max_length) )
LABEL_60:
        sub_1D0F314(Instance);
      id = (unsigned int)idList->m_Items[v30];
      if ( (int)id >= 1 )
      {
        if ( !v20 )
          goto LABEL_59;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v20, id, 1, 0);
        if ( Instance )
        {
          v32 = (SkillLvEntity_o *)Instance;
          v33 = -1;
          otherValidEventId = -1;
          if ( ServantSkillList )
          {
            max_length = ServantSkillList->max_length;
            if ( (int)max_length < 1 )
            {
              v33 = -1;
            }
            else
            {
              v35 = 0;
              do
              {
                if ( (unsigned int)v35 >= (unsigned int)max_length )
                  goto LABEL_60;
                Instance = (DataManager_o *)ServantSkillList->m_Items[v35];
                if ( !Instance )
                  goto LABEL_59;
                if ( HIDWORD(Instance->fields.m_CancellationTokenSource) == v32->fields.skillId )
                {
                  Instance = (DataManager_o *)ServantPassiveSkillEntity__TryGetOtherValidEventId(
                                                (ServantPassiveSkillEntity_o *)Instance,
                                                &otherValidEventId,
                                                0);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                    break;
                  max_length = ServantSkillList->max_length;
                }
                ++v35;
              }
              while ( (int)v35 < (int)max_length );
              v33 = otherValidEventId;
            }
          }
          if ( SkillLvEntity__getEventUpVal_44271740(v32, eventUpVallInfo, 1, 1, 0, 0, nowTime, v33, 0) )
            v31 = 1;
        }
      }
      ++v30;
    }
    Entity = v48;
    v29 = v31 & 1;
  }
  else
  {
    v29 = 0;
  }
  v36 = UserServantEntity__GetServantId(this, -1, v23);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v36, -1, -1, 1, 0, -1, isGranda);
  if ( !Entity )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0);
  v37 = BalanceConfig_TypeInfo;
  v38 = (char)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  static_fields = v37->static_fields;
  v40 = 40;
  if ( (v38 & 1) != 0 )
    v40 = 56;
  v41 = *(unsigned int *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v40);
  if ( (int)v41 >= 1 )
  {
    v42 = 0;
    while ( skillInfoList )
    {
      if ( v42 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_60;
      v43 = skillInfoList->m_Items[v42];
      if ( v43 )
      {
        id = (unsigned int)v43->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v43->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v20 )
              break;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v20, id, lv, 0);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_44271740(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0,
                                            -1,
                                            0);
              v29 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( v41 == ++v42 )
        return v29 & 1;
    }
LABEL_59:
    sub_1D0F30C(Instance, id);
  }
  return v29 & 1;
}


int32_t UserServantEntity__getCardImageLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        bool ignoreOtherImage,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  int32_t CardImageLimitCountStage; // w0

  CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(
                               this,
                               overrideTransformVal,
                               ignoreRandomSettings,
                               0,
                               method);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CardImageLimitCountStage, 0);
}


int32_t UserServantEntity__getCollectionNo(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786A5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return (int32_t)Instance[13].klass;
}


int32_t UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786AB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CombineQpMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity((CombineQpMaster_o *)Instance, Entity->fields.rarity, this->fields.lv, 0)) == 0 )
  {
LABEL_12:
    sub_1D0F30C(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786B7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0)) == 0 )
  {
LABEL_12:
    sub_1D0F30C(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_1D0F30C(0, v3);
  return SvtExceedEnt->fields.qp;
}


int32_t UserServantEntity__getCombineVoiceLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  const MethodInfo *v7; // x4
  int32_t CardImageLimitCountStage; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786D0 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786D0 = 1;
  }
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(this, -1, 0, 0, v7);
  return LimitCountUtility__ConvertStageToLimitCount(v6, CardImageLimitCountStage, 0, 0);
}


int32_t UserServantEntity__getCommandCardLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t CommandCardLimitCountStage; // w0

  CommandCardLimitCountStage = UserServantEntity__GetCommandCardLimitCountStage(this, -1, ignoreRandomSettings, v3);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CommandCardLimitCountStage, 0);
}


System_Int32_array *UserServantEntity__getCommandCodeIdList(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786DF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = MasterData_object;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v14, 0);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  if ( !v7 )
LABEL_10:
    sub_1D0F30C(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v11,
           (int32_t)Instance,
           v12);
}


int32_t UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786C2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return (int32_t)Instance[9].monitor;
}


int32_t UserServantEntity__getDispLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t DispLimitCountStage; // w0

  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, ignoreRandomSettings, 0, v3);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
}


int32_t UserServantEntity__getDispSelectLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w21
  const MethodInfo *v8; // x4
  int32_t DispLimitCountStage; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4E786C9 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786C9 = 1;
  }
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v11, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, ignoreRandomSettings, 0, v8);
  return LimitCountUtility__ConvertStageToLimitCount(v7, DispLimitCountStage, 0, 0);
}


void UserServantEntity__getEquipSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        bool useUserSvtId,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v7; // x0
  __int64 v8; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v10; // x24
  __int64 v11; // x0
  BalanceConfig_c *v12; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v13; // x27
  SkillInfo_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int128 v21; // q0
  unsigned __int64 v22; // x23
  __int64 i; // x22
  BalanceConfig_c *v24; // x0
  BalanceConfig_c **v25; // x19
  SkillInfo_o *v26; // x24
  __int64 v27; // x25
  __int64 v28; // x26
  int32_t v29; // w0
  __int128 v30; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v32; // x21
  int32_t v33; // w26
  int64_t v34; // x0
  int32_t lv; // w27
  int64_t v36; // x28
  int32_t v37; // w5
  ServantSkillEntity_o *v38; // x26
  int32_t skillNum; // w8
  unsigned int *v40; // x26
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
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

  if ( (byte_4E7868E & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&SkillInfo___TypeInfo);
    sub_1D0F0B4(&SkillInfo_TypeInfo);
    byte_4E7868E = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1CE513C(v4);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1CE513C(v4);
  UseEntity = **(DataManager_o ***)(v8 + 184);
  if ( !UseEntity )
LABEL_38:
    sub_1D0F30C(UseEntity, skillInfoList);
  v10 = &BalanceConfig_TypeInfo;
  MasterData_object = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                                UseEntity,
                                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v11 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
          this,
          this->klass->vtable._6_getSkillLevelList.method);
  v12 = BalanceConfig_TypeInfo;
  v49 = v11;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v14 = (SkillInfo_array *)sub_1D0F15C(SkillInfo___TypeInfo, (unsigned int)v12->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v14;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  if ( useUserSvtId )
  {
    v21 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v56.fields.fakeValue = v21;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v55, -1, 0);
    v56 = v55;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v54 = v56;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v54, 0);
  v22 = 0;
  v48 = v49 + 32;
  for ( i = 8; ; i += 2 )
  {
    v24 = *v10;
    if ( !(*v10)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = *v10;
    }
    if ( (__int64)v22 >= v24->static_fields->SvtEquipSkillListMax )
      break;
    v25 = v10;
    v26 = (SkillInfo_o *)sub_1D0F300(SkillInfo_TypeInfo);
    SkillInfo___ctor(v26, 0);
    v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v57.fields.currentCryptoKey = v28;
    *(_QWORD *)&v57.fields.fakeValue = v27;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v57, 0);
    v30 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v31 = *v13;
    v32 = v13;
    v33 = v29;
    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v55.fields.fakeValue = v30;
    if ( !v31->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v31);
    v53 = v55;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v53, 0);
    lv = this->fields.lv;
    v36 = v34;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
    UseEntity = (DataManager_o *)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_38;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_object,
                                   v33,
                                   (int)v22 + 1,
                                   v36,
                                   lv,
                                   v37,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0);
    if ( UseEntity )
    {
      if ( !v26 )
        goto LABEL_38;
      v38 = (ServantSkillEntity_o *)UseEntity;
      v26->fields.id = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      if ( !v49 )
        goto LABEL_38;
      if ( v22 >= *(unsigned int *)(v49 + 24) )
        goto LABEL_39;
      v26->fields.lv = *(_DWORD *)(v48 + 4 * v22);
      v13 = v32;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v26->fields.charge,
        &v26->fields.title,
        &v26->fields.explanation,
        *(_DWORD *)(v48 + 4 * v22),
        1,
        0);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v38, -1, 0);
      v26->fields.strengthStatus = (int)UseEntity;
      skillNum = v38->fields.skillNum;
      v26->fields.isUse = 1;
      v26->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v26 )
        goto LABEL_38;
      v13 = v32;
      v26->fields.lv = -1;
    }
    v40 = (unsigned int *)*skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_38;
    UseEntity = (DataManager_o *)sub_1D0F1F0(v26, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
    if ( !UseEntity )
    {
      v47 = sub_1D0F330(0);
      sub_1D0F1DC(v47, 0);
    }
    if ( v22 >= v40[6] )
LABEL_39:
      sub_1D0F314(UseEntity);
    *(_QWORD *)&v40[i] = v26;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v40[i], (int32_t)v26, v41, v42, v43, v44, v45, v46);
    ++v22;
    v10 = v25;
  }
}


EventServantEntity_o *UserServantEntity__getEventServant(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786B2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_19:
    sub_1D0F30C(Instance, v4);
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0, 0);
  if ( result )
  {
    v6 = *(_QWORD *)&result->fields.type;
    v7 = result;
    result = 0;
    if ( v6 )
    {
      if ( (int)v6 >= 1 )
      {
        v8 = 0;
        do
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_19;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v8 >= v7->fields.type )
            sub_1D0F314(Instance);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
          if ( !v10 )
            goto LABEL_19;
          result = EventServantMaster__getEntity(v10, v11, (int32_t)Instance, 0);
          if ( result )
            return result;
          ++v8;
        }
        while ( (int)v8 < v7->fields.type );
        return 0;
      }
    }
  }
  return result;
}


EventServantEntity_o *UserServantEntity__getEventServantIgnoreEnd(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  EventServantMaster_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786B3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786B3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (EventServantMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v6 )
    sub_1D0F30C(v7, v8);
  return EventServantMaster__getEntityServantIgnoreEnd(v6, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *UserServantEntity__getEventServant_44549348(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4E786B4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786B4 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0;
  v6 = EventServant;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v6->fields.eventId,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Instance, v8);
  }
  if ( !EventEntity__IsOpen((EventEntity_o *)Instance, is_finishedAt, 0) )
    return 0;
  return v6;
}


bool UserServantEntity__getEventUpVal(
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
  const MethodInfo *v13; // x4
  int32_t DispLimitCountStage; // w0
  int32_t v15; // w0
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4E78694 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E78694 = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v18, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v13);
  v15 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  return UserServantEntity__getBaseEventUpVal(this, v11, v12, v15, setupInfo, eventId, 0, nowTime, v17);
}


bool UserServantEntity__getEventUpVal_44537848(
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
           0,
           v9);
}


bool UserServantEntity__getEventUpVal_44537896(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        int64_t nowTime,
        bool useDatabaseGrandStatus,
        bool isGrand,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  __int64 v16; // x27
  __int64 v17; // x28
  int32_t v18; // w27
  int32_t v19; // w28
  const MethodInfo *v20; // x4
  int32_t DispLimitCountStage; // w0
  int32_t v22; // w29
  EventUpValInfo_o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v33; // x6
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v35; // x25
  char v36; // w26
  int64_t v37; // x2
  EventUpValInfo_o *v38; // x29
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v41; // x6
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4E78696 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&EventUpValInfo_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E78696 = 1;
  }
  entity = 0;
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v17;
  *(_QWORD *)&v45.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v45, 0);
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v20);
  v22 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  v23 = (EventUpValInfo_o *)sub_1D0F300(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v23, setupInfo, v18, v19, v22, 0, 0);
  *eventUpVallInfo = v23;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)eventUpVallInfo, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1D0F30C(Instance, v31);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_44538532(
                               this,
                               eventUpVallInfo,
                               nowTime,
                               useDatabaseGrandStatus,
                               isGrand,
                               otherValidEventIdFilter,
                               v33);
  if ( equipIds )
  {
    max_length = equipIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v35 = 0;
      v36 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v35 >= (unsigned int)max_length )
          sub_1D0F314(Instance);
        v37 = equipIds->m_Items[v35];
        if ( v37 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_23;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                       &entity,
                                       v37,
                                       (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_23;
            v38 = *eventUpVallInfo;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v46.fields.currentCryptoKey = klass;
            *(_QWORD *)&v46.fields.fakeValue = monitor;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v46, 0);
            if ( !v38 )
              goto LABEL_23;
            v38->fields.equipSvtId = (int)Instance;
            Instance = entity;
            if ( !entity )
              goto LABEL_23;
            Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_44538532(
                                         (UserServantEntity_o *)entity,
                                         eventUpVallInfo,
                                         nowTime,
                                         1,
                                         0,
                                         0,
                                         v41);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              v36 = 1;
          }
        }
        LODWORD(max_length) = equipIds->max_length;
        ++v35;
      }
      while ( (__int64)v35 < (int)max_length );
      LOBYTE(Instance) = v36;
    }
  }
  return (unsigned __int8)Instance & 1;
}


int32_t UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
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

  if ( (byte_4E786D6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786D6 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                               this->fields.limitCount,
                               0);
  if ( !v10 )
    goto LABEL_14;
  v12 = ServantLimitMaster__GetEntity(v10, v11, (int32_t)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v12 || !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)ServantExceedMaster__TryGetEntity(
                               (ServantExceedMaster_o *)Instance,
                               &entity,
                               v12->fields.rarity,
                               cnt,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v12->fields.lvMax;
LABEL_14:
    sub_1D0F30C(Instance, v6);
  }
  return UserServantEntity__getLevelMax(this, v6);
}


bool UserServantEntity__getExpInfo(
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

  if ( (byte_4E786A7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
  if ( !v14 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v16) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
                                    0);
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, HIDWORD(Entity[8].klass), this->fields.lv, 0);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1D0F30C(Instance, v10);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v20;
  return 1;
}


int32_t UserServantEntity__getFigureImageLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        bool ignoreOtherImage,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t CardImageLimitCountStage; // w19
  int32_t v6; // w0

  CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(this, -1, 1, 0, v4);
  v6 = CardImageLimitCountStage - LimitCountUtility__IsRewardStage(CardImageLimitCountStage, 0);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v6, 0);
}


System_String_o *UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786DD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786DD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                this->fields.limitCount,
                                0);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0)) == 0 )
  {
LABEL_12:
    sub_1D0F30C(Instance, v4);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0);
}


int32_t UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  bool IsGrandServant; // w20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x22
  __int64 v6; // x23
  ServantExceedMaster_o *v7; // x21
  int32_t v8; // w22
  __int64 Rarity; // x0
  __int64 v10; // x1
  bool v11; // w20
  int32_t FrameType_44061328; // w21
  Il2CppObject *v13; // x22
  const MethodInfo *v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E786DA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786DA = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = (ServantExceedMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  Rarity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
  if ( !v7
    || (v11 = IsGrandServant,
        FrameType_44061328 = ServantExceedMaster__GetFrameType_44061328(
                               v7,
                               v8,
                               Rarity,
                               this->fields.exceedCount,
                               v11,
                               0),
        v13 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLvDetailMaster___),
        Rarity = UserServantEntity__getRarity(this, v14),
        !v13) )
  {
    sub_1D0F30C(Rarity, v10);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v13,
           Rarity,
           this->fields.lv,
           FrameType_44061328,
           v11,
           0);
}


int32_t UserServantEntity__getFriendIconLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t IconLimitCountStage; // w0

  IconLimitCountStage = UserServantEntity__GetIconLimitCountStage(this, -1, ignoreRandomSettings, 0, v3);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(IconLimitCountStage, 0);
}


int32_t UserServantEntity__getFriendshipRank(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786A6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v14, 0);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  if ( !v7 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v7, v11, (int32_t)Instance, v12)) == 0 )
LABEL_11:
    sub_1D0F30C(Instance, v4);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
           0);
}


int32_t UserServantEntity__getIconLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t IconLimitCountStage; // w0

  IconLimitCountStage = UserServantEntity__GetIconLimitCountStage(this, -1, ignoreRandomSettings, 0, v3);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(IconLimitCountStage, 0);
}


int32_t UserServantEntity__getLevelMax(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786AC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                               this->fields.limitCount,
                               0);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_13:
    sub_1D0F30C(Instance, v4);
  }
  v11 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0);
  lvMax = Entity->fields.lvMax;
  if ( v11 )
    lvMax += v11->fields.addLvMax;
  return lvMax;
}


int32_t UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E786AD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return (int32_t)Instance[5].monitor;
}


int32_t UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4E78689 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E78689 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6, 0);
}


int32_t UserServantEntity__getMagnification(
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
  if ( (byte_4E786A4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UserServantEntity_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A4 = 1;
  }
  entity = 0;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_3535BC8 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_1D0F30C(this, svtEntity);
  if ( HIDWORD(entity[1].klass) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0) )
    return v4->fields.treasureDeviceLv1;
  v8 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0) + 1;
}


void UserServantEntity__getNextUseSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **skillNameList,
        int32_t targetLv,
        int32_t targetLimitCnt,
        bool useUserSvtId,
        const MethodInfo *method)
{
  long double v7; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  DataManager_o *UseEntity; // x0
  BalanceConfig_c **v13; // x26
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v15; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v16; // x28
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int128 v31; // q0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x22
  __int64 v33; // x19
  __int64 v34; // x20
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
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  GrandQuestFolderBoardItem_c *v58; // x1
  GrandQuestFolderBoardItem_o *v59; // x0
  __int64 v60; // x27
  __int64 v61; // x28
  int32_t v62; // w0
  __int128 v63; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v64; // x8
  int32_t v65; // w27
  int64_t v66; // x0
  ServantSkillEntity_o *v67; // x0
  __int128 v68; // q0
  ServantSkillEntity_o *v69; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v70; // x0
  int64_t v71; // x0
  System_Int32_array *v72; // x8
  System_String_array *v73; // x27
  int64_t userSvtId; // [xsp+40h] [xbp-130h]
  ServantSkillMaster_o *v79; // [xsp+48h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4E7868F & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&SkillInfo_TypeInfo);
    sub_1D0F0B4(&string___TypeInfo);
    byte_4E7868F = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1CE513C(v7);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1CE513C(v7);
  UseEntity = **(DataManager_o ***)(v11 + 184);
  if ( !UseEntity )
LABEL_48:
    sub_1D0F30C(UseEntity, idList);
  v13 = &BalanceConfig_TypeInfo;
  MasterData_object = DataManager__GetMasterData_object_(
                        UseEntity,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v15 = BalanceConfig_TypeInfo;
  v79 = (ServantSkillMaster_o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v17 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, (unsigned int)v15->static_fields->SvtSkillListMax);
  *idList = v17;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)idList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_String_array *)sub_1D0F15C(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v24;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)skillNameList, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  if ( useUserSvtId )
  {
    v31 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v85.fields.fakeValue = v31;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v84, -1, 0);
    v85 = v84;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v83 = v85;
  p_userId = &this->fields.userId;
  v33 = 8;
  v34 = 32;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v83, 0);
  while ( 1 )
  {
    v35 = *v13;
    v36 = v33 - 8;
    if ( !(*v13)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = *v13;
    }
    if ( (__int64)v36 >= v35->static_fields->SvtSkillListMax )
      break;
    v37 = v13;
    v38 = (SkillInfo_o *)sub_1D0F300(SkillInfo_TypeInfo);
    SkillInfo___ctor(v38, 0);
    v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v86.fields.currentCryptoKey = v40;
    *(_QWORD *)&v86.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v86, 0);
    v42 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v43 = *v16;
    v44 = v16;
    v45 = v41;
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v84.fields.fakeValue = v42;
    if ( !v43->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v43);
    v82 = v84;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v82, 0);
    lv = this->fields.lv;
    v48 = v46;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(this->fields.limitCount, 0);
    UseEntity = (DataManager_o *)v79;
    if ( !v79 )
      goto LABEL_48;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   v79,
                                   v45,
                                   (int)v33 - 7,
                                   v48,
                                   lv,
                                   v49,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0);
    if ( UseEntity )
    {
      v50 = *idList;
      if ( !*idList )
        goto LABEL_48;
      if ( v36 >= LODWORD(v50->max_length) )
        goto LABEL_49;
      v16 = v44;
      *((_DWORD *)&v50->obj.klass + v33) = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      v51 = *skillNameList;
      UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0);
      if ( !v51 )
        goto LABEL_48;
      if ( v36 >= LODWORD(v51->max_length) )
        goto LABEL_49;
      v58 = (GrandQuestFolderBoardItem_c *)UseEntity;
      v59 = (GrandQuestFolderBoardItem_o *)((char *)v51 + v34);
LABEL_32:
      v59->klass = v58;
      sub_1D0F058(v59, (int32_t)v58, v52, v53, v54, v55, v56, v57);
      goto LABEL_33;
    }
    v61 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v60 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v87.fields.currentCryptoKey = v61;
    *(_QWORD *)&v87.fields.fakeValue = v60;
    v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v87, 0);
    v63 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v64 = *v44;
    v16 = v44;
    v65 = v62;
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v84.fields.fakeValue = v63;
    if ( !v64->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v64);
    v81 = v84;
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v81, 0);
    v67 = ServantSkillMaster__getUseEntity(v79, v65, (int)v33 - 7, v66, targetLv, targetLimitCnt, -1, -1, -1, -1, 0, 0);
    if ( v67 )
    {
      v68 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v69 = v67;
      v70 = *v44;
      *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v84.fields.fakeValue = v68;
      if ( !v70->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v70);
      v80 = v84;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v80, 0);
      UseEntity = (DataManager_o *)ServantSkillEntity__isUse(v69, v71, targetLv, targetLimitCnt, -1, -1, -1, -1, 0);
      if ( ((unsigned __int8)UseEntity & 1) != 0 )
      {
        v72 = *idList;
        if ( !*idList )
          goto LABEL_48;
        if ( v36 >= LODWORD(v72->max_length) )
          goto LABEL_49;
        *((_DWORD *)&v72->obj.klass + v33) = v69->fields.skillId;
        v73 = *skillNameList;
        UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName(v69, 0);
        if ( !v73 )
          goto LABEL_48;
        if ( v36 >= LODWORD(v73->max_length) )
LABEL_49:
          sub_1D0F314(UseEntity);
        v58 = (GrandQuestFolderBoardItem_c *)UseEntity;
        v59 = (GrandQuestFolderBoardItem_o *)((char *)v73 + v34);
        goto LABEL_32;
      }
    }
LABEL_33:
    ++v33;
    v34 += 8;
    v13 = v37;
  }
}


void UserServantEntity__getPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        int64_t nowTime,
        bool useDatabaseGrandStatus,
        bool isGrand,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  const MethodInfo *v18; // [xsp+8h] [xbp-58h]

  ServantId = UserServantEntity__GetServantId(this, -1, (const MethodInfo *)titleList);
  UserServantEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    ServantId,
    dispLimitCount,
    nowTime,
    useDatabaseGrandStatus,
    isGrand,
    v18);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantEntity__getQuestRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t rarity,
        int32_t targetType,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  __int64 v10; // x24
  __int64 v11; // x25
  int32_t v12; // w23
  int32_t v13; // w24
  const MethodInfo *v14; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v16; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4E7869A & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7869A = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  ServantId = UserServantEntity__GetServantId(this, -1, *(const MethodInfo **)&rarity);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v18, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v14);
  v16 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsRestriction_44786992(
           questRestrictionInfo,
           v12,
           v13,
           v16,
           rarity,
           this->fields.lv,
           targetType,
           0);
}


int32_t UserServantEntity__getRarity(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786BF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v13, 0);
  v10 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v14.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
  if ( !v8 || (Instance = ServantLimitMaster__GetEntity(v8, v11, (int32_t)Instance, 0)) == 0 )
LABEL_9:
    sub_1D0F30C(Instance, v4);
  return *((_DWORD *)Instance + 6);
}


int32_t UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786A2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786A1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786A3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_9:
    sub_1D0F30C(Instance, v4);
  }
  return Entity->fields.sellRarePri * (_DWORD)Instance;
}


int32_t UserServantEntity__getServantExp(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.exp;
}


int32_t UserServantEntity__getServantLevel(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *UserServantEntity__getSkillIdList(
        UserServantEntity_o *this,
        int32_t dispLimitCount,
        int32_t specificLimitCount,
        bool useUserSvtId,
        int32_t beforeQuestClear,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  const MethodInfo *v12; // x7

  ServantId = UserServantEntity__GetServantId(this, -1, *(const MethodInfo **)&specificLimitCount);
  return UserServantEntity__GetSkillIdList(
           this,
           ServantId,
           dispLimitCount,
           specificLimitCount,
           useUserSvtId,
           beforeQuestClear,
           0,
           v12);
}


// local variable allocation has failed, the output may be wrong!
void UserServantEntity__getSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool useUserSvtId,
        bool finishEvent,
        int32_t skillListNum,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  const MethodInfo *v16; // [xsp+0h] [xbp-50h]

  ServantId = UserServantEntity__GetServantId(this, -1, *(const MethodInfo **)&beforeClearQuestId);
  UserServantEntity__GetSkillInfo(
    this,
    skillInfoList,
    ServantId,
    beforeClearQuestId,
    dispLimitCount,
    useUserSvtId,
    finishEvent,
    skillListNum,
    v16);
}


int32_t UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_4E7868A & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E7868A = 1;
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


System_Int32_array *UserServantEntity__getSkillLevelList(UserServantEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  BalanceConfig_c *v7; // x19
  int32_t skillLv3; // w8
  __int64 v9; // x20
  unsigned __int64 v10; // x23

  if ( (byte_4E7868B & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7868B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1D0F15C(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_1D0F30C(0, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1D0F314(v4);
  }
  skillLv3 = this->fields.skillLv3;
  v9 = 11;
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
      return (System_Int32_array *)v7;
    if ( v10 >= LODWORD(v7->_1.namespaze) )
      goto LABEL_16;
    *((_DWORD *)&v7->_1.image + v9++) = 1;
  }
}


void UserServantEntity__getStatusUpInfo(
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

  if ( (byte_4E786D5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v16, 0);
  v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v17, 0);
  if ( !v12 || (Instance = ServantLimitMaster__GetEntity(v12, v15, (int32_t)Instance, 0)) == 0 )
LABEL_9:
    sub_1D0F30C(Instance, v8);
  *hpUp = *((_DWORD *)Instance + 9);
  *atkUp = *((_DWORD *)Instance + 11);
}


int32_t UserServantEntity__getSvtClassGroupType(UserServantEntity_o *this, int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E786AA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Instance, v5);
  }
  return (int32_t)Instance[3].monitor;
}


int32_t UserServantEntity__getSvtClassId(
        UserServantEntity_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E786A8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
  if ( !v12
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(Instance, v8);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Instance, isPlayableBeastToBase, isGrandServant, 0);
}


ServantExceedEntity_o *UserServantEntity__getSvtExceedEnt(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4E786D9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v6),
        !MasterData_object) )
  {
    sub_1D0F30C(Instance, v4);
  }
  return ServantExceedMaster__GetEntity(
           (ServantExceedMaster_o *)MasterData_object,
           (int32_t)Instance,
           this->fields.exceedCount,
           0);
}


int32_t UserServantEntity__getSvtId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4E78688 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E78688 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantEntity__getTreasureDeviceInfo(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  const MethodInfo *v12; // x6

  ServantId = UserServantEntity__GetServantId(this, -1, *(const MethodInfo **)&beforeClearQuestId);
  return UserServantEntity__GetTreasureDeviceInfo(
           this,
           tdInfo,
           ServantId,
           beforeClearQuestId,
           dispLimitCount,
           isLvOne,
           v12);
}


bool UserServantEntity__getTreasureDeviceInfo_44543568(
        UserServantEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  bool v7; // w21
  const MethodInfo *v8; // x1
  void *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 v12; // x21
  const MethodInfo *v13; // x4
  int treasureDeviceLv1; // w8
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x23
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v18; // w22
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x25
  __int64 v21; // x26
  UserServantCollectionMaster_o *v22; // x24
  const MethodInfo *v23; // x3
  int32_t v24; // w23
  long double v25; // q0
  __int64 v26; // x8
  __int64 v27; // x0
  Il2CppObject *v28; // x0
  __int64 v29; // x8
  ServantTreasureDvcMaster_o *v30; // x21
  int32_t v31; // w0
  __int128 v32; // q1
  int32_t v33; // w24
  int64_t v34; // x0
  __int64 v35; // x8
  int32_t lv; // w25
  int64_t v37; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4E786A0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786A0 = 1;
  }
  *tdMaxLv = 0;
  v7 = UserServantEntity__CheckBaseServant(this, -1, (const MethodInfo *)tdMaxLv);
  UserServantEntity__Init(this, v8);
  v11 = 496;
  if ( v7 )
    v11 = 488;
  v12 = *(__int64 *)((char *)&this->klass + v11);
  if ( !v12 )
    goto LABEL_32;
  if ( !ServantEntity__get_IsServant(*(ServantEntity_o **)((char *)&this->klass + v11), 0) )
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
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  userIdNumber = v15->static_fields->userIdNumber;
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v13);
  v18 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (UserServantCollectionMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v21;
  *(_QWORD *)&v42.fields.fakeValue = v20;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v42, 0);
  if ( !v22 )
    goto LABEL_32;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v22, userIdNumber, (int32_t)Instance, v23);
  if ( !Instance )
    goto LABEL_32;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1CE513C(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1CE513C(v25);
  Instance = **(void ***)(v27 + 184);
  if ( !Instance )
    goto LABEL_32;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v29 = *(_QWORD *)(v12 + 16);
  *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)(v12 + 24);
  v30 = (ServantTreasureDvcMaster_o *)v28;
  *(_QWORD *)&v43.fields.currentCryptoKey = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v43, 0);
  v32 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v33 = v31;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v41;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v40, 0);
  v35 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v44.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v37 = v34;
  *(_QWORD *)&v44.fields.currentCryptoKey = v35;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v44, 0);
  if ( !v30 )
LABEL_32:
    sub_1D0F30C(Instance, v10);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(v30, v33, v37, lv, (int32_t)Instance, v18, v24, -1, 0);
  if ( UseEntity )
  {
    *tdMaxLv = ServantTreasureDvcEntity__getLevelMax(UseEntity, 0);
    LOBYTE(UseEntity) = 1;
  }
  return (char)UseEntity;
}


int32_t UserServantEntity__getTreasureDeviceLv(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceLv1;
}


bool UserServantEntity__getUniqueSvtRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4E7869B & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7869B = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v9, 0);
  return QuestRestrictionInfo__IsUniqueServant_44790496(questRestrictionInfo, v7, 0);
}


bool UserServantEntity__getUniqueSvtRestriction_44541544(
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

  if ( (byte_4E7869C & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7869C = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v15, 0);
  return QuestRestrictionInfo__IsUniqueServant_44790820(questRestrictionInfo, v13, partyItem, num, partyIndex, 0);
}


ServantSkillEntity_array *UserServantEntity__getUseSvtEqSkillInfo(
        UserServantEntity_o *this,
        int32_t targetLv,
        int32_t targetLimitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  ServantSkillEntity_array *ServantSkillList; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  ServantSkillMaster_o *v14; // x23
  int max_length; // w8
  ServantSkillEntity_array *v16; // x23
  unsigned int v17; // w19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x29
  Il2CppClass **v19; // x8
  ServantSkillEntity_o *v20; // x24
  __int128 v21; // q0
  int64_t v22; // x0
  int32_t lv; // w25
  __int64 v24; // x27
  __int64 v25; // x28
  int64_t v26; // x26
  int32_t v27; // w0
  __int128 v28; // q0
  int64_t v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4E786B8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E786B8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1CE513C(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1CE513C(v7);
  ServantSkillList = **(ServantSkillEntity_array ***)(v9 + 184);
  if ( !ServantSkillList )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ServantSkillList,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v13;
  *(_QWORD *)&v46.fields.fakeValue = v12;
  ServantSkillList = (ServantSkillEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                   v46,
                                                   0);
  if ( !v14 )
    goto LABEL_33;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v14, (int32_t)ServantSkillList, 0);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  v16 = ServantSkillList;
  if ( max_length >= 1 )
  {
    v17 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1D0F314(ServantSkillList);
      v19 = &v16->obj.klass + (int)v17;
      v20 = (ServantSkillEntity_o *)v19[4];
      if ( !v20 )
        break;
      ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v19[4], 0, 0);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v21 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v44 = v45;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v44, 0);
        lv = this->fields.lv;
        v25 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v24 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v26 = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v47.fields.currentCryptoKey = v25;
        *(_QWORD *)&v47.fields.fakeValue = v24;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v47, 0);
        ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(v20, v26, lv, v27, -1, -1, -1, -1, 0);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v28 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v45.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v43 = v45;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v43, 0);
          ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                           v20,
                                                           v29,
                                                           targetLv,
                                                           targetLimitCnt,
                                                           -1,
                                                           -1,
                                                           -1,
                                                           -1,
                                                           0);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v20,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v20;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v20, v30, v31, v32, v33, v34, v35);
            }
          }
        }
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_1D0F30C(ServantSkillList, v6);
  }
LABEL_31:
  if ( !v5 )
    goto LABEL_33;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


int64_t UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4E78687 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E78687 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v5, 0);
}


int32_t UserServantEntity__get_AtkBoostValue(UserServantEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustAtk; // w20
  int32_t StatusUpAdjustAtk; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1

  if ( (byte_4E7867C & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E7867C = 1;
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
    sub_1D0F30C(0, v7);
  return UserServantGrandInfo__get_AddedAtk(GrandInfo, 0) + StatusUpAdjustAtk * adjustAtk;
}


ServantEntity_o *UserServantEntity__get_BaseServantEntity(UserServantEntity_o *this, const MethodInfo *method)
{
  UserServantEntity__Init(this, method);
  return this->fields.baseServantEntity;
}


int32_t UserServantEntity__get_DispLimitCountAfter(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispLimitCountAfter;
}


UserServantGrandInfo_o *UserServantEntity__get_GrandInfo(UserServantEntity_o *this, const MethodInfo *method)
{
  struct UserServantGrandInfo_o *grandInfo; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E7867A & 1) == 0 )
  {
    sub_1D0F0B4(&UserServantGrandInfo_TypeInfo);
    byte_4E7867A = 1;
  }
  grandInfo = this->fields.grandInfo;
  if ( !grandInfo )
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    grandInfo = UserServantGrandInfo__Make(this, 0, 0);
    this->fields.grandInfo = grandInfo;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v4, v5, v6, v7, v8, v9);
  }
  return grandInfo;
}


int32_t UserServantEntity__get_HpBoostValue(UserServantEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustHp; // w20
  int32_t StatusUpAdjustHp; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1

  if ( (byte_4E7867B & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E7867B = 1;
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
    sub_1D0F30C(0, v7);
  return UserServantGrandInfo__get_AddedHp(GrandInfo, 0) + StatusUpAdjustHp * adjustHp;
}


bool UserServantEntity__get_IsEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *baseServantEntity; // x0

  UserServantEntity__Init(this, method);
  baseServantEntity = this->fields.baseServantEntity;
  if ( !baseServantEntity )
    sub_1D0F30C(0, v3);
  return ServantEntity__get_IsServantEquip(baseServantEntity, 0);
}


bool UserServantEntity__get_IsSaveTransformServant(UserServantEntity_o *this, const MethodInfo *method)
{
  UserServantEntity__Init(this, method);
  return this->fields.saveTransformServantEntity != 0;
}


ServantEntity_o *UserServantEntity__get_SaveTransformServantEntity(UserServantEntity_o *this, const MethodInfo *method)
{
  UserServantEntity__Init(this, method);
  return this->fields.saveTransformServantEntity;
}


bool UserServantEntity__isAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E786BC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786BC = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Instance, v5);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance[1].monitor);
}


bool UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E786BA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786BA = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Instance, v5);
  }
  return this->fields.adjustHp >= SHIDWORD(Instance[1].klass);
}


bool UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4E786D8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786D8 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v7;
  *(_QWORD *)&v22.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
  if ( !v8 )
    goto LABEL_16;
  v9 = DataMasterBase_object__object__int___GetEntity(
         v8,
         (int32_t)Instance,
         (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v11 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v12 = (UserServantCollectionMaster_o *)v10;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v19, 0);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v23, 0);
  if ( !v12
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v12, v15, (int32_t)Instance, v16),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v9)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_16:
    sub_1D0F30C(Instance, v4);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            (int32_t)v9[6].klass,
            HIDWORD(v9[6].klass) + EntityDefinitely->fields.friendshipExceedCount + 1,
            0);
}


bool UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  __int64 Rarity; // x0
  __int64 v6; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E786D7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E786D7 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v4);
  if ( !Master_object )
    sub_1D0F30C(Rarity, v6);
  return !ServantExceedMaster__TryGetEntity(
            (ServantExceedMaster_o *)Master_object,
            &entity,
            Rarity,
            this->fields.exceedCount + 1,
            0);
}


bool UserServantEntity__isExceeded(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.exceedCount > 0;
}


bool UserServantEntity__isLevelMax(UserServantEntity_o *this, const MethodInfo *method)
{
  return UserServantEntity__getLevelMax(this, method) == this->fields.lv;
}


bool UserServantEntity__isLimitCountMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t LimitCntMax; // w0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4E786AE & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E786AE = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v6 = LimitCntMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  return v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v8, 0);
}


bool UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E786BD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786BD = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Instance, v5);
  }
  return this->fields.adjustAtk == LODWORD(Instance[2].klass);
}


bool UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E786BB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E786BB = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     Rarity,
                     (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_1D0F30C(Instance, v5);
  }
  return this->fields.adjustHp == HIDWORD(Instance[1].monitor);
}


void UserServantEntity__set_BaseServantEntity(
        UserServantEntity_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.baseServantEntity = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseServantEntity,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantEntity__set_SaveTransformServantEntity(
        UserServantEntity_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.saveTransformServantEntity = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.saveTransformServantEntity,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E78701 & 1) == 0 )
  {
    sub_1D0F0B4(&UserServantEntity___c_TypeInfo);
    byte_4E78701 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(UserServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantEntity___c_TypeInfo->static_fields->__9 = (struct UserServantEntity___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)UserServantEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantEntity___c___ctor(UserServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserServantEntity___c___GetBaseFriendPointUpTypeVal_b__94_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}