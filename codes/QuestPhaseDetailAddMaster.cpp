void __fastcall QuestPhaseDetailAddMaster___ctor(QuestPhaseDetailAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED1BE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED1BE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    301,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
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
  System_String_o *PK; // x1

  if ( (byte_42ED1BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__,
      questId,
      phase,
      *(_QWORD *)&priority);
    byte_42ED1BC = 1;
  }
  PK = QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&priority);
  return (QuestPhaseDetailAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_42ED1BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&phase);
    byte_42ED1BD = 1;
  }
  PK = QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailAddEntity_o *__fastcall QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t overwriteType,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  CommonReleaseMaster_o *v22; // x23
  int32_t Count; // w0
  int32_t v24; // w24
  QuestPhaseDetailAddEntity_o *v25; // x20
  int32_t v26; // w26
  __int64 v27; // x10
  QuestPhaseDetailAddEntity_o *v28; // x25
  struct System_String_array *afterActionVals; // x8
  struct System_String_array *beforeActionVals; // x8

  if ( (byte_42ED1BF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      phase,
      *(_QWORD *)&overwriteType);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&QuestPhaseDetailAddEntity_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42ED1BF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !this->fields.list) )
  {
LABEL_34:
    sub_B5D69C(Instance, v21);
  }
  v22 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0LL;
    v26 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v26,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance
        && (v27 = *(&QuestPhaseDetailAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
      {
        if ( (QuestPhaseDetailAddEntity_c *)Instance->klass->_2.typeHierarchy[v27 - 1] == QuestPhaseDetailAddEntity_TypeInfo )
          v28 = (QuestPhaseDetailAddEntity_o *)Instance;
        else
          v28 = 0LL;
      }
      else
      {
        v28 = 0LL;
      }
      if ( overwriteType == 2 )
      {
        if ( !v28 )
          goto LABEL_34;
        beforeActionVals = v28->fields.beforeActionVals;
        if ( beforeActionVals && (int)beforeActionVals->max_length >= 2 )
        {
LABEL_23:
          if ( v28->fields.questId == questId && v28->fields.phase == phase )
          {
            if ( !v22 )
              goto LABEL_34;
            if ( CommonReleaseMaster__IsOpen(v22, v28->fields.commonReleaseId, 0LL, 0, 0LL)
              && (!v25 || v25->fields.priority < v28->fields.priority) )
            {
              v25 = v28;
            }
          }
        }
      }
      else if ( overwriteType == 1 )
      {
        if ( !v28 )
          goto LABEL_34;
        afterActionVals = v28->fields.afterActionVals;
        if ( afterActionVals )
        {
          if ( (int)afterActionVals->max_length > 1 )
            goto LABEL_23;
        }
      }
      if ( ++v26 >= v24 )
        return v25;
    }
  }
  return 0LL;
}