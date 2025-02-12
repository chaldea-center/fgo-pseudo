void __fastcall TotalLoginMaster___ctor(TotalLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC865F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__, method);
    byte_4BC865F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    207,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalLoginEntity_o *__fastcall TotalLoginMaster__GetEntity(
        TotalLoginMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC865D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4BC865D = 1;
  }
  PK = (Il2CppObject *)TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalLoginEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_324D130 *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__);
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

  if ( (byte_4BC865E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__, entity);
    byte_4BC865E = 1;
  }
  PK = (Il2CppObject *)TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TotalLoginMaster__getNextLoginBonusDay(
        TotalLoginMaster_o *this,
        int32_t totalLoginCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4BC8660 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_TotalLoginEntity__get_Count__,
      *(_QWORD *)&totalLoginCnt);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_TotalLoginEntity__get_Item__, v5);
    byte_4BC8660 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_9;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_TotalLoginEntity__get_Count__) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 0,
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_TotalLoginEntity__get_Item__);
      if ( list )
        return HIDWORD(list->fields.items) - totalLoginCnt;
    }
LABEL_9:
    sub_1C1AE30(list, *(_QWORD *)&totalLoginCnt);
  }
  return 0;
}