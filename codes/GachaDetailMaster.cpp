void GachaDetailMaster___ctor(GachaDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC76B9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
    byte_4CC76B9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    192,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
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

  if ( (byte_4CC76BA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Item__);
    byte_4CC76BA = 1;
  }
  result = (GachaDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Count__);
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
                                        (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_GachaDetailEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.gachaId == gachaID )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_1C71608(result, *(_QWORD *)&gachaID);
  }
  return 0;
}