void BeforeBirthDayMaster___ctor(BeforeBirthDayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F38 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
    byte_4C26F38 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    365,
    (const MethodInfo_3387FD0 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
}