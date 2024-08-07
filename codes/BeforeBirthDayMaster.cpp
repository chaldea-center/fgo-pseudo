void __fastcall BeforeBirthDayMaster___ctor(BeforeBirthDayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7E0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__, method);
    byte_49FE7E0 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    359,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
}