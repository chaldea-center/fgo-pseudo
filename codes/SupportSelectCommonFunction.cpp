int64_t __fastcall SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v8; // x19
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  int64_t targetId; // x20
  EventCampaignEntity_o *v13; // x8
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AE6E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AE6E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0LL);
  if ( FriendPointCampaigns )
  {
    v8 = FriendPointCampaigns;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v11 = 0LL;
      targetId = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
        {
          v15 = sub_B2C460(Instance);
          sub_B2C400(v15, 0LL);
        }
        v13 = v8->m_Items[v11];
        if ( !v13 || !v10 )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      v10,
                                      &entity,
                                      v13->fields.eventId,
                                      (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        max_length = v8->max_length;
        if ( (int)++v11 >= max_length )
          return targetId;
      }
LABEL_23:
      sub_B2C434(Instance, v6);
    }
  }
  return 0LL;
}