void __fastcall QuestUseItemPickupEntity___ctor(QuestUseItemPickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCB6A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDCB6A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4BDCB69 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDCB69 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= nowTime && nowTime <= this->fields.endedAt;
}