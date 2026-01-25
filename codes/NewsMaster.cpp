void NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEBD2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
    byte_4CEEBD2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}