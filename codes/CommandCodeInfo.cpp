void CommandCodeInfo___ctor(CommandCodeInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CommandCodeInfo___ctor_53648140(CommandCodeInfo_o *this, CommandCodeInfo_SaveData_o *sv, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // d0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !sv )
    sub_2213CDC(v5, v6);
  v7 = *(_QWORD *)&sv->fields.userId;
  this->fields.id = sv->fields.id;
  *(_QWORD *)&this->fields.userId = v7;
}


CommandCodeInfo_SaveData_o *CommandCodeInfo__GetSaveData(CommandCodeInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  void *v6; // d0

  if ( (byte_5973878 & 1) == 0 )
  {
    sub_2213A60(&CommandCodeInfo_SaveData_TypeInfo);
    byte_5973878 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(CommandCodeInfo_SaveData_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  v6 = *(void **)&this->fields.userId;
  v3[1].klass = (Il2CppClass *)this->fields.id;
  v3[1].monitor = v6;
  return (CommandCodeInfo_SaveData_o *)v3;
}


void CommandCodeInfo_SaveData___ctor(CommandCodeInfo_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}