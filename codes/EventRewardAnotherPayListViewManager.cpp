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
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *v16; // x25
  EventRewardAnotherPayListViewItem_o *v17; // x24
  const MethodInfo *v18; // x6
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int32_t v23; // w23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x28
  System_Collections_Generic_List_object__o *v26; // x24
  ItemEntity_o *v27; // x26
  EventRewardAnotherPayListViewItem_o *v28; // x25
  const MethodInfo *v29; // x6
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  ItemEntity_o *v34; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3D7D7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&StringLiteral_15195/*"UpdateScrollPosition"*/);
    byte_4C3D7D7 = 1;
  }
  v34 = 0;
  entity = 0;
  this->fields.onClickAction = clickAction;
  sub_1C36FFC(&this->fields.onClickAction, clickAction);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_12:
    v23 = 0;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v16 = entity;
    v17 = (EventRewardAnotherPayListViewItem_o *)sub_1C372A4(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v17, 0, eventId, (ItemEntity_o *)v16, 0, 0, v18);
    if ( !itemList )
      goto LABEL_29;
    items = itemList->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_29;
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v17,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v17;
      Master_object = (Il2CppObject *)sub_1C36FFC(v22 + 4, v17);
    }
    v23 = 1;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  max_length = anotherItemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)max_length )
        sub_1C372BC(Master_object);
      if ( !v14 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v14,
                                        (Il2CppObject **)&v34,
                                        anotherItemIds->m_Items[v25],
                                        (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v26 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v27 = v34;
        v28 = (EventRewardAnotherPayListViewItem_o *)sub_1C372A4(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v28, v23, eventId, v27, 1, v23, v29);
        if ( !v26 )
          break;
        v30 = v26->fields._items;
        v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v26->fields._version;
        if ( !v30 )
          break;
        v32 = v26->fields._size;
        if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v28,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &v30->obj.klass + v32;
          v26->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)v28;
          Master_object = (Il2CppObject *)sub_1C36FFC(v33 + 4, v28);
        }
        ++v23;
      }
      LODWORD(max_length) = anotherItemIds->max_length;
      if ( (__int64)++v25 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_29:
    sub_1C372B4(Master_object);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15195/*"UpdateScrollPosition"*/, 0.0, 0);
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
  if ( (byte_4C3D7D8 & 1) == 0 )
  {
    this = (EventRewardAnotherPayListViewManager_o *)sub_1C37058(&Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    byte_4C3D7D8 = 1;
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
      sub_1C372B4(this);
    }
  }
  else
  {
    v8 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C37070(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
  }
}


void EventRewardAnotherPayListViewManager__UpdateScrollPosition(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C372B4(0);
  UIScrollView__UpdatePosition(scrollView, 0);
}