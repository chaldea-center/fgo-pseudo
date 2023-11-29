void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6C64 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_40F6C64 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    61,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}