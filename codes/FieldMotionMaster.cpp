void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E69B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E69B2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    401,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}