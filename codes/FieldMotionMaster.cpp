void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD977 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_4BFD977 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}