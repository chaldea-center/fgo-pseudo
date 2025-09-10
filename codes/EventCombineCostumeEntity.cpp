void EventCombineCostumeEntity___ctor(EventCombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C271CC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C271CC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventCombineCostumeEntity__CreatePK(
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4C271CA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C271CA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           costumeId,
           eventId,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventCombineCostumeEntity__CreatePrimaryKey(
        EventCombineCostumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCombineCostumeEntity__CreatePK(this->fields.svtId, this->fields.costumeId, this->fields.eventId, v2);
}


bool EventCombineCostumeEntity__IsShortEventItem(EventCombineCostumeEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C271CB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C271CB = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  itemIds = this->fields.itemIds;
  if ( !itemIds )
    goto LABEL_19;
  if ( !LODWORD(itemIds->max_length) )
    goto LABEL_20;
  if ( !MasterData_object )
LABEL_19:
    sub_1C2D6EC(Instance, v4);
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                itemIds->m_Items[0],
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      itemNums = this->fields.itemNums;
      if ( itemNums )
      {
        if ( LODWORD(itemNums->max_length) )
          return entity->fields.num < itemNums->m_Items[0];
LABEL_20:
        sub_1C2D6F4(Instance, v4, v5);
      }
    }
    goto LABEL_19;
  }
  return 1;
}