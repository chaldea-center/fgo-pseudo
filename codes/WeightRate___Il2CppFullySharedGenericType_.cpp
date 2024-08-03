void __fastcall WeightRate___Il2CppFullySharedGenericType____ctor(
        WeightRate_T__o *this,
        const MethodInfo_388D9BC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WeightRate___Il2CppFullySharedGenericType___ReverseWeight(
        WeightRate_T__o *this,
        const MethodInfo_388D62C *method)
{
  __int64 v2; // x2
  WeightRate_T__c **p_klass; // x19
  Il2CppClass *_1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  __int64 v6; // x20
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  long double inited; // q0
  __int64 _31_WeightRate___c_T___ReverseWeight_b__11_0; // x0
  __int64 v12; // x0
  __int64 v13; // x21
  __int64 v14; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v16; // x0
  __int64 _30_WeightRate___c_T; // x8
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  WeightRate_T__RGCTXs *v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  int v24; // w23
  int v25; // w24
  int v26; // w26
  MethodInfo *_21_System_Activator_CreateInstance_T; // x1
  void (__fastcall *methodPointer)(); // x0
  unsigned int v29; // w21
  MethodInfo *v30; // x1
  void (__fastcall *v31)(); // x0
  __int64 v32; // x22
  MethodInfo *v33; // x1
  void (__fastcall *v34)(); // x0
  MethodInfo *v35; // x1
  void (__fastcall *v36)(); // x0
  int *v37; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v38; // [xsp+8h] [xbp-58h] BYREF
  int v39; // [xsp+1Ch] [xbp-44h] BYREF

  p_klass = &method->klass;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE5(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v6 = sub_1B64314(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T, method, v2);
  (*p_klass)->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  list = this->fields.list;
  if ( !list
    || (list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))(*p_klass)->rgctx_data->_26_WeightRate_WeightSeed_T___->_1.image)(),
        !v6) )
  {
LABEL_32:
    sub_1B64324(list);
  }
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))(*p_klass)->rgctx_data->_28_WeightRate___c_T_->_1.image)(
    v6,
    list);
  _31_WeightRate___c_T___ReverseWeight_b__11_0 = (__int64)(*p_klass)->rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
  if ( (*(_BYTE *)(_31_WeightRate___c_T___ReverseWeight_b__11_0 + 309) & 1) == 0 )
    _31_WeightRate___c_T___ReverseWeight_b__11_0 = sub_1BB5FA4(_31_WeightRate___c_T___ReverseWeight_b__11_0);
  if ( !*(_DWORD *)(_31_WeightRate___c_T___ReverseWeight_b__11_0 + 224) )
    inited = j_il2cpp_runtime_class_init_0(_31_WeightRate___c_T___ReverseWeight_b__11_0);
  v12 = (__int64)(*p_klass)->rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 184) + 8LL);
  if ( !v13 )
  {
    v14 = (__int64)(*p_klass)->rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BB5FA4(v14);
    if ( !*(_DWORD *)(v14 + 224) )
      j_il2cpp_runtime_class_init_0(v14);
    rgctx_data = (*p_klass)->rgctx_data;
    v16 = (__int64)rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    {
      v16 = sub_1BB5FA4(v16);
      rgctx_data = (*p_klass)->rgctx_data;
    }
    _30_WeightRate___c_T = (__int64)rgctx_data->_30_WeightRate___c_T_;
    v18 = **(_QWORD **)(v16 + 184);
    if ( (*(_BYTE *)(_30_WeightRate___c_T + 309) & 1) == 0 )
      _30_WeightRate___c_T = sub_1BB5FA4(_30_WeightRate___c_T);
    v13 = sub_1B64314(_30_WeightRate___c_T, v8, v9);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))(*p_klass)->rgctx_data->_33_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
      v13,
      v18,
      (*p_klass)->rgctx_data->_32_System_Comparison_WeightRate_WeightSeed_T____ctor);
    v21 = (*p_klass)->rgctx_data;
    v22 = (__int64)v21->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    {
      v22 = sub_1BB5FA4(v22);
      v21 = (*p_klass)->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v22 + 184) + 8LL) = v13;
    v23 = (__int64)v21->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1BB5FA4(v23);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(*(_QWORD *)(v23 + 184) + 8LL), v13, v19, v20);
  }
  ((void (__fastcall *)(__int64, __int64, long double))(*p_klass)->rgctx_data[1]._0_WeightRate_T_->_1.image)(
    v6,
    v13,
    inited);
  if ( ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v6) >= 1 )
  {
    v24 = 0;
    v25 = -1;
    do
    {
      v26 = ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v6)
          + v25;
      if ( v24 >= v26 )
        break;
      _21_System_Activator_CreateInstance_T = (*p_klass)->rgctx_data->_21_System_Activator_CreateInstance_T_;
      methodPointer = _21_System_Activator_CreateInstance_T->methodPointer;
      v39 = v24;
      v37 = &v39;
      _21_System_Activator_CreateInstance_T->invoker_method(
        methodPointer,
        _21_System_Activator_CreateInstance_T,
        (void *)v6,
        (void **)&v37,
        &v38);
      v29 = *(_DWORD *)sub_1B640EC(v38, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      v30 = (*p_klass)->rgctx_data->_21_System_Activator_CreateInstance_T_;
      v31 = v30->methodPointer;
      v39 = v24;
      v37 = &v39;
      v30->invoker_method(v31, v30, (void *)v6, (void **)&v37, &v38);
      v32 = (__int64)v38;
      v33 = (*p_klass)->rgctx_data->_21_System_Activator_CreateInstance_T_;
      v34 = v33->methodPointer;
      v39 = v26;
      v37 = &v39;
      v33->invoker_method(v34, v33, (void *)v6, (void **)&v37, &v38);
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1B640EC(
                                                                                     v38,
                                                                                     (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( !v32 )
        goto LABEL_32;
      sub_19B6620(v32, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, LODWORD(list->klass));
      v35 = (*p_klass)->rgctx_data->_21_System_Activator_CreateInstance_T_;
      v36 = v35->methodPointer;
      v39 = v26;
      v37 = &v39;
      v35->invoker_method(v36, v35, (void *)v6, (void **)&v37, &v38);
      list = v38;
      if ( !v38 )
        goto LABEL_32;
      sub_19B6620(v38, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, v29);
      ++v24;
      --v25;
    }
    while ( v24 < ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v6) );
  }
}


void __fastcall WeightRate___Il2CppFullySharedGenericType___SetAdjust(
        WeightRate_T__o *this,
        const MethodInfo_388CD04 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  int32_t v5; // w22
  int v6; // w23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v7; // x2
  MethodInfo *_21_System_Activator_CreateInstance_T; // x1
  void (__fastcall *methodPointer)(); // x0
  __int64 v10; // x21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v11; // x2
  MethodInfo *v12; // x1
  void (__fastcall *v13)(); // x0
  int v14; // w8
  int *v15; // [xsp+0h] [xbp-50h] BYREF
  __int64 v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+1Ch] [xbp-34h] BYREF

  list = this->fields.list;
  if ( !list )
LABEL_8:
    sub_1B64324(list);
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))method->klass->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)();
    if ( v6 >= (int)list )
      break;
    v7 = this->fields.list;
    if ( v7 )
    {
      _21_System_Activator_CreateInstance_T = method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_;
      methodPointer = _21_System_Activator_CreateInstance_T->methodPointer;
      v17 = v6;
      v15 = &v17;
      _21_System_Activator_CreateInstance_T->invoker_method(
        methodPointer,
        _21_System_Activator_CreateInstance_T,
        v7,
        (void **)&v15,
        &v16);
      v10 = v16;
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1B640EC(
                                                                                     v16,
                                                                                     method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( v10 )
      {
        list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_19B6620(
                                                                                       v10,
                                                                                       method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields,
                                                                                       (unsigned int)(LODWORD(list->klass) + 1));
        v11 = this->fields.list;
        if ( v11 )
        {
          v12 = method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_;
          v13 = v12->methodPointer;
          v17 = v6;
          v15 = &v17;
          v12->invoker_method(v13, v12, v11, (void **)&v15, &v16);
          v14 = *(_DWORD *)sub_1B640EC(v16, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
          list = this->fields.list;
          ++v6;
          v5 += v14;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_8;
  }
  this->fields.totalweight = v5;
}


bool __fastcall WeightRate___Il2CppFullySharedGenericType___checkWeight(
        WeightRate_T__o *this,
        const MethodInfo_388CCD4 *method)
{
  return this->fields.totalweight > 0;
}


int32_t __fastcall WeightRate___Il2CppFullySharedGenericType___getCount(
        WeightRate_T__o *this,
        const MethodInfo_388CCE4 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0

  list = this->fields.list;
  if ( list )
    LODWORD(list) = ((__int64 (*)(void))method->klass->rgctx_data->_20_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)();
  return (int)list;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall WeightRate___Il2CppFullySharedGenericType___getData(
        WeightRate_T__o *this,
        int32_t keywieght,
        const MethodInfo_388CE3C *method)
{
  __int64 v3; // x3
  __int64 v4; // x22
  __int64 v8; // x28
  __int64 v9; // x20
  char *v10; // x21
  char *v11; // x23
  __int64 *v12; // x1
  int32_t totalweight; // w28
  __int64 v14; // x0
  void *v15; // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x2
  __int64 v17; // x1
  __int64 (__fastcall **v18)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v19; // x1
  __int64 v20; // x26
  __int64 v21; // x1
  const void *v22; // x0
  int v23; // w26
  const void *v24; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // x0 OVERLAPPED
  void *v26; // x1
  __int64 v27; // [xsp+0h] [xbp-30h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-28h] BYREF
  __int64 v29[2]; // [xsp+20h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v29[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 192LL);
  v9 = *(unsigned int *)(*(_QWORD *)(v8 + 24) + 252LL);
  v10 = (char *)&v27 - ((v9 + 15) & 0x1FFFFFFF0LL);
  v11 = v10;
  memset(v10, 0, *(_DWORD *)(*(_QWORD *)(v8 + 24) + 252LL));
  memset(&v28, 0, sizeof(v28));
  memset(v10, 0, v9);
  v12 = *(__int64 **)(v8 + 168);
  totalweight = this->fields.totalweight;
  v14 = *v12;
  v29[0] = (__int64)v10;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v12[2])(v14, v12, 0LL, v29, v10);
  v15 = memcpy(v10, v10, v9);
  list = this->fields.list;
  if ( !list )
    sub_1B64324(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v17 + 16))(
    *(_QWORD *)v17,
    v17,
    list,
    0LL,
    &v28);
  while ( 1 )
  {
    v18 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL)
                                                                                               + 136LL);
    if ( ((*v18)(&v28, v18) & 1) == 0 )
    {
      v23 = 6;
      goto LABEL_8;
    }
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, __int64 *))(v19 + 16))(
      *(_QWORD *)v19,
      v19,
      &v28,
      0LL,
      v29);
    v20 = v29[0];
    totalweight -= *(_DWORD *)sub_1B640EC(
                                v29[0],
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL));
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL) + 32LL;
    if ( totalweight <= keywieght )
      break;
    v22 = (const void *)sub_1B640EC(v20, v21);
    memcpy(v10, v22, v9);
    memcpy(v10, v10, v9);
  }
  v24 = (const void *)sub_1B640EC(v20, v21);
  memcpy(v10, v24, v9);
  memcpy(v10, v10, v9);
  v23 = 5;
LABEL_8:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v28,
    *(const MethodInfo_3234F98 **)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 144LL));
  if ( v23 == 5 )
    v11 = (char *)&v27 - ((v9 + 15) & 0x1FFFFFFF0LL);
  memcpy(v10, v11, v9);
  v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v10, v9);
  result.monitor = v26;
  result.klass = v25;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall WeightRate___Il2CppFullySharedGenericType___getData_59298080(
        WeightRate_T__o *this,
        int32_t keyWeight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o skipValue,
        const MethodInfo_388D120 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x27
  WeightRate_T__RGCTXs *rgctx_data; // x23
  __int64 native_size; // x21
  char *v9; // x22
  MethodInfo *_22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor; // x1
  int32_t totalweight; // w26
  void (__fastcall *methodPointer)(); // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x19
  Il2CppClass *_1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  __int64 v17; // x23
  __int64 v18; // x0
  WeightRate_T__RGCTXs *v19; // x8
  MethodInfo *_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext; // x1
  MethodInfo *_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current; // x1
  __int64 v22; // x19
  const void *v23; // x0
  __int64 v24; // x0
  WeightRate_T__c *v25; // x25
  Il2CppObject *v26; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v27; // x1
  Il2CppObject *v28; // x1
  MethodInfo *_25_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray; // x1
  void (__fastcall *v30)(); // x0
  char *v31; // x24
  int32_t v32; // w23
  MethodInfo *_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator; // x1
  MethodInfo *v34; // x1
  MethodInfo *v35; // x1
  struct System_Collections_Generic_List_T__o *v36; // x19
  char *v37; // x1
  const void *v38; // x0
  int v39; // w23
  const void *v40; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v41; // x0 OVERLAPPED
  void *v42; // x1
  __int64 v43; // [xsp+0h] [xbp-90h] BYREF
  char *v44; // [xsp+8h] [xbp-88h]
  void *monitor; // [xsp+10h] [xbp-80h]
  unsigned __int64 StatusReg; // [xsp+18h] [xbp-78h]
  int32_t v47; // [xsp+24h] [xbp-6Ch]
  char *v48; // [xsp+28h] [xbp-68h]
  void *v49; // [xsp+30h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+38h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+50h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v52; // [xsp+70h] [xbp-20h] BYREF
  char v53[4]; // [xsp+7Ch] [xbp-14h] BYREF
  __int64 v54[2]; // [xsp+80h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v47 = keyWeight;
  monitor = skipValue.monitor;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  klass = skipValue.klass;
  v54[1] = *(_QWORD *)(StatusReg + 40);
  v52 = skipValue.klass;
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v9 = (char *)&v43 - ((native_size + 15) & 0x1FFFFFFF0LL);
  memset(v9, 0, rgctx_data->_3_T->_2.native_size);
  memset(&v51, 0, sizeof(v51));
  v44 = v9;
  memset(v9, 0, native_size);
  _22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor = rgctx_data->_22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor;
  totalweight = this->fields.totalweight;
  methodPointer = _22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer;
  v54[0] = (__int64)v9;
  _22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->invoker_method(
    methodPointer,
    _22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor,
    0LL,
    (void **)v54,
    v9);
  v48 = v9;
  memcpy(v9, v9, native_size);
  list = this->fields.list;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE5(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (Il2CppClass *)sub_1BB5FA4(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  v17 = sub_1B64314(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T, v13, v14);
  v18 = ((__int64 (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_23_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__->_1.image)(
          v17,
          list);
  if ( !v17 )
    sub_1B64324(v18);
  v19 = method->klass->rgctx_data;
  v49 = (void *)v17;
  v19->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    v19->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    v19->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    (void *)v17,
    0LL,
    &v50);
  v51 = v50;
  while ( 1 )
  {
    _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext->methodPointer)(
            &v51,
            _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext) & 1) == 0 )
      break;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->invoker_method(
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->methodPointer,
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current,
      &v51,
      0LL,
      v54);
    v22 = v54[0];
    v23 = (const void *)sub_1B640EC(
                          v54[0],
                          (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32);
    memcpy(v9, v23, native_size);
    v24 = j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, v9);
    v25 = method->klass;
    v26 = (Il2CppObject *)v24;
    if ( (v25->rgctx_data->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v27 = &v52;
    else
      v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy(v9, v27, native_size);
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(v25->rgctx_data->_3_T, v9);
    if ( System_Object__Equals_62520080(v26, v28, 0LL) )
    {
      _25_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray = method->klass->rgctx_data->_25_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray;
      v30 = _25_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer;
      v54[0] = v22;
      _25_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->invoker_method(
        v30,
        _25_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray,
        v49,
        (void **)v54,
        v53);
      break;
    }
  }
  v31 = v48;
  v32 = v47;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v51,
    (const MethodInfo_3234F98 *)method->klass->rgctx_data->_19_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator = method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator;
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    v49,
    0LL,
    &v50);
  v51 = v50;
  while ( 1 )
  {
    v34 = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))v34->methodPointer)(
            &v51,
            v34) & 1) == 0 )
    {
      v39 = 9;
      goto LABEL_17;
    }
    v35 = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    v35->invoker_method(v35->methodPointer, v35, &v51, 0LL, &v50);
    v36 = v50.fields._list;
    totalweight -= *(_DWORD *)sub_1B640EC(
                                v50.fields._list,
                                method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
    v37 = (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32;
    if ( totalweight <= v32 )
      break;
    v38 = (const void *)sub_1B640EC(v36, v37);
    memcpy(v9, v38, native_size);
    memcpy(v31, v9, native_size);
  }
  v40 = (const void *)sub_1B640EC(v36, v37);
  memcpy(v9, v40, native_size);
  memcpy(v44, v9, native_size);
  v39 = 8;
LABEL_17:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v51,
    (const MethodInfo_3234F98 *)method->klass->rgctx_data->_19_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
  if ( v39 == 8 )
    v31 = v44;
  memcpy(v9, v31, native_size);
  v41 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v9, native_size);
  result.monitor = v42;
  result.klass = v41;
  return result;
}


int32_t __fastcall WeightRate___Il2CppFullySharedGenericType___getTotalWeight(
        WeightRate_T__o *this,
        const MethodInfo_388CCCC *method)
{
  return this->fields.totalweight;
}


void __fastcall WeightRate___Il2CppFullySharedGenericType___removeWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_388CA4C *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x24
  __int64 v6; // x8
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x22
  void (__fastcall **v10)(__int64, _QWORD, __int64, __int64); // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v14; // x1
  void *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  __int64 v19; // x0
  __int64 v20; // x23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v21; // x2
  __int64 v22; // x1
  int32_t i; // w23
  __int64 (__fastcall **v24)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v27; // [xsp+18h] [xbp-18h] BYREF
  __int64 v28[2]; // [xsp+20h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v28[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v6 = *(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 252LL);
  memset(&v26, 0, sizeof(v26));
  v27 = t.klass;
  v8 = *(_QWORD *)(v6 + 56);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  v9 = sub_1B64314(v8, t.klass, t.monitor);
  v10 = *(void (__fastcall ***)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 64LL);
  (*v10)(v9, v10, v11, v12);
  v13 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 24LL) + 40LL) >= 0 )
    v14 = &v27;
  else
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  v15 = memcpy((char *)&v26 - ((v7 + 15) & 0x1FFFFFFF0LL), v14, v7);
  if ( !v9 )
    goto LABEL_15;
  sub_1B640F0(
    v9,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 56LL) + 128LL),
    (char *)&v26 - ((v7 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v7);
  list = this->fields.list;
  v19 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 80LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB5FA4(v19);
  v20 = sub_1B64314(v19, v16, v17);
  v15 = (void *)(**(__int64 (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 88LL))(
                  v20,
                  v9,
                  *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 72LL));
  if ( !list
    || (v15 = (void *)(**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 96LL))(
                        list,
                        v20),
        (v21 = this->fields.list) == 0LL) )
  {
LABEL_15:
    sub_1B64324(v15);
  }
  v22 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v22 + 16))(
    *(_QWORD *)v22,
    v22,
    v21,
    0LL,
    &v26);
  for ( i = 0;
        ;
        i += *(_DWORD *)sub_1B640EC(v28[0], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 32LL) + 128LL)) )
  {
    v24 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL)
                                                                                               + 136LL);
    if ( ((*v24)(&v26, v24) & 1) == 0 )
      break;
    v25 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, __int64 *))(v25 + 16))(
      *(_QWORD *)v25,
      v25,
      &v26,
      0LL,
      v28);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v26,
    *(const MethodInfo_3234F98 **)(*(_QWORD *)(monitor[4] + 192LL) + 144LL));
  this->fields.totalweight = i;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate___Il2CppFullySharedGenericType___setWeight(
        WeightRate_T__o *this,
        int32_t weight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_388C89C *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 v7; // x28
  __int64 v9; // x8
  __int64 v10; // x24
  _QWORD *v11; // x21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x22
  ServantStatusBattleListViewItem_o *p_fields; // x26
  int32_t totalweight; // w9
  __int64 v15; // x0
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x0
  __int64 v23; // x23
  __int64 v24; // x8
  __int64 *v25; // x1
  int v26; // w9
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 *v29; // x1
  __int64 v30; // x0
  __int64 v31; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v32; // [xsp+8h] [xbp-28h] BYREF
  __int64 v33[2]; // [xsp+10h] [xbp-20h] BYREF
  int32_t v34; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v35; // [xsp+28h] [xbp-8h]

  monitor = t.monitor;
  klass = t.klass;
  v35 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v32 = t.klass;
  v7 = *((_QWORD *)t.monitor + 4);
  v9 = *(_QWORD *)(v7 + 192);
  v10 = *(unsigned int *)(*(_QWORD *)(v9 + 24) + 252LL);
  v11 = (__int64 *)((char *)&v31 - ((v10 + 15) & 0x1FFFFFFF0LL));
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  list = this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    v15 = *(_QWORD *)(v9 + 8);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BB5FA4(v15);
    v16 = sub_1B64314(v15, *(_QWORD *)&weight, t.klass);
    (**(void (***)(void))(*(_QWORD *)(monitor[4] + 192LL) + 16LL))();
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v16;
    sub_1B6406C(p_fields, v16, v17, v18);
    v7 = monitor[4];
    list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)p_fields->klass;
    totalweight = 0;
    v9 = *(_QWORD *)(v7 + 192);
  }
  this->fields.totalweight = totalweight + weight;
  if ( *(int *)(*(_QWORD *)(v9 + 24) + 40LL) >= 0 )
    v19 = &v32;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v31 - ((v10 + 15) & 0x1FFFFFFF0LL), v19, v10);
  v22 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 32LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BB5FA4(v22);
  v23 = sub_1B64314(v22, v20, v21);
  v24 = *(_QWORD *)(monitor[4] + 192LL);
  v25 = *(__int64 **)(v24 + 40);
  v26 = *(_DWORD *)(*(_QWORD *)(v24 + 24) + 40LL);
  v27 = *v25;
  if ( (v26 & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v34 = weight;
  v33[0] = (__int64)&v34;
  v33[1] = (__int64)v11;
  v28 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64 *, _QWORD *))v25[2])(v27, v25, v23, v33, v11);
  if ( !list )
    sub_1B64324(v28);
  v29 = *(__int64 **)(*(_QWORD *)(monitor[4] + 192LL) + 48LL);
  v30 = *v29;
  v33[0] = v23;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64 *, __int64))v29[2])(
    v30,
    v29,
    list,
    v33,
    v23);
}