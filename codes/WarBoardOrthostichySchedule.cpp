void WarBoardOrthostichySchedule___ctor(
        WarBoardOrthostichySchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6);
}


void WarBoardOrthostichySchedule___ctor_38056676(
        WarBoardOrthostichySchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C24F7E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4C24F7E = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1C2D6EC(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9);
}


System_Collections_IEnumerator_o *WarBoardOrthostichySchedule__Execute(
        WarBoardOrthostichySchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24F7F & 1) == 0 )
  {
    sub_1C2D490(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
    byte_4C24F7F = 1;
  }
  v3 = sub_1C2D6DC(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  __int64 v2; // x2
  WarBoardOrthostichySchedule__Execute_d__4_o *v3; // x19
  int32_t _1__state; // w8
  struct WarBoardOrthostichySchedule_o *_4__this; // x22
  struct WarBoardTaskBase_array *tasks; // x9
  int32_t max_length; // w9
  int32_t v8; // w8
  struct WarBoardTaskBase_array *v9; // x10
  struct WarBoardTaskBase_array *v10; // x8
  __int64 i_5__3; // x9
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_IEnumerator_o *executes_5__4; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  struct WarBoardTaskBase_array *v20; // x8
  __int64 v21; // x9
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  bool result; // w0
  struct System_Collections_IEnumerator_o *v25; // x20
  System_Collections_IEnumerator_c *v26; // x8
  __int64 v27; // x9
  System_Collections_IEnumerator_c **v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  v3 = this;
  if ( (byte_4C24F80 & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C24F80 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  tasks = _4__this->fields.tasks;
  if ( !tasks )
    goto LABEL_40;
  max_length = tasks->max_length;
  v8 = 0;
  *(_QWORD *)&v3->fields._count_5__2 = (unsigned int)max_length;
  while ( 1 )
  {
    if ( v8 >= max_length )
      return 0;
    v9 = _4__this->fields.tasks;
    if ( !v9 )
      goto LABEL_40;
    if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v9->m_Items[v8];
    if ( this )
      break;
LABEL_29:
    v3->fields._i_5__3 = ++v8;
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                          this,
                                                          this->klass->vtable._5_System_IDisposable_Dispose.method);
  v10 = _4__this->fields.tasks;
  if ( !v10 )
    goto LABEL_40;
  i_5__3 = v3->fields._i_5__3;
  if ( (unsigned int)i_5__3 >= LODWORD(v10->max_length) )
LABEL_41:
    sub_1C2D6F4(this, method, v2);
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v10->m_Items[i_5__3];
  if ( !this )
    goto LABEL_40;
  v12 = ((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
          this,
          this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
  v3->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._executes_5__4, v12, v13, v14);
LABEL_16:
  executes_5__4 = v3->fields._executes_5__4;
  if ( !executes_5__4 )
    goto LABEL_40;
  klass = executes_5__4->klass;
  v17 = *(unsigned __int16 *)&executes_5__4->klass->_2.rank;
  if ( *(_WORD *)&executes_5__4->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_21;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v19 = sub_1C7DCA8(v3->fields._executes_5__4, System_Collections_IEnumerator_TypeInfo, 0);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v19)(
                                                          executes_5__4,
                                                          *(_QWORD *)(v19 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_40;
    v20 = _4__this->fields.tasks;
    if ( !v20 )
      goto LABEL_40;
    v21 = v3->fields._i_5__3;
    if ( (unsigned int)v21 >= LODWORD(v20->max_length) )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v20->m_Items[v21];
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
      this,
      this->klass->vtable._6_MoveNext.method);
    v3->fields._executes_5__4 = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._executes_5__4, 0, v22, v23);
    max_length = v3->fields._count_5__2;
    v8 = v3->fields._i_5__3;
    goto LABEL_29;
  }
  v25 = v3->fields._executes_5__4;
  if ( !v25 )
LABEL_40:
    sub_1C2D6EC(this, method);
  v26 = v25->klass;
  v27 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    v28 = (System_Collections_IEnumerator_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v27;
      v28 += 2;
      if ( !v27 )
        goto LABEL_37;
    }
    v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1];
  }
  else
  {
LABEL_37:
    v29 = sub_1C7DCA8(v25, System_Collections_IEnumerator_TypeInfo, 1);
  }
  v30 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
  v3->fields.__2__current = (Il2CppObject *)v30;
  p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1C2D434(p__2__current, v30, v32, v33);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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