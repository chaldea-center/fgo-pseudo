void __fastcall TreasureBoxMaster___ctor(TreasureBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8669 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__, method);
    byte_4BC8669 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    380,
    (const MethodInfo_3246354 *)Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxEntity_o *__fastcall TreasureBoxMaster__GetTreasureBoxData(
        TreasureBoxMaster_o *this,
        int32_t eventId,
        int32_t Index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  TreasureBoxEntity_o *result; // x0

  if ( (byte_4BC866A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Item__, v7);
    byte_4BC866A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (TreasureBoxEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        list,
                                        v11,
                                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.idx == Index )
        return result;
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1C1AE30(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}