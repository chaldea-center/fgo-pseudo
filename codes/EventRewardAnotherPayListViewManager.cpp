void __fastcall EventRewardAnotherPayListViewManager___ctor(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayListViewManager__CreateList(
        EventRewardAnotherPayListViewManager_o *this,
        int32_t eventId,
        int32_t shopItemId,
        System_Int32_array *anotherItemIds,
        bool isOnlyAnotherItem,
        System_Action_bool__int__o *clickAction,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *v22; // x25
  EventRewardAnotherPayListViewItem_o *v23; // x24
  const MethodInfo *v24; // x6
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  int32_t v29; // w23
  __int64 v30; // x8
  unsigned __int64 v31; // x28
  System_Collections_Generic_List_object__o *v32; // x24
  ItemEntity_o *v33; // x26
  EventRewardAnotherPayListViewItem_o *v34; // x25
  const MethodInfo *v35; // x6
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  ItemEntity_o *v40; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49B5B60 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&DataManager_TypeInfo, v13);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_1B4CF90(&EventRewardAnotherPayListViewItem_TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1B4CF90(&StringLiteral_14893/*"UpdateScrollPosition"*/, v17);
    byte_49B5B60 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  this->fields.onClickAction = clickAction;
  sub_1B4CF34(&this->fields.onClickAction);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_12:
    v29 = 0;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v22 = entity;
    v23 = (EventRewardAnotherPayListViewItem_o *)sub_1B4D1DC(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v23, 0, eventId, (ItemEntity_o *)v22, 0, 0, v24);
    if ( !itemList )
      goto LABEL_29;
    items = itemList->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_29;
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v23,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v28[4] = (Il2CppClass *)v23;
      Master_object = (Il2CppObject *)sub_1B4CF34(v28 + 4);
    }
    v29 = 1;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  v30 = *(_QWORD *)&anotherItemIds->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
        sub_1B4D1F4(Master_object, v19);
      if ( !v20 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v20,
                                        (Il2CppObject **)&v40,
                                        anotherItemIds->m_Items[v31 + 1],
                                        (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v32 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v33 = v40;
        v34 = (EventRewardAnotherPayListViewItem_o *)sub_1B4D1DC(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v34, v29, eventId, v33, 1, v29, v35);
        if ( !v32 )
          break;
        v36 = v32->fields._items;
        v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v32->fields._version;
        if ( !v36 )
          break;
        v38 = v32->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)v34,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &v36->obj.klass + v38;
          v32->fields._size = v38 + 1;
          v39[4] = (Il2CppClass *)v34;
          Master_object = (Il2CppObject *)sub_1B4CF34(v39 + 4);
        }
        ++v29;
      }
      LODWORD(v30) = anotherItemIds->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_28;
    }
LABEL_29:
    sub_1B4D1EC(Master_object, v19);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_14893/*"UpdateScrollPosition"*/,
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
  if ( (byte_49B5B61 & 1) == 0 )
  {
    this = (EventRewardAnotherPayListViewManager_o *)sub_1B4CF90(
                                                       &Method_EventRewardAnotherPayListViewManager_OnClickListView__,
                                                       obj);
    byte_49B5B61 = 1;
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
      sub_1B4D1EC(this, obj);
    }
  }
  else
  {
    v8 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B4CFA8(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v8, v8[4]);
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
    sub_1B4D1EC(0LL, v3);
  UIScrollView__UpdatePosition(scrollView, 0LL);
}