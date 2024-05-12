void __fastcall CommandCodeCommentMaster___ctor(CommandCodeCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DF48 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int___ctor__);
    byte_438DF48 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    256,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int___ctor__);
}