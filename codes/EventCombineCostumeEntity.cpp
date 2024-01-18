void __fastcall EventCombineCostumeEntity___ctor(EventCombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A2F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A2F7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCombineCostumeEntity__CreatePK(
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_418A2F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&costumeId);
    byte_418A2F5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           costumeId,
           eventId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventCombineCostumeEntity__CreatePrimaryKey(
        EventCombineCostumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCombineCostumeEntity__CreatePK(this->fields.svtId, this->fields.costumeId, this->fields.eventId, v2);
}


bool __fastcall EventCombineCostumeEntity__IsShortEventItem(
        EventCombineCostumeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Instance; // x0
  __int64 v6; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  __int64 v11; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A2F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A2F6 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  itemIds = this->fields.itemIds;
  if ( !itemIds )
    goto LABEL_17;
  if ( !itemIds->max_length )
    goto LABEL_18;
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
    sub_B2C434(Instance, v6);
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               itemIds->m_Items[1],
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
    {
      itemNums = this->fields.itemNums;
      if ( itemNums )
      {
        if ( itemNums->max_length )
          return entity->fields.num < itemNums->m_Items[1];
LABEL_18:
        v11 = sub_B2C460(Instance);
        sub_B2C400(v11, 0LL);
      }
    }
    goto LABEL_17;
  }
  return 1;
}