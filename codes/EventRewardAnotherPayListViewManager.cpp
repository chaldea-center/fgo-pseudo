void EventRewardAnotherPayListViewManager___ctor(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventRewardAnotherPayListViewManager__CreateList(
        EventRewardAnotherPayListViewManager_o *this,
        int32_t eventId,
        int32_t shopItemId,
        System_Int32_array *anotherItemIds,
        bool isOnlyAnotherItem,
        System_Action_bool__int__o *clickAction,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  System_Collections_Generic_List_object__o *itemList; // x22
  Il2CppObject *v16; // x24
  EventRewardAnotherPayListViewItem_o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x6
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v26; // x29
  System_Collections_Generic_List_object__o *v27; // x23
  ItemEntity_o *v28; // x25
  EventRewardAnotherPayListViewItem_o *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x6
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  ItemEntity_o *v36; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CE8E47 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&StringLiteral_15253/*"UpdateScrollPosition"*/);
    byte_4CE8E47 = 1;
  }
  v36 = 0;
  entity = 0;
  this->fields.onClickAction = clickAction;
  sub_1C7BA8C(&this->fields.onClickAction, clickAction);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_12:
    v24 = 0;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v16 = entity;
    v17 = (EventRewardAnotherPayListViewItem_o *)sub_1C7BD34(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v17, 0, v18, (ItemEntity_o *)v16, 0, 0, v19);
    if ( !itemList )
      goto LABEL_29;
    items = itemList->fields._items;
    v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_29;
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v17,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v17;
      Master_object = (Il2CppObject *)sub_1C7BA8C(v23 + 4, v17);
    }
    v24 = 1;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  max_length = anotherItemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)max_length )
        sub_1C7BD48(Master_object);
      if ( !v14 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v14,
                                        (Il2CppObject **)&v36,
                                        anotherItemIds->m_Items[v26],
                                        (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v27 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v28 = v36;
        v29 = (EventRewardAnotherPayListViewItem_o *)sub_1C7BD34(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v29, v24, v30, v28, 1, v24, v31);
        if ( !v27 )
          break;
        v32 = v27->fields._items;
        v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v27->fields._version;
        if ( !v32 )
          break;
        v34 = v27->fields._size;
        if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v29,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &v32->obj.klass + v34;
          v27->fields._size = v34 + 1;
          v35[4] = (Il2CppClass *)v29;
          Master_object = (Il2CppObject *)sub_1C7BA8C(v35 + 4, v29);
        }
        ++v24;
      }
      LODWORD(max_length) = anotherItemIds->max_length;
      if ( (__int64)++v26 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_29:
    sub_1C7BD40(Master_object, v13);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15253/*"UpdateScrollPosition"*/, 0.0, 0);
}


void EventRewardAnotherPayListViewManager__OnClickListView(
        EventRewardAnotherPayListViewManager_o *this,
        EventRewardAnotherPayListViewItemObject_o *obj,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewManager_o *v4; // x19
  struct System_Action_bool__int__o *onClickAction; // x8
  struct UnityEngine_GameObject_o *dragParentObject; // x10
  __int64 m_CachedPtr_low; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v4 = this;
  if ( (byte_4CE8E48 & 1) == 0 )
  {
    this = (EventRewardAnotherPayListViewManager_o *)sub_1C7BAE8(&Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    byte_4CE8E48 = 1;
  }
  if ( !obj )
    goto LABEL_16;
  this = (EventRewardAnotherPayListViewManager_o *)EventRewardAnotherPayListViewItemObject__GetItem(
                                                     obj,
                                                     (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_16;
  if ( BYTE1(this->fields.dropList) )
  {
    onClickAction = v4->fields.onClickAction;
    if ( onClickAction )
    {
      if ( !LOBYTE(this->fields.dropList) )
      {
        m_CachedPtr_low = 0;
        goto LABEL_15;
      }
      dragParentObject = this->fields.dragParentObject;
      if ( dragParentObject )
      {
        m_CachedPtr_low = LODWORD(dragParentObject->fields.m_CachedPtr);
LABEL_15:
        ((void (__fastcall *)(intptr_t, bool, __int64, intptr_t))onClickAction->fields.invoke_impl)(
          onClickAction->fields.method_code,
          LOBYTE(this->fields.dropList) != 0,
          m_CachedPtr_low,
          onClickAction->fields.method);
        return;
      }
LABEL_16:
      sub_1C7BD40(this, obj);
    }
  }
  else
  {
    v8 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C7BB00(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
  }
}


void EventRewardAnotherPayListViewManager__UpdateScrollPosition(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIScrollView_o *scrollView; // x0

  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C7BD40(0, v3);
  UIScrollView__UpdatePosition(scrollView, 0);
}