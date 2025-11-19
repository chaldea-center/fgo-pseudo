void QuestUseItemPickupEntity___ctor(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6A94 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB6A94 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestUseItemPickupEntity__CreatePrimaryKey(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool QuestUseItemPickupEntity__IsOpen(QuestUseItemPickupEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4CB6A93 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6A93 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= nowTime && nowTime <= this->fields.endedAt;
}