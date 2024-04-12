void __fastcall EventPanelMapDetailEntity___ctor(EventPanelMapDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0562 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B0562 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventPanelMapDetailEntity__CreatePrimaryKey(
        EventPanelMapDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall EventPanelMapDetailEntity__IsStartScan(EventPanelMapDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}


int32_t __fastcall EventPanelMapDetailEntity__get_panelDetailFlag(
        EventPanelMapDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}