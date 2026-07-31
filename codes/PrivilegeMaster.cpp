void PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938CA9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
    byte_5938CA9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    290,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}