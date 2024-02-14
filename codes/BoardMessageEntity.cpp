void __fastcall BoardMessageEntity___ctor(BoardMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4214BAB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4214BAB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoardMessageEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_4214BAA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&warId);
    byte_4214BAA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BoardMessageEntity__CreatePrimaryKey(BoardMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BoardMessageEntity__CreatePK(this->fields.id, this->fields.warId, v2);
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
  __int64 v5; // x11
  unsigned int v6; // w10
  __int64 v7; // x13
  BoardMessageEntity_TimeData_o *v8; // x14
  int64_t v9; // x14
  _BOOL4 v10; // w15
  _BOOL4 v11; // w16
  __int64 v13; // x0

  script = this->fields.script;
  if ( !script )
    return 0LL;
  v4 = *(_QWORD *)&script->max_length;
  if ( !v4 )
    return 0LL;
  if ( (int)v4 < 1 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0LL;
    v6 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v8 = script->m_Items[v5];
      if ( !v8 )
        sub_B0D97C(this);
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v6 = v5;
      ++v5;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (int)v5 < (int)v4 );
  }
  if ( v6 >= (unsigned int)v4 )
  {
    v13 = sub_B0D9A8(this);
    sub_B0D948(v13, 0LL);
  }
  return script->m_Items[v6];
}


void __fastcall BoardMessageEntity_TimeData___ctor(BoardMessageEntity_TimeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}