void __fastcall QuestPhaseDetailAddMaster___ctor(QuestPhaseDetailAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEFA9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__, method);
    byte_49FEFA9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    302,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
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

  if ( (byte_49FEFA7 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FEFA7 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&priority);
  return (QuestPhaseDetailAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_30D6AF0 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
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

  if ( (byte_49FEFA8 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__,
      entity);
    byte_49FEFA8 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailAddEntity_o *__fastcall QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t overwriteType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  CommonReleaseMaster_o *v15; // x23
  int32_t Count; // w0
  int32_t v17; // w24
  QuestPhaseDetailAddEntity_o *v18; // x25
  int32_t v19; // w26
  __int64 methodPtr_low; // x10
  QuestPhaseDetailAddEntity_o *v21; // x29
  struct System_String_array *afterActionVals; // x8
  struct System_String_array *beforeActionVals; // x8

  if ( (byte_49FEFAA & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B64A00(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1B64A00(&QuestPhaseDetailAddEntity_TypeInfo, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FEFAA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !this->fields.list) )
  {
LABEL_34:
    sub_1B64C5C(Instance, v14);
  }
  v15 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0LL;
    v19 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v19,
                                    (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(QuestPhaseDetailAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (QuestPhaseDetailAddEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestPhaseDetailAddEntity_TypeInfo )
          v21 = (QuestPhaseDetailAddEntity_o *)Instance;
        else
          v21 = 0LL;
      }
      else
      {
        v21 = 0LL;
      }
      if ( overwriteType == 2 )
      {
        if ( !v21 )
          goto LABEL_34;
        beforeActionVals = v21->fields.beforeActionVals;
        if ( beforeActionVals && (int)beforeActionVals->max_length >= 2 )
        {
LABEL_23:
          if ( v21->fields.questId == questId && v21->fields.phase == phase )
          {
            if ( !v15 )
              goto LABEL_34;
            if ( CommonReleaseMaster__IsOpen(v15, v21->fields.commonReleaseId, 0LL, 0, 0LL)
              && (!v18 || v18->fields.priority < v21->fields.priority) )
            {
              v18 = v21;
            }
          }
        }
      }
      else if ( overwriteType == 1 )
      {
        if ( !v21 )
          goto LABEL_34;
        afterActionVals = v21->fields.afterActionVals;
        if ( afterActionVals )
        {
          if ( (int)afterActionVals->max_length > 1 )
            goto LABEL_23;
        }
      }
      if ( v17 == ++v19 )
        return v18;
    }
  }
  return 0LL;
}