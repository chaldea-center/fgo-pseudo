void __fastcall EventPanelMapEntity___ctor(EventPanelMapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FABF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FABF2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventPanelMapEntity__CreatePrimaryKey(EventPanelMapEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}