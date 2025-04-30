void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E926 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_4A4E926 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    288,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}