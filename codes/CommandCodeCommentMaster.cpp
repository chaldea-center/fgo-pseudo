void __fastcall CommandCodeCommentMaster___ctor(CommandCodeCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41880F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int___ctor__, method);
    byte_41880F4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    255,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int___ctor__);
}