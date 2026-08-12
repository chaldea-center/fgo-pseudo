void BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59704B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
    byte_59704B8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    470,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *BlankEarthGimmickMaster__GetGimmicks(
        BlankEarthGimmickMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_BlankEarthGimmickEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_59704B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BlankEarthGimmickEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BlankEarthGimmickEntity___);
    sub_2213A60(&System_Func_BlankEarthGimmickEntity__bool__TypeInfo);
    sub_2213A60(&Method_BlankEarthGimmickMaster___c__DisplayClass0_0__GetGimmicks_b__0__);
    sub_2213A60(&BlankEarthGimmickMaster___c__DisplayClass0_0_TypeInfo);
    byte_59704B7 = 1;
  }
  v5 = sub_2213CCC(BlankEarthGimmickMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_BlankEarthGimmickEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = mapId;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BlankEarthGimmickMaster___c__DisplayClass0_0__GetGimmicks_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BlankEarthGimmickEntity___);
  return (BlankEarthGimmickEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            v11,
                                            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BlankEarthGimmickEntity___);
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
    sub_2213CDC(this, 0);
  return x->fields.mapId == this->fields.mapId;
}