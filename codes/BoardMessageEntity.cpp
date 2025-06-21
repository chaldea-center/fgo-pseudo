void __fastcall BoardMessageEntity___ctor(BoardMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C1DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C1DA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoardMessageEntity__CreatePrimaryKey(BoardMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


BoardMessageEntity_TimeData_array *__fastcall BoardMessageEntity__GetScriptData(
        BoardMessageEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.script;
}


BoardMessageEntity_TimeData_o *__fastcall BoardMessageEntity__GetScriptDataCondCheck(
        BoardMessageEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct BoardMessageEntity_TimeData_array *script; // x8
  __int64 v4; // x9
  unsigned int v5; // w10
  unsigned int v6; // w11
  __int64 v7; // x12
  BoardMessageEntity_TimeData_o *v8; // x13
  int64_t v9; // x13
  _BOOL4 v10; // w14
  _BOOL4 v11; // w15

  script = this->fields.script;
  if ( !script )
    return 0LL;
  v4 = *(_QWORD *)&script->max_length;
  if ( !v4 )
    return 0LL;
  if ( (int)v4 < 1 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v8 = script->m_Items[v6];
      if ( !v8 )
        sub_1BCB254(this, nowTime);
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v5 = v6;
      ++v6;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (_DWORD)v4 != v6 );
  }
  if ( v5 >= (unsigned int)v4 )
    sub_1BCB25C(this, nowTime, method);
  return script->m_Items[v5];
}


void __fastcall BoardMessageEntity_TimeData___ctor(BoardMessageEntity_TimeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}