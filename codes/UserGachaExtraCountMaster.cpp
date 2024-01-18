void __fastcall UserGachaExtraCountMaster___ctor(UserGachaExtraCountMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__, method);
    byte_4186FC4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    277,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGachaExtraCountEntity_o *__fastcall UserGachaExtraCountMaster__GetEntity(
        UserGachaExtraCountMaster_o *this,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186FC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__, userId);
    byte_4186FC2 = 1;
  }
  PK = UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, *(const MethodInfo **)&extraGroupId);
  return (UserGachaExtraCountEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__);
}


bool __fastcall UserGachaExtraCountMaster__TryGetEntity(
        UserGachaExtraCountMaster_o *this,
        UserGachaExtraCountEntity_o **entity,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4186FC3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__,
      entity);
    byte_4186FC3 = 1;
  }
  PK = UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserGachaExtraCountMaster__getExtraCount(
        UserGachaExtraCountMaster_o *this,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  int32_t *Item; // x0
  __int64 v12; // x10

  if ( (byte_4186FC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&extraGroupId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserGachaExtraCountEntity_TypeInfo, v6);
    byte_4186FC5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, *(_QWORD *)&extraGroupId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v10,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = *(&UserGachaExtraCountEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v12
        && *(UserGachaExtraCountEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v12 - 8) == UserGachaExtraCountEntity_TypeInfo
        && Item[6] == extraGroupId )
      {
        return Item[7];
      }
    }
    if ( ++v10 >= v9 )
      return 0;
  }
}