void __fastcall WarBoardUnPlayEventData___ctor(WarBoardUnPlayEventData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = (WarBoardUnPlayEventData_Fields)-1LL;
}


void __fastcall WarBoardUnPlayEventData___ctor_35410672(
        WarBoardUnPlayEventData_o *this,
        int32_t id,
        int32_t scriptId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._eventId_k__BackingField = id;
  this->fields._eventScriptId_k__BackingField = scriptId;
}


void __fastcall WarBoardUnPlayEventData___ctor_35410716(
        WarBoardUnPlayEventData_o *this,
        WarBoardUnPlayEventData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1B7641C(v5, v6);
  this->fields = (WarBoardUnPlayEventData_Fields)saveData->fields;
}


int32_t __fastcall WarBoardUnPlayEventData__get_eventId(WarBoardUnPlayEventData_o *this, const MethodInfo *method)
{
  return this->fields._eventId_k__BackingField;
}


int32_t __fastcall WarBoardUnPlayEventData__get_eventScriptId(
        WarBoardUnPlayEventData_o *this,
        const MethodInfo *method)
{
  return this->fields._eventScriptId_k__BackingField;
}


void __fastcall WarBoardUnPlayEventData__set_eventId(
        WarBoardUnPlayEventData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._eventId_k__BackingField = value;
}


void __fastcall WarBoardUnPlayEventData__set_eventScriptId(
        WarBoardUnPlayEventData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._eventScriptId_k__BackingField = value;
}


void __fastcall WarBoardUnPlayEventData_SaveData___ctor(
        WarBoardUnPlayEventData_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = (WarBoardUnPlayEventData_SaveData_Fields)-1LL;
}


void __fastcall WarBoardUnPlayEventData_SaveData___ctor_35410800(
        WarBoardUnPlayEventData_SaveData_o *this,
        WarBoardUnPlayEventData_o *eventData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventData )
    sub_1B7641C(v5, v6);
  this->fields = (WarBoardUnPlayEventData_SaveData_Fields)eventData->fields;
}