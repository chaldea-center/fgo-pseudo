void TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43C69 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
    byte_4C43C69 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}