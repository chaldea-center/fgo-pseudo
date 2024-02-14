void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42144AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_42144AC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    280,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}