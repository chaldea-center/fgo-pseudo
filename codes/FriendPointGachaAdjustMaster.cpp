void __fastcall FriendPointGachaAdjustMaster___ctor(FriendPointGachaAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB57F9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__, method);
    byte_4BB57F9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    42,
    (const MethodInfo_3236300 *)Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__);
}