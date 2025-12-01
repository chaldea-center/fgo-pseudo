void BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7027 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
    byte_4CC7027 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
}


System_Collections_Generic_IEnumerable_int__o *BattlePointMaster__GetBattlePointIds(
        BattlePointMaster_o *this,
        const MethodInfo *method)
{
  BattlePointMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v6; // x21
  struct BattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  BattlePointMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_int__int__o *_9__0_1; // x20
  Il2CppObject *v18; // x21
  struct BattlePointMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CC7024 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
    sub_1C713B0(&System_Func_BattlePointEntity__int__TypeInfo);
    sub_1C713B0(&System_Func_int__int__TypeInfo);
    sub_1C713B0(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__);
    sub_1C713B0(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__);
    sub_1C713B0(&BattlePointMaster___c_TypeInfo);
    byte_4CC7024 = 1;
  }
  v3 = BattlePointMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v3 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v3->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattlePointMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v6, Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, 0);
    static_fields = BattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattlePointEntity__int__o *)_9__0_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Select_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__TResult__o *)_9__0_0,
          (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
  v15 = BattlePointMaster___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v15 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = v15->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattlePointMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__0_1 = (System_Func_int__int__o *)sub_1C715FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__0_1, v18, Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, 0);
    v19 = BattlePointMaster___c_TypeInfo->static_fields;
    v19->__9__0_1 = _9__0_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->__9__0_1, (int32_t)_9__0_1, v20, v21, v22, v23, v24, v25);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                            v16,
                                                            (System_Func_TSource__TKey__o *)_9__0_1,
                                                            (const MethodInfo_317A78C *)Method_System_Linq_Enumerable_OrderBy_int__int___);
}


System_String_o *BattlePointMaster__GetGaugeAssetPath(int32_t battlePointId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC7025 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_3079/*"Battle/BattlePoint/Prefab/{0}"*/);
    byte_4CC7025 = 1;
  }
  v5 = battlePointId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3079/*"Battle/BattlePoint/Prefab/{0}"*/, v3, 0);
}


bool BattlePointMaster__IsHideGaugeAllTime(BattlePointMaster_o *this, int32_t battlePointId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  _BOOL4 v7; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7026 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    byte_4CC7026 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         battlePointId,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C71608(v5, v6);
    return (*((unsigned __int8 *)&qword_20 + (_QWORD)entity) >> 1) & 1;
  }
  else
  {
    LOBYTE(v7) = 1;
  }
  return v7;
}


void BattlePointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7028 & 1) == 0 )
  {
    sub_1C713B0(&BattlePointMaster___c_TypeInfo);
    byte_4CC7028 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattlePointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePointMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattlePointMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePointMaster___c___ctor(BattlePointMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattlePointMaster___c___GetBattlePointIds_b__0_0(
        BattlePointMaster___c_o *this,
        BattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.id;
}


int32_t BattlePointMaster___c___GetBattlePointIds_b__0_1(
        BattlePointMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id;
}