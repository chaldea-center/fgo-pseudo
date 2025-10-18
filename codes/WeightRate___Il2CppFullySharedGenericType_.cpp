void WeightRate___Il2CppFullySharedGenericType____ctor(WeightRate_T__o *this, const MethodInfo_3B95CC8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate___Il2CppFullySharedGenericType___HasWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3B94E74 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x24
  __int64 v6; // x8
  size_t v7; // x22
  __int64 v8; // x0
  __int64 v9; // x21
  void (__fastcall **v10)(__int64, _QWORD); // x1
  __int64 v11; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v12; // x1
  void *v13; // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x20
  __int64 v15; // x0
  __int64 v16; // x22
  _QWORD v18[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v18[0] = t.klass;
  v6 = *(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 252LL);
  v8 = *(_QWORD *)(v6 + 152);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  v9 = sub_1C372A4(v8);
  v10 = *(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 160LL);
  (*v10)(v9, v10);
  v11 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 24LL) + 40LL) >= 0 )
    v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v18;
  else
    v12 = klass;
  v13 = memcpy((char *)v18 - ((v7 + 15) & 0x1FFFFFFF0LL), v12, v7);
  if ( !v9 )
    sub_1C372B4(v13);
  sub_1C37080(
    v9,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 152LL) + 128LL),
    (char *)v18 - ((v7 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v7);
  list = this->fields.list;
  v15 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 176LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C8776C();
  v16 = sub_1C372A4(v15);
  (**(void (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 184LL))(
    v16,
    v9,
    *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 168LL));
  return (**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 192LL))(
           list,
           v16)
       & 1;
}


void WeightRate___Il2CppFullySharedGenericType___ReverseWeight(WeightRate_T__o *this, const MethodInfo_3B95938 *method)
{
  WeightRate_T__c **p_klass; // x19
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  __int64 v5; // x20
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  long double inited; // q0
  __int64 _37_WeightRate___c_T___ReverseWeight_b__12_0; // x0
  __int64 v9; // x0
  __int64 v10; // x21
  __int64 v11; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v13; // x0
  __int64 _36_WeightRate___c_T; // x8
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  WeightRate_T__RGCTXs *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  int v21; // w23
  int v22; // w24
  int v23; // w26
  MethodInfo *_27_System_Activator_CreateInstance_T; // x1
  void (*methodPointer)(); // x0
  unsigned int v26; // w21
  MethodInfo *v27; // x1
  void (*v28)(); // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v29; // x22
  MethodInfo *v30; // x1
  void (*v31)(); // x0
  MethodInfo *v32; // x1
  void (*v33)(); // x0
  int *v34; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v35; // [xsp+8h] [xbp-58h] BYREF
  int v36; // [xsp+1Ch] [xbp-44h] BYREF

  p_klass = &method->klass;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C8776C();
  v5 = sub_1C372A4(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  (*p_klass)->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  list = this->fields.list;
  if ( !list
    || (list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))(*p_klass)->rgctx_data->_32_WeightRate_WeightSeed_T___->_1.image)(),
        !v5) )
  {
LABEL_32:
    sub_1C372B4(list);
  }
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))(*p_klass)->rgctx_data->_34_WeightRate___c_T_->_1.image)(
    v5,
    list);
  _37_WeightRate___c_T___ReverseWeight_b__12_0 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 309) & 1) == 0 )
    _37_WeightRate___c_T___ReverseWeight_b__12_0 = sub_1C8776C();
  if ( !*(_DWORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 224) )
    inited = j_il2cpp_runtime_class_init_0(_37_WeightRate___c_T___ReverseWeight_b__12_0);
  v9 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL);
  if ( !v10 )
  {
    v11 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8776C();
    if ( !*(_DWORD *)(v11 + 224) )
      j_il2cpp_runtime_class_init_0(v11);
    rgctx_data = (*p_klass)->rgctx_data;
    v13 = (__int64)rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1C8776C();
      rgctx_data = (*p_klass)->rgctx_data;
    }
    _36_WeightRate___c_T = (__int64)rgctx_data->_36_WeightRate___c_T_;
    v15 = **(_QWORD **)(v13 + 184);
    if ( (*(_BYTE *)(_36_WeightRate___c_T + 309) & 1) == 0 )
      _36_WeightRate___c_T = sub_1C8776C();
    v10 = sub_1C372A4(_36_WeightRate___c_T);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))(*p_klass)->rgctx_data->_39_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
      v10,
      v15,
      (*p_klass)->rgctx_data->_38_System_Comparison_WeightRate_WeightSeed_T____ctor);
    v18 = (*p_klass)->rgctx_data;
    v19 = (__int64)v18->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    {
      v19 = sub_1C8776C();
      v18 = (*p_klass)->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v19 + 184) + 8LL) = v10;
    v20 = (__int64)v18->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C8776C();
    sub_1C36FFC((CGThumbnailListItem_o *)(*(_QWORD *)(v20 + 184) + 8LL), v10, v16, v17);
  }
  ((void (__fastcall *)(__int64, __int64, long double))(*p_klass)->rgctx_data[1]._0_WeightRate_T_->_1.image)(
    v5,
    v10,
    inited);
  if ( ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5) >= 1 )
  {
    v21 = 0;
    v22 = -1;
    do
    {
      v23 = ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5)
          + v22;
      if ( v21 >= v23 )
        break;
      _27_System_Activator_CreateInstance_T = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      methodPointer = _27_System_Activator_CreateInstance_T->methodPointer;
      v36 = v21;
      v34 = &v36;
      _27_System_Activator_CreateInstance_T->invoker_method(
        methodPointer,
        _27_System_Activator_CreateInstance_T,
        (void *)v5,
        (void **)&v34,
        &v35);
      v26 = *(_DWORD *)sub_1C3707C(v35, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      v27 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v28 = v27->methodPointer;
      v36 = v21;
      v34 = &v36;
      v27->invoker_method(v28, v27, (void *)v5, (void **)&v34, &v35);
      v29 = v35;
      v30 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v31 = v30->methodPointer;
      v36 = v23;
      v34 = &v36;
      v30->invoker_method(v31, v30, (void *)v5, (void **)&v34, &v35);
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1C3707C(
                                                                                     v35,
                                                                                     (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( !v29 )
        goto LABEL_32;
      sub_1A860DC(v29, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, LODWORD(list->klass));
      v32 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v33 = v32->methodPointer;
      v36 = v23;
      v34 = &v36;
      v32->invoker_method(v33, v32, (void *)v5, (void **)&v34, &v35);
      list = v35;
      if ( !v35 )
        goto LABEL_32;
      sub_1A860DC(v35, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, v26);
      ++v21;
      --v22;
    }
    while ( v21 < ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5) );
  }
}


void WeightRate___Il2CppFullySharedGenericType___SetAdjust(WeightRate_T__o *this, const MethodInfo_3B95010 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  int32_t v5; // w22
  int v6; // w23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v7; // x2
  MethodInfo *_27_System_Activator_CreateInstance_T; // x1
  void (*methodPointer)(); // x0
  __int64 v10; // x21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v11; // x2
  MethodInfo *v12; // x1
  void (*v13)(); // x0
  int v14; // w8
  int *v15; // [xsp+0h] [xbp-50h] BYREF
  __int64 v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+1Ch] [xbp-34h] BYREF

  list = this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C372B4(list);
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))method->klass->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)();
    if ( v6 >= (int)list )
      break;
    v7 = this->fields.list;
    if ( v7 )
    {
      _27_System_Activator_CreateInstance_T = method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_;
      methodPointer = _27_System_Activator_CreateInstance_T->methodPointer;
      v17 = v6;
      v15 = &v17;
      _27_System_Activator_CreateInstance_T->invoker_method(
        methodPointer,
        _27_System_Activator_CreateInstance_T,
        v7,
        (void **)&v15,
        &v16);
      v10 = v16;
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1C3707C(
                                                                                     v16,
                                                                                     method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( v10 )
      {
        list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1A860DC(
                                                                                       v10,
                                                                                       method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields,
                                                                                       (unsigned int)(LODWORD(list->klass) + 1));
        v11 = this->fields.list;
        if ( v11 )
        {
          v12 = method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_;
          v13 = v12->methodPointer;
          v17 = v6;
          v15 = &v17;
          v12->invoker_method(v13, v12, v11, (void **)&v15, &v16);
          v14 = *(_DWORD *)sub_1C3707C(v16, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
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


bool WeightRate___Il2CppFullySharedGenericType___checkWeight(WeightRate_T__o *this, const MethodInfo_3B94FE0 *method)
{
  return this->fields.totalweight > 0;
}


int32_t WeightRate___Il2CppFullySharedGenericType___getCount(WeightRate_T__o *this, const MethodInfo_3B94FF0 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0

  list = this->fields.list;
  if ( list )
    LODWORD(list) = ((__int64 (*)(void))method->klass->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)();
  return (int)list;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o WeightRate___Il2CppFullySharedGenericType___getData(
        WeightRate_T__o *this,
        int32_t keywieght,
        const MethodInfo_3B95148 *method)
{
  __int64 v3; // x3
  __int64 v4; // x22
  __int64 v8; // x28
  size_t v9; // x20
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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // x0
  void *v26; // x1
  __int64 v27; // [xsp+0h] [xbp-30h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v29[2]; // [xsp+20h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v29[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 192LL);
  v9 = *(unsigned int *)(*(_QWORD *)(v8 + 24) + 252LL);
  v10 = (char *)&v27 - ((v9 + 15) & 0x1FFFFFFF0LL);
  v11 = v10;
  memset(v10, 0, v9);
  memset(&v28, 0, sizeof(v28));
  memset(v10, 0, v9);
  v12 = *(__int64 **)(v8 + 216);
  totalweight = this->fields.totalweight;
  v14 = *v12;
  v29[0] = v10;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, char *))v12[2])(v14, v12, 0, v29, v10);
  v15 = memcpy(v10, v10, v9);
  list = this->fields.list;
  if ( !list )
    sub_1C372B4(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v17 + 16))(
    *(_QWORD *)v17,
    v17,
    list,
    0,
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
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, _QWORD *))(v19 + 16))(
      *(_QWORD *)v19,
      v19,
      &v28,
      0,
      v29);
    v20 = v29[0];
    totalweight -= *(_DWORD *)sub_1C3707C(
                                v29[0],
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL));
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL) + 32LL;
    if ( totalweight <= keywieght )
      break;
    v22 = (const void *)sub_1C3707C(v20, v21);
    memcpy(v10, v22, v9);
    memcpy(v10, v10, v9);
  }
  v24 = (const void *)sub_1C3707C(v20, v21);
  memcpy(v10, v24, v9);
  memcpy(v10, v10, v9);
  v23 = 5;
LABEL_8:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v28,
    *(const MethodInfo_35388E8 **)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 144LL));
  if ( v23 == 5 )
    v11 = (char *)&v27 - ((v9 + 15) & 0x1FFFFFFF0LL);
  memcpy(v10, v11, v9);
  v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v10, v9);
  result.monitor = v26;
  result.klass = v25;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o WeightRate___Il2CppFullySharedGenericType___getData_62477356(
        WeightRate_T__o *this,
        int32_t keyWeight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o skipValue,
        const MethodInfo_3B9542C *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x27
  WeightRate_T__RGCTXs *rgctx_data; // x23
  size_t actualSize; // x21
  char *v9; // x22
  MethodInfo *_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor; // x1
  int32_t totalweight; // w26
  void (*methodPointer)(); // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x19
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  __int64 v15; // x23
  __int64 v16; // x0
  WeightRate_T__RGCTXs *v17; // x8
  MethodInfo *_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext; // x1
  MethodInfo *_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current; // x1
  __int64 v20; // x19
  const void *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  __int64 v28; // x0
  WeightRate_T__c *v29; // x25
  Il2CppObject *v30; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x1
  MethodInfo *_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray; // x1
  void (*v40)(); // x0
  char *v41; // x24
  int32_t v42; // w23
  MethodInfo *_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator; // x1
  MethodInfo *v44; // x1
  MethodInfo *v45; // x1
  struct System_Collections_Generic_List_T__o *v46; // x19
  char *v47; // x1
  const void *v48; // x0
  int v49; // w23
  const void *v50; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v51; // x0
  void *v52; // x1
  __int64 v53; // [xsp+0h] [xbp-90h] BYREF
  char *v54; // [xsp+8h] [xbp-88h]
  void *monitor; // [xsp+10h] [xbp-80h]
  unsigned __int64 StatusReg; // [xsp+18h] [xbp-78h]
  int32_t v57; // [xsp+24h] [xbp-6Ch]
  char *v58; // [xsp+28h] [xbp-68h]
  void *v59; // [xsp+30h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+38h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+50h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v62; // [xsp+70h] [xbp-20h] BYREF
  char v63[4]; // [xsp+7Ch] [xbp-14h] BYREF
  _QWORD v64[2]; // [xsp+80h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v57 = keyWeight;
  monitor = skipValue.monitor;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  klass = skipValue.klass;
  v64[1] = *(_QWORD *)(StatusReg + 40);
  v62 = skipValue.klass;
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v9 = (char *)&v53 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  memset(v9, 0, actualSize);
  memset(&v61, 0, sizeof(v61));
  v54 = v9;
  memset(v9, 0, actualSize);
  _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor = rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor;
  totalweight = this->fields.totalweight;
  methodPointer = _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer;
  v64[0] = v9;
  _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->invoker_method(
    methodPointer,
    _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor,
    0,
    (void **)v64,
    v9);
  v58 = v9;
  memcpy(v9, v9, actualSize);
  list = this->fields.list;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C8776C();
  v15 = sub_1C372A4(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  v16 = ((__int64 (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_29_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__->_1.image)(
          v15,
          list);
  if ( !v15 )
    sub_1C372B4(v16);
  v17 = method->klass->rgctx_data;
  v59 = (void *)v15;
  v17->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    v17->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    v17->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    (void *)v15,
    0,
    &v60);
  v61 = v60;
  while ( 1 )
  {
    _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext->methodPointer)(
            &v61,
            _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext)
        & 1) == 0 )
      break;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->invoker_method(
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->methodPointer,
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current,
      &v61,
      0,
      v64);
    v20 = v64[0];
    v21 = (const void *)sub_1C3707C(
                          v64[0],
                          (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32);
    memcpy(v9, v21, actualSize);
    v28 = j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, v9, v22, v23, v24, v25, v26, v27);
    v29 = method->klass;
    v30 = (Il2CppObject *)v28;
    if ( (v29->rgctx_data->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v31 = &v62;
    else
      v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy(v9, v31, actualSize);
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(v29->rgctx_data->_3_T, v9, v32, v33, v34, v35, v36, v37);
    if ( System_Object__Equals_65412660(v30, v38, 0) )
    {
      _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray = method->klass->rgctx_data->_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray;
      v40 = _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer;
      v64[0] = v20;
      _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->invoker_method(
        v40,
        _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray,
        v59,
        (void **)v64,
        v63);
      break;
    }
  }
  v41 = v58;
  v42 = v57;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v61,
    (const MethodInfo_35388E8 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator = method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator;
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    v59,
    0,
    &v60);
  v61 = v60;
  while ( 1 )
  {
    v44 = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))v44->methodPointer)(
            &v61,
            v44)
        & 1) == 0 )
    {
      v49 = 9;
      goto LABEL_17;
    }
    v45 = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    v45->invoker_method(v45->methodPointer, v45, &v61, 0, &v60);
    v46 = v60.fields._list;
    totalweight -= *(_DWORD *)sub_1C3707C(
                                v60.fields._list,
                                method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
    v47 = (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32;
    if ( totalweight <= v42 )
      break;
    v48 = (const void *)sub_1C3707C(v46, v47);
    memcpy(v9, v48, actualSize);
    memcpy(v41, v9, actualSize);
  }
  v50 = (const void *)sub_1C3707C(v46, v47);
  memcpy(v9, v50, actualSize);
  memcpy(v54, v9, actualSize);
  v49 = 8;
LABEL_17:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v61,
    (const MethodInfo_35388E8 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  if ( v49 == 8 )
    v41 = v54;
  memcpy(v9, v41, actualSize);
  v51 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v9, actualSize);
  result.monitor = v52;
  result.klass = v51;
  return result;
}


int32_t WeightRate___Il2CppFullySharedGenericType___getTotalWeight(
        WeightRate_T__o *this,
        const MethodInfo_3B94FD8 *method)
{
  return this->fields.totalweight;
}


void WeightRate___Il2CppFullySharedGenericType___removeWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3B94BF4 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x24
  __int64 v6; // x8
  size_t v7; // x21
  __int64 v8; // x0
  __int64 v9; // x22
  void (__fastcall **v10)(__int64, _QWORD, __int64, __int64); // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v14; // x1
  void *v15; // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  __int64 v17; // x0
  __int64 v18; // x23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v19; // x2
  __int64 v20; // x1
  int32_t i; // w23
  __int64 (__fastcall **v22)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // [xsp+18h] [xbp-18h] BYREF
  _QWORD v26[2]; // [xsp+20h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v26[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 252LL);
  memset(&v24, 0, sizeof(v24));
  v25 = t.klass;
  v8 = *(_QWORD *)(v6 + 56);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  v9 = sub_1C372A4(v8);
  v10 = *(void (__fastcall ***)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 64LL);
  (*v10)(v9, v10, v11, v12);
  v13 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 24LL) + 40LL) >= 0 )
    v14 = &v25;
  else
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  v15 = memcpy((char *)&v24 - ((v7 + 15) & 0x1FFFFFFF0LL), v14, v7);
  if ( !v9 )
    goto LABEL_15;
  sub_1C37080(
    v9,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 56LL) + 128LL),
    (char *)&v24 - ((v7 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v7);
  list = this->fields.list;
  v17 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 80LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8776C();
  v18 = sub_1C372A4(v17);
  v15 = (void *)(**(__int64 (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 88LL))(
                  v18,
                  v9,
                  *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 72LL));
  if ( !list
    || (v15 = (void *)(**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 96LL))(
                        list,
                        v18),
        (v19 = this->fields.list) == 0) )
  {
LABEL_15:
    sub_1C372B4(v15);
  }
  v20 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v20 + 16))(
    *(_QWORD *)v20,
    v20,
    v19,
    0,
    &v24);
  for ( i = 0;
        ;
        i += *(_DWORD *)sub_1C3707C(v26[0], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 32LL) + 128LL)) )
  {
    v22 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL)
                                                                                               + 136LL);
    if ( ((*v22)(&v24, v22) & 1) == 0 )
      break;
    v23 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, _QWORD *))(v23 + 16))(
      *(_QWORD *)v23,
      v23,
      &v24,
      0,
      v26);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v24,
    *(const MethodInfo_35388E8 **)(*(_QWORD *)(monitor[4] + 192LL) + 144LL));
  this->fields.totalweight = i;
}


void WeightRate___Il2CppFullySharedGenericType___setWeight(
        WeightRate_T__o *this,
        int32_t weight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3B94A44 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 v7; // x28
  __int64 v9; // x8
  size_t v10; // x24
  _QWORD *v11; // x21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x22
  CGThumbnailListItem_o *p_fields; // x26
  int32_t totalweight; // w9
  __int64 v15; // x0
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 v20; // x0
  __int64 v21; // x23
  __int64 v22; // x8
  __int64 *v23; // x1
  int v24; // w9
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 *v27; // x1
  __int64 v28; // x0
  __int64 v29; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v31[2]; // [xsp+10h] [xbp-20h] BYREF
  int32_t v32; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v33; // [xsp+28h] [xbp-8h]

  monitor = t.monitor;
  klass = t.klass;
  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v30 = t.klass;
  v7 = *((_QWORD *)t.monitor + 4);
  v9 = *(_QWORD *)(v7 + 192);
  v10 = *(unsigned int *)(*(_QWORD *)(v9 + 24) + 252LL);
  v11 = (__int64 *)((char *)&v29 - ((v10 + 15) & 0x1FFFFFFF0LL));
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  list = this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    v15 = *(_QWORD *)(v9 + 8);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C8776C();
    v16 = sub_1C372A4(v15);
    (**(void (***)(void))(*(_QWORD *)(monitor[4] + 192LL) + 16LL))();
    p_fields->klass = (CGThumbnailListItem_c *)v16;
    sub_1C36FFC(p_fields, v16, v17, v18);
    v7 = monitor[4];
    list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)p_fields->klass;
    totalweight = 0;
    v9 = *(_QWORD *)(v7 + 192);
  }
  this->fields.totalweight = totalweight + weight;
  if ( *(int *)(*(_QWORD *)(v9 + 24) + 40LL) >= 0 )
    v19 = &v30;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v29 - ((v10 + 15) & 0x1FFFFFFF0LL), v19, v10);
  v20 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 32LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C8776C();
  v21 = sub_1C372A4(v20);
  v22 = *(_QWORD *)(monitor[4] + 192LL);
  v23 = *(__int64 **)(v22 + 40);
  v24 = *(_DWORD *)(*(_QWORD *)(v22 + 24) + 40LL);
  v25 = *v23;
  if ( (v24 & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v32 = weight;
  v31[0] = &v32;
  v31[1] = v11;
  v26 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, _QWORD *, _QWORD *))v23[2])(v25, v23, v21, v31, v11);
  if ( !list )
    sub_1C372B4(v26);
  v27 = *(__int64 **)(*(_QWORD *)(monitor[4] + 192LL) + 48LL);
  v28 = *v27;
  v31[0] = v21;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD *, __int64))v27[2])(
    v28,
    v27,
    list,
    v31,
    v21);
}