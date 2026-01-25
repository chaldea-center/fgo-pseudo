void EventFilterEntity___ctor(EventFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE636 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE636 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventFilterEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4CEE634 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEE634 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventFilterEntity__CreatePrimaryKey(EventFilterEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFilterEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


bool EventFilterEntity__HasStatus(EventFilterEntity_o *this, int32_t flagMask, const MethodInfo *method)
{
  return (this->fields.flag & flagMask) != 0;
}


bool EventFilterEntity__IsOpen(EventFilterEntity_o *this, const MethodInfo *method)
{
  int32_t closeQuestId; // w19
  int32_t openQuestId; // w20

  if ( (byte_4CEE635 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE635 = 1;
  }
  openQuestId = this->fields.openQuestId;
  closeQuestId = this->fields.closeQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestEnable(openQuestId, closeQuestId, 0);
}


bool EventFilterEntity__IsQuestOpenEvent(EventFilterEntity_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.buttonText, 0)
      && this->fields.openQuestId >= 1
      && this->fields.closeQuestId > 0;
}


bool EventFilterEntity__IsServantEquipFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool EventFilterEntity__IsServantFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool EventFilterEntity__IsSupportFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool EventFilterEntity__IsSupportServantEquipFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0x22) != 0;
}


bool EventFilterEntity__IsSupportServantFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0x12) != 0;
}