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
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  RestockServantLogicByMoveToSubMember___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x23
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v33; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int32_array *v38; // x0
  __int64 *v39; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  System_Func_object__bool__o *v44; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  BattleServantData_o *v46; // x1
  __int64 v47; // x20
  __int64 v48; // x8
  unsigned __int64 v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_49FEFA5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___, battleData);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___, v9);
    sub_1B640C8(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo, v10);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1B640C8(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo, v12);
    sub_1B640C8(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__, v13);
    sub_1B640C8(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__, v14);
    sub_1B640C8(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__, v15);
    sub_1B640C8(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, v16);
    sub_1B640C8(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v17);
    byte_49FEFA5 = 1;
  }
  v18 = sub_1B64314(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, battleData, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_24;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v20, v21);
  if ( !battleData )
    goto LABEL_24;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                  battleData,
                                                                  this->fields._IsEnemy_k__BackingField,
                                                                  this->fields._FieldMemberIndex_k__BackingField,
                                                                  0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v26 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo,
                                         v24,
                                         v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v18,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v30 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  v31 = v27;
  if ( !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v30 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v30->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1B64314(
                                              System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo,
                                              v28,
                                              v29);
    System_Func_object__int____ctor(
      _9__5_1,
      v33,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0LL);
    static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_1, (int32_t)_9__5_1, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v38 = System_Linq_Enumerable__ToArray_int_(
          v37,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v18 + 24) = v38;
  v39 = (__int64 *)(v18 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)v38, v40, v41);
  v44 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v42, v43);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v18,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0LL);
  v45 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)v44,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_object_(
                                    v45,
                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_24;
  v46 = result;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_43163112(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             0LL);
  v47 = *v39;
  if ( !*v39 )
LABEL_24:
    sub_1B64324(result);
  v48 = *(_QWORD *)(v47 + 24);
  if ( (int)v48 < 1 )
    return 0LL;
  v49 = 0LL;
  while ( 1 )
  {
    if ( v49 >= (unsigned int)v48 )
      sub_1B6432C(result, v46);
    result = BattleData__getServantData(battleData, *(_DWORD *)(v47 + 32 + 4 * v49), 0LL);
    if ( result )
    {
      if ( !result->fields.isEntry )
        break;
    }
    LODWORD(v48) = *(_DWORD *)(v47 + 24);
    if ( (__int64)++v49 >= (int)v48 )
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEFA6 & 1) == 0 )
  {
    sub_1B640C8(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v1);
    byte_49FEFA6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RestockServantLogicByMoveToSubMember___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_49FEFA7 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_1B640C8(
                                                                            &Method_System_Array_IndexOf_int___,
                                                                            x);
    byte_49FEFA7 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) >> 31;
}