void __fastcall EventFilterEntity___ctor(EventFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC6A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FC6A1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventFilterEntity__CreatePrimaryKey(EventFilterEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


bool __fastcall EventFilterEntity__HasStatus(EventFilterEntity_o *this, int32_t flagMask, const MethodInfo *method)
{
  return (this->fields.flag & flagMask) != 0;
}


bool __fastcall EventFilterEntity__IsOpen(EventFilterEntity_o *this, const MethodInfo *method)
{
  int32_t closeQuestId; // w19
  int32_t openQuestId; // w20

  if ( (byte_40FC6A0 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FC6A0 = 1;
  }
  openQuestId = this->fields.openQuestId;
  closeQuestId = this->fields.closeQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestEnable(openQuestId, closeQuestId, 0LL);
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