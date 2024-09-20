void __fastcall BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE01 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
    byte_4A5AE01 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    504,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattlePointMaster__GetBattlePointIds(
        BattlePointMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TResult__o *v3; // x0
  BattlePointMaster___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v7; // x21
  struct BattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v11; // x0
  BattlePointMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_int__int__o *_9__0_1; // x20
  Il2CppObject *v15; // x21
  struct BattlePointMaster___c_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5AE00 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_BattlePointEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
    sub_1B885B0(&System_Func_BattlePointEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__);
    sub_1B885B0(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__);
    sub_1B885B0(&BattlePointMaster___c_TypeInfo);
    byte_4A5AE00 = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_BattlePointEntity___);
  v4 = BattlePointMaster___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v4 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v4->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattlePointMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v7, Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, 0LL);
    static_fields = BattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattlePointEntity__int__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Select_object__int_(
          v5,
          (System_Func_TSource__TResult__o *)_9__0_0,
          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
  v12 = BattlePointMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v12 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = v12->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattlePointMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__0_1 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__0_1, v15, Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, 0LL);
    v16 = BattlePointMaster___c_TypeInfo->static_fields;
    v16->__9__0_1 = _9__0_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->__9__0_1, (int32_t)_9__0_1, v17, v18);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                            v13,
                                                            (System_Func_TSource__TKey__o *)_9__0_1,
                                                            (const MethodInfo_2EA9C10 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
}


void __fastcall BattlePointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AE02 & 1) == 0 )
  {
    sub_1B885B0(&BattlePointMaster___c_TypeInfo);
    byte_4A5AE02 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattlePointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattlePointMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattlePointMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.id;
}


int32_t __fastcall BattlePointMaster___c___GetBattlePointIds_b__0_1(
        BattlePointMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id;
}