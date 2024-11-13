void __fastcall WeightRate_WeightSeed___Il2CppFullySharedGenericType____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3985CCC *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v8; // x22
  __int64 v9; // x19
  __int64 *v10; // x1
  __int64 v11[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v11[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v11[0] = (__int64)t.klass;
  v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL) + 8LL) + 252LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_1A17DA0(this, *(_QWORD *)(**(_QWORD **)(monitor[4] + 192LL) + 128LL), (unsigned int)w);
  v9 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v9 + 192) + 8LL) + 40LL) >= 0 )
    v10 = v11;
  else
    v10 = (__int64 *)klass;
  memcpy((char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  sub_1BCA808(
    this,
    *(_QWORD *)(**(_QWORD **)(v9 + 192) + 128LL) + 32LL,
    (char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
}


void __fastcall WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_3985CA0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_30DB9C8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_30DB9D0 *method)
{
  WeightRate___c__DisplayClass4_0_T__RGCTXs *rgctx_data; // x9
  Il2CppClass *_1_T; // x8
  __int64 native_size; // x24
  int32_t v9; // w8
  char *v10; // x21
  _QWORD *v11; // x22
  const void *v12; // x0
  WeightRate___c__DisplayClass4_0_T__RGCTXs *v13; // x8
  Il2CppClass *v14; // x23
  Il2CppClass *_0_WeightRate___c__DisplayClass4_0_T; // x24
  void *v16; // x3
  _QWORD v18[2]; // [xsp+0h] [xbp-20h] BYREF
  int v19; // [xsp+14h] [xbp-Ch]
  __int64 v20; // [xsp+18h] [xbp-8h]

  v20 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  _1_T = rgctx_data->_1_T;
  native_size = (unsigned int)_1_T->_2.native_size;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) != 0 )
  {
    v9 = _1_T->_2.native_size;
  }
  else
  {
    v9 = *(_DWORD *)(sub_1C1C6BC() + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - (((unsigned int)(v9 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_1BCA804(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, native_size);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v14) = sub_1C1C6BC();
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass4_0_T = v13[1]._0_WeightRate___c__DisplayClass4_0_T_;
  v16 = (void *)sub_1BCA804(this, v13->_0_WeightRate___c__DisplayClass4_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_1BCB248((int)v14, (int)_0_WeightRate___c__DisplayClass4_0_T, (int)v10, v16);
  return v19 == 0;
}


void __fastcall WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_30DB924 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_30DB92C *method)
{
  if ( !s )
    sub_1BCAA3C(this, 0LL);
  return System_Int32__CompareTo_63206508(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass4_0_T_) == 0;
}


void __fastcall WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_30DD42C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_30DD434 *method)
{
  WeightRate___c__DisplayClass5_0_T__RGCTXs *rgctx_data; // x9
  Il2CppClass *_1_T; // x8
  __int64 native_size; // x24
  int32_t v9; // w8
  char *v10; // x21
  _QWORD *v11; // x22
  const void *v12; // x0
  WeightRate___c__DisplayClass5_0_T__RGCTXs *v13; // x8
  Il2CppClass *v14; // x23
  Il2CppClass *_0_WeightRate___c__DisplayClass5_0_T; // x24
  void *v16; // x3
  _QWORD v18[2]; // [xsp+0h] [xbp-20h] BYREF
  int v19; // [xsp+14h] [xbp-Ch]
  __int64 v20; // [xsp+18h] [xbp-8h]

  v20 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  _1_T = rgctx_data->_1_T;
  native_size = (unsigned int)_1_T->_2.native_size;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) != 0 )
  {
    v9 = _1_T->_2.native_size;
  }
  else
  {
    v9 = *(_DWORD *)(sub_1C1C6BC() + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - (((unsigned int)(v9 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_1BCA804(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, native_size);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v14) = sub_1C1C6BC();
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass5_0_T = v13[1]._0_WeightRate___c__DisplayClass5_0_T_;
  v16 = (void *)sub_1BCA804(this, v13->_0_WeightRate___c__DisplayClass5_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_1BCB248((int)v14, (int)_0_WeightRate___c__DisplayClass5_0_T, (int)v10, v16);
  return v19 == 0;
}


void __fastcall WeightRate___c__DisplayClass5_0_int____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_30DD388 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass5_0_int____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_30DD390 *method)
{
  if ( !s )
    sub_1BCAA3C(this, 0LL);
  return System_Int32__CompareTo_63206508(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass5_0_T_) == 0;
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____cctor(const MethodInfo_30D1ECC *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x8
  int64_t v9; // x20
  __int16 v10; // w9
  __int64 v11; // x0
  void (__fastcall *v12)(int64_t, _QWORD); // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = sub_1BCAA2C(v6, v1, v2, v3);
  v8 = (__int64)method->klass;
  v9 = v7;
  v10 = *(_WORD *)(v8 + 309);
  if ( (v10 & 1) != 0 )
  {
    v11 = (__int64)method->klass;
  }
  else
  {
    v11 = sub_1C1C6BC();
    v8 = (__int64)method->klass;
    v10 = *(_WORD *)(v8 + 309);
  }
  v12 = **(void (__fastcall ***)(int64_t, _QWORD))(*(_QWORD *)(v11 + 192) + 8LL);
  if ( (v10 & 1) == 0 )
    v8 = sub_1C1C6BC();
  v12(v9, *(_QWORD *)(*(_QWORD *)(v8 + 192) + 8LL));
  v19 = (__int64)method->klass;
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1C6BC();
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC();
  **(_QWORD **)(v20 + 184) = v9;
  v21 = (__int64)method->klass;
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC();
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v22 + 184), v9, v13, v14, v15, v16, v17, v18);
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____ctor(
        WeightRate___c_T__o *this,
        const MethodInfo_30D1FC0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c___Il2CppFullySharedGenericType____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_30D1FC8 *method)
{
  const MethodInfo_30D1FC8 *v5; // x19
  _DWORD *v6; // x0
  WeightRate___c_T__c *klass; // x8

  v5 = method;
  v6 = (_DWORD *)sub_1BCA804(b, method->klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
  klass = v5->klass;
  LODWORD(v5) = *v6;
  return (_DWORD)v5 - *(_DWORD *)sub_1BCA804(a, klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
}


void __fastcall WeightRate___c_int____cctor(const MethodInfo_30CE46C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_30CE528 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_int____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_30CE530 *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.weight - a->fields.weight;
}