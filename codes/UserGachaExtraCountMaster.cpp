void __fastcall UserGachaExtraCountMaster___ctor(UserGachaExtraCountMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC46 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__, method);
    byte_49BBC46 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    285,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGachaExtraCountEntity_o *__fastcall UserGachaExtraCountMaster__GetEntity(
        UserGachaExtraCountMaster_o *this,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBC44 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__,
      userId);
    byte_49BBC44 = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, *(const MethodInfo **)&extraGroupId);
  return (UserGachaExtraCountEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31A2454 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__);
}


bool __fastcall UserGachaExtraCountMaster__TryGetEntity(
        UserGachaExtraCountMaster_o *this,
        UserGachaExtraCountEntity_o **entity,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BBC45 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__,
      entity);
    byte_49BBC45 = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserGachaExtraCountMaster__getExtraCount(
        UserGachaExtraCountMaster_o *this,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  Il2CppObject *Item; // x0

  if ( (byte_49BBC47 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Count__,
      *(_QWORD *)&extraGroupId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Item__, v5);
    byte_49BBC47 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1B4D1EC(list, *(_QWORD *)&extraGroupId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v8 = Count;
  v9 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserGachaExtraCountEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].monitor) == extraGroupId )
        return HIDWORD(Item[1].monitor);
    }
    if ( v8 == ++v9 )
      return 0;
  }
}