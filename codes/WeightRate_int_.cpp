void __fastcall WeightRate_int____ctor(WeightRate_int__o *this, const MethodInfo_29E4118 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WeightRate_int___ReverseWeight(WeightRate_int__o *this, const MethodInfo_29E3DAC *method)
{
  WeightRate_T__c **p_klass; // x19
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x20
  __int64 v5; // x20
  __int64 v6; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  long double v8; // q0
  Il2CppClass *_23_WeightRate___c_T; // x21
  __int16 v10; // w8
  Il2CppClass *v11; // x21
  Il2CppClass *v12; // x21
  Il2CppClass *v13; // x21
  System_Int32_array **v14; // x21
  Il2CppClass *v15; // x21
  __int16 v16; // w8
  Il2CppClass *v17; // x21
  Il2CppClass *v18; // x21
  WeightRate_T__RGCTXs *rgctx_data; // x8
  Il2CppClass *v20; // x21
  Il2CppClass *_25_System_Comparison_WeightRate_WeightSeed_T; // x23
  __int64 v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppClass *v29; // x22
  char *static_fields; // x0
  int v31; // w21
  int v32; // w24
  unsigned int v33; // w22
  int items; // w25
  __int64 v35; // x23

  p_klass = &method->klass;
  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v5 = sub_B2C42C(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  (*p_klass)->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  list = this->fields.list;
  if ( !list
    || (list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))(*p_klass)->rgctx_data->_21_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer)(),
        !v5) )
  {
LABEL_42:
    sub_B2C434(list, v6);
  }
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))(*p_klass)->rgctx_data->_22_System_Collections_Generic_List_WeightRate_WeightSeed_T___AddRange->methodPointer)(
    v5,
    list);
  _23_WeightRate___c_T = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
  v10 = WORD1(_23_WeightRate___c_T->vtable[0].methodPtr);
  if ( (v10 & 1) == 0 )
  {
    sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    v10 = WORD1(_23_WeightRate___c_T->vtable[0].methodPtr);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    if ( !v11->_2.cctor_finished )
    {
      v12 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
      if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
  if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
  v14 = (System_Int32_array **)*((_QWORD *)v13->static_fields + 1);
  if ( !v14 )
  {
    v15 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    v16 = WORD1(v15->vtable[0].methodPtr);
    if ( (v16 & 1) == 0 )
    {
      sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      v16 = WORD1(v15->vtable[0].methodPtr);
    }
    if ( (v16 & 0x400) != 0 )
    {
      v17 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
      if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      if ( !v17->_2.cctor_finished )
      {
        v18 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
        if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
        j_il2cpp_runtime_class_init_0(v18);
      }
    }
    rgctx_data = (*p_klass)->rgctx_data;
    v20 = rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AC505C(rgctx_data->_23_WeightRate___c_T_);
      rgctx_data = (*p_klass)->rgctx_data;
    }
    _25_System_Comparison_WeightRate_WeightSeed_T = rgctx_data->_25_System_Comparison_WeightRate_WeightSeed_T__;
    v22 = *(_QWORD *)v20->static_fields;
    if ( (BYTE2(_25_System_Comparison_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(_25_System_Comparison_WeightRate_WeightSeed_T);
    v14 = (System_Int32_array **)sub_B2C42C(_25_System_Comparison_WeightRate_WeightSeed_T);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))(*p_klass)->rgctx_data->_26_System_Comparison_WeightRate_WeightSeed_T____ctor->methodPointer)(
      v14,
      v22,
      (*p_klass)->rgctx_data->_24_WeightRate___c_T___ReverseWeight_b__11_0);
    v29 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    static_fields = (char *)v29->static_fields;
    *((_QWORD *)static_fields + 1) = v14;
    sub_B2C2F8((BattleServantConfConponent_o *)(static_fields + 8), v14, v23, v24, v25, v26, v27, v28);
  }
  ((void (__fastcall *)(__int64, System_Int32_array **, long double))(*p_klass)->rgctx_data->_27_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
    v5,
    v14,
    v8);
  if ( ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v5) >= 1 )
  {
    v31 = 0;
    v32 = -1;
    do
    {
      v33 = ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v5)
          + v32;
      if ( v31 >= (int)v33 )
        break;
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                     v5,
                                                                                     (unsigned int)v31);
      if ( !list )
        goto LABEL_42;
      items = (int)list->fields._items;
      v35 = ((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
              v5,
              (unsigned int)v31);
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                     v5,
                                                                                     v33);
      if ( !list )
        goto LABEL_42;
      if ( !v35 )
        goto LABEL_42;
      *(_DWORD *)(v35 + 16) = list->fields._items;
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                     v5,
                                                                                     v33);
      if ( !list )
        goto LABEL_42;
      LODWORD(list->fields._items) = items;
      ++v31;
      --v32;
    }
    while ( v31 < ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v5) );
  }
}


void __fastcall WeightRate_int___SetAdjust(WeightRate_int__o *this, const MethodInfo_29E36A0 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  int32_t v5; // w22
  unsigned int v6; // w21
  int items; // w8

  list = this->fields.list;
  if ( !list )
LABEL_9:
    sub_B2C434(list, method);
  v5 = 0;
  v6 = 0;
  while ( (int)v6 < ((__int64 (*)(void))method->klass->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)() )
  {
    list = this->fields.list;
    if ( list )
    {
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD))method->klass->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                     list,
                                                                                     v6);
      if ( list )
      {
        ++LODWORD(list->fields._items);
        list = this->fields.list;
        if ( list )
        {
          list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD))method->klass->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                         list,
                                                                                         v6);
          if ( list )
          {
            items = (int)list->fields._items;
            list = this->fields.list;
            ++v6;
            v5 += items;
            if ( list )
              continue;
          }
        }
      }
    }
    goto LABEL_9;
  }
  this->fields.totalweight = v5;
}


bool __fastcall WeightRate_int___checkWeight(WeightRate_int__o *this, const MethodInfo_29E3670 *method)
{
  return this->fields.totalweight > 0;
}


int32_t __fastcall WeightRate_int___getCount(WeightRate_int__o *this, const MethodInfo_29E3680 *method)
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
        const MethodInfo_29E3764 *method)
{
  int32_t totalweight; // w23
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t klass_high; // w21
  int32_t v10; // w19
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  int v14; // w8
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x20
  unsigned __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  int v21; // [xsp+20h] [xbp-60h] BYREF
  int v22; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4193AC2 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, *(_QWORD *)&keywieght);
    byte_4193AC2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v22 = 0;
  totalweight = this->fields.totalweight;
  v7 = ((__int64 (*)(void))method->klass->rgctx_data->_17_System_Activator_CreateInstance_T_->methodPointer)();
  if ( !this->fields.list )
    sub_B2C434(v7, v8);
  klass_high = v7;
  ((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(this->fields.list);
  v23 = v20;
  while ( 1 )
  {
    v10 = klass_high;
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_20EA42C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v11 )
      break;
    if ( !v23.fields.current )
      sub_B2C434(v11, v12);
    klass_high = HIDWORD(v23.fields.current[1].klass);
    totalweight -= LODWORD(v23.fields.current[1].klass);
    if ( totalweight <= keywieght )
    {
      v14 = 92;
      goto LABEL_10;
    }
  }
  klass_high = 0;
  v14 = 90;
LABEL_10:
  v21 = v14;
  v22 = 1;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T);
  v20.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AC5258(&v20, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(int *, _QWORD))p_method)(&v21, *(_QWORD *)(p_method + 8));
  if ( v21 == 90 )
  {
    v22 = 0;
  }
  else if ( v21 == 92 )
  {
    v22 = 0;
    return klass_high;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WeightRate_int___getData_43923824(
        WeightRate_int__o *this,
        int32_t keyWeight,
        int32_t skipValue,
        const MethodInfo_29E3970 *method)
{
  int32_t totalweight; // w27
  int32_t v9; // w0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x24
  int32_t klass_high; // w20
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x22
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  Il2CppObject *current; // x24
  WeightRate_T__RGCTXs *rgctx_data; // x8
  Il2CppClass *_19_T; // x25
  __int64 v22; // x0
  Il2CppObject *v23; // x25
  Il2CppClass *v24; // x26
  Il2CppObject *v25; // x1
  MethodInfo *_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove; // x2
  int v27; // w25
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x23
  unsigned __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v32; // w22
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  int v36; // w9
  int v37; // w25
  Il2CppClass *v38; // x19
  unsigned __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  int v42; // w9
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+0h] [xbp-A0h] BYREF
  int v45[2]; // [xsp+18h] [xbp-88h]
  __int64 v46; // [xsp+20h] [xbp-80h] BYREF
  int v47; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+30h] [xbp-70h] BYREF
  int32_t v49; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_4193AC3 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, *(_QWORD *)&keyWeight);
    byte_4193AC3 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v47 = 0;
  totalweight = this->fields.totalweight;
  v9 = ((__int64 (*)(void))method->klass->rgctx_data->_17_System_Activator_CreateInstance_T_->methodPointer)();
  list = this->fields.list;
  klass_high = v9;
  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v13 = sub_B2C42C(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  v14 = ((__int64 (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_18_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer)(
          v13,
          list);
  if ( !v13 )
    sub_B2C434(v14, v15);
  ((void (__fastcall *)(__int64))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(v13);
  v48 = v44;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_20EA42C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v16 )
      break;
    current = v48.fields.current;
    if ( !v48.fields.current )
      sub_B2C434(v16, v17);
    rgctx_data = method->klass->rgctx_data;
    LODWORD(v44.fields.list) = HIDWORD(v48.fields.current[1].klass);
    _19_T = rgctx_data->_19_T;
    if ( (BYTE2(_19_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(_19_T);
    v22 = j_il2cpp_value_box_0(_19_T, &v44);
    v49 = skipValue;
    v23 = (Il2CppObject *)v22;
    v24 = method->klass->rgctx_data->_19_T;
    if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->klass->rgctx_data->_19_T);
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(v24, &v49);
    if ( System_Object__Equals_41777196(v23, v25, 0LL) )
    {
      _20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove = method->klass->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove;
      ((void (__fastcall *)(__int64, Il2CppObject *, MethodInfo *))_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove->methodPointer)(
        v13,
        current,
        _20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove);
      break;
    }
  }
  v27 = 1;
  v45[0] = 104;
  v47 = 1;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__);
  v44.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AC5258(&v44, System_IDisposable_TypeInfo, 0LL, v18);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))p_method)(&v46, *(_QWORD *)(p_method + 8));
  if ( v45[0] == 104 )
  {
    v27 = 0;
    v47 = 0;
  }
  ((void (__fastcall *)(__int64))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(v13);
  v48 = v44;
  while ( 1 )
  {
    v32 = klass_high;
    v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_20EA42C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v33 )
      break;
    if ( !v48.fields.current )
      sub_B2C434(v33, v34);
    klass_high = HIDWORD(v48.fields.current[1].klass);
    totalweight -= LODWORD(v48.fields.current[1].klass);
    if ( totalweight <= keyWeight )
    {
      v36 = 182;
      goto LABEL_31;
    }
  }
  klass_high = 0;
  v36 = 180;
LABEL_31:
  v45[v27] = v36;
  v37 = ++v47;
  v38 = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(v38->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(v38);
  v44.fields.list = (struct System_Collections_Generic_List_T__o *)v38;
  if ( *(_WORD *)&v38->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&v38->_2.bitflags1 )
        goto LABEL_37;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_37:
    v41 = sub_AC5258(&v44, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v41)(&v46, *(_QWORD *)(v41 + 8));
  if ( v37 )
  {
    v42 = v45[v37 - 1];
    if ( v42 == 180 )
    {
      v47 = v37 - 1;
    }
    else if ( v42 == 182 )
    {
      v47 = v37 - 1;
      return klass_high;
    }
  }
  return v32;
}


int32_t __fastcall WeightRate_int___getTotalWeight(WeightRate_int__o *this, const MethodInfo_29E3668 *method)
{
  return this->fields.totalweight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_int___removeWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_29E33FC *method)
{
  Il2CppClass *_5_WeightRate___c__DisplayClass4_0_T; // x22
  __int64 v7; // x22
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  Il2CppClass *_8_System_Predicate_WeightRate_WeightSeed_T; // x23
  __int64 v12; // x23
  int32_t v13; // w22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x20
  unsigned __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  __int64 v23; // [xsp+48h] [xbp-28h]

  if ( (byte_4193AC1 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, *(_QWORD *)&t);
    byte_4193AC1 = 1;
  }
  memset(&i, 0, sizeof(i));
  HIDWORD(v23) = 0;
  _5_WeightRate___c__DisplayClass4_0_T = method->klass->rgctx_data->_5_WeightRate___c__DisplayClass4_0_T_;
  if ( (BYTE2(_5_WeightRate___c__DisplayClass4_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_5_WeightRate___c__DisplayClass4_0_T_);
  v7 = sub_B2C42C(_5_WeightRate___c__DisplayClass4_0_T);
  v8 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))method->klass->rgctx_data->_6_WeightRate___c__DisplayClass4_0_T___ctor->methodPointer)();
  if ( !v7 )
    goto LABEL_26;
  *(_DWORD *)(v7 + 16) = t;
  list = this->fields.list;
  _8_System_Predicate_WeightRate_WeightSeed_T = method->klass->rgctx_data->_8_System_Predicate_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_8_System_Predicate_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_8_System_Predicate_WeightRate_WeightSeed_T__);
  v12 = sub_B2C42C(_8_System_Predicate_WeightRate_WeightSeed_T);
  v8 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, __int64, MethodInfo *))method->klass->rgctx_data->_9_System_Predicate_WeightRate_WeightSeed_T____ctor->methodPointer)(
                                                                               v12,
                                                                               v7,
                                                                               method->klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T___removeWeight_b__0);
  if ( !list
    || (((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))method->klass->rgctx_data->_10_System_Collections_Generic_List_WeightRate_WeightSeed_T___RemoveAll->methodPointer)(
          list,
          v12),
        (v8 = this->fields.list) == 0LL) )
  {
LABEL_26:
    sub_B2C434(v8, v9);
  }
  method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer();
  v13 = 0;
  for ( i = v21; ; v13 += LODWORD(i.fields.current[1].klass) )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v14 )
      break;
    if ( !i.fields.current )
      sub_B2C434(v14, v15);
  }
  v23 = 0x10000005FLL;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T);
  v21.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_AC5258(&v21, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(int32_t *, _QWORD))p_method)(&v21.fields.index, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v23 == 95 )
    v23 = 95LL;
  this->fields.totalweight = v13;
}


void __fastcall WeightRate_int___setWeight(
        WeightRate_int__o *this,
        int32_t weight,
        int32_t t,
        const MethodInfo_29E32E0 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x22
  BattleServantConfConponent_o *p_fields; // x24
  int32_t totalweight; // w9
  WeightRate_T__c **p_klass; // x19
  int32_t *p_totalweight; // x8
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x22
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  Il2CppClass *_2_WeightRate_WeightSeed_T; // x23
  __int64 v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1

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
      sub_AC505C(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T);
    v13 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_B2C42C(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T);
    (*p_klass)->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
    this->fields.list = v13;
    sub_B2C2F8(p_fields, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    this->fields.totalweight = 0;
    p_totalweight = &this->fields.totalweight;
    list = this->fields.list;
    totalweight = 0;
  }
  *p_totalweight = totalweight + weight;
  _2_WeightRate_WeightSeed_T = (*p_klass)->rgctx_data->_2_WeightRate_WeightSeed_T_;
  if ( (BYTE2(_2_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C((*p_klass)->rgctx_data->_2_WeightRate_WeightSeed_T_);
  v21 = sub_B2C42C(_2_WeightRate_WeightSeed_T);
  v22 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))(*p_klass)->rgctx_data->_3_WeightRate_WeightSeed_T___ctor->methodPointer)(
          v21,
          (unsigned int)weight,
          (unsigned int)t);
  if ( !list )
    sub_B2C434(v22, v23);
  ((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*p_klass)->rgctx_data->_4_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add->methodPointer)(
    list,
    v21);
}