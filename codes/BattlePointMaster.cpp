void __fastcall BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC0BD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__, method);
    byte_49FC0BD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    504,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
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
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  BattlePointMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v16; // x21
  struct BattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  BattlePointMaster___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_int__int__o *_9__0_1; // x20
  Il2CppObject *v26; // x21
  struct BattlePointMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FC0BC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_BattlePointEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_int__int___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattlePointEntity__int___, v4);
    sub_1B640C8(&System_Func_BattlePointEntity__int__TypeInfo, v5);
    sub_1B640C8(&System_Func_int__int__TypeInfo, v6);
    sub_1B640C8(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, v7);
    sub_1B640C8(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, v8);
    sub_1B640C8(&BattlePointMaster___c_TypeInfo, v9);
    byte_49FC0BC = 1;
  }
  v10 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_BattlePointEntity___);
  v13 = BattlePointMaster___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v13 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v13->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattlePointMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattlePointEntity__int__TypeInfo, v11, v12);
    System_Func_object__int____ctor(_9__0_0, v16, Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, 0LL);
    static_fields = BattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattlePointEntity__int__o *)_9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Select_object__int_(
          v14,
          (System_Func_TSource__TResult__o *)_9__0_0,
          (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
  v23 = BattlePointMaster___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v23 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = v23->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = BattlePointMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__0_1 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v21, v22);
    System_Func_int__int____ctor(_9__0_1, v26, Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, 0LL);
    v27 = BattlePointMaster___c_TypeInfo->static_fields;
    v27->__9__0_1 = _9__0_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->__9__0_1, (int32_t)_9__0_1, v28, v29);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                            v24,
                                                            (System_Func_TSource__TKey__o *)_9__0_1,
                                                            (const MethodInfo_2E62EA4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
}


void __fastcall BattlePointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC0BE & 1) == 0 )
  {
    sub_1B640C8(&BattlePointMaster___c_TypeInfo, v1);
    byte_49FC0BE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattlePointMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattlePointMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattlePointMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return entity->fields.id;
}


int32_t __fastcall BattlePointMaster___c___GetBattlePointIds_b__0_1(
        BattlePointMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id;
}