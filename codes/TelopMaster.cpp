void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4211955 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_4211955 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    61,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}