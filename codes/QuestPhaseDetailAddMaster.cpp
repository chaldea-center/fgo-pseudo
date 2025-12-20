void QuestPhaseDetailAddMaster___ctor(QuestPhaseDetailAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CEC7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
    byte_4D2CEC7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    308,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
}


System_String_array *QuestPhaseDetailAddMaster__GetAfterAction(
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
    return 0;
  afterActionVals = OverwriteQuestPhaseDetailAddEntity->fields.afterActionVals;
  if ( !afterActionVals )
    return 0;
  if ( SLODWORD(afterActionVals->max_length) <= 1 )
    return 0;
  return OverwriteQuestPhaseDetailAddEntity->fields.afterActionVals;
}


System_String_array *QuestPhaseDetailAddMaster__GetBeforeAction(
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
    return 0;
  beforeActionVals = OverwriteQuestPhaseDetailAddEntity->fields.beforeActionVals;
  if ( !beforeActionVals )
    return 0;
  if ( SLODWORD(beforeActionVals->max_length) <= 1 )
    return 0;
  return OverwriteQuestPhaseDetailAddEntity->fields.beforeActionVals;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailAddEntity_o *QuestPhaseDetailAddMaster__GetEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2CEC5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
    byte_4D2CEC5 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&priority);
  return (QuestPhaseDetailAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_345FF78 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestPhaseDetailAddMaster__TryGetEntity(
        QuestPhaseDetailAddMaster_o *this,
        QuestPhaseDetailAddEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2CEC6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
    byte_4D2CEC6 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
}


QuestPhaseDetailAddEntity_o *QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t overwriteType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  CommonReleaseMaster_o *v11; // x23
  int32_t Count; // w0
  int32_t v13; // w24
  QuestPhaseDetailAddEntity_o *v14; // x25
  int32_t v15; // w26
  QuestPhaseDetailAddEntity_o *v16; // x27
  __int64 v17; // x8
  __int64 v18; // x8

  if ( (byte_4D2CEC8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailAddEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailAddEntity__get_Item__);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CEC8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !this->fields.list) )
  {
LABEL_28:
    sub_1C942F0(Instance, v10);
  }
  v11 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_28;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v15,
                   (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailAddEntity__get_Item__);
      v16 = (QuestPhaseDetailAddEntity_o *)Instance;
      if ( overwriteType == 2 )
      {
        if ( !Instance )
          goto LABEL_28;
        v18 = *((_QWORD *)Instance + 4);
        if ( v18 && *(int *)(v18 + 24) >= 2 )
        {
LABEL_17:
          if ( *((_DWORD *)Instance + 4) == questId && *((_DWORD *)Instance + 5) == phase )
          {
            if ( !v11 )
              goto LABEL_28;
            if ( CommonReleaseMaster__IsOpen(v11, *((_DWORD *)Instance + 7), 0, 0, 0)
              && (!v14 || v14->fields.priority < v16->fields.priority) )
            {
              v14 = v16;
            }
          }
        }
      }
      else if ( overwriteType == 1 )
      {
        if ( !Instance )
          goto LABEL_28;
        v17 = *((_QWORD *)Instance + 5);
        if ( v17 )
        {
          if ( *(int *)(v17 + 24) > 1 )
            goto LABEL_17;
        }
      }
      if ( v13 == ++v15 )
        return v14;
    }
  }
  return 0;
}