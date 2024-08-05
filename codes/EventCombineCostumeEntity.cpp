void __fastcall EventCombineCostumeEntity___ctor(EventCombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE421 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE421 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCombineCostumeEntity__CreatePK(
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_49FE41F & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&costumeId);
    byte_49FE41F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           costumeId,
           eventId,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE420 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1B64870(&NetworkManager_TypeInfo, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FE420 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  itemIds = this->fields.itemIds;
  if ( !itemIds )
    goto LABEL_16;
  if ( !itemIds->max_length )
    goto LABEL_17;
  if ( !MasterData_object )
LABEL_16:
    sub_1B64ACC(Instance, v6);
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
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
LABEL_17:
        sub_1B64AD4(Instance, v6);
      }
    }
    goto LABEL_16;
  }
  return 1;
}