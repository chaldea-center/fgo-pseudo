void BattlePointData___ctor(
        BattlePointData_o *this,
        int32_t battlePointId,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  this->fields.maxValue = 0x7FFFFFFF;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.id = battlePointId;
  BattlePointData__UpdateFlagEnableToAddValue(this, svtData, v7);
  this->fields.value = this->fields._IsEnableToAddValue_k__BackingField - 1;
  BattlePointData__UpdateMaxValue(this, v8);
}


void BattlePointData___ctor_46713480(
        BattlePointData_o *this,
        BattlePointData_SaveData_o *sv,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  this->fields.maxValue = 0x7FFFFFFF;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !sv )
    sub_1C7BD40(v7, v8);
  *(BattlePointData_SaveData_Fields *)&this->fields.id = sv->fields;
  BattlePointData__UpdateFlagEnableToAddValue(this, svtData, v9);
  BattlePointData__UpdateMaxValue(this, v10);
}


bool BattlePointData__AddPoint(BattlePointData_o *this, int32_t addValue, bool isOverwrite, const MethodInfo *method)
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


BattlePointData_SaveData_o *BattlePointData__GetSaveData(BattlePointData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattlePointData_SaveData_o *result; // x0

  if ( (byte_4CF1208 & 1) == 0 )
  {
    sub_1C7BAE8(&BattlePointData_SaveData_TypeInfo);
    byte_4CF1208 = 1;
  }
  v3 = (Il2CppObject *)sub_1C7BD34(BattlePointData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  result = (BattlePointData_SaveData_o *)v3;
  v3[1].klass = *(Il2CppClass **)&this->fields.id;
  return result;
}


void BattlePointData__NotifyShowedEffect(BattlePointData_o *this, const MethodInfo *method)
{
  this->fields._IsShowedEffectAfterLastChanged_k__BackingField = 1;
}


void BattlePointData__UpdateFlagEnableToAddValue(
        BattlePointData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  BattlePointEntity_o *v7; // x21
  char v8; // w22
  bool IsHideBattlePointGauge; // w0
  bool v10; // w21

  if ( (byte_4CF1205 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_BattlePointMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1205 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_BattlePointMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.id,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_10;
  v7 = (BattlePointEntity_o *)Instance;
  Instance = (DataManager_o *)BattlePointEntity__IsEnableToAddBattlePoint((BattlePointEntity_o *)Instance, svtData, 0);
  this->fields._IsEnableToAddValue_k__BackingField = (unsigned __int8)Instance & 1;
  if ( !svtData
    || (v8 = (char)Instance, (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0)
    || (this->fields._IsEnableToAddValue_k__BackingField = v8
                                                         & ~BattleDeckServantData__IsIgnoreBattlePointUp(
                                                              (BattleDeckServantData_o *)Instance,
                                                              this->fields.id,
                                                              0)
                                                         & 1,
        IsHideBattlePointGauge = BattlePointEntity__IsHideBattlePointGauge(v7, svtData, 0),
        this->fields._IsHideBattlePointGauge_k__BackingField = IsHideBattlePointGauge,
        v10 = IsHideBattlePointGauge,
        (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0) )
  {
LABEL_10:
    sub_1C7BD40(Instance, v6);
  }
  this->fields._IsHideBattlePointGauge_k__BackingField = (v10
                                                        | BattleDeckServantData__IsHideBattlePointGauge(
                                                            (BattleDeckServantData_o *)Instance,
                                                            this->fields.id,
                                                            0))
                                                       & 1;
}


void BattlePointData__UpdateMaxValue(BattlePointData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CF1206 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1206 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  this->fields.maxValue = BattlePointPhaseMaster__GetMaxPhaseValue(
                            (BattlePointPhaseMaster_o *)Instance,
                            this->fields.id,
                            0);
}


void BattlePointData__UpdateSetting(
        BattlePointData_o *this,
        BattleServantData_o *svtData,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  BattleEntity_o *QuestPhaseEntity; // x0
  bool *p_IsEnableToAddValue_k__BackingField; // x22
  _BOOL4 IsEnableToAddValue_k__BackingField; // w23
  bool IsIgnoreBattlePointUp; // w0
  char v11; // w8
  _BOOL4 v12; // w9
  int v13; // w9
  bool IsHideBattlePointGauge_k__BackingField; // w23
  bool v15; // w8
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  bool v18; // w21

  if ( (byte_4CF1207 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_BattlePointMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1207 = 1;
  }
  if ( battleEntity )
  {
    QuestPhaseEntity = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battleEntity, 0);
    p_IsEnableToAddValue_k__BackingField = &this->fields._IsEnableToAddValue_k__BackingField;
    IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
    battleEntity = QuestPhaseEntity;
    if ( QuestPhaseEntity )
    {
      IsIgnoreBattlePointUp = QuestPhaseEntity__IsIgnoreBattlePointUp(
                                (QuestPhaseEntity_o *)QuestPhaseEntity,
                                this->fields.id,
                                0);
      v11 = 0;
      v12 = !IsIgnoreBattlePointUp;
      goto LABEL_8;
    }
  }
  else
  {
    p_IsEnableToAddValue_k__BackingField = &this->fields._IsEnableToAddValue_k__BackingField;
    IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
  }
  v11 = 1;
  v12 = 1;
LABEL_8:
  v13 = v12 && IsEnableToAddValue_k__BackingField;
  *p_IsEnableToAddValue_k__BackingField = v13;
  if ( !v13 )
    this->fields.value = -1;
  IsHideBattlePointGauge_k__BackingField = this->fields._IsHideBattlePointGauge_k__BackingField;
  v15 = (v11 & 1) == 0
     && QuestPhaseEntity__IsHideBattlePointGauge((QuestPhaseEntity_o *)battleEntity, this->fields.id, 0);
  this->fields._IsHideBattlePointGauge_k__BackingField = v15 || IsHideBattlePointGauge_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_BattlePointMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.id,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__)) == 0 )
  {
    sub_1C7BD40(Instance, v17);
  }
  v18 = this->fields._IsHideBattlePointGauge_k__BackingField;
  this->fields._IsHideBattlePointGauge_k__BackingField = (v18
                                                        | BattlePointEntity__IsHideBattlePointGauge(
                                                            (BattlePointEntity_o *)Instance,
                                                            svtData,
                                                            0))
                                                       & 1;
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


int32_t BattlePointData__get_Phase(BattlePointData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF1204 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1204 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)BattlePointPhaseMaster__TryGetEntityByValue(
                               (BattlePointPhaseMaster_o *)Instance,
                               this->fields.id,
                               this->fields.value,
                               &entity,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.phase;
LABEL_10:
    sub_1C7BD40(Instance, v4);
  }
  return 1;
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


void BattlePointData_SaveData___ctor(BattlePointData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}