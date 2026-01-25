void BattleCommandData___cctor(const MethodInfo *method)
{
  if ( (byte_4CF15D0 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommandData_TypeInfo);
    byte_4CF15D0 = 1;
  }
  BattleCommandData_TypeInfo->static_fields->PASS_STAR_DENOMINATOR = 100;
}


void BattleCommandData___ctor(BattleCommandData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF15BF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
    byte_4CF15BF = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  *(_QWORD *)&this->fields.selectedType = -1;
  this->fields.overwriteRateDataIndex = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.criticalStoreDict, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCommandData___ctor_47177600(
        BattleCommandData_o *this,
        int32_t type,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageSvtId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v13; // x25
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleDataDefine_c *v20; // x0
  int32_t CRITICAL_HIT_RANDOM_MAX; // w8

  if ( (byte_4CF15C0 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
    byte_4CF15C0 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  *(_QWORD *)&this->fields.selectedType = -1;
  this->fields.overwriteRateDataIndex = -1;
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v13;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.criticalStoreDict,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._type = type;
  this->fields.svtId = svtId;
  this->fields.imageSvtId = imageSvtId;
  this->fields.svtlimit = limitCount;
  this->fields.attri = 0;
  this->fields.starcount = 0;
  this->fields.critical = 0;
  this->fields.userCommandCodeId = -1;
  *(_QWORD *)&this->fields.commandAssistId = 0;
  *(_OWORD *)&this->fields._loadsvtLimit = xmmword_CF57E0;
  this->fields.commandCardParam = 0;
  v20 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v20 = BattleDataDefine_TypeInfo;
  }
  CRITICAL_HIT_RANDOM_MAX = v20->static_fields->CRITICAL_HIT_RANDOM_MAX;
  this->fields.servantCardIdsIndex = cardIndex;
  this->fields.criticalHitValue = CRITICAL_HIT_RANDOM_MAX;
}


void BattleCommandData___ctor_47177924(
        BattleCommandData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  int32_t loadsvtLimit; // w8

  if ( (byte_4CF15C1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
    byte_4CF15C1 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  *(_QWORD *)&this->fields.selectedType = -1;
  this->fields.overwriteRateDataIndex = -1;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.criticalStoreDict, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( command )
  {
    this->fields._type = BattleCommandData__get_type(command, v12);
    this->fields.imageSvtId = command->fields.imageSvtId;
    *(_QWORD *)&this->fields.svtId = *(_QWORD *)&command->fields.svtId;
    loadsvtLimit = command->fields._loadsvtLimit;
    if ( loadsvtLimit == -1 )
      loadsvtLimit = command->fields.svtlimit;
    this->fields._loadsvtLimit = loadsvtLimit;
    *(_QWORD *)&this->fields.uniqueId = *(_QWORD *)&command->fields.uniqueId;
    this->fields.treasureDvc = command->fields.treasureDvc;
    this->fields.starcount = command->fields.starcount;
    this->fields.flgEventJoin = command->fields.flgEventJoin;
    *(_QWORD *)&this->fields.attri = *(_QWORD *)&command->fields.attri;
    this->fields.userCommandCodeId = command->fields.userCommandCodeId;
    this->fields.commandAssistId = command->fields.commandAssistId;
    *(_QWORD *)&this->fields.commandCodeId = *(_QWORD *)&command->fields.commandCodeId;
    this->fields.servantCardIdsIndex = command->fields.servantCardIdsIndex;
  }
}


void BattleCommandData__ClearCommandCode(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.userCommandCodeId = -1;
  this->fields.commandCodeId = -1;
}


BattleBuffData_ShowBuffData_array *BattleCommandData__GetAtkShowBuffData(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  ServantCardAddEntity_o *ServantCardAddEntity; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  ServantCardAddEntity_o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4CF15CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    byte_4CF15CF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, v4);
  if ( !ServantCardAddEntity
    || (ServantCardAddEntity = (ServantCardAddEntity_o *)ServantCardAddEntity__GetOverwritesShowBuffData(
                                                           ServantCardAddEntity,
                                                           this->fields.overwriteRateDataIndex,
                                                           0)) == 0 )
  {
    if ( v3 )
      return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v3,
                                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
LABEL_10:
    sub_1C7BD40(ServantCardAddEntity, v6);
  }
  if ( !v3 )
    goto LABEL_10;
  items = v3->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v3->fields._size;
  v16 = ServantCardAddEntity;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)ServantCardAddEntity,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v16;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                v3,
                                                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


float BattleCommandData__GetAttackNpRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetAttackNpRate(ServantCardAddEntity, this->fields.overwriteRateDataIndex, 0);
  else
    return 1.0;
}


int32_t BattleCommandData__GetChangeTypeByTransform(BattleCommandData_o *this, const MethodInfo *method)
{
  __int64 v3; // x8
  int32_t svtId; // w20
  int32_t v5; // w21
  int32_t LimitImageIndex; // w20
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4CF15C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ServantAssetLoadManager_TypeInfo);
    byte_4CF15C7 = 1;
  }
  if ( this->fields._loadsvtLimit == -1 )
    v3 = 24;
  else
    v3 = 36;
  svtId = this->fields.svtId;
  v5 = *(_DWORD *)((char *)&this->klass + v3);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, v5, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v8);
  return ServantTransformMaster__GetCommandCardTypeChange(
           (ServantTransformMaster_o *)Master_object,
           this->fields.svtId,
           LimitImageIndex,
           this->fields.servantCardIdsIndex,
           0);
}


BattleBuffData_BuffData_o *BattleCommandData__GetCommandCardTypeChangeBuff(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *result; // x0

  result = (BattleBuffData_BuffData_o *)this->fields.battleBuffData;
  if ( result )
    return BattleBuffData__GetCommandCardTypeChangeBuff((BattleBuffData_o *)result, 0);
  return result;
}


BattleBuffData_BuffData_array *BattleCommandData__GetCommandCodeBuffArray(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *result; // x0

  result = (BattleBuffData_BuffData_array *)this->fields.battleBuffData;
  if ( result )
    return BattleBuffData__GetAllConnectedCommandCardBuff((BattleBuffData_o *)result, 0);
  return result;
}


float BattleCommandData__GetDefenseNpRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity, this->fields.overwriteRateDataIndex, 0);
  else
    return 1.0;
}


float BattleCommandData__GetDropStarRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity, this->fields.overwriteRateDataIndex, 0);
  else
    return 1.0;
}


int32_t BattleCommandData__GetImageServantId(BattleCommandData_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 92;
  if ( this->fields.imageSvtId <= 0 )
    v2 = 20;
  return *(_DWORD *)((char *)&this->klass + v2);
}


float BattleCommandData__GetNormalAttackDamageRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetDamageRate(ServantCardAddEntity, this->fields.overwriteRateDataIndex, 0);
  else
    return 1.0;
}


int32_t BattleCommandData__GetOriginalType(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields._type;
}


int32_t BattleCommandData__GetOverwriteSvtCardType(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.overwriteSvtCardType;
}


bool BattleCommandData__IsAllAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardEntity_o *ServantCardEntity; // x0

  ServantCardEntity = BattleCommandData__get_ServantCardEntity(this, method);
  if ( ServantCardEntity )
    LOBYTE(ServantCardEntity) = ServantCardEntity__IsAttackType(ServantCardEntity, 2, 0);
  return (char)ServantCardEntity;
}


bool BattleCommandData__IsCommandCardTypeChanged(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( this->fields.treasureDvc > 0 )
    return 0;
  type = this->fields._type;
  return type != BattleCommandData__get_type(this, method);
}


bool BattleCommandData__IsEnableCommandAssist(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.commandAssistId > 0;
}


bool BattleCommandData__IsEnableCommandCode(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId > 0;
}


bool BattleCommandData__IsForceAttackFunctionTargetAll(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    LOBYTE(ServantCardAddEntity) = ServantCardAddEntity__IsForceAttackFunctionTargetAll(ServantCardAddEntity, 0);
  return (char)ServantCardAddEntity;
}


bool BattleCommandData__LotteryPlayerSideCritical(BattleCommandData_o *this, const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  bool result; // w0

  if ( (byte_4CF15C8 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF15C8 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  result = this->fields.starcount > BattleRandom__getNext(v3->static_fields->CRITICAL_HIT_RANDOM_MAX, 0);
  this->fields.critical = result;
  return result;
}


void BattleCommandData__ResetCriticalStoreDict(BattleCommandData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *criticalStoreDict; // x0

  if ( (byte_4CF15CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__Clear__);
    byte_4CF15CC = 1;
  }
  criticalStoreDict = this->fields.criticalStoreDict;
  if ( !criticalStoreDict )
    sub_1C7BD40(0, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)criticalStoreDict,
    (const MethodInfo_3487898 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__Clear__);
}


void BattleCommandData__ResetNotRelatedParamsOnExtraAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.commandAssistId = 0;
  this->fields.userCommandCodeId = -1;
  *(_QWORD *)&this->fields.commandCodeId = 0xFFFFFFFFLL;
  this->fields.servantCardIdsIndex = -1;
}


void BattleCommandData__ResetOverwriteSvtCardType(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.overwriteSvtCardType = -1;
}


void BattleCommandData__ResetPassStar(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.passStarCount = 0;
}


void BattleCommandData__ResetSelectedType(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.selectedType = -1;
}


void BattleCommandData__ResetServantCardIdsIndex(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.servantCardIdsIndex = -1;
}


void BattleCommandData__SetBattleBuffData(
        BattleCommandData_o *this,
        BattleBuffData_o *setData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battleBuffData = setData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleBuffData,
    (int32_t)setData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandData__SetCommandCardParam(
        BattleCommandData_o *this,
        System_Int32_array *commandCodeParams,
        int32_t index,
        const MethodInfo *method)
{
  int32_t max_length; // w8
  int32_t v5; // w8

  if ( commandCodeParams && (max_length = commandCodeParams->max_length, max_length > index) )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C7BD48(this);
    v5 = commandCodeParams->m_Items[index];
  }
  else
  {
    v5 = 0;
  }
  this->fields.commandCardParam = v5;
}


void BattleCommandData__SetCriticalDecisionType(BattleCommandData_o *this, int32_t type, const MethodInfo *method)
{
  BattleDataDefine_c *v5; // x0

  if ( (byte_4CF15CB & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF15CB = 1;
  }
  this->fields.execCriticalDecisionType = type;
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  this->fields.criticalHitValue = BattleRandom__getNext(v5->static_fields->CRITICAL_HIT_RANDOM_MAX, 0);
}


void BattleCommandData__SetOverwriteRatesIndex(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0
  __int64 v4; // x1
  __int64 OverwriteRatesIndex; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( !ServantCardAddEntity )
  {
    OverwriteRatesIndex = 0xFFFFFFFFLL;
    if ( this )
      goto LABEL_3;
LABEL_5:
    sub_1C7BD40(OverwriteRatesIndex, v4);
  }
  OverwriteRatesIndex = ServantCardAddEntity__GetOverwriteRatesIndex(ServantCardAddEntity, this, 0);
  if ( !this )
    goto LABEL_5;
LABEL_3:
  this->fields.overwriteRateDataIndex = OverwriteRatesIndex;
}


void BattleCommandData__SetOverwriteSvtCardType(BattleCommandData_o *this, int32_t cardId, const MethodInfo *method)
{
  if ( this->fields.treasureDvc <= 0 )
    this->fields.overwriteSvtCardType = cardId;
}


void BattleCommandData__SetSelectedType(BattleCommandData_o *this, const MethodInfo *method)
{
  if ( this->fields.treasureDvc <= 0 )
    this->fields.selectedType = BattleCommandData__get_type(this, method);
}


bool BattleCommandData__TryGetPositionDamageRate(
        BattleCommandData_o *this,
        float *positionDamageRate,
        BattleData_o *data,
        BattleServantData_o *actor,
        BattleServantData_o *target,
        const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0
  float v12; // s8
  ServantCardAddEntity_o *v13; // x22
  System_Int32_array *IsSlidePositionDamageRates; // x0
  __int64 v15; // x1
  System_Int32_array *AliveFieldSvtIdArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  il2cpp_array_size_t max_length; // x9
  int32_t v21; // w2
  System_Int32_array *positionDamageRates; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF15CE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_int____78796912);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CF15CE = 1;
  }
  positionDamageRates = 0;
  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, (const MethodInfo *)positionDamageRate);
  v12 = 1.0;
  if ( ServantCardAddEntity )
  {
    v13 = ServantCardAddEntity;
    if ( !ServantCardAddEntity__TryGetPositionDamageRates(ServantCardAddEntity, &positionDamageRates, 0) )
    {
      LOBYTE(ServantCardAddEntity) = 0;
      goto LABEL_22;
    }
    IsSlidePositionDamageRates = (System_Int32_array *)ServantCardAddEntity__IsSlidePositionDamageRates(v13, 0);
    if ( ((unsigned __int8)IsSlidePositionDamageRates & 1) != 0 )
    {
      if ( !actor || !data )
        goto LABEL_23;
      AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(data, actor->fields.uniqueId, 0, 0, 0, 0);
    }
    else
    {
      if ( !target || !data )
        goto LABEL_23;
      AliveFieldSvtIdArray = BattleData__getEntryIdArray(data, target->fields.isEnemy, 0);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)AliveFieldSvtIdArray;
    IsSlidePositionDamageRates = (System_Int32_array *)ServantCardAddEntity__GetPositionDamageRatesSlideType(v13, 0);
    if ( (_DWORD)IsSlidePositionDamageRates == 2 )
    {
      v18 = System_Linq_Enumerable__Reverse_int_(
              v17,
              (const MethodInfo_319FFEC *)Method_System_Linq_Enumerable_Reverse_int___);
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                   v18,
                                                                   (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
      v19 = System_Linq_Enumerable__Reverse_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)positionDamageRates,
              (const MethodInfo_319FFEC *)Method_System_Linq_Enumerable_Reverse_int___);
      IsSlidePositionDamageRates = System_Linq_Enumerable__ToArray_int_(
                                     v19,
                                     (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
      positionDamageRates = IsSlidePositionDamageRates;
    }
    if ( target )
    {
      IsSlidePositionDamageRates = (System_Int32_array *)System_Array__IndexOf_int_(
                                                           (System_Int32_array *)v17,
                                                           target->fields.uniqueId,
                                                           (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
      if ( positionDamageRates )
      {
        max_length = positionDamageRates->max_length;
        if ( max_length )
        {
          if ( !(_DWORD)max_length )
            sub_1C7BD48(IsSlidePositionDamageRates);
          v21 = *(int32_t *)((char *)positionDamageRates->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 30));
        }
        else
        {
          v21 = 1000;
        }
        v12 = (float)BasicHelper__IndexValue_int_(
                       positionDamageRates,
                       (int32_t)IsSlidePositionDamageRates,
                       v21,
                       (const MethodInfo_315E844 *)Method_BasicHelper_IndexValue_int____78796912)
            / 1000.0;
        LOBYTE(ServantCardAddEntity) = 1;
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_1C7BD40(IsSlidePositionDamageRates, v15);
  }
LABEL_22:
  *positionDamageRate = v12;
  return (char)ServantCardAddEntity;
}


void BattleCommandData__UpdateCommandType(
        BattleCommandData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 type; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w0

  if ( this->fields.execCriticalDecisionType )
  {
    type = BattleCommandData__get_type(this, (const MethodInfo *)svtData);
    if ( (_DWORD)type == 10 && this->fields.critical )
      this->fields._type = 11;
    if ( !svtData )
      sub_1C7BD40(type, v6);
    if ( svtData->fields.isEnemy )
    {
      v7 = BattleCommandData__get_type(this, v6);
      BattleServantData__SetEnemyOverwriteCardType(svtData, v7, this, 0);
      BattleServantData__SetOverwriteSvtCardType(svtData, this, 0);
    }
  }
}


void BattleCommandData__UpdateCritical(
        BattleCommandData_o *this,
        BattleServantData_o *actSvt,
        BattleServantData_o *optSvt,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleCommandData_o *v8; // x19
  int32_t uniqueId; // w20
  System_Collections_Generic_Dictionary_int__object__o *criticalStoreDict; // x24
  char type; // w8
  Il2CppObject *v12; // x25
  int32_t criticalRate; // w21
  int32_t v14; // w0
  int32_t criticalHitValue; // w8
  bool v16; // w8
  Il2CppObject *Item; // x20
  const MethodInfo *v18; // x1

  v8 = this;
  if ( (byte_4CF15CD & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommandData_CriticalStatus_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
    this = (BattleCommandData_o *)sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__set_Item__);
    byte_4CF15CD = 1;
  }
  if ( !optSvt )
    goto LABEL_37;
  this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
  if ( !this )
    goto LABEL_37;
  uniqueId = optSvt->fields.uniqueId;
  this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                                  uniqueId,
                                  (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__ContainsKey__);
  criticalStoreDict = (System_Collections_Generic_Dictionary_int__object__o *)v8->fields.criticalStoreDict;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( criticalStoreDict )
    {
      this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                      (System_Collections_Generic_Dictionary_int__object__o *)v8->fields.criticalStoreDict,
                                      uniqueId,
                                      (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
      if ( this )
      {
        type = this->fields._type;
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        v8->fields.critical = type;
        if ( this )
        {
          this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)this,
                                          uniqueId,
                                          (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
          if ( this )
          {
            v8->fields.isCriticalMiss = BYTE1(this->fields._type);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_1C7BD40(this, actSvt);
  }
  v12 = (Il2CppObject *)sub_1C7BD34(BattleCommandData_CriticalStatus_TypeInfo);
  System_Object___ctor(v12, 0);
  if ( !criticalStoreDict )
    goto LABEL_37;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    criticalStoreDict,
    uniqueId,
    v12,
    (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__set_Item__);
  if ( !actSvt )
    goto LABEL_37;
  if ( actSvt->fields.isEnemy )
  {
    switch ( v8->fields.execCriticalDecisionType )
    {
      case 0:
        return;
      case 1:
        criticalRate = actSvt->fields.criticalRate;
        v14 = BattleServantData__getCriticalRate(actSvt, v8, optSvt, 0);
        criticalHitValue = v8->fields.criticalHitValue;
        v8->fields.critical = criticalHitValue < v14;
        if ( criticalHitValue < criticalRate && v14 < criticalRate && criticalHitValue >= v14 )
          v8->fields.isCriticalMiss = 1;
        goto LABEL_28;
      case 2:
        v8->fields.critical = 1;
        goto LABEL_28;
      case 3:
        v8->fields.critical = 0;
        goto LABEL_28;
      default:
LABEL_28:
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_37;
        this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)this,
                                        uniqueId,
                                        (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        if ( !this )
          goto LABEL_37;
        LOBYTE(this->fields._type) = v8->fields.critical;
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_37;
        this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)this,
                                        uniqueId,
                                        (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        if ( !this )
          goto LABEL_37;
        BYTE1(this->fields._type) = v8->fields.isCriticalMiss;
        break;
    }
  }
  else
  {
    this = (BattleCommandData_o *)BattleCommandData__isAddAttack(v8, (const MethodInfo *)actSvt);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !data )
        goto LABEL_37;
      if ( BattleData__isTutorial(data, 0) )
      {
        if ( BattleData__IsTutorialCriticalEnabled(data, 0) )
        {
          this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)this,
                                          uniqueId,
                                          (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
          v16 = v8->fields.starcount > 0;
          v8->fields.critical = v16;
          if ( !this )
            goto LABEL_37;
          LOBYTE(this->fields._type) = v16;
        }
      }
      else
      {
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_37;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                 uniqueId,
                 (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        this = (BattleCommandData_o *)BattleCommandData__LotteryPlayerSideCritical(v8, v18);
        if ( !Item )
          goto LABEL_37;
        LOBYTE(Item[1].klass) = (unsigned __int8)this & 1;
      }
    }
  }
}


void BattleCommandData__addCriticalPoint(
        BattleCommandData_o *this,
        int32_t count,
        bool addToPassStar,
        const MethodInfo *method)
{
  int32_t starcount; // w22
  int32_t v8; // w8
  int32_t v9; // w23
  int32_t v10; // w8

  if ( (byte_4CF15CA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10387/*"PER_SAME_COMMAND"*/);
    sub_1C7BAE8(&StringLiteral_5837/*"EXTRA_CRITICAL_RATE"*/);
    byte_4CF15CA = 1;
  }
  starcount = this->fields.starcount;
  ++this->fields.starBonus;
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_10387/*"PER_SAME_COMMAND"*/, 0) <= this->fields.starBonus )
  {
    this->fields.starBonus = 0;
    v9 = this->fields.starcount;
    v8 = ConstantMaster__getValue((System_String_o *)StringLiteral_5837/*"EXTRA_CRITICAL_RATE"*/, 0) + v9;
  }
  else
  {
    v8 = this->fields.starcount;
  }
  v10 = v8 + count;
  if ( v10 >= 1000 )
    v10 = 1000;
  this->fields.starcount = v10;
  if ( addToPassStar )
    this->fields.passStarCount += v10 - starcount;
}


bool BattleCommandData__checkCriticalMax(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.starcount > 999;
}


bool BattleCommandData__checkCriticalRate(BattleCommandData_o *this, int32_t count, const MethodInfo *method)
{
  bool v3; // w8

  v3 = this->fields.starcount > count;
  this->fields.critical = v3;
  return v3;
}


bool BattleCommandData__checkCriticalRate_47180004(
        BattleCommandData_o *this,
        int32_t rate,
        int32_t count,
        const MethodInfo *method)
{
  this->fields.critical = count < rate;
  return count < rate;
}


bool BattleCommandData__checkCriticalZero(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.starcount < 1;
}


bool BattleCommandData__checkLastAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  return BattleCommandData__isAddAttack(this, method)
      || this->fields.actionIndex == 2 && (!this->fields.sameflg || this->fields.samecount != 3);
}


int32_t BattleCommandData__getAttri(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.attri;
}


int32_t BattleCommandData__getChainBonus(BattleCommandData_o *this, const MethodInfo *method)
{
  return 100 * this->fields.chainCount;
}


int32_t BattleCommandData__getCriticalPoint(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.starcount / 10;
}


int32_t BattleCommandData__getFollowerType(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.follower;
}


System_Int32_array *BattleCommandData__getIndividualities(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w0

  type = BattleCommandData__get_type(this, method);
  return CardMaster__getIndividualities(type, this->fields.actionIndex, 0);
}


int32_t BattleCommandData__getPassStarCount(BattleCommandData_o *this, const MethodInfo *method)
{
  BattleCommandData_c *v3; // x0
  int32_t passStarCount; // w19

  if ( (byte_4CF15C9 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommandData_TypeInfo);
    byte_4CF15C9 = 1;
  }
  v3 = BattleCommandData_TypeInfo;
  passStarCount = this->fields.passStarCount;
  if ( !BattleCommandData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandData_TypeInfo);
    v3 = BattleCommandData_TypeInfo;
  }
  return passStarCount / v3->static_fields->PASS_STAR_DENOMINATOR;
}


int32_t BattleCommandData__getServantId(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t BattleCommandData__getServantLimitCount(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.svtlimit;
}


int32_t BattleCommandData__getUniqueId(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.uniqueId;
}


int32_t BattleCommandData__get_ActionIndex(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.actionIndex;
}


int32_t BattleCommandData__get_AddAtk(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.addAtk;
}


int32_t BattleCommandData__get_AddCritical(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.addCritical;
}


int32_t BattleCommandData__get_AddTdGauge(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.addTdGauge;
}


int32_t BattleCommandData__get_ChainCount(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.chainCount;
}


int32_t BattleCommandData__get_FlashType(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields._FlashType_k__BackingField;
}


bool BattleCommandData__get_IsChainError(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields._IsChainError_k__BackingField;
}


bool BattleCommandData__get_IsMighty(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields._IsMighty_k__BackingField;
}


ServantCardAddEntity_o *BattleCommandData__get_ServantCardAddEntity(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x1
  int32_t overwriteSvtCardType; // w3
  int32_t svtId; // w20
  ServantCardAddMaster_o *v7; // x21
  ServantCardAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF15BE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantCardAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF15BE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantCardAddMaster___);
  overwriteSvtCardType = this->fields.overwriteSvtCardType;
  svtId = this->fields.svtId;
  v7 = (ServantCardAddMaster_o *)Master_object;
  if ( overwriteSvtCardType == -1 )
  {
    Master_object = (Il2CppObject *)BattleCommandData__get_type(this, v4);
    overwriteSvtCardType = (int)Master_object;
  }
  if ( !v7 )
    sub_1C7BD40(Master_object, v4);
  if ( ServantCardAddMaster__TryGetEntity(v7, &entity, svtId, overwriteSvtCardType, 0) )
    return entity;
  else
    return 0;
}


ServantCardEntity_o *BattleCommandData__get_ServantCardEntity(BattleCommandData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x1
  int32_t overwriteSvtCardType; // w3
  int32_t svtId; // w20
  ServantCardMaster_o *v7; // x21
  ServantCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF15BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantCardMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF15BD = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantCardMaster___);
  overwriteSvtCardType = this->fields.overwriteSvtCardType;
  svtId = this->fields.svtId;
  v7 = (ServantCardMaster_o *)Master_object;
  if ( overwriteSvtCardType == -1 )
  {
    Master_object = (Il2CppObject *)BattleCommandData__get_type(this, v4);
    overwriteSvtCardType = (int)Master_object;
  }
  if ( !v7 )
    sub_1C7BD40(Master_object, v4);
  if ( ServantCardMaster__TryGetEntity(v7, &entity, svtId, overwriteSvtCardType, 0) )
    return entity;
  else
    return 0;
}


int32_t BattleCommandData__get_TargetNum(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields._TargetNum_k__BackingField;
}


int32_t BattleCommandData__get_loadSvtLimit(BattleCommandData_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 24;
  if ( this->fields._loadsvtLimit != -1 )
    v2 = 36;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t BattleCommandData__get_type(BattleCommandData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *battleBuffData; // x0
  BattleBuffData_BuffData_o *v4; // x0
  int32_t result; // w0

  battleBuffData = this->fields.battleBuffData;
  if ( battleBuffData )
  {
    if ( this->fields.treasureDvc > 0 )
      return this->fields._type;
    v4 = BattleBuffData__GetCommandCardTypeChangeBuff(battleBuffData, 0);
    if ( v4 )
      return v4->fields.param;
    result = this->fields.selectedType;
    if ( result == -1 )
      return this->fields._type;
  }
  else
  {
    result = this->fields.selectedType;
    if ( result == -1 || this->fields.treasureDvc >= 1 )
      return this->fields._type;
  }
  return result;
}


bool BattleCommandData__isAddAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4CF15C5 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    byte_4CF15C5 = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isADDATTACK(type, 0);
}


bool BattleCommandData__isArts(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4CF15C2 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    byte_4CF15C2 = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(type, 0);
}


bool BattleCommandData__isBlank(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4CF15C6 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    byte_4CF15C6 = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isBLANK(type, 0);
}


bool BattleCommandData__isBuster(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4CF15C3 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    byte_4CF15C3 = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isBUSTER(type, 0);
}


bool BattleCommandData__isBusterChain(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.flash && BattleCommandData__isBuster(this, method);
}


bool BattleCommandData__isCritical(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.critical;
}


bool BattleCommandData__isFlash(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.flash;
}


bool BattleCommandData__isGrand(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 3 && this->fields.flash;
}


bool BattleCommandData__isPair(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 2;
}


bool BattleCommandData__isQuick(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4CF15C4 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    byte_4CF15C4 = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isQUICK(type, 0);
}


bool BattleCommandData__isSingle(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 3 && !this->fields.flash;
}


bool BattleCommandData__isThree(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 3;
}


bool BattleCommandData__isTreasureDvc(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.treasureDvc > 0;
}


void BattleCommandData__removeCriticalPoint(BattleCommandData_o *this, int32_t count, const MethodInfo *method)
{
  this->fields.starcount = (this->fields.starcount - count) & ~((this->fields.starcount - count) >> 31);
}


void BattleCommandData__resetCriticalPoint(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.starcount = 0;
}


void BattleCommandData__setCombo(
        BattleCommandData_o *this,
        BattleComboData_o *combo,
        int32_t index,
        const MethodInfo *method)
{
  bool flash; // w8
  struct System_Boolean_array *sameflg; // x8
  int32_t max_length; // w9
  int32_t treasureDvc; // w8

  if ( !combo
    || (flash = combo->fields.flash,
        this->fields.actionIndex = index,
        this->fields.flash = flash,
        (sameflg = combo->fields.sameflg) == 0) )
  {
    sub_1C7BD40(this, combo);
  }
  max_length = sameflg->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C7BD48(this);
    this->fields.sameflg = sameflg->m_Items[index];
  }
  this->fields.samecount = combo->fields.samecount;
  this->fields.addAtk = combo->fields.addAtk;
  treasureDvc = this->fields.treasureDvc;
  *(int32x2_t *)&this->fields.addCritical = vrev64_s32(*(int32x2_t *)&combo->fields.addTdGauge);
  this->fields.chainCount = combo->fields.tdChain;
  if ( treasureDvc <= 0 )
    BattleCommandData__addCriticalPoint(this, combo->fields.addCriticalRate, 0, method);
  this->fields._IsMighty_k__BackingField = combo->fields.isMighty;
  this->fields._IsChainError_k__BackingField = combo->fields.chainError;
  this->fields._FlashType_k__BackingField = combo->fields.flashtype;
}


void BattleCommandData__setFollowerType(BattleCommandData_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.follower = type;
}


void BattleCommandData__setTypeAddAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.treasureDvc = 0;
  this->fields.starcount = 0;
  this->fields._type = 4;
}


void BattleCommandData__set_ActionIndex(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.actionIndex = value;
}


void BattleCommandData__set_ChainCount(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.chainCount = value;
}


void BattleCommandData__set_FlashType(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._FlashType_k__BackingField = value;
}


void BattleCommandData__set_IsChainError(BattleCommandData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsChainError_k__BackingField = value;
}


void BattleCommandData__set_IsMighty(BattleCommandData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMighty_k__BackingField = value;
}


void BattleCommandData__set_TargetNum(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TargetNum_k__BackingField = value;
}


void BattleCommandData__set_loadSvtLimit(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._loadsvtLimit = value;
}


void BattleCommandData__set_type(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._type = value;
}


void BattleCommandData_CriticalStatus___ctor(BattleCommandData_CriticalStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCommandData_CriticalStatus__get_Critical(BattleCommandData_CriticalStatus_o *this, const MethodInfo *method)
{
  return this->fields._Critical_k__BackingField;
}


bool BattleCommandData_CriticalStatus__get_IsCriticalMiss(
        BattleCommandData_CriticalStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCriticalMiss_k__BackingField;
}


void BattleCommandData_CriticalStatus__set_Critical(
        BattleCommandData_CriticalStatus_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._Critical_k__BackingField = value;
}


void BattleCommandData_CriticalStatus__set_IsCriticalMiss(
        BattleCommandData_CriticalStatus_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCriticalMiss_k__BackingField = value;
}