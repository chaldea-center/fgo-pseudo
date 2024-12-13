int64_t __fastcall SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v8; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x22
  void *monitor; // x20
  EventCampaignEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B339CC & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventCampaignMaster___, v1);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B339CC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0LL);
  if ( FriendPointCampaigns )
  {
    v8 = FriendPointCampaigns;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v11 = 0LL;
      monitor = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1BD36BC(Instance, v6);
        v13 = v8->m_Items[v11];
        if ( !v13 || !v10 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v10,
                                     &entity,
                                     v13->fields.eventId,
                                     (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        max_length = v8->max_length;
        if ( (int)++v11 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1BD36B4(Instance, v6);
    }
  }
  return 0LL;
}