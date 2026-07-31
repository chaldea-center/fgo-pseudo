void TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59393B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
    byte_59393B3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}