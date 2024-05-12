void __fastcall RestockServantLogicByMoveToSubMember___ctor(
        RestockServantLogicByMoveToSubMember_o *this,
        int32_t fieldMemberIndex,
        bool isEnemy,
        int32_t subMemberIndex,
        int32_t servantUniqueId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SubMemberIndex_k__BackingField = subMemberIndex;
  this->fields._FieldMemberIndex_k__BackingField = fieldMemberIndex;
  this->fields._IsEnemy_k__BackingField = isEnemy;
  this->fields._IsActive_k__BackingField = 1;
  this->fields._ServantUniqueId_k__BackingField = servantUniqueId;
}


BattleServantData_o *__fastcall RestockServantLogicByMoveToSubMember__ChoiceRestockServant(
        RestockServantLogicByMoveToSubMember_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  BattleServantData_o *result; // x0
  BattleServantData_o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *RestockableSubServantArray; // x22
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x23
  RestockServantLogicByMoveToSubMember___c_c *v19; // x8
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x24
  Il2CppObject *v22; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array **v31; // x0
  __int64 *v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  const MethodInfo *v41; // x2
  __int64 v42; // x20
  __int64 v43; // x8
  unsigned __int64 v44; // x21
  __int64 v45; // x0

  if ( (byte_438DBD4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_B775C4(&Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__);
    sub_B775C4(&Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__);
    sub_B775C4(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B775C4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B775C4(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_B775C4(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    sub_B775C4(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__);
    sub_B775C4(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__);
    sub_B775C4(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__);
    sub_B775C4(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
    sub_B775C4(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_438DBD4 = 1;
  }
  v5 = sub_B77694(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ctor(
    (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( !battleData )
    goto LABEL_26;
  RestockableSubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                                      battleData,
                                                                                      this->fields._IsEnemy_k__BackingField,
                                                                                      this->fields._FieldMemberIndex_k__BackingField,
                                                                                      0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_1D34774 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__);
  v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v19 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  if ( (BYTE3(RestockServantLogicByMoveToSubMember___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v19 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v22,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__);
    v23 = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    v23->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v23->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v31 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v30,
                                 (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v5 + 24) = v31;
  v32 = (__int64 *)(v5 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), v31, v33, v34, v35, v36, v37, v38);
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BattleServantData__bool___ctor__);
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          RestockableSubServantArray,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v40,
                                    (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_26;
  v7 = result;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_30131648(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             v41);
  v42 = *v32;
  if ( !*v32 )
LABEL_26:
    sub_B7769C(result, v7);
  v43 = *(_QWORD *)(v42 + 24);
  if ( (int)v43 < 1 )
    return 0LL;
  v44 = 0LL;
  while ( 1 )
  {
    if ( v44 >= (unsigned int)v43 )
    {
      v45 = sub_B776C8(result);
      sub_B77668(v45, 0LL);
    }
    result = BattleData__getServantData(battleData, *(_DWORD *)(v42 + 32 + 4 * v44), 0LL);
    if ( result )
    {
      if ( !result->fields.isEntry )
        break;
    }
    LODWORD(v43) = *(_DWORD *)(v42 + 24);
    if ( (__int64)++v44 >= (int)v43 )
      return 0LL;
  }
  return result;
}


int32_t __fastcall RestockServantLogicByMoveToSubMember__get_ServantUniqueId(
        RestockServantLogicByMoveToSubMember_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantUniqueId_k__BackingField;
}


void __fastcall RestockServantLogicByMoveToSubMember__set_ServantUniqueId(
        RestockServantLogicByMoveToSubMember_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ServantUniqueId_k__BackingField = value;
}


void __fastcall RestockServantLogicByMoveToSubMember___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0

  if ( (byte_4388A24 & 1) == 0 )
  {
    sub_B775C4(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_4388A24 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall RestockServantLogicByMoveToSubMember___c___ctor(
        RestockServantLogicByMoveToSubMember___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RestockServantLogicByMoveToSubMember___c___ChoiceRestockServant_b__5_1(
        RestockServantLogicByMoveToSubMember___c_o *this,
        RestockServantLogicByMoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields._ServantUniqueId_k__BackingField;
}


void __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ctor(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__0(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        RestockServantLogicByMoveToSubMember_o *x,
        const MethodInfo *method)
{
  struct RestockServantLogicByMoveToSubMember_o *_4__this; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_B7769C(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_4388A25 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_B775C4(&Method_System_Array_IndexOf_int___);
    byte_4388A25 = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) >> 31;
}