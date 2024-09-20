void __fastcall BeforeBirthDayMaster___ctor(BeforeBirthDayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE0C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
    byte_4A5AE0C = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    359,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
}