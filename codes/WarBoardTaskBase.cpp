void __fastcall WarBoardTaskBase___ctor(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4353AC0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353AC0 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.Key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  this->fields.IsEnabled = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardTaskBase__Execute(
        WarBoardTaskBase_o *this,
        const MethodInfo *method)
{
  WarBoardTaskBase__Execute_d__15_o *v2; // x19

  if ( (byte_4353ABF & 1) == 0 )
  {
    sub_B70694(&WarBoardTaskBase__Execute_d__15_TypeInfo);
    byte_4353ABF = 1;
  }
  v2 = (WarBoardTaskBase__Execute_d__15_o *)sub_B70764(WarBoardTaskBase__Execute_d__15_TypeInfo);
  WarBoardTaskBase__Execute_d__15___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall WarBoardTaskBase_TaskCallback__BeginInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, &v5, callback, object);
}


void __fastcall WarBoardTaskBase_TaskCallback__EndInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall WarBoardTaskBase_TaskCallback__Invoke(WarBoardTaskBase_TaskCallback_o *this, const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  WarBoardTaskBase_TaskCallback_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  WarBoardTaskBase_TaskCallback_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  WarBoardTaskBase_TaskCallback_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (WarBoardTaskBase_TaskCallback_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B706C4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B706BC(v18);
      v21 = sub_B70AC0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B08590(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B70744(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B08590(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_WarBoardTaskBase__Execute_d__15_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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