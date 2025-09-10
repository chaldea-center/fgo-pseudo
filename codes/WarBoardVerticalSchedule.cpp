void WarBoardVerticalSchedule___ctor(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, method);
  this->fields.tasks = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tasks, 0, v3, v4);
}


void WarBoardVerticalSchedule___ctor_38069348(
        WarBoardVerticalSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6);
}


void WarBoardVerticalSchedule___ctor_38069392(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C24FA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4C24FA0 = 1;
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


System_Collections_IEnumerator_o *WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24FA2 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
    byte_4C24FA2 = 1;
  }
  v3 = sub_1C2D6DC(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardVerticalSchedule__OnEnd(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardVerticalSchedule__OnStart(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardVerticalSchedule_o *v3; // x19
  struct WarBoardTaskBase_array *tasks; // x8

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardVerticalSchedule_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
                                           StartCallback->fields.method_code,
                                           StartCallback->fields.method);
  tasks = v3->fields.tasks;
  v3->fields.currentExecuteIndex = 0;
  if ( !tasks )
    goto LABEL_8;
  if ( SLODWORD(tasks->max_length) >= 1 )
  {
    this = (WarBoardVerticalSchedule_o *)tasks->m_Items[0];
    if ( this )
    {
      ((void (__fastcall *)(WarBoardVerticalSchedule_o *, const MethodInfo *))this->klass->vtable._5_OnStart.methodPtr)(
        this,
        this->klass->vtable._5_OnStart.method);
      return;
    }
LABEL_8:
    sub_1C2D6EC(this, method);
  }
}


void WarBoardVerticalSchedule__SetTask(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule_o *v4; // x19
  System_Object_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v4 = this;
  if ( (byte_4C24FA1 & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4C24FA1 = 1;
  }
  if ( !taskBases )
    sub_1C2D6EC(this, taskBases);
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.tasks, (int32_t)v5, v6, v7);
}


void WarBoardVerticalSchedule__Execute_d__7___ctor(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardVerticalSchedule__Execute_d__7__MoveNext(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule__Execute_d__7_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardVerticalSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length_low; // x1
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  unsigned int **p_executes_5__5; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  unsigned __int64 v19; // x22
  __int64 v20; // x24
  unsigned int *v21; // x8
  struct WarBoardTaskBase_array *v22; // x8
  unsigned int *v23; // x25
  const MethodInfo *v24; // x3
  WarBoardVerticalSchedule__Execute_d__7_o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardVerticalSchedule___c_c *v27; // x0
  System_Func_bool__bool__o *_9__7_0; // x21
  Il2CppObject *v29; // x22
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  bool result; // w0
  int count_5__2; // w8
  unsigned __int64 v36; // x21
  struct System_Boolean_array *v37; // x26
  bool *v38; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v40; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v43; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 v45; // x0
  struct System_Object_array *v46; // x8
  Il2CppClass **v47; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v48; // x20
  CGThumbnailListItem_o *v49; // x0
  unsigned int *v50; // x0
  struct System_Boolean_array *v51; // x8
  struct WarBoardTaskBase_array *v52; // x8
  struct WarBoardTaskBase_array *v53; // x8
  __int64 currentExecuteIndex; // x9
  int max_length; // w10
  struct System_Object_array *v56; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  __int64 v58; // x0

  v2 = this;
  if ( (byte_4C24FA4 & 1) == 0 )
  {
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_All_bool___);
    sub_1C2D490(&System_Func_bool__bool__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator___TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__);
    sub_1C2D490(&WarBoardVerticalSchedule___c_TypeInfo);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C2D490(&WarBoardManager_TypeInfo);
    byte_4C24FA4 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_72;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_72;
    max_length_low = LODWORD(tasks->max_length);
    v2->fields._count_5__2 = max_length_low;
    v7 = sub_1C2D538(bool___TypeInfo, max_length_low);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._endFlags_5__3, v7, v8, v9);
    v10 = sub_1C2D538(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v10;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._currentObjects_5__4, v10, v11, v12);
    v13 = sub_1C2D538(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v13;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._executes_5__5, v13, v15, v16);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v19 = 0;
      v20 = 8;
      while ( 1 )
      {
        v21 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v19 >= v21[6] )
          goto LABEL_73;
        *(_QWORD *)&v21[v20] = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v21[v20], 0, v17, v18);
        v22 = _4__this->fields.tasks;
        if ( !v22 )
          break;
        if ( v19 >= LODWORD(v22->max_length) )
          goto LABEL_73;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v22->obj.klass + v20 * 4);
        if ( this )
        {
          v23 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                               this,
                                                               this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
          if ( !v23 )
            break;
          v25 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
            if ( !this )
            {
LABEL_74:
              v58 = sub_1C2D710();
              sub_1C2D5B8(v58, 0);
            }
          }
          if ( v19 >= v23[6] )
LABEL_73:
            sub_1C2D6F4(this, method, v17);
          *(_QWORD *)&v23[v20] = v25;
          sub_1C2D434((CGThumbnailListItem_o *)&v23[v20], (int32_t)v25, v17, v24);
        }
        ++v19;
        v20 += 2;
        if ( (__int64)v19 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_72:
      sub_1C2D6EC(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v27 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v27 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  _9__7_0 = v27->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = WarBoardVerticalSchedule___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_1C2D6DC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__7_0, v29, Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, 0);
    static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v31, v32);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_30D8478 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v2->fields._count_5__2;
  if ( count_5__2 >= 1 )
  {
    v36 = 0;
    do
    {
      v37 = v2->fields._endFlags_5__3;
      if ( !v37 )
        goto LABEL_72;
      if ( v36 >= LODWORD(v37->max_length) )
        goto LABEL_73;
      v38 = &v37->m_Items[v36];
      if ( !*v38 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_72;
        if ( v36 >= LODWORD(executes_5__5->max_length) )
          goto LABEL_73;
        v40 = executes_5__5->m_Items[v36];
        if ( v40 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v40, 0);
          if ( v36 >= LODWORD(v37->max_length) )
            goto LABEL_73;
          *v38 = ((unsigned __int8)this & 1) == 0;
          klass = v40->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v43 = *(unsigned __int16 *)&v40->klass->_2.rank;
          if ( *(_WORD *)&v40->klass->_2.rank )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v43;
              p_offset += 2;
              if ( !v43 )
                goto LABEL_45;
            }
            v45 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
          }
          else
          {
LABEL_45:
            v45 = sub_1C7DCA8(v40, System_Collections_IEnumerator_TypeInfo, 1);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v45)(
                                                               v40,
                                                               *(_QWORD *)(v45 + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_72;
          v48 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C2D5CC(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_74;
          }
          if ( v36 >= currentObjects_5__4[6] )
            goto LABEL_73;
          v50 = &currentObjects_5__4[2 * v36];
          *((_QWORD *)v50 + 4) = v48;
          v49 = (CGThumbnailListItem_o *)(v50 + 8);
        }
        else
        {
          *v38 = 1;
          v46 = v2->fields._currentObjects_5__4;
          if ( !v46 )
            goto LABEL_72;
          if ( v36 >= LODWORD(v46->max_length) )
            goto LABEL_73;
          v47 = &v46->obj.klass + v36;
          LODWORD(v48) = 0;
          v47[4] = 0;
          v49 = (CGThumbnailListItem_o *)(v47 + 4);
        }
        sub_1C2D434(v49, (int32_t)v48, v17, v33);
        v51 = v2->fields._endFlags_5__3;
        if ( !v51 )
          goto LABEL_72;
        if ( v36 >= LODWORD(v51->max_length) )
          goto LABEL_73;
        if ( v51->m_Items[v36] )
        {
          if ( !_4__this )
            goto LABEL_72;
          v52 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v52 )
            goto LABEL_72;
          if ( v36 >= LODWORD(v52->max_length) )
            goto LABEL_73;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v52->m_Items[v36];
          if ( !this )
            goto LABEL_72;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                               this,
                                                               this->klass->vtable._6_MoveNext.method);
          v53 = _4__this->fields.tasks;
          if ( !v53 )
            goto LABEL_72;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          max_length = v53->max_length;
          if ( (int)currentExecuteIndex < max_length )
          {
            if ( (unsigned int)currentExecuteIndex >= max_length )
              goto LABEL_73;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v53->m_Items[currentExecuteIndex];
            if ( !this )
              goto LABEL_72;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._5_System_IDisposable_Dispose.method);
          }
        }
        else if ( !_4__this )
        {
          goto LABEL_72;
        }
        if ( (__int64)v36 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v2->fields._count_5__2;
      }
    }
    while ( (__int64)++v36 < count_5__2 );
  }
  v56 = v2->fields._currentObjects_5__4;
  v2->fields.__2__current = &v56->obj;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C2D434(p__2__current, (int32_t)v56, v17, v33);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *WarBoardVerticalSchedule__Execute_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardVerticalSchedule__Execute_d__7__System_Collections_IEnumerator_Reset(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *WarBoardVerticalSchedule__Execute_d__7__System_Collections_IEnumerator_get_Current(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardVerticalSchedule__Execute_d__7__System_IDisposable_Dispose(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardVerticalSchedule___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24FA3 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardVerticalSchedule___c_TypeInfo);
    byte_4C24FA3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardVerticalSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardVerticalSchedule___c___ctor(WarBoardVerticalSchedule___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardVerticalSchedule___c___Execute_b__7_0(
        WarBoardVerticalSchedule___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}