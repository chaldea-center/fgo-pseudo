void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37CED & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_4B37CED = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    63,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}