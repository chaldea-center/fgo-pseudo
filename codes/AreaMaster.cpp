void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A6AC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__, method);
    byte_418A6AC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    78,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}