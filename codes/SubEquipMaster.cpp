void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D158 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__, method);
    byte_4B1D158 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    26,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}