void TreasureBoxMaster___ctor(TreasureBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59715AC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
    byte_59715AC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    384,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxEntity_o *TreasureBoxMaster__GetTreasureBoxData(
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

  if ( (byte_59715AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Item__);
    byte_59715AD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Count__);
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
                                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_TreasureBoxEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.idx == Index )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_2213CDC(list, *(_QWORD *)&eventId);
  }
  return 0;
}