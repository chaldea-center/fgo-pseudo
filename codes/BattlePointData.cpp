void BattlePointData___ctor(
        BattlePointData_o *this,
        int32_t battlePointId,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  BattlePointEntity_o *v16; // x1
  BattlePointEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  this->fields.maxValue = 0x7FFFFFFF;
  entity = 0;
  this->fields.phase = 1;
  this->fields.IsPhaseDirty = 1;
  this->fields.isMaxValueBuffDeltaDirty = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.id = battlePointId;
  this->fields._svtData_k__BackingField = svtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtData_k__BackingField,
    (int32_t)svtData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  BattlePointData__UpdateFlagEnableToAddValue(this, svtData, v13);
  this->fields.value = this->fields._IsEnableToAddValue_k__BackingField - 1;
  if ( BattlePointData__TryGetBattlePointEntity(this, &entity, v14) )
    v16 = entity;
  else
    v16 = 0;
  BattlePointData__UpdateMaxValue(this, v16, v15);
}


void BattlePointData___ctor_53288180(
        BattlePointData_o *this,
        BattlePointData_SaveData_o *sv,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  BattlePointData_SaveData_Fields fields; // d0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  BattlePointEntity_o *v19; // x1
  BattlePointEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  this->fields.maxValue = 0x7FFFFFFF;
  entity = 0;
  this->fields.phase = 1;
  this->fields.IsPhaseDirty = 1;
  this->fields.isMaxValueBuffDeltaDirty = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !sv )
    sub_2213CDC(v7, v8);
  fields = sv->fields;
  this->fields._svtData_k__BackingField = svtData;
  *(BattlePointData_SaveData_Fields *)&this->fields.id = fields;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtData_k__BackingField,
    (int32_t)svtData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BattlePointData__UpdateFlagEnableToAddValue(this, svtData, v16);
  if ( BattlePointData__TryGetBattlePointEntity(this, &entity, v17) )
    v19 = entity;
  else
    v19 = 0;
  BattlePointData__UpdateMaxValue(this, v19, v18);
}


// local variable allocation has failed, the output may be wrong!
bool BattlePointData__AddPoint(
        BattlePointData_o *this,
        int32_t addValue,
        bool isOverwrite,
        bool isSub,
        const MethodInfo *method)
{
  int32_t value; // w20
  int v6; // w8
  int32_t v8; // w9
  int32_t v9; // w8
  int32_t maxValue; // w9
  bool v11; // cc
  bool result; // w0

  if ( !this->fields._IsEnableToAddValue_k__BackingField )
    return 0;
  value = this->fields.value;
  v6 = addValue & ~(addValue >> 31);
  if ( isOverwrite )
    v8 = 0;
  else
    v8 = this->fields.value;
  if ( isOverwrite )
    v6 = addValue;
  if ( isSub )
    v6 = -v6;
  this->fields.value = v8 + v6;
  BattlePointData__RefreshDynamicMaxValue(this, *(const MethodInfo **)&addValue);
  v9 = this->fields.value;
  maxValue = this->fields.maxValue;
  v11 = v9 <= maxValue;
  if ( v9 < maxValue )
    maxValue = this->fields.value;
  if ( !v11 || maxValue < 0 )
  {
    v9 = maxValue & ~(maxValue >> 31);
    this->fields.value = v9;
  }
  if ( value == v9 )
    return 0;
  result = 1;
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = 0;
  this->fields.IsPhaseDirty = 1;
  return result;
}


void BattlePointData__GetCurrentAndMaxValue(
        BattlePointData_o *this,
        int32_t *currentValue,
        int32_t *currentMaxValue,
        const MethodInfo *method)
{
  BattlePointData__RefreshDynamicMaxValue(this, (const MethodInfo *)currentValue);
  *currentValue = this->fields.value;
  *currentMaxValue = this->fields.maxValue;
}


System_Int32_array *BattlePointData__GetCurrentIndividualities(BattlePointData_o *this, const MethodInfo *method)
{
  long double v2; // q0
  BattleServantData_o *svtData_k__BackingField; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_597357B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_597357B = 1;
  }
  svtData_k__BackingField = this->fields._svtData_k__BackingField;
  if ( svtData_k__BackingField )
    return BattleServantData__getConcatServantAndBuffIndividualityies(svtData_k__BackingField, 0, 0, 0, 0, 0, 0);
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v2);
  if ( !*(_DWORD *)(v8 + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v8, method);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v2);
  return **(System_Int32_array ***)(v9 + 184);
}


int32_t BattlePointData__GetCurrentValue(BattlePointData_o *this, const MethodInfo *method)
{
  BattlePointData__RefreshDynamicMaxValue(this, method);
  return this->fields.value;
}


int32_t BattlePointData__GetMaxValueBuffDelta(BattlePointData_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData_k__BackingField; // x0
  __int64 v4; // x1
  BattleServantData_o *BuffData; // x0
  __int64 v6; // x8
  BattleServantData_o *v7; // x20
  unsigned __int64 v8; // x22
  BattleBuffData_BuffData_o *v9; // x21
  int32_t v10; // w8

  if ( this->fields.isMaxValueBuffDeltaDirty )
  {
    svtData_k__BackingField = this->fields._svtData_k__BackingField;
    this->fields.maxValueBuffDelta = 0;
    if ( svtData_k__BackingField && BattleServantData__get_BuffData(svtData_k__BackingField, 0) )
    {
      BuffData = this->fields._svtData_k__BackingField;
      if ( !BuffData
        || (BuffData = (BattleServantData_o *)BattleServantData__get_BuffData(BuffData, 0)) == 0
        || (BuffData = (BattleServantData_o *)BattleBuffData__getActiveList((BattleBuffData_o *)BuffData, 1, 0)) == 0 )
      {
        sub_2213CDC(BuffData, v4);
      }
      v6 = *(_QWORD *)&BuffData->fields.uniqueId;
      v7 = BuffData;
      if ( (int)v6 >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          if ( v8 >= (unsigned int)v6 )
            sub_2213CE4(BuffData);
          v9 = (BattleBuffData_BuffData_o *)*(&v7->fields.userSvtId.fields.currentCryptoKey + v8);
          if ( !v9 || v9->fields.targetBattlePointId != this->fields.id )
            goto LABEL_17;
          BuffData = (BattleServantData_o *)BattleBuffData_BuffData__get_BuffType(
                                              *((BattleBuffData_BuffData_o **)&v7->fields.userSvtId.fields.currentCryptoKey
                                              + v8),
                                              0);
          if ( (_DWORD)BuffData == 249 )
            break;
          BuffData = (BattleServantData_o *)BattleBuffData_BuffData__get_BuffType(v9, 0);
          if ( (_DWORD)BuffData == 250 )
          {
            v10 = this->fields.maxValueBuffDelta - v9->fields.param;
            goto LABEL_16;
          }
LABEL_17:
          LODWORD(v6) = v7->fields.uniqueId;
          if ( (__int64)++v8 >= (int)v6 )
            goto LABEL_18;
        }
        v10 = v9->fields.param + this->fields.maxValueBuffDelta;
LABEL_16:
        this->fields.maxValueBuffDelta = v10;
        goto LABEL_17;
      }
    }
LABEL_18:
    this->fields.isMaxValueBuffDeltaDirty = 0;
  }
  return this->fields.maxValueBuffDelta;
}


float BattlePointData__GetPercentage(BattlePointData_o *this, const MethodInfo *method)
{
  int32_t maxValue; // w8

  BattlePointData__RefreshDynamicMaxValue(this, method);
  maxValue = this->fields.maxValue;
  if ( maxValue < 1 )
    return 0.0;
  else
    return (float)((float)this->fields.value / (float)maxValue) * 100.0;
}


BattlePointData_SaveData_o *BattlePointData__GetSaveData(BattlePointData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattlePointData_SaveData_o *result; // x0

  if ( (byte_597357A & 1) == 0 )
  {
    sub_2213A60(&BattlePointData_SaveData_TypeInfo);
    byte_597357A = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(BattlePointData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  result = (BattlePointData_SaveData_o *)v3;
  v3[1].klass = *(Il2CppClass **)&this->fields.id;
  return result;
}


bool BattlePointData__IsAsPercentage(BattlePointData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  BattlePointEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( BattlePointData__TryGetBattlePointEntity(this, &entity, v2) )
  {
    if ( !entity )
      sub_2213CDC(0, v3);
    return BattlePointEntity__IsAsPercentage(entity, 0);
  }
  else
  {
    return 0;
  }
}


void BattlePointData__MarkMaxValueBuffDeltaDirty(BattlePointData_o *this, const MethodInfo *method)
{
  this->fields.isMaxValueBuffDeltaDirty = 1;
}


void BattlePointData__NotifyShowedEffect(BattlePointData_o *this, const MethodInfo *method)
{
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = 1;
}


bool BattlePointData__RefreshByCurrentStatus(BattlePointData_o *this, const MethodInfo *method)
{
  int32_t maxValue; // w20
  int32_t value; // w21

  value = this->fields.value;
  maxValue = this->fields.maxValue;
  BattlePointData__RefreshDynamicMaxValue(this, method);
  if ( value == this->fields.value )
    return maxValue != this->fields.maxValue;
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = 0;
  return 1;
}


void BattlePointData__RefreshDynamicMaxValue(BattlePointData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL8 BattlePointEntity; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  BattlePointEntity_o *v7; // x1
  const MethodInfo *v8; // x1
  int v9; // w20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int32_t MaxLimit; // w0
  int32_t v13; // w8
  int32_t value; // w9
  BattlePointEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  BattlePointEntity = BattlePointData__TryGetBattlePointEntity(this, &entity, v2);
  if ( !this )
    sub_2213CDC(BattlePointEntity, v5);
  if ( BattlePointEntity )
    v7 = entity;
  else
    v7 = 0;
  BattlePointData__UpdateMaxValue(this, v7, v6);
  v9 = this->fields.baseMaxValue + BattlePointData__GetMaxValueBuffDelta(this, v8);
  if ( BattlePointData__get_MaxLimit(this, v10) >= 1 )
  {
    MaxLimit = BattlePointData__get_MaxLimit(this, v11);
    if ( v9 >= MaxLimit )
      v9 = MaxLimit;
  }
  v13 = v9 & ~(v9 >> 31);
  value = this->fields.value;
  this->fields.maxValue = v13;
  if ( value <= v13 )
  {
    if ( (value & 0x80000000) == 0 )
      return;
    v13 = 0;
  }
  this->fields.value = v13;
}


void BattlePointData__RefreshPhase(BattlePointData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isRefreshingPhase; // w8
  _BOOL8 CurrentPhaseEntity; // x0
  __int64 v6; // x1
  int32_t phase; // w8
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  isRefreshingPhase = this->fields.isRefreshingPhase;
  entity = 0;
  if ( !isRefreshingPhase )
  {
    this->fields.isRefreshingPhase = 1;
    CurrentPhaseEntity = BattlePointData__TryGetCurrentPhaseEntity(this, &entity, v2);
    if ( CurrentPhaseEntity )
    {
      if ( !entity )
        sub_2213CDC(CurrentPhaseEntity, v6);
      phase = entity->fields.phase;
    }
    else
    {
      phase = 1;
    }
    this->fields.phase = phase;
    *(_WORD *)&this->fields.IsPhaseDirty = 0;
  }
}


bool BattlePointData__TryGetBattlePointEntity(
        BattlePointData_o *this,
        BattlePointEntity_o **entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_5973578 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    byte_5973578 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           this->fields.id,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
}


bool BattlePointData__TryGetCurrentPhaseEntity(
        BattlePointData_o *this,
        BattlePointPhaseEntity_o **entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  int32_t maxValue; // w22
  int32_t value; // w23
  int32_t id; // w24
  const MethodInfo *v10; // x1
  _BOOL8 IsAsPercentage; // x0
  __int64 v12; // x1

  if ( (byte_597357C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597357C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  BattlePointData__RefreshDynamicMaxValue(this, v6);
  value = this->fields.value;
  maxValue = this->fields.maxValue;
  id = this->fields.id;
  IsAsPercentage = BattlePointData__IsAsPercentage(this, v10);
  if ( !Master_object )
    sub_2213CDC(IsAsPercentage, v12);
  return BattlePointPhaseMaster__TryGetEntityByContext(
           (BattlePointPhaseMaster_o *)Master_object,
           id,
           value,
           maxValue,
           IsAsPercentage,
           entity,
           0);
}


void BattlePointData__UpdateFlagEnableToAddValue(
        BattlePointData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePointEntity_o *BattlePointEntity; // x0
  __int64 v6; // x1
  bool IsEnableToAddBattlePoint; // w8
  bool IsEnableToAddValue_k__BackingField; // w21
  bool IsIgnoreBattlePointUp; // w8
  bool IsHideBattlePointGauge_k__BackingField; // w20
  BattlePointEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0;
  *(_WORD *)&this->fields._IsEnableToAddValue_k__BackingField = 256;
  BattlePointEntity = (BattlePointEntity_o *)BattlePointData__TryGetBattlePointEntity(this, &entity, method);
  if ( ((unsigned __int8)BattlePointEntity & 1) != 0 )
  {
    BattlePointEntity = entity;
    if ( !entity
      || (IsEnableToAddBattlePoint = BattlePointEntity__IsEnableToAddBattlePoint(entity, svtData, 0),
          BattlePointEntity = entity,
          this->fields._IsEnableToAddValue_k__BackingField = IsEnableToAddBattlePoint,
          !BattlePointEntity) )
    {
LABEL_9:
      sub_2213CDC(BattlePointEntity, v6);
    }
    BattlePointEntity = (BattlePointEntity_o *)BattlePointEntity__IsHideBattlePointGauge(BattlePointEntity, svtData, 0);
    this->fields._IsHideBattlePointGauge_k__BackingField = (unsigned __int8)BattlePointEntity & 1;
  }
  if ( !svtData )
    goto LABEL_9;
  BattlePointEntity = (BattlePointEntity_o *)svtData->fields.deckSvt;
  if ( !BattlePointEntity )
    goto LABEL_9;
  IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
  IsIgnoreBattlePointUp = BattleDeckServantData__IsIgnoreBattlePointUp(
                            (BattleDeckServantData_o *)BattlePointEntity,
                            this->fields.id,
                            0);
  BattlePointEntity = (BattlePointEntity_o *)svtData->fields.deckSvt;
  this->fields._IsEnableToAddValue_k__BackingField = IsEnableToAddValue_k__BackingField && !IsIgnoreBattlePointUp;
  if ( !BattlePointEntity )
    goto LABEL_9;
  IsHideBattlePointGauge_k__BackingField = this->fields._IsHideBattlePointGauge_k__BackingField;
  this->fields._IsHideBattlePointGauge_k__BackingField = (IsHideBattlePointGauge_k__BackingField
                                                        | BattleDeckServantData__IsHideBattlePointGauge(
                                                            (BattleDeckServantData_o *)BattlePointEntity,
                                                            this->fields.id,
                                                            0))
                                                       & 1;
}


void BattlePointData__UpdateMaxValue(
        BattlePointData_o *this,
        BattlePointEntity_o *battlePointEntity,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int32_t MaxPhaseValue; // w21
  const MethodInfo *v9; // x1
  System_Int32_array *CurrentIndividualities; // x0
  int32_t baseMax; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973579 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5973579 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  baseMax = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, battlePointEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  MaxPhaseValue = BattlePointPhaseMaster__GetMaxPhaseValue(
                    (BattlePointPhaseMaster_o *)Master_object,
                    this->fields.id,
                    0);
  CurrentIndividualities = BattlePointData__GetCurrentIndividualities(this, v9);
  if ( battlePointEntity && BattlePointEntity__TryGetBaseMax(battlePointEntity, CurrentIndividualities, &baseMax, 0) )
    MaxPhaseValue = baseMax;
  this->fields.baseMaxValue = MaxPhaseValue;
  this->fields.maxValue = MaxPhaseValue;
}


void BattlePointData__UpdateSetting(
        BattlePointData_o *this,
        BattleServantData_o *svtData,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  _BOOL4 IsEnableToAddValue_k__BackingField; // w8
  QuestPhaseEntity_o *v8; // x21
  _BOOL4 v9; // w22
  _BOOL4 IsIgnoreBattlePointUp; // w0
  bool *p_IsHideBattlePointGauge_k__BackingField; // x22
  bool IsHideBattlePointGauge_k__BackingField; // w23
  bool IsHideBattlePointGauge; // w8
  __int64 v14; // x1
  bool v15; // w20
  BattlePointEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0;
  if ( !battleEntity )
  {
    if ( !this->fields._IsEnableToAddValue_k__BackingField )
    {
LABEL_9:
      IsHideBattlePointGauge = 0;
      p_IsHideBattlePointGauge_k__BackingField = &this->fields._IsHideBattlePointGauge_k__BackingField;
      IsHideBattlePointGauge_k__BackingField = this->fields._IsHideBattlePointGauge_k__BackingField;
      this->fields.value = -1;
      goto LABEL_10;
    }
LABEL_7:
    IsHideBattlePointGauge = 0;
    p_IsHideBattlePointGauge_k__BackingField = &this->fields._IsHideBattlePointGauge_k__BackingField;
    IsHideBattlePointGauge_k__BackingField = this->fields._IsHideBattlePointGauge_k__BackingField;
    goto LABEL_10;
  }
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(battleEntity, 0);
  IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
  if ( !QuestPhaseEntity )
  {
    this->fields._IsEnableToAddValue_k__BackingField = IsEnableToAddValue_k__BackingField;
    if ( !IsEnableToAddValue_k__BackingField )
      goto LABEL_9;
    goto LABEL_7;
  }
  v8 = QuestPhaseEntity;
  v9 = IsEnableToAddValue_k__BackingField;
  IsIgnoreBattlePointUp = QuestPhaseEntity__IsIgnoreBattlePointUp(QuestPhaseEntity, this->fields.id, 0);
  this->fields._IsEnableToAddValue_k__BackingField = v9 && !IsIgnoreBattlePointUp;
  if ( !v9 || IsIgnoreBattlePointUp )
    this->fields.value = -1;
  p_IsHideBattlePointGauge_k__BackingField = &this->fields._IsHideBattlePointGauge_k__BackingField;
  IsHideBattlePointGauge_k__BackingField = this->fields._IsHideBattlePointGauge_k__BackingField;
  IsHideBattlePointGauge = QuestPhaseEntity__IsHideBattlePointGauge(v8, this->fields.id, 0);
LABEL_10:
  this->fields._IsHideBattlePointGauge_k__BackingField = IsHideBattlePointGauge
                                                      || IsHideBattlePointGauge_k__BackingField;
  if ( BattlePointData__TryGetBattlePointEntity(this, &entity, (const MethodInfo *)battleEntity) )
  {
    if ( !entity )
      sub_2213CDC(0, v14);
    v15 = *p_IsHideBattlePointGauge_k__BackingField;
    *p_IsHideBattlePointGauge_k__BackingField = (v15 | BattlePointEntity__IsHideBattlePointGauge(entity, svtData, 0))
                                              & 1;
  }
}


bool BattlePointData__get_IsEnableToAddValue(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields._IsEnableToAddValue_k__BackingField;
}


bool BattlePointData__get_IsHideBattlePointGauge(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields._IsHideBattlePointGauge_k__BackingField;
}


bool BattlePointData__get_IsShowedEffectAfterLastChanged(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields._IsShowedEffectAfterLastChanged_k__BackingField;
}


int32_t BattlePointData__get_MaxLimit(BattlePointData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t result; // w0
  __int64 v5; // x1
  int32_t maxLimit; // [xsp+4h] [xbp-1Ch] BYREF
  BattlePointEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  result = this->fields.maxLimit;
  entity = 0;
  maxLimit = 0;
  if ( !result )
  {
    if ( BattlePointData__TryGetBattlePointEntity(this, &entity, v2) )
    {
      if ( !entity )
        sub_2213CDC(0, v5);
      if ( BattlePointEntity__TryGetMaxLimit(entity, &maxLimit, 0) )
        result = maxLimit;
      else
        result = -1;
    }
    else
    {
      result = -1;
    }
    this->fields.maxLimit = result;
  }
  return result;
}


int32_t BattlePointData__get_MaxValue(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields.maxValue;
}


int32_t BattlePointData__get_Phase(BattlePointData_o *this, const MethodInfo *method)
{
  if ( this->fields.IsPhaseDirty )
    BattlePointData__RefreshPhase(this, method);
  return this->fields.phase;
}


BattleServantData_o *BattlePointData__get_svtData(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields._svtData_k__BackingField;
}


void BattlePointData__set_IsEnableToAddValue(BattlePointData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsEnableToAddValue_k__BackingField = value;
}


void BattlePointData__set_IsHideBattlePointGauge(BattlePointData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsHideBattlePointGauge_k__BackingField = value;
}


void BattlePointData__set_IsShowedEffectAfterLastChanged(BattlePointData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = value;
}


void BattlePointData__set_svtData(BattlePointData_o *this, BattleServantData_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._svtData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePointData_SaveData___ctor(BattlePointData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}