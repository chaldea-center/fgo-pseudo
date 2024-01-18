void __fastcall ViewQuestInfoMaster___ctor(ViewQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__, method);
    byte_418D2B6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    75,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__);
}