void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B458 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
    byte_4A5B458 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    90,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}