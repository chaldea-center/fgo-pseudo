void __fastcall FriendshipGaugeSelector___ctor(FriendshipGaugeSelector_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
IFriendshipGauge_o *__fastcall FriendshipGaugeSelector__GetGauge(
        FriendshipGaugeSelector_o *this,
        int32_t maxFriendShipRank,
        int32_t friendshipExceedCount,
        const MethodInfo *method)
{
  IFriendshipGauge_o *friendshipGaugeEx; // x19
  IFriendshipGauge_c *klass; // x8
  unsigned __int64 v9; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FB2C6 & 1) == 0 )
  {
    sub_B16FFC(&IFriendshipGauge_TypeInfo, *(_QWORD *)&maxFriendShipRank);
    byte_40FB2C6 = 1;
  }
  if ( friendshipExceedCount && friendshipExceedCount + maxFriendShipRank >= 11 )
  {
    friendshipGaugeEx = (IFriendshipGauge_o *)this->fields.friendshipGaugeEx;
    if ( !friendshipGaugeEx )
LABEL_15:
      sub_B170D4();
  }
  else
  {
    friendshipGaugeEx = (IFriendshipGauge_o *)this->fields.friendshipGauge;
    if ( !friendshipGaugeEx )
      goto LABEL_15;
  }
  klass = friendshipGaugeEx->klass;
  if ( *(_WORD *)&friendshipGaugeEx->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v9;
      p_offset += 2;
      if ( v9 >= *(unsigned __int16 *)&friendshipGaugeEx->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AAFEF8(friendshipGaugeEx, IFriendshipGauge_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(IFriendshipGauge_o *, _QWORD))p_method)(friendshipGaugeEx, *(_QWORD *)(p_method + 8));
  return friendshipGaugeEx;
}