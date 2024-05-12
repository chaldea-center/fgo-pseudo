void __fastcall BeforeBirthDayMaster___ctor(BeforeBirthDayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A8EF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
    byte_438A8EF = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    358,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long___ctor__);
}