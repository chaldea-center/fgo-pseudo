void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC43F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
    byte_42AC43F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    103,
    (const MethodInfo_23E223C *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}