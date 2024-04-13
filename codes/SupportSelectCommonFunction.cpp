int64_t __fastcall SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v16; // x19
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x21
  __int64 v19; // x22
  int64_t targetId; // x20
  EventCampaignEntity_o *v21; // x8
  __int64 v23; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC974 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EC974 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 1, 0LL);
  if ( FriendPointCampaigns )
  {
    v16 = FriendPointCampaigns;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v16->max_length;
    if ( max_length >= 1 )
    {
      v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v19 = 0LL;
      targetId = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= max_length )
        {
          v23 = sub_B5D6C8(Instance);
          sub_B5D668(v23, 0LL);
        }
        v21 = v16->m_Items[v19];
        if ( !v21 || !v18 )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      v18,
                                      &entity,
                                      v21->fields.eventId,
                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        max_length = v16->max_length;
        if ( (int)++v19 >= max_length )
          return targetId;
      }
LABEL_23:
      sub_B5D69C(Instance, v14);
    }
  }
  return 0LL;
}