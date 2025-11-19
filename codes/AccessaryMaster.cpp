void AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5E50 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
    byte_4CB5E50 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    43,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}