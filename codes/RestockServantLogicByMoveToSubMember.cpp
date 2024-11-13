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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x21
  BattleServantData_o *result; // x0
  BattleServantData_o *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Func_object__bool__o *v46; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  RestockServantLogicByMoveToSubMember___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x23
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v54; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Int32_array *v63; // x0
  __int64 *v64; // x23
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Func_object__bool__o *v74; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  const MethodInfo *v76; // x2
  __int64 v77; // x20
  __int64 v78; // x8
  unsigned __int64 v79; // x21
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_4B18E76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___, battleData, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___, v14, v15);
    sub_1BCA7E0(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__, v22, v23);
    sub_1BCA7E0(
      &Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
      v26,
      v27);
    sub_1BCA7E0(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v30, v31);
    byte_4B18E76 = 1;
  }
  v32 = sub_1BCAA2C(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, battleData, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_24;
  *(_QWORD *)(v32 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)this, v35, v36, v37, v38, v39, v40);
  if ( !battleData )
    goto LABEL_24;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                  battleData,
                                                                  this->fields._IsEnemy_k__BackingField,
                                                                  this->fields._FieldMemberIndex_k__BackingField,
                                                                  0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v46 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo,
                                         v43,
                                         v44,
                                         v45);
  System_Func_object__bool____ctor(
    v46,
    (Il2CppObject *)v32,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0LL);
  v47 = System_Linq_Enumerable__Where_object_(
          v42,
          (System_Func_TSource__bool__o *)v46,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v51 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  v52 = v47;
  if ( !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo, v48);
    v51 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v51->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51, v48);
      v51 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v51->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo,
                                              v48,
                                              v49,
                                              v50);
    System_Func_object__int____ctor(
      _9__5_1,
      v54,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0LL);
    static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_1, (int64_t)_9__5_1, v56, v57, v58, v59, v60, v61);
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v52,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v63 = System_Linq_Enumerable__ToArray_int_(
          v62,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v32 + 24) = v63;
  v64 = (__int64 *)(v32 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 24), (int64_t)v63, v65, v66, v67, v68, v69, v70);
  v74 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v71, v72, v73);
  System_Func_object__bool____ctor(
    v74,
    (Il2CppObject *)v32,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0LL);
  v75 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)v74,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  result = (BattleServantData_o *)System_Linq_Enumerable__ToArray_object_(
                                    v75,
                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !result )
    goto LABEL_24;
  v34 = result;
  if ( *(_QWORD *)&result->fields.uniqueId )
    return RestockServantLogic__ChoiceRestockServant_44303908(
             (RestockServantLogic_o *)this,
             (BattleServantData_array *)result,
             v76);
  v77 = *v64;
  if ( !*v64 )
LABEL_24:
    sub_1BCAA3C(result, v34);
  v78 = *(_QWORD *)(v77 + 24);
  if ( (int)v78 < 1 )
    return 0LL;
  v79 = 0LL;
  while ( 1 )
  {
    if ( v79 >= (unsigned int)v78 )
      sub_1BCAA44(result, v34);
    result = BattleData__getServantData(battleData, *(_DWORD *)(v77 + 32 + 4 * v79), 0LL);
    if ( result )
    {
      if ( !result->fields.isEntry )
        break;
    }
    LODWORD(v78) = *(_DWORD *)(v77 + 24);
    if ( (__int64)++v79 >= (int)v78 )
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18E77 & 1) == 0 )
  {
    sub_1BCA7E0(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v1, v2);
    byte_4B18E77 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RestockServantLogicByMoveToSubMember___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B18E78 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_1BCA7E0(
                                                                            &Method_System_Array_IndexOf_int___,
                                                                            x,
                                                                            method);
    byte_4B18E78 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) >> 31;
}