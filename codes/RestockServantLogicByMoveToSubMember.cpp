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
  BattleServantData_array *ServantData; // x0
  BattleServantData_array *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_IEnumerable_o *RestockServantLogicList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x23
  System_Func_object__bool__o *v29; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  RestockServantLogicByMoveToSubMember___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x23
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v34; // x25
  struct RestockServantLogicByMoveToSubMember___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Int32_array *v43; // x0
  __int64 *v44; // x23
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Func_object__bool__o *v51; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v55; // x21
  __int64 v56; // x8
  unsigned __int64 v57; // x22
  BattleServantData_o *v58; // x20
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_4C24D56 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___, battleData);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___, v9);
    sub_1C3B764(&System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo, v10);
    sub_1C3B764(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1C3B764(&System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo, v12);
    sub_1C3B764(&Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__, v13);
    sub_1C3B764(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__, v14);
    sub_1C3B764(&Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__, v15);
    sub_1C3B764(&RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo, v16);
    sub_1C3B764(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v17);
    byte_4C24D56 = 1;
  }
  v18 = sub_1C3B9B0(RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  if ( !battleData )
    goto LABEL_25;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetRestockableSubServantArray(
                                                                  battleData,
                                                                  this->fields._IsEnemy_k__BackingField,
                                                                  this->fields._FieldMemberIndex_k__BackingField,
                                                                  0LL);
  RestockServantLogicList = (System_Collections_IEnumerable_o *)BattleData__GetRestockServantLogicList(battleData, 0LL);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               RestockServantLogicList,
                                                               (const MethodInfo_3019DB0 *)Method_System_Linq_Enumerable_OfType_RestockServantLogicByMoveToSubMember___);
  v29 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RestockServantLogicByMoveToSubMember__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_RestockServantLogicByMoveToSubMember___);
  v31 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  v32 = v30;
  if ( !RestockServantLogicByMoveToSubMember___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
    v31 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v31->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = RestockServantLogicByMoveToSubMember___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_RestockServantLogicByMoveToSubMember__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v34,
      Method_RestockServantLogicByMoveToSubMember___c__ChoiceRestockServant_b__5_1__,
      0LL);
    static_fields = RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Func_RestockServantLogicByMoveToSubMember__int__o *)_9__5_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__5_1, (int64_t)_9__5_1, v36, v37, v38, v39, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)_9__5_1,
                                                               (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_RestockServantLogicByMoveToSubMember__int___);
  v43 = System_Linq_Enumerable__ToArray_int_(
          v42,
          (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v18 + 24) = v43;
  v44 = (__int64 *)(v18 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v51,
    (Il2CppObject *)v18,
    Method_RestockServantLogicByMoveToSubMember___c__DisplayClass5_0__ChoiceRestockServant_b__2__,
    0LL);
  v52 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)v51,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  ServantData = (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                             v52,
                                             (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !ServantData )
    goto LABEL_25;
  v20 = ServantData;
  if ( *(_QWORD *)&ServantData->max_length )
    return RestockServantLogic__ChoiceRestockServant_45131596((RestockServantLogic_o *)this, ServantData, v53);
  v55 = *v44;
  if ( !*v44 )
LABEL_25:
    sub_1C3B9C0(ServantData, v20);
  v56 = *(_QWORD *)(v55 + 24);
  if ( (int)v56 < 1 )
    return 0LL;
  v57 = 0LL;
  while ( 1 )
  {
    if ( v57 >= (unsigned int)v56 )
      sub_1C3B9C8(ServantData, v20);
    ServantData = (BattleServantData_array *)BattleData__getServantData(
                                               battleData,
                                               *(_DWORD *)(v55 + 32 + 4 * v57),
                                               0LL);
    if ( ServantData )
    {
      v58 = (BattleServantData_o *)ServantData;
      if ( !BYTE4(ServantData->m_Items[55]) )
      {
        ServantData = (BattleServantData_array *)BattleServantData__isAlive((BattleServantData_o *)ServantData, 0, 0LL);
        if ( ((unsigned __int8)ServantData & 1) != 0 )
          break;
      }
    }
    LODWORD(v56) = *(_DWORD *)(v55 + 24);
    if ( (__int64)++v57 >= (int)v56 )
      return 0LL;
  }
  return v58;
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C24D57 & 1) == 0 )
  {
    sub_1C3B764(&RestockServantLogicByMoveToSubMember___c_TypeInfo, v1);
    byte_4C24D57 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(RestockServantLogicByMoveToSubMember___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields->__9 = (struct RestockServantLogicByMoveToSubMember___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)RestockServantLogicByMoveToSubMember___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, x);
  return !x->fields._IsEnemy_k__BackingField ^ _4__this->fields._IsEnemy_k__BackingField;
}


bool __fastcall RestockServantLogicByMoveToSubMember___c__DisplayClass5_0___ChoiceRestockServant_b__2(
        RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C24D58 & 1) == 0 )
  {
    this = (RestockServantLogicByMoveToSubMember___c__DisplayClass5_0_o *)sub_1C3B764(
                                                                            &Method_System_Array_IndexOf_int___,
                                                                            x);
    byte_4C24D58 = 1;
  }
  if ( !x )
    sub_1C3B9C0(this, x);
  return (unsigned int)System_Array__IndexOf_int_(
                         v4->fields.moveToSubMemberUniqueIdArray,
                         x->fields.uniqueId,
                         (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___) >> 31;
}