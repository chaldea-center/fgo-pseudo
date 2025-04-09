void __fastcall EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BACF6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__, method);
    byte_49BACF6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    115,
    (const MethodInfo_319B678 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}