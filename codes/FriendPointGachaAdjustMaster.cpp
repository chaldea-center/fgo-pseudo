void __fastcall FriendPointGachaAdjustMaster___ctor(FriendPointGachaAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B03249 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__, method);
    byte_4B03249 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    42,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__);
}