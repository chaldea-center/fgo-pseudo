void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184552 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_4184552 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    61,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}