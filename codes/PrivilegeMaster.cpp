void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEF37 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_49FEF37 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    282,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}