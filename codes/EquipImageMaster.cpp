void __fastcall EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F971 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__, method);
    byte_4A1F971 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}