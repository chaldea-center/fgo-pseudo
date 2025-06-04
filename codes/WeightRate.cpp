void __fastcall WeightRate_WeightSeed___Il2CppFullySharedGenericType____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3A83E60 *method)
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
  sub_1A182EC(this, *(_QWORD *)(**(_QWORD **)(monitor[4] + 192LL) + 128LL), (unsigned int)w);
  v9 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v9 + 192) + 8LL) + 40LL) >= 0 )
    v10 = v11;
  else
    v10 = (__int64 *)klass;
  memcpy((char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  sub_1BC3030(
    this,
    *(_QWORD *)(**(_QWORD **)(v9 + 192) + 128LL) + 32LL,
    (char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
}


void __fastcall WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_3A83E34 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_31CED8C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_31CED94 *method)
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
    v9 = *(_DWORD *)(sub_1C1346C() + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - (((unsigned int)(v9 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_1BC302C(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, native_size);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v14) = sub_1C1346C();
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass4_0_T = v13[1]._0_WeightRate___c__DisplayClass4_0_T_;
  v16 = (void *)sub_1BC302C(this, v13->_0_WeightRate___c__DisplayClass4_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_1BC3A70((int)v14, (int)_0_WeightRate___c__DisplayClass4_0_T, (int)v10, v16);
  return v19 == 0;
}


void __fastcall WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_31CECE8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_31CECF0 *method)
{
  if ( !s )
    sub_1BC3264(this, 0LL);
  return System_Int32__CompareTo_63857040(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass4_0_T_) == 0;
}


void __fastcall WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_31D0878 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_31D0880 *method)
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
    v9 = *(_DWORD *)(sub_1C1346C() + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - (((unsigned int)(v9 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_1BC302C(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, native_size);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v14) = sub_1C1346C();
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass5_0_T = v13[1]._0_WeightRate___c__DisplayClass5_0_T_;
  v16 = (void *)sub_1BC302C(this, v13->_0_WeightRate___c__DisplayClass5_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_1BC3A70((int)v14, (int)_0_WeightRate___c__DisplayClass5_0_T, (int)v10, v16);
  return v19 == 0;
}


void __fastcall WeightRate___c__DisplayClass5_0_int____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_31D07D4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass5_0_int____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_31D07DC *method)
{
  if ( !s )
    sub_1BC3264(this, 0LL);
  return System_Int32__CompareTo_63857040(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass5_0_T_) == 0;
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____cctor(const MethodInfo_31C5970 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1346C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C1346C();
  v4 = sub_1BC3254(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_1C1346C();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_1C1346C();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v12 = (__int64)method->klass;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1346C();
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1346C();
  **(_QWORD **)(v13 + 184) = v6;
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1346C();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1346C();
  sub_1BC2FAC(*(CGThumbnailListItem_o **)(v15 + 184), v6, v10, v11);
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____ctor(
        WeightRate___c_T__o *this,
        const MethodInfo_31C5A64 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c___Il2CppFullySharedGenericType____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_31C5A6C *method)
{
  const MethodInfo_31C5A6C *v5; // x19
  _DWORD *v6; // x0
  WeightRate___c_T__c *klass; // x8

  v5 = method;
  v6 = (_DWORD *)sub_1BC302C(b, method->klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
  klass = v5->klass;
  LODWORD(v5) = *v6;
  return (_DWORD)v5 - *(_DWORD *)sub_1BC302C(a, klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
}


void __fastcall WeightRate___c_int____cctor(const MethodInfo_31C200C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1346C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C1346C();
  v4 = (Il2CppObject *)sub_1BC3254(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1346C();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1346C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1346C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1346C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1346C();
  sub_1BC2FAC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_31C20C8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_int____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_31C20D0 *method)
{
  if ( !b || !a )
    sub_1BC3264(this, a);
  return b->fields.weight - a->fields.weight;
}