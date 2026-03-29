void FriendshipGaugeSelector___ctor(FriendshipGaugeSelector_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
IFriendshipGauge_o *FriendshipGaugeSelector__GetGauge(
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
  __int64 v13; // x0

  v6 = this;
  if ( (byte_4D344CF & 1) == 0 )
  {
    this = (FriendshipGaugeSelector_o *)sub_1C93AD4(&IFriendshipGauge_TypeInfo);
    byte_4D344CF = 1;
  }
  v7 = friendshipExceedCount + maxFriendShipRank < 11 || friendshipExceedCount == 0;
  v8 = 32;
  if ( !v7 )
    v8 = 40;
  v9 = *(IFriendshipGauge_o **)((char *)&v6->klass + v8);
  if ( !v9 )
    sub_1C93D2C(this, *(_QWORD *)&maxFriendShipRank);
  klass = v9->klass;
  v11 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_13;
    }
    v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_13:
    v13 = sub_1C69E5C(v9, IFriendshipGauge_TypeInfo, 5);
  }
  (*(void (__fastcall **)(IFriendshipGauge_o *, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8));
  return v9;
}