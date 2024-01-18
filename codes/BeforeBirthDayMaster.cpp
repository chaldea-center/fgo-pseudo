void __fastcall BeforeBirthDayMaster___ctor(BeforeBirthDayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187579 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__, method);
    byte_4187579 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    357,
    (const MethodInfo_24E425C *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
}