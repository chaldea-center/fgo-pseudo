void __fastcall EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2204D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__, method);
    byte_4C2204D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    304,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
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

  if ( (byte_4C2204B & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C2204B = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_329F900 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v13; // x22
  int32_t v14; // w24
  int m_CancellationTokenSource; // w28
  int32_t v16; // w23
  DataManager_o *v17; // x25

  if ( (byte_4C2204E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C2204E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_1C3B9C0(Instance, m_CancellationTokenSource_high);
  }
  v13 = (CommonReleaseMaster_o *)Instance;
  v14 = 0;
  m_CancellationTokenSource = 0;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v16,
                                    (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
      if ( Instance )
      {
        v17 = Instance;
        if ( Instance->fields.m_CachedPtr == eventId
          && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == slot )
        {
          m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( (int)m_CancellationTokenSource_high < 1 )
            goto LABEL_14;
          if ( !v13 )
            goto LABEL_17;
          Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v13, m_CancellationTokenSource_high, 0LL, 0, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_14:
            if ( m_CancellationTokenSource < SLODWORD(v17->fields.m_CancellationTokenSource) )
            {
              v14 = *(_DWORD *)&v17->fields._DispLog;
              m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource;
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v16;
        if ( list )
          continue;
      }
    }
    goto LABEL_17;
  }
  return v14;
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
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v13; // x22
  int32_t v14; // w24
  int m_CancellationTokenSource; // w28
  int32_t v16; // w23
  DataManager_o *v17; // x25

  if ( (byte_4C2204F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C2204F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_1C3B9C0(Instance, m_CancellationTokenSource_high);
  }
  v13 = (CommonReleaseMaster_o *)Instance;
  v14 = 0;
  m_CancellationTokenSource = 0;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v16,
                                    (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
      if ( Instance )
      {
        v17 = Instance;
        if ( Instance->fields.m_CachedPtr == eventId
          && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == slot )
        {
          m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( (int)m_CancellationTokenSource_high < 1 )
            goto LABEL_14;
          if ( !v13 )
            goto LABEL_17;
          Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v13, m_CancellationTokenSource_high, 0LL, 0, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_14:
            if ( m_CancellationTokenSource < SLODWORD(v17->fields.m_CancellationTokenSource) )
            {
              v14 = *((_DWORD *)&v17->fields._DispLog + 1);
              m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource;
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v16;
        if ( list )
          continue;
      }
    }
    goto LABEL_17;
  }
  return v14;
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

  if ( (byte_4C2204C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__, entity);
    byte_4C2204C = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}