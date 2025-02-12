void __fastcall ServantScriptAddMaster___ctor(ServantScriptAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC83CD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__, method);
    byte_4BC83CD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    183,
    (const MethodInfo_3246354 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__);
}