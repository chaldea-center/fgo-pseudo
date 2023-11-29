void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB4B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_40FB4B3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    439,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}