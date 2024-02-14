void __fastcall WarBoardTaskBase___ctor(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_421661B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_421661B = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.Key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  this->fields.IsEnabled = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardTaskBase__Execute(
        WarBoardTaskBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardTaskBase__Execute_d__15_o *v3; // x19

  if ( (byte_421661A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardTaskBase__Execute_d__15_TypeInfo, method);
    byte_421661A = 1;
  }
  v3 = (WarBoardTaskBase__Execute_d__15_o *)sub_B0D974(WarBoardTaskBase__Execute_d__15_TypeInfo, method, v2);
  WarBoardTaskBase__Execute_d__15___ctor(v3, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardTaskBase__OnEnd(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  WarBoardTaskBase_TaskCallback_o *EndCallback; // x0

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    WarBoardTaskBase_TaskCallback__Invoke(EndCallback, 0LL);
}


void __fastcall WarBoardTaskBase__OnPause(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = 1;
}


void __fastcall WarBoardTaskBase__OnResume(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = 0;
}


void __fastcall WarBoardTaskBase__OnStart(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  WarBoardTaskBase_TaskCallback_o *StartCallback; // x0

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    WarBoardTaskBase_TaskCallback__Invoke(StartCallback, 0LL);
}


bool __fastcall WarBoardTaskBase__get_isPause(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  return this->fields._isPause_k__BackingField;
}


bool __fastcall WarBoardTaskBase__get_isPlaying(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  return this->fields._isPlaying_k__BackingField;
}


void __fastcall WarBoardTaskBase__set_isPause(WarBoardTaskBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = value;
}


void __fastcall WarBoardTaskBase__set_isPlaying(WarBoardTaskBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isPlaying_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTaskBase_TaskCallback___ctor(
        WarBoardTaskBase_TaskCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall WarBoardTaskBase_TaskCallback__BeginInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall WarBoardTaskBase_TaskCallback__EndInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall WarBoardTaskBase_TaskCallback__Invoke(WarBoardTaskBase_TaskCallback_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  WarBoardTaskBase_TaskCallback_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  WarBoardTaskBase_TaskCallback_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  WarBoardTaskBase_TaskCallback_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (WarBoardTaskBase_TaskCallback_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}


void __fastcall WarBoardTaskBase__Execute_d__15___ctor(
        WarBoardTaskBase__Execute_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardTaskBase__Execute_d__15__MoveNext(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *__fastcall WarBoardTaskBase__Execute_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardTaskBase__Execute_d__15__System_Collections_IEnumerator_Reset(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardTaskBase__Execute_d__15_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall WarBoardTaskBase__Execute_d__15__System_Collections_IEnumerator_get_Current(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardTaskBase__Execute_d__15__System_IDisposable_Dispose(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  ;
}