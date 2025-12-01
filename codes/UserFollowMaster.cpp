void UserFollowMaster___ctor(UserFollowMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8296 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
    byte_4CC8296 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    268,
    (const MethodInfo_340B614 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
}


UserFollowEntity_o *UserFollowMaster__GetEntity(
        UserFollowMaster_o *this,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC8294 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
    byte_4CC8294 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)followId);
  return (UserFollowEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_340D938 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
}


int32_t UserFollowMaster__GetFollowSum(UserFollowMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4CC8297 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
    byte_4CC8297 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
}


bool UserFollowMaster__IsFollowUser(UserFollowMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22

  if ( (byte_4CC8298 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
    byte_4CC8298 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1C71608(list, userId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
    if ( v6 >= Count )
      return v6 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
      if ( list )
      {
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
          return v6 < Count;
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v6;
        if ( list )
          continue;
      }
    }
    goto LABEL_10;
  }
}


bool UserFollowMaster__TryGetEntity(
        UserFollowMaster_o *this,
        UserFollowEntity_o **entity,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC8295 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
    byte_4CC8295 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
}