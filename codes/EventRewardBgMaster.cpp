void __fastcall EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387EB2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
    byte_4387EB2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    297,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
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

  if ( (byte_4387EB0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
    byte_4387EB0 = 1;
  }
  PK = EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
}


int32_t __fastcall EventRewardBgMaster__GetEventRewardBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 datalist_high; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v10; // x22
  int datalist; // w26
  int32_t v12; // w23
  DataManager_o *v13; // x25
  __int64 v14; // x10
  int32_t lookup; // [xsp+Ch] [xbp-54h]

  if ( (byte_4387EB3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&EventRewardBgEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387EB3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B7769C(Instance, datalist_high);
  }
  lookup = 0;
  v10 = (CommonReleaseMaster_o *)Instance;
  datalist = 0;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v12,
                                    (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v13 = Instance;
        v14 = *(&EventRewardBgEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[v14 - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId && *(_DWORD *)&Instance->fields._DispLog == slot )
          {
            datalist_high = HIDWORD(Instance->fields.datalist);
            if ( (int)datalist_high < 1 )
              goto LABEL_16;
            if ( !v10 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v10, datalist_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( datalist < SLODWORD(v13->fields.datalist) )
              {
                datalist = (int)v13->fields.datalist;
                lookup = (int32_t)v13->fields.lookup;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v12;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return lookup;
}


int32_t __fastcall EventRewardBgMaster__GetEventRewardSlotBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 datalist_high; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v10; // x22
  int datalist; // w26
  int32_t v12; // w23
  DataManager_o *v13; // x25
  __int64 v14; // x10
  int32_t lookup_high; // [xsp+Ch] [xbp-54h]

  if ( (byte_4387EB4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&EventRewardBgEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387EB4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B7769C(Instance, datalist_high);
  }
  lookup_high = 0;
  v10 = (CommonReleaseMaster_o *)Instance;
  datalist = 0;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v12,
                                    (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v13 = Instance;
        v14 = *(&EventRewardBgEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[v14 - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId && *(_DWORD *)&Instance->fields._DispLog == slot )
          {
            datalist_high = HIDWORD(Instance->fields.datalist);
            if ( (int)datalist_high < 1 )
              goto LABEL_16;
            if ( !v10 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v10, datalist_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( datalist < SLODWORD(v13->fields.datalist) )
              {
                datalist = (int)v13->fields.datalist;
                lookup_high = HIDWORD(v13->fields.lookup);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v12;
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

  if ( (byte_4387EB1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
    byte_4387EB1 = 1;
  }
  PK = EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}