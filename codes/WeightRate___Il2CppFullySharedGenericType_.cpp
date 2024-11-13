void __fastcall WeightRate___Il2CppFullySharedGenericType____ctor(
        WeightRate_T__o *this,
        const MethodInfo_3985C98 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___Il2CppFullySharedGenericType___HasWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3984E44 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x24
  __int64 v6; // x8
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x21
  void (__fastcall **v10)(__int64, _QWORD); // x1
  __int64 v11; // x26
  __int64 *v12; // x1
  void *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x20
  __int64 v19; // x0
  __int64 v20; // x22
  __int64 v22[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v22[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v22[0] = (__int64)t.klass;
  v6 = *(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 252LL);
  v8 = *(_QWORD *)(v6 + 152);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC();
  v9 = sub_1BCAA2C(v8, t.klass, t.monitor, method);
  v10 = *(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 160LL);
  (*v10)(v9, v10);
  v11 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 24LL) + 40LL) >= 0 )
    v12 = v22;
  else
    v12 = (__int64 *)klass;
  v13 = memcpy((char *)v22 - ((v7 + 15) & 0x1FFFFFFF0LL), v12, v7);
  if ( !v9 )
    sub_1BCAA3C(v13, v14);
  sub_1BCA808(
    v9,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 152LL) + 128LL),
    (char *)v22 - ((v7 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v7);
  list = this->fields.list;
  v19 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 176LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1C6BC();
  v20 = sub_1BCAA2C(v19, v15, v16, v17);
  (**(void (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 184LL))(
    v20,
    v9,
    *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 168LL));
  return (**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 192LL))(
           list,
           v20) & 1;
}


void __fastcall WeightRate___Il2CppFullySharedGenericType___ReverseWeight(
        WeightRate_T__o *this,
        const MethodInfo_3985908 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  WeightRate_T__c **p_klass; // x19
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  __int64 v7; // x20
  __int64 v8; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  long double inited; // q0
  __int64 _37_WeightRate___c_T___ReverseWeight_b__12_0; // x0
  __int64 v15; // x0
  int64_t v16; // x21
  __int64 v17; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v19; // x0
  __int64 _36_WeightRate___c_T; // x8
  __int64 v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  WeightRate_T__RGCTXs *v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  int v31; // w23
  int v32; // w24
  int v33; // w26
  MethodInfo *_27_System_Activator_CreateInstance_T; // x1
  void (__fastcall *methodPointer)(); // x0
  unsigned int v36; // w21
  MethodInfo *v37; // x1
  void (__fastcall *v38)(); // x0
  __int64 v39; // x22
  MethodInfo *v40; // x1
  void (__fastcall *v41)(); // x0
  MethodInfo *v42; // x1
  void (__fastcall *v43)(); // x0
  int *v44; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v45; // [xsp+8h] [xbp-58h] BYREF
  int v46; // [xsp+1Ch] [xbp-44h] BYREF

  p_klass = &method->klass;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C1C6BC();
  v7 = sub_1BCAA2C(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T, method, v2, v3);
  (*p_klass)->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  list = this->fields.list;
  if ( !list
    || (list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))(*p_klass)->rgctx_data->_32_WeightRate_WeightSeed_T___->_1.image)(),
        !v7) )
  {
LABEL_32:
    sub_1BCAA3C(list, v8);
  }
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))(*p_klass)->rgctx_data->_34_WeightRate___c_T_->_1.image)(
    v7,
    list);
  _37_WeightRate___c_T___ReverseWeight_b__12_0 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 309) & 1) == 0 )
    _37_WeightRate___c_T___ReverseWeight_b__12_0 = sub_1C1C6BC();
  if ( !*(_DWORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 224) )
    inited = j_il2cpp_runtime_class_init_0(_37_WeightRate___c_T___ReverseWeight_b__12_0, v10);
  v15 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 184) + 8LL);
  if ( !v16 )
  {
    v17 = (__int64)(*p_klass)->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v17 + 224) )
      j_il2cpp_runtime_class_init_0(v17, v10);
    rgctx_data = (*p_klass)->rgctx_data;
    v19 = (__int64)rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    {
      v19 = sub_1C1C6BC();
      rgctx_data = (*p_klass)->rgctx_data;
    }
    _36_WeightRate___c_T = (__int64)rgctx_data->_36_WeightRate___c_T_;
    v21 = **(_QWORD **)(v19 + 184);
    if ( (*(_BYTE *)(_36_WeightRate___c_T + 309) & 1) == 0 )
      _36_WeightRate___c_T = sub_1C1C6BC();
    v16 = sub_1BCAA2C(_36_WeightRate___c_T, v10, v11, v12);
    ((void (__fastcall *)(int64_t, __int64, MethodInfo *))(*p_klass)->rgctx_data->_39_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
      v16,
      v21,
      (*p_klass)->rgctx_data->_38_System_Comparison_WeightRate_WeightSeed_T____ctor);
    v28 = (*p_klass)->rgctx_data;
    v29 = (__int64)v28->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    {
      v29 = sub_1C1C6BC();
      v28 = (*p_klass)->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v29 + 184) + 8LL) = v16;
    v30 = (__int64)v28->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C1C6BC();
    sub_1BCA784((PartyOrganizationUtility_o *)(*(_QWORD *)(v30 + 184) + 8LL), v16, v22, v23, v24, v25, v26, v27);
  }
  ((void (__fastcall *)(__int64, int64_t, long double))(*p_klass)->rgctx_data[1]._0_WeightRate_T_->_1.image)(
    v7,
    v16,
    inited);
  if ( ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v7) >= 1 )
  {
    v31 = 0;
    v32 = -1;
    do
    {
      v33 = ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v7)
          + v32;
      if ( v31 >= v33 )
        break;
      _27_System_Activator_CreateInstance_T = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      methodPointer = _27_System_Activator_CreateInstance_T->methodPointer;
      v46 = v31;
      v44 = &v46;
      _27_System_Activator_CreateInstance_T->invoker_method(
        methodPointer,
        _27_System_Activator_CreateInstance_T,
        (void *)v7,
        (void **)&v44,
        &v45);
      v36 = *(_DWORD *)sub_1BCA804(v45, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      v37 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v38 = v37->methodPointer;
      v46 = v31;
      v44 = &v46;
      v37->invoker_method(v38, v37, (void *)v7, (void **)&v44, &v45);
      v39 = (__int64)v45;
      v40 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v41 = v40->methodPointer;
      v46 = v33;
      v44 = &v46;
      v40->invoker_method(v41, v40, (void *)v7, (void **)&v44, &v45);
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1BCA804(
                                                                                     v45,
                                                                                     (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( !v39 )
        goto LABEL_32;
      sub_1A17DA0(v39, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, LODWORD(list->klass));
      v42 = (*p_klass)->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v43 = v42->methodPointer;
      v46 = v33;
      v44 = &v46;
      v42->invoker_method(v43, v42, (void *)v7, (void **)&v44, &v45);
      list = v45;
      if ( !v45 )
        goto LABEL_32;
      sub_1A17DA0(v45, (*p_klass)->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, v36);
      ++v31;
      --v32;
    }
    while ( v31 < ((__int64 (__fastcall *)(__int64))(*p_klass)->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v7) );
  }
}


void __fastcall WeightRate___Il2CppFullySharedGenericType___SetAdjust(
        WeightRate_T__o *this,
        const MethodInfo_3984FE0 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  int32_t v5; // w22
  int v6; // w23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v7; // x2
  MethodInfo *_27_System_Activator_CreateInstance_T; // x1
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
    sub_1BCAA3C(list, method);
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
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1BCA804(
                                                                                     v16,
                                                                                     method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( v10 )
      {
        list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_1A17DA0(
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
          v14 = *(_DWORD *)sub_1BCA804(v16, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
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
        const MethodInfo_3984FB0 *method)
{
  return this->fields.totalweight > 0;
}


int32_t __fastcall WeightRate___Il2CppFullySharedGenericType___getCount(
        WeightRate_T__o *this,
        const MethodInfo_3984FC0 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0

  list = this->fields.list;
  if ( list )
    LODWORD(list) = ((__int64 (*)(void))method->klass->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)();
  return (int)list;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall WeightRate___Il2CppFullySharedGenericType___getData(
        WeightRate_T__o *this,
        int32_t keywieght,
        const MethodInfo_3985118 *method)
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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // x0 OVERLAPPED
  void *v27; // x1
  __int64 v28; // [xsp+0h] [xbp-30h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-28h] BYREF
  __int64 v30[2]; // [xsp+20h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v30[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 192LL);
  v9 = *(unsigned int *)(*(_QWORD *)(v8 + 24) + 252LL);
  v10 = (char *)&v28 - ((v9 + 15) & 0x1FFFFFFF0LL);
  v11 = v10;
  memset(v10, 0, *(_DWORD *)(*(_QWORD *)(v8 + 24) + 252LL));
  memset(&v29, 0, sizeof(v29));
  memset(v10, 0, v9);
  v12 = *(__int64 **)(v8 + 216);
  totalweight = this->fields.totalweight;
  v14 = *v12;
  v30[0] = (__int64)v10;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v12[2])(v14, v12, 0LL, v30, v10);
  v15 = memcpy(v10, v10, v9);
  list = this->fields.list;
  if ( !list )
    sub_1BCAA3C(v15, v16);
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v18 + 16))(
    *(_QWORD *)v18,
    v18,
    list,
    0LL,
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
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, __int64 *))(v20 + 16))(
      *(_QWORD *)v20,
      v20,
      &v29,
      0LL,
      v30);
    v21 = v30[0];
    totalweight -= *(_DWORD *)sub_1BCA804(
                                v30[0],
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL));
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 32LL) + 128LL) + 32LL;
    if ( totalweight <= keywieght )
      break;
    v23 = (const void *)sub_1BCA804(v21, v22);
    memcpy(v10, v23, v9);
    memcpy(v10, v10, v9);
  }
  v25 = (const void *)sub_1BCA804(v21, v22);
  memcpy(v10, v25, v9);
  memcpy(v10, v10, v9);
  v24 = 5;
LABEL_8:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v29,
    *(const MethodInfo_333E060 **)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 144LL));
  if ( v24 == 5 )
    v11 = (char *)&v28 - ((v9 + 15) & 0x1FFFFFFF0LL);
  memcpy(v10, v11, v9);
  v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v10, v9);
  result.monitor = v27;
  result.klass = v26;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall WeightRate___Il2CppFullySharedGenericType___getData_60314620(
        WeightRate_T__o *this,
        int32_t keyWeight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o skipValue,
        const MethodInfo_39853FC *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x27
  WeightRate_T__RGCTXs *rgctx_data; // x23
  __int64 native_size; // x21
  char *v9; // x22
  MethodInfo *_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor; // x1
  int32_t totalweight; // w26
  void (__fastcall *methodPointer)(); // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x19
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  WeightRate_T__RGCTXs *v21; // x8
  MethodInfo *_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext; // x1
  MethodInfo *_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current; // x1
  __int64 v24; // x19
  const void *v25; // x0
  __int64 v26; // x0
  WeightRate_T__c *v27; // x25
  Il2CppObject *v28; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v29; // x1
  Il2CppObject *v30; // x1
  MethodInfo *_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray; // x1
  void (__fastcall *v32)(); // x0
  char *v33; // x24
  int32_t v34; // w23
  MethodInfo *_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator; // x1
  MethodInfo *v36; // x1
  MethodInfo *v37; // x1
  struct System_Collections_Generic_List_T__o *v38; // x19
  char *v39; // x1
  const void *v40; // x0
  int v41; // w23
  const void *v42; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v43; // x0 OVERLAPPED
  void *v44; // x1
  __int64 v45; // [xsp+0h] [xbp-90h] BYREF
  char *v46; // [xsp+8h] [xbp-88h]
  void *monitor; // [xsp+10h] [xbp-80h]
  unsigned __int64 StatusReg; // [xsp+18h] [xbp-78h]
  int32_t v49; // [xsp+24h] [xbp-6Ch]
  char *v50; // [xsp+28h] [xbp-68h]
  void *v51; // [xsp+30h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+38h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+50h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v54; // [xsp+70h] [xbp-20h] BYREF
  char v55[4]; // [xsp+7Ch] [xbp-14h] BYREF
  __int64 v56[2]; // [xsp+80h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v49 = keyWeight;
  monitor = skipValue.monitor;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  klass = skipValue.klass;
  v56[1] = *(_QWORD *)(StatusReg + 40);
  v54 = skipValue.klass;
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v9 = (char *)&v45 - ((native_size + 15) & 0x1FFFFFFF0LL);
  memset(v9, 0, rgctx_data->_3_T->_2.native_size);
  memset(&v53, 0, sizeof(v53));
  v46 = v9;
  memset(v9, 0, native_size);
  _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor = rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor;
  totalweight = this->fields.totalweight;
  methodPointer = _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer;
  v56[0] = (__int64)v9;
  _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->invoker_method(
    methodPointer,
    _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor,
    0LL,
    (void **)v56,
    v9);
  v50 = v9;
  memcpy(v9, v9, native_size);
  list = this->fields.list;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C1C6BC();
  v18 = sub_1BCAA2C(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T, v13, v14, v15);
  v19 = ((__int64 (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_29_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__->_1.image)(
          v18,
          list);
  if ( !v18 )
    sub_1BCAA3C(v19, v20);
  v21 = method->klass->rgctx_data;
  v51 = (void *)v18;
  v21->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    v21->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    v21->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    (void *)v18,
    0LL,
    &v52);
  v53 = v52;
  while ( 1 )
  {
    _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext->methodPointer)(
            &v53,
            _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext) & 1) == 0 )
      break;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->invoker_method(
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->methodPointer,
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current,
      &v53,
      0LL,
      v56);
    v24 = v56[0];
    v25 = (const void *)sub_1BCA804(
                          v56[0],
                          (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32);
    memcpy(v9, v25, native_size);
    v26 = j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, v9);
    v27 = method->klass;
    v28 = (Il2CppObject *)v26;
    if ( (v27->rgctx_data->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v29 = &v54;
    else
      v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy(v9, v29, native_size);
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(v27->rgctx_data->_3_T, v9);
    if ( System_Object__Equals_63546356(v28, v30, 0LL) )
    {
      _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray = method->klass->rgctx_data->_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray;
      v32 = _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer;
      v56[0] = v24;
      _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->invoker_method(
        v32,
        _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray,
        v51,
        (void **)v56,
        v55);
      break;
    }
  }
  v33 = v50;
  v34 = v49;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v53,
    (const MethodInfo_333E060 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator = method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator;
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    v51,
    0LL,
    &v52);
  v53 = v52;
  while ( 1 )
  {
    v36 = method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))v36->methodPointer)(
            &v53,
            v36) & 1) == 0 )
    {
      v41 = 9;
      goto LABEL_17;
    }
    v37 = method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    v37->invoker_method(v37->methodPointer, v37, &v53, 0LL, &v52);
    v38 = v52.fields._list;
    totalweight -= *(_DWORD *)sub_1BCA804(
                                v52.fields._list,
                                method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
    v39 = (char *)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32;
    if ( totalweight <= v34 )
      break;
    v40 = (const void *)sub_1BCA804(v38, v39);
    memcpy(v9, v40, native_size);
    memcpy(v33, v9, native_size);
  }
  v42 = (const void *)sub_1BCA804(v38, v39);
  memcpy(v9, v42, native_size);
  memcpy(v46, v9, native_size);
  v41 = 8;
LABEL_17:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v53,
    (const MethodInfo_333E060 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  if ( v41 == 8 )
    v33 = v46;
  memcpy(v9, v33, native_size);
  v43 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v9, native_size);
  result.monitor = v44;
  result.klass = v43;
  return result;
}


int32_t __fastcall WeightRate___Il2CppFullySharedGenericType___getTotalWeight(
        WeightRate_T__o *this,
        const MethodInfo_3984FA8 *method)
{
  return this->fields.totalweight;
}


void __fastcall WeightRate___Il2CppFullySharedGenericType___removeWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3984BC4 *method)
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  __int64 v21; // x0
  __int64 v22; // x23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v23; // x2
  __int64 v24; // x1
  int32_t i; // w23
  __int64 (__fastcall **v26)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v29; // [xsp+18h] [xbp-18h] BYREF
  __int64 v30[2]; // [xsp+20h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v30[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v6 = *(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 252LL);
  memset(&v28, 0, sizeof(v28));
  v29 = t.klass;
  v8 = *(_QWORD *)(v6 + 56);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC();
  v9 = sub_1BCAA2C(v8, t.klass, t.monitor, method);
  v10 = *(void (__fastcall ***)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 64LL);
  (*v10)(v9, v10, v11, v12);
  v13 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 24LL) + 40LL) >= 0 )
    v14 = &v29;
  else
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  v15 = memcpy((char *)&v28 - ((v7 + 15) & 0x1FFFFFFF0LL), v14, v7);
  if ( !v9 )
    goto LABEL_15;
  sub_1BCA808(
    v9,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 192) + 56LL) + 128LL),
    (char *)&v28 - ((v7 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v7);
  list = this->fields.list;
  v21 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 80LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC();
  v22 = sub_1BCAA2C(v21, v17, v18, v19);
  v15 = (void *)(**(__int64 (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 88LL))(
                  v22,
                  v9,
                  *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 72LL));
  if ( !list
    || (v15 = (void *)(**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 96LL))(
                        list,
                        v22),
        (v23 = this->fields.list) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(v15, v16);
  }
  v24 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v24 + 16))(
    *(_QWORD *)v24,
    v24,
    v23,
    0LL,
    &v28);
  for ( i = 0;
        ;
        i += *(_DWORD *)sub_1BCA804(v30[0], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 32LL) + 128LL)) )
  {
    v26 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL)
                                                                                               + 136LL);
    if ( ((*v26)(&v28, v26) & 1) == 0 )
      break;
    v27 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, __int64 *))(v27 + 16))(
      *(_QWORD *)v27,
      v27,
      &v28,
      0LL,
      v30);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v28,
    *(const MethodInfo_333E060 **)(*(_QWORD *)(monitor[4] + 192LL) + 144LL));
  this->fields.totalweight = i;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate___Il2CppFullySharedGenericType___setWeight(
        WeightRate_T__o *this,
        int32_t weight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3984A14 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 v7; // x28
  __int64 v9; // x8
  __int64 v10; // x24
  _QWORD *v11; // x21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x22
  PartyOrganizationUtility_o *p_fields; // x26
  int32_t totalweight; // w9
  __int64 v15; // x0
  int64_t v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x0
  __int64 v28; // x23
  __int64 v29; // x8
  __int64 *v30; // x1
  int v31; // w9
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 *v35; // x1
  __int64 v36; // x0
  __int64 v37; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v38; // [xsp+8h] [xbp-28h] BYREF
  __int64 v39[2]; // [xsp+10h] [xbp-20h] BYREF
  int32_t v40; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v41; // [xsp+28h] [xbp-8h]

  monitor = t.monitor;
  klass = t.klass;
  v41 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v38 = t.klass;
  v7 = *((_QWORD *)t.monitor + 4);
  v9 = *(_QWORD *)(v7 + 192);
  v10 = *(unsigned int *)(*(_QWORD *)(v9 + 24) + 252LL);
  v11 = (__int64 *)((char *)&v37 - ((v10 + 15) & 0x1FFFFFFF0LL));
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  list = this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    v15 = *(_QWORD *)(v9 + 8);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C1C6BC();
    v16 = sub_1BCAA2C(v15, *(_QWORD *)&weight, t.klass, t.monitor);
    (**(void (***)(void))(*(_QWORD *)(monitor[4] + 192LL) + 16LL))();
    p_fields->klass = (PartyOrganizationUtility_c *)v16;
    sub_1BCA784(p_fields, v16, v17, v18, v19, v20, v21, v22);
    v7 = monitor[4];
    list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)p_fields->klass;
    totalweight = 0;
    v9 = *(_QWORD *)(v7 + 192);
  }
  this->fields.totalweight = totalweight + weight;
  if ( *(int *)(*(_QWORD *)(v9 + 24) + 40LL) >= 0 )
    v23 = &v38;
  else
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v37 - ((v10 + 15) & 0x1FFFFFFF0LL), v23, v10);
  v27 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 32LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C1C6BC();
  v28 = sub_1BCAA2C(v27, v24, v25, v26);
  v29 = *(_QWORD *)(monitor[4] + 192LL);
  v30 = *(__int64 **)(v29 + 40);
  v31 = *(_DWORD *)(*(_QWORD *)(v29 + 24) + 40LL);
  v32 = *v30;
  if ( (v31 & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v40 = weight;
  v39[0] = (__int64)&v40;
  v39[1] = (__int64)v11;
  v33 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64 *, _QWORD *))v30[2])(v32, v30, v28, v39, v11);
  if ( !list )
    sub_1BCAA3C(v33, v34);
  v35 = *(__int64 **)(*(_QWORD *)(monitor[4] + 192LL) + 48LL);
  v36 = *v35;
  v39[0] = v28;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64 *, __int64))v35[2])(
    v36,
    v35,
    list,
    v39,
    v28);
}