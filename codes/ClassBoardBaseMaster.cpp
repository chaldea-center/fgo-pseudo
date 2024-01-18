void __fastcall ClassBoardBaseMaster___ctor(ClassBoardBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187D2F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__, method);
    byte_4187D2F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    424,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
}