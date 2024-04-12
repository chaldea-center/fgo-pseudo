void __fastcall BattleAttack___ctor(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *logicArray,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int32_t AttackedInAction_k__BackingField; // w24
  BattleAttack___c_c *v12; // x0
  struct BattleAttack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_0; // x21
  Il2CppObject *v15; // x22
  struct BattleAttack___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int v23; // w24
  BattleAttack___c_c *v24; // x0
  struct BattleAttack___c_StaticFields *v25; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_1; // x21
  Il2CppObject *v27; // x22
  struct BattleAttack___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w8

  if ( (byte_42B35E6 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
    sub_B52984(&Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    sub_B52984(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    sub_B52984(&Method_BattleAttack___c___ctor_b__11_0__);
    sub_B52984(&Method_BattleAttack___c___ctor_b__11_1__);
    sub_B52984(&BattleAttack___c_TypeInfo);
    byte_42B35E6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._LogicArray_k__BackingField,
    (System_Int32_array **)logicArray,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  v12 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v12 = BattleAttack___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleAttack___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B52A54(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_0,
      v15,
      Method_BattleAttack___c___ctor_b__11_0__,
      (const MethodInfo_2BC58BC *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v16 = BattleAttack___c_TypeInfo->static_fields;
    v16->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = AttackedInAction_k__BackingField | BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                             (ListViewSort_FilterCategoryKind_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_1A41B24 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v23;
  v24 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v24 = BattleAttack___c_TypeInfo;
  }
  v25 = v24->static_fields;
  _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v25->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v25 = BattleAttack___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)v25->__9;
    _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B52A54(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_1,
      v27,
      Method_BattleAttack___c___ctor_b__11_1__,
      (const MethodInfo_2BC58BC *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v28 = BattleAttack___c_TypeInfo->static_fields;
    v28->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v28->__9__11_1,
      (System_Int32_array **)_9__11_1,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( BasicHelper__Any_ListViewSort_FilterCategoryKind_(
         (ListViewSort_FilterCategoryKind_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_1A41B24 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v35 = 2;
  }
  else
  {
    v35 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v35 | v23;
}


bool __fastcall BattleAttack__IsActionAttacked(BattleAttack_o *this, bool isEnemy, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields._AttackedInAction_k__BackingField & (1 << isEnemy)) < 0) ^ v3 | ((this->fields._AttackedInAction_k__BackingField & (1 << isEnemy)) == 0));
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._LogicArray_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._LogicArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleAttack___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF0ED & 1) == 0 )
  {
    sub_B52984(&BattleAttack___c_TypeInfo);
    byte_42AF0ED = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleAttack___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleAttack___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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