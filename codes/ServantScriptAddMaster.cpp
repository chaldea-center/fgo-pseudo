void __fastcall ServantScriptAddMaster___ctor(ServantScriptAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2107 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__);
    byte_42B2107 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    178,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__);
}