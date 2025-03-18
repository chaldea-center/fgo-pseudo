void __fastcall GachaDetailMaster___ctor(GachaDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C221EB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__, method);
    byte_4C221EB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    192,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaDetailEntity_o *__fastcall GachaDetailMaster__GetGachaDetailEntity(
        GachaDetailMaster_o *this,
        int32_t gachaID,
        const MethodInfo *method)
{
  __int64 v5; // x1
  GachaDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22

  if ( (byte_4C221EC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Count__, *(_QWORD *)&gachaID);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Item__, v5);
    byte_4C221EC = 1;
  }
  result = (GachaDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      result = (GachaDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (GachaDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v9,
                                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.gachaId == gachaID )
        return result;
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_12:
    sub_1C3B9C0(result, *(_QWORD *)&gachaID);
  }
  return 0LL;
}