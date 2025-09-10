void PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27882 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
    byte_4C27882 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    288,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}