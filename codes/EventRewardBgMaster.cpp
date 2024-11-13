void __fastcall EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B162EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__, method, v2);
    byte_4B162EA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    298,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
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

  if ( (byte_4B162E8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    byte_4B162E8 = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRewardBgMaster__GetEventRewardBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v18; // x22
  int32_t v19; // w24
  int m_CancellationTokenSource; // w29
  int32_t v21; // w23
  DataManager_o *v22; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4B162EB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9, v10);
    sub_1BCA7E0(&EventRewardBgEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B162EB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(Instance, m_CancellationTokenSource_high);
  }
  v18 = (CommonReleaseMaster_o *)Instance;
  v19 = 0;
  m_CancellationTokenSource = 0;
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v21,
                                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
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
            if ( !v18 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v18, m_CancellationTokenSource_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( m_CancellationTokenSource < SLODWORD(v22->fields.m_CancellationTokenSource) )
              {
                v19 = *(_DWORD *)&v22->fields._DispLog;
                m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v21;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRewardBgMaster__GetEventRewardSlotBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 m_CancellationTokenSource_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v18; // x22
  int32_t v19; // w24
  int m_CancellationTokenSource; // w29
  int32_t v21; // w23
  DataManager_o *v22; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4B162EC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9, v10);
    sub_1BCA7E0(&EventRewardBgEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B162EC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(Instance, m_CancellationTokenSource_high);
  }
  v18 = (CommonReleaseMaster_o *)Instance;
  v19 = 0;
  m_CancellationTokenSource = 0;
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v21,
                                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
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
            if ( !v18 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v18, m_CancellationTokenSource_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( m_CancellationTokenSource < SLODWORD(v22->fields.m_CancellationTokenSource) )
              {
                v19 = *((_DWORD *)&v22->fields._DispLog + 1);
                m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v21;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return v19;
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

  if ( (byte_4B162E9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B162E9 = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}