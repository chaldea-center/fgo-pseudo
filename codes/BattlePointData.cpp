void __fastcall BattlePointData___ctor(
        BattlePointData_o *this,
        int32_t battlePointId,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  this->fields.maxValue = 0x7FFFFFFF;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.id = battlePointId;
  BattlePointData__UpdateFlagEnableToAddValue(this, svtData, v7);
  this->fields.value = this->fields._IsEnableToAddValue_k__BackingField - 1;
  BattlePointData__UpdateMaxValue(this, v8);
}


void __fastcall BattlePointData___ctor_42564108(
        BattlePointData_o *this,
        BattlePointData_SaveData_o *sv,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  this->fields.maxValue = 0x7FFFFFFF;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_1B64324(v7);
  *(BattlePointData_SaveData_Fields *)&this->fields.id = sv->fields;
  BattlePointData__UpdateFlagEnableToAddValue(this, svtData, v8);
  BattlePointData__UpdateMaxValue(this, v9);
}


bool __fastcall BattlePointData__AddPoint(
        BattlePointData_o *this,
        int32_t addValue,
        bool isOverwrite,
        const MethodInfo *method)
{
  int32_t value; // w8
  int32_t maxValue; // w9

  if ( !this->fields._IsEnableToAddValue_k__BackingField )
    return 0;
  value = this->fields.value;
  maxValue = value + (addValue & ~(addValue >> 31));
  if ( isOverwrite )
    maxValue = addValue;
  if ( this->fields.maxValue < maxValue )
    maxValue = this->fields.maxValue;
  this->fields.value = maxValue;
  if ( value == maxValue )
    return 0;
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = 0;
  return 1;
}


BattlePointData_SaveData_o *__fastcall BattlePointData__GetSaveData(BattlePointData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  __int64 v5; // x0
  BattlePointData_SaveData_o *result; // x0

  if ( (byte_49FEB0B & 1) == 0 )
  {
    sub_1B640C8(&BattlePointData_SaveData_TypeInfo, method);
    byte_49FEB0B = 1;
  }
  v4 = (Il2CppObject *)sub_1B64314(BattlePointData_SaveData_TypeInfo, method, v2);
  System_Object___ctor(v4, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  result = (BattlePointData_SaveData_o *)v4;
  v4[1].klass = *(Il2CppClass **)&this->fields.id;
  return result;
}


void __fastcall BattlePointData__NotifyShowedEffect(BattlePointData_o *this, const MethodInfo *method)
{
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = 1;
}


void __fastcall BattlePointData__UpdateFlagEnableToAddValue(
        BattlePointData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  BattlePointEntity_o *v8; // x21
  char v9; // w22
  bool IsHideBattlePointGauge; // w0
  bool v11; // w21

  if ( (byte_49FEB08 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BattlePointMaster___, svtData);
    sub_1B640C8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FEB08 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BattlePointMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.id,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_10;
  v8 = (BattlePointEntity_o *)Instance;
  Instance = (DataManager_o *)BattlePointEntity__IsEnableToAddBattlePoint((BattlePointEntity_o *)Instance, svtData, 0LL);
  this->fields._IsEnableToAddValue_k__BackingField = (unsigned __int8)Instance & 1;
  if ( !svtData
    || (v9 = (char)Instance, (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0LL)
    || (this->fields._IsEnableToAddValue_k__BackingField = v9 & ~BattleDeckServantData__IsIgnoreBattlePointUp(
                                                                   (BattleDeckServantData_o *)Instance,
                                                                   this->fields.id,
                                                                   0LL) & 1,
        IsHideBattlePointGauge = BattlePointEntity__IsHideBattlePointGauge(v8, svtData, 0LL),
        this->fields._IsHideBattlePointGauge_k__BackingField = IsHideBattlePointGauge,
        v11 = IsHideBattlePointGauge,
        (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0LL) )
  {
LABEL_10:
    sub_1B64324(Instance);
  }
  this->fields._IsHideBattlePointGauge_k__BackingField = (v11 | BattleDeckServantData__IsHideBattlePointGauge(
                                                                  (BattleDeckServantData_o *)Instance,
                                                                  this->fields.id,
                                                                  0LL)) & 1;
}


void __fastcall BattlePointData__UpdateMaxValue(BattlePointData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FEB09 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEB09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  this->fields.maxValue = BattlePointPhaseMaster__GetMaxPhaseValue(
                            (BattlePointPhaseMaster_o *)Instance,
                            this->fields.id,
                            0LL);
}


void __fastcall BattlePointData__UpdateSetting(
        BattlePointData_o *this,
        BattleServantData_o *svtData,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  BattleEntity_o *QuestPhaseEntity; // x0
  bool *p_IsEnableToAddValue_k__BackingField; // x22
  _BOOL4 IsEnableToAddValue_k__BackingField; // w23
  bool IsIgnoreBattlePointUp; // w0
  char v13; // w8
  _BOOL4 v14; // w9
  int v15; // w9
  bool IsHideBattlePointGauge_k__BackingField; // w23
  bool v17; // w8
  Il2CppObject *Instance; // x0
  bool v19; // w21

  if ( (byte_49FEB0A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BattlePointMaster___, svtData);
    sub_1B640C8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FEB0A = 1;
  }
  if ( battleEntity )
  {
    QuestPhaseEntity = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battleEntity, 0LL);
    p_IsEnableToAddValue_k__BackingField = &this->fields._IsEnableToAddValue_k__BackingField;
    IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
    battleEntity = QuestPhaseEntity;
    if ( QuestPhaseEntity )
    {
      IsIgnoreBattlePointUp = QuestPhaseEntity__IsIgnoreBattlePointUp(
                                (QuestPhaseEntity_o *)QuestPhaseEntity,
                                this->fields.id,
                                0LL);
      v13 = 0;
      v14 = !IsIgnoreBattlePointUp;
      goto LABEL_8;
    }
  }
  else
  {
    p_IsEnableToAddValue_k__BackingField = &this->fields._IsEnableToAddValue_k__BackingField;
    IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
  }
  v13 = 1;
  v14 = 1;
LABEL_8:
  v15 = v14 && IsEnableToAddValue_k__BackingField;
  *p_IsEnableToAddValue_k__BackingField = v15;
  if ( !v15 )
    this->fields.value = -1;
  IsHideBattlePointGauge_k__BackingField = this->fields._IsHideBattlePointGauge_k__BackingField;
  v17 = (v13 & 1) == 0
     && QuestPhaseEntity__IsHideBattlePointGauge((QuestPhaseEntity_o *)battleEntity, this->fields.id, 0LL);
  this->fields._IsHideBattlePointGauge_k__BackingField = v17 || IsHideBattlePointGauge_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BattlePointMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.id,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v19 = this->fields._IsHideBattlePointGauge_k__BackingField;
  this->fields._IsHideBattlePointGauge_k__BackingField = (v19 | BattlePointEntity__IsHideBattlePointGauge(
                                                                  (BattlePointEntity_o *)Instance,
                                                                  svtData,
                                                                  0LL)) & 1;
}


bool __fastcall BattlePointData__get_IsEnableToAddValue(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields._IsEnableToAddValue_k__BackingField;
}


bool __fastcall BattlePointData__get_IsHideBattlePointGauge(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields._IsHideBattlePointGauge_k__BackingField;
}


bool __fastcall BattlePointData__get_IsShowedEffectAfterLastChanged(BattlePointData_o *this, const MethodInfo *method)
{
  return this->fields._IsShowedEffectAfterLastChanged_k__BackingField;
}


int32_t __fastcall BattlePointData__get_Phase(BattlePointData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEB07 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEB07 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)BattlePointPhaseMaster__TryGetEntityByValue(
                               (BattlePointPhaseMaster_o *)Instance,
                               this->fields.id,
                               this->fields.value,
                               &entity,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.phase;
LABEL_10:
    sub_1B64324(Instance);
  }
  return 1;
}


void __fastcall BattlePointData__set_IsEnableToAddValue(BattlePointData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsEnableToAddValue_k__BackingField = value;
}


void __fastcall BattlePointData__set_IsHideBattlePointGauge(
        BattlePointData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsHideBattlePointGauge_k__BackingField = value;
}


void __fastcall BattlePointData__set_IsShowedEffectAfterLastChanged(
        BattlePointData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = value;
}


void __fastcall BattlePointData_SaveData___ctor(BattlePointData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}