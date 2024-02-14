void __fastcall WeightRate_object____ctor(WeightRate_T__o *this, const MethodInfo_2ADFE74 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WeightRate_object___ReverseWeight(WeightRate_T__o *this, const MethodInfo_2ADFB08 *method)
{
  __int64 v2; // x2
  WeightRate_T__c **p_klass; // x19
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x20
  __int64 v6; // x20
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  long double v10; // q0
  Il2CppClass *_23_WeightRate___c_T; // x21
  __int16 v12; // w8
  Il2CppClass *v13; // x21
  Il2CppClass *v14; // x21
  Il2CppClass *v15; // x21
  System_Int32_array **v16; // x21
  Il2CppClass *v17; // x21
  __int16 v18; // w8
  Il2CppClass *v19; // x21
  Il2CppClass *v20; // x21
  WeightRate_T__RGCTXs *rgctx_data; // x8
  Il2CppClass *v22; // x21
  Il2CppClass *_25_System_Comparison_WeightRate_WeightSeed_T; // x23
  __int64 v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  Il2CppClass *v31; // x22
  char *static_fields; // x0
  int v33; // w21
  int v34; // w24
  unsigned int v35; // w22
  int items; // w25
  __int64 v37; // x23

  p_klass = &method->klass;
  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v6 = sub_B0D974(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T, method, v2);
  (*p_klass)->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  list = this->fields.list;
  if ( !list
    || (list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))(*p_klass)->rgctx_data->_21_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer)(),
        !v6) )
  {
LABEL_42:
    sub_B0D97C(list);
  }
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))(*p_klass)->rgctx_data->_22_System_Collections_Generic_List_WeightRate_WeightSeed_T___AddRange->methodPointer)(
    v6,
    list);
  _23_WeightRate___c_T = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
  v12 = WORD1(_23_WeightRate___c_T->vtable[0].methodPtr);
  if ( (v12 & 1) == 0 )
  {
    sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    v12 = WORD1(_23_WeightRate___c_T->vtable[0].methodPtr);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    if ( !v13->_2.cctor_finished )
    {
      v14 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
      if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
  if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
  v16 = (System_Int32_array **)*((_QWORD *)v15->static_fields + 1);
  if ( !v16 )
  {
    v17 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    v18 = WORD1(v17->vtable[0].methodPtr);
    if ( (v18 & 1) == 0 )
    {
      sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      v18 = WORD1(v17->vtable[0].methodPtr);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
      if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
      if ( !v19->_2.cctor_finished )
      {
        v20 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
        if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
          sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    rgctx_data = (*p_klass)->rgctx_data;
    v22 = rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AA65A4(rgctx_data->_23_WeightRate___c_T_);
      rgctx_data = (*p_klass)->rgctx_data;
    }
    _25_System_Comparison_WeightRate_WeightSeed_T = rgctx_data->_25_System_Comparison_WeightRate_WeightSeed_T__;
    v24 = *(_QWORD *)v22->static_fields;
    if ( (BYTE2(_25_System_Comparison_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(_25_System_Comparison_WeightRate_WeightSeed_T);
    v16 = (System_Int32_array **)sub_B0D974(_25_System_Comparison_WeightRate_WeightSeed_T, v8, v9);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))(*p_klass)->rgctx_data->_26_System_Comparison_WeightRate_WeightSeed_T____ctor->methodPointer)(
      v16,
      v24,
      (*p_klass)->rgctx_data->_24_WeightRate___c_T___ReverseWeight_b__11_0);
    v31 = (*p_klass)->rgctx_data->_23_WeightRate___c_T_;
    if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4((*p_klass)->rgctx_data->_23_WeightRate___c_T_);
    static_fields = (char *)v31->static_fields;
    *((_QWORD *)static_fields + 1) = v16;
    sub_B0D840((BattleServantConfConponent_o *)(static_fields + 8), v16, v25, v26, v27, v28, v29, v30);
  }
  ((void (__fastcall *)(__int64, System_Int32_array **, long double))(*p_klass)->rgctx_data->_27_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
    v6,
    v16,
    v10);
  if ( ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v6) >= 1 )
  {
    v33 = 0;
    v34 = -1;
    do
    {
      v35 = ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v6)
          + v34;
      if ( v33 >= (int)v35 )
        break;
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                     v6,
                                                                                     (unsigned int)v33);
      if ( !list )
        goto LABEL_42;
      items = (int)list->fields._items;
      v37 = ((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
              v6,
              (unsigned int)v33);
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                     v6,
                                                                                     v35);
      if ( !list )
        goto LABEL_42;
      if ( !v37 )
        goto LABEL_42;
      *(_DWORD *)(v37 + 16) = list->fields._items;
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, _QWORD))(*p_klass)->rgctx_data->_16_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(
                                                                                     v6,
                                                                                     v35);
      if ( !list )
        goto LABEL_42;
      LODWORD(list->fields._items) = items;
      ++v33;
      --v34;
    }
    while ( v33 < ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)(v6) );
  }
}


void __fastcall WeightRate_object___SetAdjust(WeightRate_T__o *this, const MethodInfo_2ADF45C *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  int32_t v5; // w22
  unsigned int v6; // w21
  int items; // w8

  list = this->fields.list;
  if ( !list )
LABEL_9:
    sub_B0D97C(list);
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


bool __fastcall WeightRate_object___checkWeight(WeightRate_T__o *this, const MethodInfo_2ADF42C *method)
{
  return this->fields.totalweight > 0;
}


int32_t __fastcall WeightRate_object___getCount(WeightRate_T__o *this, const MethodInfo_2ADF43C *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0

  list = this->fields.list;
  if ( list )
    LODWORD(list) = ((__int64 (*)(void))method->klass->rgctx_data->_15_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count->methodPointer)();
  return (int)list;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall WeightRate_object___getData(
        WeightRate_T__o *this,
        int32_t keywieght,
        const MethodInfo_2ADF520 *method)
{
  int32_t totalweight; // w23
  __int64 v7; // x0
  Il2CppObject *monitor; // x21
  Il2CppObject *v9; // x19
  _BOOL8 v10; // x0
  int v11; // w8
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x20
  unsigned __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  int v18; // [xsp+20h] [xbp-60h] BYREF
  int v19; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4221754 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, *(_QWORD *)&keywieght);
    byte_4221754 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v19 = 0;
  totalweight = this->fields.totalweight;
  v7 = ((__int64 (*)(void))method->klass->rgctx_data->_17_System_Activator_CreateInstance_T_->methodPointer)();
  if ( !this->fields.list )
    sub_B0D97C(v7);
  monitor = (Il2CppObject *)v7;
  ((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(this->fields.list);
  v20 = v17;
  while ( 1 )
  {
    v9 = monitor;
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v10 )
      break;
    if ( !v20.fields.current )
      sub_B0D97C(v10);
    monitor = (Il2CppObject *)v20.fields.current[1].monitor;
    totalweight -= LODWORD(v20.fields.current[1].klass);
    if ( totalweight <= keywieght )
    {
      v11 = 92;
      goto LABEL_10;
    }
  }
  monitor = 0LL;
  v11 = 90;
LABEL_10:
  v18 = v11;
  v19 = 1;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T);
  v17.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AA67A0(&v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD))p_method)(&v18, *(_QWORD *)(p_method + 8));
  if ( v18 == 90 )
  {
    v19 = 0;
  }
  else if ( v18 == 92 )
  {
    v19 = 0;
    return monitor;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall WeightRate_object___getData_44955440(
        WeightRate_T__o *this,
        int32_t keyWeight,
        Il2CppObject *skipValue,
        const MethodInfo_2ADF730 *method)
{
  int32_t totalweight; // w25
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x24
  Il2CppObject *monitor; // x20
  Il2CppClass *_0_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x22
  __int64 v15; // x22
  __int64 v16; // x0
  _BOOL8 v17; // x0
  Il2CppObject *current; // x24
  MethodInfo *_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove; // x2
  int v20; // w26
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x23
  unsigned __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v25; // x22
  _BOOL8 v26; // x0
  int v27; // w9
  int v28; // w26
  Il2CppClass *v29; // x19
  unsigned __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  int v33; // w9
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+0h] [xbp-A0h] BYREF
  int v36[2]; // [xsp+18h] [xbp-88h]
  __int64 v37; // [xsp+20h] [xbp-80h] BYREF
  int v38; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4221755 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, *(_QWORD *)&keyWeight);
    byte_4221755 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v38 = 0;
  totalweight = this->fields.totalweight;
  v9 = ((__int64 (*)(void))method->klass->rgctx_data->_17_System_Activator_CreateInstance_T_->methodPointer)();
  list = this->fields.list;
  monitor = (Il2CppObject *)v9;
  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_0_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v15 = sub_B0D974(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T, v10, v11);
  v16 = ((__int64 (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_18_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer)(
          v15,
          list);
  if ( !v15 )
    sub_B0D97C(v16);
  ((void (__fastcall *)(__int64))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(v15);
  v39 = v35;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2112550 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v17 )
      break;
    current = v39.fields.current;
    if ( !v39.fields.current )
      sub_B0D97C(v17);
    if ( System_Object__Equals_41566560((Il2CppObject *)v39.fields.current[1].monitor, skipValue, 0LL) )
    {
      _20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove = method->klass->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove;
      ((void (__fastcall *)(__int64, Il2CppObject *, MethodInfo *))_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove->methodPointer)(
        v15,
        current,
        _20_System_Collections_Generic_List_WeightRate_WeightSeed_T___Remove);
      break;
    }
  }
  v20 = 1;
  v36[0] = 104;
  v38 = 1;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__);
  v35.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AA67A0(&v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))p_method)(&v37, *(_QWORD *)(p_method + 8));
  if ( v36[0] == 104 )
  {
    v20 = 0;
    v38 = 0;
  }
  ((void (__fastcall *)(__int64))method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer)(v15);
  v39 = v35;
  while ( 1 )
  {
    v25 = monitor;
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2112550 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v26 )
      break;
    if ( !v39.fields.current )
      sub_B0D97C(v26);
    monitor = (Il2CppObject *)v39.fields.current[1].monitor;
    totalweight -= LODWORD(v39.fields.current[1].klass);
    if ( totalweight <= keyWeight )
    {
      v27 = 182;
      goto LABEL_27;
    }
  }
  monitor = 0LL;
  v27 = 180;
LABEL_27:
  v36[v20] = v27;
  v28 = ++v38;
  v29 = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(v29);
  v35.fields.list = (struct System_Collections_Generic_List_T__o *)v29;
  if ( *(_WORD *)&v29->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&v29->_2.bitflags1 )
        goto LABEL_33;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_33:
    v32 = sub_AA67A0(&v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v32)(&v37, *(_QWORD *)(v32 + 8));
  if ( v28 )
  {
    v33 = v36[v28 - 1];
    if ( v33 == 180 )
    {
      v38 = v28 - 1;
    }
    else if ( v33 == 182 )
    {
      v38 = v28 - 1;
      return monitor;
    }
  }
  return v25;
}


int32_t __fastcall WeightRate_object___getTotalWeight(WeightRate_T__o *this, const MethodInfo_2ADF424 *method)
{
  return this->fields.totalweight;
}


void __fastcall WeightRate_object___removeWeight(
        WeightRate_T__o *this,
        Il2CppObject *t,
        const MethodInfo_2ADF1AC *method)
{
  Il2CppClass *_5_WeightRate___c__DisplayClass4_0_T; // x22
  __int64 v7; // x22
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  Il2CppClass *_8_System_Predicate_WeightRate_WeightSeed_T; // x23
  __int64 v19; // x23
  int32_t v20; // w22
  _BOOL8 v21; // x0
  Il2CppClass *_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T; // x20
  unsigned __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  __int64 v28; // [xsp+48h] [xbp-28h]

  if ( (byte_4221753 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, t);
    byte_4221753 = 1;
  }
  memset(&i, 0, sizeof(i));
  HIDWORD(v28) = 0;
  _5_WeightRate___c__DisplayClass4_0_T = method->klass->rgctx_data->_5_WeightRate___c__DisplayClass4_0_T_;
  if ( (BYTE2(_5_WeightRate___c__DisplayClass4_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_5_WeightRate___c__DisplayClass4_0_T_);
  v7 = sub_B0D974(_5_WeightRate___c__DisplayClass4_0_T, t, method);
  v8 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))method->klass->rgctx_data->_6_WeightRate___c__DisplayClass4_0_T___ctor->methodPointer)();
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = t;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)t, v9, v10, v11, v12, v13, v14);
  list = this->fields.list;
  _8_System_Predicate_WeightRate_WeightSeed_T = method->klass->rgctx_data->_8_System_Predicate_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_8_System_Predicate_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_8_System_Predicate_WeightRate_WeightSeed_T__);
  v19 = sub_B0D974(_8_System_Predicate_WeightRate_WeightSeed_T, v15, v16);
  v8 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (__fastcall *)(__int64, __int64, MethodInfo *))method->klass->rgctx_data->_9_System_Predicate_WeightRate_WeightSeed_T____ctor->methodPointer)(
                                                                               v19,
                                                                               v7,
                                                                               method->klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T___removeWeight_b__0);
  if ( !list
    || (((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))method->klass->rgctx_data->_10_System_Collections_Generic_List_WeightRate_WeightSeed_T___RemoveAll->methodPointer)(
          list,
          v19),
        (v8 = this->fields.list) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(v8);
  }
  method->klass->rgctx_data->_11_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer();
  v20 = 0;
  for ( i = v26; ; v20 += LODWORD(i.fields.current[1].klass) )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v21 )
      break;
    if ( !i.fields.current )
      sub_B0D97C(v21);
  }
  v28 = 0x10000005FLL;
  _14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T = method->klass->rgctx_data->_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T__;
  if ( (BYTE2(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T);
  v26.fields.list = (struct System_Collections_Generic_List_T__o *)_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T;
  if ( *(_WORD *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&_14_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_AA67A0(&v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int32_t *, _QWORD))p_method)(&v26.fields.index, *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v28 == 95 )
    v28 = 95LL;
  this->fields.totalweight = v20;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_object___setWeight(
        WeightRate_T__o *this,
        int32_t weight,
        Il2CppObject *t,
        const MethodInfo_2ADF090 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x22
  WeightRate_T__Fields *p_fields; // x24
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

  p_fields = &this->fields;
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
      sub_AA65A4(_0_System_Collections_Generic_List_WeightRate_WeightSeed_T);
    v13 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_B0D974(
                                                                                  _0_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                                                  *(_QWORD *)&weight,
                                                                                  t);
    (*p_klass)->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
    this->fields.list = v13;
    sub_B0D840((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    this->fields.totalweight = 0;
    p_totalweight = &this->fields.totalweight;
    list = this->fields.list;
    totalweight = 0;
  }
  *p_totalweight = totalweight + weight;
  _2_WeightRate_WeightSeed_T = (*p_klass)->rgctx_data->_2_WeightRate_WeightSeed_T_;
  if ( (BYTE2(_2_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4((*p_klass)->rgctx_data->_2_WeightRate_WeightSeed_T_);
  v21 = sub_B0D974(_2_WeightRate_WeightSeed_T, *(_QWORD *)&weight, t);
  v22 = ((__int64 (__fastcall *)(__int64, _QWORD, Il2CppObject *))(*p_klass)->rgctx_data->_3_WeightRate_WeightSeed_T___ctor->methodPointer)(
          v21,
          (unsigned int)weight,
          t);
  if ( !list )
    sub_B0D97C(v22);
  ((void (__fastcall *)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*p_klass)->rgctx_data->_4_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add->methodPointer)(
    list,
    v21);
}