void __fastcall FuncTypeDetailMaster___ctor(FuncTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2BD4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
    byte_42B2BD4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    439,
    (const MethodInfo_23E223C *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
}