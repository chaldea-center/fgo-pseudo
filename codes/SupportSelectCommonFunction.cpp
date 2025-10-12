int64_t SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v3; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x21
  __int64 v6; // x22
  void *monitor; // x20
  EventCampaignEntity_o *v8; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C34012 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34012 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0);
  if ( FriendPointCampaigns )
  {
    v3 = FriendPointCampaigns;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v3->max_length;
    if ( max_length >= 1 )
    {
      v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v6 = 0;
      monitor = 0;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1C32E84(Instance);
        v8 = v3->m_Items[v6];
        if ( !v8 || !v5 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v5,
                                     &entity,
                                     v8->fields.eventId,
                                     (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        max_length = v3->max_length;
        if ( (int)++v6 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1C32E7C(Instance);
    }
  }
  return 0;
}