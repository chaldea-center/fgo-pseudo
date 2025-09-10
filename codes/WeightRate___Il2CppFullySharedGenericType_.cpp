void WeightRate___Il2CppFullySharedGenericType____ctor(WeightRate_T__o *this, const MethodInfo_3B7C758 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate___Il2CppFullySharedGenericType___HasWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3B7B904 *method)
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
  __int64 v14; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x20
  __int64 v16; // x0
  __int64 v17; // x22
  _QWORD v19[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v19[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v19[0] = t.klass;
  v6 = *(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 252LL);
  v8 = *(_QWORD *)(v6 + 152);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4();
  v9 = sub_1C2D6DC(v8);
  v10 = *(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 160LL);
  (*v10)(v9, v10);
  v11 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 24LL) + 40LL) >= 0 )
    v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v19;
  else
    v12 = klass;
  v13 = memcpy((char *)v19 - ((v7 + 15) & 0x1FFFFFFF0LL), v12, v7);
  if ( !v9 )
    sub_1C2D6EC(v13, v14);
  sub_1C2D4B8(
    v9,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 152LL) + 128LL),
    (char *)v19 - ((v7 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v7);
  list = this->fields.list;
  v16 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 176LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C7DBA4();
  v17 = sub_1C2D6DC(v16);
  (**(void (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 184LL))(
    v17,
    v9,
    *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 168LL));
  return (**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 192LL))(
           list,
           v17)
       & 1;
}


void WeightRate___Il2CppFullySharedGenericType___ReverseWeight(WeightRate_T__o *this, const MethodInfo_3B7C3C8 *method)
{
  WeightRate_T__c **p_klass; // x19
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  __int64 v5; // x20
  __int64 v6; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  long double inited; // q0
  __int64 _37_WeightRate___c_T___ReverseWeight_b__12_0; // x0
  __int64 v10; // x0
  __int64 v11; // x21
  __int64 v12; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v14; // x0
  __int64 _36_WeightRate___c_T; // x8
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  WeightRate_T__RGCTXs *v19; // x8
  __int64 v20; // x0
  __int64 v21; // x0
  int v22; // w23
  int v23; // w24
  int v24; // w26
  MethodInfo *_27_System_Activator_CreateInstance_T; // x1
  void (*methodPointer)(); // x0
  unsigned int v27; // w21
  MethodInfo *v28; // x1
  void (*v29)(); // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v30; // x22
  MethodInfo *v31; // x1
  void (*v32)(); // x0
  MethodInfo *v33; // x1
  void (*v34)(); // x0
  int *v35; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v36; // [xsp+8h] [xbp-58h] BYREF
  int v37; // [xsp+1Ch] [xbp-44h] BYREF

  p_klass = &method->klass;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C7DBA4();
  v5 = sub_1C2D6DC(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  (*p_klass)->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  list = this->fields.list;
  if ( !list
    || (list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))(*p_klass)->rgctx_data->_32_WeightRate_WeightSeed_T___->_1.image)(),
        !v5) )
  {
LABEL_32:
    sub_1C2D6EC(list, v6);
  }
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))(*p_klass)->rgctx_data->_34_WeightRate___c_T_->_1.image)(
    v5,
    list);
  _37_WeightRate___c_T___ReverseWeight_b__12_0 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 309) & 1) == 0 )
    _37_WeightRate___c_T___ReverseWeight_b__12_0 = sub_1C7DBA4();
  if ( !*(_DWORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 224) )
    inited = j_il2cpp_runtime_class_init_0(_37_WeightRate___c_T___ReverseWeight_b__12_0);
  v10 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4();
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 184) + 8LL);
  if ( !v11 )
  {
    v12 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C7DBA4();
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    rgctx_data = (*p_klass)->rgctx_data;
    v14 = (__int64)rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    {
      v14 = sub_1C7DBA4();
      rgctx_data = (*p_klass)->rgctx_data;
    }
    _36_WeightRate___c_T = (__int64)rgctx_data->_36_WeightRate___c_T_;
    v16 = **(_QWORD **)(v14 + 184);
    if ( (*(_BYTE *)(_36_WeightRate___c_T + 309) & 1) == 0 )
      _36_WeightRate___c_T = sub_1C7DBA4();
    v11 = sub_1C2D6DC(_36_WeightRate___c_T);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))(*p_klass)->rgctx_data->_39_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
      v11,
      v16,
      (*p_klass)->rgctx_data->_38_System_Comparison_WeightRate_WeightSeed_T____ctor);
    v19 = (*p_klass)->rgctx_data;
    v20 = (__int64)v19->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    {
      v20 = sub_1C7DBA4();
      v19 = (*p_klass)->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v20 + 184) + 8LL) = v11;
    v21 = (__int64)v19->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C7DBA4();
    sub_1C2D434((CGThumbnailListItem_o *)(*(_QWORD *)(v21 + 184) + 8LL), v11, v17, v18);
  }
  ((void (__fastcall *)(__int64, __int64, long double))(*p_klass)->rgctx_data[1]._0_WeightRate_T_->_1.image)(
    v5,
    v11,
    inited);
  if ( ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5) >= 1 )
  {
    v22 = 0;
    v23 = -1;
    do
    {
      v24 = ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5)
          + v23;
      if ( v22 >= v24 )
        break;
      _27_System_Activator_CreateInstance_T = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      methodPointer = _27_System_Activator_CreateInstance_T->methodPointer;
      v37 = v22;
      v35 = &v37;
      _27_System_Activator_CreateInstance_T->invoker_method(
        methodPointer,
        _27_System_Activator_CreateInstance_T,
        (void *)v5,
        (void **)&v35,
        &v36);
      v27 = *(_DWORD *)sub_1C2D4B4(v36, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      v28 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v29 = v28->methodPointer;
      v37 = v22;
      v35 = &v37;
      v28->invoker_method(v29, v28, (void *)v5, (void **)&v35, &v36);
      v30 = v36;
      v31 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v32 = v31->methodPointer;
      v37 = v24;
      v35 = &v37;
      v31->invoker_method(v32, v31, (void *)v5, (void **)&v35, &v36);
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1C2D4B4(
                                                                                     v36,
                                                                                     (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( !v30 )
        goto LABEL_32;
      sub_1A7CA14(v30, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, LODWORD(list->klass));
      v33 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v34 = v33->methodPointer;
      v37 = v24;
      v35 = &v37;
      v33->invoker_method(v34, v33, (void *)v5, (void **)&v35, &v36);
      list = v36;
      if ( !v36 )
        goto LABEL_32;
      sub_1A7CA14(v36, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, v27);
      ++v22;
      --v23;
    }
    while ( v22 < ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5) );
  }
}


void WeightRate___Il2CppFullySharedGenericType___SetAdjust(WeightRate_T__o *this, const MethodInfo_3B7BAA0 *method)
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
    sub_1C2D6EC(list, method);
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
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1C2D4B4(
                                                                                     v16,
                                                                                     method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( v10 )
      {
        list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1A7CA14(
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
          v14 = *(_DWORD *)sub_1C2D4B4(v16, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
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


bool WeightRate___Il2CppFullySharedGenericType___checkWeight(WeightRate_T__o *this, const MethodInfo_3B7BA70 *method)
{
  return this->fields.totalweight > 0;
}


int32_t WeightRate___Il2CppFullySharedGenericType___getCount(WeightRate_T__o *this, const MethodInfo_3B7BA80 *method)
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
        const MethodInfo_3B7BBD8 *method)
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
  __int64 v16; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x2
  __int64 v18; // x1
  __int64 (__fastcall **v19)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v20; // x1
  __int64 v21; // x26
  __int64 v22; // x1
  const void *v23; // x0
  int v24; // w26
  const void *v25; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // x0
  void *v27; // x1
  __int64 v28; // [xsp+0h] [xbp-30h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v30[2]; // [xsp+20h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v30[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 192LL);
  v9 = *(unsigned int *)(*(_QWORD *)(v8 + 24) + 252LL);
  v10 = (char *)&v28 - ((v9 + 15) & 0x1FFFFFFF0LL);
  v11 = v10;
  memset(v10, 0, v9);
  memset(&v29, 0, sizeof(v29));
  memset(v10, 0, v9);
  v12 = *(__int64 **)(v8 + 216);
  totalweight = this->fields.totalweight;
  v14 = *v12;
  v30[0] = v10;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, char *))v12[2])(v14, v12, 0, v30, v10);
  v15 = memcpy(v10, v10, v9);
  list = this->fields.list;
  if ( !list )
    sub_1C2D6EC(v15, v16);
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v18 + 16))(
    *(_QWORD *)v18,
    v18,
    list,
    0,
    &v29);
  while ( 1 )
  {
    v19 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL)
                                                                                               + 136LL);
    if ( ((*v19)(&v29, v19) & 1) == 0 )
    {
      v24 = 6;
      goto LABEL_8;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, _QWORD *))(v20 + 16))(
      *(_QWORD *)v20,
      v20,
      &v29,
      0,
      v30);
    v21 = v30[0];
    totalweight -= *(_DWORD *)sub_1C2D4B4(
                                v30[0],
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL));
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL) + 32LL;
    if ( totalweight <= keywieght )
      break;
    v23 = (const void *)sub_1C2D4B4(v21, v22);
    memcpy(v10, v23, v9);
    memcpy(v10, v10, v9);
  }
  v25 = (const void *)sub_1C2D4B4(v21, v22);
  memcpy(v10, v25, v9);
  memcpy(v10, v10, v9);
  v24 = 5;
LABEL_8:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v29,
    *(const MethodInfo_351F5E0 **)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 144LL));
  if ( v24 == 5 )
    v11 = (char *)&v28 - ((v9 + 15) & 0x1FFFFFFF0LL);
  memcpy(v10, v11, v9);
  v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v10, v9);
  result.monitor = v27;
  result.klass = v26;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o WeightRate___Il2CppFullySharedGenericType___getData_62373564(
        WeightRate_T__o *this,
        int32_t keyWeight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o skipValue,
        const MethodInfo_3B7BEBC *method)
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
  __int64 v17; // x1
  WeightRate_T__RGCTXs *v18; // x8
  MethodInfo *_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext; // x1
  MethodInfo *_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current; // x1
  __int64 v21; // x19
  const void *v22; // x0
  __int64 v23; // x0
  WeightRate_T__c *v24; // x25
  Il2CppObject *v25; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v26; // x1
  Il2CppObject *v27; // x1
  MethodInfo *_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray; // x1
  void (*v29)(); // x0
  char *v30; // x24
  int32_t v31; // w23
  MethodInfo *_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator; // x1
  MethodInfo *v33; // x1
  MethodInfo *v34; // x1
  struct System_Collections_Generic_List_T__o *v35; // x19
  char *v36; // x1
  const void *v37; // x0
  int v38; // w23
  const void *v39; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v40; // x0
  void *v41; // x1
  __int64 v42; // [xsp+0h] [xbp-90h] BYREF
  char *v43; // [xsp+8h] [xbp-88h]
  void *monitor; // [xsp+10h] [xbp-80h]
  unsigned __int64 StatusReg; // [xsp+18h] [xbp-78h]
  int32_t v46; // [xsp+24h] [xbp-6Ch]
  char *v47; // [xsp+28h] [xbp-68h]
  void *v48; // [xsp+30h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+38h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+50h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v51; // [xsp+70h] [xbp-20h] BYREF
  char v52[4]; // [xsp+7Ch] [xbp-14h] BYREF
  _QWORD v53[2]; // [xsp+80h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v46 = keyWeight;
  monitor = skipValue.monitor;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  klass = skipValue.klass;
  v53[1] = *(_QWORD *)(StatusReg + 40);
  v51 = skipValue.klass;
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v9 = (char *)&v42 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  memset(v9, 0, actualSize);
  memset(&v50, 0, sizeof(v50));
  v43 = v9;
  memset(v9, 0, actualSize);
  _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor = rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor;
  totalweight = this->fields.totalweight;
  methodPointer = _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer;
  v53[0] = v9;
  _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->invoker_method(
    methodPointer,
    _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor,
    0,
    (void **)v53,
    v9);
  v47 = v9;
  memcpy(v9, v9, actualSize);
  list = this->fields.list;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C7DBA4();
  v15 = sub_1C2D6DC(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  v16 = ((__int64 (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_29_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__->_1.image)(
          v15,
          list);
  if ( !v15 )
    sub_1C2D6EC(v16, v17);
  v18 = method->klass->rgctx_data;
  v48 = (void *)v15;
  v18->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    v18->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    v18->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    (void *)v15,
    0,
    &v49);
  v50 = v49;
  while ( 1 )
  {
    _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext->methodPointer)(
            &v50,
            _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext)
        & 1) == 0 )
      break;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->invoker_method(
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->methodPointer,
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current,
      &v50,
      0,
      v53);
    v21 = v53[0];
    v22 = (const void *)sub_1C2D4B4(
                          v53[0],
                          (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32);
    memcpy(v9, v22, actualSize);
    v23 = j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, v9);
    v24 = method->klass;
    v25 = (Il2CppObject *)v23;
    if ( (v24->rgctx_data->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v26 = &v51;
    else
      v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy(v9, v26, actualSize);
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(v24->rgctx_data->_3_T, v9);
    if ( System_Object__Equals_65309612(v25, v27, 0) )
    {
      _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray = method->klass->rgctx_data->_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray;
      v29 = _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer;
      v53[0] = v21;
      _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->invoker_method(
        v29,
        _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray,
        v48,
        (void **)v53,
        v52);
      break;
    }
  }
  v30 = v47;
  v31 = v46;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v50,
    (const MethodInfo_351F5E0 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator = method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator;
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    v48,
    0,
    &v49);
  v50 = v49;
  while ( 1 )
  {
    v33 = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))v33->methodPointer)(
            &v50,
            v33)
        & 1) == 0 )
    {
      v38 = 9;
      goto LABEL_17;
    }
    v34 = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    v34->invoker_method(v34->methodPointer, v34, &v50, 0, &v49);
    v35 = v49.fields._list;
    totalweight -= *(_DWORD *)sub_1C2D4B4(
                                v49.fields._list,
                                method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
    v36 = (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32;
    if ( totalweight <= v31 )
      break;
    v37 = (const void *)sub_1C2D4B4(v35, v36);
    memcpy(v9, v37, actualSize);
    memcpy(v30, v9, actualSize);
  }
  v39 = (const void *)sub_1C2D4B4(v35, v36);
  memcpy(v9, v39, actualSize);
  memcpy(v43, v9, actualSize);
  v38 = 8;
LABEL_17:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v50,
    (const MethodInfo_351F5E0 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  if ( v38 == 8 )
    v30 = v43;
  memcpy(v9, v30, actualSize);
  v40 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v9, actualSize);
  result.monitor = v41;
  result.klass = v40;
  return result;
}


int32_t WeightRate___Il2CppFullySharedGenericType___getTotalWeight(
        WeightRate_T__o *this,
        const MethodInfo_3B7BA68 *method)
{
  return this->fields.totalweight;
}


void WeightRate___Il2CppFullySharedGenericType___removeWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3B7B684 *method)
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
  __int64 v16; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  __int64 v18; // x0
  __int64 v19; // x23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v20; // x2
  __int64 v21; // x1
  int32_t i; // w23
  __int64 (__fastcall **v23)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // [xsp+18h] [xbp-18h] BYREF
  _QWORD v27[2]; // [xsp+20h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v27[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 252LL);
  memset(&v25, 0, sizeof(v25));
  v26 = t.klass;
  v8 = *(_QWORD *)(v6 + 56);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4();
  v9 = sub_1C2D6DC(v8);
  v10 = *(void (__fastcall ***)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 64LL);
  (*v10)(v9, v10, v11, v12);
  v13 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 24LL) + 40LL) >= 0 )
    v14 = &v26;
  else
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  v15 = memcpy((char *)&v25 - ((v7 + 15) & 0x1FFFFFFF0LL), v14, v7);
  if ( !v9 )
    goto LABEL_15;
  sub_1C2D4B8(
    v9,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 56LL) + 128LL),
    (char *)&v25 - ((v7 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v7);
  list = this->fields.list;
  v18 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 80LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C7DBA4();
  v19 = sub_1C2D6DC(v18);
  v15 = (void *)(**(__int64 (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 88LL))(
                  v19,
                  v9,
                  *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 72LL));
  if ( !list
    || (v15 = (void *)(**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 96LL))(
                        list,
                        v19),
        (v20 = this->fields.list) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(v15, v16);
  }
  v21 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v21 + 16))(
    *(_QWORD *)v21,
    v21,
    v20,
    0,
    &v25);
  for ( i = 0;
        ;
        i += *(_DWORD *)sub_1C2D4B4(v27[0], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 32LL) + 128LL)) )
  {
    v23 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL)
                                                                                               + 136LL);
    if ( ((*v23)(&v25, v23) & 1) == 0 )
      break;
    v24 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, _QWORD *))(v24 + 16))(
      *(_QWORD *)v24,
      v24,
      &v25,
      0,
      v27);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v25,
    *(const MethodInfo_351F5E0 **)(*(_QWORD *)(monitor[4] + 192LL) + 144LL));
  this->fields.totalweight = i;
}


void WeightRate___Il2CppFullySharedGenericType___setWeight(
        WeightRate_T__o *this,
        int32_t weight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3B7B4D4 *method)
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
  __int64 v27; // x1
  __int64 *v28; // x1
  __int64 v29; // x0
  __int64 v30; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v31; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v32[2]; // [xsp+10h] [xbp-20h] BYREF
  int32_t v33; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v34; // [xsp+28h] [xbp-8h]

  monitor = t.monitor;
  klass = t.klass;
  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v31 = t.klass;
  v7 = *((_QWORD *)t.monitor + 4);
  v9 = *(_QWORD *)(v7 + 192);
  v10 = *(unsigned int *)(*(_QWORD *)(v9 + 24) + 252LL);
  v11 = (__int64 *)((char *)&v30 - ((v10 + 15) & 0x1FFFFFFF0LL));
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
      v15 = sub_1C7DBA4();
    v16 = sub_1C2D6DC(v15);
    (**(void (***)(void))(*(_QWORD *)(monitor[4] + 192LL) + 16LL))();
    p_fields->klass = (CGThumbnailListItem_c *)v16;
    sub_1C2D434(p_fields, v16, v17, v18);
    v7 = monitor[4];
    list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)p_fields->klass;
    totalweight = 0;
    v9 = *(_QWORD *)(v7 + 192);
  }
  this->fields.totalweight = totalweight + weight;
  if ( *(int *)(*(_QWORD *)(v9 + 24) + 40LL) >= 0 )
    v19 = &v31;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v30 - ((v10 + 15) & 0x1FFFFFFF0LL), v19, v10);
  v20 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 32LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C7DBA4();
  v21 = sub_1C2D6DC(v20);
  v22 = *(_QWORD *)(monitor[4] + 192LL);
  v23 = *(__int64 **)(v22 + 40);
  v24 = *(_DWORD *)(*(_QWORD *)(v22 + 24) + 40LL);
  v25 = *v23;
  if ( (v24 & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v33 = weight;
  v32[0] = &v33;
  v32[1] = v11;
  v26 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, _QWORD *, _QWORD *))v23[2])(v25, v23, v21, v32, v11);
  if ( !list )
    sub_1C2D6EC(v26, v27);
  v28 = *(__int64 **)(*(_QWORD *)(monitor[4] + 192LL) + 48LL);
  v29 = *v28;
  v32[0] = v21;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD *, __int64))v28[2])(
    v29,
    v28,
    list,
    v32,
    v21);
}