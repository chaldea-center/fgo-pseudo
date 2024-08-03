void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC053 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__, method);
    byte_49FC053 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}