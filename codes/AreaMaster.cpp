void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AD96 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
    byte_4A5AD96 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}