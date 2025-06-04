void __fastcall ServantScriptAddMaster___ctor(ServantScriptAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B029E3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long___ctor__, method);
    byte_4B029E3 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    183,
    (const MethodInfo_32AF2A8 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long___ctor__);
}