void __fastcall EventPanelScanEntity___ctor(EventPanelScanEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B52D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438B52D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventPanelScanEntity__CreatePrimaryKey(EventPanelScanEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall EventPanelScanEntity__get_HasReleaseCondition(EventPanelScanEntity_o *this, const MethodInfo *method)
{
  return this->fields.commonReleaseId > 0;
}