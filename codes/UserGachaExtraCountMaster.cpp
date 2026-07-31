void UserGachaExtraCountMaster___ctor(UserGachaExtraCountMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59395B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__);
    byte_59395B1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    287,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGachaExtraCountEntity_o *UserGachaExtraCountMaster__GetEntity(
        UserGachaExtraCountMaster_o *this,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59395AF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__);
    byte_59395AF = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, *(const MethodInfo **)&extraGroupId);
  return (UserGachaExtraCountEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__);
}


bool UserGachaExtraCountMaster__TryGetEntity(
        UserGachaExtraCountMaster_o *this,
        UserGachaExtraCountEntity_o **entity,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59395B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__);
    byte_59395B0 = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserGachaExtraCountMaster__getExtraCount(
        UserGachaExtraCountMaster_o *this,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0

  if ( (byte_59395B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Item__);
    byte_59395B2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_21FFECC(list, *(_QWORD *)&extraGroupId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].monitor) == extraGroupId )
        return HIDWORD(Item[1].monitor);
    }
    if ( v7 == ++v8 )
      return 0;
  }
}