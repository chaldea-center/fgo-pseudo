int64_t __fastcall SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v4; // x19
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  __int64 v7; // x22
  int64_t targetId; // x20
  EventCampaignEntity_o *v9; // x8
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438F3EE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F3EE = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0LL);
  if ( FriendPointCampaigns )
  {
    v4 = FriendPointCampaigns;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v4->max_length;
    if ( max_length >= 1 )
    {
      v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v7 = 0LL;
      targetId = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
        {
          v11 = sub_B776C8(Instance);
          sub_B77668(v11, 0LL);
        }
        v9 = v4->m_Items[v7];
        if ( !v9 || !v6 )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      v6,
                                      &entity,
                                      v9->fields.eventId,
                                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        max_length = v4->max_length;
        if ( (int)++v7 >= max_length )
          return targetId;
      }
LABEL_23:
      sub_B7769C(Instance, v2);
    }
  }
  return 0LL;
}