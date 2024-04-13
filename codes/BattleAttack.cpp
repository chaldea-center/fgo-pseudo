void __fastcall BattleAttack___ctor(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *logicArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t AttackedInAction_k__BackingField; // w24
  BattleAttack___c_c *v28; // x0
  struct BattleAttack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_0; // x21
  Il2CppObject *v31; // x22
  struct BattleAttack___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int v39; // w24
  BattleAttack___c_c *v40; // x0
  struct BattleAttack___c_StaticFields *v41; // x8
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *_9__11_1; // x21
  Il2CppObject *v43; // x22
  struct BattleAttack___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int v51; // w8

  if ( (byte_42EC0E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, (_DWORD)logicArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleAttack___c___ctor_b__11_0__, v12, v13, v14);
    sub_B5D5C4(&Method_BattleAttack___c___ctor_b__11_1__, v15, v16, v17);
    sub_B5D5C4(&BattleAttack___c_TypeInfo, v18, v19, v20);
    byte_42EC0E8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._LogicArray_k__BackingField,
    (System_Int32_array **)logicArray,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  v28 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v28 = BattleAttack___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = BattleAttack___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B5D694(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_0,
      v31,
      Method_BattleAttack___c___ctor_b__11_0__,
      (const MethodInfo_2C2A838 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v32 = BattleAttack___c_TypeInfo->static_fields;
    v32->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v32->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = AttackedInAction_k__BackingField | BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                             (ListViewSort_FilterCategoryKind_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_1AD6BEC *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v39;
  v40 = BattleAttack___c_TypeInfo;
  if ( (BYTE3(BattleAttack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v40 = BattleAttack___c_TypeInfo;
  }
  v41 = v40->static_fields;
  _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v41->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v41 = BattleAttack___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)v41->__9;
    _9__11_1 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B5D694(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      _9__11_1,
      v43,
      Method_BattleAttack___c___ctor_b__11_1__,
      (const MethodInfo_2C2A838 *)Method_System_Func_BattleLogic_LOGICTYPE__bool___ctor__);
    v44 = BattleAttack___c_TypeInfo->static_fields;
    v44->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__11_1,
      (System_Int32_array **)_9__11_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( BasicHelper__Any_ListViewSort_FilterCategoryKind_(
         (ListViewSort_FilterCategoryKind_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_1AD6BEC *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v51 = 2;
  }
  else
  {
    v51 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v51 | v39;
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7BDC & 1) == 0 )
  {
    sub_B5D5C4(&BattleAttack___c_TypeInfo, v1, v2, v3);
    byte_42E7BDC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleAttack___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleAttack___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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