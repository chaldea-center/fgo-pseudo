void __fastcall ListViewDropInfo___ctor(
        ListViewDropInfo_o *this,
        UnityEngine_GameObject_o *listViewItemObject,
        UnityEngine_GameObject_o *dropSurfaceObject,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.listViewItemObject = listViewItemObject;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)listViewItemObject, v7, v8, v9, v10, v11, v12);
  this->fields.dropSurfaceObject = dropSurfaceObject;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dropSurfaceObject,
    (int64_t)dropSurfaceObject,
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
  UnityEngine_GameObject_o *listViewItemObject; // x0

  if ( (byte_4BB5B65 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, methodName);
    byte_4BB5B65 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0LL )
  {
    sub_1C13F80(listViewItemObject, methodName);
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

  if ( (byte_4BB5B66 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1C13D24(&StringLiteral_10072/*"OnDrag"*/, v3);
    byte_4BB5B66 = 1;
  }
  listViewItemObject = this->fields.listViewItemObject;
  if ( !listViewItemObject
    || (listViewItemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           listViewItemObject,
                                                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___)) == 0LL )
  {
    sub_1C13F80(listViewItemObject, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)listViewItemObject,
    (System_String_o *)StringLiteral_10072/*"OnDrag"*/,
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

  if ( (byte_4BB5B63 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB5B63 = 1;
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
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( v9 )
    {
      if ( Component_object )
        return (ListViewItem_o *)Component_object[3].monitor;
LABEL_13:
      sub_1C13F80(result, v5);
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

  if ( (byte_4BB5B64 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB5B64 = 1;
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
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( v9 )
    {
      if ( Component_object )
        return (ListViewManager_o *)Component_object[2].monitor;
LABEL_13:
      sub_1C13F80(result, v5);
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

  if ( (byte_4BB5B62 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB5B62 = 1;
  }
  listViewItemObject = (UnityEngine_Object_o *)this->fields.listViewItemObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(listViewItemObject, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.listViewItemObject;
  if ( !v6 )
    sub_1C13F80(0LL, v5);
  return (ListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                               v6,
                               (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
}