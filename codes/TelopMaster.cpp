void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEF24 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_49FEF24 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    63,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}