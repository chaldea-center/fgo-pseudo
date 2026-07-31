void UserFollowMaster___ctor(UserFollowMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939599 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
    byte_5939599 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    270,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
}


UserFollowEntity_o *UserFollowMaster__GetEntity(
        UserFollowMaster_o *this,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939597 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
    byte_5939597 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)followId);
  return (UserFollowEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
}


int32_t UserFollowMaster__GetFollowSum(UserFollowMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_593959A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
    byte_593959A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
}


bool UserFollowMaster__IsFollowUser(UserFollowMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22

  if ( (byte_593959B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
    byte_593959B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_21FFECC(list, userId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
    if ( v6 >= Count )
      return v6 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
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

  if ( (byte_5939598 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
    byte_5939598 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
}