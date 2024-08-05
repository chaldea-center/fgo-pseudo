void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE917 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_49FE917 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    282,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}