void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421089B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__, method);
    byte_421089B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    102,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}