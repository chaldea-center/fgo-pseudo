void __fastcall QuestPhaseDetailAddMaster___ctor(QuestPhaseDetailAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186EE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__, method);
    byte_4186EE8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    300,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
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

  if ( (byte_4186EE6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4186EE6 = 1;
  }
  PK = QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&priority);
  return (QuestPhaseDetailAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
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

  if ( (byte_4186EE7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__,
      entity);
    byte_4186EE7 = 1;
  }
  PK = QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailAddEntity_o *__fastcall QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t overwriteType,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  CommonReleaseMaster_o *v14; // x23
  int32_t Count; // w0
  int32_t v16; // w24
  QuestPhaseDetailAddEntity_o *v17; // x20
  int32_t v18; // w26
  __int64 v19; // x10
  QuestPhaseDetailAddEntity_o *v20; // x25
  struct System_String_array *afterActionVals; // x8
  struct System_String_array *beforeActionVals; // x8

  if ( (byte_4186EE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_B2C35C(&QuestPhaseDetailAddEntity_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4186EE9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !this->fields.list) )
  {
LABEL_34:
    sub_B2C434(Instance, v13);
  }
  v14 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v18,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance
        && (v19 = *(&QuestPhaseDetailAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
      {
        if ( (QuestPhaseDetailAddEntity_c *)Instance->klass->_2.typeHierarchy[v19 - 1] == QuestPhaseDetailAddEntity_TypeInfo )
          v20 = (QuestPhaseDetailAddEntity_o *)Instance;
        else
          v20 = 0LL;
      }
      else
      {
        v20 = 0LL;
      }
      if ( overwriteType == 2 )
      {
        if ( !v20 )
          goto LABEL_34;
        beforeActionVals = v20->fields.beforeActionVals;
        if ( beforeActionVals && (int)beforeActionVals->max_length >= 2 )
        {
LABEL_23:
          if ( v20->fields.questId == questId && v20->fields.phase == phase )
          {
            if ( !v14 )
              goto LABEL_34;
            if ( CommonReleaseMaster__IsOpen(v14, v20->fields.commonReleaseId, 0LL, 0, 0LL)
              && (!v17 || v17->fields.priority < v20->fields.priority) )
            {
              v17 = v20;
            }
          }
        }
      }
      else if ( overwriteType == 1 )
      {
        if ( !v20 )
          goto LABEL_34;
        afterActionVals = v20->fields.afterActionVals;
        if ( afterActionVals )
        {
          if ( (int)afterActionVals->max_length > 1 )
            goto LABEL_23;
        }
      }
      if ( ++v18 >= v16 )
        return v17;
    }
  }
  return 0LL;
}