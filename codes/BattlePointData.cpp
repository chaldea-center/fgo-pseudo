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


void __fastcall BattlePointData___ctor_43572392(
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
    sub_1BCAA3C(v7, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  BattlePointData_SaveData_o *result; // x0

  if ( (byte_4B188A2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePointData_SaveData_TypeInfo, method, v2);
    byte_4B188A2 = 1;
  }
  v5 = (Il2CppObject *)sub_1BCAA2C(BattlePointData_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  result = (BattlePointData_SaveData_o *)v5;
  v5[1].klass = *(Il2CppClass **)&this->fields.id;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  BattlePointEntity_o *v11; // x21
  char v12; // w22
  bool IsHideBattlePointGauge; // w0
  bool v14; // w21

  if ( (byte_4B1889F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BattlePointMaster___, svtData, method);
    sub_1BCA7E0(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1889F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BattlePointMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.id,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_10;
  v11 = (BattlePointEntity_o *)Instance;
  Instance = (DataManager_o *)BattlePointEntity__IsEnableToAddBattlePoint((BattlePointEntity_o *)Instance, svtData, 0LL);
  this->fields._IsEnableToAddValue_k__BackingField = (unsigned __int8)Instance & 1;
  if ( !svtData
    || (v12 = (char)Instance, (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0LL)
    || (this->fields._IsEnableToAddValue_k__BackingField = v12 & ~BattleDeckServantData__IsIgnoreBattlePointUp(
                                                                    (BattleDeckServantData_o *)Instance,
                                                                    this->fields.id,
                                                                    0LL) & 1,
        IsHideBattlePointGauge = BattlePointEntity__IsHideBattlePointGauge(v11, svtData, 0LL),
        this->fields._IsHideBattlePointGauge_k__BackingField = IsHideBattlePointGauge,
        v14 = IsHideBattlePointGauge,
        (Instance = (DataManager_o *)svtData->fields.deckSvt) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  }
  this->fields._IsHideBattlePointGauge_k__BackingField = (v14 | BattleDeckServantData__IsHideBattlePointGauge(
                                                                  (BattleDeckServantData_o *)Instance,
                                                                  this->fields.id,
                                                                  0LL)) & 1;
}


void __fastcall BattlePointData__UpdateMaxValue(BattlePointData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B188A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B188A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
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
  BattleEntity_o *v4; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  bool *p_IsEnableToAddValue_k__BackingField; // x22
  _BOOL4 IsEnableToAddValue_k__BackingField; // w23
  bool IsIgnoreBattlePointUp; // w0
  char v15; // w8
  _BOOL4 v16; // w9
  int v17; // w9
  bool IsHideBattlePointGauge_k__BackingField; // w23
  bool v19; // w8
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  bool v22; // w21

  v4 = battleEntity;
  if ( (byte_4B188A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BattlePointMaster___, svtData, battleEntity);
    sub_1BCA7E0(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B188A1 = 1;
  }
  if ( v4 )
  {
    QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v4, 0LL);
    p_IsEnableToAddValue_k__BackingField = &this->fields._IsEnableToAddValue_k__BackingField;
    IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
    v4 = (BattleEntity_o *)QuestPhaseEntity;
    if ( QuestPhaseEntity )
    {
      IsIgnoreBattlePointUp = QuestPhaseEntity__IsIgnoreBattlePointUp(QuestPhaseEntity, this->fields.id, 0LL);
      v15 = 0;
      v16 = !IsIgnoreBattlePointUp;
      goto LABEL_8;
    }
  }
  else
  {
    p_IsEnableToAddValue_k__BackingField = &this->fields._IsEnableToAddValue_k__BackingField;
    IsEnableToAddValue_k__BackingField = this->fields._IsEnableToAddValue_k__BackingField;
  }
  v15 = 1;
  v16 = 1;
LABEL_8:
  v17 = v16 && IsEnableToAddValue_k__BackingField;
  *p_IsEnableToAddValue_k__BackingField = v17;
  if ( !v17 )
    this->fields.value = -1;
  IsHideBattlePointGauge_k__BackingField = this->fields._IsHideBattlePointGauge_k__BackingField;
  v19 = (v15 & 1) == 0 && QuestPhaseEntity__IsHideBattlePointGauge((QuestPhaseEntity_o *)v4, this->fields.id, 0LL);
  this->fields._IsHideBattlePointGauge_k__BackingField = v19 || IsHideBattlePointGauge_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BattlePointMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.id,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v21);
  }
  v22 = this->fields._IsHideBattlePointGauge_k__BackingField;
  this->fields._IsHideBattlePointGauge_k__BackingField = (v22 | BattlePointEntity__IsHideBattlePointGauge(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1889E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BattlePointPhaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1889E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BattlePointPhaseMaster___);
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
    sub_1BCAA3C(Instance, v7);
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