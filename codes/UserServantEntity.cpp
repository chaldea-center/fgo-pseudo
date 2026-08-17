void UserServantEntity___cctor(const MethodInfo *method)
{
  if ( (byte_59718FE & 1) == 0 )
  {
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_59718FE = 1;
  }
  *UserServantEntity_TypeInfo->static_fields = (struct UserServantEntity_StaticFields)0xFFFFFFFF00000000LL;
}


void UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  UserServantEntity_c *v3; // x0
  const MethodInfo_3F0E560 *v4; // x1

  if ( (byte_597187D & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_long___ctor__);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_597187D = 1;
  }
  v3 = UserServantEntity_TypeInfo;
  if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, method);
    v3 = UserServantEntity_TypeInfo;
  }
  v4 = (const MethodInfo_3F0E560 *)Method_DataEntityBase_long___ctor__;
  this->fields.dispLimitCountAfter = v3->static_fields->InitDispLimitCountAfter;
  DataEntityBase_long____ctor((DataEntityBase_long__o *)this, v4);
}


void UserServantEntity___ctor_50173628(UserServantEntity_o *this, UserServantEntity_o *e, const MethodInfo *method)
{
  UserServantEntity_c *v5; // x0
  const MethodInfo_3F0E560 *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int128 v15; // q0
  __int128 v16; // q0
  int64_t status2; // x8
  __int128 v18; // q0
  struct UserServantGrandInfo_o *grandInfo; // x1

  if ( (byte_597187E & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_long___ctor__);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_597187E = 1;
  }
  v5 = UserServantEntity_TypeInfo;
  if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, e);
    v5 = UserServantEntity_TypeInfo;
  }
  v6 = (const MethodInfo_3F0E560 *)Method_DataEntityBase_long___ctor__;
  this->fields.dispLimitCountAfter = v5->static_fields->InitDispLimitCountAfter;
  DataEntityBase_long____ctor((DataEntityBase_long__o *)this, v6);
  if ( !e )
    sub_2213CDC(v7, v8);
  v15 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v15;
  v16 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v16;
  this->fields.svtId = e->fields.svtId;
  this->fields.limitCount = e->fields.limitCount;
  this->fields.imageLimitCount = e->fields.imageLimitCount;
  this->fields.dispLimitCount = e->fields.dispLimitCount;
  this->fields.commandCardLimitCount = e->fields.commandCardLimitCount;
  this->fields.iconLimitCount = e->fields.iconLimitCount;
  this->fields.portraitLimitCount = e->fields.portraitLimitCount;
  this->fields.battleVoice = e->fields.battleVoice;
  status2 = e->fields.status2;
  *(_OWORD *)&this->fields.lv = *(_OWORD *)&e->fields.lv;
  v18 = *(_OWORD *)&e->fields.adjustAtk;
  this->fields.status2 = status2;
  *(_OWORD *)&this->fields.adjustAtk = v18;
  *(_OWORD *)&this->fields.skillLv3 = *(_OWORD *)&e->fields.skillLv3;
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
  grandInfo = e->fields.grandInfo;
  this->fields.createdAt = e->fields.createdAt;
  this->fields.grandInfo = grandInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandInfo,
    (int32_t)grandInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void UserServantEntity___ctor_50174004(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        bool calcExceedCount,
        const MethodInfo *method)
{
  UserServantEntity_c *v7; // x0
  const MethodInfo_3F0E560 *v8; // x1
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int64_t userId; // x22
  __int64 v12; // x1
  __int128 v13; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v14; // x0
  int32_t maxLimitCount; // w22
  int32_t maxHp; // w10
  int32_t maxAtk; // w9
  __int64 v18; // x1
  int32_t v19; // w21
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // kr00_16
  __int64 v22; // x1
  int32_t v23; // w20
  Il2CppObject *Master_object; // x0
  __int64 v25; // x1
  __int64 v26; // x22
  __int64 v27; // x23
  ServantLimitMaster_o *v28; // x21
  int32_t v29; // w22
  ServantLimitEntity_o *Entity; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_597187F & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_long___ctor__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_597187F = 1;
  }
  v7 = UserServantEntity_TypeInfo;
  if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, e);
    v7 = UserServantEntity_TypeInfo;
  }
  v8 = (const MethodInfo_3F0E560 *)Method_DataEntityBase_long___ctor__;
  this->fields.dispLimitCountAfter = v7->static_fields->InitDispLimitCountAfter;
  DataEntityBase_long____ctor((DataEntityBase_long__o *)this, v8);
  if ( !e )
    goto LABEL_23;
  userId = e->fields.userId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v31, userId, 0);
  v13 = *(_OWORD *)&v31.fields.fakeValue;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v31.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v13;
  this->fields.svtId = e->fields.svtId;
  maxLimitCount = e->fields.maxLimitCount;
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v12);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(maxLimitCount, 0);
  this->fields.limitCount = v32;
  maxHp = e->fields.maxHp;
  maxAtk = e->fields.maxAtk;
  this->fields.lv = e->fields.maxLv;
  this->fields.atk = maxAtk;
  this->fields.hp = maxHp;
  *(_OWORD *)&this->fields.skillLv1 = *(_OWORD *)&e->fields.skillLv1;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v18);
  DispLimitCount = ImageLimitCount__GetDispLimitCount(v19, 0);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(DispLimitCount, 0);
  this->fields.dispLimitCount = v21;
  if ( calcExceedCount )
  {
    v23 = this->fields.lv - UserServantEntity__getLevelMax(this, *(const MethodInfo **)&v21.fields.fakeValue);
    if ( v23 >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v28 = (ServantLimitMaster_o *)Master_object;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
      *(_QWORD *)&v33.fields.currentCryptoKey = v26;
      *(_QWORD *)&v33.fields.fakeValue = v27;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v33, 0);
      v9 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                             this->fields.limitCount,
                             0);
      if ( v28 )
      {
        Entity = ServantLimitMaster__GetEntity(v28, v29, (int32_t)v9, 0);
        v9 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( Entity )
        {
          if ( v9 )
          {
            this->fields.exceedCount = ServantExceedMaster__GetExceedCount(
                                         (ServantExceedMaster_o *)v9,
                                         Entity->fields.rarity,
                                         v23,
                                         0);
            return;
          }
        }
      }
LABEL_23:
      sub_2213CDC(v9, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool UserServantEntity__CheckBaseServant(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = overrideTransformVal;
  if ( (byte_597187B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597187B = 1;
  }
  if ( v3 < 0 )
  {
    v6 = *(_QWORD *)&this->fields.transformVal.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.transformVal.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&overrideTransformVal);
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    v3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0);
  }
  return v3 == 0;
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
  __int64 v14; // x1
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x20
  __int64 v19; // x19
  UserServantEntity_o *v20; // x0
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_5971880 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971880 = 1;
  }
  v7 = UserServantEntity__CheckBaseServant(this, transformVal, *(const MethodInfo **)&transformVal);
  UserServantEntity__Init(this, v8);
  if ( v7 )
  {
    baseServantEntity = this->fields.baseServantEntity;
    if ( !baseServantEntity )
      goto LABEL_18;
  }
  else
  {
    baseServantEntity = this->fields.saveTransformServantEntity;
    if ( !baseServantEntity )
      goto LABEL_18;
  }
  v12 = *(_QWORD *)&baseServantEntity->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v22.fields.currentCryptoKey = v12;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
  if ( !questRestrictionInfo )
LABEL_18:
    sub_2213CDC(v9, v10);
  if ( QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v9, 0) )
    return 0;
  v16 = 344;
  if ( v7 )
  {
    v16 = 216;
    v17 = 208;
  }
  else
  {
    v17 = 336;
  }
  v18 = *(__int64 *)((char *)&this->klass + v17);
  v19 = *(__int64 *)((char *)&this->klass + v16);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v19;
  v20 = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
  return UserServantEntity__CheckEnableRandomLimitCount_50175264(v20, (int32_t)v20, v21);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantEntity__CheckEnableRandomLimitCount_50175264(
        UserServantEntity_o *this,
        int32_t setting,
        const MethodInfo *method)
{
  if ( (byte_5971881 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_5971881 = 1;
  }
  if ( setting )
    return setting == 1;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&setting);
  return OptionManager__GetRandomLimitCountOwn(0);
}


void UserServantEntity__ClearCache(UserServantEntity_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.overwriteStatusMap = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteStatusMap, 0, v2, v3, v4, v5, v6, v7);
  this->fields.grandInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.grandInfo, 0, v9, v10, v11, v12, v13, v14);
}


int64_t UserServantEntity__CreatePrimaryKey(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_5971879 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971879 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
}


int32_t UserServantEntity__GetAdjustAtk(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.adjustAtk;
}


int32_t UserServantEntity__GetAdjustHp(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.adjustHp;
}


int32_t UserServantEntity__GetAdjustLimitByStatusUpMaterial(
        UserServantEntity_o *this,
        UserServantEntity_o *statusUpMaterialEntity,
        bool isHp,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7
  int32_t *v8; // x8
  int32_t result; // w0
  const MethodInfo *v10; // x1
  int32_t addParamMaxAdjust1[2]; // [xsp+0h] [xbp-50h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+10h] [xbp-40h] BYREF
  int32_t atkAdjustLimit[2]; // [xsp+18h] [xbp-38h] BYREF

  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)atkAdjustLimit = 0;
  *(_QWORD *)addParamMaxAdjust1 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  if ( statusUpMaterialEntity )
  {
    UserServantEntity__GetStatusUpAdjustLimit(statusUpMaterialEntity, &atkAdjustLimit[1], atkAdjustLimit, method);
    if ( isHp )
      v8 = &atkAdjustLimit[1];
    else
      v8 = atkAdjustLimit;
    result = *v8;
    if ( *v8 <= 0 )
    {
      if ( UserServantEntity__GetAdjustMaxDetail(
             this,
             &maxAjustAtk[1],
             maxAjustAtk,
             &secondMaxAdjustAtk[1],
             secondMaxAdjustAtk,
             &addParamMaxAdjust1[1],
             addParamMaxAdjust1,
             v7) )
      {
        if ( UserServantEntity__getRarity(statusUpMaterialEntity, v10) >= 4 )
        {
          if ( isHp )
            return secondMaxAdjustAtk[1];
          else
            return secondMaxAdjustAtk[0];
        }
        else if ( isHp )
        {
          return maxAjustAtk[1];
        }
        else
        {
          return maxAjustAtk[0];
        }
      }
      else
      {
        return 0;
      }
    }
  }
  else if ( isHp )
  {
    return UserServantEntity__GetEffectiveAdjustMaxHp(this, 0);
  }
  else
  {
    return UserServantEntity__GetEffectiveAdjustMaxAtk(this, 0);
  }
  return result;
}


bool UserServantEntity__GetAdjustMax(
        UserServantEntity_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        int32_t *addParamMaxAdjust1,
        int32_t *addParamMaxAdjust2,
        const MethodInfo *method)
{
  bool AdjustMaxDetail; // w0

  AdjustMaxDetail = UserServantEntity__GetAdjustMaxDetail(
                      this,
                      maxAjustHp,
                      maxAjustAtk,
                      secondMaxAdjustHp,
                      secondMaxAdjustAtk,
                      addParamMaxAdjust1,
                      addParamMaxAdjust2,
                      method);
  if ( !AdjustMaxDetail )
  {
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    *secondMaxAdjustAtk = 0;
    *addParamMaxAdjust1 = 0;
    *addParamMaxAdjust2 = 0;
  }
  return AdjustMaxDetail;
}


void UserServantEntity__GetAdjustMaxData(
        UserServantEntity_o *this,
        int32_t *hpData,
        int32_t *atkData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  const MethodInfo *v8; // x1
  Il2CppObject *Rarity; // x0
  __int64 v10; // x1
  int32_t adjustHp; // w8
  int32_t klass_high; // w23
  _DWORD *v13; // x22
  BalanceConfig_c *v14; // x0
  int32_t adjustAtk; // w8
  int32_t v16; // w20

  if ( (byte_59718BC & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    byte_59718BC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, hpData);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  Rarity = (Il2CppObject *)UserServantEntity__getRarity(this, v8);
  if ( !Master_object
    || (Rarity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (int32_t)Rarity,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Rarity, v10);
  }
  adjustHp = this->fields.adjustHp;
  klass_high = HIDWORD(Rarity[1].klass);
  v13 = Rarity;
  if ( adjustHp >= klass_high && (klass_high = HIDWORD(Rarity[1].monitor), adjustHp >= klass_high) )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( v13[9] )
      klass_high = v13[9];
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_10;
  }
  else
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
LABEL_10:
      j_il2cpp_runtime_class_init_0(v14, v10);
      v14 = BalanceConfig_TypeInfo;
    }
  }
  *hpData = v14->static_fields->StatusUpAdjustHp * klass_high;
  adjustAtk = this->fields.adjustAtk;
  v16 = v13[6];
  if ( adjustAtk >= v16 && (v16 = v13[8], adjustAtk >= v16) )
  {
    if ( v13[10] )
      v16 = v13[10];
    if ( !*(&v14->_2.cctor_finished + 1) )
      goto LABEL_14;
  }
  else if ( !*(&v14->_2.cctor_finished + 1) )
  {
LABEL_14:
    j_il2cpp_runtime_class_init_0(v14, v10);
    v14 = BalanceConfig_TypeInfo;
  }
  *atkData = v14->static_fields->StatusUpAdjustAtk * v16;
}


bool UserServantEntity__GetAdjustMaxDetail(
        UserServantEntity_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        int32_t *addParamMaxAdjust1,
        int32_t *addParamMaxAdjust2,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x1
  __int64 v19; // x27
  __int64 v20; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x26
  Il2CppObject *v22; // x26
  const MethodInfo *v23; // x1
  int32_t *Entity; // x0
  int32_t v25; // w8
  int32_t v26; // w8
  int32_t v27; // w9
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_59718B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v29.fields.currentCryptoKey = v19;
  *(_QWORD *)&v29.fields.fakeValue = v20;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
  if ( !v21 )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)Instance,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_19;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
  {
LABEL_17:
    v26 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    *secondMaxAdjustAtk = 0;
    *addParamMaxAdjust1 = 0;
    goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v23),
        !v22) )
  {
LABEL_19:
    sub_2213CDC(Instance, v16);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                        (int32_t)Instance,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_17;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  *secondMaxAdjustAtk = Entity[8];
  v25 = Entity[9];
  if ( !v25 )
    v25 = Entity[7];
  *addParamMaxAdjust1 = v25;
  v26 = Entity[10];
  v27 = Entity[8];
  result = 1;
  if ( !v26 )
    v26 = v27;
LABEL_18:
  *addParamMaxAdjust2 = v26;
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
  __int64 v14; // x1
  __int64 v15; // x26
  __int64 v16; // x27
  ServantAppendPassiveSkillMaster_o *v17; // x25
  __int64 v18; // x1
  int32_t v19; // w26
  __int128 v20; // q1
  int v21; // w8
  int64_t v22; // x0
  __int128 v23; // q1
  int64_t v24; // x27
  int64_t userSvtId; // x0
  __int64 v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_59718E7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59718E7 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v30.fields.currentCryptoKey = v15;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v30, 0);
  v20 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v21 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v20;
  if ( !v21 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
  v28 = v29;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v28, 0);
  v23 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v24 = v22;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v23;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v27, 0);
  if ( !v17 )
    sub_2213CDC(userSvtId, v26);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v17,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v19,
    v24,
    userSvtId,
    0);
}


void UserServantEntity__GetAppendPassiveSkillInfo_50215100(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x0
  __int64 v7; // x1
  SkillInfo_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Int32_array *v15; // x8
  unsigned __int64 v16; // x21
  __int64 v17; // x23
  SkillInfo_o *v18; // x20
  System_Int32_array *v19; // x8
  int32_t v20; // w9
  System_Boolean_array *v21; // x8
  unsigned int *v22; // x24
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x0
  System_Int32_array *v31; // [xsp+0h] [xbp-60h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_59718E8 & 1) == 0 )
  {
    sub_2213A60(&SkillInfo___TypeInfo);
    sub_2213A60(&SkillInfo_TypeInfo);
    byte_59718E8 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  v31 = 0;
  releaseStateList = 0;
  UserServantEntity__GetAppendPassiveSkillInfo(this, &idList, &titleList, &explanationList, &releaseStateList, &v31, v3);
  if ( !idList
    || (v8 = (SkillInfo_array *)sub_2213B20(SkillInfo___TypeInfo, *(unsigned int *)((char *)off_18 + (_QWORD)idList)),
        *skillInfoList = v8,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v8, v9, v10, v11, v12, v13, v14),
        (v15 = idList) == 0) )
  {
LABEL_18:
    sub_2213CDC(v6, v7);
  }
  v16 = 0;
  v17 = 8;
  while ( (__int64)v16 < *(int *)((char *)off_18 + (_QWORD)v15) )
  {
    v18 = (SkillInfo_o *)sub_2213CCC(SkillInfo_TypeInfo);
    SkillInfo___ctor(v18, 0);
    if ( !idList )
      goto LABEL_18;
    if ( v16 >= *(unsigned int *)((char *)off_18 + (_QWORD)idList) )
LABEL_20:
      sub_2213CE4(v6);
    if ( !v18 )
      goto LABEL_18;
    v19 = v31;
    v18->fields.id = idList->m_Items[v16];
    if ( !v19 )
      goto LABEL_18;
    if ( v16 >= LODWORD(v19->max_length) )
      goto LABEL_20;
    v20 = v19->m_Items[v16];
    v21 = releaseStateList;
    v18->fields.lv = v20;
    if ( !v21 )
      goto LABEL_18;
    if ( v16 >= LODWORD(v21->max_length) )
      goto LABEL_20;
    v22 = (unsigned int *)*skillInfoList;
    v18->fields.isUse = v21->m_Items[v16];
    if ( !v22 )
      goto LABEL_18;
    v6 = sub_2213BB4(v18, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
    if ( !v6 )
    {
      v30 = sub_2213D00(0, v23);
      sub_2213BA0(v30, 0);
    }
    if ( v16 >= v22[6] )
      goto LABEL_20;
    *(_QWORD *)&v22[2 * v16 + 8] = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22[v17], (int32_t)v18, v24, v25, v26, v27, v28, v29);
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
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v22; // w26
  const MethodInfo *v23; // x2
  int32_t ServantId; // w0
  const MethodInfo *v25; // x2
  unsigned __int64 v26; // x25
  int v27; // w24
  SkillLvEntity_o *v28; // x0
  int32_t v29; // w0
  bool IsServantEquip; // w8
  int v31; // w9
  unsigned int *v32; // x8
  __int64 v33; // x22
  unsigned __int64 v34; // x23
  SkillInfo_o *v35; // x8
  int32_t lv; // w2
  const MethodInfo *isGranda; // [xsp+0h] [xbp-80h]
  const MethodInfo *v39; // [xsp+8h] [xbp-78h]
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-68h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_5971895 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971895 = 1;
  }
  titleList = 0;
  idList = 0;
  skillInfoList = 0;
  explanationList = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v44.fields.currentCryptoKey = v15;
  *(_QWORD *)&v44.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
  if ( !v17 )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v20);
  v22 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  ServantId = UserServantEntity__GetServantId(this, -1, v23);
  UserServantEntity__GetPassiveSkillInfo(
    this,
    &idList,
    &titleList,
    &explanationList,
    ServantId,
    v22,
    0,
    useDatabaseGrandStatus,
    isGrand,
    v39);
  if ( idList )
  {
    v26 = 0;
    v27 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v26 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_41;
      if ( v26 >= LODWORD(idList->max_length) )
LABEL_42:
        sub_2213CE4(Instance);
      id = (unsigned int)idList->m_Items[v26];
      if ( (int)id >= 1 )
      {
        if ( !v19 )
          goto LABEL_41;
        v28 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v19, id, 1, 0);
        if ( v28 )
          v27 |= SkillLvEntity__GetBonusUpVal(v28, eventUpVallInfo, questPhaseEntity, 0);
      }
      ++v26;
    }
  }
  else
  {
    LOBYTE(v27) = 0;
  }
  v29 = UserServantEntity__GetServantId(this, -1, v25);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v29, -1, -1, 1, 0, -1, isGranda);
  if ( !Entity )
LABEL_41:
    sub_2213CDC(Instance, id);
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  v31 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( IsServantEquip )
  {
    if ( !v31 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v32 = (unsigned int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL);
  }
  else
  {
    if ( !v31 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v32 = (unsigned int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL);
  }
  v33 = *v32;
  if ( (int)v33 >= 1 )
  {
    v34 = 0;
    while ( skillInfoList )
    {
      if ( v34 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_42;
      v35 = skillInfoList->m_Items[v34];
      if ( v35 )
      {
        id = (unsigned int)v35->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v35->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v19 )
              goto LABEL_41;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v19, id, lv, 0);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__GetBonusUpVal(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            questPhaseEntity,
                                            0);
              LOBYTE(v27) = (unsigned __int8)Instance | v27;
            }
          }
        }
      }
      if ( v33 == ++v34 )
        return v27 & 1;
    }
    goto LABEL_41;
  }
  return v27 & 1;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o UserServantEntity__GetBaseFriendPointUpTypeVal(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x21
  __int64 v6; // x22
  ServantSkillMaster_o *v7; // x20
  System_Nullable_ValueTuple_FuncList_TYPE__int___o FriendPointUpTypeVal; // x0 OVERLAPPED
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v11; // x1
  UserServantEntity___c_c *v12; // x8
  ServantSkillEntity_array *v13; // x20
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__94_0; // x21
  Il2CppObject *v16; // x22
  struct UserServantEntity___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int max_length; // w8
  unsigned int v25; // w28
  Il2CppClass **v26; // x8
  ServantSkillEntity_o *v27; // x22
  int32_t lv; // w24
  __int64 v29; // x25
  __int64 v30; // x26
  int64_t v31; // x23
  int32_t v32; // w0
  const MethodInfo *v33; // x2
  int32_t SkillLevel; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_597188F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_ServantSkillEntity___);
    sub_2213A60(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_UserServantEntity___c__GetBaseFriendPointUpTypeVal_b__94_0__);
    sub_2213A60(&UserServantEntity___c_TypeInfo);
    byte_597188F = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = (ServantSkillMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v36.fields.currentCryptoKey = v5;
  *(_QWORD *)&v36.fields.fakeValue = v6;
  *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                       v36,
                                                       0);
  if ( !v7 )
    goto LABEL_33;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v7, *(int32_t *)&FriendPointUpTypeVal.fields.hasValue, 0);
  v12 = UserServantEntity___c_TypeInfo;
  v13 = ServantSkillList;
  if ( !*(&UserServantEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo, v11);
    v12 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__94_0 = (System_Comparison_T__o *)static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__94_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__94_0,
      v16,
      Method_UserServantEntity___c__GetBaseFriendPointUpTypeVal_b__94_0__,
      0);
    v17 = UserServantEntity___c_TypeInfo->static_fields;
    v17->__9__94_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__94_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__94_0, (int32_t)_9__94_0, v18, v19, v20, v21, v22, v23);
  }
  System_Array__Sort_object__58432120(
    (System_Object_array *)v13,
    _9__94_0,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !v13 )
    goto LABEL_33;
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_2213CE4(*(_QWORD *)&FriendPointUpTypeVal.fields.hasValue);
      v26 = &v13->obj.klass + (int)v25;
      v27 = (ServantSkillEntity_o *)v26[4];
      if ( !v27 )
        break;
      *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = ServantSkillEntity__isEnable(
                                                           (ServantSkillEntity_o *)v26[4],
                                                           0,
                                                           0);
      if ( FriendPointUpTypeVal.fields.hasValue )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            NetworkManager_TypeInfo,
            *(_QWORD *)&FriendPointUpTypeVal.fields.value.fields.Item2);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(
            NetworkManager_TypeInfo,
            *(_QWORD *)&FriendPointUpTypeVal.fields.value.fields.Item2);
          *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = NetworkManager_TypeInfo;
        }
        lv = this->fields.lv;
        v29 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v30 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&FriendPointUpTypeVal.fields.hasValue + 184LL) + 64LL);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&FriendPointUpTypeVal.fields.value.fields.Item2);
        *(_QWORD *)&v37.fields.currentCryptoKey = v29;
        *(_QWORD *)&v37.fields.fakeValue = v30;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v37, 0);
        *(_QWORD *)&FriendPointUpTypeVal.fields.hasValue = ServantSkillEntity__isUse(
                                                             v27,
                                                             v31,
                                                             lv,
                                                             v32,
                                                             -1,
                                                             -1,
                                                             -1,
                                                             -1,
                                                             0);
        if ( FriendPointUpTypeVal.fields.hasValue )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v27->fields.num - 1, v33);
          FriendPointUpTypeVal = ServantSkillEntity__GetFriendPointUpTypeVal(v27, SkillLevel, 0);
          if ( FriendPointUpTypeVal.fields.hasValue )
            return FriendPointUpTypeVal;
        }
      }
      max_length = v13->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_2213CDC(
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
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v21; // w29
  EventUpValInfo_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  QuestPhaseEntity_o *v31; // x0
  QuestPhaseEntity_o *v32; // x24
  Il2CppObject *MasterData_object; // x25
  const MethodInfo *v34; // x5
  char v35; // w21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int64_t v38; // x2
  Il2CppClass *klass; // x22
  void *monitor; // x23
  EventUpValInfo_o *v41; // x29
  const MethodInfo *v42; // x5
  int32_t v43; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_5971894 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&EventUpValInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971894 = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  entity = 0;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v15;
  *(_QWORD *)&v48.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v19);
  v21 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  v22 = (EventUpValInfo_o *)sub_2213CCC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v22, setupInfo, v17, v18, v21, 0, 0);
  *eventUpVallInfo = v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)eventUpVallInfo, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  v31 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  if ( !v31 )
  {
    v35 = 0;
    return v35 & 1;
  }
  v32 = v31;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_2213CDC(Instance, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__GetBaseBonusUpVal(
                               this,
                               eventUpVallInfo,
                               v32,
                               useDatabaseGrandStatus,
                               isGrand,
                               v34);
  v35 = (char)Instance;
  if ( equipIds )
  {
    max_length = equipIds->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        v38 = equipIds->m_Items[i];
        if ( v38 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_26;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                       &entity,
                                       v38,
                                       (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_26;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            v41 = *eventUpVallInfo;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
            *(_QWORD *)&v49.fields.currentCryptoKey = klass;
            *(_QWORD *)&v49.fields.fakeValue = monitor;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v49, 0);
            if ( !v41 )
              goto LABEL_26;
            v43 = (int)Instance;
            Instance = entity;
            v41->fields.equipSvtId = v43;
            if ( !Instance )
              goto LABEL_26;
            Instance = (Il2CppObject *)UserServantEntity__GetBaseBonusUpVal(
                                         (UserServantEntity_o *)Instance,
                                         eventUpVallInfo,
                                         v32,
                                         1,
                                         0,
                                         v42);
            v35 |= (unsigned __int8)Instance;
          }
        }
        LODWORD(max_length) = equipIds->max_length;
      }
    }
  }
  return v35 & 1;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v12; // w3
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_59718CB & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718CB = 1;
  }
  v9 = *(_QWORD *)&this->fields.imageLimitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.imageLimitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&overrideTransformVal);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.imageLimitCount2, 0);
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
  __int64 v10; // x1
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w23
  int32_t v14; // w24
  const MethodInfo *v15; // x4
  int32_t CardImageLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59718CC & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718CC = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v13 = ServantId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(
                               this,
                               overrideTransformVal,
                               ignoreRandomSettings,
                               questRestrictionInfo,
                               v15);
  return LimitCountUtility__GetSealAfter(v13, v14, CardImageLimitCountStage, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59718CD & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718CD = 1;
  }
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&overrideTransformVal);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
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
  System_Collections_Generic_HashSet_int__o *v6; // x21
  __int64 v7; // x1
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  unsigned __int64 v13; // x25
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

  if ( (byte_59718EA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_59718EA = 1;
  }
  entity = 0;
  memset(&v27, 0, sizeof(v27));
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v6;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_32;
  max_length = enableSkillInfoList->max_length;
  v12 = v9;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_2213CE4(v9);
      v14 = enableSkillInfoList->m_Items[v13];
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
            SkillLvMaster__GetUniqueFuncIdsFromSkill(
              (SkillLvMaster_o *)Master_object,
              &ret,
              id,
              lv,
              includeBeforeOverwrite,
              0);
          }
        }
      }
      LODWORD(max_length) = enableSkillInfoList->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)max_length );
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)ret;
  if ( !ret )
    goto LABEL_32;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v25,
    ret,
    (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v27 = v25;
  v25.fields._set = 0;
  *(_QWORD *)&v25.fields._index = &v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    if ( !v12 )
      sub_2213CDC(v18, v19);
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            v12,
            &entity,
            (int32_t)v27.fields._current,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !entity )
        sub_2213CDC(v20, v21);
      if ( !v17 )
        sub_2213CDC(v20, v21);
      System_Collections_Generic_HashSet_int___Add(
        v17,
        HIDWORD(entity[4].monitor),
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v17 )
LABEL_32:
    sub_2213CDC(v9, v10);
  count = (unsigned int)v17->fields._count;
  if ( (int)count <= 0 )
    return 0;
  v23 = (System_Int32_array *)sub_2213B20(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_69948224(
    v17,
    v23,
    (const MethodInfo_42B5340 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v23;
}


int32_t UserServantEntity__GetCollectionMaxLimitCountSealAfter(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v5; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  int64_t userIdNumber; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  UserServantCollectionEntity_o *Entity; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2
  bool v15; // w22
  const MethodInfo *v16; // x1
  __int64 v17; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_59718C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718C3 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
    v5 = NetworkManager_TypeInfo;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  userIdNumber = v5->static_fields->userIdNumber;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
  *(_QWORD *)&v20.fields.currentCryptoKey = v6;
  *(_QWORD *)&v20.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( !Master_object )
    goto LABEL_20;
  Entity = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)Master_object, userIdNumber, v9, v11);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v15 = UserServantEntity__CheckBaseServant(this, -1, v14);
  UserServantEntity__Init(this, v16);
  v17 = 496;
  if ( v15 )
    v17 = 488;
  v18 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&this->klass + v17);
  if ( !v18 || (v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18[1], 0), !Entity) || !v13 )
LABEL_20:
    sub_2213CDC(v9, v10);
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)v13,
           v9,
           Entity->fields.maxLimitCount,
           0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetCommandCardLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w3
  const MethodInfo *v11; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59718C9 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718C9 = 1;
  }
  v7 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&overrideTransformVal);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.commandCardLimitCount2, 0);
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
  __int64 v8; // x1
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w22
  int32_t v12; // w23
  const MethodInfo *v13; // x3
  int32_t CommandCardLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_59718CA & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718CA = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v11 = ServantId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  CommandCardLimitCountStage = UserServantEntity__GetCommandCardLimitCountStage(
                                 this,
                                 overrideTransformVal,
                                 ignoreRandomSettings,
                                 v13);
  return LimitCountUtility__GetSealAfter(v11, v12, CommandCardLimitCountStage, 0, 0);
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v7; // x2
  __int64 ServantId; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v12; // w0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59718FD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59718FD = 1;
  }
  entity = 0;
  UserServantEntity__Init(this, *(const MethodInfo **)&costumeId);
  if ( !this->fields.saveTransformServantEntity )
    return -1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  ServantId = UserServantEntity__GetServantId(this, 0, v7);
  if ( !Master_object )
    sub_2213CDC(ServantId, v9);
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, &entity, ServantId, costumeId, 0) )
    return 0;
  v12 = UserServantEntity__GetServantId(this, 1, v10);
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, &entity, v12, costumeId, 0) )
    return 1;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v12; // w3
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_59718C5 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718C5 = 1;
  }
  v9 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&overrideTransformVal);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.dispLimitCount2, 0);
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
  __int64 v10; // x1
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w23
  int32_t v14; // w24
  const MethodInfo *v15; // x4
  int32_t DispLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59718C6 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718C6 = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v13 = ServantId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(
                          this,
                          overrideTransformVal,
                          ignoreRandomSettings,
                          questRestrictionInfo,
                          v15);
  return LimitCountUtility__GetSealAfter(v13, v14, DispLimitCountStage, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59718C7 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718C7 = 1;
  }
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&overrideTransformVal);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
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


int32_t UserServantEntity__GetEffectiveAdjustMaxAtk(UserServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  bool AdjustMaxDetail; // w0
  int32_t v4; // w8
  __int64 v6; // [xsp+0h] [xbp-20h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+8h] [xbp-18h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+18h] [xbp-8h] BYREF

  v6 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  AdjustMaxDetail = UserServantEntity__GetAdjustMaxDetail(
                      this,
                      &maxAjustAtk[1],
                      maxAjustAtk,
                      &secondMaxAdjustAtk[1],
                      secondMaxAdjustAtk,
                      (int32_t *)&v6 + 1,
                      (int32_t *)&v6,
                      v2);
  v4 = v6;
  if ( (int)v6 <= secondMaxAdjustAtk[0] )
    v4 = secondMaxAdjustAtk[0];
  if ( AdjustMaxDetail )
    return v4;
  else
    return 0;
}


int32_t UserServantEntity__GetEffectiveAdjustMaxHp(UserServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  bool AdjustMaxDetail; // w0
  int32_t v4; // w8
  __int64 v6; // [xsp+0h] [xbp-20h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+8h] [xbp-18h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+18h] [xbp-8h] BYREF

  v6 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  AdjustMaxDetail = UserServantEntity__GetAdjustMaxDetail(
                      this,
                      &maxAjustAtk[1],
                      maxAjustAtk,
                      &secondMaxAdjustAtk[1],
                      secondMaxAdjustAtk,
                      (int32_t *)&v6 + 1,
                      (int32_t *)&v6,
                      v2);
  v4 = HIDWORD(v6);
  if ( SHIDWORD(v6) <= secondMaxAdjustAtk[1] )
    v4 = secondMaxAdjustAtk[1];
  if ( AdjustMaxDetail )
    return v4;
  else
    return 0;
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  ServantSkillEntity_o *v15; // x22
  ServantSkillEntity_o *v16; // x0
  int32_t skillNum; // w8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  UserServantEntity_o *v22; // x0
  const MethodInfo *v23; // x3

  if ( (byte_59718E2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_2213A60(&SkillInfo_TypeInfo);
    byte_59718E2 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( !skillEntities )
    goto LABEL_18;
  if ( SLODWORD(skillEntities->max_length) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (SkillInfo_o *)sub_2213CCC(SkillInfo_TypeInfo);
      SkillInfo___ctor(v8, 0);
      if ( v7 >= LODWORD(skillEntities->max_length) )
        sub_2213CE4(StrengthStatus);
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
        skillNum = v15->fields.skillNum;
        v8->fields.isUse = 1;
        v8->fields.strengthStatus = StrengthStatus;
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
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v8;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
      }
      if ( (__int64)++v7 >= SLODWORD(skillEntities->max_length) )
        goto LABEL_16;
    }
LABEL_18:
    sub_2213CDC(StrengthStatus, v6);
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v22 = (UserServantEntity_o *)System_Collections_Generic_List_object___ToArray(
                                 v4,
                                 (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
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
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v15; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v17; // x0
  const MethodInfo *v18; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_59718E1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_59718E1 = 1;
  }
  skillInfoList = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v12;
  v8 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( !v13 )
LABEL_17:
    sub_2213CDC(v8, includeBeforeOverwrite);
  result = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   v13,
                                   (int32_t)v8,
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0);
    result = 0;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v15);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v17, skillInfoList, includeBeforeOverwrite, v18);
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
  __int64 v4; // x1
  __int64 v5; // x21
  __int64 v6; // x22
  EventServantMaster_o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x20
  System_Func_object__bool__o *v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59718B1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___);
    sub_2213A60(&System_Func_EventServantEntity__bool__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_UserServantEntity__GetEventServantWithinCreatedAt_b__150_0__);
    byte_59718B1 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = (EventServantMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v13.fields.currentCryptoKey = v5;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)EventServantMaster__GetEntities(v7, v8, 0);
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserServantEntity__GetEventServantWithinCreatedAt_b__150_0__,
    0);
  return (EventServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                   Entities,
                                   (System_Func_TSource__bool__o *)v11,
                                   (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventServantEntity___);
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

  if ( (byte_59718CE & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718CE = 1;
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
    sub_2213CDC(CardImageLimitCountStage, v13);
  v14 = CardImageLimitCountStage;
  v15 = *(_QWORD *)(v11 + 16);
  v16 = *(_QWORD *)(v11 + 24);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v25, 0);
  v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v26.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v19 = v17;
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
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
  __int64 v5; // x1
  bool IsGrandServant; // w21
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x23
  __int64 v10; // x24
  ServantExceedMaster_o *v11; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int32_t FrameTypeFixRarity; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_59718DA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718DA = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, *(const MethodInfo **)&actualRarity);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantExceedMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v12 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  if ( !v11
    || (FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               v11,
                               (int32_t)v12,
                               this->fields.exceedCount,
                               actualRarity,
                               IsGrandServant,
                               0),
        (v12 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
  {
    sub_2213CDC(v12, v13);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v12,
           actualRarity,
           this->fields.lv,
           FrameTypeFixRarity,
           IsGrandServant,
           0);
}


System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *UserServantEntity__GetFriendPointUpTypeVals(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v5; // x20
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v8; // x1
  __int128 v9; // x0
  const MethodInfo_45DF1F0 *v10; // x2
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  int64_t v16; // x2
  const MethodInfo_45DF1F0 *v17; // x2
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v22; // [xsp+0h] [xbp-60h] BYREF
  int v23; // [xsp+8h] [xbp-58h]
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_T__o v25; // 0:x0.16
  System_Nullable_T__o v26; // 0:x0.16

  if ( (byte_597188E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
    sub_2213A60(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_2213A60(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__);
    byte_597188E = 1;
  }
  v23 = 0;
  v22 = 0;
  entity = 0;
  v5 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int_____ctor(
    v5,
    (const MethodInfo_43F966C *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v9 = UserServantEntity__GetBaseFriendPointUpTypeVal(this, v8);
  v22 = v9;
  v23 = DWORD2(v9);
  if ( (_BYTE)v9 )
  {
    v25.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
    *(_QWORD *)&v25.fields.hasValue = &v22;
    *(System_ValueTuple_Int32Enum__int__o *)&v9 = System_Nullable_ValueTuple_Int32Enum__int____get_Value(v25, v10);
    if ( !v5
      || (items = v5->fields._items,
          v12 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__,
          ++v5->fields._version,
          !items) )
    {
LABEL_28:
      sub_2213CDC(v9, *((_QWORD *)&v9 + 1));
    }
    size = v5->fields._size;
    *((_QWORD *)&v9 + 1) = v9;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
        v5,
        *(System_ValueTuple_Int32Enum__int__o *)((char *)&v9 + 8),
        *(const MethodInfo_43F9EF8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      if ( !equipIds )
        return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v5;
      goto LABEL_13;
    }
    v5->fields._size = size + 1;
    items->m_Items[size] = (Il2CppObject *)v9;
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
        sub_2213CE4(v9);
      v16 = equipIds->m_Items[i];
      if ( v16 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_28;
        *(_QWORD *)&v9 = DataMasterBase_object__object__long___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           &entity,
                           v16,
                           (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)&v9 = entity;
          if ( !entity )
            goto LABEL_28;
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v9 = UserServantEntity__GetBaseFriendPointUpTypeVal(
                                                                        (UserServantEntity_o *)entity,
                                                                        *((const MethodInfo **)&v9 + 1));
          v22 = v9;
          v23 = DWORD2(v9);
          if ( (_BYTE)v9 )
          {
            v26.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
            *(_QWORD *)&v26.fields.hasValue = &v22;
            *(System_ValueTuple_Int32Enum__int__o *)&v9 = System_Nullable_ValueTuple_Int32Enum__int____get_Value(
                                                            v26,
                                                            v17);
            if ( !v5 )
              goto LABEL_28;
            v18 = v5->fields._items;
            v19 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
            ++v5->fields._version;
            if ( !v18 )
              goto LABEL_28;
            v20 = v5->fields._size;
            *((_QWORD *)&v9 + 1) = v9;
            if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
            {
              System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
                v5,
                *(System_ValueTuple_Int32Enum__int__o *)((char *)&v9 + 8),
                *(const MethodInfo_43F9EF8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = v20 + 1;
              v18->m_Items[v20] = (Il2CppObject *)v9;
            }
          }
        }
      }
      LODWORD(max_length) = equipIds->max_length;
    }
  }
  return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v5;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v12; // w3
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_59718D0 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718D0 = 1;
  }
  v9 = *(_QWORD *)&this->fields.iconLimitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.iconLimitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&overrideTransformVal);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.iconLimitCount2, 0);
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
  __int64 v10; // x1
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w23
  int32_t v14; // w24
  const MethodInfo *v15; // x4
  int32_t IconLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59718D1 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718D1 = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v13 = ServantId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  IconLimitCountStage = UserServantEntity__GetIconLimitCountStage(
                          this,
                          overrideTransformVal,
                          ignoreRandomSettings,
                          questRestrictionInfo,
                          v15);
  return LimitCountUtility__GetSealAfter(v13, v14, IconLimitCountStage, 1, 0);
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
  __int64 v24; // x1
  int32_t v25; // w21
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x27
  __int64 v29; // x28
  int32_t v30; // w27
  int32_t v31; // w0
  int32_t v32; // w0
  int32_t v33; // w8
  RandomLimitCountManager_c *v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  __int64 v37; // x23
  __int64 v38; // x24
  UserServantEntity_o *v39; // x0
  const MethodInfo *v40; // x2
  __int64 v41; // x8
  __int64 v42; // x9
  __int64 v43; // x22
  __int64 v44; // x23
  int32_t v45; // w0
  __int64 v46; // x1
  __int128 v47; // q0
  __int128 v48; // q1
  int64_t v49; // x22
  int32_t v50; // w23
  int32_t v51; // w0
  __int64 v52; // x8
  int32_t lv; // w24
  int32_t v54; // w20
  int32_t v55; // w0
  __int64 v56; // x1
  int32_t v57; // w25
  __int64 v58; // x20
  __int64 v59; // x21
  int32_t v60; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+20h] [xbp-90h]
  int32_t afterLimitCountStage; // [xsp+4Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o limitCount; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_59718C4 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RandomLimitCountManager_TypeInfo);
    byte_59718C4 = 1;
  }
  afterLimitCountStage = 0;
  if ( UserServantEntity__get_IsEquip(this, *(const MethodInfo **)&overrideTransformVal) )
    return 1;
  v17 = UserServantEntity__CheckBaseServant(this, overrideTransformVal, v15);
  UserServantEntity__Init(this, v18);
  if ( !v17 )
  {
    saveTransformServantEntity = this->fields.saveTransformServantEntity;
    if ( saveTransformServantEntity )
      goto LABEL_7;
LABEL_49:
    sub_2213CDC(v19, v20);
  }
  saveTransformServantEntity = this->fields.baseServantEntity;
  if ( !saveTransformServantEntity )
    goto LABEL_49;
LABEL_7:
  v22 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v64.fields.currentCryptoKey = v22;
  *(_QWORD *)&v64.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v64, 0);
  afterLimitCountStage = 1;
  if ( !questRestrictionInfo )
    goto LABEL_17;
  v26 = 280;
  if ( v17 )
  {
    v26 = 136;
    v27 = 128;
  }
  else
  {
    v27 = 272;
  }
  v28 = *(__int64 *)((char *)&this->klass + v27);
  v29 = *(__int64 *)((char *)&this->klass + v26);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v65.fields.currentCryptoKey = v28;
  *(_QWORD *)&v65.fields.fakeValue = v29;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v65, 0);
  limitCount = this->fields.limitCount;
  afterLimitCountStage = v30;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(limitCount, 0);
  v32 = LimitCountUtility__GetLimitCountStageCheckZero(v31, v30, 0, 0);
  if ( QuestRestrictionInfo__TryConvertOverwriteImageLimitCount(
         questRestrictionInfo,
         v25,
         v32,
         &afterLimitCountStage,
         0) )
  {
    return afterLimitCountStage;
  }
LABEL_17:
  if ( v17 )
    v33 = baseStage;
  else
    v33 = transformStage;
  afterLimitCountStage = v33;
  if ( ignoreRandomSettings )
    goto LABEL_44;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v24);
  if ( !byte_596C1A0 )
  {
    sub_2213A60(&RandomLimitCountManager_TypeInfo);
    byte_596C1A0 = 1;
  }
  v34 = RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v24);
    v34 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v34->static_fields->enableRandomLimitCount )
    goto LABEL_44;
  v35 = 344;
  if ( v17 )
  {
    v35 = 216;
    v36 = 208;
  }
  else
  {
    v36 = 336;
  }
  v37 = *(__int64 *)((char *)&this->klass + v36);
  v38 = *(__int64 *)((char *)&this->klass + v35);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v67.fields.currentCryptoKey = v37;
  *(_QWORD *)&v67.fields.fakeValue = v38;
  v39 = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
  if ( UserServantEntity__CheckEnableRandomLimitCount_50175264(v39, (int32_t)v39, v40) )
  {
    v41 = 280;
    if ( v17 )
    {
      v41 = 136;
      v42 = 128;
    }
    else
    {
      v42 = 272;
    }
    v43 = *(__int64 *)((char *)&this->klass + v42);
    v44 = *(__int64 *)((char *)&this->klass + v41);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    *(_QWORD *)&v68.fields.currentCryptoKey = v43;
    *(_QWORD *)&v68.fields.fakeValue = v44;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
    v47 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v48 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    afterLimitCountStage = v45;
    *(_OWORD *)&v62.fields.currentCryptoKey = v47;
    *(_OWORD *)&v62.fields.fakeValue = v48;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
    v61 = v62;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v61, 0);
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.svtId, 0);
    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
    v52 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v69.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    lv = this->fields.lv;
    v54 = v51;
    *(_QWORD *)&v69.fields.currentCryptoKey = v52;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0);
    v57 = LimitCountUtility__GetLimitCountStageCheckZero(v55, afterLimitCountStage, 0, 0);
    if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v56);
    return RandomLimitCountManager__ChoiceLimitCount(v49, v50, v25, v54, lv, v57, hasRewardStage, 0);
  }
  else
  {
LABEL_44:
    v59 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v58 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    *(_QWORD *)&v70.fields.currentCryptoKey = v59;
    *(_QWORD *)&v70.fields.fakeValue = v58;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v70, 0);
    return LimitCountUtility__GetLimitCountStageCheckZero(v60, afterLimitCountStage, hasRewardStage, 0);
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
  return UserServantEntity__GetOverwriteStatus_50203912(this, DispLimitCountStageSealAfterAtStageLimitCount, v6);
}


ServantOverwriteStatus_o *UserServantEntity__GetOverwriteStatus_50203912(
        UserServantEntity_o *this,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *overwriteStatusMap; // x0
  System_Collections_Generic_Dictionary_int__object__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  ServantOverwriteStatus_o *v16; // x21
  const MethodInfo *v17; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_59718C2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantOverwriteStatus_TypeInfo);
    byte_59718C2 = 1;
  }
  overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.overwriteStatusMap;
  if ( !overwriteStatusMap )
  {
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v6,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    this->fields.overwriteStatusMap = (struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *)v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteStatusMap,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.overwriteStatusMap;
    if ( !overwriteStatusMap )
      goto LABEL_17;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         overwriteStatusMap,
         stageLimitCount,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__) )
  {
    goto LABEL_15;
  }
  if ( UserServantEntity__CheckBaseServant(this, -1, v14) )
  {
    v16 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor(v16, this, stageLimitCount, 0);
  }
  else
  {
    UserServantEntity__Init(this, v15);
    saveTransformServantEntity = this->fields.saveTransformServantEntity;
    if ( !saveTransformServantEntity )
      goto LABEL_17;
    v19 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
    v20 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    *(_QWORD *)&v23.fields.currentCryptoKey = v19;
    *(_QWORD *)&v23.fields.fakeValue = v20;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
    v16 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_40471092(v16, this, v21, stageLimitCount, 0);
  }
  overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)UserServantEntity__get_GrandInfo(
                                                                                 this,
                                                                                 v17);
  if ( !v16
    || (ServantOverwriteStatus__ApplyGrandServantEffect(v16, (UserServantGrandInfo_o *)overwriteStatusMap, 0),
        (overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.overwriteStatusMap) == 0) )
  {
LABEL_17:
    sub_2213CDC(overwriteStatusMap, v13);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    overwriteStatusMap,
    stageLimitCount,
    (Il2CppObject *)v16,
    (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
LABEL_15:
  overwriteStatusMap = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.overwriteStatusMap;
  if ( !overwriteStatusMap )
    goto LABEL_17;
  return (ServantOverwriteStatus_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       overwriteStatusMap,
                                       stageLimitCount,
                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
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
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x27
  __int128 v20; // q1
  int v21; // w8
  int64_t v22; // x0
  __int64 v23; // x1
  __int64 v24; // x23
  __int64 v25; // x24
  int64_t v26; // x22
  const MethodInfo *v27; // x3
  int64_t v28; // x19
  const MethodInfo *v30; // x4
  int32_t friendshipRank; // w27
  long double v32; // q0
  int32_t DispLimitCountStage; // w0
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x26
  __int128 v38; // q1
  int v39; // w8
  int64_t v40; // x0
  __int64 v41; // x1
  int32_t lv; // w29
  int64_t v43; // x24
  __int64 v44; // x22
  __int64 v45; // x23
  Il2CppObject *v46; // x22
  MissionNaviTransitionBoardItem_o *v47; // x29
  __int64 v48; // x1
  bool v49; // w19
  BalanceConfig_c *v50; // x0
  System_Int32_array *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_array *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x25
  Il2CppObject *v73; // x26
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  int v80; // w8
  void *v81; // x27
  int i; // w20
  __int64 v83; // x8
  int32_t v84; // w29
  NetworkManager_c *v85; // x0
  int64_t userIdNumber; // x22
  __int64 v87; // x23
  __int64 v88; // x28
  int32_t v89; // w4
  const MethodInfo *v90; // x5
  int32_t v91; // w2
  __int64 v92; // x22
  __int64 v93; // x8
  unsigned __int64 v94; // x23
  System_Int32_array *v95; // x8
  int max_length; // w9
  unsigned int v97; // w28
  char *v98; // x11
  _DWORD *v99; // x11
  int v100; // t1
  System_String_array *v101; // x8
  System_String_array *v102; // x9
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  UserEventServantPointMaster_o *Master_object; // [xsp+48h] [xbp-F8h]
  System_String_array **explanationLista; // [xsp+58h] [xbp-E8h]
  UserServantEntity_o *v118; // [xsp+60h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+B0h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16

  if ( (byte_597188C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    byte_597188C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v20 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v21 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v20;
  if ( !v21 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
  v121 = v122;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v121, 0);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v118 = this;
  v26 = v22;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
  *(_QWORD *)&v124.fields.currentCryptoKey = v24;
  *(_QWORD *)&v124.fields.fakeValue = v25;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v124, 0);
  if ( !MasterData_object )
    goto LABEL_81;
  v28 = nowTime;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)MasterData_object,
               v26,
               (int32_t)Instance,
               v27);
  if ( !Instance )
    goto LABEL_81;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v17);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(v118, -1, 0, 0, v30);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  if ( useDatabaseGrandStatus )
    isGrand = UserServantEntity__IsGrandServant(v118, v17);
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v34 + 309) & 1) == 0 )
    v34 = sub_224B908(v32);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
    v35 = sub_224B908(v32);
  Instance = **(void ***)(v35 + 184);
  if ( !Instance )
    goto LABEL_81;
  explanationLista = explanationList;
  v37 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v38 = *(_OWORD *)&v118->fields.userId.fields.fakeValue;
  v39 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v118->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v38;
  if ( !v39 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
  v120 = v122;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v120, 0);
  lv = v118->fields.lv;
  v43 = v40;
  v44 = *(_QWORD *)&v118->fields.limitCount.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v118->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
  *(_QWORD *)&v125.fields.currentCryptoKey = v44;
  *(_QWORD *)&v125.fields.fakeValue = v45;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v125, 0);
  if ( !v37 )
    goto LABEL_81;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    (ServantPassiveSkillMaster_o *)v37,
    idList,
    titleList,
    explanationLista,
    dispSvtId,
    v43,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    v28,
    isGrand,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v46 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v118->fields.svtId, 0);
  if ( !v46 )
    goto LABEL_81;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v46,
               (int32_t)Instance,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v47 = (MissionNaviTransitionBoardItem_o *)explanationLista;
  if ( !Instance )
    goto LABEL_81;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
    return;
  v49 = *idList == 0;
  if ( !*idList )
  {
    v50 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v48);
      v50 = BalanceConfig_TypeInfo;
    }
    v51 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v50->static_fields->SvtPassiveSkillListMax);
    *idList = v51;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v51, v52, v53, v54, v55, v56, v57);
    v58 = (System_String_array *)sub_2213B20(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v58;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v58, v59, v60, v61, v62, v63, v64);
    v65 = sub_2213B20(string___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationLista = (System_String_array *)v65;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationLista, v65, v66, v67, v68, v69, v70, v71);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v72 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v73 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0)) == 0 )
LABEL_81:
    sub_2213CDC(Instance, v17);
  v80 = *((_DWORD *)Instance + 6);
  v81 = Instance;
  if ( v80 >= 1 )
  {
    for ( i = 0; i < v80; ++i )
    {
      if ( i >= (unsigned int)v80 )
        goto LABEL_80;
      v83 = *((_QWORD *)v81 + i + 4);
      if ( !v83 )
        goto LABEL_81;
      v84 = *(_DWORD *)(v83 + 16);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v85 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
        v85 = NetworkManager_TypeInfo;
      }
      userIdNumber = v85->static_fields->userIdNumber;
      v87 = *(_QWORD *)&v118->fields.svtId.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v118->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
      *(_QWORD *)&v126.fields.currentCryptoKey = v87;
      *(_QWORD *)&v126.fields.fakeValue = v88;
      v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v126, 0);
      Instance = Master_object;
      if ( !Master_object )
        goto LABEL_81;
      Instance = (void *)UserEventServantPointMaster__TryGetEntity(Master_object, &entity, userIdNumber, v84, v89, v90);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_81;
        Instance = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, v17);
        v91 = (int)Instance;
      }
      else
      {
        v91 = 0;
      }
      if ( !v72 )
        goto LABEL_81;
      Instance = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)v72,
                   v84,
                   v91,
                   dispSvtId,
                   0);
      if ( Instance )
      {
        v92 = *((_QWORD *)Instance + 4);
        v47 = (MissionNaviTransitionBoardItem_o *)explanationLista;
        if ( !v92 )
          goto LABEL_81;
        v93 = *(_QWORD *)(v92 + 24);
        if ( (int)v93 >= 1 )
        {
          v94 = 0;
          while ( v94 < (unsigned int)v93 )
          {
            v95 = *idList;
            if ( !*idList )
              goto LABEL_81;
            max_length = v95->max_length;
            if ( max_length >= 1 )
            {
              v97 = 0;
              v17 = (const MethodInfo *)*(unsigned int *)(v92 + 4 * v94 + 32);
              while ( 1 )
              {
                if ( max_length == v97 )
                  goto LABEL_80;
                v98 = (char *)v95 + 4 * (int)v97;
                v100 = *((_DWORD *)v98 + 8);
                v99 = v98 + 32;
                if ( !v100 )
                  break;
                if ( (max_length & ~(max_length >> 31)) == ++v97 )
                  goto LABEL_73;
              }
              *v99 = (_DWORD)v17;
              if ( !v73 )
                goto LABEL_81;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v73,
                           (int32_t)v17,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v101 = *titleList;
              if ( !*titleList )
                goto LABEL_81;
              v102 = *explanationLista;
              if ( !*explanationLista || !Instance )
                goto LABEL_81;
              if ( v97 >= LODWORD(v101->max_length) || v97 >= LODWORD(v102->max_length) )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v101->m_Items[v97],
                &v102->m_Items[v97],
                0,
                0);
              v49 = 0;
            }
LABEL_73:
            LODWORD(v93) = *(_DWORD *)(v92 + 24);
            if ( (__int64)++v94 >= (int)v93 )
              goto LABEL_76;
          }
LABEL_80:
          sub_2213CE4(Instance);
        }
      }
      else
      {
        v47 = (MissionNaviTransitionBoardItem_o *)explanationLista;
      }
LABEL_76:
      v80 = *((_DWORD *)v81 + 6);
    }
  }
  if ( v49 )
  {
    *idList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, 0, v74, v75, v76, v77, v78, v79);
    *titleList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, 0, v103, v104, v105, v106, v107, v108);
    v47->klass = 0;
    sub_2213A04(v47, 0, v109, v110, v111, v112, v113, v114);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetPortraitLimitCountStage(
        UserServantEntity_o *this,
        int32_t overrideTransformVal,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w3
  const MethodInfo *v11; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59718D2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718D2 = 1;
  }
  v7 = *(_QWORD *)&this->fields.portraitLimitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.portraitLimitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&overrideTransformVal);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.portraitLimitCount2, 0);
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
  __int64 v8; // x1
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w22
  int32_t v12; // w23
  const MethodInfo *v13; // x3
  int32_t PortraitLimitCountStage; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_59718D3 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718D3 = 1;
  }
  ServantId = UserServantEntity__GetServantId(this, overrideTransformVal, (const MethodInfo *)ignoreRandomSettings);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v11 = ServantId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  PortraitLimitCountStage = UserServantEntity__GetPortraitLimitCountStage(
                              this,
                              overrideTransformVal,
                              ignoreRandomSettings,
                              v13);
  return LimitCountUtility__GetSealAfter(v11, v12, PortraitLimitCountStage, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetRarity(UserServantEntity_o *this, bool useOverwrite, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w0
  const MethodInfo *v6; // x2
  ServantOverwriteStatus_o *OverwriteStatus_50203912; // x0
  __int64 v8; // x1

  if ( !useOverwrite )
    return UserServantEntity__getRarity(this, (const MethodInfo *)useOverwrite);
  DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    this,
                                                    -1,
                                                    0,
                                                    0,
                                                    v3);
  OverwriteStatus_50203912 = UserServantEntity__GetOverwriteStatus_50203912(
                               this,
                               DispLimitCountStageSealAfterAtStageLimitCount,
                               v6);
  if ( !OverwriteStatus_50203912 )
    sub_2213CDC(0, v8);
  return OverwriteStatus_50203912->fields._Rarity_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetRarityIcon(UserServantEntity_o *this, int32_t actualRarity, const MethodInfo *method)
{
  bool IsGrandServant; // w21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t RarityIcon; // w22

  if ( (byte_59718DB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718DB = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, *(const MethodInfo **)&actualRarity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       (ServantExceedMaster_o *)Instance,
                       actualRarity,
                       this->fields.exceedCount,
                       0,
                       IsGrandServant,
                       0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLvDetailMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  return ServantLvDetailMaster__GetRarityIcon(
           (ServantLvDetailMaster_o *)Instance,
           actualRarity,
           this->fields.lv,
           RarityIcon,
           IsGrandServant,
           0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetSameSvtEquipNumIsLimitUp(
        UserServantEntity_o *this,
        bool isLimitMax,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x22
  UserServantMaster_o *v12; // x20
  System_Collections_Generic_List_UserServantEntity__o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w20
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  UserServantMaster_o *v20; // x20
  bool EntityListBySvtId; // w0
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_59718EE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718EE = 1;
  }
  userStorageServantList = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v25, 0, sizeof(v25));
  if ( !isWarehouseServantEquip )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isLimitMax);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v20 = (UserServantMaster_o *)Master_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    *(_QWORD *)&v28.fields.currentCryptoKey = v18;
    *(_QWORD *)&v28.fields.fakeValue = v19;
    v13 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                    v28,
                                                                    0);
    if ( !v20 )
      goto LABEL_31;
    EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(v20, &userStorageServantList, (int32_t)v13, 0, 0);
    v15 = 0;
    if ( !EntityListBySvtId )
      return v15;
LABEL_17:
    v13 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v15 = 0;
      v25 = v24;
      v24.fields._list = 0;
      *(_QWORD *)&v24.fields._index = &v25;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v15;
          }
          if ( !isLimitMax )
            break;
          if ( !v25.fields._current )
            sub_2213CDC(0, v22);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v25.fields._current, v22) )
            goto LABEL_26;
        }
        if ( !v25.fields._current )
          sub_2213CDC(0, v22);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v25.fields._current, v22) )
LABEL_26:
          ++v15;
      }
    }
LABEL_31:
    sub_2213CDC(v13, v14);
  }
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isLimitMax);
  v8 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantMaster_o *)v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v27.fields.currentCryptoKey = v10;
  *(_QWORD *)&v27.fields.fakeValue = v11;
  v13 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v27,
                                                                  0);
  if ( !v12 )
    goto LABEL_31;
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v12, &userStorageServantList, (int32_t)v13, 0) )
    goto LABEL_17;
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
  struct System_String_o *v12; // x8
  System_String_o *v13; // x24
  TransformServantInfo_o *v14; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
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
  struct System_String_o *v31; // x8
  System_String_o *v32; // x23
  TransformServantInfo_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_59718EF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_TransformServantInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_TransformServantInfo__TypeInfo);
    sub_2213A60(&TransformServantInfo_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59718EF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  ServantId = UserServantEntity__GetServantId(this, 0, v4);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, 0, 0, 0, v6);
  if ( (byte_597187B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597187B = 1;
  }
  UserServantEntity__Init(this, v7);
  baseServantEntity = this->fields.baseServantEntity;
  if ( !baseServantEntity )
    goto LABEL_31;
  TransformInfo = ServantEntity__GetTransformInfo(baseServantEntity, 0);
  v12 = TransformInfo ? TransformInfo->fields.condLabelTitle : 0LL;
  v13 = v12 ? v12 : (System_String_o *)StringLiteral_1/*""*/;
  v14 = (TransformServantInfo_o *)sub_2213CCC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_50627376(v14, ServantId, DispLimitCountStage, v13, 0);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  v26 = UserServantEntity__GetServantId(this, 1, v25);
  v29 = UserServantEntity__GetDispLimitCountStage(this, 1, 0, 0, v27);
  if ( (byte_597187B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597187B = 1;
  }
  UserServantEntity__Init(this, v28);
  baseServantEntity = this->fields.saveTransformServantEntity;
  if ( !baseServantEntity )
    goto LABEL_31;
  v30 = ServantEntity__GetTransformInfo(baseServantEntity, 0);
  v31 = v30 ? v30->fields.condLabelTitle : 0LL;
  v32 = v31 ? v31 : (System_String_o *)StringLiteral_1/*""*/;
  v33 = (TransformServantInfo_o *)sub_2213CCC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_50627376(v33, v26, v29, v32, 0);
  v40 = v3->fields._items;
  v41 = Method_System_Collections_Generic_List_TransformServantInfo__Add__;
  ++v3->fields._version;
  if ( !v40 )
LABEL_31:
    sub_2213CDC(baseServantEntity, v9);
  v42 = v3->fields._size;
  if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)v33,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v3->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v33;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
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

  if ( (byte_597187C & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597187C = 1;
  }
  v5 = UserServantEntity__CheckBaseServant(this, overrideTransformVal, method);
  UserServantEntity__Init(this, v6);
  v9 = 496;
  if ( v5 )
    v9 = 488;
  v10 = *(__int64 *)((char *)&this->klass + v9);
  if ( !v10 )
    sub_2213CDC(v7, v8);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 24);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  bool IsServant; // w8
  System_Int32_array *result; // x0
  int32_t DispLimitCountStage; // w0
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t v18; // w0
  UserServantEntity_o *v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // [xsp+0h] [xbp-40h]
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v4 = dispLimitCount;
  if ( (byte_59718EB & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718EB = 1;
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
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v12);
    v4 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v17 = *(_QWORD *)(v10 + 16);
  v16 = *(_QWORD *)(v10 + 24);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v23.fields.currentCryptoKey = v17;
  *(_QWORD *)&v23.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v18, -1, v4, 1, 0, skillListNum, v21);
  if ( skillInfoList )
    return UserServantEntity__GetCategoryIdList(v19, skillInfoList, 1, v20);
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
  long double v11; // q0
  __int64 v12; // x0
  char v13; // w8
  __int64 v14; // x0
  ServantSkillEntity_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  BalanceConfig_c *v18; // x8
  ServantSkillMaster_o *v19; // x24
  __int64 v20; // x1
  const MethodInfo *v21; // x4
  __int64 v22; // x25
  int32_t DispLimitCountStage; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v24; // x19
  __int128 v25; // q1
  __int64 v26; // x21
  BalanceConfig_c *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v28; // x0
  __int128 v29; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v30; // x26
  int v31; // w8
  __int64 v32; // x1
  int64_t v33; // x28
  __int64 v34; // x19
  __int64 v35; // x29
  int32_t lv; // w27
  int64_t userSvtId; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+A0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_5971888 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5971888 = 1;
  }
  *(_OWORD *)&v11 = 0u;
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  v13 = *(_BYTE *)(v12 + 309);
  memset(&v46, 0, sizeof(v46));
  if ( (v13 & 1) == 0 )
    v12 = sub_224B908(COERCE_LONG_DOUBLE((unsigned __int128)0LL));
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v11);
  UseEntity = **(ServantSkillEntity_o ***)(v14 + 184);
  if ( !UseEntity )
LABEL_34:
    sub_2213CDC(UseEntity, *(_QWORD *)&servantId);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v18 = BalanceConfig_TypeInfo;
  v19 = (ServantSkillMaster_o *)MasterData_object;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
    v18 = BalanceConfig_TypeInfo;
  }
  v22 = sub_2213B20(int___TypeInfo, (unsigned int)v18->static_fields->SvtSkillListMax);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, ignoreRandomSettings, 0, v21);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v24 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v25 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v25;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v46, -1, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
  v45 = v46;
  v26 = 8;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v45, 0);
  while ( 1 )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&servantId);
      v27 = BalanceConfig_TypeInfo;
    }
    if ( v26 - 8 >= v27->static_fields->SvtSkillListMax )
      return (System_Int32_array *)v22;
    v28 = *v24;
    v29 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v30 = v24;
    v31 = *(&(*v24)->_2.cctor_finished + 1);
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v29;
    if ( !v31 )
      j_il2cpp_runtime_class_init_0(v28, *(_QWORD *)&servantId);
    v43 = v44;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v43, 0);
    v35 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v34 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    lv = this->fields.lv;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    *(_QWORD *)&v47.fields.currentCryptoKey = v35;
    *(_QWORD *)&v47.fields.fakeValue = v34;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
    if ( !v19 )
      goto LABEL_34;
    UseEntity = ServantSkillMaster__getUseEntity(
                  v19,
                  servantId,
                  (int)v26 - 7,
                  v33,
                  lv,
                  (int32_t)UseEntity,
                  dispLimitCount,
                  beforeQuestClear,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0);
    v24 = v30;
    if ( UseEntity )
    {
      if ( !v22 )
        goto LABEL_34;
      if ( v26 - 8 >= (unsigned __int64)*(unsigned int *)(v22 + 24) )
        sub_2213CE4(UseEntity);
      *(_DWORD *)(v22 + 4 * v26) = UseEntity->fields.skillId;
    }
    ++v26;
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
  char v15; // w8
  __int64 v16; // x0
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x24
  bool IsServantEquip; // w25
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  BalanceConfig_c *v22; // x0
  SkillInfo_array *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  int32_t DispLimitCountStage; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v33; // x20
  __int128 v34; // q1
  unsigned __int64 v35; // x29
  __int64 v36; // x19
  SkillInfo_o *v37; // x27
  __int64 v38; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v39; // x0
  __int128 v40; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v41; // x26
  int v42; // w8
  __int64 v43; // x1
  int64_t v44; // x21
  __int64 v45; // x20
  __int64 v46; // x28
  int32_t lv; // w23
  unsigned __int64 v48; // x28
  ServantSkillEntity_o *v49; // x23
  int32_t v50; // w4
  int32_t skillNum; // w8
  unsigned int *v52; // x20
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x0
  __int64 v61; // [xsp+38h] [xbp-118h]
  __int64 v62; // [xsp+40h] [xbp-110h]
  bool v63; // [xsp+4Ch] [xbp-104h]
  int64_t userSvtId; // [xsp+50h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+90h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+D0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_5971889 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SkillInfo___TypeInfo);
    sub_2213A60(&SkillInfo_TypeInfo);
    byte_5971889 = 1;
  }
  *(_OWORD *)&v13 = 0u;
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  v15 = *(_BYTE *)(v14 + 309);
  memset(&v72, 0, sizeof(v72));
  if ( (v15 & 1) == 0 )
    v14 = sub_224B908(COERCE_LONG_DOUBLE((unsigned __int128)0LL));
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908(v13);
  Instance = **(_QWORD **)(v16 + 184);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        dispSvtId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_49;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
  v61 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
          this,
          this->klass->vtable._6_getSkillLevelList.method);
  if ( skillListNum <= 0 )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
      v21 = BalanceConfig_TypeInfo;
    }
    skillListNum = v21->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
      v22 = BalanceConfig_TypeInfo;
    }
    skillListNum = v22->static_fields->SvtEquipSkillListMax;
  }
  v23 = (SkillInfo_array *)sub_2213B20(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v31);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v33 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  if ( useUserSvtId )
  {
    v34 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v72.fields.fakeValue = v34;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v72, -1, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v71 = v72;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v71, 0);
  if ( skillListNum >= 1 )
  {
    v35 = 0;
    v36 = 8;
    v62 = (unsigned int)skillListNum;
    v63 = finishEvent;
    while ( 1 )
    {
      v37 = (SkillInfo_o *)sub_2213CCC(SkillInfo_TypeInfo);
      SkillInfo___ctor(v37, 0);
      v39 = *v33;
      v40 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v41 = v33;
      v42 = *(&(*v33)->_2.cctor_finished + 1);
      *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v70.fields.fakeValue = v40;
      if ( !v42 )
        j_il2cpp_runtime_class_init_0(v39, v38);
      v69 = v70;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v69, 0);
      v46 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v45 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      lv = this->fields.lv;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
      *(_QWORD *)&v73.fields.currentCryptoKey = v46;
      *(_QWORD *)&v73.fields.fakeValue = v45;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v73, 0);
      if ( !MasterData_object )
        break;
      v48 = v35 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            (ServantSkillMaster_o *)MasterData_object,
                            dispSvtId,
                            (int)v35 + 1,
                            v44,
                            lv,
                            Instance,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v63,
                            0);
      if ( Instance )
      {
        if ( !v37 )
          break;
        v49 = (ServantSkillEntity_o *)Instance;
        v37->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v61 )
          break;
        if ( v35 >= *(unsigned int *)(v61 + 24) )
          goto LABEL_50;
        v50 = *(_DWORD *)(v61 + 32 + 4 * v35);
        v37->fields.lv = v50;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v37->fields.charge,
          &v37->fields.title,
          &v37->fields.explanation,
          v50,
          IsServantEquip,
          0);
        Instance = ServantSkillEntity__GetStrengthStatus(v49, beforeClearQuestId, 0);
        skillNum = v49->fields.skillNum;
        v37->fields.strengthStatus = Instance;
        v37->fields.skillRecord = skillNum;
        v37->fields.isUse = 1;
      }
      else
      {
        if ( !v37 )
          break;
        v37->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(
                                (ServantSkillMaster_o *)MasterData_object,
                                dispSvtId,
                                v48,
                                0);
          if ( Instance )
          {
            v37->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v37->fields.title,
              &v37->fields.explanation,
              0);
          }
        }
      }
      v52 = (unsigned int *)*skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_2213BB4(v37, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
      if ( !Instance )
      {
        v60 = sub_2213D00(0, v53);
        sub_2213BA0(v60, 0);
      }
      if ( v35 >= v52[6] )
LABEL_50:
        sub_2213CE4(Instance);
      *(_QWORD *)&v52[v36] = v37;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52[v36], (int32_t)v37, v54, v55, v56, v57, v58, v59);
      v36 += 2;
      ++v35;
      v33 = v41;
      if ( v62 == v48 )
        return;
    }
LABEL_49:
    sub_2213CDC(Instance, skillInfoList);
  }
}


int32_t UserServantEntity__GetSkillMaxCount(UserServantEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x19
  const MethodInfo *v5; // x2
  int32_t ServantId; // w0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  SkillInfo_array *v9; // x21
  int max_length; // w8
  unsigned int v11; // w22
  int32_t v12; // w20
  SkillInfo_o *v13; // x24
  const MethodInfo *v15; // [xsp+0h] [xbp-50h]
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59718F7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_59718F7 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  skillInfoList = 0;
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  ServantId = UserServantEntity__GetServantId(this, -1, v5);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, ServantId, -1, -1, 1, 0, -1, v15);
  v9 = skillInfoList;
  if ( !skillInfoList )
    goto LABEL_19;
  max_length = skillInfoList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_2213CE4(v7);
      v13 = v9->m_Items[v11];
      if ( !v13 || !Master_object )
        break;
      v7 = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             v13->fields.id,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( v7 )
      {
        if ( !entity )
          break;
        if ( v13->fields.lv >= SLODWORD(entity[2].monitor) )
          ++v12;
      }
      max_length = v9->max_length;
      if ( (int)++v11 >= max_length )
        return v12;
    }
LABEL_19:
    sub_2213CDC(v7, v8);
  }
  return 0;
}


void UserServantEntity__GetStatusUpAdjustLimit(
        UserServantEntity_o *this,
        int32_t *hpAdjustLimit,
        int32_t *atkAdjustLimit,
        const MethodInfo *method)
{
  DataManager_c *v7; // x0
  int v8; // w8
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitMaster_o *v13; // x22
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w21
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v20; // x21
  __int64 v21; // x1
  System_String_o *strParam; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v24; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  Il2CppObject *v27; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_59718BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_18931/*"combineLimitHpAdjust"*/);
    sub_2213A60(&StringLiteral_18930/*"combineLimitAtkAdjust"*/);
    byte_59718BD = 1;
  }
  v7 = DataManager_TypeInfo;
  *hpAdjustLimit = 0;
  *atkAdjustLimit = 0;
  v8 = *(&v7->_2.cctor_finished + 1);
  value = 0;
  v27 = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, hpAdjustLimit);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v29.fields.currentCryptoKey = v11;
  *(_QWORD *)&v29.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v30.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v30.fields.currentCryptoKey = v15;
  v17 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v30, 0);
  if ( !v13 )
    goto LABEL_20;
  Entity = ServantLimitMaster__GetEntity(v13, v16, (int32_t)v17, 0);
  if ( Entity )
  {
    v20 = Entity;
    if ( !System_String__IsNullOrEmpty(Entity->fields.strParam, 0) )
    {
      strParam = v20->fields.strParam;
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v21);
      Dictionary = JsonManager__getDictionary(strParam, 0);
      if ( Dictionary )
      {
        v24 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
        if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
               (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
               (Il2CppObject *)StringLiteral_18931/*"combineLimitHpAdjust"*/,
               &value,
               (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
        {
          v17 = value;
          if ( !value )
            goto LABEL_20;
          v25 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                     value,
                                     value->klass->vtable[3].method);
          System_Int32__TryParse(v25, hpAdjustLimit, 0);
        }
        if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v24,
                (Il2CppObject *)StringLiteral_18930/*"combineLimitAtkAdjust"*/,
                &v27,
                (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
          return;
        v17 = v27;
        if ( v27 )
        {
          v26 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v27->klass->vtable[3].methodPtr)(
                                     v27,
                                     v27->klass->vtable[3].method);
          System_Int32__TryParse(v26, atkAdjustLimit, 0);
          return;
        }
LABEL_20:
        sub_2213CDC(v17, v18);
      }
    }
  }
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
    sub_2213CDC(CardImageLimitCountStageSealAfterAtStageLimitCount, v11);
  return ServantEntity__getName(v9, CardImageLimitCountStageSealAfterAtStageLimitCount, -1, 0, isCommonName, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__GetTransformCount(
        UserServantEntity_o *this,
        bool includeBaseServant,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w22
  System_Collections_Generic_List_int__o *TransformServantIds; // x0
  const MethodInfo *v13; // x1
  int size; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_59718F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718F4 = 1;
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
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v15.fields.currentCryptoKey = v9;
    *(_QWORD *)&v15.fields.fakeValue = v10;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
    TransformServantIds = (System_Collections_Generic_List_int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                      this->fields.dispLimitCount,
                                                                      0);
    if ( !Master_object
      || (TransformServantIds = ServantTransformMaster__GetTransformServantIds(
                                  (ServantTransformMaster_o *)Master_object,
                                  v11,
                                  (int32_t)TransformServantIds,
                                  0)) == 0 )
    {
      sub_2213CDC(TransformServantIds, v13);
    }
    size = TransformServantIds->fields._size;
    if ( size >= 1 && !UserServantEntity__HasTransform(this, v13) )
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
  System_Int32_array *TransformedSkillIdList; // x21
  const MethodInfo *v11; // x7
  System_Int32_array *v12; // x20
  __int64 v13; // x1
  __int64 v15; // x22
  BalanceConfig_c *v16; // x0
  unsigned int v17; // w8

  if ( (byte_59718F5 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_59718F5 = 1;
  }
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, -1, 1, v5);
  v12 = UserServantEntity__GetTransformedSkillIdList(this, transformIndex, -1, -1, 1, questId, 1, v11);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)TransformedSkillIdList, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0) )
  {
    v15 = 8;
    v16 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v13);
        v16 = BalanceConfig_TypeInfo;
      }
      v17 = v15 - 8;
      if ( (int)v15 - 8 >= v16->static_fields->SvtSkillListMax )
        break;
      if ( !TransformedSkillIdList )
        goto LABEL_17;
      if ( v17 >= LODWORD(TransformedSkillIdList->max_length) )
        goto LABEL_18;
      if ( *((_DWORD *)&TransformedSkillIdList->obj.klass + v15) == skillId )
      {
        if ( !v12 )
LABEL_17:
          sub_2213CDC(v16, v13);
        if ( v17 >= LODWORD(v12->max_length) )
LABEL_18:
          sub_2213CE4(v16);
        return *((_DWORD *)&v12->obj.klass + v15);
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
  System_Int32_array *TransformedSkillIdList; // x21
  const MethodInfo *v10; // x7
  System_Int32_array *v11; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  int max_length; // w9
  unsigned int v15; // w8

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
    if ( (max_length & ~(max_length >> 31)) == ++v15 )
      return 0;
  }
  if ( !v11 )
LABEL_13:
    sub_2213CDC(IsNullOrEmpty, v13);
  if ( v15 >= LODWORD(v11->max_length) )
LABEL_12:
    sub_2213CE4(IsNullOrEmpty);
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
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59718F0 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_TransformServantInfo___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718F0 = 1;
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
                                    (const MethodInfo_3814F8C *)Method_BasicHelper_IsValidIndex_TransformServantInfo___);
    if ( ((unsigned __int8)IsValidIndex_object & 1) != 0 )
    {
      if ( SaveTransformedServantList )
      {
        IsValidIndex_object = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)SaveTransformedServantList,
                                transformCount,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
        if ( IsValidIndex_object )
          return *((_DWORD *)IsValidIndex_object + 4);
      }
LABEL_19:
      sub_2213CDC(IsValidIndex_object, v8);
    }
    return 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  v15 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  IsValidIndex_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !Master_object )
    goto LABEL_19;
  IsValidIndex_object = ServantTransformMaster__GetTransformServantIds(
                          (ServantTransformMaster_o *)Master_object,
                          v16,
                          (int32_t)IsValidIndex_object,
                          0);
  if ( !IsValidIndex_object )
    goto LABEL_19;
  if ( *((_DWORD *)IsValidIndex_object + 6) < transformCount )
    return 0;
  return System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)IsValidIndex_object,
           transformCount - 1,
           (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
}


bool UserServantEntity__GetTransformedServantInfo(
        UserServantEntity_o *this,
        TransformServantInfo_o **transformInfo,
        int32_t transformCount,
        const MethodInfo *method)
{
  TransformServantInfo_o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_TransformServantInfo__o *SaveTransformedServantList; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Master_object; // x22
  __int64 v20; // x23
  __int64 v21; // x24
  int32_t v22; // w0
  __int64 v23; // x8
  int32_t v24; // w21
  Il2CppObject *Item; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_59718F1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_TransformServantInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&TransformServantInfo_TypeInfo);
    byte_59718F1 = 1;
  }
  v7 = (TransformServantInfo_o *)sub_2213CCC(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor(v7, 0);
  *transformInfo = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)transformInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  UserServantEntity__Init(this, v14);
  if ( this->fields.saveTransformServantEntity )
  {
    SaveTransformedServantList = UserServantEntity__GetSaveTransformedServantList(this, v15);
    if ( !SaveTransformedServantList )
      goto LABEL_15;
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v33.fields.currentCryptoKey = v20;
    *(_QWORD *)&v33.fields.fakeValue = v21;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v33, 0);
    v23 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
    *(_QWORD *)&v34.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
    v24 = v22;
    *(_QWORD *)&v34.fields.currentCryptoKey = v23;
    SaveTransformedServantList = (System_Collections_Generic_List_TransformServantInfo__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                                              v34,
                                                                                              0);
    if ( !Master_object
      || (SaveTransformedServantList = ServantTransformMaster__GetTransformServantInfo(
                                         (ServantTransformMaster_o *)Master_object,
                                         v24,
                                         (int32_t)SaveTransformedServantList,
                                         0)) == 0 )
    {
LABEL_15:
      sub_2213CDC(SaveTransformedServantList, v17);
    }
  }
  if ( SaveTransformedServantList->fields._size <= transformCount )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)SaveTransformedServantList,
           transformCount,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TransformServantInfo__get_Item__);
  *transformInfo = (TransformServantInfo_o *)Item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)transformInfo, (int32_t)Item, v26, v27, v28, v29, v30, v31);
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
  __int64 v18; // x25
  __int64 v19; // x26
  TransformServantInfo_o *v20; // x24
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_59718F2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718F2 = 1;
  }
  transformInfo = 0;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformIndex,
                             *(const MethodInfo **)&specificLimitCount);
  if ( useDispLimitCount < 0 && ignoreRandomSettings )
  {
    v18 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    v20 = transformInfo;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v19;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
    if ( !v20 )
LABEL_11:
      sub_2213CDC(TransformedServantInfo, v16);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v20, TransformedServantInfo, 0);
    useDispLimitCount = TransformedServantInfo;
  }
  if ( !transformInfo )
    goto LABEL_11;
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
  __int64 v16; // x24
  __int64 v17; // x25
  TransformServantInfo_o *v18; // x23
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_59718F3 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718F3 = 1;
  }
  transformInfo = 0;
  TransformedServantInfo = UserServantEntity__GetTransformedServantInfo(
                             this,
                             &transformInfo,
                             transformCount,
                             *(const MethodInfo **)&beforeClearQuestId);
  if ( useDispLimitCount < 0 )
  {
    v16 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
    v18 = transformInfo;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v21.fields.currentCryptoKey = v16;
    *(_QWORD *)&v21.fields.fakeValue = v17;
    TransformedServantInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
    if ( !v18 )
LABEL_10:
      sub_2213CDC(TransformedServantInfo, v14);
    TransformedServantInfo = TransformServantInfo__GetDispLimitCount(v18, TransformedServantInfo, 0);
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
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x19
  __int64 v24; // x20
  __int64 v25; // x21
  __int64 v26; // x1
  TreasureDvcEntity_o *v27; // x19
  TreasureDvcLvMaster_o *v28; // x22
  TreasureDvcLvEntity_o *v29; // x0
  __int64 v30; // x1
  TreasureDvcLvEntity_o *v31; // x21
  Il2CppObject *v32; // x19
  Il2CppObject *v33; // x23
  System_Collections_Generic_HashSet_int__o *v34; // x22
  const MethodInfo_42B5040 **v35; // x27
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v38; // x24
  unsigned __int64 v39; // x29
  unsigned __int64 max_length_low; // x9
  DataVals_o *v41; // x25
  int32_t v42; // w1
  int32_t Param; // w26
  int32_t v44; // w1
  System_Collections_Generic_IEnumerable_T__o *v45; // x1
  System_Collections_Generic_HashSet_int__o *v46; // x20
  const MethodInfo_42B5040 **v47; // x22
  int32_t v48; // w26
  int32_t v49; // w27
  void *v50; // x8
  System_Collections_Generic_HashSet_int__o *v51; // x20
  _BOOL8 v52; // x0
  __int64 v53; // x1
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v58; // [xsp+0h] [xbp-D0h]
  DataVals_o **v59; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v60; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v61; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v62; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v63; // [xsp+48h] [xbp-88h] BYREF
  TreasureDvcLvEntity_o *v64; // [xsp+50h] [xbp-80h] BYREF
  SkillLvEntity_o *v65; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v4 = dispLimitCount;
  if ( (byte_59718EC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_59718EC = 1;
  }
  entity = 0;
  tdInfo = 0;
  v64 = 0;
  v65 = 0;
  v63 = 0;
  memset(&v62, 0, sizeof(v62));
  v61 = 0;
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
    if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
      v19 = sub_224B908(v18);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
    if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
      v20 = sub_224B908(v18);
    Master_object = **(DataVals_array ***)(v20 + 184);
    if ( !Master_object )
      goto LABEL_63;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v24 = *(_QWORD *)(v10 + 16);
    v25 = *(_QWORD *)(v10 + 24);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    *(_QWORD *)&v68.fields.currentCryptoKey = v24;
    *(_QWORD *)&v68.fields.fakeValue = v25;
    Master_object = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
    if ( !tdInfo || !MasterData_object )
      goto LABEL_63;
    v27 = TreasureDvcMaster__GetEntityCheckServantOverwrite(
            (TreasureDvcMaster_o *)MasterData_object,
            (int32_t)Master_object,
            tdInfo->fields.id,
            0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
    Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v27 )
      goto LABEL_63;
    if ( !tdInfo )
      goto LABEL_63;
    v28 = (TreasureDvcLvMaster_o *)Master_object;
    if ( !Master_object )
      goto LABEL_63;
    v29 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v27->fields.id, tdInfo->fields.lv, 0);
    if ( !v29 )
      return 0;
    v31 = v29;
    if ( !v29->fields.funcId )
      return 0;
    v58 = v28;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
    v32 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    v33 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v34 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v34,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v34 )
      goto LABEL_63;
    v35 = (const MethodInfo_42B5040 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)v31->fields.funcId,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    Master_object = TreasureDvcLvEntity__getDataValsList(v31, 100, 0);
    funcId = v31->fields.funcId;
    if ( !funcId )
      goto LABEL_63;
    m_Items = Master_object->m_Items;
    v38 = Master_object;
    v39 = 0;
    v59 = Master_object->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(funcId->max_length);
      if ( (__int64)v39 >= (int)max_length_low )
      {
        v51 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v51,
          (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v60,
          v34,
          (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v62 = v60;
        v60.fields._set = 0;
        *(_QWORD *)&v60.fields._index = &v62;
        while ( 1 )
        {
          v52 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v62,
                  (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v52 )
            break;
          if ( !v32 )
            sub_2213CDC(v52, v53);
          v54 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v32,
                  &v61,
                  (int32_t)v62.fields._current,
                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v54 )
          {
            if ( !v61 )
              sub_2213CDC(v54, v55);
            if ( !v51 )
              sub_2213CDC(v54, v55);
            System_Collections_Generic_HashSet_int___Add(
              v51,
              HIDWORD(v61[4].monitor),
              (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        Master_object = (DataVals_array *)sub_2005620(&v60);
        if ( v51 )
        {
          count = (unsigned int)v51->fields._count;
          if ( (int)count > 0 )
          {
            v13 = (System_Int32_array *)sub_2213B20(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_69948224(
              v51,
              v13,
              (const MethodInfo_42B5340 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return v13;
          }
          return 0;
        }
LABEL_63:
        sub_2213CDC(Master_object, v17);
      }
      if ( v39 >= max_length_low )
        goto LABEL_71;
      if ( !v32 )
        goto LABEL_63;
      Master_object = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v32,
                                          &entity,
                                          funcId->m_Items[v39],
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_63;
        Master_object = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v38 )
            goto LABEL_63;
          if ( v39 >= LODWORD(v38->max_length) )
LABEL_71:
            sub_2213CE4(Master_object);
          if ( !entity )
            goto LABEL_63;
          v41 = m_Items[v39];
          if ( !v41 )
            goto LABEL_63;
          DataVals__SetTempType(m_Items[v39], (FunctionMaster_o *)v32, (int32_t)entity[1].monitor, 0);
          v42 = DataVals__isParam(v41, 28, 0) ? 28 : 3;
          Param = DataVals__GetParam(v41, v42, 0, 0);
          v44 = DataVals__isParam(v41, 29, 0) ? 29 : 4;
          Master_object = (DataVals_array *)DataVals__GetParam(v41, v44, 0, 0);
          if ( !v33 )
            goto LABEL_63;
          Master_object = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                              (SkillLvMaster_o *)v33,
                                              &v65,
                                              Param,
                                              (int32_t)Master_object,
                                              0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( !v65 )
              goto LABEL_63;
            v45 = (System_Collections_Generic_IEnumerable_T__o *)v65->fields.funcId;
            if ( v45 )
              System_Collections_Generic_HashSet_int___UnionWith(v34, v45, *v35);
          }
          Master_object = (DataVals_array *)DataVals__isParam(v41, 96, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (DataVals_array *)DataVals__isParam(v41, 97, 0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v46 = v34;
              v47 = v35;
              v48 = DataVals__GetParam(v41, 96, 0, 0);
              v49 = DataVals__GetParam(v41, 97, 0, 0);
              if ( DataVals__isParam(v41, 99, 0) )
              {
                Master_object = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v58, &v64, v48, v49, 0);
                v35 = v47;
                v34 = v46;
                m_Items = v59;
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  v50 = v64;
                  if ( !v64 )
                    goto LABEL_63;
LABEL_60:
                  v17 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v50 + 4);
                  if ( v17 )
                    System_Collections_Generic_HashSet_int___UnionWith(v34, v17, *v35);
                }
              }
              else
              {
                Master_object = (DataVals_array *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v33, &v63, v48, v49, 0);
                v35 = v47;
                v34 = v46;
                m_Items = v59;
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  v50 = v63;
                  if ( !v63 )
                    goto LABEL_63;
                  goto LABEL_60;
                }
              }
            }
          }
        }
      }
      funcId = v31->fields.funcId;
      ++v39;
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
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
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x26
  __int128 v34; // q1
  int v35; // w8
  int64_t v36; // x0
  __int64 v37; // x1
  __int64 v38; // x22
  __int64 v39; // x29
  int32_t lv; // w27
  int64_t v41; // x28
  int32_t v42; // w29
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v44; // x1
  __int128 v45; // q1
  TreasureDvcInfo_o **v46; // x19
  int64_t v47; // x0
  ServantTreasureDvcEntity_o *v48; // x23
  TreasureDvcInfo_o *v49; // x25
  DataManager_o *v50; // x22
  TreasureDvcInfo_o **v52; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_597189B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TreasureDvcInfo_TypeInfo);
    byte_597189B = 1;
  }
  v13 = (TreasureDvcInfo_o *)sub_2213CCC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v13, 0);
  *tdInfo = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)tdInfo, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v20);
  if ( dispLimitCount < 0 )
  {
    DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 0, 0, v22);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  }
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    v26 = sub_224B908(v24);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908(v24);
  Instance = **(DataManager_o ***)(v27 + 184);
  if ( !Instance )
    goto LABEL_39;
  v52 = tdInfo;
  v29 = isLvOne;
  v30 = dispSvtId;
  v31 = beforeClearQuestId;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v34 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v35 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v34;
  if ( !v35 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
  v54 = v55;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
  v39 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v41 = v36;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
  *(_QWORD *)&v56.fields.currentCryptoKey = v39;
  *(_QWORD *)&v56.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v56, 0);
  if ( !MasterData_object )
    goto LABEL_39;
  v42 = v30;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)MasterData_object,
                v30,
                v41,
                lv,
                (int32_t)Instance,
                dispLimitCount,
                FriendshipRank,
                v31,
                0);
  if ( v29 )
  {
    v45 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v46 = v52;
    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v55.fields.fakeValue = v45;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44);
    v53 = v55;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
    UseEntity = ServantTreasureDvcMaster__getUseEntity(
                  (ServantTreasureDvcMaster_o *)MasterData_object,
                  v30,
                  v47,
                  1,
                  0,
                  0,
                  0,
                  -1,
                  0);
  }
  else
  {
    v46 = v52;
  }
  v48 = UseEntity;
  if ( !UseEntity )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, v42, 1, 0);
  v49 = *v46;
  if ( !*v46 )
    goto LABEL_39;
  v50 = Instance;
  v49->fields.id = v48->fields.treasureDeviceId;
  v49->fields.lv = this->fields.treasureDeviceLv1;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                (ServantFlagReleaseMaster_o *)Instance,
                                v42,
                                HIDWORD(v50->fields.m_CachedPtr),
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v49 = *v46;
    goto LABEL_35;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFlagMaster___)) == 0 )
  {
LABEL_39:
    sub_2213CDC(Instance, v21);
  }
  Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                (ServantFlagMaster_o *)Instance,
                                v42,
                                HIDWORD(v50->fields.m_CachedPtr),
                                0);
  v49 = *v46;
  if ( (int)Instance >= 1 )
  {
    if ( !v49 )
      goto LABEL_39;
    v49->fields.id = (int)Instance;
    goto LABEL_36;
  }
LABEL_35:
  if ( !v49 )
    goto LABEL_39;
LABEL_36:
  Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                v48,
                                &v49->fields.name,
                                &v49->fields.explanation,
                                &v49->fields.maxLv,
                                &v49->fields.guageCount,
                                &v49->fields.cardId,
                                &v49->fields.strengthStatus,
                                &v49->fields.treasureDeviceNum,
                                v49->fields.lv,
                                0);
  v49->fields.isUse = (unsigned __int8)Instance & 1;
  if ( !*v46 )
    goto LABEL_39;
  return (*v46)->fields.isUse;
}


UserServantCommandCardEntity_o *UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  DataManager_o *v6; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  __int128 v9; // q1
  int v10; // w8
  int64_t v11; // x0
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x22
  int64_t v15; // x19
  const MethodInfo *v16; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_59718DF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_59718DF = 1;
  }
  entity = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(DataManager_o ***)(v5 + 184);
  if ( !v6 )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        v6,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v9 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v10 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v9;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
  v18 = v19;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v18, 0);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v11;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v6 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  if ( !MasterData_object )
LABEL_14:
    sub_2213CDC(v6, method);
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    v15,
    (int)v6,
    v16);
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
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  ServantTransformMaster_o *v8; // x20
  int32_t v9; // w0
  __int64 v10; // x8
  int32_t v11; // w19
  ServantTransformEntity_o *v12; // x0
  __int64 v13; // x1
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5971882 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971882 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantTransformMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  v10 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  v12 = (ServantTransformEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !v8 )
    goto LABEL_13;
  if ( !ServantTransformMaster__TryGetEntity(v8, &entity, v11, (int32_t)v12, 0) )
    return 0;
  v12 = entity;
  if ( !entity )
LABEL_13:
    sub_2213CDC(v12, v13);
  return ServantTransformEntity__IsUnlockTransformed(entity, -1, 0);
}


void UserServantEntity__Init(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  ServantEntity_o *baseServantEntity; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  __int64 v17; // x1
  ServantEntity_TransformInfo_o *v18; // x20
  Il2CppObject *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_597187A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597187A = 1;
  }
  if ( !this->fields.baseServantEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    *(_QWORD *)&v26.fields.currentCryptoKey = v5;
    *(_QWORD *)&v26.fields.fakeValue = v6;
    baseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
    if ( !Master_object )
      goto LABEL_19;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               (int32_t)baseServantEntity,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.baseServantEntity = (struct ServantEntity_o *)Entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseServantEntity,
      (int32_t)Entity,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    baseServantEntity = this->fields.baseServantEntity;
    if ( !baseServantEntity )
      goto LABEL_19;
    if ( !ServantEntity__get_IsServantEquip(baseServantEntity, 0) )
    {
      baseServantEntity = this->fields.baseServantEntity;
      if ( !baseServantEntity )
        goto LABEL_19;
      TransformInfo = ServantEntity__GetTransformInfo(baseServantEntity, 0);
      if ( TransformInfo )
      {
        v18 = TransformInfo;
        if ( TransformInfo->fields.saveTransform >= 1 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
          baseServantEntity = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( baseServantEntity )
          {
            v19 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)baseServantEntity,
                    v18->fields.saveTransform,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            this->fields.saveTransformServantEntity = (struct ServantEntity_o *)v19;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.saveTransformServantEntity,
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
          sub_2213CDC(baseServantEntity, v8);
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


bool UserServantEntity__IsAddParam1Max(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Rarity; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t klass_high; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59718B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__TryGetEntity__);
    byte_59718B8 = 1;
  }
  entity = 0;
  Rarity = UserServantEntity__getRarity(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    Rarity,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_2213CDC(Master_object, v6);
  klass_high = HIDWORD(entity[2].klass);
  if ( klass_high )
    return this->fields.adjustHp >= klass_high;
  return 0;
}


bool UserServantEntity__IsAddParam2Max(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Rarity; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t monitor; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59718BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__TryGetEntity__);
    byte_59718BB = 1;
  }
  entity = 0;
  Rarity = UserServantEntity__getRarity(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    Rarity,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_2213CDC(Master_object, v6);
  monitor = (int32_t)entity[2].monitor;
  if ( monitor )
    return this->fields.adjustAtk >= monitor;
  return 0;
}


bool UserServantEntity__IsAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Rarity; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_59718B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    byte_59718B9 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          Rarity,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Master_object, v6);
  }
  return this->fields.adjustAtk >= SLODWORD(Master_object[1].monitor);
}


bool UserServantEntity__IsAdjustAtkMaxByStatusUpMaterial(
        UserServantEntity_o *this,
        UserServantEntity_o *statusUpMaterialEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int AdjustLimitByStatusUpMaterial; // w0

  AdjustLimitByStatusUpMaterial = UserServantEntity__GetAdjustLimitByStatusUpMaterial(
                                    this,
                                    statusUpMaterialEntity,
                                    0,
                                    v3);
  return AdjustLimitByStatusUpMaterial >= 1 && this->fields.adjustAtk >= AdjustLimitByStatusUpMaterial;
}


bool UserServantEntity__IsAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Rarity; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_59718B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    byte_59718B6 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          Rarity,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Master_object, v6);
  }
  return this->fields.adjustHp >= SHIDWORD(Master_object[1].klass);
}


bool UserServantEntity__IsAdjustHpMaxByStatusUpMaterial(
        UserServantEntity_o *this,
        UserServantEntity_o *statusUpMaterialEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int AdjustLimitByStatusUpMaterial; // w0

  AdjustLimitByStatusUpMaterial = UserServantEntity__GetAdjustLimitByStatusUpMaterial(
                                    this,
                                    statusUpMaterialEntity,
                                    1,
                                    v3);
  return AdjustLimitByStatusUpMaterial >= 1 && this->fields.adjustHp >= AdjustLimitByStatusUpMaterial;
}


bool UserServantEntity__IsChocolateSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718E5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
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
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718BF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
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
  UserServantEntity__getTreasureDeviceInfo_50192116(this, &tdMaxLv[1], tdMaxLv, v3);
  return tdMaxLv[0] < tdMaxLv[1] + targetLv;
}


bool UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  int v8; // w8
  int64_t v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14[2]; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_59718E6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCombineExpMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718E6 = 1;
  }
  memset(&v14[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0 )
  {
LABEL_14:
    sub_2213CDC(Instance, v4);
  }
  UserCombineExpMaster__GetUserSvtId(v14, (UserCombineExpMaster_o *)Instance, 0);
  v14[1] = v14[0];
  v7 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
  v12 = v13;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v12, 0);
  v11 = v14[1];
  LOBYTE(ExchangeSvtCombineExpCampaign) = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                  &v11,
                                                  0);
  return (char)ExchangeSvtCombineExpCampaign;
}


bool UserServantEntity__IsExtra(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  ServantEntity_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_59718FC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718FC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v12.fields.currentCryptoKey = v5;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v12, 0);
  if ( !v7
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   (int32_t)Entity,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Entity, v9);
  }
  v10 = (ServantEntity_o *)Entity;
  return ServantEntity__IsExtra1((ServantEntity_o *)Entity, 0) || ServantEntity__IsExtra2(v10, 0);
}


bool UserServantEntity__IsExtra1(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718FA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718FA = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v7
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   (int32_t)Entity,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Entity, v9);
  }
  return ServantEntity__IsExtra1((ServantEntity_o *)Entity, 0);
}


bool UserServantEntity__IsExtra2(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718FB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718FB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v7
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   (int32_t)Entity,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Entity, v9);
  }
  return ServantEntity__IsExtra2((ServantEntity_o *)Entity, 0);
}


bool UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718E3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_59718F9 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
    sub_2213A60(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_2213A60(&Method_UserServantEntity__IsGrandServant_b__247_0__);
    byte_59718F9 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_3F14B68 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  if ( BasicHelper__IsNullOrEmpty(Entitys, 0) )
    return 0;
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)Entitys,
         (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
  v8 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_UserServantEntity__IsGrandServant_b__247_0__, 0);
  return System_Linq_Enumerable__Any_object__59145568(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
}


bool UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718B2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718E4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_59718AD & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_59718AD = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v3);
  return TutorialFlag__Get_47388504(126, 0);
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
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718E9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantEntity__IsModifyBattleVoice(UserServantEntity_o *this, int32_t battleVoice, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_59718E0 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718E0 = 1;
  }
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&battleVoice);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0) != battleVoice;
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
  __int128 v4; // q1
  int v5; // w10
  int64_t userIdNumber; // x21
  __int64 v7; // x1
  __int128 v8; // q1
  int v9; // w8
  __int64 v10; // x1
  int64_t v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+40h] [xbp-40h]

  if ( (byte_59718AB & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserServantNewManager_TypeInfo);
    byte_59718AB = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v5 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  userIdNumber = v3->static_fields->userIdNumber;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v4;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v15 = v16;
  if ( userIdNumber == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v15, 0) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    v9 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v8;
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    v14 = v16;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
    if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v10);
    return UserServantNewManager__IsNew(v11, 0);
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
      sub_2213CDC(0, v6);
    LOBYTE(EventServant) = EventServantEntity__IsProtectedDuringEvent(v5, 0);
  }
  return (char)EventServant;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantEntity__IsSameSvtEquipToLimitMaxNum(
        UserServantEntity_o *this,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  int v6; // w8
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t ServantLimitMax; // w23
  __int64 v10; // x1
  int v11; // w23
  int v13; // w8
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  UserServantMaster_o *v18; // x20
  System_Collections_Generic_List_UserServantEntity__o *v19; // x0
  __int64 v20; // x1
  int v21; // w22
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x22
  UserServantMaster_o *v26; // x20
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x20
  Il2CppObject v30; // q1
  int v31; // w8
  int64_t v32; // x0
  __int128 v33; // q1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  int32_t LimitCount; // w21
  BalanceConfig_c *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v41; // [xsp+60h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v42; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+70h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+98h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_59718ED & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59718ED = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  userStorageServantList = 0;
  v6 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  memset(&v43, 0, sizeof(v43));
  if ( !v6 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWarehouseServantEquip);
    v5 = BalanceConfig_TypeInfo;
  }
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  ServantLimitMax = v5->static_fields->ServantLimitMax;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isWarehouseServantEquip);
  *(_QWORD *)&v45.fields.currentCryptoKey = v7;
  *(_QWORD *)&v45.fields.fakeValue = v8;
  v11 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v45, 0);
  if ( !v11 )
    return 0;
  v13 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  if ( !isWarehouseServantEquip )
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v26 = (UserServantMaster_o *)Master_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    *(_QWORD *)&v47.fields.currentCryptoKey = v24;
    *(_QWORD *)&v47.fields.fakeValue = v25;
    v19 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                    v47,
                                                                    0);
    if ( !v26 )
      goto LABEL_38;
    v21 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v26, &userStorageServantList, (int32_t)v19, 0, 0) )
      return v11 <= v21;
LABEL_23:
    v19 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)userStorageServantList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v21 = 0;
      *(_OWORD *)&v43.fields._list = *(_OWORD *)&v40.fields.currentCryptoKey;
      v43.fields._current = (Il2CppObject *)v40.fields.fakeValue;
      v41 = 0;
      v42 = &v43;
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v27 )
          break;
        current = v43.fields._current;
        if ( !v43.fields._current )
          sub_2213CDC(v27, v28);
        v30 = v43.fields._current[2];
        v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v40.fields.currentCryptoKey = v43.fields._current[1];
        *(Il2CppObject *)&v40.fields.fakeValue = v30;
        if ( !v31 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
        v39 = v40;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v39, 0);
        v33 = *(_OWORD *)&this->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v33;
        if ( v32 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v38, 0) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v34);
          v37 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35);
            v37 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v37->static_fields->ServantLimitMax )
            v21 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v35) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v11 <= v21;
    }
LABEL_38:
    sub_2213CDC(v19, v20);
  }
  if ( !v13 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (UserServantMaster_o *)v14;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v46.fields.currentCryptoKey = v16;
  *(_QWORD *)&v46.fields.fakeValue = v17;
  v19 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v46,
                                                                  0);
  if ( !v18 )
    goto LABEL_38;
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v18, &userStorageServantList, (int32_t)v19, 0) )
    goto LABEL_23;
  v21 = 0;
  return v11 <= v21;
}


bool UserServantEntity__IsSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Rarity; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_59718BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    byte_59718BA = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        Rarity,
                                                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Master_object, v6);
  }
  return this->fields.adjustAtk >= Master_object->fields.revision;
}


bool UserServantEntity__IsSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Rarity; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_59718B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    byte_59718B7 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          Rarity,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Master_object, v6);
  }
  return this->fields.adjustHp >= SHIDWORD(Master_object[1].monitor);
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

  if ( (byte_59718F8 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718F8 = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  svtSkillAddEnt = 0;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v16.fields.currentCryptoKey = v3;
  *(_QWORD *)&v16.fields.fakeValue = v4;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  SkillIdList = UserServantEntity__GetSkillIdList(this, v5, -1, -1, 1, -1, 0, v6);
  for ( i = 0; ; ++i )
  {
    ServantSkillAddBySkillId = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
      ServantSkillAddBySkillId = BalanceConfig_TypeInfo;
    }
    SvtSkillListMax = ServantSkillAddBySkillId->static_fields->SvtSkillListMax;
    if ( i >= SvtSkillListMax )
      break;
    if ( !SkillIdList )
      goto LABEL_17;
    if ( i >= (unsigned __int64)LODWORD(SkillIdList->max_length) )
      sub_2213CE4(ServantSkillAddBySkillId);
    ServantSkillAddBySkillId = (BalanceConfig_c *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                                    this,
                                                    &svtSkillAddEnt,
                                                    SkillIdList->m_Items[i],
                                                    v8);
    if ( ((unsigned __int8)ServantSkillAddBySkillId & 1) != 0 )
    {
      if ( !svtSkillAddEnt || (skillIds = svtSkillAddEnt->fields.skillIds) == 0 )
LABEL_17:
        sub_2213CDC(ServantSkillAddBySkillId, v7);
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
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718C0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0);
}


bool UserServantEntity__IsUniqueIndividualityRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t ServantId; // w21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  const MethodInfo *v10; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v12; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5971899 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971899 = 1;
  }
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isUniqueIndividuality )
    return 0;
  ServantId = UserServantEntity__GetServantId(this, -1, method);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                   this,
                                   -1,
                                   0,
                                   questRestrictionInfo,
                                   v10);
  v12 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsUniqueIndividuality_50440424(questRestrictionInfo, ServantId, v9, v12, 0, 0);
}


bool UserServantEntity__IsUniqueIndividualityRestriction_50190496(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int32_t ServantId; // w24
  __int64 v13; // x25
  __int64 v14; // x26
  int32_t v15; // w25
  const MethodInfo *v16; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v18; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_597189A & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597189A = 1;
  }
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isUniqueIndividuality )
    return 0;
  ServantId = UserServantEntity__GetServantId(this, -1, (const MethodInfo *)partyItem);
  v13 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v20.fields.currentCryptoKey = v13;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                   this,
                                   -1,
                                   0,
                                   questRestrictionInfo,
                                   v16);
  v18 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsUniqueIndividuality_50441720(
           questRestrictionInfo,
           ServantId,
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
  __int128 v3; // q1
  int v4; // w8
  __int64 v5; // x1
  int64_t v6; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_59718AC & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserServantNewManager_TypeInfo);
    byte_59718AC = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0);
  if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v5);
  UserServantNewManager__SetOld(v6, 0);
}


bool UserServantEntity__TryGetServantSkillAddBySkillId(
        UserServantEntity_o *this,
        ServantSkillAddEntity_o **svtSkillAddEnt,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x23
  __int64 v10; // x24
  ServantSkillAddMaster_o *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w24
  const MethodInfo *v14; // x4
  int32_t DispLimitCountStage; // w0
  __int64 v16; // x0
  __int64 v17; // x1
  ServantSkillAddEntity_o *EnableEntity; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_59718F6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718F6 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtSkillAddEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantSkillAddMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v26.fields.currentCryptoKey = v9;
  *(_QWORD *)&v26.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, 1, 0, v14);
  v16 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  if ( !v11 )
    sub_2213CDC(v16, v17);
  EnableEntity = ServantSkillAddMaster__GetEnableEntity(v11, v12, v13, skillId, 0, v16, 1, 0);
  *svtSkillAddEnt = EnableEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)svtSkillAddEnt, (int32_t)EnableEntity, v19, v20, v21, v22, v23, v24);
  return *svtSkillAddEnt != 0;
}


bool UserServantEntity___GetEventServantWithinCreatedAt_b__150_0(
        UserServantEntity_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  int64_t createdAt; // x8

  if ( !x )
    sub_2213CDC(this, 0);
  createdAt = this->fields.createdAt;
  return x->fields.startedAt <= createdAt && createdAt <= x->fields.endedAt;
}


bool UserServantEntity___IsGrandServant_b__247_0(
        UserServantEntity_o *this,
        UserServantGrandEntity_o *userServantGrandEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x20
  __int128 v5; // q1
  __int64 v6; // x1
  __int128 v7; // q1
  int v8; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_59718FF & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59718FF = 1;
  }
  if ( !userServantGrandEntity )
    sub_2213CDC(this, userServantGrandEntity);
  if ( !userServantGrandEntity->fields.userSvtId )
    return 0;
  v5 = *(_OWORD *)&v4->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v4->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantGrandEntity);
  v11 = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v11, 0) != userServantGrandEntity->fields.userId )
    return 0;
  v7 = *(_OWORD *)&v4->fields.id.fields.fakeValue;
  v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v4->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
  v10 = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v10, 0) == userServantGrandEntity->fields.userSvtId;
}


int32_t UserServantEntity__checkTreasureDeviceLevelUp(
        UserServantEntity_o *this,
        int32_t targetLv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)tdMaxLv = 0;
  UserServantEntity__getTreasureDeviceInfo_50192116(this, &tdMaxLv[1], tdMaxLv, v3);
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

  if ( (byte_59718DD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_2213A60(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 2 )
      LODWORD(Entity) = this->fields.exp;
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


SvtUseSkillData_o *UserServantEntity__getAppendSkillInfo(UserServantEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  ServantAppendPassiveSkillMaster_o *v8; // x19
  unsigned __int64 max_length_low; // x0
  char *v10; // x1
  SvtUseSkillData_o *SkillData; // x19
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  __int128 v14; // q1
  int v15; // w8
  struct System_Int32_array *svtSkillNumsList; // x8
  __int64 v17; // x0
  struct System_Int32_array **p_svtSkillLvList; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x0
  __int128 v26; // q1
  UserServantAppendPassiveSkillMaster_o *v27; // x22
  int64_t v28; // x0
  __int64 v29; // x8
  int64_t v30; // x20
  const MethodInfo *v31; // x4
  struct System_Int32_array *unlockNums; // x16
  il2cpp_array_size_t max_length; // x8
  struct System_Int32_array *v34; // x9
  il2cpp_array_size_t v35; // x13
  unsigned __int64 v36; // x11
  Il2CppObject *v37; // x12
  __int64 v38; // x13
  struct System_Int32_array *v39; // x14
  unsigned __int64 v40; // x10
  int32_t *v41; // x16
  __int64 v42; // x0
  __int64 v43; // x2
  int32_t *v44; // x3
  int v45; // t1
  Il2CppClass *klass; // x5
  const char *namespaze; // x4
  __int64 v48; // x3
  unsigned __int64 v49; // x2
  __int64 v50; // x4
  Il2CppType *p_byval_arg; // x5
  _DWORD *monitor; // x6
  struct System_Int32_array *v53; // x8
  int v54; // w10
  struct System_Int32_array *v55; // x9
  __int64 v56; // x10
  unsigned __int64 v57; // x8
  __int64 m_Items; // x11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-60h]
  UserServantAppendPassiveSkillEntity_o *v63; // [xsp+68h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_597188D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_597188D = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v63 = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v65.fields.currentCryptoKey = v6;
  *(_QWORD *)&v65.fields.fakeValue = v7;
  max_length_low = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v65, 0);
  if ( !v8 )
    goto LABEL_49;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v8, max_length_low, 0);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v14 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v15 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v14;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
  v61 = v62;
  max_length_low = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v61, 0);
  if ( !v13 )
    goto LABEL_49;
  max_length_low = DataMasterBase_object__object__long___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                     &entity,
                     max_length_low,
                     (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_49;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_49;
  v17 = sub_2213B20(int___TypeInfo, LODWORD(svtSkillNumsList->max_length));
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v17;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&SkillData->fields.svtSkillLvList, v17, v19, v20, v21, v22, v23, v24);
  v25 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v27 = (UserServantAppendPassiveSkillMaster_o *)v25;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v60, 0);
  v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v30 = v28;
  *(_QWORD *)&v66.fields.currentCryptoKey = v29;
  max_length_low = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v66, 0);
  if ( !v27 )
    goto LABEL_49;
  max_length_low = UserServantAppendPassiveSkillMaster__TryGetEntity(v27, &v63, v30, max_length_low, v31);
  if ( (max_length_low & 1) == 0 )
    goto LABEL_41;
  if ( !v63 )
    goto LABEL_49;
  unlockNums = v63->fields.unlockNums;
  if ( !unlockNums )
    goto LABEL_49;
  max_length = unlockNums->max_length;
  if ( !max_length )
  {
LABEL_41:
    v53 = SkillData->fields.svtSkillNumsList;
    if ( v53 )
    {
      v54 = v53->max_length;
      if ( v54 < 1 )
        return SkillData;
      v55 = *p_svtSkillLvList;
      v56 = v54 & (unsigned int)~(v54 >> 31);
      v57 = 0;
      m_Items = (__int64)(*p_svtSkillLvList)->m_Items;
      while ( v55 )
      {
        if ( v57 >= LODWORD(v55->max_length) )
          goto LABEL_48;
        *(_DWORD *)(m_Items + 4 * v57++) = 0;
        if ( v56 == v57 )
          return SkillData;
      }
    }
LABEL_49:
    sub_2213CDC(max_length_low, v10);
  }
  v34 = SkillData->fields.svtSkillNumsList;
  if ( !v34 )
    goto LABEL_49;
  v35 = v34->max_length;
  if ( (int)v35 >= 1 )
  {
    v36 = (unsigned int)v34->max_length;
    v37 = entity;
    v38 = (unsigned int)v35 & ~((int)v35 >> 31);
    v39 = *p_svtSkillLvList;
    v40 = 0;
    v41 = unlockNums->m_Items;
    while ( 1 )
    {
      if ( !v39 )
        goto LABEL_49;
      max_length_low = LODWORD(v39->max_length);
      if ( v40 >= max_length_low )
        goto LABEL_48;
      v42 = (__int64)v39 + 4 * v40;
      v10 = (char *)v34 + 4 * v40;
      *(_DWORD *)(v42 + 32) = 0;
      max_length_low = v42 + 32;
      if ( (int)max_length >= 1 )
      {
        v43 = (unsigned int)max_length;
        v44 = v41;
        do
        {
          v45 = *v44++;
          if ( *((_DWORD *)v10 + 8) == v45 )
            *(_DWORD *)max_length_low = 1;
          --v43;
        }
        while ( v43 );
      }
      if ( v37 )
      {
        klass = v37[5].klass;
        if ( !klass )
          goto LABEL_49;
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
          break;
      }
LABEL_39:
      if ( ++v40 == v38 )
        return SkillData;
    }
    v48 = (unsigned int)namespaze & ~((int)namespaze >> 31);
    v49 = 0;
    v50 = (unsigned int)klass->_1.namespaze;
    p_byval_arg = &klass->_1.byval_arg;
    while ( v40 < v36 && v50 != v49 )
    {
      if ( *((_DWORD *)v10 + 8) == *((_DWORD *)&p_byval_arg->data + v49) )
      {
        monitor = v37[5].monitor;
        if ( !monitor )
          goto LABEL_49;
        if ( v49 >= (unsigned int)monitor[6] )
          break;
        *(_DWORD *)max_length_low = monitor[v49 + 8];
      }
      if ( v48 == ++v49 )
        goto LABEL_39;
    }
LABEL_48:
    sub_2213CE4(max_length_low);
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
  __int64 v19; // x1
  __int64 v20; // x28
  __int64 v21; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x26
  Il2CppObject *v23; // x26
  const MethodInfo *v24; // x2
  int32_t ServantId; // w0
  const MethodInfo *v26; // x2
  unsigned __int64 v27; // x24
  char v28; // w27
  SkillLvEntity_o *Entity; // x0
  int32_t v30; // w0
  signed __int64 i; // x24
  signed __int64 v32; // x8
  SkillInfo_o *v33; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v35; // x0
  const MethodInfo *isGrand; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v38; // [xsp+8h] [xbp-98h]
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_5971891 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971891 = 1;
  }
  titleList = 0;
  idList = 0;
  skillInfoList = 0;
  explanationList = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v44.fields.currentCryptoKey = v20;
  *(_QWORD *)&v44.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
  if ( !v22
    || (DataMasterBase_object__object__int___GetEntity(
          v22,
          (int32_t)Instance,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_34:
    sub_2213CDC(Instance, id);
  }
  v23 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  ServantId = UserServantEntity__GetServantId(this, -1, v24);
  UserServantEntity__GetPassiveSkillInfo(
    this,
    &idList,
    &titleList,
    &explanationList,
    ServantId,
    wearesDispLimitCount,
    nowTime,
    1,
    0,
    v38);
  if ( idList )
  {
    v27 = 0;
    v28 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v27 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_34;
      if ( v27 >= LODWORD(idList->max_length) )
LABEL_35:
        sub_2213CE4(Instance);
      id = (unsigned int)idList->m_Items[v27];
      if ( (int)id >= 1 )
      {
        if ( !v23 )
          goto LABEL_34;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)v23, id, 1, 0);
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
            return v28;
          }
        }
      }
      ++v27;
    }
  }
  v30 = UserServantEntity__GetServantId(this, -1, v26);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v30, -1, -1, 1, finishEvent, -1, isGrand);
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v32 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL);
    v28 = i < v32;
    if ( i >= v32 )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( i >= (unsigned __int64)LODWORD(skillInfoList->max_length) )
      goto LABEL_35;
    v33 = skillInfoList->m_Items[i];
    if ( v33 )
    {
      id = (unsigned int)v33->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v33->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v23 )
            goto LABEL_34;
          v35 = SkillLvMaster__GetEntity((SkillLvMaster_o *)v23, id, lv, 0);
          if ( v35 )
          {
            if ( SkillLvEntity__getEventUpVal(
                   v35,
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
  return v28;
}


bool UserServantEntity__getBaseEventUpVal_50187060(
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
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  Il2CppObject *v20; // x20
  const MethodInfo *v21; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v23; // w27
  const MethodInfo *v24; // x2
  int32_t ServantId; // w0
  const MethodInfo *v26; // x2
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  __int64 v29; // x25
  __int64 v30; // x26
  ServantPassiveSkillMaster_o *v31; // x24
  ServantPassiveSkillEntity_array *ServantSkillList; // x24
  int v33; // w26
  int32_t v34; // w0
  bool IsServantEquip; // w8
  int v36; // w9
  unsigned int *v37; // x8
  __int64 v38; // x21
  unsigned __int64 v39; // x22
  SkillInfo_o *v40; // x8
  int32_t lv; // w2
  unsigned __int64 v43; // x27
  SkillLvEntity_o *v44; // x25
  int32_t v45; // w7
  il2cpp_array_size_t max_length; // x8
  __int64 v47; // x23
  const MethodInfo *isGranda; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v49; // [xsp+8h] [xbp-98h]
  ServantEntity_o *Entity; // [xsp+10h] [xbp-90h]
  int32_t otherValidEventId; // [xsp+1Ch] [xbp-84h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-78h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_5971893 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971893 = 1;
  }
  titleList = 0;
  idList = 0;
  skillInfoList = 0;
  explanationList = 0;
  otherValidEventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v56.fields.currentCryptoKey = v17;
  *(_QWORD *)&v56.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v56, 0);
  if ( !v19 )
    goto LABEL_59;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                v19,
                                (int32_t)Instance,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v21);
  v23 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  ServantId = UserServantEntity__GetServantId(this, -1, v24);
  UserServantEntity__GetPassiveSkillInfo(
    this,
    &idList,
    &titleList,
    &explanationList,
    ServantId,
    v23,
    nowTime,
    useDatabaseGrandStatus,
    isGrand,
    v49);
  if ( idList )
  {
    if ( otherValidEventIdFilter )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, id);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
      v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v31 = (ServantPassiveSkillMaster_o *)Master_object;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
      *(_QWORD *)&v57.fields.currentCryptoKey = v29;
      *(_QWORD *)&v57.fields.fakeValue = v30;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v57, 0);
      if ( !v31 )
        goto LABEL_59;
      ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(v31, (int32_t)Instance, 0);
    }
    else
    {
      ServantSkillList = 0;
    }
    v43 = 0;
    v33 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v43 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !idList )
        goto LABEL_59;
      if ( v43 >= LODWORD(idList->max_length) )
LABEL_60:
        sub_2213CE4(Instance);
      id = (unsigned int)idList->m_Items[v43];
      if ( (int)id >= 1 )
      {
        if ( !v20 )
          goto LABEL_59;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v20, id, 1, 0);
        if ( Instance )
        {
          v44 = (SkillLvEntity_o *)Instance;
          v45 = -1;
          otherValidEventId = -1;
          if ( ServantSkillList )
          {
            max_length = ServantSkillList->max_length;
            if ( (int)max_length >= 1 )
            {
              v47 = 0;
              do
              {
                if ( (unsigned int)v47 >= (unsigned int)max_length )
                  goto LABEL_60;
                Instance = (DataManager_o *)ServantSkillList->m_Items[v47];
                if ( !Instance )
                  goto LABEL_59;
                if ( HIDWORD(Instance->fields.m_CancellationTokenSource) == v44->fields.skillId )
                {
                  Instance = (DataManager_o *)ServantPassiveSkillEntity__TryGetOtherValidEventId(
                                                (ServantPassiveSkillEntity_o *)Instance,
                                                &otherValidEventId,
                                                0);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                    break;
                  max_length = ServantSkillList->max_length;
                }
                ++v47;
              }
              while ( (int)v47 < (int)max_length );
              v45 = otherValidEventId;
            }
          }
          v33 |= SkillLvEntity__getEventUpVal_49920836(v44, eventUpVallInfo, 1, 1, 0, 0, nowTime, v45, 0);
        }
      }
      ++v43;
    }
  }
  else
  {
    LOBYTE(v33) = 0;
  }
  v34 = UserServantEntity__GetServantId(this, -1, v26);
  UserServantEntity__GetSkillInfo(this, &skillInfoList, v34, -1, -1, 1, 0, -1, isGranda);
  Instance = (DataManager_o *)Entity;
  if ( !Entity )
    goto LABEL_59;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  v36 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( IsServantEquip )
  {
    if ( !v36 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v37 = (unsigned int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL);
  }
  else
  {
    if ( !v36 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v37 = (unsigned int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL);
  }
  v38 = *v37;
  if ( (int)v38 >= 1 )
  {
    v39 = 0;
    while ( skillInfoList )
    {
      if ( v39 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_60;
      v40 = skillInfoList->m_Items[v39];
      if ( v40 )
      {
        id = (unsigned int)v40->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v40->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v20 )
              break;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v20, id, lv, 0);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_49920836(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0,
                                            -1,
                                            0);
              LOBYTE(v33) = (unsigned __int8)Instance | v33;
            }
          }
        }
      }
      if ( v38 == ++v39 )
        return v33 & 1;
    }
LABEL_59:
    sub_2213CDC(Instance, id);
  }
  return v33 & 1;
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
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718A1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return (int32_t)Instance[13].klass;
}


int32_t UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59718A7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CombineQpMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
  if ( !v9
    || (Entity = ServantLimitMaster__GetEntity(v9, v10, (int32_t)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity((CombineQpMaster_o *)Instance, Entity->fields.rarity, this->fields.lv, 0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59718B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
  if ( !v9
    || (Entity = ServantLimitMaster__GetEntity(v9, v10, (int32_t)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_2213CDC(0, v3);
  return SvtExceedEnt->fields.qp;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59718CF & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718CF = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, ignoreRandomSettings);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
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
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  __int128 v7; // q1
  int v8; // w8
  int64_t v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59718DE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v7 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
  v16 = v17;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v16, 0);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v9;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !MasterData_object )
LABEL_10:
    sub_2213CDC(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v13,
           (int32_t)Instance,
           v14);
}


int32_t UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59718C8 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718C8 = 1;
  }
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, ignoreRandomSettings);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(this, -1, ignoreRandomSettings, 0, v8);
  return LimitCountUtility__ConvertStageToLimitCount(v7, DispLimitCountStage, 0, 0);
}


void UserServantEntity__getEquipSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        bool useUserSvtId,
        const MethodInfo *method)
{
  long double v6; // q0
  __int64 v7; // x0
  char v8; // w8
  __int64 v9; // x0
  ServantSkillEntity_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  BalanceConfig_c *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x27
  SkillInfo_array *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int128 v24; // q1
  __int64 v25; // x1
  int64_t userSvtId; // x23
  unsigned __int64 v27; // x29
  __int64 i; // x19
  BalanceConfig_c *v29; // x0
  SkillInfo_o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x25
  __int64 v33; // x26
  __int64 v34; // x1
  int32_t v35; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v37; // x22
  __int128 v38; // q1
  int v39; // w8
  int64_t v40; // x27
  int32_t lv; // w26
  ServantSkillEntity_o *v42; // x25
  int32_t v43; // w4
  int32_t skillNum; // w8
  unsigned int *v45; // x25
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x0
  __int64 v54; // [xsp+30h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_597188A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&SkillInfo___TypeInfo);
    sub_2213A60(&SkillInfo_TypeInfo);
    byte_597188A = 1;
  }
  *(_OWORD *)&v6 = 0u;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  v8 = *(_BYTE *)(v7 + 309);
  memset(&v59, 0, sizeof(v59));
  if ( (v8 & 1) == 0 )
    v7 = sub_224B908(COERCE_LONG_DOUBLE((unsigned __int128)0LL));
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v6);
  UseEntity = **(ServantSkillEntity_o ***)(v9 + 184);
  if ( !UseEntity )
LABEL_38:
    sub_2213CDC(UseEntity, skillInfoList);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UseEntity,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v12 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
          this,
          this->klass->vtable._6_getSkillLevelList.method);
  v14 = BalanceConfig_TypeInfo;
  v54 = v12;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v16 = (SkillInfo_array *)sub_2213B20(SkillInfo___TypeInfo, (unsigned int)v14->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  if ( useUserSvtId )
  {
    v24 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v59.fields.fakeValue = v24;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v59, -1, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
  v58 = v59;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v58, 0);
  v27 = 0;
  for ( i = 8; ; i += 2 )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
      v29 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v27 >= v29->static_fields->SvtEquipSkillListMax )
      break;
    v30 = (SkillInfo_o *)sub_2213CCC(SkillInfo_TypeInfo);
    SkillInfo___ctor(v30, 0);
    v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    *(_QWORD *)&v60.fields.currentCryptoKey = v32;
    *(_QWORD *)&v60.fields.fakeValue = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v60, 0);
    v36 = *v15;
    v37 = v15;
    v38 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v39 = *(&(*v15)->_2.cctor_finished + 1);
    *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v57.fields.fakeValue = v38;
    if ( !v39 )
      j_il2cpp_runtime_class_init_0(v36, v34);
    v56 = v57;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v56, 0);
    lv = this->fields.lv;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                          this->fields.limitCount,
                                          0);
    if ( !MasterData_object )
      goto LABEL_38;
    UseEntity = ServantSkillMaster__getUseEntity(
                  (ServantSkillMaster_o *)MasterData_object,
                  v35,
                  (int)v27 + 1,
                  v40,
                  lv,
                  (int32_t)UseEntity,
                  -1,
                  -1,
                  -1,
                  userSvtId,
                  0,
                  0);
    if ( UseEntity )
    {
      if ( !v30 )
        goto LABEL_38;
      v42 = UseEntity;
      v30->fields.id = UseEntity->fields.skillId;
      if ( !v54 )
        goto LABEL_38;
      if ( v27 >= *(unsigned int *)(v54 + 24) )
        goto LABEL_39;
      v43 = *(_DWORD *)(v54 + 32 + 4 * v27);
      v15 = v37;
      v30->fields.lv = v43;
      ServantSkillEntity__getEffectExplanation(
        UseEntity,
        &v30->fields.charge,
        &v30->fields.title,
        &v30->fields.explanation,
        v43,
        1,
        0);
      UseEntity = (ServantSkillEntity_o *)ServantSkillEntity__GetStrengthStatus(v42, -1, 0);
      skillNum = v42->fields.skillNum;
      v30->fields.strengthStatus = (int)UseEntity;
      v30->fields.skillRecord = skillNum;
      v30->fields.isUse = 1;
    }
    else
    {
      if ( !v30 )
        goto LABEL_38;
      v15 = v37;
      v30->fields.lv = -1;
    }
    v45 = (unsigned int *)*skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_38;
    UseEntity = (ServantSkillEntity_o *)sub_2213BB4(v30, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
    if ( !UseEntity )
    {
      v53 = sub_2213D00(0, v46);
      sub_2213BA0(v53, 0);
    }
    if ( v27 >= v45[6] )
LABEL_39:
      sub_2213CE4(UseEntity);
    *(_QWORD *)&v45[i] = v30;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45[i], (int32_t)v30, v47, v48, v49, v50, v51, v52);
    ++v27;
  }
}


EventServantEntity_o *UserServantEntity__getEventServant(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  EventServantEntity_o *result; // x0
  EventServantEntity_o *v6; // x20
  __int64 v7; // x26
  __int64 v8; // x8
  EventServantMaster_o *v9; // x21
  int32_t v10; // w22
  __int64 v11; // x23
  __int64 v12; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59718AE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_18;
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0, 0);
  if ( result )
  {
    v6 = result;
    if ( result->fields.type >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventServantMaster___);
        if ( (unsigned int)v7 >= v6->fields.type )
          sub_2213CE4(Instance);
        v8 = *((_QWORD *)&v6->fields.joinMessage + v7);
        if ( !v8 )
          break;
        v9 = (EventServantMaster_o *)Instance;
        v10 = *(_DWORD *)(v8 + 16);
        v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
        *(_QWORD *)&v13.fields.currentCryptoKey = v11;
        *(_QWORD *)&v13.fields.fakeValue = v12;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
        if ( !v9 )
          break;
        result = EventServantMaster__getEntity(v9, v10, (int32_t)Instance, 0);
        if ( result )
          return result;
        if ( (int)++v7 >= v6->fields.type )
          return 0;
      }
LABEL_18:
      sub_2213CDC(Instance, v4);
    }
    return 0;
  }
  return result;
}


EventServantEntity_o *UserServantEntity__getEventServantIgnoreEnd(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  EventServantMaster_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718AF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718AF = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = (EventServantMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  return EventServantMaster__getEntityServantIgnoreEnd(v7, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *UserServantEntity__getEventServant_50197900(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_59718B0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718B0 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0;
  v6 = EventServant;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v6->fields.eventId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v8);
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
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v15; // w0
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5971890 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971890 = 1;
  }
  if ( !setupInfo )
    return 0;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v13);
  v15 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return UserServantEntity__getBaseEventUpVal(this, v11, v12, v15, setupInfo, eventId, 0, nowTime, v17);
}


bool UserServantEntity__getEventUpVal_50186380(
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


bool UserServantEntity__getEventUpVal_50186428(
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
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v22; // w29
  EventUpValInfo_o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v33; // x6
  char v34; // w22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int64_t v37; // x2
  Il2CppClass *klass; // x23
  void *monitor; // x25
  EventUpValInfo_o *v40; // x29
  const MethodInfo *v41; // x6
  int32_t v42; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_5971892 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&EventUpValInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971892 = 1;
  }
  entity = 0;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v16;
  *(_QWORD *)&v46.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v46, 0);
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v20);
  v22 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  v23 = (EventUpValInfo_o *)sub_2213CCC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v23, setupInfo, v18, v19, v22, 0, 0);
  *eventUpVallInfo = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)eventUpVallInfo, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_2213CDC(Instance, v31);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_50187060(
                               this,
                               eventUpVallInfo,
                               nowTime,
                               useDatabaseGrandStatus,
                               isGrand,
                               otherValidEventIdFilter,
                               v33);
  v34 = (char)Instance;
  if ( equipIds )
  {
    max_length = equipIds->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        v37 = equipIds->m_Items[i];
        if ( v37 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_21;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                       &entity,
                                       v37,
                                       (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_21;
            klass = entity[5].klass;
            monitor = entity[5].monitor;
            v40 = *eventUpVallInfo;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
            *(_QWORD *)&v47.fields.currentCryptoKey = klass;
            *(_QWORD *)&v47.fields.fakeValue = monitor;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
            if ( !v40 )
              goto LABEL_21;
            v42 = (int)Instance;
            Instance = entity;
            v40->fields.equipSvtId = v42;
            if ( !Instance )
              goto LABEL_21;
            Instance = (Il2CppObject *)UserServantEntity__getBaseEventUpVal_50187060(
                                         (UserServantEntity_o *)Instance,
                                         eventUpVallInfo,
                                         nowTime,
                                         1,
                                         0,
                                         0,
                                         v41);
            v34 |= (unsigned __int8)Instance;
          }
        }
        LODWORD(max_length) = equipIds->max_length;
      }
    }
  }
  return v34 & 1;
}


int32_t UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  ServantLimitMaster_o *v11; // x21
  int32_t v12; // w22
  ServantLimitEntity_o *v13; // x21
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_59718D5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718D5 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                               this->fields.limitCount,
                               0);
  if ( !v11 )
    goto LABEL_14;
  v13 = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v13 || !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)ServantExceedMaster__TryGetEntity(
                               (ServantExceedMaster_o *)Instance,
                               &entity,
                               v13->fields.rarity,
                               cnt,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v13->fields.lvMax;
LABEL_14:
    sub_2213CDC(Instance, v6);
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
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v17; // x1
  int lv; // w2
  ServantExpMaster_o *v19; // x24
  int m_CancellationTokenSource; // w25
  float v21; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_59718A3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
  if ( !v15 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             (int32_t)Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v17) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v19 = (ServantExpMaster_o *)Instance;
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
      lv = this->fields.lv;
    }
    else
    {
      if ( !Entity || !Instance )
        goto LABEL_21;
      m_CancellationTokenSource = 0;
    }
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v19, HIDWORD(Entity[8].klass), lv, 0);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v21 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_2213CDC(Instance, v10);
  }
  v21 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v21;
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
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59718DC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718DC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                this->fields.limitCount,
                                0);
  if ( !v9
    || (Entity = ServantLimitMaster__GetEntity(v9, v10, (int32_t)Instance, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(Instance, v4);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0);
}


int32_t UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsGrandServant; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x22
  __int64 v8; // x23
  ServantExceedMaster_o *v9; // x21
  int32_t v10; // w22
  __int64 Rarity; // x0
  __int64 v12; // x1
  int32_t FrameType_49706744; // w21
  Il2CppObject *v14; // x22
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_59718D9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718D9 = 1;
  }
  IsGrandServant = UserServantEntity__IsGrandServant(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantExceedMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v17.fields.currentCryptoKey = v7;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  Rarity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.limitCount, 0);
  if ( !v9
    || (FrameType_49706744 = ServantExceedMaster__GetFrameType_49706744(
                               v9,
                               v10,
                               Rarity,
                               this->fields.exceedCount,
                               IsGrandServant,
                               0),
        v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___),
        Rarity = UserServantEntity__getRarity(this, v15),
        !v14) )
  {
    sub_2213CDC(Rarity, v12);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v14,
           Rarity,
           this->fields.lv,
           FrameType_49706744,
           IsGrandServant,
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
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  __int128 v7; // q1
  int v8; // w8
  int64_t v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59718A2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v7 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
  v16 = v17;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v16, 0);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v9;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !MasterData_object
    || (Instance = UserServantCollectionMaster__GetEntityDefinitely(
                     (UserServantCollectionMaster_o *)MasterData_object,
                     v13,
                     (int32_t)Instance,
                     v14)) == 0 )
  {
LABEL_11:
    sub_2213CDC(Instance, v4);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 108),
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
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v12; // x8
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_59718A8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                               this->fields.limitCount,
                               0);
  if ( !v9
    || (Entity = ServantLimitMaster__GetEntity(v9, v10, (int32_t)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_13:
    sub_2213CDC(Instance, v4);
  }
  v12 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0);
  result = Entity->fields.lvMax;
  if ( v12 )
    result += v12->fields.addLvMax;
  return result;
}


int32_t UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59718A9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return (int32_t)Instance[5].monitor;
}


int32_t UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_5971885 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971885 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v6, 0);
}


int32_t UserServantEntity__getMagnification(
        UserServantEntity_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x19
  int32_t combineMaterialId; // w21
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v4 = this;
  if ( (byte_59718A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_2213A60(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UserServantEntity_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A0 = 1;
  }
  entity = 0;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_2213CDC(this, svtEntity);
  if ( HIDWORD(entity[1].klass) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0) )
    return v4->fields.treasureDeviceLv1;
  v9 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0) + 1;
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
  long double v9; // q0
  __int64 v10; // x0
  char v11; // w8
  __int64 v12; // x0
  DataManager_o *UseEntity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  BalanceConfig_c *v16; // x8
  ServantSkillMaster_o *v17; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v18; // x28
  System_Int32_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int128 v34; // q1
  __int64 v35; // x22
  __int64 i; // x19
  BalanceConfig_c *v37; // x0
  unsigned __int64 v38; // x20
  SkillInfo_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x26
  __int64 v42; // x27
  __int64 v43; // x1
  int32_t v44; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v46; // x25
  __int128 v47; // q1
  int v48; // w8
  int64_t v49; // x29
  int32_t lv; // w28
  System_Int32_array *v51; // x8
  int32_t m_CancellationTokenSource_high; // w9
  System_String_array *v53; // x27
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x27
  __int64 v61; // x28
  __int64 v62; // x1
  int32_t v63; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v64; // x0
  __int128 v65; // q1
  int v66; // w8
  int64_t v67; // x0
  ServantSkillEntity_o *v68; // x0
  ServantSkillEntity_o *v69; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v70; // x0
  __int128 v71; // q1
  int v72; // w8
  int64_t v73; // x0
  int64_t userSvtId; // [xsp+48h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+B0h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+F0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_597188B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&SkillInfo_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_597188B = 1;
  }
  *(_OWORD *)&v9 = 0u;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  v11 = *(_BYTE *)(v10 + 309);
  memset(&v84, 0, sizeof(v84));
  if ( (v11 & 1) == 0 )
    v10 = sub_224B908(COERCE_LONG_DOUBLE((unsigned __int128)0LL));
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v9);
  UseEntity = **(DataManager_o ***)(v12 + 184);
  if ( !UseEntity )
LABEL_46:
    sub_2213CDC(UseEntity, idList);
  MasterData_object = DataManager__GetMasterData_object_(
                        UseEntity,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v16 = BalanceConfig_TypeInfo;
  v17 = (ServantSkillMaster_o *)MasterData_object;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
    v16 = BalanceConfig_TypeInfo;
  }
  v18 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v19 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  *idList = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_String_array *)sub_2213B20(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillNameList, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  if ( useUserSvtId )
  {
    v34 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v84.fields.fakeValue = v34;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v84, -1, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33);
  v83 = v84;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v83, 0);
  v35 = 32;
  for ( i = 8; ; ++i )
  {
    v37 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, idList);
      v37 = BalanceConfig_TypeInfo;
    }
    v38 = i - 8;
    if ( i - 8 >= v37->static_fields->SvtSkillListMax )
      break;
    v39 = (SkillInfo_o *)sub_2213CCC(SkillInfo_TypeInfo);
    SkillInfo___ctor(v39, 0);
    v41 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    *(_QWORD *)&v85.fields.currentCryptoKey = v41;
    *(_QWORD *)&v85.fields.fakeValue = v42;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v85, 0);
    v45 = *v18;
    v46 = v18;
    v47 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v48 = *(&(*v18)->_2.cctor_finished + 1);
    *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v82.fields.fakeValue = v47;
    if ( !v48 )
      j_il2cpp_runtime_class_init_0(v45, v43);
    v81 = v82;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v81, 0);
    lv = this->fields.lv;
    UseEntity = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                   this->fields.limitCount,
                                   0);
    if ( !v17 )
      goto LABEL_46;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   v17,
                                   v44,
                                   (int)i - 7,
                                   v49,
                                   lv,
                                   (int32_t)UseEntity,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0);
    if ( UseEntity )
    {
      v51 = *idList;
      if ( !*idList )
        goto LABEL_46;
      if ( v38 >= LODWORD(v51->max_length) )
        goto LABEL_47;
      m_CancellationTokenSource_high = HIDWORD(UseEntity->fields.m_CancellationTokenSource);
      v18 = v46;
    }
    else
    {
      v60 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
      *(_QWORD *)&v86.fields.currentCryptoKey = v60;
      *(_QWORD *)&v86.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v86, 0);
      v64 = *v46;
      v18 = v46;
      v65 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v66 = *(&(*v46)->_2.cctor_finished + 1);
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v82.fields.fakeValue = v65;
      if ( !v66 )
        j_il2cpp_runtime_class_init_0(v64, v62);
      v80 = v82;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v80, 0);
      v68 = ServantSkillMaster__getUseEntity(v17, v63, (int)i - 7, v67, targetLv, targetLimitCnt, -1, -1, -1, -1, 0, 0);
      if ( !v68 )
        goto LABEL_33;
      v69 = v68;
      v70 = *v46;
      v71 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v72 = *(&(*v46)->_2.cctor_finished + 1);
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v82.fields.fakeValue = v71;
      if ( !v72 )
        j_il2cpp_runtime_class_init_0(v70, idList);
      v79 = v82;
      v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v79, 0);
      UseEntity = (DataManager_o *)ServantSkillEntity__isUse(v69, v73, targetLv, targetLimitCnt, -1, -1, -1, -1, 0);
      if ( ((unsigned __int8)UseEntity & 1) == 0 )
        goto LABEL_33;
      v51 = *idList;
      if ( !*idList )
        goto LABEL_46;
      if ( v38 >= LODWORD(v51->max_length) )
LABEL_47:
        sub_2213CE4(UseEntity);
      m_CancellationTokenSource_high = v69->fields.skillId;
      UseEntity = (DataManager_o *)v69;
    }
    *((_DWORD *)&v51->obj.klass + i) = m_CancellationTokenSource_high;
    v53 = *skillNameList;
    UseEntity = (DataManager_o *)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0);
    if ( !v53 )
      goto LABEL_46;
    if ( v38 >= LODWORD(v53->max_length) )
      goto LABEL_47;
    *(Il2CppClass **)((char *)&v53->obj.klass + v35) = (Il2CppClass *)UseEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v53 + v35),
      (int32_t)UseEntity,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
LABEL_33:
    v35 += 8;
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
  __int64 v10; // x1
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w23
  int32_t v14; // w24
  const MethodInfo *v15; // x4
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v17; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5971896 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971896 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  ServantId = UserServantEntity__GetServantId(this, -1, *(const MethodInfo **)&rarity);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v13 = ServantId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v15);
  v17 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsRestriction_50436376(
           questRestrictionInfo,
           v13,
           v14,
           v17,
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
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_59718BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( !v9 || (Instance = ServantLimitMaster__GetEntity(v9, v12, (int32_t)Instance, 0)) == 0 )
LABEL_9:
    sub_2213CDC(Instance, v4);
  return *((_DWORD *)Instance + 6);
}


int32_t UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_597189E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597189E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  if ( !v9
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v9,
                                      (int32_t)Instance,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v11),
        !Entity) )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_597189D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597189D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  if ( !v9
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v9,
                                      (int32_t)Instance,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v11),
        !Entity) )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_597189F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597189F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  if ( !v9
    || (Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v9,
                                      (int32_t)Instance,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (Il2CppObject *)UserServantEntity__getMagnification(this, Entity, v11),
        !Entity) )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
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


// local variable allocation has failed, the output may be wrong!
int32_t UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_5971886 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971886 = 1;
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
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&iIdx);
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

  if ( (byte_5971887 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_5971887 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_2213B20(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_2213CDC(0, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_2213CE4(v4);
  }
  skillLv3 = this->fields.skillLv3;
  v4 = BalanceConfig_TypeInfo;
  v9 = 11;
  v7->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v5);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( v9 - 8 >= v4->static_fields->SvtEquipSkillListMax )
      return (System_Int32_array *)v7;
    if ( v9 - 8 >= (unsigned __int64)LODWORD(v7->_1.namespaze) )
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
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitMaster_o *v13; // x22
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_59718D4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !v13 || (Instance = ServantLimitMaster__GetEntity(v13, v16, (int32_t)Instance, 0)) == 0 )
LABEL_9:
    sub_2213CDC(Instance, v8);
  *hpUp = *((_DWORD *)Instance + 9);
  *atkUp = *((_DWORD *)Instance + 11);
}


int32_t UserServantEntity__getSvtClassGroupType(UserServantEntity_o *this, int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_59718A6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v5);
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
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_59718A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( !v13
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v13,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v8);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Instance, isPlayableBeastToBase, isGrandServant, 0);
}


ServantExceedEntity_o *UserServantEntity__getSvtExceedEnt(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1

  if ( (byte_59718D8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (Il2CppObject *)UserServantEntity__getRarity(this, v6),
        !MasterData_object) )
  {
    sub_2213CDC(Instance, v4);
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

  if ( (byte_5971884 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971884 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v6, 0);
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


bool UserServantEntity__getTreasureDeviceInfo_50192116(
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
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  int treasureDeviceLv1; // w8
  NetworkManager_c *v16; // x0
  int64_t userIdNumber; // x23
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v19; // w22
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v22; // x25
  __int64 v23; // x26
  const MethodInfo *v24; // x3
  int32_t v25; // w23
  long double v26; // q0
  __int64 v27; // x8
  __int64 v28; // x0
  Il2CppObject *v29; // x0
  __int64 v30; // x8
  ServantTreasureDvcMaster_o *v31; // x21
  __int64 v32; // x1
  int32_t v33; // w24
  __int128 v34; // q1
  int64_t v35; // x0
  __int64 v36; // x8
  int32_t lv; // w25
  int64_t v38; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int32_t LevelMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_597189C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597189C = 1;
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
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    v16 = NetworkManager_TypeInfo;
  }
  userIdNumber = v16->static_fields->userIdNumber;
  DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(this, -1, 0, 0, v14);
  v19 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v23;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
  if ( !MasterData_object )
    goto LABEL_32;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)MasterData_object,
               userIdNumber,
               (int32_t)Instance,
               v24);
  if ( !Instance )
    goto LABEL_32;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 108),
          0);
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908(v26);
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
    v28 = sub_224B908(v26);
  Instance = **(void ***)(v28 + 184);
  if ( !Instance )
    goto LABEL_32;
  v29 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v30 = *(_QWORD *)(v12 + 16);
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)(v12 + 24);
  v31 = (ServantTreasureDvcMaster_o *)v29;
  *(_QWORD *)&v45.fields.currentCryptoKey = v30;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v45, 0);
  v34 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v34;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
  v42 = v43;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v42, 0);
  v36 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v38 = v35;
  *(_QWORD *)&v46.fields.currentCryptoKey = v36;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v46, 0);
  if ( !v31 )
LABEL_32:
    sub_2213CDC(Instance, v10);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(v31, v33, v38, lv, (int32_t)Instance, v19, v25, -1, 0);
  if ( UseEntity )
  {
    LevelMax = ServantTreasureDvcEntity__getLevelMax(UseEntity, 0);
    LOBYTE(UseEntity) = 1;
    *tdMaxLv = LevelMax;
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

  if ( (byte_5971897 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971897 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
  return QuestRestrictionInfo__IsUniqueServant_50439864(questRestrictionInfo, v7, 0);
}


bool UserServantEntity__getUniqueSvtRestriction_50190092(
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

  if ( (byte_5971898 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971898 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  return QuestRestrictionInfo__IsUniqueServant_50440168(questRestrictionInfo, v13, partyItem, num, partyIndex, 0);
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
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  ServantSkillMaster_o *v15; // x23
  int max_length; // w8
  ServantSkillEntity_array *v17; // x23
  unsigned int v18; // w20
  Il2CppClass **v19; // x8
  ServantSkillEntity_o *v20; // x24
  __int128 v21; // q1
  int v22; // w8
  int64_t v23; // x0
  __int64 v24; // x1
  __int64 v25; // x27
  __int64 v26; // x28
  int32_t lv; // w25
  int64_t v28; // x26
  int32_t v29; // w0
  __int128 v30; // q1
  int v31; // w8
  int64_t v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_59718B4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_59718B4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v7);
  ServantSkillList = **(ServantSkillEntity_array ***)(v9 + 184);
  if ( !ServantSkillList )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ServantSkillList,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (ServantSkillMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v49.fields.currentCryptoKey = v13;
  *(_QWORD *)&v49.fields.fakeValue = v14;
  ServantSkillList = (ServantSkillEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v49,
                                                   0);
  if ( !v15 )
    goto LABEL_33;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v15, (int32_t)ServantSkillList, 0);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  v17 = ServantSkillList;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_2213CE4(ServantSkillList);
      v19 = &v17->obj.klass + (int)v18;
      v20 = (ServantSkillEntity_o *)v19[4];
      if ( !v20 )
        break;
      ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v19[4], 0, 0);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v21 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v21;
        if ( !v22 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
        v47 = v48;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v47, 0);
        v25 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v26 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        lv = this->fields.lv;
        v28 = v23;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
        *(_QWORD *)&v50.fields.currentCryptoKey = v25;
        *(_QWORD *)&v50.fields.fakeValue = v26;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v50, 0);
        ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(v20, v28, lv, v29, -1, -1, -1, -1, 0);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v30 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
          v46 = v48;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v46, 0);
          ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                           v20,
                                                           v32,
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
            v40 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v20,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v20;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v20, v33, v34, v35, v36, v37, v38);
            }
          }
        }
      }
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_2213CDC(ServantSkillList, v6);
  }
LABEL_31:
  if ( !v5 )
    goto LABEL_33;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


int64_t UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_5971883 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971883 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
}


int32_t UserServantEntity__get_AtkBoostValue(UserServantEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustAtk; // w20
  int32_t StatusUpAdjustAtk; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1

  if ( (byte_5971878 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971878 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustAtk = this->fields.adjustAtk;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustAtk = v3->static_fields->StatusUpAdjustAtk;
  GrandInfo = UserServantEntity__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_2213CDC(0, v7);
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
  struct UserServantGrandInfo_o *grandInfo; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971876 & 1) == 0 )
  {
    sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_5971876 = 1;
  }
  grandInfo = this->fields.grandInfo;
  if ( !grandInfo )
  {
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method);
    grandInfo = UserServantGrandInfo__Make(this, 0, 0);
    this->fields.grandInfo = grandInfo;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_5971877 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971877 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustHp = this->fields.adjustHp;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustHp = v3->static_fields->StatusUpAdjustHp;
  GrandInfo = UserServantEntity__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_2213CDC(0, v7);
  return UserServantGrandInfo__get_AddedHp(GrandInfo, 0) + StatusUpAdjustHp * adjustHp;
}


bool UserServantEntity__get_IsEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *baseServantEntity; // x0

  UserServantEntity__Init(this, method);
  baseServantEntity = this->fields.baseServantEntity;
  if ( !baseServantEntity )
    sub_2213CDC(0, v3);
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


bool UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  Il2CppObject *v10; // x20
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  __int128 v13; // q1
  int v14; // w8
  int64_t v15; // x0
  __int64 v16; // x8
  int64_t v17; // x19
  const MethodInfo *v18; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_59718D7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59718D7 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v24.fields.currentCryptoKey = v7;
  *(_QWORD *)&v24.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v24, 0);
  if ( !v9 )
    goto LABEL_16;
  v10 = DataMasterBase_object__object__int___GetEntity(
          v9,
          (int32_t)Instance,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v13 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v13;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v21 = v22;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v21, 0);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v25.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = v15;
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v25, 0);
  if ( !v12
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)v12,
                             v17,
                             (int32_t)Instance,
                             v18),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v10)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_16:
    sub_2213CDC(Instance, v4);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            (int32_t)v10[6].klass,
            HIDWORD(v10[6].klass) + EntityDefinitely->fields.friendshipExceedCount + 1,
            0);
}


bool UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  __int64 Rarity; // x0
  __int64 v7; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59718D6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59718D6 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v5);
  if ( !Master_object )
    sub_2213CDC(Rarity, v7);
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
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_59718AA & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59718AA = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = LimitCntMax;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
}


void UserServantEntity__set_BaseServantEntity(
        UserServantEntity_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.baseServantEntity = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseServantEntity,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.saveTransformServantEntity = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.saveTransformServantEntity,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971900 & 1) == 0 )
  {
    sub_2213A60(&UserServantEntity___c_TypeInfo);
    byte_5971900 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantEntity___c_TypeInfo->static_fields->__9 = (struct UserServantEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserServantEntity___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}