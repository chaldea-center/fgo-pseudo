void __fastcall QuestPhaseDetailAddMaster___ctor(QuestPhaseDetailAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B5EF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
    byte_4A5B5EF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    302,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
}


System_String_array *__fastcall QuestPhaseDetailAddMaster__GetAfterAction(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  QuestPhaseDetailAddEntity_o *OverwriteQuestPhaseDetailAddEntity; // x0
  struct System_String_array *afterActionVals; // x8

  OverwriteQuestPhaseDetailAddEntity = QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
                                         this,
                                         questId,
                                         phaseCnt,
                                         1,
                                         v4);
  if ( !OverwriteQuestPhaseDetailAddEntity )
    return 0LL;
  afterActionVals = OverwriteQuestPhaseDetailAddEntity->fields.afterActionVals;
  if ( !afterActionVals )
    return 0LL;
  if ( (int)afterActionVals->max_length <= 1 )
    return 0LL;
  return OverwriteQuestPhaseDetailAddEntity->fields.afterActionVals;
}


System_String_array *__fastcall QuestPhaseDetailAddMaster__GetBeforeAction(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  QuestPhaseDetailAddEntity_o *OverwriteQuestPhaseDetailAddEntity; // x0
  struct System_String_array *beforeActionVals; // x8

  OverwriteQuestPhaseDetailAddEntity = QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
                                         this,
                                         questId,
                                         phaseCnt,
                                         2,
                                         v4);
  if ( !OverwriteQuestPhaseDetailAddEntity )
    return 0LL;
  beforeActionVals = OverwriteQuestPhaseDetailAddEntity->fields.beforeActionVals;
  if ( !beforeActionVals )
    return 0LL;
  if ( (int)beforeActionVals->max_length <= 1 )
    return 0LL;
  return OverwriteQuestPhaseDetailAddEntity->fields.beforeActionVals;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailAddEntity_o *__fastcall QuestPhaseDetailAddMaster__GetEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B5ED & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
    byte_4A5B5ED = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&priority);
  return (QuestPhaseDetailAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseDetailAddMaster__TryGetEntity(
        QuestPhaseDetailAddMaster_o *this,
        QuestPhaseDetailAddEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B5EE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
    byte_4A5B5EE = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
}


QuestPhaseDetailAddEntity_o *__fastcall QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t overwriteType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  CommonReleaseMaster_o *v11; // x23
  int32_t Count; // w0
  int32_t v13; // w24
  QuestPhaseDetailAddEntity_o *v14; // x25
  int32_t v15; // w26
  __int64 methodPtr_low; // x10
  QuestPhaseDetailAddEntity_o *v17; // x29
  struct System_String_array *afterActionVals; // x8
  struct System_String_array *beforeActionVals; // x8

  if ( (byte_4A5B5F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&QuestPhaseDetailAddEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5F0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !this->fields.list) )
  {
LABEL_34:
    sub_1B8880C(Instance, v10);
  }
  v11 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0LL;
    v15 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v15,
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(QuestPhaseDetailAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (QuestPhaseDetailAddEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestPhaseDetailAddEntity_TypeInfo )
          v17 = (QuestPhaseDetailAddEntity_o *)Instance;
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      if ( overwriteType == 2 )
      {
        if ( !v17 )
          goto LABEL_34;
        beforeActionVals = v17->fields.beforeActionVals;
        if ( beforeActionVals && (int)beforeActionVals->max_length >= 2 )
        {
LABEL_23:
          if ( v17->fields.questId == questId && v17->fields.phase == phase )
          {
            if ( !v11 )
              goto LABEL_34;
            if ( CommonReleaseMaster__IsOpen(v11, v17->fields.commonReleaseId, 0LL, 0, 0LL)
              && (!v14 || v14->fields.priority < v17->fields.priority) )
            {
              v14 = v17;
            }
          }
        }
      }
      else if ( overwriteType == 1 )
      {
        if ( !v17 )
          goto LABEL_34;
        afterActionVals = v17->fields.afterActionVals;
        if ( afterActionVals )
        {
          if ( (int)afterActionVals->max_length > 1 )
            goto LABEL_23;
        }
      }
      if ( v13 == ++v15 )
        return v14;
    }
  }
  return 0LL;
}