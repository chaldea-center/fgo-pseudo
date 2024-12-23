void __fastcall ClassBoardBaseMaster___ctor(ClassBoardBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CC2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__, method);
    byte_4B67CC2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    430,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
}