void __fastcall QuestUseItemPickupEntity___ctor(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C225A2 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C225A2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestUseItemPickupEntity__CreatePrimaryKey(
        QuestUseItemPickupEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall QuestUseItemPickupEntity__IsOpen(
        QuestUseItemPickupEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_4C225A1 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, nowTime);
    byte_4C225A1 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= Time && Time <= this->fields.endedAt;
}