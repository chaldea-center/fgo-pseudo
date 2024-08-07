void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF544 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_49FF544 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    63,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}