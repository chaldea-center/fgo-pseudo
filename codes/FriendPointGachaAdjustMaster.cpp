void __fastcall FriendPointGachaAdjustMaster___ctor(FriendPointGachaAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C230DC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__, method);
    byte_4C230DC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    42,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_FriendPointGachaAdjustMaster__FriendPointGachaAdjustEntity__int___ctor__);
}