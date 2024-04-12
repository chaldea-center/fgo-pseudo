void __fastcall EventCombineCostumeEntity___ctor(EventCombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2784 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2784 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventCombineCostumeEntity__CreatePK(
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_42B2782 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B2782 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           costumeId,
           eventId,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int64_t Instance; // x0
  __int64 v4; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  __int64 v9; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2783 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2783 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B52A5C(Instance, v4);
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
        v9 = sub_B52A88(Instance);
        sub_B52A28(v9, 0LL);
      }
    }
    goto LABEL_17;
  }
  return 1;
}