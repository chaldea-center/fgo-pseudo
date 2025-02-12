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

  if ( (byte_4BB3A91 & 1) == 0 )
  {
    sub_1C13D24(&Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__, method);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___,
      v3);
    sub_1C13D24(&System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo, v4);
    byte_4BB3A91 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantCollection_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v6 = (System_Func_T1__T2__TResult__o *)sub_1C13F70(System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__50073084(
                                                                                   v5,
                                                                                   (System_Func_TSource__int__TResult__o *)v6,
                                                                                   (const MethodInfo_2FC0DFC *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantCollection__GetItemDrawPattern(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4BB3A92 & 1) == 0 )
  {
    sub_1C13D24(&CharaGraphListViewItemDrawPatternServantCollection_TypeInfo, method);
    byte_4BB3A92 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(CharaGraphListViewItemDrawPatternServantCollection_TypeInfo);
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

  if ( (byte_4BB3A93 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v2);
    byte_4BB3A93 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object )
    sub_1C13F80(0LL, v4);
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

  if ( (byte_4BB3A94 & 1) == 0 )
  {
    sub_1C13D24(&CharaGraphServantCollectionListViewItem_TypeInfo, elem);
    byte_4BB3A94 = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1C13F70(CharaGraphServantCollectionListViewItem_TypeInfo);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, v8);
  return v7;
}