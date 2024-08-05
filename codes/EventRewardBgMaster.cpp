void __fastcall EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE604 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__, method);
    byte_49FE604 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    298,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardBgEntity_o *__fastcall EventRewardBgMaster__GetEntity(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE602 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FE602 = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D64D8 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRewardBgMaster__GetEventRewardBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v14; // x22
  int32_t v15; // w24
  int m_CancellationTokenSource; // w29
  int32_t v17; // w23
  DataManager_o *v18; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_49FE605 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_1B64870(&EventRewardBgEntity_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FE605 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_1B64ACC(Instance, m_CancellationTokenSource_high);
  }
  v14 = (CommonReleaseMaster_o *)Instance;
  v15 = 0;
  m_CancellationTokenSource = 0;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v17,
                                    (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v18 = Instance;
        methodPtr_low = LOBYTE(EventRewardBgEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId
            && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == slot )
          {
            m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( (int)m_CancellationTokenSource_high < 1 )
              goto LABEL_16;
            if ( !v14 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v14, m_CancellationTokenSource_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( m_CancellationTokenSource < SLODWORD(v18->fields.m_CancellationTokenSource) )
              {
                v15 = *(_DWORD *)&v18->fields._DispLog;
                m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v17;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRewardBgMaster__GetEventRewardSlotBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v14; // x22
  int32_t v15; // w24
  int m_CancellationTokenSource; // w29
  int32_t v17; // w23
  DataManager_o *v18; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_49FE606 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_1B64870(&EventRewardBgEntity_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FE606 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_1B64ACC(Instance, m_CancellationTokenSource_high);
  }
  v14 = (CommonReleaseMaster_o *)Instance;
  v15 = 0;
  m_CancellationTokenSource = 0;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v17,
                                    (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v18 = Instance;
        methodPtr_low = LOBYTE(EventRewardBgEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId
            && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == slot )
          {
            m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( (int)m_CancellationTokenSource_high < 1 )
              goto LABEL_16;
            if ( !v14 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v14, m_CancellationTokenSource_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( m_CancellationTokenSource < SLODWORD(v18->fields.m_CancellationTokenSource) )
              {
                v15 = *((_DWORD *)&v18->fields._DispLog + 1);
                m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v17;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardBgMaster__TryGetEntity(
        EventRewardBgMaster_o *this,
        EventRewardBgEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE603 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__, entity);
    byte_49FE603 = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}