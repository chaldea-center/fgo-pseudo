void __fastcall UserFollowMaster___ctor(UserFollowMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8802 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__, method);
    byte_4BC8802 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    266,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
}


UserFollowEntity_o *__fastcall UserFollowMaster__GetEntity(
        UserFollowMaster_o *this,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8800 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__, userId);
    byte_4BC8800 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)followId);
  return (UserFollowEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_324D130 *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
}


int32_t __fastcall UserFollowMaster__GetFollowSum(UserFollowMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4BC8803 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__, method);
    byte_4BC8803 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
}


bool __fastcall UserFollowMaster__IsFollowUser(UserFollowMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w21
  int32_t Count; // w22

  if ( (byte_4BC8804 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__, userId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__, v5);
    byte_4BC8804 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1C1AE30(list, userId);
  v7 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Count__);
    if ( v7 >= Count )
      return v7 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
      if ( list )
      {
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
          return v7 < Count;
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v7;
        if ( list )
          continue;
      }
    }
    goto LABEL_10;
  }
}


bool __fastcall UserFollowMaster__TryGetEntity(
        UserFollowMaster_o *this,
        UserFollowEntity_o **entity,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8801 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__, entity);
    byte_4BC8801 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
}