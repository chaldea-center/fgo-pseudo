void CommonMultiItemGetList___cctor(const MethodInfo *method)
{
  if ( (byte_596F135 & 1) == 0 )
  {
    sub_2213A60(&CommonMultiItemGetList_TypeInfo);
    byte_596F135 = 1;
  }
  CommonMultiItemGetList_TypeInfo->static_fields->baseCol = 5;
}


void CommonMultiItemGetList___ctor(CommonMultiItemGetList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596F134 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596F134 = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_QWORD *)&this->fields.width = 0x4320000043160000LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemObjectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CommonMultiItemGetList__setHide(CommonMultiItemGetList_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listRoot; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596F132 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F132 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommonMultiItemGetList__setListData(
        CommonMultiItemGetList_o *this,
        GiftEntity_array *itemlist,
        int32_t columnCount,
        GiftListViewItemIcon_ClickDelegate_o *callBack,
        const MethodInfo *method)
{
  __int64 Object; // x0
  float v9; // s8
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w2
  int v15; // w9
  il2cpp_array_size_t max_length; // x8
  float width; // s0
  float height; // s1
  unsigned __int64 v19; // x28
  float v20; // s9
  float v21; // s10
  float v22; // s11
  float v23; // s12
  GiftEntity_o *v24; // x25
  UnityEngine_GameObject_o *v25; // x24
  UnityEngine_Transform_o *v26; // x26
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x26
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-B0h] BYREF
  GiftListViewItemIcon_ClickDelegate_o *v50; // [xsp+48h] [xbp-88h]
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  v50 = callBack;
  if ( (byte_596F131 & 1) == 0 )
  {
    sub_2213A60(&CommonMultiItemGetList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GiftListViewItemIcon___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F131 = 1;
  }
  Object = (__int64)CommonMultiItemGetList_TypeInfo;
  memset(&v49, 0, sizeof(v49));
  if ( !*(&CommonMultiItemGetList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommonMultiItemGetList_TypeInfo, itemlist, *(_QWORD *)&columnCount);
    Object = (__int64)CommonMultiItemGetList_TypeInfo;
  }
  if ( !this->fields.itemObjectList )
    goto LABEL_35;
  v9 = (float)**(int **)(Object + 184) / (float)columnCount;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)this->fields.itemObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v49 = v48;
  v48.fields._list = 0;
  *(_QWORD *)&v48.fields._index = &v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v49.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_35;
  size = itemObjectList->fields._size;
  v15 = itemObjectList->fields._version + 1;
  itemObjectList->fields._size = 0;
  itemObjectList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)itemObjectList->fields._items, 0, size, 0);
  if ( itemlist )
  {
    max_length = itemlist->max_length;
    if ( (int)max_length >= 1 )
    {
      width = this->fields.width;
      height = this->fields.height;
      v19 = 0;
      v20 = v9 * width;
      v21 = v9 * height;
      v22 = (float)(width - (float)(v9 * width)) * 0.5;
      v23 = (float)(height - (float)(v9 * height)) * 0.5;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)max_length )
          sub_2213CE4(Object);
        v24 = itemlist->m_Items[v19];
        Object = (__int64)BaseMonoBehaviour__createObject(
                            (BaseMonoBehaviour_o *)this,
                            this->fields.prefabResultItem,
                            this->fields.listRoot,
                            0,
                            0);
        if ( !Object )
          break;
        v25 = (UnityEngine_GameObject_o *)Object;
        Object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0);
        if ( !Object )
          break;
        v51.fields.y = v23 - (float)(v21 * (float)((int)v19 / columnCount));
        v51.fields.x = (float)(v20 * (float)((int)v19 % columnCount)) - v22;
        v51.fields.z = -1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v51, 0);
        Object = (__int64)UnityEngine_GameObject__get_transform(v25, 0);
        v26 = (UnityEngine_Transform_o *)Object;
        if ( !byte_5969AE5 )
        {
          Object = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v26 )
          break;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v52.fields.z = v9 * static_fields->oneVector.fields.z;
        v52.fields.y = v9 * static_fields->oneVector.fields.y;
        v52.fields.x = v9 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v26, v52, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0) )
        {
          Object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v25,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GiftListViewItemIcon___);
          if ( !Object )
            break;
          v36 = Object;
          GiftListViewItemIcon__Set((GiftListViewItemIcon_o *)Object, v24, 0);
          v37 = (int)v50;
          *(_QWORD *)(v36 + 48) = v50;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 48), v37, v38, v39, v40, v41, v42, v43);
          GiftListViewItemIcon__Show((GiftListViewItemIcon_o *)v36, 0);
        }
        Object = (__int64)this->fields.itemObjectList;
        if ( !Object )
          break;
        v44 = *(_QWORD *)(Object + 16);
        v45 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Object + 28);
        if ( !v44 )
          break;
        v46 = *(int *)(Object + 24);
        if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Object,
            (Il2CppObject *)v25,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = v44 + 8 * v46;
          *(_DWORD *)(Object + 24) = v46 + 1;
          *(_QWORD *)(v47 + 32) = v25;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v47 + 32), (int32_t)v25, v30, v31, v32, v33, v34, v35);
        }
        LODWORD(max_length) = itemlist->max_length;
        if ( (__int64)++v19 >= (int)max_length )
          return;
      }
LABEL_35:
      sub_2213CDC(Object, itemlist);
    }
  }
}


void CommonMultiItemGetList__setShow(CommonMultiItemGetList_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listRoot; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596F133 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F133 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
}