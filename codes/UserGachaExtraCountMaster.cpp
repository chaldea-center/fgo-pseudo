void __fastcall UserGachaExtraCountMaster___ctor(UserGachaExtraCountMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67916 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__, method);
    byte_4B67916 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    283,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGachaExtraCountEntity_o *__fastcall UserGachaExtraCountMaster__GetEntity(
        UserGachaExtraCountMaster_o *this,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67914 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__,
      userId);
    byte_4B67914 = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, *(const MethodInfo **)&extraGroupId);
  return (UserGachaExtraCountEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__GetEntity__);
}


bool __fastcall UserGachaExtraCountMaster__TryGetEntity(
        UserGachaExtraCountMaster_o *this,
        UserGachaExtraCountEntity_o **entity,
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67915 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__,
      entity);
    byte_4B67915 = 1;
  }
  PK = (Il2CppObject *)UserGachaExtraCountEntity__CreatePK(userId, extraGroupId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserGachaExtraCountMaster__UserGachaExtraCountEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserGachaExtraCountMaster__getExtraCount(
        UserGachaExtraCountMaster_o *this,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B67917 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&extraGroupId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&UserGachaExtraCountEntity_TypeInfo, v6);
    byte_4B67917 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BE4D28(list, *(_QWORD *)&extraGroupId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v10,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(UserGachaExtraCountEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
        && *(UserGachaExtraCountEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == UserGachaExtraCountEntity_TypeInfo
        && Item[6] == extraGroupId )
      {
        return Item[7];
      }
    }
    if ( v9 == ++v10 )
      return 0;
  }
}