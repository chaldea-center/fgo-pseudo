void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB42CA & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__, method);
    byte_4BB42CA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    43,
    (const MethodInfo_3236300 *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}