void __fastcall ServantScriptAddMaster___ctor(ServantScriptAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D148 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__);
    byte_438D148 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    178,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__);
}