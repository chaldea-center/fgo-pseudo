void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A52A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
    byte_438A52A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    79,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}