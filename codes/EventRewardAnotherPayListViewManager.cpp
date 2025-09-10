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
  __int64 v14; // x1
  __int64 v15; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *v18; // x25
  EventRewardAnotherPayListViewItem_o *v19; // x24
  const MethodInfo *v20; // x6
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int32_t v25; // w23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x28
  System_Collections_Generic_List_object__o *v28; // x24
  ItemEntity_o *v29; // x26
  EventRewardAnotherPayListViewItem_o *v30; // x25
  const MethodInfo *v31; // x6
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  ItemEntity_o *v36; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C21B1E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&StringLiteral_15192/*"UpdateScrollPosition"*/);
    byte_4C21B1E = 1;
  }
  v36 = 0;
  entity = 0;
  this->fields.onClickAction = clickAction;
  sub_1C2D434(&this->fields.onClickAction);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_12:
    v25 = 0;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v18 = entity;
    v19 = (EventRewardAnotherPayListViewItem_o *)sub_1C2D6DC(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v19, 0, eventId, (ItemEntity_o *)v18, 0, 0, v20);
    if ( !itemList )
      goto LABEL_29;
    items = itemList->fields._items;
    v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_29;
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v19,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v24[4] = (Il2CppClass *)v19;
      Master_object = (Il2CppObject *)sub_1C2D434(v24 + 4);
    }
    v25 = 1;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  max_length = anotherItemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v14, v15);
      if ( !v16 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v16,
                                        (Il2CppObject **)&v36,
                                        anotherItemIds->m_Items[v27],
                                        (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v28 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v29 = v36;
        v30 = (EventRewardAnotherPayListViewItem_o *)sub_1C2D6DC(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v30, v25, eventId, v29, 1, v25, v31);
        if ( !v28 )
          break;
        v32 = v28->fields._items;
        v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v28->fields._version;
        if ( !v32 )
          break;
        v34 = v28->fields._size;
        if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v30,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &v32->obj.klass + v34;
          v28->fields._size = v34 + 1;
          v35[4] = (Il2CppClass *)v30;
          Master_object = (Il2CppObject *)sub_1C2D434(v35 + 4);
        }
        ++v25;
      }
      LODWORD(max_length) = anotherItemIds->max_length;
      if ( (__int64)++v27 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_29:
    sub_1C2D6EC(Master_object, v14);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15192/*"UpdateScrollPosition"*/, 0.0, 0);
}


void EventRewardAnotherPayListViewManager__OnClickListView(
        EventRewardAnotherPayListViewManager_o *this,
        EventRewardAnotherPayListViewItemObject_o *obj,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewManager_o *v4; // x19
  struct System_Action_bool__int__o *onClickAction; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x10
  __int64 items_low; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v4 = this;
  if ( (byte_4C21B1F & 1) == 0 )
  {
    this = (EventRewardAnotherPayListViewManager_o *)sub_1C2D490(&Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    byte_4C21B1F = 1;
  }
  if ( !obj )
    goto LABEL_16;
  this = (EventRewardAnotherPayListViewManager_o *)EventRewardAnotherPayListViewItemObject__GetItem(
                                                     obj,
                                                     (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_16;
  if ( BYTE1(this->fields.sortKindButton) )
  {
    onClickAction = v4->fields.onClickAction;
    if ( onClickAction )
    {
      if ( !LOBYTE(this->fields.sortKindButton) )
      {
        items_low = 0;
        goto LABEL_15;
      }
      dropList = this->fields.dropList;
      if ( dropList )
      {
        items_low = LODWORD(dropList->fields._items);
LABEL_15:
        ((void (__fastcall *)(intptr_t, bool, __int64, intptr_t))onClickAction->fields.invoke_impl)(
          onClickAction->fields.method_code,
          LOBYTE(this->fields.sortKindButton) != 0,
          items_low,
          onClickAction->fields.method);
        return;
      }
LABEL_16:
      sub_1C2D6EC(this, obj);
    }
  }
  else
  {
    v8 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
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
    sub_1C2D6EC(0, v3);
  UIScrollView__UpdatePosition(scrollView, 0);
}