void __fastcall ActionChainBase_object____ctor(
        ActionChainBase_T__o *this,
        System_Object_array *chains,
        const MethodInfo_2698EDC *method)
{
  if ( !this )
    sub_B7769C(0LL, chains);
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
        const MethodInfo_2698FC0 *method)
{
  ActionChainBase_T__o *v5; // x21
  signed int max_length; // w8
  unsigned int v7; // w24
  Il2CppObject *v8; // x22
  System_Action_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v17; // x0

  v5 = this;
  if ( (byte_4394EE6 & 1) == 0 )
  {
    this = (ActionChainBase_T__o *)sub_B775C4(&System_Action_TypeInfo);
    byte_4394EE6 = 1;
  }
  if ( !v5 )
    goto LABEL_13;
  if ( !v5->fields._IsExecuted_k__BackingField )
  {
    if ( !chainElems )
      goto LABEL_13;
    max_length = chainElems->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
        {
          v17 = sub_B776C8(this);
          sub_B77668(v17, 0LL);
        }
        v8 = chainElems->m_Items[v7];
        v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          (intptr_t)method->klass->rgctx_data->_5_ActionChainBase_T__DoNext,
          0LL);
        if ( !v8 )
          break;
        v8[1].monitor = v9;
        sub_B77560(
          (BattleServantConfConponent_o *)&v8[1].monitor,
          (System_Int32_array **)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        this = *(ActionChainBase_T__o **)&v5->fields.currentIndex;
        if ( !this )
          break;
        this = (ActionChainBase_T__o *)((__int64 (__fastcall *)(ActionChainBase_T__o *, Il2CppObject *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
                                         this,
                                         v8);
        max_length = chainElems->max_length;
        if ( (int)++v7 >= max_length )
          return v5;
      }
LABEL_13:
      sub_B7769C(this, chainElems);
    }
  }
  return v5;
}


void __fastcall ActionChainBase_object___DoNext(ActionChainBase_T__o *this, const MethodInfo_26995B4 *method)
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
    sub_B7769C(v4, method);
  }
  ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppMethodPointer))this->klass->vtable._5_End.method)(
    this,
    this->klass->vtable._6_Init.methodPtr);
}


void __fastcall ActionChainBase_object___ExecuteOnDetail(ActionChainBase_T__o *this, const MethodInfo_2699590 *method)
{
  if ( !this )
    sub_B7769C(0LL, method);
  method->klass->rgctx_data->_5_ActionChainBase_T__DoNext->methodPointer();
}


void __fastcall ActionChainBase_object___Init(ActionChainBase_T__o *this, const MethodInfo_2698F40 *method)
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
    sub_B0F2C4(method->klass->rgctx_data->_2_System_Collections_Generic_List_T_);
  v5 = sub_B77694(_2_System_Collections_Generic_List_T);
  klass = method->klass;
  v7 = (System_Int32_array **)v5;
  klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor->methodPointer();
  *(_QWORD *)&this->fields.currentIndex = v7;
  p_currentIndex = &this->fields.currentIndex;
  sub_B77560((BattleServantConfConponent_o *)p_currentIndex, v7, v9, v10, v11, v12, v13, v14);
  *((_WORD *)p_currentIndex + 4) = 0;
}


void __fastcall ActionChainBase_object___PauseNext(ActionChainBase_T__o *this, const MethodInfo_26990D0 *method)
{
  if ( !this )
    sub_B7769C(0LL, method);
  ((void (__fastcall *)(ActionChainBase_T__o *, __int64))method->klass->rgctx_data->_7_ActionChainBase_T__SetIsPausing->methodPointer)(
    this,
    1LL);
}


void __fastcall ActionChainBase_object___ResumeNext(ActionChainBase_T__o *this, const MethodInfo_26990F8 *method)
{
  if ( !this )
    sub_B7769C(0LL, method);
  ((void (__fastcall *)(ActionChainBase_T__o *, _QWORD))method->klass->rgctx_data->_7_ActionChainBase_T__SetIsPausing->methodPointer)(
    this,
    0LL);
  ((void (__fastcall *)(ActionChainBase_T__o *))method->klass->rgctx_data->_8_ActionChainBase_T__StartPendingNextAction->methodPointer)(this);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ActionChainBase_object___SetIsPausing(
        ActionChainBase_T__o *this,
        bool value,
        const MethodInfo_269914C *method)
{
  __int64 v6; // x0
  Il2CppObject *current; // x21
  __int64 v8; // x1
  ActionChainBase_T__o *v9; // x0
  Il2CppClass *_12_System_Collections_Generic_List_Enumerator_T; // x19
  unsigned __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-50h] BYREF
  __int64 v16; // [xsp+48h] [xbp-28h]

  if ( (byte_4394EE7 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
    sub_B775C4(&ActionChainBase_ChainableActionBase__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    byte_4394EE7 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  HIDWORD(v16) = 0;
  v6 = *(_QWORD *)&this->fields.currentIndex;
  LOBYTE(this->fields.children) = value;
  if ( !v6 )
    sub_B7769C(0LL, value);
  method->klass->rgctx_data->_9_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_225C720 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    current = v15.fields.current;
    if ( sub_B77684(v15.fields.current, ActionChainBase_ChainableActionBase__TypeInfo) )
    {
      if ( !sub_B77684(current, ActionChainBase_ChainableActionBase__TypeInfo) )
        sub_B7769C(0LL, v8);
      v9 = (ActionChainBase_T__o *)sub_B77684(current, ActionChainBase_ChainableActionBase__TypeInfo);
      ActionChainBase_object___SetIsPausing(
        v9,
        value,
        (const MethodInfo_269914C *)Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
    }
  }
  v16 = 0x100000054LL;
  _12_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_12_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(_12_System_Collections_Generic_List_Enumerator_T);
  v14.fields.list = (struct System_Collections_Generic_List_T__o *)_12_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &_12_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&_12_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_B0F4C0(&v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int32_t *, _QWORD))p_method)(&v14.fields.index, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v16 == 84 )
    v16 = 84LL;
}


void __fastcall ActionChainBase_object___StartPendingNextAction(
        ActionChainBase_T__o *this,
        const MethodInfo_2699368 *method)
{
  Il2CppObject *current; // x20
  __int64 v5; // x1
  ActionChainBase_T__o *v6; // x0
  Il2CppClass *_12_System_Collections_Generic_List_Enumerator_T; // x19
  unsigned __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+0h] [xbp-60h] BYREF
  __int64 v12; // [xsp+18h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4394EE8 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
    sub_B775C4(&ActionChainBase_ChainableActionBase__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    byte_4394EE8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  HIDWORD(v12) = 0;
  if ( BYTE1(this->fields.children) )
  {
    BYTE1(this->fields.children) = 0;
    ((void (__fastcall *)(ActionChainBase_T__o *))method->klass->rgctx_data->_5_ActionChainBase_T__DoNext->methodPointer)(this);
  }
  if ( !*(_QWORD *)&this->fields.currentIndex )
    sub_B7769C(0LL, method);
  method->klass->rgctx_data->_9_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  v13 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_225C720 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    current = v13.fields.current;
    if ( sub_B77684(v13.fields.current, ActionChainBase_ChainableActionBase__TypeInfo) )
    {
      if ( !sub_B77684(current, ActionChainBase_ChainableActionBase__TypeInfo) )
        sub_B7769C(0LL, v5);
      v6 = (ActionChainBase_T__o *)sub_B77684(current, ActionChainBase_ChainableActionBase__TypeInfo);
      ActionChainBase_object___StartPendingNextAction(
        v6,
        (const MethodInfo_2699368 *)Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
    }
  }
  v12 = 0x100000061LL;
  _12_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_12_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(_12_System_Collections_Generic_List_Enumerator_T);
  v11.fields.list = (struct System_Collections_Generic_List_T__o *)_12_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &_12_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&_12_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_B0F4C0(&v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject **, _QWORD))p_method)(&v11.fields.current, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v12 == 97 )
    v12 = 97LL;
}