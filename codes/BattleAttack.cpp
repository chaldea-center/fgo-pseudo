void __fastcall BattleAttack___ctor(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *logicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t AttackedInAction_k__BackingField; // w24
  BattleAttack___c_c *v17; // x0
  struct BattleAttack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_0; // x21
  Il2CppObject *v20; // x22
  struct BattleAttack___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w24
  BattleAttack___c_c *v29; // x0
  struct BattleAttack___c_StaticFields *v30; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_1; // x21
  Il2CppObject *v32; // x22
  struct BattleAttack___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // w8

  if ( (byte_418AC46 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, logicArray);
    sub_B2C35C(&Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v6);
    sub_B2C35C(&Method_BattleAttack___c___ctor_b__11_0__, v7);
    sub_B2C35C(&Method_BattleAttack___c___ctor_b__11_1__, v8);
    sub_B2C35C(&BattleAttack___c_TypeInfo, v9);
    byte_418AC46 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._LogicArray_k__BackingField,
    (System_Int32_array **)logicArray,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  v17 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v17 = BattleAttack___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleAttack___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B2C42C(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_0,
      v20,
      Method_BattleAttack___c___ctor_b__11_0__,
      (const MethodInfo_270E404 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v21 = BattleAttack___c_TypeInfo->static_fields;
    v21->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = AttackedInAction_k__BackingField | BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                             (ListViewSort_FilterCategoryKind_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_1726564 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v28;
  v29 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v29 = BattleAttack___c_TypeInfo;
  }
  v30 = v29->static_fields;
  _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v30->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v30 = BattleAttack___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B2C42C(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_1,
      v32,
      Method_BattleAttack___c___ctor_b__11_1__,
      (const MethodInfo_270E404 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v33 = BattleAttack___c_TypeInfo->static_fields;
    v33->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v33->__9__11_1,
      (System_Int32_array **)_9__11_1,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( BasicHelper__Any_ListViewSort_FilterCategoryKind_(
         (ListViewSort_FilterCategoryKind_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_1726564 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v40 = 2;
  }
  else
  {
    v40 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v40 | v28;
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
  sub_B2C2F8(
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A24 & 1) == 0 )
  {
    sub_B2C35C(&BattleAttack___c_TypeInfo, v1);
    byte_4186A24 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleAttack___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleAttack___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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