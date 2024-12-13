void __fastcall EventFilterEntity___ctor(EventFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B3713A & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, method);
    byte_4B3713A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFilterEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4B37138 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_4B37138 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2F2F8A8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventFilterEntity__CreatePrimaryKey(EventFilterEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFilterEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


bool __fastcall EventFilterEntity__HasStatus(EventFilterEntity_o *this, int32_t flagMask, const MethodInfo *method)
{
  return (this->fields.flag & flagMask) != 0;
}


bool __fastcall EventFilterEntity__IsExistButtonText(EventFilterEntity_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.buttonText, 0LL);
}


bool __fastcall EventFilterEntity__IsOpen(EventFilterEntity_o *this, const MethodInfo *method)
{
  int32_t closeQuestId; // w19
  int32_t openQuestId; // w20

  if ( (byte_4B37139 & 1) == 0 )
  {
    sub_1BD3458(&CondType_TypeInfo, method);
    byte_4B37139 = 1;
  }
  openQuestId = this->fields.openQuestId;
  closeQuestId = this->fields.closeQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestEnable(openQuestId, closeQuestId, 0LL);
}


bool __fastcall EventFilterEntity__IsQuestOpenEvent(EventFilterEntity_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.buttonText, 0LL)
      && this->fields.openQuestId >= 1
      && this->fields.closeQuestId > 0;
}


bool __fastcall EventFilterEntity__IsServantEquipFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool __fastcall EventFilterEntity__IsServantFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool __fastcall EventFilterEntity__IsSupportFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall EventFilterEntity__IsSupportServantEquipFilterNoDisp(
        EventFilterEntity_o *this,
        const MethodInfo *method)
{
  return (this->fields.flag & 0x22) != 0;
}


bool __fastcall EventFilterEntity__IsSupportServantFilterNoDisp(EventFilterEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0x12) != 0;
}