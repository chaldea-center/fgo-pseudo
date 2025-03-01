void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE304 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_4BFE304 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}