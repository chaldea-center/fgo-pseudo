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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *RestockableSubServantArray; // x22
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x23
  RestockServantLogicByMoveToSubMember___c_c *v43; // x8
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x24
  Il2CppObject *v46; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Int32_array **v55; // x0
  __int64 *v56; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v67; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  BattleServantData_o *result; // x0
  const MethodInfo *v70; // x2
  BattleServantData_o *v71; // x1
  __int64 v72; // x20
  __int64 v73; // x8
  unsigned __int64 v74; // x21

  if ( (byte_40FD388 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___, battleData);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___, v11);
    sub_B16FFC(&Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__, v12);
    sub_B16FFC(&Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__, v13);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v14);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo, v16);
    sub_B16FFC(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo, v17);
    sub_B16FFC(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__, v18);
    sub_B16FFC(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__, v19);
    sub_B16FFC(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__, v20);
    sub_B16FFC(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, v21);
    sub_B16FFC(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v22);
    byte_40FD388 = 1;
  }
  v23 = sub_B170CC(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, battleData, method, v3, v4);
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ctor(
    (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)(v23 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  if ( !battleData )
    goto LABEL_26;
  RestockableSubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                                      battleData,
                                                                                      this->fields._IsEnemy_k__BackingField,
                                                                                      this->fields._FieldMemberIndex_k__BackingField,
                                                                                      0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo,
                                                                             v33,
                                                                             v34,
                                                                             v35,
                                                                             v36);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    (Il2CppObject *)v23,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__);
  v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v32,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v43 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  if ( (BYTE3(RestockServantLogicByMoveToSubMember___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v43 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo,
                                                                                v38,
                                                                                v39,
                                                                                v40,
                                                                                v41);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v46,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__);
    v47 = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    v47->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v47->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v42,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v55 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v54,
                                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v23 + 24) = v55;
  v56 = (__int64 *)(v23 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), v55, v57, v58, v59, v60, v61, v62);
  v67 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v63,
                                                                             v64,
                                                                             v65,
                                                                             v66);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v67,
    (Il2CppObject *)v23,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  v68 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          RestockableSubServantArray,
          (System_Func_TSource__bool__o *)v67,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v68,
                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_26;
  v71 = result;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_30985956(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             v70);
  v72 = *v56;
  if ( !*v56 )
LABEL_26:
    sub_B170D4();
  v73 = *(_QWORD *)(v72 + 24);
  if ( (int)v73 < 1 )
    return 0LL;
  v74 = 0LL;
  while ( 1 )
  {
    if ( v74 >= (unsigned int)v73 )
    {
      sub_B17100(result, v71, v70);
      sub_B170A0();
    }
    result = BattleData__getServantData(battleData, *(_DWORD *)(v72 + 32 + 4 * v74), 0LL);
    if ( result )
    {
      if ( !result->fields.isEntry )
        break;
    }
    LODWORD(v73) = *(_DWORD *)(v72 + 24);
    if ( (__int64)++v74 >= (int)v73 )
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F742F & 1) == 0 )
  {
    sub_B16FFC(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v1);
    byte_40F742F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(RestockServantLogicByMoveToSubMember___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( (byte_40F7430 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, x);
    byte_40F7430 = 1;
  }
  if ( !x )
    sub_B170D4();
  return (unsigned int)System_Array__IndexOf_int_(
                         this->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) >> 31;
}