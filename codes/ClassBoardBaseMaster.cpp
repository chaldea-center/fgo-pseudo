void __fastcall ClassBoardBaseMaster___ctor(ClassBoardBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C3FA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
    byte_438C3FA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    425,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
}