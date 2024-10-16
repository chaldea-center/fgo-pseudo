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
  System_Func_T1__T2__TResult__o *v6; // x21

  if ( (byte_4AB511F & 1) == 0 )
  {
    sub_1BAB41C(&Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__, method);
    sub_1BAB41C(
      &Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___,
      v3);
    sub_1BAB41C(&System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo, v4);
    byte_4AB511F = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantCollection_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v6 = (System_Func_T1__T2__TResult__o *)sub_1BAB668(System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__49235468(
                                                                                   v5,
                                                                                   (System_Func_TSource__int__TResult__o *)v6,
                                                                                   (const MethodInfo_2EF460C *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantCollection__GetItemDrawPattern(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4AB5120 & 1) == 0 )
  {
    sub_1BAB41C(&CharaGraphListViewItemDrawPatternServantCollection_TypeInfo, method);
    byte_4AB5120 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(CharaGraphListViewItemDrawPatternServantCollection_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


UserServantCollectionEntity_array *__fastcall CharaGraphListViewPatternServantCollection__GetServantArray(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4AB5121 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v2);
    byte_4AB5121 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object )
    sub_1BAB678(0LL, v4);
  return UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Master_object, 2, 0LL);
}


CharaGraphServantCollectionListViewItem_o *__fastcall CharaGraphListViewPatternServantCollection___GenerateListViewItem_b__0_0(
        CharaGraphListViewPatternServantCollection_o *this,
        UserServantCollectionEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4AB5122 & 1) == 0 )
  {
    sub_1BAB41C(&CharaGraphServantCollectionListViewItem_TypeInfo, elem);
    byte_4AB5122 = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1BAB668(CharaGraphServantCollectionListViewItem_TypeInfo);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, v8);
  return v7;
}