void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B373CE & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_4B373CE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    402,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}