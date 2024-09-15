void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E35C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_4A2E35C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    282,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}