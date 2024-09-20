void __fastcall UserFollowMaster___ctor(UserFollowMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE52 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
    byte_4A5BE52 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    262,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string___ctor__);
}


UserFollowEntity_o *__fastcall UserFollowMaster__GetEntity(
        UserFollowMaster_o *this,
        int64_t userId,
        int64_t followId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BE50 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
    byte_4A5BE50 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)followId);
  return (UserFollowEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__GetEntity__);
}


int32_t __fastcall UserFollowMaster__GetFollowSum(UserFollowMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4A5BE53 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_4A5BE53 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


bool __fastcall UserFollowMaster__IsFollowUser(UserFollowMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BE54 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserFollowEntity_TypeInfo);
    byte_4A5BE54 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1B8880C(list, userId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v6 >= Count )
      return v6 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(UserFollowEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserFollowEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserFollowEntity_TypeInfo )
        {
          if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
            return v6 < Count;
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v6;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_12;
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

  if ( (byte_4A5BE51 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
    byte_4A5BE51 = 1;
  }
  PK = (Il2CppObject *)UserFollowEntity__CreatePK(userId, followId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__TryGetEntity__);
}