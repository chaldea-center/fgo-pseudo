void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66DEF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_4B66DEF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}