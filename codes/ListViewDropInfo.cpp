void __fastcall ListViewDropInfo___ctor(
        ListViewDropInfo_o *this,
        UnityEngine_GameObject_o *listViewItemObject,
        UnityEngine_GameObject_o *dropSurfaceObject,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.listViewItemObject = listViewItemObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)listViewItemObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.dropSurfaceObject = dropSurfaceObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dropSurfaceObject,
    (System_Int32_array **)dropSurfaceObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall ListViewDropInfo__SendMessage(
        ListViewDropInfo_o *this,
        System_String_o *methodName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_42E7D80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, (_DWORD)methodName, (_DWORD)method, v3);
    byte_42E7D80 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           listViewItemObject,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0LL )
  {
    sub_B5D69C(listViewItemObject, methodName);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)listViewItemObject,
    methodName,
    (Il2CppObject *)this,
    0LL);
}


void __fastcall ListViewDropInfo__SendMessageOnDropItem(ListViewDropInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_42E7D81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10101/*"OnDropItem"*/, v5, v6, v7);
    byte_42E7D81 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           listViewItemObject,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0LL )
  {
    sub_B5D69C(listViewItemObject, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)listViewItemObject,
    (System_String_o *)StringLiteral_10101/*"OnDropItem"*/,
    (Il2CppObject *)this,
    0LL);
}


UnityEngine_GameObject_o *__fastcall ListViewDropInfo__get_DropSurfaceObject(
        ListViewDropInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.dropSurfaceObject;
}


ListViewItem_o *__fastcall ListViewDropInfo__get_ListViewItem(ListViewDropInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *listViewItemObject; // x20
  __int64 v9; // x1
  bool v10; // w8
  ListViewItem_o *result; // x0
  srcLineSprite_o *Component_srcLineSprite; // x19
  bool v13; // w8

  if ( (byte_42E7D7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7D7E = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(listViewItemObject, 0LL, 0LL);
  result = 0LL;
  if ( v10 )
  {
    result = (ListViewItem_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_15;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)result,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
    result = 0LL;
    if ( v13 )
    {
      if ( Component_srcLineSprite )
        return (ListViewItem_o *)Component_srcLineSprite->fields.mcLineSprite;
LABEL_15:
      sub_B5D69C(result, v9);
    }
  }
  return result;
}


UnityEngine_GameObject_o *__fastcall ListViewDropInfo__get_ListViewItemObject(
        ListViewDropInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.listViewItemObject;
}


ListViewManager_o *__fastcall ListViewDropInfo__get_ListViewManager(ListViewDropInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *listViewItemObject; // x20
  __int64 v9; // x1
  bool v10; // w8
  ListViewManager_o *result; // x0
  srcLineSprite_o *Component_srcLineSprite; // x19
  bool v13; // w8

  if ( (byte_42E7D7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7D7F = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(listViewItemObject, 0LL, 0LL);
  result = 0LL;
  if ( v10 )
  {
    result = (ListViewManager_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_15;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)result,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
    result = 0LL;
    if ( v13 )
    {
      if ( Component_srcLineSprite )
        return *(ListViewManager_o **)&Component_srcLineSprite->fields.mtIsUpdate;
LABEL_15:
      sub_B5D69C(result, v9);
    }
  }
  return result;
}


ListViewObject_o *__fastcall ListViewDropInfo__get_ListViewObject(ListViewDropInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *listViewItemObject; // x20
  __int64 v9; // x1
  bool v10; // w8
  ListViewObject_o *result; // x0
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_42E7D7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7D7D = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(listViewItemObject, 0LL, 0LL);
  result = 0LL;
  if ( v10 )
  {
    v12 = this->fields.listViewItemObject;
    if ( !v12 )
      sub_B5D69C(0LL, v9);
    return (ListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 v12,
                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
  }
  return result;
}