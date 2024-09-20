void __fastcall RestockServantLogicByMoveToSubMember___ctor(
        RestockServantLogicByMoveToSubMember_o *this,
        int32_t fieldMemberIndex,
        bool isEnemy,
        int32_t subMemberIndex,
        int32_t servantUniqueId,
        const MethodInfo *method)
{
  RestockServantLogic___ctor((RestockServantLogic_o *)this, fieldMemberIndex, isEnemy, 0LL);
  this->fields._SubMemberIndex_k__BackingField = subMemberIndex;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x23
  System_Func_object__bool__o *v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  RestockServantLogicByMoveToSubMember___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x23
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v17; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x0
  __int64 *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x20
  __int64 v29; // x8
  unsigned __int64 v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5DD63 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_1B885B0(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    sub_1B885B0(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__);
    sub_1B885B0(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__);
    sub_1B885B0(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__);
    sub_1B885B0(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
    sub_1B885B0(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_4A5DD63 = 1;
  }
  v5 = sub_1B887FC(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( !battleData )
    goto LABEL_24;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                  battleData,
                                                                  this->fields._IsEnemy_k__BackingField,
                                                                  this->fields._FieldMemberIndex_k__BackingField,
                                                                  0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v14 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  v15 = v13;
  if ( !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v14 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v14->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v17,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0LL);
    static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_1, (int32_t)_9__5_1, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v22 = System_Linq_Enumerable__ToArray_int_(
          v21,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v5 + 24) = v22;
  v23 = (__int64 *)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v22, v24, v25);
  v26 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_object_(
                                    v27,
                                    (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_24;
  v7 = result;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_43524532(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             0LL);
  v28 = *v23;
  if ( !*v23 )
LABEL_24:
    sub_1B8880C(result, v7);
  v29 = *(_QWORD *)(v28 + 24);
  if ( (int)v29 < 1 )
    return 0LL;
  v30 = 0LL;
  while ( 1 )
  {
    if ( v30 >= (unsigned int)v29 )
      sub_1B88814(result, v7);
    result = BattleData__getServantData(battleData, *(_DWORD *)(v28 + 32 + 4 * v30), 0LL);
    if ( result )
    {
      if ( !result->fields.isEntry )
        break;
    }
    LODWORD(v29) = *(_DWORD *)(v28 + 24);
    if ( (__int64)++v30 >= (int)v29 )
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DD64 & 1) == 0 )
  {
    sub_1B885B0(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_4A5DD64 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A5DD65 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_1B885B0(&Method_System_Array_IndexOf_int___);
    byte_4A5DD65 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) >> 31;
}