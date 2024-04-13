void __fastcall ActionChainBase_object____ctor(
        ActionChainBase_T__o *this,
        System_Object_array *chains,
        const MethodInfo_2583CA0 *method)
{
  if ( !this )
    sub_B5D69C(0LL, chains);
  ChainableActionBase___ctor((ChainableActionBase_o *)this, 0LL);
  ((void (__fastcall *)(ActionChainBase_T__o *, void *))this->klass->vtable._6_Init.method)(
    this,
    this->klass[1]._1.image);
  ((void (__fastcall *)(ActionChainBase_T__o *, System_Object_array *))method->klass->rgctx_data->_1_ActionChainBase_T__AddRange->methodPointer)(
    this,
    chains);
}


ActionChainBase_T__o *__fastcall ActionChainBase_object___AddRange(
        ActionChainBase_T__o *this,
        System_Object_array *chainElems,
        const MethodInfo_2583D84 *method)
{
  __int64 v3; // x3
  ActionChainBase_T__o *v6; // x21
  signed int max_length; // w8
  unsigned int v8; // w24
  Il2CppObject *v9; // x22
  System_Action_o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v18; // x0

  v6 = this;
  if ( (byte_42F1378 & 1) == 0 )
  {
    this = (ActionChainBase_T__o *)sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)chainElems, (_DWORD)method, v3);
    byte_42F1378 = 1;
  }
  if ( !v6 )
    goto LABEL_13;
  if ( !v6->fields._IsExecuted_k__BackingField )
  {
    if ( !chainElems )
      goto LABEL_13;
    max_length = chainElems->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
        {
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v9 = chainElems->m_Items[v8];
        v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v10,
          (Il2CppObject *)v6,
          (intptr_t)method->klass->rgctx_data->_5_ActionChainBase_T__DoNext,
          0LL);
        if ( !v9 )
          break;
        v9[1].monitor = v10;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v9[1].monitor,
          (System_Int32_array **)v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        this = *(ActionChainBase_T__o **)&v6->fields.currentIndex;
        if ( !this )
          break;
        this = (ActionChainBase_T__o *)((__int64 (__fastcall *)(ActionChainBase_T__o *, Il2CppObject *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
                                         this,
                                         v9);
        max_length = chainElems->max_length;
        if ( (int)++v8 >= max_length )
          return v6;
      }
LABEL_13:
      sub_B5D69C(this, chainElems);
    }
  }
  return v6;
}


void __fastcall ActionChainBase_object___DoNext(ActionChainBase_T__o *this, const MethodInfo_2584378 *method)
{
  int v3; // w8
  __int64 v4; // x0
  __int64 v6; // x1

  if ( LOBYTE(this->fields.children) )
  {
    BYTE1(this->fields.children) = 1;
    return;
  }
  v3 = *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1);
  v4 = *(_QWORD *)&this->fields.currentIndex;
  *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = v3 + 1;
  if ( !v4 )
    goto LABEL_8;
  if ( v3 + 1 < ((__int64 (*)(void))method->klass->rgctx_data->_13_System_Collections_Generic_List_T__get_Count->methodPointer)() )
  {
    v4 = *(_QWORD *)&this->fields.currentIndex;
    if ( v4 )
    {
      v6 = ((__int64 (__fastcall *)(__int64, _QWORD))method->klass->rgctx_data->_14_System_Collections_Generic_List_T__get_Item->methodPointer)(
             v4,
             *((unsigned int *)&this->fields._IsExecuted_k__BackingField + 1));
      ((void (__fastcall *)(ActionChainBase_T__o *, __int64, const char *))this->klass[1]._1.gc_desc)(
        this,
        v6,
        this->klass[1]._1.name);
      return;
    }
LABEL_8:
    sub_B5D69C(v4, method);
  }
  ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppMethodPointer))this->klass->vtable._5_End.method)(
    this,
    this->klass->vtable._6_Init.methodPtr);
}


void __fastcall ActionChainBase_object___ExecuteOnDetail(ActionChainBase_T__o *this, const MethodInfo_2584354 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  method->klass->rgctx_data->_5_ActionChainBase_T__DoNext->methodPointer();
}


void __fastcall ActionChainBase_object___Init(ActionChainBase_T__o *this, const MethodInfo_2583D04 *method)
{
  Il2CppClass *_2_System_Collections_Generic_List_T; // x21
  __int64 v5; // x0
  ActionChainBase_T__c *klass; // x8
  System_Int32_array **v7; // x20
  int32_t *p_currentIndex; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = -1;
  _2_System_Collections_Generic_List_T = method->klass->rgctx_data->_2_System_Collections_Generic_List_T_;
  if ( (BYTE2(_2_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->klass->rgctx_data->_2_System_Collections_Generic_List_T_);
  v5 = sub_B5D694(_2_System_Collections_Generic_List_T);
  klass = method->klass;
  v7 = (System_Int32_array **)v5;
  klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor->methodPointer();
  *(_QWORD *)&this->fields.currentIndex = v7;
  p_currentIndex = &this->fields.currentIndex;
  sub_B5D560((BattleServantConfConponent_o *)p_currentIndex, v7, v9, v10, v11, v12, v13, v14);
  *((_WORD *)p_currentIndex + 4) = 0;
}


void __fastcall ActionChainBase_object___PauseNext(ActionChainBase_T__o *this, const MethodInfo_2583E94 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(ActionChainBase_T__o *, __int64))method->klass->rgctx_data->_7_ActionChainBase_T__SetIsPausing->methodPointer)(
    this,
    1LL);
}


void __fastcall ActionChainBase_object___ResumeNext(ActionChainBase_T__o *this, const MethodInfo_2583EBC *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(ActionChainBase_T__o *, _QWORD))method->klass->rgctx_data->_7_ActionChainBase_T__SetIsPausing->methodPointer)(
    this,
    0LL);
  ((void (__fastcall *)(ActionChainBase_T__o *))method->klass->rgctx_data->_8_ActionChainBase_T__StartPendingNextAction->methodPointer)(this);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ActionChainBase_object___SetIsPausing(
        ActionChainBase_T__o *this,
        bool value,
        const MethodInfo_2583F10 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x0
  __int64 v14; // x3
  Il2CppObject *current; // x21
  __int64 v16; // x1
  ActionChainBase_T__o *v17; // x0
  Il2CppClass *_12_System_Collections_Generic_List_Enumerator_T; // x19
  unsigned __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF
  __int64 v24; // [xsp+48h] [xbp-28h]

  if ( (byte_42F1379 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionChainBase_ChainableActionBase__SetIsPausing__, value, (_DWORD)method, v3);
    sub_B5D5C4(&ActionChainBase_ChainableActionBase__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    byte_42F1379 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  HIDWORD(v24) = 0;
  v13 = *(_QWORD *)&this->fields.currentIndex;
  LOBYTE(this->fields.children) = value;
  if ( !v13 )
    sub_B5D69C(0LL, value);
  method->klass->rgctx_data->_9_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    current = v23.fields.current;
    if ( sub_B5D684(v23.fields.current, ActionChainBase_ChainableActionBase__TypeInfo) )
    {
      if ( !sub_B5D684(current, ActionChainBase_ChainableActionBase__TypeInfo) )
        sub_B5D69C(0LL, v16);
      v17 = (ActionChainBase_T__o *)sub_B5D684(current, ActionChainBase_ChainableActionBase__TypeInfo);
      ActionChainBase_object___SetIsPausing(
        v17,
        value,
        (const MethodInfo_2583F10 *)Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
    }
  }
  v24 = 0x100000054LL;
  _12_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_12_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_12_System_Collections_Generic_List_Enumerator_T);
  v22.fields.list = (struct System_Collections_Generic_List_T__o *)_12_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &_12_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&_12_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AF54C0(&v22, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(int32_t *, _QWORD))p_method)(&v22.fields.index, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v24 == 84 )
    v24 = 84LL;
}


void __fastcall ActionChainBase_object___StartPendingNextAction(
        ActionChainBase_T__o *this,
        const MethodInfo_258412C *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x3
  Il2CppObject *current; // x20
  __int64 v14; // x1
  ActionChainBase_T__o *v15; // x0
  Il2CppClass *_12_System_Collections_Generic_List_Enumerator_T; // x19
  unsigned __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+0h] [xbp-60h] BYREF
  __int64 v21; // [xsp+18h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42F137A & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ActionChainBase_ChainableActionBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    byte_42F137A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  HIDWORD(v21) = 0;
  if ( BYTE1(this->fields.children) )
  {
    BYTE1(this->fields.children) = 0;
    ((void (__fastcall *)(ActionChainBase_T__o *))method->klass->rgctx_data->_5_ActionChainBase_T__DoNext->methodPointer)(this);
  }
  if ( !*(_QWORD *)&this->fields.currentIndex )
    sub_B5D69C(0LL, method);
  method->klass->rgctx_data->_9_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  v22 = v20;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    current = v22.fields.current;
    if ( sub_B5D684(v22.fields.current, ActionChainBase_ChainableActionBase__TypeInfo) )
    {
      if ( !sub_B5D684(current, ActionChainBase_ChainableActionBase__TypeInfo) )
        sub_B5D69C(0LL, v14);
      v15 = (ActionChainBase_T__o *)sub_B5D684(current, ActionChainBase_ChainableActionBase__TypeInfo);
      ActionChainBase_object___StartPendingNextAction(
        v15,
        (const MethodInfo_258412C *)Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
    }
  }
  v21 = 0x100000061LL;
  _12_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_12_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_12_System_Collections_Generic_List_Enumerator_T);
  v20.fields.list = (struct System_Collections_Generic_List_T__o *)_12_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &_12_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&_12_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AF54C0(&v20, System_IDisposable_TypeInfo, 0LL, v12);
  }
  (*(void (__fastcall **)(Il2CppObject **, _QWORD))p_method)(&v20.fields.current, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v21 == 97 )
    v21 = 97LL;
}