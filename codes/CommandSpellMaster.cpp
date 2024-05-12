void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43874E2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
    byte_43874E2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    103,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}