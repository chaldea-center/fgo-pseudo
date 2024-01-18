void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187A54 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_4187A54 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    280,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}