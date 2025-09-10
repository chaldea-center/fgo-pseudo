void UserGachaExtraCountMaster___ctor(UserGachaExtraCountMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28164 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__);
    byte_4C28164 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    285,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGachaExtraCountEntity_o *UserGachaExtraCountMaster__GetEntity(
        UserGachaExtraCountMaster_o *this,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28162 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__);
    byte_4C28162 = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, *(const MethodInfo **)&extraGroupId);
  return (UserGachaExtraCountEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_338C850 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__);
}


bool UserGachaExtraCountMaster__TryGetEntity(
        UserGachaExtraCountMaster_o *this,
        UserGachaExtraCountEntity_o **entity,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28163 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__);
    byte_4C28163 = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__);
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

  if ( (byte_4C28165 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Item__);
    byte_4C28165 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C2D6EC(list, *(_QWORD *)&extraGroupId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Count__);
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
             (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].monitor) == extraGroupId )
        return HIDWORD(Item[1].monitor);
    }
    if ( v7 == ++v8 )
      return 0;
  }
}