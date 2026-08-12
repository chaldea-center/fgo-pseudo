void PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970E68 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
    byte_5970E68 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    290,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}