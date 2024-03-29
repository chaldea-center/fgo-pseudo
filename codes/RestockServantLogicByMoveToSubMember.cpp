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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x21
  BattleServantData_o *result; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *RestockableSubServantArray; // x22
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x23
  RestockServantLogicByMoveToSubMember___c_c *v38; // x8
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x24
  Il2CppObject *v41; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int32_array **v50; // x0
  __int64 *v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v60; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  const MethodInfo *v62; // x2
  __int64 v63; // x20
  __int64 v64; // x8
  unsigned __int64 v65; // x21
  __int64 v66; // x0

  if ( (byte_4217C22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___, battleData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___, v9);
    sub_B0D8A4(&Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_B0D8A4(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo, v14);
    sub_B0D8A4(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo, v15);
    sub_B0D8A4(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__, v16);
    sub_B0D8A4(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__, v17);
    sub_B0D8A4(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__, v18);
    sub_B0D8A4(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, v19);
    sub_B0D8A4(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v20);
    byte_4217C22 = 1;
  }
  v21 = sub_B0D974(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, battleData, method);
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ctor(
    (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_26;
  *(_QWORD *)(v21 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  if ( !battleData )
    goto LABEL_26;
  RestockableSubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                                      battleData,
                                                                                      this->fields._IsEnemy_k__BackingField,
                                                                                      this->fields._FieldMemberIndex_k__BackingField,
                                                                                      0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo,
                                                                             v32,
                                                                             v33);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v21,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__);
  v37 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v31,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v38 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  if ( (BYTE3(RestockServantLogicByMoveToSubMember___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v38 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo,
                                                                                v35,
                                                                                v36);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v41,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      (const MethodInfo_2619564 *)Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__);
    v42 = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    v42->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v42->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v37,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v50 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v49,
                                 (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v21 + 24) = v50;
  v51 = (__int64 *)(v21 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 24), v50, v52, v53, v54, v55, v56, v57);
  v60 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v58,
                                                                             v59);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v60,
    (Il2CppObject *)v21,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  v61 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          RestockableSubServantArray,
          (System_Func_TSource__bool__o *)v60,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v61,
                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_26;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_30464596(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             v62);
  v63 = *v51;
  if ( !*v51 )
LABEL_26:
    sub_B0D97C(result);
  v64 = *(_QWORD *)(v63 + 24);
  if ( (int)v64 < 1 )
    return 0LL;
  v65 = 0LL;
  while ( 1 )
  {
    if ( v65 >= (unsigned int)v64 )
    {
      v66 = sub_B0D9A8(result);
      sub_B0D948(v66, 0LL);
    }
    result = BattleData__getServantData(battleData, *(_DWORD *)(v63 + 32 + 4 * v65), 0LL);
    if ( result )
    {
      if ( !result->fields.isEntry )
        break;
    }
    LODWORD(v64) = *(_DWORD *)(v63 + 24);
    if ( (__int64)++v65 >= (int)v64 )
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0

  if ( (byte_4212532 & 1) == 0 )
  {
    sub_B0D8A4(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v1);
    byte_4212532 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(RestockServantLogicByMoveToSubMember___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_4212533 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_B0D8A4(
                                                                            &Method_System_Array_IndexOf_int___,
                                                                            x);
    byte_4212533 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) >> 31;
}