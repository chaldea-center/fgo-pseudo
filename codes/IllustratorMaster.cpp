void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB191 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__, method);
    byte_49BB191 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    94,
    (const MethodInfo_319B678 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}