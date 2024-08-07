void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FED50 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_49FED50 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    402,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}