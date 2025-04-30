void __fastcall WarBoardOrthostichySchedule___ctor(
        WarBoardOrthostichySchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6);
}


void __fastcall WarBoardOrthostichySchedule___ctor_36460216(
        WarBoardOrthostichySchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4C19B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_4A4C19B = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1B86614(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9);
}


System_Collections_IEnumerator_o *__fastcall WarBoardOrthostichySchedule__Execute(
        WarBoardOrthostichySchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A4C19C & 1) == 0 )
  {
    sub_1B863B8(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo, method);
    byte_4A4C19C = 1;
  }
  v3 = sub_1B86604(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardOrthostichySchedule__OnEnd(WarBoardOrthostichySchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardOrthostichySchedule__OnStart(WarBoardOrthostichySchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
}


void __fastcall WarBoardOrthostichySchedule__Execute_d__4___ctor(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardOrthostichySchedule__Execute_d__4__MoveNext(
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
  const MethodInfo *v13; // x3
  struct System_Collections_IEnumerator_o *executes_5__4; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct WarBoardTaskBase_array *v19; // x8
  __int64 v20; // x9
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  bool result; // w0
  struct System_Collections_IEnumerator_o *v24; // x20
  System_Collections_IEnumerator_c *v25; // x8
  __int64 v26; // x9
  System_Collections_IEnumerator_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  v2 = this;
  if ( (byte_4A4C19D & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, method);
    byte_4A4C19D = 1;
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
    if ( v7 >= v8->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v8->m_Items[v7];
    if ( this )
      break;
LABEL_29:
    v2->fields._i_5__3 = ++v7;
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                          this,
                                                          this->klass->vtable._6_MoveNext.methodPtr);
  v9 = _4__this->fields.tasks;
  if ( !v9 )
    goto LABEL_40;
  i_5__3 = v2->fields._i_5__3;
  if ( (unsigned int)i_5__3 >= v9->max_length )
LABEL_41:
    sub_1B8661C(this, method);
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v9->m_Items[i_5__3];
  if ( !this )
    goto LABEL_40;
  v11 = ((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
          this,
          this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
  v2->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._executes_5__4, v11, v12, v13);
LABEL_16:
  executes_5__4 = v2->fields._executes_5__4;
  if ( !executes_5__4 )
    goto LABEL_40;
  klass = executes_5__4->klass;
  v16 = *(unsigned __int16 *)(&executes_5__4->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&executes_5__4->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1BD6B4C(v2->fields._executes_5__4, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                          executes_5__4,
                                                          *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_40;
    v19 = _4__this->fields.tasks;
    if ( !v19 )
      goto LABEL_40;
    v20 = v2->fields._i_5__3;
    if ( (unsigned int)v20 >= v19->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v19->m_Items[v20];
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
      this,
      this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
    v2->fields._executes_5__4 = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._executes_5__4, 0, v21, v22);
    max_length = v2->fields._count_5__2;
    v7 = v2->fields._i_5__3;
    goto LABEL_29;
  }
  v24 = v2->fields._executes_5__4;
  if ( !v24 )
LABEL_40:
    sub_1B86614(this, method);
  v25 = v24->klass;
  v26 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    v27 = (System_Collections_IEnumerator_c **)&v25->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_37;
    }
    v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 1].method;
  }
  else
  {
LABEL_37:
    v28 = sub_1BD6B4C(v24, System_Collections_IEnumerator_TypeInfo, 1LL);
  }
  v29 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
  v2->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1B8635C(p__2__current, v29, v31, v32);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardOrthostichySchedule__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardOrthostichySchedule__Execute_d__4__System_Collections_IEnumerator_Reset(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall WarBoardOrthostichySchedule__Execute_d__4__System_Collections_IEnumerator_get_Current(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardOrthostichySchedule__Execute_d__4__System_IDisposable_Dispose(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}