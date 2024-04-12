void __fastcall QuestPhaseDetailAddMaster___ctor(QuestPhaseDetailAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B4835 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
    byte_42B4835 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    301,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string___ctor__);
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

  if ( (byte_42B4833 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
    byte_42B4833 = 1;
  }
  PK = QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&priority);
  return (QuestPhaseDetailAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__GetEntity__);
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

  if ( (byte_42B4834 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
    byte_42B4834 = 1;
  }
  PK = QuestPhaseDetailAddEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestPhaseDetailAddMaster__QuestPhaseDetailAddEntity__string__TryGetEntity__);
}


QuestPhaseDetailAddEntity_o *__fastcall QuestPhaseDetailAddMaster__getOverwriteQuestPhaseDetailAddEntity(
        QuestPhaseDetailAddMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t overwriteType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  CommonReleaseMaster_o *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  QuestPhaseDetailAddEntity_o *v13; // x20
  int32_t v14; // w26
  __int64 v15; // x10
  QuestPhaseDetailAddEntity_o *v16; // x25
  struct System_String_array *afterActionVals; // x8
  struct System_String_array *beforeActionVals; // x8

  if ( (byte_42B4836 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&QuestPhaseDetailAddEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4836 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !this->fields.list) )
  {
LABEL_34:
    sub_B52A5C(Instance, v9);
  }
  v10 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v14,
                                    (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance
        && (v15 = *(&QuestPhaseDetailAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
      {
        if ( (QuestPhaseDetailAddEntity_c *)Instance->klass->_2.typeHierarchy[v15 - 1] == QuestPhaseDetailAddEntity_TypeInfo )
          v16 = (QuestPhaseDetailAddEntity_o *)Instance;
        else
          v16 = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      if ( overwriteType == 2 )
      {
        if ( !v16 )
          goto LABEL_34;
        beforeActionVals = v16->fields.beforeActionVals;
        if ( beforeActionVals && (int)beforeActionVals->max_length >= 2 )
        {
LABEL_23:
          if ( v16->fields.questId == questId && v16->fields.phase == phase )
          {
            if ( !v10 )
              goto LABEL_34;
            if ( CommonReleaseMaster__IsOpen(v10, v16->fields.commonReleaseId, 0LL, 0, 0LL)
              && (!v13 || v13->fields.priority < v16->fields.priority) )
            {
              v13 = v16;
            }
          }
        }
      }
      else if ( overwriteType == 1 )
      {
        if ( !v16 )
          goto LABEL_34;
        afterActionVals = v16->fields.afterActionVals;
        if ( afterActionVals )
        {
          if ( (int)afterActionVals->max_length > 1 )
            goto LABEL_23;
        }
      }
      if ( ++v14 >= v12 )
        return v13;
    }
  }
  return 0LL;
}