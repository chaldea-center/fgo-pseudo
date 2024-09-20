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
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x20
  System_Func_T1__T2__TResult__o *v4; // x21

  if ( (byte_4A5A54F & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
    sub_1B885B0(&System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo);
    byte_4A5A54F = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantCollection_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v4 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__48957184(
                                                                                   v3,
                                                                                   (System_Func_TSource__int__TResult__o *)v4,
                                                                                   (const MethodInfo_2EB0700 *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantCollection__GetItemDrawPattern(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4A5A550 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewItemDrawPatternServantCollection_TypeInfo);
    byte_4A5A550 = 1;
  }
  v2 = (Il2CppObject *)sub_1B887FC(CharaGraphListViewItemDrawPatternServantCollection_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


UserServantCollectionEntity_array *__fastcall CharaGraphListViewPatternServantCollection__GetServantArray(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1

  if ( (byte_4A5A551 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A551 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v3);
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

  if ( (byte_4A5A552 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphServantCollectionListViewItem_TypeInfo);
    byte_4A5A552 = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1B887FC(CharaGraphServantCollectionListViewItem_TypeInfo);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, v8);
  return v7;
}