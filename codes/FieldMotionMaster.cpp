void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2A31 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_48E2A31 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}