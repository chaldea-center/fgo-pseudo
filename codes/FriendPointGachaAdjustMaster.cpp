void __fastcall FriendPointGachaAdjustMaster___ctor(FriendPointGachaAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BC00A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__, method);
    byte_49BC00A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    42,
    (const MethodInfo_319B678 *)Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__);
}