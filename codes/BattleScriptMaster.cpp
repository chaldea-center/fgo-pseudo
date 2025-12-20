void BattleScriptMaster___ctor(BattleScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C4BA & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string___ctor__);
    byte_4D2C4BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    555,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string___ctor__);
}


BattleScriptEntity_array *BattleScriptMaster__GetBattleScriptEntities(
        BattleScriptMaster_o *this,
        int32_t battleScriptId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  BattleScriptMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v14; // x21
  struct BattleScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  BattleScriptMaster___c_c *v23; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v26; // x21
  struct BattleScriptMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4D2C4B9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_BattleScriptEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenBy_BattleScriptEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleScriptEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleScriptEntity___);
    sub_1C94098(&System_Func_BattleScriptEntity__int__TypeInfo);
    sub_1C94098(&System_Func_BattleScriptEntity__bool__TypeInfo);
    sub_1C94098(&Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_1__);
    sub_1C94098(&Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_2__);
    sub_1C94098(&Method_BattleScriptMaster___c__DisplayClass0_0__GetBattleScriptEntities_b__0__);
    sub_1C94098(&BattleScriptMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C94098(&BattleScriptMaster___c_TypeInfo);
    byte_4D2C4B9 = 1;
  }
  v5 = sub_1C942E4(BattleScriptMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = battleScriptId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleScriptEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleScriptMaster___c__DisplayClass0_0__GetBattleScriptEntities_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleScriptEntity___);
  v11 = BattleScriptMaster___c_TypeInfo;
  v12 = v10;
  if ( !BattleScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptMaster___c_TypeInfo);
    v11 = BattleScriptMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v11->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleScriptMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v14, Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_1__, 0);
    static_fields = BattleScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_BattleScriptEntity__int__o *)_9__0_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v16, v17, v18, v19, v20, v21);
  }
  v22 = System_Linq_Enumerable__OrderBy_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_31CC104 *)Method_System_Linq_Enumerable_OrderBy_BattleScriptEntity__int___);
  v23 = BattleScriptMaster___c_TypeInfo;
  v24 = v22;
  if ( !BattleScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptMaster___c_TypeInfo);
    v23 = BattleScriptMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v23->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = BattleScriptMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_2, v26, Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_2__, 0);
    v27 = BattleScriptMaster___c_TypeInfo->static_fields;
    v27->__9__0_2 = (struct System_Func_BattleScriptEntity__int__o *)_9__0_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->__9__0_2, (int32_t)_9__0_2, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__0_2,
                                                               (const MethodInfo_31DBA10 *)Method_System_Linq_Enumerable_ThenBy_BattleScriptEntity__int___);
  return (BattleScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                       v34,
                                       (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleScriptEntity_o *BattleScriptMaster__GetEntity(
        BattleScriptMaster_o *this,
        int32_t id,
        int32_t playOrder,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C4BB & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__GetEntity__);
    byte_4D2C4BB = 1;
  }
  PK = (Il2CppObject *)BattleScriptEntity__CreatePK(id, playOrder, idx, *(const MethodInfo **)&idx);
  return (BattleScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_345FF78 *)Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleScriptMaster__TryGetEntity(
        BattleScriptMaster_o *this,
        BattleScriptEntity_o **entity,
        int32_t id,
        int32_t playOrder,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C4BC & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__TryGetEntity__);
    byte_4D2C4BC = 1;
  }
  PK = (Il2CppObject *)BattleScriptEntity__CreatePK(id, playOrder, idx, *(const MethodInfo **)&playOrder);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__TryGetEntity__);
}


void BattleScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C4BD & 1) == 0 )
  {
    sub_1C94098(&BattleScriptMaster___c_TypeInfo);
    byte_4D2C4BD = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleScriptMaster___c_TypeInfo->static_fields->__9 = (struct BattleScriptMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleScriptMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleScriptMaster___c___ctor(BattleScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleScriptMaster___c___GetBattleScriptEntities_b__0_1(
        BattleScriptMaster___c_o *this,
        BattleScriptEntity_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1C942F0(this, 0);
  return l->fields.playOrder;
}


int32_t BattleScriptMaster___c___GetBattleScriptEntities_b__0_2(
        BattleScriptMaster___c_o *this,
        BattleScriptEntity_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1C942F0(this, 0);
  return l->fields.idx;
}


void BattleScriptMaster___c__DisplayClass0_0___ctor(
        BattleScriptMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleScriptMaster___c__DisplayClass0_0___GetBattleScriptEntities_b__0(
        BattleScriptMaster___c__DisplayClass0_0_o *this,
        BattleScriptEntity_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1C942F0(this, 0);
  return l->fields.id == this->fields.battleScriptId;
}