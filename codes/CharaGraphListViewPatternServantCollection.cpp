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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Func_T1__T2__TResult__o *v12; // x21

  if ( (byte_4B155BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___,
      v4,
      v5);
    sub_1BCA7E0(
      &System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo,
      v6,
      v7);
    byte_4B155BB = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantCollection_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v12 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                            System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo,
                                            v9,
                                            v10,
                                            v11);
  System_Func_object__int__object____ctor(
    v12,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__49560932(
                                                                                   v8,
                                                                                   (System_Func_TSource__int__TResult__o *)v12,
                                                                                   (const MethodInfo_2F43D64 *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantCollection__GetItemDrawPattern(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B155BC & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewItemDrawPatternServantCollection_TypeInfo, method, v2);
    byte_4B155BC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CharaGraphListViewItemDrawPatternServantCollection_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v4;
}


UserServantCollectionEntity_array *__fastcall CharaGraphListViewPatternServantCollection__GetServantArray(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4B155BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    byte_4B155BD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B155BE & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphServantCollectionListViewItem_TypeInfo, elem, *(_QWORD *)&i);
    byte_4B155BE = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1BCAA2C(
                                                      CharaGraphServantCollectionListViewItem_TypeInfo,
                                                      elem,
                                                      *(_QWORD *)&i,
                                                      method);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, v8);
  return v7;
}