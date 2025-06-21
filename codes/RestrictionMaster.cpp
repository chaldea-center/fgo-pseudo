void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CCD5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__, method);
    byte_4B1CCD5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    179,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}