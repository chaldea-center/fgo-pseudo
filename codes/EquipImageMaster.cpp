void __fastcall EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD5D6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__, method);
    byte_4BFD5D6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    115,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}