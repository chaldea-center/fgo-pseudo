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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t AttackedInAction_k__BackingField; // w24
  BattleAttack___c_c *v21; // x0
  struct BattleAttack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_0; // x21
  Il2CppObject *v24; // x22
  struct BattleAttack___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int v36; // w24
  BattleAttack___c_c *v37; // x0
  struct BattleAttack___c_StaticFields *v38; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_1; // x21
  Il2CppObject *v40; // x22
  struct BattleAttack___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // w8

  if ( (byte_40FDB1A & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, logicArray);
    sub_B16FFC(&Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v6);
    sub_B16FFC(&Method_BattleAttack___c___ctor_b__11_0__, v7);
    sub_B16FFC(&Method_BattleAttack___c___ctor_b__11_1__, v8);
    sub_B16FFC(&BattleAttack___c_TypeInfo, v9);
    byte_40FDB1A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._LogicArray_k__BackingField,
    (System_Int32_array **)logicArray,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  v21 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v21 = BattleAttack___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleAttack___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B170CC(
                                                                                          System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo,
                                                                                          v16,
                                                                                          v17,
                                                                                          v18,
                                                                                          v19);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_0,
      v24,
      Method_BattleAttack___c___ctor_b__11_0__,
      (const MethodInfo_2B67340 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v25 = BattleAttack___c_TypeInfo->static_fields;
    v25->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v36 = AttackedInAction_k__BackingField | BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                             (ListViewSort_FilterCategoryKind_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_18B5E80 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v36;
  v37 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v37 = BattleAttack___c_TypeInfo;
  }
  v38 = v37->static_fields;
  _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v38->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v38 = BattleAttack___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B170CC(
                                                                                          System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo,
                                                                                          v32,
                                                                                          v33,
                                                                                          v34,
                                                                                          v35);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_1,
      v40,
      Method_BattleAttack___c___ctor_b__11_1__,
      (const MethodInfo_2B67340 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v41 = BattleAttack___c_TypeInfo->static_fields;
    v41->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__11_1,
      (System_Int32_array **)_9__11_1,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( BasicHelper__Any_ListViewSort_FilterCategoryKind_(
         (ListViewSort_FilterCategoryKind_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_18B5E80 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v48 = 2;
  }
  else
  {
    v48 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v48 | v36;
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
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleAttack___c_StaticFields *static_fields; // x0

  if ( (byte_40F84C4 & 1) == 0 )
  {
    sub_B16FFC(&BattleAttack___c_TypeInfo, v1);
    byte_40F84C4 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleAttack___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleAttack___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleAttack___c_o *)v5;
  sub_B16F98(static_fields, v5);
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