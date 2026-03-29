void BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30688 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
    byte_4D30688 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    468,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *BlankEarthGimmickMaster__GetGimmicks(
        BlankEarthGimmickMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4D30687 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__getEntityList__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BlankEarthGimmickEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BlankEarthGimmickEntity___);
    sub_1C93AD4(&System_Func_BlankEarthGimmickEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_BlankEarthGimmickMaster___c__DisplayClass0_0__GetGimmicks_b__0__);
    sub_1C93AD4(&BlankEarthGimmickMaster___c__DisplayClass0_0_TypeInfo);
    byte_4D30687 = 1;
  }
  v5 = sub_1C93D20(BlankEarthGimmickMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BlankEarthGimmickEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthGimmickMaster___c__DisplayClass0_0__GetGimmicks_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BlankEarthGimmickEntity___);
  return (BlankEarthGimmickEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            v10,
                                            (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BlankEarthGimmickEntity___);
}


void BlankEarthGimmickMaster___c__DisplayClass0_0___ctor(
        BlankEarthGimmickMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthGimmickMaster___c__DisplayClass0_0___GetGimmicks_b__0(
        BlankEarthGimmickMaster___c__DisplayClass0_0_o *this,
        BlankEarthGimmickEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.mapId == this->fields.mapId;
}