void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC7E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
    byte_4A5BC7E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    63,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}