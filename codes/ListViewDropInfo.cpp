void ListViewDropInfo___ctor(
        ListViewDropInfo_o *this,
        UnityEngine_GameObject_o *listViewItemObject,
        UnityEngine_GameObject_o *dropSurfaceObject,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.listViewItemObject = listViewItemObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)listViewItemObject, v7, v8, v9, v10, v11, v12);
  this->fields.dropSurfaceObject = dropSurfaceObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dropSurfaceObject,
    (int32_t)dropSurfaceObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void ListViewDropInfo__SendMessage(ListViewDropInfo_o *this, System_String_o *methodName, const MethodInfo *method)
{
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_5971FD3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    byte_5971FD3 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0 )
  {
    sub_2213CDC(listViewItemObject, methodName);
  }
  UnityEngine_Component__SendMessage((UnityEngine_Component_o *)listViewItemObject, methodName, (Il2CppObject *)this, 0);
}


void ListViewDropInfo__SendMessageOnDropItem(ListViewDropInfo_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_5971FD4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&StringLiteral_10298/*"OnDropItem"*/);
    byte_5971FD4 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0 )
  {
    sub_2213CDC(listViewItemObject, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)listViewItemObject,
    (System_String_o *)StringLiteral_10298/*"OnDropItem"*/,
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
  __int64 v4; // x1
  bool v5; // w8
  ListViewItem_o *result; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19
  bool v9; // w8

  if ( (byte_5971FD1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FD1 = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(listViewItemObject, 0, 0);
  result = 0;
  if ( v5 )
  {
    result = (ListViewItem_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)result,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v9 )
    {
      if ( Component_object )
        return (ListViewItem_o *)Component_object[3].monitor;
LABEL_13:
      sub_2213CDC(result, v4);
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
  __int64 v4; // x1
  bool v5; // w8
  ListViewManager_o *result; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19
  bool v9; // w8

  if ( (byte_5971FD2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FD2 = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(listViewItemObject, 0, 0);
  result = 0;
  if ( v5 )
  {
    result = (ListViewManager_o *)this->fields.listViewItemObject;
    if ( !result )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)result,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v9 )
    {
      if ( Component_object )
        return (ListViewManager_o *)Component_object[2].monitor;
LABEL_13:
      sub_2213CDC(result, v4);
    }
  }
  return result;
}


ListViewObject_o *ListViewDropInfo__get_ListViewObject(ListViewDropInfo_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listViewItemObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_5971FD0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FD0 = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(listViewItemObject, 0, 0) )
    return 0;
  v5 = this->fields.listViewItemObject;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return (ListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
}