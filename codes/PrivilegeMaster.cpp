void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFB8F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
    byte_42AFB8F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    281,
    (const MethodInfo_23E223C *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}