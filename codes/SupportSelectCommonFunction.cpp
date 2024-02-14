int64_t __fastcall SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v7; // x19
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x21
  __int64 v10; // x22
  int64_t targetId; // x20
  EventCampaignEntity_o *v12; // x8
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421850B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421850B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0LL);
  if ( FriendPointCampaigns )
  {
    v7 = FriendPointCampaigns;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v7->max_length;
    if ( max_length >= 1 )
    {
      v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v10 = 0LL;
      targetId = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= max_length )
        {
          v14 = sub_B0D9A8(Instance);
          sub_B0D948(v14, 0LL);
        }
        v12 = v7->m_Items[v10];
        if ( !v12 || !v9 )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      v9,
                                      &entity,
                                      v12->fields.eventId,
                                      (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( targetId )
          {
            if ( entity->fields.targetId < targetId )
              targetId = entity->fields.targetId;
          }
          else
          {
            targetId = entity->fields.targetId;
          }
        }
        max_length = v7->max_length;
        if ( (int)++v10 >= max_length )
          return targetId;
      }
LABEL_23:
      sub_B0D97C(Instance);
    }
  }
  return 0LL;
}