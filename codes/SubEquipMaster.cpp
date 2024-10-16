void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6860 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__, method);
    byte_4AB6860 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    26,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}