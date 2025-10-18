void EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C430B7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
    byte_4C430B7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    304,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
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

  if ( (byte_4C430B5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
    byte_4C430B5 = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
}


int32_t EventRewardBgMaster__GetEventRewardBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v9; // x22
  int32_t v10; // w24
  int v11; // w28
  int32_t v12; // w23
  _DWORD *v13; // x25
  int32_t v14; // w1

  if ( (byte_4C430B8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C430B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_17:
    sub_1C372B4(Instance);
  }
  v9 = (CommonReleaseMaster_o *)Instance;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
      if ( Instance )
      {
        v13 = Instance;
        if ( *((_DWORD *)Instance + 4) == eventId && *((_DWORD *)Instance + 5) == slot )
        {
          v14 = *((_DWORD *)Instance + 7);
          if ( v14 < 1 )
            goto LABEL_14;
          if ( !v9 )
            goto LABEL_17;
          Instance = (void *)CommonReleaseMaster__IsOpen(v9, v14, 0, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_14:
            if ( v11 < v13[6] )
            {
              v10 = v13[8];
              v11 = v13[6];
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v12;
        if ( list )
          continue;
      }
    }
    goto LABEL_17;
  }
  return v10;
}


int32_t EventRewardBgMaster__GetEventRewardSlotBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v9; // x22
  int32_t v10; // w24
  int v11; // w28
  int32_t v12; // w23
  _DWORD *v13; // x25
  int32_t v14; // w1

  if ( (byte_4C430B9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C430B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_17:
    sub_1C372B4(Instance);
  }
  v9 = (CommonReleaseMaster_o *)Instance;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventRewardBgEntity__get_Item__);
      if ( Instance )
      {
        v13 = Instance;
        if ( *((_DWORD *)Instance + 4) == eventId && *((_DWORD *)Instance + 5) == slot )
        {
          v14 = *((_DWORD *)Instance + 7);
          if ( v14 < 1 )
            goto LABEL_14;
          if ( !v9 )
            goto LABEL_17;
          Instance = (void *)CommonReleaseMaster__IsOpen(v9, v14, 0, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_14:
            if ( v11 < v13[6] )
            {
              v10 = v13[9];
              v11 = v13[6];
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v12;
        if ( list )
          continue;
      }
    }
    goto LABEL_17;
  }
  return v10;
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

  if ( (byte_4C430B6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
    byte_4C430B6 = 1;
  }
  PK = (Il2CppObject *)EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}