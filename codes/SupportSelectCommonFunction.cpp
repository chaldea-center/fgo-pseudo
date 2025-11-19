int64_t SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v4; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x22
  void *monitor; // x20
  EventCampaignEntity_o *v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB28E7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB28E7 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0);
  if ( FriendPointCampaigns )
  {
    v4 = FriendPointCampaigns;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v4->max_length;
    if ( max_length >= 1 )
    {
      v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v7 = 0;
      monitor = 0;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
          sub_1C6BC68(Instance);
        v9 = v4->m_Items[v7];
        if ( !v9 || !v6 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v6,
                                     &entity,
                                     v9->fields.eventId,
                                     (const MethodInfo_33F9128 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( monitor )
          {
            if ( (__int64)entity[5].monitor < (__int64)monitor )
              monitor = entity[5].monitor;
          }
          else
          {
            monitor = entity[5].monitor;
          }
        }
        max_length = v4->max_length;
        if ( (int)++v7 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1C6BC60(Instance, v2);
    }
  }
  return 0;
}