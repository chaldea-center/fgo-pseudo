void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01BDF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__, method);
    byte_4B01BDF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    43,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}