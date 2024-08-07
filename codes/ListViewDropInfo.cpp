void __fastcall ListViewDropInfo___ctor(
        ListViewDropInfo_o *this,
        UnityEngine_GameObject_o *listViewItemObject,
        UnityEngine_GameObject_o *dropSurfaceObject,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.listViewItemObject = listViewItemObject;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)listViewItemObject, v7, v8);
  this->fields.dropSurfaceObject = dropSurfaceObject;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.dropSurfaceObject, (int32_t)dropSurfaceObject, v9, v10);
}


void __fastcall ListViewDropInfo__SendMessage(
        ListViewDropInfo_o *this,
        System_String_o *methodName,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_49FFEE9 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, methodName);
    byte_49FFEE9 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0LL )
  {
    sub_1B64C5C(listViewItemObject, methodName);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)listViewItemObject,
    methodName,
    (Il2CppObject *)this,
    0LL);
}


void __fastcall ListViewDropInfo__SendMessageOnDropItem(ListViewDropInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_49FFEEA & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1B64A00(&StringLiteral_9848/*"OnDropItem"*/, v3);
    byte_49FFEEA = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0LL )
  {
    sub_1B64C5C(listViewItemObject, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)listViewItemObject,
    (System_String_o *)StringLiteral_9848/*"OnDropItem"*/,
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
  __int64 v3; // x1
  UnityEngine_Object_o *listViewItemObject; // x20
  __int64 v5; // x1
  bool v6; // w8
  ListViewItem_o *result; // x0
  Il2CppObject *Component_object; // x19
  bool v9; // w8

  if ( (byte_49FFEE7 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFEE7 = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(listViewItemObject, 0LL, 0LL);
  result = 0LL;
  if ( v6 )
  {
    result = (ListViewItem_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)result,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( v9 )
    {
      if ( Component_object )
        return (ListViewItem_o *)Component_object[3].monitor;
LABEL_13:
      sub_1B64C5C(result, v5);
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
  __int64 v3; // x1
  UnityEngine_Object_o *listViewItemObject; // x20
  __int64 v5; // x1
  bool v6; // w8
  ListViewManager_o *result; // x0
  Il2CppObject *Component_object; // x19
  bool v9; // w8

  if ( (byte_49FFEE8 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFEE8 = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(listViewItemObject, 0LL, 0LL);
  result = 0LL;
  if ( v6 )
  {
    result = (ListViewManager_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)result,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( v9 )
    {
      if ( Component_object )
        return (ListViewManager_o *)Component_object[2].monitor;
LABEL_13:
      sub_1B64C5C(result, v5);
    }
  }
  return result;
}


ListViewObject_o *__fastcall ListViewDropInfo__get_ListViewObject(ListViewDropInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *listViewItemObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49FFEE6 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFEE6 = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(listViewItemObject, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.listViewItemObject;
  if ( !v6 )
    sub_1B64C5C(0LL, v5);
  return (ListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                               v6,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
}