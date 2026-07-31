void CharaGraphListViewPatternServantCollection___ctor(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewPatternServantCollection__GenerateListViewItem(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x20
  System_Func_T1__T2__TResult__o *v4; // x21

  if ( (byte_5937977 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
    sub_21FFC50(&System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo);
    byte_5937977 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantCollection_o *, const MethodInfo *))this->klass->vtable._15_GetServantArray.methodPtr)(
                                                              this,
                                                              this->klass->vtable._15_GetServantArray.method);
  v4 = (System_Func_T1__T2__TResult__o *)sub_21FFEBC(System_Func_UserServantCollectionEntity__int__CharaGraphServantCollectionListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantCollection__GenerateListViewItem_b__0_0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__59105316(
                                                                                   v3,
                                                                                   (System_Func_TSource__int__TResult__o *)v4,
                                                                                   (const MethodInfo_385E024 *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantCollectionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *CharaGraphListViewPatternServantCollection__GetItemDrawPattern(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_5937978 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewItemDrawPatternServantCollection_TypeInfo);
    byte_5937978 = 1;
  }
  v2 = (Il2CppObject *)sub_21FFEBC(CharaGraphListViewItemDrawPatternServantCollection_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


UserServantCollectionEntity_array *CharaGraphListViewPatternServantCollection__GetServantArray(
        CharaGraphListViewPatternServantCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_5937979 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5937979 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  return UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Master_object, 2, 0);
}


CharaGraphServantCollectionListViewItem_o *CharaGraphListViewPatternServantCollection___GenerateListViewItem_b__0_0(
        CharaGraphListViewPatternServantCollection_o *this,
        UserServantCollectionEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_593797A & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphServantCollectionListViewItem_TypeInfo);
    byte_593797A = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_21FFEBC(CharaGraphServantCollectionListViewItem_TypeInfo);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, v8);
  return v7;
}