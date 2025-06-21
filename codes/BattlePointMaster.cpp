void __fastcall BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C189 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__, method);
    byte_4B1C189 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattlePointMaster__GetBattlePointIds(
        BattlePointMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattlePointMaster___c_c *v9; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v12; // x21
  struct BattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  BattlePointMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_int__int__o *_9__0_1; // x20
  Il2CppObject *v20; // x21
  struct BattlePointMaster___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B1C186 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_int__int___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_BattlePointEntity__int___, v3);
    sub_1BCAFF8(&System_Func_BattlePointEntity__int__TypeInfo, v4);
    sub_1BCAFF8(&System_Func_int__int__TypeInfo, v5);
    sub_1BCAFF8(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, v6);
    sub_1BCAFF8(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, v7);
    sub_1BCAFF8(&BattlePointMaster___c_TypeInfo, v8);
    byte_4B1C186 = 1;
  }
  v9 = BattlePointMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v9 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v9->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattlePointMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_BattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v12, Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, 0LL);
    static_fields = BattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattlePointEntity__int__o *)_9__0_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__TResult__o *)_9__0_0,
          (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
  v17 = BattlePointMaster___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v17 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = v17->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BattlePointMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__0_1 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__0_1, v20, Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, 0LL);
    v21 = BattlePointMaster___c_TypeInfo->static_fields;
    v21->__9__0_1 = _9__0_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v21->__9__0_1, (int32_t)_9__0_1, v22, v23);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                            v18,
                                                            (System_Func_TSource__TKey__o *)_9__0_1,
                                                            (const MethodInfo_3045F98 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
}


System_String_o *__fastcall BattlePointMaster__GetGaugeAssetPath(int32_t battlePointId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1C187 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3066/*"Battle/BattlePoint/Prefab/{0}"*/, v6);
    byte_4B1C187 = 1;
  }
  v9 = battlePointId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3066/*"Battle/BattlePoint/Prefab/{0}"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePointMaster__IsHideGaugeAllTime(
        BattlePointMaster_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  _BOOL4 v7; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C188 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__,
      *(_QWORD *)&battlePointId);
    byte_4B1C188 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         battlePointId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1BCB254(v5, v6);
    return (LOBYTE(entity[2].klass) >> 1) & 1;
  }
  else
  {
    LOBYTE(v7) = 1;
  }
  return v7;
}


void __fastcall BattlePointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C18A & 1) == 0 )
  {
    sub_1BCAFF8(&BattlePointMaster___c_TypeInfo, v1);
    byte_4B1C18A = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattlePointMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattlePointMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattlePointMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattlePointMaster___c___ctor(BattlePointMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattlePointMaster___c___GetBattlePointIds_b__0_0(
        BattlePointMaster___c_o *this,
        BattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return entity->fields.id;
}


int32_t __fastcall BattlePointMaster___c___GetBattlePointIds_b__0_1(
        BattlePointMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id;
}