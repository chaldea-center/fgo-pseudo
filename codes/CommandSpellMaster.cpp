void __fastcall CommandSpellMaster___ctor(CommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FA5F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__, method);
    byte_40FA5F8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    102,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int___ctor__);
}