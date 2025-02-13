void __fastcall EventRewardAnotherPayListViewManager___ctor(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayListViewManager__CreateList(
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
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *v17; // x25
  EventRewardAnotherPayListViewItem_o *v18; // x24
  const MethodInfo *v19; // x6
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w23
  __int64 v25; // x8
  unsigned __int64 v26; // x28
  System_Collections_Generic_List_object__o *v27; // x24
  ItemEntity_o *v28; // x26
  EventRewardAnotherPayListViewItem_o *v29; // x25
  const MethodInfo *v30; // x6
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  ItemEntity_o *v35; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD7397 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&StringLiteral_15455/*"UpdateScrollPosition"*/);
    byte_4BD7397 = 1;
  }
  v35 = 0LL;
  entity = 0LL;
  this->fields.onClickAction = clickAction;
  sub_1C21DDC(&this->fields.onClickAction, clickAction);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
    v17 = entity;
    v18 = (EventRewardAnotherPayListViewItem_o *)sub_1C22084(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v18, 0, eventId, (ItemEntity_o *)v17, 0, 0, v19);
    if ( !itemList )
      goto LABEL_29;
    items = itemList->fields._items;
    v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_29;
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v18,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v18;
      Master_object = (Il2CppObject *)sub_1C21DDC(v23 + 4, v18);
    }
    v24 = 1;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  v25 = *(_QWORD *)&anotherItemIds->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        sub_1C2209C(Master_object, v14);
      if ( !v15 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v15,
                                        (Il2CppObject **)&v35,
                                        anotherItemIds->m_Items[v26 + 1],
                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v27 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v28 = v35;
        v29 = (EventRewardAnotherPayListViewItem_o *)sub_1C22084(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v29, v24, eventId, v28, 1, v24, v30);
        if ( !v27 )
          break;
        v31 = v27->fields._items;
        v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v27->fields._version;
        if ( !v31 )
          break;
        v33 = v27->fields._size;
        if ( (unsigned int)v33 >= v31->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v29,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &v31->obj.klass + v33;
          v27->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v29;
          Master_object = (Il2CppObject *)sub_1C21DDC(v34 + 4, v29);
        }
        ++v24;
      }
      LODWORD(v25) = anotherItemIds->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_28;
    }
LABEL_29:
    sub_1C22094(Master_object, v14);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15455/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
}


void __fastcall EventRewardAnotherPayListViewManager__OnClickListView(
        EventRewardAnotherPayListViewManager_o *this,
        EventRewardAnotherPayListViewItemObject_o *obj,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewManager_o *v4; // x19
  struct System_Action_bool__int__o *onClickAction; // x8
  struct UnityEngine_GameObject_o *dragParentObject; // x10
  __int64 m_CachedPtr; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v4 = this;
  if ( (byte_4BD7398 & 1) == 0 )
  {
    this = (EventRewardAnotherPayListViewManager_o *)sub_1C21E38(&Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    byte_4BD7398 = 1;
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
        m_CachedPtr = 0LL;
        goto LABEL_15;
      }
      dragParentObject = this->fields.dragParentObject;
      if ( dragParentObject )
      {
        m_CachedPtr = (unsigned int)dragParentObject->fields.m_CachedPtr;
LABEL_15:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, __int64, _QWORD))onClickAction->fields.m_target)(
          onClickAction->fields.original_method_info,
          LOBYTE(this->fields.dropList) != 0,
          m_CachedPtr,
          *(_QWORD *)&onClickAction->fields.extra_arg);
        return;
      }
LABEL_16:
      sub_1C22094(this, obj);
    }
  }
  else
  {
    v8 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C21E50(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
  }
}


void __fastcall EventRewardAnotherPayListViewManager__UpdateScrollPosition(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIScrollView_o *scrollView; // x0

  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C22094(0LL, v3);
  UIScrollView__UpdatePosition(scrollView, 0LL);
}