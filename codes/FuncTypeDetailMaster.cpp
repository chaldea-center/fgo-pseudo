void __fastcall FuncTypeDetailMaster___ctor(FuncTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A4EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__, method);
    byte_418A4EC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    438,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
}