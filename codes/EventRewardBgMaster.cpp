void __fastcall EventRewardBgMaster___ctor(EventRewardBgMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5521 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E5521 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    297,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string___ctor__);
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

  if ( (byte_42E551F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__,
      eventId,
      slot,
      *(_QWORD *)&priority);
    byte_42E551F = 1;
  }
  PK = EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&priority);
  return (EventRewardBgEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__GetEntity__);
}


int32_t __fastcall EventRewardBgMaster__GetEventRewardBgId(
        EventRewardBgMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 datalist_high; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v22; // x22
  int datalist; // w26
  int32_t v24; // w23
  DataManager_o *v25; // x25
  __int64 v26; // x10
  int32_t lookup; // [xsp+Ch] [xbp-54h]

  if ( (byte_42E5522 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, slot, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&EventRewardBgEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E5522 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, datalist_high);
  }
  lookup = 0;
  v22 = (CommonReleaseMaster_o *)Instance;
  datalist = 0;
  v24 = 0;
  while ( v24 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v24,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v25 = Instance;
        v26 = *(&EventRewardBgEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[v26 - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId && *(_DWORD *)&Instance->fields._DispLog == slot )
          {
            datalist_high = HIDWORD(Instance->fields.datalist);
            if ( (int)datalist_high < 1 )
              goto LABEL_16;
            if ( !v22 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v22, datalist_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( datalist < SLODWORD(v25->fields.datalist) )
              {
                datalist = (int)v25->fields.datalist;
                lookup = (int32_t)v25->fields.lookup;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v24;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 datalist_high; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v22; // x22
  int datalist; // w26
  int32_t v24; // w23
  DataManager_o *v25; // x25
  __int64 v26; // x10
  int32_t lookup_high; // [xsp+Ch] [xbp-54h]

  if ( (byte_42E5523 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, slot, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&EventRewardBgEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E5523 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, datalist_high);
  }
  lookup_high = 0;
  v22 = (CommonReleaseMaster_o *)Instance;
  datalist = 0;
  v24 = 0;
  while ( v24 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v24,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v25 = Instance;
        v26 = *(&EventRewardBgEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (EventRewardBgEntity_c *)Instance->klass->_2.typeHierarchy[v26 - 1] == EventRewardBgEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId && *(_DWORD *)&Instance->fields._DispLog == slot )
          {
            datalist_high = HIDWORD(Instance->fields.datalist);
            if ( (int)datalist_high < 1 )
              goto LABEL_16;
            if ( !v22 )
              goto LABEL_19;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v22, datalist_high, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_16:
              if ( datalist < SLODWORD(v25->fields.datalist) )
              {
                datalist = (int)v25->fields.datalist;
                lookup_high = HIDWORD(v25->fields.lookup);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v24;
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

  if ( (byte_42E5520 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&slot);
    byte_42E5520 = 1;
  }
  PK = EventRewardBgEntity__CreatePK(eventId, slot, priority, *(const MethodInfo **)&slot);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventRewardBgMaster__EventRewardBgEntity__string__TryGetEntity__);
}