void __fastcall CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C2CC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__, method);
    byte_4B1C2CC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    184,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}