void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188142 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__, method);
    byte_4188142 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    102,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}