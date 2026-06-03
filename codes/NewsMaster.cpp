void NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E77C17 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
    byte_4E77C17 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_3533604 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}