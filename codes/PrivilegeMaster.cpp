void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FA00E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_40FA00E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    280,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}