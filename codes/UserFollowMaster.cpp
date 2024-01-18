void __fastcall UserFollowMaster___ctor(UserFollowMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__, method);
    byte_4186FA5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    260,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
}


UserFollowEntity_o *__fastcall UserFollowMaster__GetEntity(
        UserFollowMaster_o *this,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186FA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__, userId);
    byte_4186FA3 = 1;
  }
  PK = UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)followId);
  return (UserFollowEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
}


int32_t __fastcall UserFollowMaster__GetFollowSum(UserFollowMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_4186FA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_4186FA6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


bool __fastcall UserFollowMaster__IsFollowUser(UserFollowMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w21
  __int64 v9; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x8

  if ( (byte_4186FA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserFollowEntity_TypeInfo, v6);
    byte_4186FA7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, userId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v9 = *(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (UserFollowEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != UserFollowEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    v10 = (UserFollowEntity_c *)list->klass->_2.typeHierarchy[*(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1) - 1] == UserFollowEntity_TypeInfo
        ? list
        : 0LL;
    if ( v10->fields._syncRoot == (Il2CppObject *)userId )
      return 1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
}


bool __fastcall UserFollowMaster__TryGetEntity(
        UserFollowMaster_o *this,
        UserFollowEntity_o **entity,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4186FA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__, entity);
    byte_4186FA4 = 1;
  }
  PK = UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
}