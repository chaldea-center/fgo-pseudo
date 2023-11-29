int64_t __fastcall SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventCampaignEntity_array *FriendPointCampaigns; // x0
  EventCampaignEntity_array *v8; // x19
  WebViewManager_o *v9; // x0
  WarQuestSelectionMaster_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  __int64 v15; // x22
  int64_t targetId; // x20
  EventCampaignEntity_o *v17; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD4EA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD4EA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(MasterData_WarQuestSelectionMaster, 1, 0LL);
  if ( FriendPointCampaigns )
  {
    v8 = FriendPointCampaigns;
    v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v9 )
      goto LABEL_23;
    v10 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v9,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)v10;
      v15 = 0LL;
      targetId = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
        {
          sub_B17100(v10, v11, v12);
          sub_B170A0();
        }
        v17 = v8->m_Items[v15];
        if ( !v17 || !v14 )
          break;
        v10 = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             v14,
                                             &entity,
                                             v17->fields.eventId,
                                             (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)v10 & 1) != 0 )
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
        if ( (int)++v15 >= max_length )
          return targetId;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  return 0LL;
}