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


void __fastcall BattlePointData___ctor_44383892(
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_1C3B9C0(v7, v8);
  *(BattlePointData_SaveData_Fields *)&this->fields.id = sv->fields;
  BattlePointData__UpdateFlagEnableToAddValue(this, svtData, v9);
  BattlePointData__UpdateMaxValue(this, v10);
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
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattlePointData_SaveData_o *result; // x0

  if ( (byte_4C24762 & 1) == 0 )
  {
    sub_1C3B764(&BattlePointData_SaveData_TypeInfo, method);
    byte_4C24762 = 1;
  }
  v3 = (Il2CppObject *)sub_1C3B9B0(BattlePointData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  result = (BattlePointData_SaveData_o *)v3;
  v3[1].klass = *(Il2CppClass **)&this->fields.id;
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
  __int64 v8; // x1
  BattlePointEntity_o *v9; // x21
  char v10; // w22
  bool IsHideBattlePointGauge; // w0
  bool v12; // w21

  if ( (byte_4C2475F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_BattlePointMaster___, svtData);
    sub_1C3B764(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C2475F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_BattlePointMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.id,
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_10;
  v9 = (BattlePointEntity_o *)Instance;
  Instance = (DataManager_o *)BattlePointEntity__IsEnableToAddBattlePoint((BattlePointEntity_o *)Instance, svtData, 0LL);
  this->fields._IsEnableToAddValue_k__BackingField = (unsigned __int8)Instance & 1;
  if ( !svtData
    || (v10 = (char)Instance, (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0LL)
    || (this->fields._IsEnableToAddValue_k__BackingField = v10 & ~BattleDeckServantData__IsIgnoreBattlePointUp(
                                                                    (BattleDeckServantData_o *)Instance,
                                                                    this->fields.id,
                                                                    0LL) & 1,
        IsHideBattlePointGauge = BattlePointEntity__IsHideBattlePointGauge(v9, svtData, 0LL),
        this->fields._IsHideBattlePointGauge_k__BackingField = IsHideBattlePointGauge,
        v12 = IsHideBattlePointGauge,
        (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0LL) )
  {
LABEL_10:
    sub_1C3B9C0(Instance, v8);
  }
  this->fields._IsHideBattlePointGauge_k__BackingField = (v12 | BattleDeckServantData__IsHideBattlePointGauge(
                                                                  (BattleDeckServantData_o *)Instance,
                                                                  this->fields.id,
                                                                  0LL)) & 1;
}


void __fastcall BattlePointData__UpdateMaxValue(BattlePointData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C24760 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C24760 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
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
  __int64 v19; // x1
  bool v20; // w21

  if ( (byte_4C24761 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_BattlePointMaster___, svtData);
    sub_1C3B764(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C24761 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_BattlePointMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.id,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Instance, v19);
  }
  v20 = this->fields._IsHideBattlePointGauge_k__BackingField;
  this->fields._IsHideBattlePointGauge_k__BackingField = (v20 | BattlePointEntity__IsHideBattlePointGauge(
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
  __int64 v5; // x1
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2475E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C2475E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___);
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
    sub_1C3B9C0(Instance, v5);
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