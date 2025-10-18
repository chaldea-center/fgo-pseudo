void EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E37 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
    byte_4C42E37 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    115,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}