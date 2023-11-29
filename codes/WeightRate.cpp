void __fastcall WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_2ADE088 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void __fastcall WeightRate_WeightSeed_object____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Il2CppObject *t,
        const MethodInfo_2ADE0C8 *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( !this )
    sub_B170D4();
  v6 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)t;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields.isOpenAfter = w;
  sub_B16F98(v6, (System_Int32_array **)t, v7, v8, v9, v10, v11, v12);
}


void __fastcall WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_1F8C090 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_1F8C0A8 *method)
{
  if ( !s )
    sub_B170D4();
  return System_Int32__CompareTo_38275572((_DWORD)this + 16, *(&s->fields.weight + 1), 0LL) == 0;
}


void __fastcall WeightRate___c__DisplayClass4_0_object____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_1F8C11C *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_object____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_1F8C134 *method)
{
  Il2CppObject *t; // x19
  Il2CppObject *value; // x20
  Il2CppClass *_1_System_IComparable_T; // x21
  Il2CppClass *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( !s || (t = this->fields.t) == 0LL )
    sub_B170D4();
  value = s->fields.value;
  _1_System_IComparable_T = method->klass->rgctx_data->_1_System_IComparable_T_;
  if ( (BYTE2(_1_System_IComparable_T->vtable[0].methodPtr) & 1) == 0 )
  {
    sub_AAFCFC(method->klass->rgctx_data->_1_System_IComparable_T_);
    t = this->fields.t;
  }
  klass = t->klass;
  if ( *(_WORD *)&t->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _1_System_IComparable_T )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&t->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(t, _1_System_IComparable_T, 0LL);
  }
  return (*(unsigned int (__fastcall **)(Il2CppObject *, Il2CppObject *, _QWORD))p_method)(
           t,
           value,
           *(_QWORD *)(p_method + 8)) == 0;
}


void __fastcall WeightRate___c_int____cctor(const MethodInfo_1F84EE4 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WeightRate___c_T__c *klass; // x20
  Il2CppClass *_0_WeightRate___c_T; // x20
  __int64 v8; // x0
  WeightRate___c_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  WeightRate___c_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WeightRate___c_T__c *v20; // x19
  Il2CppClass *_2_WeightRate___c_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_WeightRate___c_T = klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (BYTE2(_0_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_WeightRate___c_T);
  v8 = sub_B170CC(_0_WeightRate___c_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_WeightRate___c_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_WeightRate___c_T = v20->rgctx_data->_2_WeightRate___c_T_;
  if ( (BYTE2(_2_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_WeightRate___c_T);
  static_fields = (BattleServantConfConponent_o *)_2_WeightRate___c_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_1F84FC0 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_int____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_1F84FD8 *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.weight - a->fields.weight;
}


void __fastcall WeightRate___c_object____cctor(const MethodInfo_1F85D5C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WeightRate___c_T__c *klass; // x20
  Il2CppClass *_0_WeightRate___c_T; // x20
  __int64 v8; // x0
  WeightRate___c_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  WeightRate___c_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WeightRate___c_T__c *v20; // x19
  Il2CppClass *_2_WeightRate___c_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_WeightRate___c_T = klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (BYTE2(_0_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_WeightRate___c_T);
  v8 = sub_B170CC(_0_WeightRate___c_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_WeightRate___c_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_WeightRate___c_T = v20->rgctx_data->_2_WeightRate___c_T_;
  if ( (BYTE2(_2_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_WeightRate___c_T);
  static_fields = (BattleServantConfConponent_o *)_2_WeightRate___c_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall WeightRate___c_object____ctor(WeightRate___c_T__o *this, const MethodInfo_1F85E38 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_object____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_1F85E50 *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.weight - a->fields.weight;
}