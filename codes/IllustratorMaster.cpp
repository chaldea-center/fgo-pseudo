void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B374A3 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__, method);
    byte_4B374A3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    90,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}