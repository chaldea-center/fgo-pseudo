void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE1C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__, method);
    byte_49FEE1C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    90,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}