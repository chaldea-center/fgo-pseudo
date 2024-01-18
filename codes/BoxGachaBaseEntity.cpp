void __fastcall BoxGachaBaseEntity___ctor(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41896A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41896A6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaBaseEntity__CreatePK(int32_t id, int32_t no, const MethodInfo *method)
{
  if ( (byte_41896A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&no);
    byte_41896A3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           no,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BoxGachaBaseEntity__CreatePrimaryKey(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BoxGachaBaseEntity__CreatePK(this->fields.id, this->fields.no, v2);
}


GiftEntity_o *__fastcall BoxGachaBaseEntity__getGiftData(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_41896A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_41896A4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.targetId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSetEntity_o *__fastcall BoxGachaBaseEntity__getRewardSetData(
        BoxGachaBaseEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_41896A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSetMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41896A5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return EventRewardSetMaster__GetEntity((EventRewardSetMaster_o *)Instance, 1, eventId, this->fields.targetId, 0LL);
}