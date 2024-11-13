int64_t __fastcall SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v12; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  __int64 v15; // x22
  void *monitor; // x20
  EventCampaignEntity_o *v17; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12A42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B12A42 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0LL);
  if ( FriendPointCampaigns )
  {
    v12 = FriendPointCampaigns;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v12->max_length;
    if ( max_length >= 1 )
    {
      v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v15 = 0LL;
      monitor = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1BCAA44(Instance, v10);
        v17 = v12->m_Items[v15];
        if ( !v17 || !v14 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v14,
                                     &entity,
                                     v17->fields.eventId,
                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        max_length = v12->max_length;
        if ( (int)++v15 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1BCAA3C(Instance, v10);
    }
  }
  return 0LL;
}