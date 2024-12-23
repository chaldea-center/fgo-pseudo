void __fastcall TotalLoginMaster___ctor(TotalLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67756 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__, method);
    byte_4B67756 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    207,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalLoginEntity_o *__fastcall TotalLoginMaster__GetEntity(
        TotalLoginMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67754 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4B67754 = 1;
  }
  PK = (Il2CppObject *)TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalLoginEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31FDB1C *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalLoginMaster__TryGetEntity(
        TotalLoginMaster_o *this,
        TotalLoginEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67755 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__, entity);
    byte_4B67755 = 1;
  }
  PK = (Il2CppObject *)TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TotalLoginMaster__getNextLoginBonusDay(
        TotalLoginMaster_o *this,
        int32_t totalLoginCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B67757 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&totalLoginCnt);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&TotalLoginEntity_TypeInfo, v6);
    byte_4B67757 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_11;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 0,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(TotalLoginEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TotalLoginEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == TotalLoginEntity_TypeInfo )
        {
          return HIDWORD(list->fields.items) - totalLoginCnt;
        }
      }
    }
LABEL_11:
    sub_1BE4D28(list, *(_QWORD *)&totalLoginCnt);
  }
  return 0;
}