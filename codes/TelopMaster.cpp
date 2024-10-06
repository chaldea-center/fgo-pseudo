void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A7098D & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_4A7098D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    63,
    (const MethodInfo_312C568 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}