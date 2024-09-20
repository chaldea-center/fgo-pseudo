void __fastcall TreasureBoxMaster___ctor(TreasureBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
    byte_4A5BCB7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    376,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxEntity_o *__fastcall TreasureBoxMaster__GetTreasureBoxData(
        TreasureBoxMaster_o *this,
        int32_t eventId,
        int32_t Index,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  TreasureBoxEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BCB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&TreasureBoxEntity_TypeInfo);
    byte_4A5BCB8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (TreasureBoxEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        list,
                                        v10,
                                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(TreasureBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureBoxEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureBoxEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.idx == Index )
        {
          return result;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}