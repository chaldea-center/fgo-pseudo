void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4906 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_4BB4906 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_3236300 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}