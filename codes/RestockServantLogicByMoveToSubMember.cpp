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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x23
  System_Func_object__bool__o *v16; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  RestockServantLogicByMoveToSubMember___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x23
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v21; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  __int64 *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Func_object__bool__o *v38; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  const MethodInfo *v40; // x2
  __int64 v42; // x21
  __int64 v43; // x8
  unsigned __int64 v44; // x22
  BattleServantData_o *v45; // x20
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_4D33CAC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_1C93AD4(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_1C93AD4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    sub_1C93AD4(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__);
    sub_1C93AD4(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__);
    sub_1C93AD4(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__);
    sub_1C93AD4(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
    sub_1C93AD4(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_4D33CAC = 1;
  }
  v5 = sub_1C93D20(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !battleData )
    goto LABEL_25;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                  battleData,
                                                                  this->fields._IsEnemy_k__BackingField,
                                                                  this->fields._FieldMemberIndex_k__BackingField,
                                                                  0);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_31D3358 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v16 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v18 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  v19 = v17;
  if ( !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v18 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v18->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v21,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0);
    static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_1, (int32_t)_9__5_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v5 + 24) = v30;
  v31 = (__int64 *)(v5 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v30, v32, v33, v34, v35, v36, v37);
  v38 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0);
  v39 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  ServantData = (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                             v39,
                                             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !ServantData )
    goto LABEL_25;
  v7 = ServantData;
  if ( ServantData->max_length )
    return RestockServantLogic__ChoiceRestockServant_47769556((RestockServantLogic_o *)this, ServantData, v40);
  v42 = *v31;
  if ( !*v31 )
LABEL_25:
    sub_1C93D2C(ServantData, v7);
  v43 = *(_QWORD *)(v42 + 24);
  if ( (int)v43 < 1 )
    return 0;
  v44 = 0;
  while ( 1 )
  {
    if ( v44 >= (unsigned int)v43 )
      sub_1C93D34(ServantData);
    ServantData = (BattleServantData_array *)BattleData__getServantData(battleData, *(_DWORD *)(v42 + 32 + 4 * v44), 0);
    if ( ServantData )
    {
      v45 = (BattleServantData_o *)ServantData;
      if ( !LOBYTE(ServantData->m_Items[60]) )
      {
        ServantData = (BattleServantData_array *)BattleServantData__isAlive((BattleServantData_o *)ServantData, 0, 0);
        if ( ((unsigned __int8)ServantData & 1) != 0 )
          break;
      }
    }
    LODWORD(v43) = *(_DWORD *)(v42 + 24);
    if ( (__int64)++v44 >= (int)v43 )
      return 0;
  }
  return v45;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D33CAD & 1) == 0 )
  {
    sub_1C93AD4(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_4D33CAD = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D33CAE & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    byte_4D33CAE = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___) >> 31;
}