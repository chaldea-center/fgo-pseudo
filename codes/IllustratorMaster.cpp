void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2AF4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__, method);
    byte_48E2AF4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    89,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}