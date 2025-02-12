void __fastcall PrivilegeMaster___ctor(PrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7F03 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__, method);
    byte_4BC7F03 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    286,
    (const MethodInfo_3246354 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int___ctor__);
}