void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AD012 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
    byte_42AD012 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    62,
    (const MethodInfo_23E223C *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}