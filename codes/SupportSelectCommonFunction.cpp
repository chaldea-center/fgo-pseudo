int64_t SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v4; // x19
  __int64 v5; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  __int64 v8; // x22
  void *monitor; // x20
  EventCampaignEntity_o *v10; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23941 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23941 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0);
  if ( FriendPointCampaigns )
  {
    v4 = FriendPointCampaigns;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v4->max_length;
    if ( max_length >= 1 )
    {
      v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v8 = 0;
      monitor = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1C2D6F4(Instance, v2, v5);
        v10 = v4->m_Items[v8];
        if ( !v10 || !v7 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v7,
                                     &entity,
                                     v10->fields.eventId,
                                     (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        if ( (int)++v8 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1C2D6EC(Instance, v2);
    }
  }
  return 0;
}