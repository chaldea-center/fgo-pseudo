void ListViewDropInfo___ctor(
        ListViewDropInfo_o *this,
        UnityEngine_GameObject_o *listViewItemObject,
        UnityEngine_GameObject_o *dropSurfaceObject,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.listViewItemObject = listViewItemObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)listViewItemObject, v7, v8);
  this->fields.dropSurfaceObject = dropSurfaceObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dropSurfaceObject, (int32_t)dropSurfaceObject, v9, v10);
}


void ListViewDropInfo__SendMessage(ListViewDropInfo_o *this, System_String_o *methodName, const MethodInfo *method)
{
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_4C446D0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    byte_4C446D0 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0 )
  {
    sub_1C372B4(listViewItemObject);
  }
  UnityEngine_Component__SendMessage((UnityEngine_Component_o *)listViewItemObject, methodName, (Il2CppObject *)this, 0);
}


void ListViewDropInfo__SendMessageOnDropItem(ListViewDropInfo_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_4C446D1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&StringLiteral_9897/*"OnDropItem"*/);
    byte_4C446D1 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0 )
  {
    sub_1C372B4(listViewItemObject);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)listViewItemObject,
    (System_String_o *)StringLiteral_9897/*"OnDropItem"*/,
    (Il2CppObject *)this,
    0);
}


UnityEngine_GameObject_o *ListViewDropInfo__get_DropSurfaceObject(ListViewDropInfo_o *this, const MethodInfo *method)
{
  return this->fields.dropSurfaceObject;
}


ListViewItem_o *ListViewDropInfo__get_ListViewItem(ListViewDropInfo_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listViewItemObject; // x20
  bool v4; // w8
  ListViewItem_o *result; // x0
  Il2CppObject *Component_object; // x19
  bool v7; // w8

  if ( (byte_4C446CE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446CE = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(listViewItemObject, 0, 0);
  result = 0;
  if ( v4 )
  {
    result = (ListViewItem_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)result,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v7 )
    {
      if ( Component_object )
        return (ListViewItem_o *)Component_object[3].monitor;
LABEL_13:
      sub_1C372B4(result);
    }
  }
  return result;
}


UnityEngine_GameObject_o *ListViewDropInfo__get_ListViewItemObject(ListViewDropInfo_o *this, const MethodInfo *method)
{
  return this->fields.listViewItemObject;
}


ListViewManager_o *ListViewDropInfo__get_ListViewManager(ListViewDropInfo_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listViewItemObject; // x20
  bool v4; // w8
  ListViewManager_o *result; // x0
  Il2CppObject *Component_object; // x19
  bool v7; // w8

  if ( (byte_4C446CF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446CF = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(listViewItemObject, 0, 0);
  result = 0;
  if ( v4 )
  {
    result = (ListViewManager_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)result,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v7 )
    {
      if ( Component_object )
        return (ListViewManager_o *)Component_object[2].monitor;
LABEL_13:
      sub_1C372B4(result);
    }
  }
  return result;
}


ListViewObject_o *ListViewDropInfo__get_ListViewObject(ListViewDropInfo_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listViewItemObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C446CD & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446CD = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(listViewItemObject, 0, 0) )
    return 0;
  v4 = this->fields.listViewItemObject;
  if ( !v4 )
    sub_1C372B4(0);
  return (ListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                               v4,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
}