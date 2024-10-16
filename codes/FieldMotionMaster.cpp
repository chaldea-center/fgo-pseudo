void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5F77 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_4AB5F77 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    402,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}