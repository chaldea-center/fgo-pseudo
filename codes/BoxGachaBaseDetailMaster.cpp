void __fastcall BoxGachaBaseDetailMaster___ctor(BoxGachaBaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1779 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__);
    byte_42B1779 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    143,
    (const MethodInfo_23E223C *)Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__);
}