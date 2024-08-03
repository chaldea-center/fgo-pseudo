void __fastcall CharaGraphListViewPatternServantCollection___ctor(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewPatternServantCollection__GenerateListViewItem(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Func_T1__T2__TResult__o *v8; // x21

  if ( (byte_49FB81A & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__, method);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___,
      v3);
    sub_1B640C8(&System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo, v4);
    byte_49FB81A = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantCollection_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v8 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                           System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo,
                                           v6,
                                           v7);
  System_Func_object__int__object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__48666272(
                                                                                   v5,
                                                                                   (System_Func_TSource__int__TResult__o *)v8,
                                                                                   (const MethodInfo_2E696A0 *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantCollection__GetItemDrawPattern(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49FB81B & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListViewItemDrawPatternServantCollection_TypeInfo, method);
    byte_49FB81B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CharaGraphListViewItemDrawPatternServantCollection_TypeInfo, method, v2);
  System_Object___ctor(v3, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v3;
}


UserServantCollectionEntity_array *__fastcall CharaGraphListViewPatternServantCollection__GetServantArray(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Master_object; // x0

  if ( (byte_49FB81C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    byte_49FB81C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Master_object, 2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphServantCollectionListViewItem_o *__fastcall CharaGraphListViewPatternServantCollection___GenerateListViewItem_b__0_0(
        CharaGraphListViewPatternServantCollection_o *this,
        UserServantCollectionEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_49FB81D & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphServantCollectionListViewItem_TypeInfo, elem);
    byte_49FB81D = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1B64314(
                                                      CharaGraphServantCollectionListViewItem_TypeInfo,
                                                      elem,
                                                      *(_QWORD *)&i);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, v8);
  return v7;
}