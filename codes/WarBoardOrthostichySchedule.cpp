void WarBoardOrthostichySchedule___ctor(
        WarBoardOrthostichySchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void WarBoardOrthostichySchedule___ctor_38922360(
        WarBoardOrthostichySchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2A3F7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4D2A3F7 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1C942F0(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *WarBoardOrthostichySchedule__Execute(
        WarBoardOrthostichySchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2A3F8 & 1) == 0 )
  {
    sub_1C94098(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
    byte_4D2A3F8 = 1;
  }
  v3 = sub_1C942E4(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardOrthostichySchedule__OnEnd(WarBoardOrthostichySchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardOrthostichySchedule__OnStart(WarBoardOrthostichySchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
}


void WarBoardOrthostichySchedule__Execute_d__4___ctor(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardOrthostichySchedule__Execute_d__4__MoveNext(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  WarBoardOrthostichySchedule__Execute_d__4_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardOrthostichySchedule_o *_4__this; // x22
  struct WarBoardTaskBase_array *tasks; // x9
  int32_t max_length; // w9
  int32_t v7; // w8
  struct WarBoardTaskBase_array *v8; // x10
  struct WarBoardTaskBase_array *v9; // x8
  __int64 i_5__3; // x9
  __int64 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Collections_IEnumerator_o *executes_5__4; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  struct WarBoardTaskBase_array *v23; // x8
  __int64 v24; // x9
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  bool result; // w0
  struct System_Collections_IEnumerator_o *v32; // x20
  System_Collections_IEnumerator_c *v33; // x8
  __int64 v34; // x9
  System_Collections_IEnumerator_c **v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  v2 = this;
  if ( (byte_4D2A3F9 & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2A3F9 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  tasks = _4__this->fields.tasks;
  if ( !tasks )
    goto LABEL_40;
  max_length = tasks->max_length;
  v7 = 0;
  *(_QWORD *)&v2->fields._count_5__2 = (unsigned int)max_length;
  while ( 1 )
  {
    if ( v7 >= max_length )
      return 0;
    v8 = _4__this->fields.tasks;
    if ( !v8 )
      goto LABEL_40;
    if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v8->m_Items[v7];
    if ( this )
      break;
LABEL_29:
    v2->fields._i_5__3 = ++v7;
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                          this,
                                                          this->klass->vtable._5_System_IDisposable_Dispose.method);
  v9 = _4__this->fields.tasks;
  if ( !v9 )
    goto LABEL_40;
  i_5__3 = v2->fields._i_5__3;
  if ( (unsigned int)i_5__3 >= LODWORD(v9->max_length) )
LABEL_41:
    sub_1C942F8(this);
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v9->m_Items[i_5__3];
  if ( !this )
    goto LABEL_40;
  v11 = ((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
          this,
          this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
  v2->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._executes_5__4, v11, v12, v13, v14, v15, v16, v17);
LABEL_16:
  executes_5__4 = v2->fields._executes_5__4;
  if ( !executes_5__4 )
    goto LABEL_40;
  klass = executes_5__4->klass;
  v20 = *(unsigned __int16 *)&executes_5__4->klass->_2.rank;
  if ( *(_WORD *)&executes_5__4->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_21;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v22 = sub_1C6A420(v2->fields._executes_5__4, System_Collections_IEnumerator_TypeInfo, 0);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v22)(
                                                          executes_5__4,
                                                          *(_QWORD *)(v22 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_40;
    v23 = _4__this->fields.tasks;
    if ( !v23 )
      goto LABEL_40;
    v24 = v2->fields._i_5__3;
    if ( (unsigned int)v24 >= LODWORD(v23->max_length) )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v23->m_Items[v24];
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
      this,
      this->klass->vtable._6_MoveNext.method);
    v2->fields._executes_5__4 = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._executes_5__4, 0, v25, v26, v27, v28, v29, v30);
    max_length = v2->fields._count_5__2;
    v7 = v2->fields._i_5__3;
    goto LABEL_29;
  }
  v32 = v2->fields._executes_5__4;
  if ( !v32 )
LABEL_40:
    sub_1C942F0(this, method);
  v33 = v32->klass;
  v34 = *(unsigned __int16 *)&v32->klass->_2.rank;
  if ( *(_WORD *)&v32->klass->_2.rank )
  {
    v35 = (System_Collections_IEnumerator_c **)&v33->_1.interfaceOffsets->offset;
    while ( *(v35 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v34;
      v35 += 2;
      if ( !v34 )
        goto LABEL_37;
    }
    v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1];
  }
  else
  {
LABEL_37:
    v36 = sub_1C6A420(v32, System_Collections_IEnumerator_TypeInfo, 1);
  }
  v37 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
  v2->fields.__2__current = (Il2CppObject *)v37;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(p__2__current, v37, v39, v40, v41, v42, v43, v44);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *WarBoardOrthostichySchedule__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardOrthostichySchedule__Execute_d__4__System_Collections_IEnumerator_Reset(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *WarBoardOrthostichySchedule__Execute_d__4__System_Collections_IEnumerator_get_Current(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardOrthostichySchedule__Execute_d__4__System_IDisposable_Dispose(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}