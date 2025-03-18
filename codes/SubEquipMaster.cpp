void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22B08 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__, method);
    byte_4C22B08 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    26,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}