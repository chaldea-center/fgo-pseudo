void BattleScriptMaster___ctor(BattleScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970492 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string___ctor__);
    byte_5970492 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    557,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string___ctor__);
}


BattleScriptEntity_array *BattleScriptMaster__GetBattleScriptEntities(
        BattleScriptMaster_o *this,
        int32_t battleScriptId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_BattleScriptEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  __int64 v12; // x1
  BattleScriptMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  struct BattleScriptMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v17; // x21
  struct BattleScriptMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  BattleScriptMaster___c_c *v27; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x19
  struct BattleScriptMaster___c_StaticFields *v29; // x9
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v31; // x21
  struct BattleScriptMaster___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_5970491 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_BattleScriptEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_BattleScriptEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleScriptEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleScriptEntity___);
    sub_2213A60(&System_Func_BattleScriptEntity__int__TypeInfo);
    sub_2213A60(&System_Func_BattleScriptEntity__bool__TypeInfo);
    sub_2213A60(&Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_1__);
    sub_2213A60(&Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_2__);
    sub_2213A60(&Method_BattleScriptMaster___c__DisplayClass0_0__GetBattleScriptEntities_b__0__);
    sub_2213A60(&BattleScriptMaster___c__DisplayClass0_0_TypeInfo);
    sub_2213A60(&BattleScriptMaster___c_TypeInfo);
    byte_5970491 = 1;
  }
  v5 = sub_2213CCC(BattleScriptMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_BattleScriptEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = battleScriptId;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleScriptMaster___c__DisplayClass0_0__GetBattleScriptEntities_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleScriptEntity___);
  v13 = BattleScriptMaster___c_TypeInfo;
  v14 = v11;
  if ( !*(&BattleScriptMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptMaster___c_TypeInfo, v12);
    v13 = BattleScriptMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__0_1 = (System_Func_object__int__o *)static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = BattleScriptMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v17, Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_1__, 0);
    v18 = BattleScriptMaster___c_TypeInfo->static_fields;
    v18->__9__0_1 = (struct System_Func_BattleScriptEntity__int__o *)_9__0_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__0_1, (int32_t)_9__0_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = System_Linq_Enumerable__OrderBy_object__int_(
          v14,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_BattleScriptEntity__int___);
  v27 = BattleScriptMaster___c_TypeInfo;
  v28 = v25;
  if ( !*(&BattleScriptMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptMaster___c_TypeInfo, v26);
    v27 = BattleScriptMaster___c_TypeInfo;
  }
  v29 = v27->static_fields;
  _9__0_2 = (System_Func_object__int__o *)v29->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, v26);
      v29 = BattleScriptMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_2, v31, Method_BattleScriptMaster___c__GetBattleScriptEntities_b__0_2__, 0);
    v32 = BattleScriptMaster___c_TypeInfo->static_fields;
    v32->__9__0_2 = (struct System_Func_BattleScriptEntity__int__o *)_9__0_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__0_2, (int32_t)_9__0_2, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__0_2,
                                                               (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_BattleScriptEntity__int___);
  return (BattleScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                       v39,
                                       (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleScriptEntity___);
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

  if ( (byte_5970493 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__GetEntity__);
    byte_5970493 = 1;
  }
  PK = (Il2CppObject *)BattleScriptEntity__CreatePK(id, playOrder, idx, *(const MethodInfo **)&idx);
  return (BattleScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3F157EC *)Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__GetEntity__);
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

  if ( (byte_5970494 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__TryGetEntity__);
    byte_5970494 = 1;
  }
  PK = (Il2CppObject *)BattleScriptEntity__CreatePK(id, playOrder, idx, *(const MethodInfo **)&playOrder);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_BattleScriptMaster__BattleScriptEntity__string__TryGetEntity__);
}


void BattleScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970495 & 1) == 0 )
  {
    sub_2213A60(&BattleScriptMaster___c_TypeInfo);
    byte_5970495 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleScriptMaster___c_TypeInfo->static_fields->__9 = (struct BattleScriptMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleScriptMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return l->fields.playOrder;
}


int32_t BattleScriptMaster___c___GetBattleScriptEntities_b__0_2(
        BattleScriptMaster___c_o *this,
        BattleScriptEntity_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return l->fields.id == this->fields.battleScriptId;
}