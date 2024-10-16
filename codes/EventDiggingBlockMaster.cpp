void __fastcall EventDiggingBlockMaster___ctor(EventDiggingBlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5CB3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int___ctor__, method);
    byte_4AB5CB3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    347,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int___ctor__);
}