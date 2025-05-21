void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44CAB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_4B44CAB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    408,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}