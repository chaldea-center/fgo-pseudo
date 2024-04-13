void __fastcall UserFollowMaster___ctor(UserFollowMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E70FA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    261,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
}


UserFollowEntity_o *__fastcall UserFollowMaster__GetEntity(
        UserFollowMaster_o *this,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E70F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__, userId, followId, method);
    byte_42E70F8 = 1;
  }
  PK = UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)followId);
  return (UserFollowEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
}


int32_t __fastcall UserFollowMaster__GetFollowSum(UserFollowMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42E70FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    byte_42E70FB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


bool __fastcall UserFollowMaster__IsFollowUser(UserFollowMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w21
  __int64 v14; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x8

  if ( (byte_42E70FC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserFollowEntity_TypeInfo, v9, v10, v11);
    byte_42E70FC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B5D69C(list, userId);
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v14 = *(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (UserFollowEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != UserFollowEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    v15 = (UserFollowEntity_c *)list->klass->_2.typeHierarchy[*(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1) - 1] == UserFollowEntity_TypeInfo
        ? list
        : 0LL;
    if ( v15->fields._syncRoot == (Il2CppObject *)userId )
      return 1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
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

  if ( (byte_42E70F9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      followId);
    byte_42E70F9 = 1;
  }
  PK = UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
}