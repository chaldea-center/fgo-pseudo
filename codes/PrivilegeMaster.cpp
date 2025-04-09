void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB2EA & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_49BB2EA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    288,
    (const MethodInfo_319B678 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}