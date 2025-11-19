void EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB63D0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
    byte_4CB63D0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    304,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardBgEntity_o *EventRewardBgMaster__GetEntity(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB63CE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
    byte_4CB63CE = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33FDB94 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
}


int32_t EventRewardBgMaster__GetEventRewardBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v10; // x22
  int32_t v11; // w24
  int m_CancellationTokenSource; // w28
  int32_t v13; // w23
  DataManager_o *v14; // x25

  if ( (byte_4CB63D1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB63D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_17:
    sub_1C6BC60(Instance, m_CancellationTokenSource_high);
  }
  v10 = (CommonReleaseMaster_o *)Instance;
  v11 = 0;
  m_CancellationTokenSource = 0;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v13,
                                    (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
      if ( Instance )
      {
        v14 = Instance;
        if ( LODWORD(Instance->fields.m_CachedPtr) == eventId && HIDWORD(Instance->fields.m_CachedPtr) == slot )
        {
          m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( (int)m_CancellationTokenSource_high < 1 )
            goto LABEL_14;
          if ( !v10 )
            goto LABEL_17;
          Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v10, m_CancellationTokenSource_high, 0, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_14:
            if ( m_CancellationTokenSource < SLODWORD(v14->fields.m_CancellationTokenSource) )
            {
              v11 = *(_DWORD *)&v14->fields._DispLog;
              m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v13;
        if ( list )
          continue;
      }
    }
    goto LABEL_17;
  }
  return v11;
}


int32_t EventRewardBgMaster__GetEventRewardSlotBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v10; // x22
  int32_t v11; // w24
  int m_CancellationTokenSource; // w28
  int32_t v13; // w23
  DataManager_o *v14; // x25

  if ( (byte_4CB63D2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB63D2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_17:
    sub_1C6BC60(Instance, m_CancellationTokenSource_high);
  }
  v10 = (CommonReleaseMaster_o *)Instance;
  v11 = 0;
  m_CancellationTokenSource = 0;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v13,
                                    (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
      if ( Instance )
      {
        v14 = Instance;
        if ( LODWORD(Instance->fields.m_CachedPtr) == eventId && HIDWORD(Instance->fields.m_CachedPtr) == slot )
        {
          m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( (int)m_CancellationTokenSource_high < 1 )
            goto LABEL_14;
          if ( !v10 )
            goto LABEL_17;
          Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v10, m_CancellationTokenSource_high, 0, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_14:
            if ( m_CancellationTokenSource < SLODWORD(v14->fields.m_CancellationTokenSource) )
            {
              v11 = *((_DWORD *)&v14->fields._DispLog + 1);
              m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v13;
        if ( list )
          continue;
      }
    }
    goto LABEL_17;
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool EventRewardBgMaster__TryGetEntity(
        EventRewardBgMaster_o *this,
        EventRewardBgEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB63CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
    byte_4CB63CF = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}