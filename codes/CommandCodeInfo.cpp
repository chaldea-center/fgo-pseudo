void CommandCodeInfo___ctor(CommandCodeInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CommandCodeInfo___ctor_47447048(CommandCodeInfo_o *this, CommandCodeInfo_SaveData_o *sv, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !sv )
    sub_1C942F0(v5, v6);
  this->fields.id = sv->fields.id;
  *(_QWORD *)&this->fields.userId = *(_QWORD *)&sv->fields.userId;
}


CommandCodeInfo_SaveData_o *CommandCodeInfo__GetSaveData(CommandCodeInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  CommandCodeInfo_SaveData_o *result; // x0

  if ( (byte_4D2F85D & 1) == 0 )
  {
    sub_1C94098(&CommandCodeInfo_SaveData_TypeInfo);
    byte_4D2F85D = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(CommandCodeInfo_SaveData_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  result = (CommandCodeInfo_SaveData_o *)v3;
  v3[1].klass = (Il2CppClass *)this->fields.id;
  v3[1].monitor = *(void **)&this->fields.userId;
  return result;
}


void CommandCodeInfo_SaveData___ctor(CommandCodeInfo_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}