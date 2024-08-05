void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEF04 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__, method);
    byte_49FEF04 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    26,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}