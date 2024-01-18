void __fastcall EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184848 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__, method);
    byte_4184848 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    296,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardBgEntity_o *__fastcall EventRewardBgMaster__GetEntity(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4184846 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4184846 = 1;
  }
  PK = EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
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
  __int64 datalist_high; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v14; // x22
  int datalist; // w26
  int32_t v16; // w23
  DataManager_o *v17; // x25
  __int64 v18; // x10
  int32_t lookup; // [xsp+Ch] [xbp-54h]

  if ( (byte_4184849 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_B2C35C(&EventRewardBgEntity_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4184849 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B2C434(Instance, datalist_high);
  }
  lookup = 0;
  v14 = (CommonReleaseMaster_o *)Instance;
  datalist = 0;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v16,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v17 = Instance;
        v18 = *(&EventRewardBgEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[v18 - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId && *(_DWORD *)&Instance->fields._DispLog == slot )
          {
            datalist_high = HIDWORD(Instance->fields.datalist);
            if ( (int)datalist_high < 1 )
              goto LABEL_16;
            if ( !v14 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v14, datalist_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( datalist < SLODWORD(v17->fields.datalist) )
              {
                datalist = (int)v17->fields.datalist;
                lookup = (int32_t)v17->fields.lookup;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v16;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return lookup;
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
  __int64 datalist_high; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v14; // x22
  int datalist; // w26
  int32_t v16; // w23
  DataManager_o *v17; // x25
  __int64 v18; // x10
  int32_t lookup_high; // [xsp+Ch] [xbp-54h]

  if ( (byte_418484A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_B2C35C(&EventRewardBgEntity_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418484A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B2C434(Instance, datalist_high);
  }
  lookup_high = 0;
  v14 = (CommonReleaseMaster_o *)Instance;
  datalist = 0;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v16,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v17 = Instance;
        v18 = *(&EventRewardBgEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[v18 - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId && *(_DWORD *)&Instance->fields._DispLog == slot )
          {
            datalist_high = HIDWORD(Instance->fields.datalist);
            if ( (int)datalist_high < 1 )
              goto LABEL_16;
            if ( !v14 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v14, datalist_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( datalist < SLODWORD(v17->fields.datalist) )
              {
                datalist = (int)v17->fields.datalist;
                lookup_high = HIDWORD(v17->fields.lookup);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v16;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return lookup_high;
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
  System_String_o *PK; // x2

  if ( (byte_4184847 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__, entity);
    byte_4184847 = 1;
  }
  PK = EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}