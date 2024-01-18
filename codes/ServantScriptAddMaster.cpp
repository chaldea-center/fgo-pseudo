void __fastcall ServantScriptAddMaster___ctor(ServantScriptAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189BF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__, method);
    byte_4189BF4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    177,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__);
}