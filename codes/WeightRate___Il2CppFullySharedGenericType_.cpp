void WeightRate___Il2CppFullySharedGenericType____ctor(WeightRate_T__o *this, const MethodInfo_3DA3190 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate___Il2CppFullySharedGenericType___HasWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3DA2218 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x24
  __int64 v6; // x8
  __int64 v7; // x8
  size_t v8; // x21
  __int64 v9; // x0
  __int64 v10; // x22
  void (__fastcall **v11)(__int64, _QWORD); // x1
  __int64 v12; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v13; // x1
  void *v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x20
  __int64 v17; // x0
  __int64 v18; // x21
  _QWORD v20[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v20[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((_QWORD *)t.monitor + 4);
  v20[0] = t.klass;
  v7 = *(_QWORD *)(v6 + 192);
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 24) + 252LL);
  v9 = *(_QWORD *)(v7 + 152);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908();
  v10 = sub_2213CCC(v9);
  v11 = *(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 160LL);
  (*v11)(v10, v11);
  v12 = *(_QWORD *)(monitor[4] + 192LL);
  if ( *(int *)(*(_QWORD *)(v12 + 24) + 40LL) >= 0 )
    v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v20;
  else
    v13 = klass;
  v14 = memcpy((char *)v20 - ((v8 + 15) & 0x1FFFFFFF0LL), v13, v8);
  if ( !v10 )
    sub_2213CDC(v14, v15);
  sub_2213A8C(
    v10,
    *(_QWORD *)(*(_QWORD *)(v12 + 152) + 128LL),
    (char *)v20 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
  list = this->fields.list;
  v17 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 176LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_224B908();
  v18 = sub_2213CCC(v17);
  (**(void (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 184LL))(
    v18,
    v10,
    *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 168LL));
  return (**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 192LL))(
           list,
           v18)
       & 1;
}


void WeightRate___Il2CppFullySharedGenericType___ReverseWeight(WeightRate_T__o *this, const MethodInfo_3DA2DE0 *method)
{
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  __int64 v5; // x20
  __int64 v6; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  __int64 v8; // x1
  long double v9; // q0
  __int64 _37_WeightRate___c_T___ReverseWeight_b__12_0; // x0
  WeightRate_T__c *klass; // x8
  __int64 v12; // x0
  __int64 v13; // x21
  __int64 v14; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v16; // x0
  __int64 _36_WeightRate___c_T; // x8
  __int64 v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  WeightRate_T__RGCTXs *v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  int v28; // w23
  int v29; // w24
  int v30; // w26
  WeightRate_T__c *v31; // x8
  MethodInfo *_27_System_Activator_CreateInstance_T; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **); // x8
  unsigned int *v35; // x0
  WeightRate_T__c *v36; // x8
  unsigned int v37; // w21
  MethodInfo *v38; // x1
  Il2CppMethodPointer v39; // x0
  void (__fastcall *v40)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **); // x8
  WeightRate_T__c *v41; // x8
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v42; // x22
  MethodInfo *v43; // x1
  Il2CppMethodPointer v44; // x0
  void (__fastcall *v45)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **); // x8
  WeightRate_T__c *v46; // x8
  MethodInfo *v47; // x1
  Il2CppMethodPointer v48; // x0
  void (__fastcall *v49)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **); // x8
  int *v50; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v51; // [xsp+8h] [xbp-58h] BYREF
  int v52; // [xsp+1Ch] [xbp-44h] BYREF

  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_WORD *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_224B908();
  v5 = sub_2213CCC(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer();
  list = this->fields.list;
  if ( !list
    || (list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)((__int64 (*)(void))method->klass->rgctx_data->_32_WeightRate_WeightSeed_T___->_1.image)(),
        !v5) )
  {
LABEL_32:
    sub_2213CDC(list, v6);
  }
  ((void (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))method->klass->rgctx_data->_34_WeightRate___c_T_->_1.image)(
    v5,
    list);
  _37_WeightRate___c_T___ReverseWeight_b__12_0 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_WORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 309) & 1) == 0 )
    _37_WeightRate___c_T___ReverseWeight_b__12_0 = sub_224B908();
  if ( !*(_DWORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 228) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(_37_WeightRate___c_T___ReverseWeight_b__12_0, v8);
  klass = method->klass;
  v12 = (__int64)klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
  {
    v12 = sub_224B908();
    klass = method->klass;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 184) + 8LL);
  if ( !v13 )
  {
    v14 = (__int64)klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908();
    if ( !*(_DWORD *)(v14 + 228) )
      j_il2cpp_runtime_class_init_0(v14, v8);
    rgctx_data = method->klass->rgctx_data;
    v16 = (__int64)rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    {
      v16 = sub_224B908();
      rgctx_data = method->klass->rgctx_data;
    }
    _36_WeightRate___c_T = (__int64)rgctx_data->_36_WeightRate___c_T_;
    v18 = **(_QWORD **)(v16 + 184);
    if ( (*(_WORD *)(_36_WeightRate___c_T + 309) & 1) == 0 )
      _36_WeightRate___c_T = sub_224B908();
    v13 = sub_2213CCC(_36_WeightRate___c_T);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->klass->rgctx_data->_39_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort->methodPointer)(
      v13,
      v18,
      method->klass->rgctx_data->_38_System_Comparison_WeightRate_WeightSeed_T____ctor);
    v25 = method->klass->rgctx_data;
    v26 = (__int64)v25->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    {
      v26 = sub_224B908();
      v25 = method->klass->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v26 + 184) + 8LL) = v13;
    v27 = (__int64)v25->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
      v27 = sub_224B908();
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(*(_QWORD *)(v27 + 184) + 8LL), v13, v19, v20, v21, v22, v23, v24);
    klass = method->klass;
  }
  ((void (__fastcall *)(__int64, __int64, long double))klass->rgctx_data[1]._0_WeightRate_T_->_1.image)(v5, v13, v9);
  if ( ((__int64 (__fastcall *)(__int64))method->klass->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5) >= 1 )
  {
    v28 = 0;
    v29 = -1;
    do
    {
      v30 = ((__int64 (__fastcall *)(__int64))method->klass->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5)
          + v29;
      if ( v28 >= v30 )
        break;
      v31 = method->klass;
      v52 = v28;
      _27_System_Activator_CreateInstance_T = v31->rgctx_data->_27_System_Activator_CreateInstance_T_;
      methodPointer = _27_System_Activator_CreateInstance_T->methodPointer;
      invoker_method = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **))_27_System_Activator_CreateInstance_T->invoker_method;
      v50 = &v52;
      invoker_method(methodPointer, _27_System_Activator_CreateInstance_T, v5, &v50, &v51);
      v35 = (unsigned int *)sub_2213A88(v51, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      v36 = method->klass;
      v37 = *v35;
      v52 = v28;
      v38 = v36->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v39 = v38->methodPointer;
      v40 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **))v38->invoker_method;
      v50 = &v52;
      v40(v39, v38, v5, &v50, &v51);
      v41 = method->klass;
      v42 = v51;
      v52 = v30;
      v43 = v41->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v44 = v43->methodPointer;
      v45 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **))v43->invoker_method;
      v50 = &v52;
      v45(v44, v43, v5, &v50, &v51);
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_2213A88(
                                                                                     v51,
                                                                                     method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( !v42 )
        goto LABEL_32;
      sub_201DB34(v42, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, LODWORD(list->klass));
      v46 = method->klass;
      v52 = v30;
      v47 = v46->rgctx_data->_27_System_Activator_CreateInstance_T_;
      v48 = v47->methodPointer;
      v49 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, __int64, int **, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o **))v47->invoker_method;
      v50 = &v52;
      v49(v48, v47, v5, &v50, &v51);
      list = v51;
      if ( !v51 )
        goto LABEL_32;
      sub_201DB34(v51, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields, v37);
      ++v28;
      --v29;
    }
    while ( v28 < ((__int64 (__fastcall *)(__int64))method->klass->rgctx_data->_26_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Item->methodPointer)(v5) );
  }
}


void WeightRate___Il2CppFullySharedGenericType___SetAdjust(WeightRate_T__o *this, const MethodInfo_3DA23C8 *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x0
  int32_t v5; // w22
  int v6; // w23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v7; // x2
  WeightRate_T__c *klass; // x8
  MethodInfo *_27_System_Activator_CreateInstance_T; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, int **, __int64 *); // x8
  __int64 v12; // x21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v13; // x2
  WeightRate_T__c *v14; // x8
  MethodInfo *v15; // x1
  Il2CppMethodPointer v16; // x0
  void (__fastcall *v17)(Il2CppMethodPointer, MethodInfo *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, int **, __int64 *); // x8
  _DWORD *v18; // x8
  int *v19; // [xsp+0h] [xbp-50h] BYREF
  __int64 v20; // [xsp+8h] [xbp-48h] BYREF
  int v21; // [xsp+1Ch] [xbp-34h] BYREF

  list = this->fields.list;
  if ( !list )
LABEL_8:
    sub_2213CDC(list, method);
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
      klass = method->klass;
      v21 = v6;
      _27_System_Activator_CreateInstance_T = klass->rgctx_data->_27_System_Activator_CreateInstance_T_;
      methodPointer = _27_System_Activator_CreateInstance_T->methodPointer;
      invoker_method = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, int **, __int64 *))_27_System_Activator_CreateInstance_T->invoker_method;
      v19 = &v21;
      invoker_method(methodPointer, _27_System_Activator_CreateInstance_T, v7, &v19, &v20);
      v12 = v20;
      list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_2213A88(
                                                                                     v20,
                                                                                     method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
      if ( v12 )
      {
        list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_201DB34(
                                                                                       v12,
                                                                                       method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields,
                                                                                       (unsigned int)(LODWORD(list->klass) + 1));
        v13 = this->fields.list;
        if ( v13 )
        {
          v14 = method->klass;
          v21 = v6;
          v15 = v14->rgctx_data->_27_System_Activator_CreateInstance_T_;
          v16 = v15->methodPointer;
          v17 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, int **, __int64 *))v15->invoker_method;
          v19 = &v21;
          v17(v16, v15, v13, &v19, &v20);
          v18 = (_DWORD *)sub_2213A88(v20, method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
          list = this->fields.list;
          ++v6;
          v5 += *v18;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_8;
  }
  this->fields.totalweight = v5;
}


bool WeightRate___Il2CppFullySharedGenericType___checkWeight(WeightRate_T__o *this, const MethodInfo_3DA2398 *method)
{
  return this->fields.totalweight > 0;
}


int32_t WeightRate___Il2CppFullySharedGenericType___getCount(WeightRate_T__o *this, const MethodInfo_3DA23A8 *method)
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
        const MethodInfo_3DA2504 *method)
{
  __int64 v3; // x3
  __int64 v4; // x25
  __int64 v8; // x8
  __int64 v9; // x28
  size_t v10; // x20
  char *v11; // x21
  __int64 *v12; // x1
  int32_t totalweight; // w28
  __int64 v14; // x0
  void (__fastcall *v15)(__int64, __int64 *, _QWORD, _QWORD *, char *); // x8
  void *v16; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x2
  __int64 v19; // x1
  __int64 (__fastcall **v20)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v21; // x1
  __int64 v22; // x25
  __int64 v23; // x8
  const void *v24; // x25
  int v25; // w25
  const void *v26; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v27; // x0
  void *v28; // x1
  _QWORD v30[3]; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-30h] BYREF
  __int64 v32; // [xsp+38h] [xbp-18h] BYREF
  _QWORD v33[2]; // [xsp+40h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v33[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(_QWORD *)(v3 + 32);
  v32 = v3;
  v9 = *(_QWORD *)(v8 + 192);
  v10 = *(unsigned int *)(*(_QWORD *)(v9 + 24) + 252LL);
  v11 = (char *)&v30[-1] - ((v10 + 15) & 0x1FFFFFFF0LL);
  memset(&v31, 0, sizeof(v31));
  memset(v11, 0, v10);
  v12 = *(__int64 **)(v9 + 216);
  totalweight = this->fields.totalweight;
  v14 = *v12;
  v15 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, char *))v12[2];
  v30[0] = v11;
  v15(v14, v12, 0, v30, v11);
  v16 = memcpy(v11, v11, v10);
  list = this->fields.list;
  if ( !list )
    sub_2213CDC(v16, v17);
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v19 + 16))(
    *(_QWORD *)v19,
    v19,
    list,
    0,
    &v31);
  v30[0] = 0;
  v30[1] = &v31;
  v30[2] = &v32;
  while ( 1 )
  {
    v20 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 192LL)
                                                                                               + 136LL);
    if ( ((*v20)(&v31, v20) & 1) == 0 )
    {
      v25 = 6;
      goto LABEL_8;
    }
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 32) + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, _QWORD *))(v21 + 16))(
      *(_QWORD *)v21,
      v21,
      &v31,
      0,
      v33);
    v22 = v33[0];
    totalweight -= *(_DWORD *)sub_2213A88(
                                v33[0],
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 32) + 192LL) + 32LL) + 128LL));
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 32) + 192LL) + 32LL) + 128LL);
    if ( totalweight <= keywieght )
      break;
    v24 = (const void *)sub_2213A88(v22, v23 + 32);
    memcpy((char *)&v30[-1] - ((v10 + 15) & 0x1FFFFFFF0LL), v24, v10);
    memcpy((char *)&v30[-1] - ((v10 + 15) & 0x1FFFFFFF0LL), v24, v10);
    v4 = v32;
  }
  v26 = (const void *)sub_2213A88(v22, v23 + 32);
  memcpy((char *)&v30[-1] - ((v10 + 15) & 0x1FFFFFFF0LL), v26, v10);
  memcpy((char *)&v30[-1] - ((v10 + 15) & 0x1FFFFFFF0LL), v26, v10);
  v25 = 5;
LABEL_8:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v31,
    *(const MethodInfo_41389F0 **)(*(_QWORD *)(*(_QWORD *)(v32 + 32) + 192LL) + 144LL));
  if ( v25 == 5 )
    v11 = (char *)&v30[-1] - ((v10 + 15) & 0x1FFFFFFF0LL);
  memcpy((char *)&v30[-1] - ((v10 + 15) & 0x1FFFFFFF0LL), v11, v10);
  v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v11, v10);
  result.monitor = v28;
  result.klass = v27;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o WeightRate___Il2CppFullySharedGenericType___getData_64628772(
        WeightRate_T__o *this,
        int32_t keyWeight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o skipValue,
        const MethodInfo_3DA2824 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  WeightRate_T__c *v8; // x8
  WeightRate_T__RGCTXs *rgctx_data; // x19
  size_t actualSize; // x20
  MethodInfo *_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor; // x1
  int32_t totalweight; // w23
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x19
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  MethodInfo *_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator; // x1
  __int128 v21; // q0
  MethodInfo *_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext; // x1
  MethodInfo *_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current; // x1
  __int64 v24; // x28
  const void *v25; // x0
  __int64 v26; // x0
  const MethodInfo_3DA2824 *v27; // x22
  Il2CppObject *v28; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v29; // x1
  Il2CppObject *v30; // x1
  MethodInfo *_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray; // x1
  Il2CppMethodPointer v32; // x0
  void (__fastcall *v33)(Il2CppMethodPointer, MethodInfo *, __int64, __int64 *, char *); // x8
  void *v34; // x19
  void *v35; // x22
  MethodInfo *v36; // x1
  __int128 v37; // q0
  MethodInfo *v38; // x1
  MethodInfo *v39; // x1
  __int64 v40; // x25
  char *fields; // x8
  const void *v42; // x19
  int v43; // w19
  const void *v44; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v45; // x0
  void *v46; // x1
  char *v47; // [xsp+0h] [xbp-90h] BYREF
  void *monitor; // [xsp+8h] [xbp-88h]
  __int64 v49; // [xsp+10h] [xbp-80h]
  unsigned __int64 StatusReg; // [xsp+18h] [xbp-78h]
  char *v51; // [xsp+20h] [xbp-70h]
  __int128 v52; // [xsp+28h] [xbp-68h] BYREF
  Il2CppObject *v53; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+40h] [xbp-50h] BYREF
  const MethodInfo_3DA2824 *v55; // [xsp+60h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v56; // [xsp+68h] [xbp-28h] BYREF
  __int64 v57; // [xsp+70h] [xbp-20h] BYREF
  char v58; // [xsp+7Fh] [xbp-11h] BYREF
  _QWORD v59[2]; // [xsp+80h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = skipValue.monitor;
  klass = skipValue.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v59[1] = *(_QWORD *)(StatusReg + 40);
  v8 = method->klass;
  v55 = method;
  v56 = skipValue.klass;
  rgctx_data = v8->rgctx_data;
  actualSize = rgctx_data->_3_T->_2.actualSize;
  memset(&v54, 0, sizeof(v54));
  v47 = (char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  memset(v47, 0, actualSize);
  _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor = rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor;
  totalweight = this->fields.totalweight;
  methodPointer = _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->methodPointer;
  invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor->invoker_method;
  *(_QWORD *)&v52 = (char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  invoker_method(methodPointer, _28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor, 0, &v52, v52);
  v51 = (char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  memcpy(v51, v51, actualSize);
  list = this->fields.list;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_WORD *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_224B908();
  v17 = sub_2213CCC(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  v18 = ((__int64 (__fastcall *)(__int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *))v55->klass->rgctx_data->_29_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__->_1.image)(
          v17,
          list);
  if ( !v17 )
    sub_2213CDC(v18, v19);
  v49 = v17;
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator = v55->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator;
  _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->invoker_method(
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator->methodPointer,
    _13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator,
    (void *)v17,
    0,
    &v52);
  v21 = v52;
  v54.fields._current = v53;
  *(_QWORD *)&v52 = 0;
  *((_QWORD *)&v52 + 1) = &v54;
  *(_OWORD *)&v54.fields._list = v21;
  v53 = (Il2CppObject *)&v55;
  while ( 1 )
  {
    _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext = v55->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext->methodPointer)(
            &v54,
            _17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext)
        & 1) == 0 )
      break;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current = v55->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->invoker_method(
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current->methodPointer,
      _15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current,
      &v54,
      0,
      &v57);
    v24 = v57;
    v25 = (const void *)sub_2213A88(v57, (char *)v55->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields + 32);
    memcpy((char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL), v25, actualSize);
    v26 = j_il2cpp_value_box_0(v55->klass->rgctx_data->_3_T, (char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL));
    v27 = v55;
    v28 = (Il2CppObject *)v26;
    if ( (v55->klass->rgctx_data->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v29 = &v56;
    else
      v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL), v29, actualSize);
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(
                            v27->klass->rgctx_data->_3_T,
                            (char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL));
    if ( System_Object__Equals_77474940(v28, v30, 0) )
    {
      _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray = v55->klass->rgctx_data->_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray;
      v32 = _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->methodPointer;
      v33 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, __int64, __int64 *, char *))_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray->invoker_method;
      v57 = v24;
      v34 = (void *)v49;
      v33(v32, _31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray, v49, &v57, &v58);
      v35 = v51;
      goto LABEL_12;
    }
  }
  v35 = v51;
  v34 = (void *)v49;
LABEL_12:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v54,
    (const MethodInfo_41389F0 *)v55->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  v36 = v55->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator;
  v36->invoker_method(v36->methodPointer, v36, v34, 0, &v52);
  v37 = v52;
  v54.fields._current = v53;
  *(_QWORD *)&v52 = 0;
  *((_QWORD *)&v52 + 1) = &v54;
  *(_OWORD *)&v54.fields._list = v37;
  v53 = (Il2CppObject *)&v55;
  while ( 1 )
  {
    v38 = v55->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext;
    if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_Enumerator_T__o *, MethodInfo *))v38->methodPointer)(
            &v54,
            v38)
        & 1) == 0 )
    {
      v43 = 9;
      goto LABEL_18;
    }
    v39 = v55->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___get_Current;
    v39->invoker_method(v39->methodPointer, v39, &v54, 0, v59);
    v40 = v59[0];
    totalweight -= *(_DWORD *)sub_2213A88(v59[0], v55->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields);
    fields = (char *)v55->klass->rgctx_data->_4_WeightRate_WeightSeed_T_->_1.fields;
    if ( totalweight <= keyWeight )
      break;
    v42 = (const void *)sub_2213A88(v40, fields + 32);
    memcpy((char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL), v42, actualSize);
    memcpy(v35, v42, actualSize);
  }
  v44 = (const void *)sub_2213A88(v40, fields + 32);
  memcpy((char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL), v44, actualSize);
  memcpy(v47, v44, actualSize);
  v43 = 8;
LABEL_18:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v54,
    (const MethodInfo_41389F0 *)v55->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  if ( v43 == 8 )
    v35 = v47;
  memcpy((char *)&v47 - ((actualSize + 15) & 0x1FFFFFFF0LL), v35, actualSize);
  v45 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v35, actualSize);
  result.monitor = v46;
  result.klass = v45;
  return result;
}


int32_t WeightRate___Il2CppFullySharedGenericType___getTotalWeight(
        WeightRate_T__o *this,
        const MethodInfo_3DA2390 *method)
{
  return this->fields.totalweight;
}


void WeightRate___Il2CppFullySharedGenericType___removeWeight(
        WeightRate_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3DA1F54 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 v6; // x8
  __int64 v7; // x8
  size_t v8; // x21
  __int64 v9; // x0
  __int64 v10; // x22
  __int64 v11; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v12; // x1
  void *v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x21
  __int64 v16; // x0
  __int64 v17; // x23
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v18; // x2
  __int64 v19; // x1
  int32_t v20; // w21
  __int64 (__fastcall **v21)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD); // x1
  __int64 v22; // x1
  _DWORD *v23; // x0
  _QWORD v24[3]; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+18h] [xbp-38h] BYREF
  _QWORD *v26; // [xsp+30h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v27; // [xsp+38h] [xbp-18h] BYREF
  _QWORD v28[2]; // [xsp+40h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v28[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((_QWORD *)t.monitor + 4);
  v26 = t.monitor;
  v27 = t.klass;
  v7 = *(_QWORD *)(v6 + 192);
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 24) + 252LL);
  memset(&v25, 0, sizeof(v25));
  v9 = *(_QWORD *)(v7 + 56);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908();
  v10 = sub_2213CCC(v9);
  (**(void (***)(void))(*(_QWORD *)(monitor[4] + 192LL) + 64LL))();
  v11 = *(_QWORD *)(monitor[4] + 192LL);
  if ( *(int *)(*(_QWORD *)(v11 + 24) + 40LL) >= 0 )
    v12 = &v27;
  else
    v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  v13 = memcpy((char *)v24 - ((v8 + 15) & 0x1FFFFFFF0LL), v12, v8);
  if ( !v10 )
    goto LABEL_15;
  sub_2213A8C(
    v10,
    *(_QWORD *)(*(_QWORD *)(v11 + 56) + 128LL),
    (char *)v24 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
  list = this->fields.list;
  v16 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 80LL);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908();
  v17 = sub_2213CCC(v16);
  v13 = (void *)(**(__int64 (__fastcall ***)(__int64, __int64, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 88LL))(
                  v17,
                  v10,
                  *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 72LL));
  if ( !list
    || (v13 = (void *)(**(__int64 (__fastcall ***)(struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 96LL))(
                        list,
                        v17),
        (v18 = this->fields.list) == 0) )
  {
LABEL_15:
    sub_2213CDC(v13, v14);
  }
  v19 = *(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 104LL);
  (*(void (__fastcall **)(_QWORD, __int64, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD, System_Collections_Generic_List_Enumerator_T__o *))(v19 + 16))(
    *(_QWORD *)v19,
    v19,
    v18,
    0,
    &v25);
  v20 = 0;
  v24[0] = 0;
  v24[1] = &v25;
  v24[2] = &v26;
  while ( 1 )
  {
    v21 = *(__int64 (__fastcall ***)(System_Collections_Generic_List_Enumerator_T__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL)
                                                                                               + 136LL);
    if ( ((*v21)(&v25, v21) & 1) == 0 )
      break;
    v22 = *(_QWORD *)(*(_QWORD *)(v26[4] + 192LL) + 120LL);
    (*(void (__fastcall **)(_QWORD, __int64, System_Collections_Generic_List_Enumerator_T__o *, _QWORD, _QWORD *))(v22 + 16))(
      *(_QWORD *)v22,
      v22,
      &v25,
      0,
      v28);
    v23 = (_DWORD *)sub_2213A88(v28[0], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26[4] + 192LL) + 32LL) + 128LL));
    monitor = v26;
    v20 += *v23;
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose(
    &v25,
    *(const MethodInfo_41389F0 **)(*(_QWORD *)(v26[4] + 192LL) + 144LL));
  this->fields.totalweight = v20;
}


void WeightRate___Il2CppFullySharedGenericType___setWeight(
        WeightRate_T__o *this,
        int32_t weight,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3DA1D8C *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 v8; // x8
  _QWORD *v9; // x28
  size_t v10; // x24
  _QWORD *v11; // x21
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x22
  MissionNaviTransitionBoardItem_o *p_fields; // x26
  int32_t totalweight; // w8
  __int64 v15; // x0
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v23; // x1
  __int64 v24; // x0
  __int64 v25; // x23
  __int64 v26; // x8
  __int64 *v27; // x1
  __int64 (__fastcall *v28)(__int64, __int64 *, __int64, _QWORD *, _QWORD *); // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 *v32; // x1
  __int64 v33; // x0
  void (__fastcall *v34)(__int64, __int64 *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD *, __int64); // x8
  __int64 v35; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v36; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v37[2]; // [xsp+10h] [xbp-20h] BYREF
  int32_t v38; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v39; // [xsp+28h] [xbp-8h]

  monitor = t.monitor;
  klass = t.klass;
  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *((_QWORD *)t.monitor + 4);
  v36 = t.klass;
  v9 = *(_QWORD **)(v8 + 192);
  v10 = *(unsigned int *)(v9[3] + 252LL);
  v11 = (__int64 *)((char *)&v35 - ((v10 + 15) & 0x1FFFFFFF0LL));
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  list = this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    v15 = v9[1];
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_224B908();
    v16 = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)sub_2213CCC(v15);
    (**(void (***)(void))(*(_QWORD *)(monitor[4] + 192LL) + 16LL))();
    this->fields.list = v16;
    sub_2213A04(p_fields, (int32_t)v16, v17, v18, v19, v20, v21, v22);
    this->fields.totalweight = 0;
    list = this->fields.list;
    v9 = *(_QWORD **)(monitor[4] + 192LL);
    totalweight = 0;
  }
  this->fields.totalweight = totalweight + weight;
  if ( *(int *)(v9[3] + 40LL) >= 0 )
    v23 = &v36;
  else
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v35 - ((v10 + 15) & 0x1FFFFFFF0LL), v23, v10);
  v24 = v9[4];
  if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
    v24 = sub_224B908();
  v25 = sub_2213CCC(v24);
  v26 = *(_QWORD *)(monitor[4] + 192LL);
  v27 = *(__int64 **)(v26 + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(v26 + 24) + 40LL) & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v28 = (__int64 (__fastcall *)(__int64, __int64 *, __int64, _QWORD *, _QWORD *))v27[2];
  v29 = *v27;
  v38 = weight;
  v37[0] = &v38;
  v37[1] = v11;
  v30 = v28(v29, v27, v25, v37, v11);
  if ( !list )
    sub_2213CDC(v30, v31);
  v32 = *(__int64 **)(*(_QWORD *)(monitor[4] + 192LL) + 48LL);
  v33 = *v32;
  v34 = (void (__fastcall *)(__int64, __int64 *, struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *, _QWORD *, __int64))v32[2];
  v37[0] = v25;
  v34(v33, v32, list, v37, v25);
}