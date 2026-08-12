void QuestUseItemPickupEntity___ctor(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971076 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5971076 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestUseItemPickupEntity__CreatePrimaryKey(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool QuestUseItemPickupEntity__IsOpen(QuestUseItemPickupEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_5971075 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971075 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= Time && Time <= this->fields.endedAt;
}