void __fastcall AttriMaster___ctor(AttriMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216754 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__, method);
    byte_4216754 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    476,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
}