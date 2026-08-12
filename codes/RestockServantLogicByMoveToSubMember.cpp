void RestockServantLogicByMoveToSubMember___ctor(
        RestockServantLogicByMoveToSubMember_o *this,
        int32_t fieldMemberIndex,
        bool isEnemy,
        int32_t subMemberIndex,
        int32_t servantUniqueId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._IsEnemy_k__BackingField = isEnemy;
  this->fields._SubMemberIndex_k__BackingField = subMemberIndex;
  this->fields._FieldMemberIndex_k__BackingField = fieldMemberIndex;
  this->fields._ServantUniqueId_k__BackingField = servantUniqueId;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *RestockableSubServantArray; // x29
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x23
  System_Func_object__bool__o *v17; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  RestockServantLogicByMoveToSubMember___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x23
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v24; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array *v33; // x0
  __int64 *v34; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Func_object__bool__o *v41; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  const MethodInfo *v43; // x2
  __int64 v45; // x21
  __int64 v46; // x8
  unsigned __int64 v47; // x22
  BattleServantData_o *v48; // x20

  if ( (byte_5973C79 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
    sub_2213A60(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    sub_2213A60(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__);
    sub_2213A60(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__);
    sub_2213A60(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__);
    sub_2213A60(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
    sub_2213A60(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_5973C79 = 1;
  }
  v5 = sub_2213CCC(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !battleData )
    goto LABEL_25;
  RestockableSubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                                      battleData,
                                                                                      this->fields._IsEnemy_k__BackingField,
                                                                                      this->fields._FieldMemberIndex_k__BackingField,
                                                                                      0);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v20 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  v21 = v18;
  if ( !*(&RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo, v19);
    v20 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__5_1 = (System_Func_object__int__o *)static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v24,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0);
    v25 = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    v25->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__5_1, (int32_t)_9__5_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v33 = System_Linq_Enumerable__ToArray_int_(
          v32,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v5 + 24) = v33;
  v34 = (__int64 *)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v33, v35, v36, v37, v38, v39, v40);
  v41 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v5,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0);
  v42 = System_Linq_Enumerable__Where_object_(
          RestockableSubServantArray,
          (System_Func_TSource__bool__o *)v41,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  ServantData = (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                             v42,
                                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !ServantData )
    goto LABEL_25;
  v7 = ServantData;
  if ( ServantData->max_length )
    return RestockServantLogic__ChoiceRestockServant_54170676((RestockServantLogic_o *)this, ServantData, v43);
  v45 = *v34;
  if ( !*v34 )
LABEL_25:
    sub_2213CDC(ServantData, v7);
  v46 = *(_QWORD *)(v45 + 24);
  if ( (int)v46 < 1 )
    return 0;
  v47 = 0;
  while ( 1 )
  {
    if ( v47 >= (unsigned int)v46 )
      sub_2213CE4(ServantData);
    ServantData = (BattleServantData_array *)BattleData__getServantData(battleData, *(_DWORD *)(v45 + 32 + 4 * v47), 0);
    if ( ServantData )
    {
      v48 = (BattleServantData_o *)ServantData;
      if ( !LOBYTE(ServantData->m_Items[60]) )
      {
        ServantData = (BattleServantData_array *)BattleServantData__isAlive((BattleServantData_o *)ServantData, 0, 0);
        if ( ((unsigned __int8)ServantData & 1) != 0 )
          break;
      }
    }
    LODWORD(v46) = *(_DWORD *)(v45 + 24);
    if ( (__int64)++v47 >= (int)v46 )
      return 0;
  }
  return v48;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973C7A & 1) == 0 )
  {
    sub_2213A60(&RestockServantLogicByMoveToSubMember___c_TypeInfo);
    byte_5973C7A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, x);
  return x->fields._IsEnemy_k__BackingField ^ !_4__this->fields._IsEnemy_k__BackingField;
}


bool RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_5973C7B & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_2213A60(&Method_System_Array_IndexOf_int___);
    byte_5973C7B = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) >> 31;
}