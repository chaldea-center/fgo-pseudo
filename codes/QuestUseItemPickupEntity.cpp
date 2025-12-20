void QuestUseItemPickupEntity___ctor(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D044 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2D044 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestUseItemPickupEntity__CreatePrimaryKey(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool QuestUseItemPickupEntity__IsOpen(QuestUseItemPickupEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4D2D043 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2D043 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= nowTime && nowTime <= this->fields.endedAt;
}