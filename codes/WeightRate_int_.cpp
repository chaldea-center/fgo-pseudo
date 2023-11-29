void __fastcall WeightRate_int____ctor(WeightRate_int__o *this, const MethodInfo_2ADD274 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WeightRate_int___ReverseWeight(WeightRate_int__o *this, const MethodInfo_2ADCF08 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WeightRate_T__c **p_klass; // x19
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x20
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  long double v14; // q0
  Il2CppClass *_23_WeightRate___c_T; // x21
  __int16 v16; // w8
  Il2CppClass *v17; // x21
  Il2CppClass *v18; // x21
  Il2CppClass *v19; // x21
  System_Int32_array **v20; // x21
  Il2CppClass *v21; // x21
  __int16 v22; // w8
  Il2CppClass *v23; // x21
  Il2CppClass *v24; // x21
  WeightRate_T__RGCTXs *rgctx_data; // x8
  Il2CppClass *v26; // x21
  Il2CppClass *_25_System_Comparison_WeightRate_WeightSeed_T; // x23
  __int64 v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppClass *v35; // x22
  char *static_fields; // x0
  int v37; // w21
  int v38; // w24
  unsigned int v39; // w22
  __int64 v40; // x0
  int v41; // w25
  __int64 v42; // x23
  __int64 v43; // x0
  __int64 v44; // x0

  p_klass = &method->klass;
  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v8 = sub_B170CC(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T, method, v2, v3, v4);
  (*p_klass)->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  if ( !this->fields.list
    || (v9 = ((__int64 (*)(void))(*p_klass)->rgctx_data->_21_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer)(),
        !v8) )
  {
LABEL_42:
    sub_B170D4();
  }
  ((void (__fastcall *)(__int64, __int64))(*p_klass)->rgctx_data->_22_System_Collections_Generic_List_WeightRate_WeightSeed_T___AddRange->methodPointer)(
    v8,
    v9);
  _23_WeightRate___c_T = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
  v16 = WORD1(_23_WeightRate___c_T->vtable[0].methodPtr);
  if ( (v16 & 1) == 0 )
  {
    sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    v16 = WORD1(_23_WeightRate___c_T->vtable[0].methodPtr);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    if ( !v17->_2.cctor_finished )
    {
      v18 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      *(__n128 *)&v14 = j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
  if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
  v20 = (System_Int32_array **)*((_QWORD *)v19->static_fields + 1);
  if ( !v20 )
  {
    v21 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    v22 = WORD1(v21->vtable[0].methodPtr);
    if ( (v22 & 1) == 0 )
    {
      sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      v22 = WORD1(v21->vtable[0].methodPtr);
    }
    if ( (v22 & 0x400) != 0 )
    {
      v23 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
      if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      if ( !v23->_2.cctor_finished )
      {
        v24 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
        if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
        j_il2cpp_runtime_class_init_0(v24);
      }
    }
    rgctx_data = (*p_klass)->rgctx_data;
    v26 = rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AAFCFC(rgctx_data->_23_WeightRate___c_T_);
      rgctx_data = (*p_klass)->rgctx_data;
    }
    _25_System_Comparison_WeightRate_WeightSeed_T = rgctx_data->_25_System_Comparison_WeightRate_WeightSeed_T__;
    v28 = *(_QWORD *)v26->static_fields;
    if ( (BYTE2(_25_System_Comparison_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(_25_System_Comparison_WeightRate_WeightSeed_T);
    v20 = (System_Int32_array **)sub_B170CC(_25_System_Comparison_WeightRate_WeightSeed_T, v10, v11, v12, v13);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))(*p_klass)->rgctx_data->_26_System_Comparison_WeightRate_WeightSeed_T____ctor->methodPointer)(
      v20,
      v28,
      (*p_klass)->rgctx_data->_24_WeightRate___c_T___ReverseWeight_b__11_0);
    v35 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v35->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    static_fields = (char *)v35->static_fields;
    *((_QWORD *)static_fields + 1) = v20;
    sub_B16F98((BattleServantConfConponent_o *)(static_fields + 8), v20, v29, v30, v31, v32, v33, v34);
  }
  ((void (__fastcall *)(__int64, System_Int32_array **, long double))(*p_klass)->rgctx_data->_27_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
    v8,
    v20,
    v14);
  if ( ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v8) >= 1 )
  {
    v37 = 0;
    v38 = -1;
    do
    {
      v39 = ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v8)
          + v38;
      if ( v37 >= (int)v39 )
        break;
      v40 = ((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
              v8,
              (unsigned int)v37);
      if ( !v40 )
        goto LABEL_42;
      v41 = *(_DWORD *)(v40 + 16);
      v42 = ((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
              v8,
              (unsigned int)v37);
      v43 = ((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
              v8,
              v39);
      if ( !v43 )
        goto LABEL_42;
      if ( !v42 )
        goto LABEL_42;
      *(_DWORD *)(v42 + 16) = *(_DWORD *)(v43 + 16);
      v44 = ((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
              v8,
              v39);
      if ( !v44 )
        goto LABEL_42;
      *(_DWORD *)(v44 + 16) = v41;
      ++v37;
      --v38;
    }
    while ( v37 < ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v8) );
  }
}


void __fastcall WeightRate_int___SetAdjust(WeightRate_int__o *this, const MethodInfo_2ADC7FC *method)
{
  int32_t v4; // w22
  unsigned int v5; // w21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  __int64 v7; // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v8; // x0
  __int64 v9; // x0

  if ( !this->fields.list )
LABEL_9:
    sub_B170D4();
  v4 = 0;
  v5 = 0;
  while ( (int)v5 < ((__int64 (*)(void))method->klass->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)() )
  {
    list = this->fields.list;
    if ( list )
    {
      v7 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD))method->klass->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
             list,
             v5);
      if ( v7 )
      {
        ++*(_DWORD *)(v7 + 16);
        v8 = this->fields.list;
        if ( v8 )
        {
          v9 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD))method->klass->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                 v8,
                 v5);
          if ( v9 )
          {
            ++v5;
            v4 += *(_DWORD *)(v9 + 16);
            if ( this->fields.list )
              continue;
          }
        }
      }
    }
    goto LABEL_9;
  }
  this->fields.totalweight = v4;
}


bool __fastcall WeightRate_int___checkWeight(WeightRate_int__o *this, const MethodInfo_2ADC7CC *method)
{
  return this->fields.totalweight > 0;
}


int32_t __fastcall WeightRate_int___getCount(WeightRate_int__o *this, const MethodInfo_2ADC7DC *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0

  list = this->fields.list;
  if ( list )
    LODWORD(list) = ((__int64 (*)(void))method->klass->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)();
  return (int)list;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WeightRate_int___getData(
        WeightRate_int__o *this,
        int32_t keywieght,
        const MethodInfo_2ADC8C0 *method)
{
  int32_t totalweight; // w23
  int32_t v7; // w0
  int32_t klass_high; // w21
  int32_t v9; // w19
  int v10; // w8
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x20
  unsigned __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-78h] BYREF
  int v17; // [xsp+20h] [xbp-60h] BYREF
  int v18; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_41065E3 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, *(_QWORD *)&keywieght);
    byte_41065E3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v18 = 0;
  totalweight = this->fields.totalweight;
  v7 = ((__int64 (*)(void))method->klass->rgctx_data->_17_System_Activator_CreateInstance_T_->methodPointer)();
  if ( !this->fields.list )
    sub_B170D4();
  klass_high = v7;
  ((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(this->fields.list);
  v19 = v16;
  while ( 1 )
  {
    v9 = klass_high;
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext) )
      break;
    if ( !v19.fields.current )
      sub_B170D4();
    klass_high = HIDWORD(v19.fields.current[1].klass);
    totalweight -= LODWORD(v19.fields.current[1].klass);
    if ( totalweight <= keywieght )
    {
      v10 = 92;
      goto LABEL_10;
    }
  }
  klass_high = 0;
  v10 = 90;
LABEL_10:
  v17 = v10;
  v18 = 1;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T);
  v16.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(&v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD))p_method)(&v17, *(_QWORD *)(p_method + 8));
  if ( v17 == 90 )
  {
    v18 = 0;
  }
  else if ( v17 == 92 )
  {
    v18 = 0;
    return klass_high;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WeightRate_int___getData_44944076(
        WeightRate_int__o *this,
        int32_t keyWeight,
        int32_t skipValue,
        const MethodInfo_2ADCACC *method)
{
  int32_t totalweight; // w27
  int32_t v9; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x24
  int32_t klass_high; // w20
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x22
  __int64 v17; // x22
  Il2CppObject *current; // x24
  WeightRate_T__RGCTXs *rgctx_data; // x8
  Il2CppClass *_19_T; // x25
  __int64 v21; // x0
  Il2CppObject *v22; // x25
  Il2CppClass *v23; // x26
  Il2CppObject *v24; // x1
  MethodInfo *_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove; // x2
  int v26; // w25
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x23
  unsigned __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v31; // w22
  int v32; // w9
  int v33; // w25
  Il2CppClass *v34; // x19
  unsigned __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  int v38; // w9
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+0h] [xbp-A0h] BYREF
  int v41[2]; // [xsp+18h] [xbp-88h]
  __int64 v42; // [xsp+20h] [xbp-80h] BYREF
  int v43; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+30h] [xbp-70h] BYREF
  int32_t v45; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_41065E4 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, *(_QWORD *)&keyWeight);
    byte_41065E4 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  totalweight = this->fields.totalweight;
  v9 = ((__int64 (*)(void))method->klass->rgctx_data->_17_System_Activator_CreateInstance_T_->methodPointer)();
  list = this->fields.list;
  klass_high = v9;
  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v17 = sub_B170CC(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T, v10, v11, v12, v13);
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_18_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer)(
    v17,
    list);
  if ( !v17 )
    sub_B170D4();
  ((void (__fastcall *)(__int64))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(v17);
  v44 = v40;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2074054 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext) )
  {
    current = v44.fields.current;
    if ( !v44.fields.current )
      sub_B170D4();
    rgctx_data = method->klass->rgctx_data;
    LODWORD(v40.fields.list) = HIDWORD(v44.fields.current[1].klass);
    _19_T = rgctx_data->_19_T;
    if ( (BYTE2(_19_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(_19_T);
    v21 = j_il2cpp_value_box_0(_19_T, &v40);
    v45 = skipValue;
    v22 = (Il2CppObject *)v21;
    v23 = method->klass->rgctx_data->_19_T;
    if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->klass->rgctx_data->_19_T);
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(v23, &v45);
    if ( System_Object__Equals_41399836(v22, v24, 0LL) )
    {
      _20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove = method->klass->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove;
      ((void (__fastcall *)(__int64, Il2CppObject *, MethodInfo *))_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove->methodPointer)(
        v17,
        current,
        _20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove);
      break;
    }
  }
  v26 = 1;
  v41[0] = 104;
  v43 = 1;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__);
  v40.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AAFEF8(&v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))p_method)(&v42, *(_QWORD *)(p_method + 8));
  if ( v41[0] == 104 )
  {
    v26 = 0;
    v43 = 0;
  }
  ((void (__fastcall *)(__int64))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(v17);
  v44 = v40;
  while ( 1 )
  {
    v31 = klass_high;
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2074054 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext) )
      break;
    if ( !v44.fields.current )
      sub_B170D4();
    klass_high = HIDWORD(v44.fields.current[1].klass);
    totalweight -= LODWORD(v44.fields.current[1].klass);
    if ( totalweight <= keyWeight )
    {
      v32 = 182;
      goto LABEL_31;
    }
  }
  klass_high = 0;
  v32 = 180;
LABEL_31:
  v41[v26] = v32;
  v33 = ++v43;
  v34 = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(v34->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(v34);
  v40.fields.list = (struct System_Collections_Generic_List_T__o *)v34;
  if ( *(_WORD *)&v34->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&v34->_2.bitflags1 )
        goto LABEL_37;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_37:
    v37 = sub_AAFEF8(&v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v37)(&v42, *(_QWORD *)(v37 + 8));
  if ( v33 )
  {
    v38 = v41[v33 - 1];
    if ( v38 == 180 )
    {
      v43 = v33 - 1;
    }
    else if ( v38 == 182 )
    {
      v43 = v33 - 1;
      return klass_high;
    }
  }
  return v31;
}


int32_t __fastcall WeightRate_int___getTotalWeight(WeightRate_int__o *this, const MethodInfo_2ADC7C4 *method)
{
  return this->fields.totalweight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_int___removeWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_2ADC558 *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppClass *_5_WeightRate___c__DisplayClass4_0_T; // x22
  __int64 v9; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  Il2CppClass *_8_System_Predicate_WeightRate_WeightSeed_T; // x23
  __int64 v16; // x23
  int32_t v17; // w22
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x20
  unsigned __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  __int64 v24; // [xsp+48h] [xbp-28h]

  if ( (byte_41065E2 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, *(_QWORD *)&t);
    byte_41065E2 = 1;
  }
  memset(&i, 0, sizeof(i));
  HIDWORD(v24) = 0;
  _5_WeightRate___c__DisplayClass4_0_T = method->klass->rgctx_data->_5_WeightRate___c__DisplayClass4_0_T_;
  if ( (BYTE2(_5_WeightRate___c__DisplayClass4_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_5_WeightRate___c__DisplayClass4_0_T_);
  v9 = sub_B170CC(_5_WeightRate___c__DisplayClass4_0_T, *(_QWORD *)&t, method, v3, v4);
  method->klass->rgctx_data->_6_WeightRate___c__DisplayClass4_0_T___ctor->methodPointer();
  if ( !v9 )
    goto LABEL_26;
  *(_DWORD *)(v9 + 16) = t;
  list = this->fields.list;
  _8_System_Predicate_WeightRate_WeightSeed_T = method->klass->rgctx_data->_8_System_Predicate_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_8_System_Predicate_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_8_System_Predicate_WeightRate_WeightSeed_T__);
  v16 = sub_B170CC(_8_System_Predicate_WeightRate_WeightSeed_T, v10, v11, v12, v13);
  ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->klass->rgctx_data->_9_System_Predicate_WeightRate_WeightSeed_T____ctor->methodPointer)(
    v16,
    v9,
    method->klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T___removeWeight_b__0);
  if ( !list
    || (((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))method->klass->rgctx_data->_10_System_Collections_Generic_List_WeightRate_WeightSeed_T___RemoveAll->methodPointer)(
          list,
          v16),
        !this->fields.list) )
  {
LABEL_26:
    sub_B170D4();
  }
  method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer();
  v17 = 0;
  for ( i = v22;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
        v17 += LODWORD(i.fields.current[1].klass) )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  v24 = 0x10000005FLL;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T);
  v22.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_AAFEF8(&v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int32_t *, _QWORD))p_method)(&v22.fields.index, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v24 == 95 )
    v24 = 95LL;
  this->fields.totalweight = v17;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_int___setWeight(
        WeightRate_int__o *this,
        int32_t weight,
        int32_t t,
        const MethodInfo_2ADC43C *method)
{
  __int64 v4; // x4
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x22
  BattleServantConfConponent_o *p_fields; // x24
  int32_t totalweight; // w9
  WeightRate_T__c **p_klass; // x19
  int32_t *p_totalweight; // x8
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x22
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  Il2CppClass *_2_WeightRate_WeightSeed_T; // x23
  __int64 v22; // x23

  p_fields = (BattleServantConfConponent_o *)&this->fields;
  list = this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
    p_klass = &method->klass;
    p_totalweight = &this->fields.totalweight;
  }
  else
  {
    p_klass = &method->klass;
    _0_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
    if ( (BYTE2(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T);
    v14 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_B170CC(
                                                                                  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                                                  *(_QWORD *)&weight,
                                                                                  *(_QWORD *)&t,
                                                                                  method,
                                                                                  v4);
    (*p_klass)->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
    this->fields.list = v14;
    sub_B16F98(p_fields, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    this->fields.totalweight = 0;
    p_totalweight = &this->fields.totalweight;
    list = this->fields.list;
    totalweight = 0;
  }
  *p_totalweight = totalweight + weight;
  _2_WeightRate_WeightSeed_T = (*p_klass)->rgctx_data->_2_WeightRate_WeightSeed_T_;
  if ( (BYTE2(_2_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC((*p_klass)->rgctx_data->_2_WeightRate_WeightSeed_T_);
  v22 = sub_B170CC(_2_WeightRate_WeightSeed_T, *(_QWORD *)&weight, *(_QWORD *)&t, method, v4);
  ((void (__fastcall *)(__int64, _QWORD, _QWORD))(*p_klass)->rgctx_data->_3_WeightRate_WeightSeed_T___ctor->methodPointer)(
    v22,
    (unsigned int)weight,
    (unsigned int)t);
  if ( !list )
    sub_B170D4();
  ((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*p_klass)->rgctx_data->_4_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add->methodPointer)(
    list,
    v22);
}