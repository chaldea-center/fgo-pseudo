void SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43C48 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
    byte_4C43C48 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    26,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}