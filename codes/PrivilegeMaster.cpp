void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4351F0E & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
    byte_4351F0E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    281,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}