void __fastcall ViewQuestInfoMaster___ctor(ViewQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22F18 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__, method);
    byte_4C22F18 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    81,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__);
}