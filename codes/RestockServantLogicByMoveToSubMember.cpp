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
  this->fields._ServantUniqueId_k__BackingField = servantUniqueId;
  this->fields._IsEnemy_k__BackingField = isEnemy;
  this->fields._IsActive_k__BackingField = 1;
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
  __int64 v18; // x21
  BattleServantData_o *result; // x0
  BattleServantData_o *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x23
  System_Func_object__bool__o *v25; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  RestockServantLogicByMoveToSubMember___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x23
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v30; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int32_array *v35; // x0
  __int64 *v36; // x23
  int32_t v37; // w2
  int32_t v38; // w3
  System_Func_object__bool__o *v39; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  const MethodInfo *v41; // x2
  __int64 v42; // x20
  __int64 v43; // x8
  unsigned __int64 v44; // x21
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_48E51F5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___, battleData);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___, v9);
    sub_1B00CCC(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo, v10);
    sub_1B00CCC(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1B00CCC(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo, v12);
    sub_1B00CCC(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__, v13);
    sub_1B00CCC(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__, v14);
    sub_1B00CCC(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__, v15);
    sub_1B00CCC(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, v16);
    sub_1B00CCC(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v17);
    byte_48E51F5 = 1;
  }
  v18 = sub_1B00F18(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_24;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  if ( !battleData )
    goto LABEL_24;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                  battleData,
                                                                  this->fields._IsEnemy_k__BackingField,
                                                                  this->fields._FieldMemberIndex_k__BackingField,
                                                                  0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_2D898D8 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v25 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v18,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v27 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  v28 = v26;
  if ( !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v27 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v27->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v30,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0LL);
    static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_1, (int32_t)_9__5_1, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v35 = System_Linq_Enumerable__ToArray_int_(
          v34,
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v18 + 24) = v35;
  v36 = (__int64 *)(v18 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)v35, v37, v38);
  v39 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)v18,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0LL);
  v40 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_object_(
                                    v40,
                                    (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_24;
  v20 = result;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_42079548(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             v41);
  v42 = *v36;
  if ( !*v36 )
LABEL_24:
    sub_1B00F28(result, v20);
  v43 = *(_QWORD *)(v42 + 24);
  if ( (int)v43 < 1 )
    return 0LL;
  v44 = 0LL;
  while ( 1 )
  {
    if ( v44 >= (unsigned int)v43 )
      sub_1B00F30(result, v20);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E51F6 & 1) == 0 )
  {
    sub_1B00CCC(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v1);
    byte_48E51F6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_48E51F7 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_1B00CCC(
                                                                            &Method_System_Array_IndexOf_int___,
                                                                            x);
    byte_48E51F7 = 1;
  }
  if ( !x )
    sub_1B00F28(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_2E47BB4 *)Method_System_Array_IndexOf_int___) >> 31;
}