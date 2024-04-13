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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x21
  BattleServantData_o *result; // x0
  BattleServantData_o *v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *RestockableSubServantArray; // x22
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v66; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x23
  RestockServantLogicByMoveToSubMember___c_c *v68; // x8
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x24
  Il2CppObject *v71; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Int32_array **v80; // x0
  __int64 *v81; // x23
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v88; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  const MethodInfo *v90; // x2
  __int64 v91; // x20
  __int64 v92; // x8
  unsigned __int64 v93; // x21
  __int64 v94; // x0

  if ( (byte_42EAEF5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___,
      (_DWORD)battleData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__, v39, v40, v41);
    sub_B5D5C4(
      &Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
      v42,
      v43,
      v44);
    sub_B5D5C4(
      &Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
      v45,
      v46,
      v47);
    sub_B5D5C4(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v51, v52, v53);
    byte_42EAEF5 = 1;
  }
  v54 = sub_B5D694(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ctor(
    (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)v54,
    0LL);
  if ( !v54 )
    goto LABEL_26;
  *(_QWORD *)(v54 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  if ( !battleData )
    goto LABEL_26;
  RestockableSubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                                      battleData,
                                                                                      this->fields._IsEnemy_k__BackingField,
                                                                                      this->fields._FieldMemberIndex_k__BackingField,
                                                                                      0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v66 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v66,
    (Il2CppObject *)v54,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_RestockServantLogicByMoveToSubMember__bool___ctor__);
  v67 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v65,
          (System_Func_TSource__bool__o *)v66,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v68 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  if ( (BYTE3(RestockServantLogicByMoveToSubMember___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v68 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  static_fields = v68->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v71,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_RestockServantLogicByMoveToSubMember__int___ctor__);
    v72 = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    v72->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v72->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v67,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v80 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v79,
                                 (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v54 + 24) = v80;
  v81 = (__int64 *)(v54 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 24), v80, v82, v83, v84, v85, v86, v87);
  v88 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v88,
    (Il2CppObject *)v54,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  v89 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          RestockableSubServantArray,
          (System_Func_TSource__bool__o *)v88,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v89,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_26;
  v56 = result;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_29504016(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             v90);
  v91 = *v81;
  if ( !*v81 )
LABEL_26:
    sub_B5D69C(result, v56);
  v92 = *(_QWORD *)(v91 + 24);
  if ( (int)v92 < 1 )
    return 0LL;
  v93 = 0LL;
  while ( 1 )
  {
    if ( v93 >= (unsigned int)v92 )
    {
      v94 = sub_B5D6C8(result);
      sub_B5D668(v94, 0LL);
    }
    result = BattleData__getServantData(battleData, *(_DWORD *)(v91 + 32 + 4 * v93), 0LL);
    if ( result )
    {
      if ( !result->fields.isEntry )
        break;
    }
    LODWORD(v92) = *(_DWORD *)(v91 + 24);
    if ( (__int64)++v93 >= (int)v92 )
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

  if ( (byte_42E7F56 & 1) == 0 )
  {
    sub_B5D5C4(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v1, v2, v3);
    byte_42E7F56 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E7F57 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_B5D5C4(
                                                                            &Method_System_Array_IndexOf_int___,
                                                                            (_DWORD)x,
                                                                            (_DWORD)method,
                                                                            v3);
    byte_42E7F57 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v5->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) >> 31;
}