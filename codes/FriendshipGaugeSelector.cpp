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
  FriendshipGaugeSelector_o *v6; // x19
  bool v7; // zf
  __int64 v8; // x8
  IFriendshipGauge_o *v9; // x19
  IFriendshipGauge_c *klass; // x8
  __int64 v11; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 p_method; // x0

  v6 = this;
  if ( (byte_4A3114D & 1) == 0 )
  {
    this = (FriendshipGaugeSelector_o *)sub_1B761C0(&IFriendshipGauge_TypeInfo, *(_QWORD *)&maxFriendShipRank);
    byte_4A3114D = 1;
  }
  v7 = friendshipExceedCount + maxFriendShipRank < 11 || friendshipExceedCount == 0;
  v8 = 32LL;
  if ( !v7 )
    v8 = 40LL;
  v9 = *(IFriendshipGauge_o **)((char *)&v6->klass + v8);
  if ( !v9 )
    sub_1B7641C(this, *(_QWORD *)&maxFriendShipRank);
  klass = v9->klass;
  v11 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1BC81A0(v9, IFriendshipGauge_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(IFriendshipGauge_o *, _QWORD))p_method)(v9, *(_QWORD *)(p_method + 8));
  return v9;
}