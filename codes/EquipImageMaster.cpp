void __fastcall EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FD07 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__, method);
    byte_4A6FD07 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_312C568 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}