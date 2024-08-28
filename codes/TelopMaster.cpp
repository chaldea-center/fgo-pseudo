void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A09689 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_4A09689 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    63,
    (const MethodInfo_30E4480 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}