void RestockServantLogicByMoveToSubMember___ctor(
        RestockServantLogicByMoveToSubMember_o *this,
        int32_t fieldMemberIndex,
        bool isEnemy,
        int32_t subMemberIndex,
        int32_t servantUniqueId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SubMemberIndex_k__BackingField = subMemberIndex;
  this->fields._FieldMemberIndex_k__BackingField = fieldMemberIndex;
  this->fields._ServantUniqueId_k__BackingField = servantUniqueId;
  this->fields._IsEnemy_k__BackingField = isEnemy;
  this->fields._IsActive_k__BackingField = 1;
}


BattleServantData_o *RestockServantLogicByMoveToSubMember__ChoiceRestockServant(
        RestockServantLogicByMoveToSubMember_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  BattleServantData_array *ServantData; // x0
  BattleServantData_array *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
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
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x0
  __int64 *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  const MethodInfo *v28; // x2
  __int64 v30; // x21
  __int64 v31; // x8
  unsigned __int64 v32; // x22
  BattleServantData_o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB946D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_1C6BA08(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    sub_1C6BA08(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__);
    sub_1C6BA08(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__);
    sub_1C6BA08(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__);
    sub_1C6BA08(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
    sub_1C6BA08(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_4CB946D = 1;
  }
  v5 = sub_1C6BC54(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( !battleData )
    goto LABEL_25;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                  battleData,
                                                                  this->fields._IsEnemy_k__BackingField,
                                                                  this->fields._FieldMemberIndex_k__BackingField,
                                                                  0);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_316A620 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v12 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
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
    _9__5_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v17,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0);
    static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_1, (int32_t)_9__5_1, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v22 = System_Linq_Enumerable__ToArray_int_(
          v21,
          (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v5 + 24) = v22;
  v23 = (__int64 *)(v5 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v22, v24, v25);
  v26 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0);
  v27 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  ServantData = (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                             v27,
                                             (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !ServantData )
    goto LABEL_25;
  v7 = ServantData;
  if ( ServantData->max_length )
    return RestockServantLogic__ChoiceRestockServant_47164788((RestockServantLogic_o *)this, ServantData, v28);
  v30 = *v23;
  if ( !*v23 )
LABEL_25:
    sub_1C6BC60(ServantData, v7);
  v31 = *(_QWORD *)(v30 + 24);
  if ( (int)v31 < 1 )
    return 0;
  v32 = 0;
  while ( 1 )
  {
    if ( v32 >= (unsigned int)v31 )
      sub_1C6BC68(ServantData);
    ServantData = (BattleServantData_array *)BattleData__getServantData(battleData, *(_DWORD *)(v30 + 32 + 4 * v32), 0);
    if ( ServantData )
    {
      v33 = (BattleServantData_o *)ServantData;
      if ( !LOBYTE(ServantData->m_Items[59]) )
      {
        ServantData = (BattleServantData_array *)BattleServantData__isAlive((BattleServantData_o *)ServantData, 0, 0);
        if ( ((unsigned __int8)ServantData & 1) != 0 )
          break;
      }
    }
    LODWORD(v31) = *(_DWORD *)(v30 + 24);
    if ( (__int64)++v32 >= (int)v31 )
      return 0;
  }
  return v33;
}


int32_t RestockServantLogicByMoveToSubMember__get_ServantUniqueId(
        RestockServantLogicByMoveToSubMember_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantUniqueId_k__BackingField;
}


void RestockServantLogicByMoveToSubMember__set_ServantUniqueId(
        RestockServantLogicByMoveToSubMember_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ServantUniqueId_k__BackingField = value;
}


void RestockServantLogicByMoveToSubMember___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB946E & 1) == 0 )
  {
    sub_1C6BA08(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_4CB946E = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void RestockServantLogicByMoveToSubMember___c___ctor(
        RestockServantLogicByMoveToSubMember___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RestockServantLogicByMoveToSubMember___c___ChoiceRestockServant_b__5_1(
        RestockServantLogicByMoveToSubMember___c_o *this,
        RestockServantLogicByMoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._ServantUniqueId_k__BackingField;
}


void RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ctor(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__0(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        RestockServantLogicByMoveToSubMember_o *x,
        const MethodInfo *method)
{
  struct RestockServantLogicByMoveToSubMember_o *_4__this; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0 )
    sub_1C6BC60(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_4CB946F & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_1C6BA08(&Method_System_Array_IndexOf_int___);
    byte_4CB946F = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_324317C *)Method_System_Array_IndexOf_int___) >> 31;
}