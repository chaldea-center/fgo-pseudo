void BoxGachaBaseEntity___ctor(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F96 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C26F96 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BoxGachaBaseEntity__CreatePK(int32_t id, int32_t no, const MethodInfo *method)
{
  if ( (byte_4C26F95 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C26F95 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           no,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *BoxGachaBaseEntity__CreatePrimaryKey(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BoxGachaBaseEntity__CreatePK(this->fields.id, this->fields.no, v2);
}


GiftEntity_o *BoxGachaBaseEntity__getGiftData(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C26F93 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26F93 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.targetId, 0);
}


EventRewardSetEntity_o *BoxGachaBaseEntity__getRewardSetData(
        BoxGachaBaseEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C26F94 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26F94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v6);
  }
  return EventRewardSetMaster__GetEntity((EventRewardSetMaster_o *)Instance, 1, eventId, this->fields.targetId, 0);
}