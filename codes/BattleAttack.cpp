void __fastcall BattleAttack___ctor(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *logicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  BattleAttack___c_c *v13; // x0
  int32_t AttackedInAction_k__BackingField; // w25
  System_Func_T__TResult__o *_9__11_0; // x21
  Il2CppObject *v16; // x22
  struct BattleAttack___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // w25
  BattleAttack___c_c *v23; // x0
  System_Func_T__TResult__o *_9__11_1; // x21
  Il2CppObject *v25; // x22
  struct BattleAttack___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int v29; // w8

  if ( (byte_49FE64C & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, logicArray);
    sub_1B640C8(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleAttack___c___ctor_b__11_0__, v6);
    sub_1B640C8(&Method_BattleAttack___c___ctor_b__11_1__, v7);
    sub_1B640C8(&BattleAttack___c_TypeInfo, v8);
    byte_49FE64C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)logicArray,
    v9,
    v10);
  v13 = BattleAttack___c_TypeInfo;
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v13 = BattleAttack___c_TypeInfo;
  }
  _9__11_0 = (System_Func_T__TResult__o *)v13->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleAttack___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__11_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v11, v12);
    System_Func_Int32Enum__bool____ctor(_9__11_0, v16, Method_BattleAttack___c___ctor_b__11_0__, 0LL);
    static_fields = BattleAttack___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v18, v19);
  }
  v22 = AttackedInAction_k__BackingField | BasicHelper__Any_Int32Enum__48383800(
                                             (System_Int32Enum_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_2E24738 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v22;
  v23 = BattleAttack___c_TypeInfo;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v23 = BattleAttack___c_TypeInfo;
  }
  _9__11_1 = (System_Func_T__TResult__o *)v23->static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = BattleAttack___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__11_1 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v20, v21);
    System_Func_Int32Enum__bool____ctor(_9__11_1, v25, Method_BattleAttack___c___ctor_b__11_1__, 0LL);
    v26 = BattleAttack___c_TypeInfo->static_fields;
    v26->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->__9__11_1, (int32_t)_9__11_1, v27, v28);
  }
  if ( BasicHelper__Any_Int32Enum__48383800(
         (System_Int32Enum_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_2E24738 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v29 = 2;
  }
  else
  {
    v29 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v29 | v22;
}


bool __fastcall BattleAttack__IsActionAttacked(BattleAttack_o *this, bool isEnemy, const MethodInfo *method)
{
  return ((unsigned int)this->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
}


int32_t __fastcall BattleAttack__get_AttackedInAction(BattleAttack_o *this, const MethodInfo *method)
{
  return this->fields._AttackedInAction_k__BackingField;
}


BattleLogic_LOGICTYPE_array *__fastcall BattleAttack__get_LogicArray(BattleAttack_o *this, const MethodInfo *method)
{
  return this->fields._LogicArray_k__BackingField;
}


void __fastcall BattleAttack__set_AttackedInAction(BattleAttack_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AttackedInAction_k__BackingField = value;
}


void __fastcall BattleAttack__set_LogicArray(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._LogicArray_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleAttack___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE64D & 1) == 0 )
  {
    sub_1B640C8(&BattleAttack___c_TypeInfo, v1);
    byte_49FE64D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleAttack___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleAttack___c_TypeInfo->static_fields->__9 = (struct BattleAttack___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleAttack___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BattleAttack___c___ctor(BattleAttack___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleAttack___c____ctor_b__11_0(BattleAttack___c_o *this, int32_t x, const MethodInfo *method)
{
  return x == 58;
}


bool __fastcall BattleAttack___c____ctor_b__11_1(BattleAttack___c_o *this, int32_t x, const MethodInfo *method)
{
  return x == 59;
}