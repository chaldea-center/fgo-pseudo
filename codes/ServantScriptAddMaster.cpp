void __fastcall ServantScriptAddMaster___ctor(ServantScriptAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B674C5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__, method);
    byte_4B674C5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    183,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int___ctor__);
}