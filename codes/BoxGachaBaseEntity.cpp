void __fastcall BoxGachaBaseEntity___ctor(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D73F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D73F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BoxGachaBaseEntity__CreatePK(int32_t id, int32_t no, const MethodInfo *method)
{
  if ( (byte_438D73C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D73C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           no,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BoxGachaBaseEntity__CreatePrimaryKey(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BoxGachaBaseEntity__CreatePK(this->fields.id, this->fields.no, v2);
}


GiftEntity_o *__fastcall BoxGachaBaseEntity__getGiftData(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438D73D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D73D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.targetId, 0LL);
}


EventRewardSetEntity_o *__fastcall BoxGachaBaseEntity__getRewardSetData(
        BoxGachaBaseEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438D73E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D73E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  return EventRewardSetMaster__GetEntity((EventRewardSetMaster_o *)Instance, 1, eventId, this->fields.targetId, 0LL);
}