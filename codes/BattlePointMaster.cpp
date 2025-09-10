void BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F2D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
    byte_4C26F2D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  BattlePointMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_int__int__o *_9__0_1; // x20
  Il2CppObject *v14; // x21
  struct BattlePointMaster___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C26F2A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
    sub_1C2D490(&System_Func_BattlePointEntity__int__TypeInfo);
    sub_1C2D490(&System_Func_int__int__TypeInfo);
    sub_1C2D490(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__);
    sub_1C2D490(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__);
    sub_1C2D490(&BattlePointMaster___c_TypeInfo);
    byte_4C26F2A = 1;
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
    _9__0_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v6, Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, 0);
    static_fields = BattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattlePointEntity__int__o *)_9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Select_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__TResult__o *)_9__0_0,
          (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
  v11 = BattlePointMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v11 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = v11->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattlePointMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__0_1 = (System_Func_int__int__o *)sub_1C2D6DC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__0_1, v14, Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, 0);
    v15 = BattlePointMaster___c_TypeInfo->static_fields;
    v15->__9__0_1 = _9__0_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->__9__0_1, (int32_t)_9__0_1, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                            v12,
                                                            (System_Func_TSource__TKey__o *)_9__0_1,
                                                            (const MethodInfo_30FDEF4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
}


System_String_o *BattlePointMaster__GetGaugeAssetPath(int32_t battlePointId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C26F2B & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_3082/*"Battle/BattlePoint/Prefab/{0}"*/);
    byte_4C26F2B = 1;
  }
  v8 = battlePointId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3082/*"Battle/BattlePoint/Prefab/{0}"*/, v6, 0);
}


bool BattlePointMaster__IsHideGaugeAllTime(BattlePointMaster_o *this, int32_t battlePointId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  _BOOL4 v7; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C26F2C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    byte_4C26F2C = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         battlePointId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C2D6EC(v5, v6);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C26F2E & 1) == 0 )
  {
    sub_1C2D490(&BattlePointMaster___c_TypeInfo);
    byte_4C26F2E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattlePointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePointMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattlePointMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return entity->fields.id;
}


int32_t BattlePointMaster___c___GetBattlePointIds_b__0_1(
        BattlePointMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id;
}