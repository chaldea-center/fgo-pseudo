void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CAAF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_4B1CAAF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    288,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}