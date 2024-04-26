void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434EE34 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
    byte_434EE34 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    62,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}