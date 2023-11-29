void __fastcall ActionChainBase_object____ctor(
        ActionChainBase_T__o *this,
        System_Object_array *chains,
        const MethodInfo_24B0C28 *method)
{
  if ( !this )
    sub_B170D4();
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
        const MethodInfo_24B0D0C *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ActionChainBase_T__o *v7; // x21
  signed int max_length; // w8
  unsigned int v9; // w24
  Il2CppObject *v10; // x22
  System_Action_o *v11; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0

  v7 = this;
  if ( (byte_410278A & 1) == 0 )
  {
    this = (ActionChainBase_T__o *)sub_B16FFC(&System_Action_TypeInfo, chainElems);
    byte_410278A = 1;
  }
  if ( !v7 )
    goto LABEL_13;
  if ( !v7->fields._IsExecuted_k__BackingField )
  {
    if ( !chainElems )
      goto LABEL_13;
    max_length = chainElems->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
        {
          sub_B17100(this, chainElems, method);
          sub_B170A0();
        }
        v10 = chainElems->m_Items[v9];
        v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, chainElems, method, v3, v4);
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          (intptr_t)method->klass->rgctx_data->_5_ActionChainBase_T__DoNext,
          0LL);
        if ( !v10 )
          break;
        v10[1].monitor = v11;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v10[1].monitor,
          (System_Int32_array **)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        v18 = *(_QWORD *)&v7->fields.currentIndex;
        if ( !v18 )
          break;
        this = (ActionChainBase_T__o *)((__int64 (__fastcall *)(__int64, Il2CppObject *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
                                         v18,
                                         v10);
        max_length = chainElems->max_length;
        if ( (int)++v9 >= max_length )
          return v7;
      }
LABEL_13:
      sub_B170D4();
    }
  }
  return v7;
}


void __fastcall ActionChainBase_object___DoNext(ActionChainBase_T__o *this, const MethodInfo_24B1300 *method)
{
  int v3; // w8
  __int64 v4; // x0
  __int64 v6; // x0
  __int64 v7; // x1

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
    v6 = *(_QWORD *)&this->fields.currentIndex;
    if ( v6 )
    {
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD))method->klass->rgctx_data->_14_System_Collections_Generic_List_T__get_Item->methodPointer)(
             v6,
             *((unsigned int *)&this->fields._IsExecuted_k__BackingField + 1));
      ((void (__fastcall *)(ActionChainBase_T__o *, __int64, const char *))this->klass[1]._1.gc_desc)(
        this,
        v7,
        this->klass[1]._1.name);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppMethodPointer))this->klass->vtable._5_End.method)(
    this,
    this->klass->vtable._6_Init.methodPtr);
}


void __fastcall ActionChainBase_object___ExecuteOnDetail(ActionChainBase_T__o *this, const MethodInfo_24B12DC *method)
{
  if ( !this )
    sub_B170D4();
  method->klass->rgctx_data->_5_ActionChainBase_T__DoNext->methodPointer();
}


void __fastcall ActionChainBase_object___Init(ActionChainBase_T__o *this, const MethodInfo_24B0C8C *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppClass *_2_System_Collections_Generic_List_T; // x21
  __int64 v8; // x0
  ActionChainBase_T__c *klass; // x8
  System_Int32_array **v10; // x20
  int32_t *p_currentIndex; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = -1;
  _2_System_Collections_Generic_List_T = method->klass->rgctx_data->_2_System_Collections_Generic_List_T_;
  if ( (BYTE2(_2_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_2_System_Collections_Generic_List_T_);
  v8 = sub_B170CC(_2_System_Collections_Generic_List_T, method, v2, v3, v4);
  klass = method->klass;
  v10 = (System_Int32_array **)v8;
  klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor->methodPointer();
  *(_QWORD *)&this->fields.currentIndex = v10;
  p_currentIndex = &this->fields.currentIndex;
  sub_B16F98((BattleServantConfConponent_o *)p_currentIndex, v10, v12, v13, v14, v15, v16, v17);
  *((_WORD *)p_currentIndex + 4) = 0;
}


void __fastcall ActionChainBase_object___PauseNext(ActionChainBase_T__o *this, const MethodInfo_24B0E1C *method)
{
  if ( !this )
    sub_B170D4();
  ((void (__fastcall *)(ActionChainBase_T__o *, __int64))method->klass->rgctx_data->_7_ActionChainBase_T__SetIsPausing->methodPointer)(
    this,
    1LL);
}


void __fastcall ActionChainBase_object___ResumeNext(ActionChainBase_T__o *this, const MethodInfo_24B0E44 *method)
{
  if ( !this )
    sub_B170D4();
  ((void (__fastcall *)(ActionChainBase_T__o *, _QWORD))method->klass->rgctx_data->_7_ActionChainBase_T__SetIsPausing->methodPointer)(
    this,
    0LL);
  ((void (__fastcall *)(ActionChainBase_T__o *))method->klass->rgctx_data->_8_ActionChainBase_T__StartPendingNextAction->methodPointer)(this);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ActionChainBase_object___SetIsPausing(
        ActionChainBase_T__o *this,
        bool value,
        const MethodInfo_24B0E98 *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  Il2CppObject *current; // x21
  ActionChainBase_T__o *v10; // x0
  Il2CppClass *_12_System_Collections_Generic_List_Enumerator_T; // x19
  unsigned __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF
  __int64 v17; // [xsp+48h] [xbp-28h]

  if ( (byte_410278B & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionChainBase_ChainableActionBase__SetIsPausing__, value);
    sub_B16FFC(&ActionChainBase_ChainableActionBase__TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    byte_410278B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  HIDWORD(v17) = 0;
  v8 = *(_QWORD *)&this->fields.currentIndex;
  LOBYTE(this->fields.children) = value;
  if ( !v8 )
    sub_B170D4();
  method->klass->rgctx_data->_9_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    current = v16.fields.current;
    if ( sub_B170BC(v16.fields.current, ActionChainBase_ChainableActionBase__TypeInfo) )
    {
      if ( !sub_B170BC(current, ActionChainBase_ChainableActionBase__TypeInfo) )
        sub_B170D4();
      v10 = (ActionChainBase_T__o *)sub_B170BC(current, ActionChainBase_ChainableActionBase__TypeInfo);
      ActionChainBase_object___SetIsPausing(
        v10,
        value,
        (const MethodInfo_24B0E98 *)Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
    }
  }
  v17 = 0x100000054LL;
  _12_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_12_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_12_System_Collections_Generic_List_Enumerator_T);
  v15.fields.list = (struct System_Collections_Generic_List_T__o *)_12_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &_12_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&_12_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AAFEF8(&v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int32_t *, _QWORD))p_method)(&v15.fields.index, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v17 == 84 )
    v17 = 84LL;
}


void __fastcall ActionChainBase_object___StartPendingNextAction(
        ActionChainBase_T__o *this,
        const MethodInfo_24B10B4 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *current; // x20
  ActionChainBase_T__o *v7; // x0
  Il2CppClass *_12_System_Collections_Generic_List_Enumerator_T; // x19
  unsigned __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+0h] [xbp-60h] BYREF
  __int64 v13; // [xsp+18h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_410278C & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__, method);
    sub_B16FFC(&ActionChainBase_ChainableActionBase__TypeInfo, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    byte_410278C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  HIDWORD(v13) = 0;
  if ( BYTE1(this->fields.children) )
  {
    BYTE1(this->fields.children) = 0;
    ((void (__fastcall *)(ActionChainBase_T__o *))method->klass->rgctx_data->_5_ActionChainBase_T__DoNext->methodPointer)(this);
  }
  if ( !*(_QWORD *)&this->fields.currentIndex )
    sub_B170D4();
  method->klass->rgctx_data->_9_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  v14 = v12;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    current = v14.fields.current;
    if ( sub_B170BC(v14.fields.current, ActionChainBase_ChainableActionBase__TypeInfo) )
    {
      if ( !sub_B170BC(current, ActionChainBase_ChainableActionBase__TypeInfo) )
        sub_B170D4();
      v7 = (ActionChainBase_T__o *)sub_B170BC(current, ActionChainBase_ChainableActionBase__TypeInfo);
      ActionChainBase_object___StartPendingNextAction(
        v7,
        (const MethodInfo_24B10B4 *)Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
    }
  }
  v13 = 0x100000061LL;
  _12_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_12_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_12_System_Collections_Generic_List_Enumerator_T);
  v12.fields.list = (struct System_Collections_Generic_List_T__o *)_12_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &_12_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&_12_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&_12_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AAFEF8(&v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject **, _QWORD))p_method)(&v12.fields.current, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v13 == 97 )
    v13 = 97LL;
}