void NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938C34 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
    byte_5938C34 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}