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
  int32_t AttackedInAction_k__BackingField; // w24
  BattleAttack___c_c *v19; // x0
  struct BattleAttack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_0; // x21
  Il2CppObject *v22; // x22
  struct BattleAttack___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  int v32; // w24
  BattleAttack___c_c *v33; // x0
  struct BattleAttack___c_StaticFields *v34; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_1; // x21
  Il2CppObject *v36; // x22
  struct BattleAttack___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int v44; // w8

  if ( (byte_4217DC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, logicArray);
    sub_B0D8A4(&Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleAttack___c___ctor_b__11_0__, v7);
    sub_B0D8A4(&Method_BattleAttack___c___ctor_b__11_1__, v8);
    sub_B0D8A4(&BattleAttack___c_TypeInfo, v9);
    byte_4217DC1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._LogicArray_k__BackingField,
    (System_Int32_array **)logicArray,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  v19 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v19 = BattleAttack___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleAttack___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B0D974(
                                                                                          System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo,
                                                                                          v16,
                                                                                          v17);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_0,
      v22,
      Method_BattleAttack___c___ctor_b__11_0__,
      (const MethodInfo_26151B8 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v23 = BattleAttack___c_TypeInfo->static_fields;
    v23->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v32 = AttackedInAction_k__BackingField | BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                             (ListViewSort_FilterCategoryKind_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_1706FF0 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v32;
  v33 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v33 = BattleAttack___c_TypeInfo;
  }
  v34 = v33->static_fields;
  _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v34->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v34 = BattleAttack___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B0D974(
                                                                                          System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo,
                                                                                          v30,
                                                                                          v31);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_1,
      v36,
      Method_BattleAttack___c___ctor_b__11_1__,
      (const MethodInfo_26151B8 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v37 = BattleAttack___c_TypeInfo->static_fields;
    v37->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__11_1,
      (System_Int32_array **)_9__11_1,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( BasicHelper__Any_ListViewSort_FilterCategoryKind_(
         (ListViewSort_FilterCategoryKind_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_1706FF0 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v44 = 2;
  }
  else
  {
    v44 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v44 | v32;
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
  sub_B0D840(
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138B1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleAttack___c_TypeInfo, v1);
    byte_42138B1 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleAttack___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleAttack___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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