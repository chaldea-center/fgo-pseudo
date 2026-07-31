void WeightRate_WeightSeed___Il2CppFullySharedGenericType____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_3D6FA1C *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v8; // x8
  size_t v9; // x23
  _QWORD *v10; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x1
  _QWORD v12[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v12[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *((_QWORD *)t.monitor + 4);
  v12[0] = t.klass;
  v9 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v8 + 192) + 8LL) + 252LL);
  System_Object___ctor((Il2CppObject *)this, 0);
  sub_200A84C(this, *(_QWORD *)(**(_QWORD **)(monitor[4] + 192LL) + 128LL), (unsigned int)w);
  v10 = *(_QWORD **)(monitor[4] + 192LL);
  if ( *(int *)(v10[1] + 40LL) >= 0 )
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v12;
  else
    v11 = klass;
  memcpy((char *)v12 - ((v9 + 15) & 0x1FFFFFFF0LL), v11, v9);
  sub_21FFC7C(this, *(_QWORD *)(*v10 + 128LL) + 32LL, (char *)v12 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
}


void WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_3D6F9F0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_3AD00BC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_3AD00C4 *method)
{
  WeightRate___c__DisplayClass4_0_T__RGCTXs *rgctx_data; // x9
  Il2CppClass *_1_T; // x8
  size_t actualSize; // x24
  uint32_t v9; // w8
  char *v10; // x20
  _QWORD *v11; // x22
  const void *v12; // x0
  WeightRate___c__DisplayClass4_0_T__RGCTXs *v13; // x8
  Il2CppClass *v14; // x23
  Il2CppClass *_0_WeightRate___c__DisplayClass4_0_T; // x24
  void *v16; // x3
  _QWORD v18[2]; // [xsp+0h] [xbp-20h] BYREF
  int v19; // [xsp+14h] [xbp-Ch]
  __int64 v20; // [xsp+18h] [xbp-8h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  _1_T = rgctx_data->_1_T;
  actualSize = _1_T->_2.actualSize;
  if ( (*((_WORD *)&_1_T->_2.bitflags2 + 1) & 1) != 0 )
  {
    v9 = _1_T->_2.actualSize;
  }
  else
  {
    v9 = *(_DWORD *)(sub_2237AF8() + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - ((v9 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_21FFC78(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, actualSize);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (*((_WORD *)&v14->_2.bitflags2 + 1) & 1) == 0 )
  {
    LODWORD(v14) = sub_2237AF8();
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass4_0_T = v13[1]._0_WeightRate___c__DisplayClass4_0_T_;
  v16 = (void *)sub_21FFC78(this, v13->_0_WeightRate___c__DisplayClass4_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_22008A4((int)v14, (int)_0_WeightRate___c__DisplayClass4_0_T, (int)v10, v16);
  return v19 == 0;
}


void WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_3AD0020 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_3AD0028 *method)
{
  if ( !s )
    sub_21FFECC(this, 0);
  return System_Int32__CompareTo_76925088(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass4_0_T_) == 0;
}


void WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_3AD1D18 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_3AD1D20 *method)
{
  WeightRate___c__DisplayClass5_0_T__RGCTXs *rgctx_data; // x9
  Il2CppClass *_1_T; // x8
  size_t actualSize; // x24
  uint32_t v9; // w8
  char *v10; // x20
  _QWORD *v11; // x22
  const void *v12; // x0
  WeightRate___c__DisplayClass5_0_T__RGCTXs *v13; // x8
  Il2CppClass *v14; // x23
  Il2CppClass *_0_WeightRate___c__DisplayClass5_0_T; // x24
  void *v16; // x3
  _QWORD v18[2]; // [xsp+0h] [xbp-20h] BYREF
  int v19; // [xsp+14h] [xbp-Ch]
  __int64 v20; // [xsp+18h] [xbp-8h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  _1_T = rgctx_data->_1_T;
  actualSize = _1_T->_2.actualSize;
  if ( (*((_WORD *)&_1_T->_2.bitflags2 + 1) & 1) != 0 )
  {
    v9 = _1_T->_2.actualSize;
  }
  else
  {
    v9 = *(_DWORD *)(sub_2237AF8() + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - ((v9 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_21FFC78(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, actualSize);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (*((_WORD *)&v14->_2.bitflags2 + 1) & 1) == 0 )
  {
    LODWORD(v14) = sub_2237AF8();
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass5_0_T = v13[1]._0_WeightRate___c__DisplayClass5_0_T_;
  v16 = (void *)sub_21FFC78(this, v13->_0_WeightRate___c__DisplayClass5_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_22008A4((int)v14, (int)_0_WeightRate___c__DisplayClass5_0_T, (int)v10, v16);
  return v19 == 0;
}


void WeightRate___c__DisplayClass5_0_int____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_3AD1C7C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate___c__DisplayClass5_0_int____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_3AD1C84 *method)
{
  if ( !s )
    sub_21FFECC(this, 0);
  return System_Int32__CompareTo_76925088(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass5_0_T_) == 0;
}


void WeightRate___c___Il2CppFullySharedGenericType____cctor(const MethodInfo_3AC27E8 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_2237AF8();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_2237AF8();
  v4 = sub_21FFEBC(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_2237AF8();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_2237AF8();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v16 = (__int64)method->klass;
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_2237AF8();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_2237AF8();
  v18 = *(__int64 **)(v17 + 184);
  v19 = (__int64)method->klass;
  *v18 = v6;
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_2237AF8();
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_2237AF8();
  sub_21FFBF4(*(MissionNaviTransitionBoardItem_o **)(v20 + 184), v6, v10, v11, v12, v13, v14, v15);
}


void WeightRate___c___Il2CppFullySharedGenericType____ctor(WeightRate___c_T__o *this, const MethodInfo_3AC28F4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WeightRate___c___Il2CppFullySharedGenericType____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_3AC28FC *method)
{
  const MethodInfo_3AC28FC *v5; // x19
  _DWORD *v6; // x0
  WeightRate___c_T__c *klass; // x8

  v5 = method;
  v6 = (_DWORD *)sub_21FFC78(b, method->klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
  klass = v5->klass;
  LODWORD(v5) = *v6;
  return (_DWORD)v5 - *(_DWORD *)sub_21FFC78(a, klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
}


void WeightRate___c_int____cctor(const MethodInfo_3ABDAEC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_2237AF8();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_2237AF8();
  v4 = (Il2CppObject *)sub_21FFEBC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_2237AF8();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_2237AF8();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_2237AF8();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_2237AF8();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_2237AF8();
  sub_21FFBF4(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_3ABDBC4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WeightRate___c_int____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_3ABDBCC *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.weight - a->fields.weight;
}