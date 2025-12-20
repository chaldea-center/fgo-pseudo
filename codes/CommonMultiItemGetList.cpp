void CommonMultiItemGetList___cctor(const MethodInfo *method)
{
  if ( (byte_4D2B1D9 & 1) == 0 )
  {
    sub_1C94098(&CommonMultiItemGetList_TypeInfo);
    byte_4D2B1D9 = 1;
  }
  CommonMultiItemGetList_TypeInfo->static_fields->baseCol = 5;
}


void CommonMultiItemGetList___ctor(CommonMultiItemGetList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B1D8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2B1D8 = 1;
  }
  *(_QWORD *)&this->fields.width = 0x4320000043160000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.itemObjectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CommonMultiItemGetList__setHide(CommonMultiItemGetList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D2B1D6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B1D6 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C942F0(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


void CommonMultiItemGetList__setListData(
        CommonMultiItemGetList_o *this,
        GiftEntity_array *itemlist,
        int32_t columnCount,
        GiftListViewItemIcon_ClickDelegate_o *callBack,
        const MethodInfo *method)
{
  int **Object; // x0
  float v9; // s8
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w2
  int v13; // w9
  il2cpp_array_size_t max_length; // x8
  float width; // s0
  float height; // s1
  float v17; // s9
  float v18; // s10
  unsigned __int64 v19; // x28
  float v20; // s11
  float v21; // s12
  GiftEntity_o *v22; // x25
  UnityEngine_GameObject_o *v23; // x24
  UnityEngine_Transform_o *v24; // x26
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int **v32; // x26
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  int *v43; // x8
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-B0h] BYREF
  GiftListViewItemIcon_ClickDelegate_o *v46; // [xsp+48h] [xbp-88h]
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v46 = callBack;
  if ( (byte_4D2B1D5 & 1) == 0 )
  {
    sub_1C94098(&CommonMultiItemGetList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_GiftListViewItemIcon___);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B1D5 = 1;
  }
  Object = (int **)CommonMultiItemGetList_TypeInfo;
  memset(&v45, 0, sizeof(v45));
  if ( !CommonMultiItemGetList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonMultiItemGetList_TypeInfo);
    Object = (int **)CommonMultiItemGetList_TypeInfo;
  }
  if ( !this->fields.itemObjectList )
    goto LABEL_35;
  v9 = (float)*Object[23] / (float)columnCount;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)this->fields.itemObjectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v45 = v44;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v45.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_35;
  size = itemObjectList->fields._size;
  v13 = itemObjectList->fields._version + 1;
  itemObjectList->fields._size = 0;
  itemObjectList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)itemObjectList->fields._items, 0, size, 0);
  if ( itemlist )
  {
    max_length = itemlist->max_length;
    if ( (int)max_length >= 1 )
    {
      width = this->fields.width;
      height = this->fields.height;
      v17 = v9 * width;
      v18 = v9 * height;
      v19 = 0;
      v20 = (float)(width - (float)(v9 * width)) * 0.5;
      v21 = (float)(height - (float)(v9 * height)) * 0.5;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)max_length )
          sub_1C942F8(Object);
        v22 = itemlist->m_Items[v19];
        Object = (int **)BaseMonoBehaviour__createObject(
                           (BaseMonoBehaviour_o *)this,
                           this->fields.prefabResultItem,
                           this->fields.listRoot,
                           0,
                           0);
        if ( !Object )
          break;
        v23 = (UnityEngine_GameObject_o *)Object;
        Object = (int **)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0);
        if ( !Object )
          break;
        v47.fields.y = v21 - (float)(v18 * (float)((int)v19 / columnCount));
        v47.fields.x = (float)(v17 * (float)((int)v19 % columnCount)) - v20;
        v47.fields.z = -1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v47, 0);
        Object = (int **)UnityEngine_GameObject__get_transform(v23, 0);
        v24 = (UnityEngine_Transform_o *)Object;
        if ( !byte_4D25F1E )
        {
          Object = (int **)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F1E = 1;
        }
        if ( !v24 )
          break;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v48.fields.z = v9 * static_fields->oneVector.fields.z;
        v48.fields.y = v9 * static_fields->oneVector.fields.y;
        v48.fields.x = v9 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v24, v48, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0) )
        {
          Object = (int **)UnityEngine_GameObject__GetComponent_object_(
                             v23,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_GiftListViewItemIcon___);
          if ( !Object )
            break;
          v32 = Object;
          GiftListViewItemIcon__Set((GiftListViewItemIcon_o *)Object, v22, 0);
          v33 = (int)v46;
          v32[6] = (int *)v46;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 6), v33, v34, v35, v36, v37, v38, v39);
          GiftListViewItemIcon__Show((GiftListViewItemIcon_o *)v32, 0);
        }
        Object = (int **)this->fields.itemObjectList;
        if ( !Object )
          break;
        v40 = Object[2];
        v41 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)Object + 7);
        if ( !v40 )
          break;
        v42 = *((int *)Object + 6);
        if ( (unsigned int)v42 >= v40[6] )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Object,
            (Il2CppObject *)v23,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &v40[2 * v42];
          *((_DWORD *)Object + 6) = v42 + 1;
          *((_QWORD *)v43 + 4) = v23;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v43 + 8), (int32_t)v23, v26, v27, v28, v29, v30, v31);
        }
        LODWORD(max_length) = itemlist->max_length;
        if ( (__int64)++v19 >= (int)max_length )
          return;
      }
LABEL_35:
      sub_1C942F0(Object, itemlist);
    }
  }
}


void CommonMultiItemGetList__setShow(CommonMultiItemGetList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D2B1D7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B1D7 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C942F0(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
}