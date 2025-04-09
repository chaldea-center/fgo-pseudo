void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC28 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__, method);
    byte_49BAC28 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    184,
    (const MethodInfo_319B678 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}