void GachaDetailMaster___ctor(GachaDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970C23 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
    byte_5970C23 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    194,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaDetailEntity_o *GachaDetailMaster__GetGachaDetailEntity(
        GachaDetailMaster_o *this,
        int32_t gachaID,
        const MethodInfo *method)
{
  GachaDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22

  if ( (byte_5970C24 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Item__);
    byte_5970C24 = 1;
  }
  result = (GachaDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      result = (GachaDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (GachaDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v8,
                                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.gachaId == gachaID )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_2213CDC(result, *(_QWORD *)&gachaID);
  }
  return 0;
}