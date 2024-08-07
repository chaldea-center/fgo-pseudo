void __fastcall CommandCodeCommentMaster___ctor(CommandCodeCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE91A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int___ctor__, method);
    byte_49FE91A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    257,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int___ctor__);
}