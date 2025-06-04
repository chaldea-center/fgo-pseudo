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
  __int64 v20; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *v23; // x25
  EventRewardAnotherPayListViewItem_o *v24; // x24
  const MethodInfo *v25; // x6
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  int32_t v30; // w23
  __int64 v31; // x8
  unsigned __int64 v32; // x28
  System_Collections_Generic_List_object__o *v33; // x24
  ItemEntity_o *v34; // x26
  EventRewardAnotherPayListViewItem_o *v35; // x25
  const MethodInfo *v36; // x6
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  ItemEntity_o *v41; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFC962 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&DataManager_TypeInfo, v13);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_1BC3008(&EventRewardAnotherPayListViewItem_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1BC3008(&StringLiteral_15061/*"UpdateScrollPosition"*/, v17);
    byte_4AFC962 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  this->fields.onClickAction = clickAction;
  sub_1BC2FAC(&this->fields.onClickAction);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_12:
    v30 = 0;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v23 = entity;
    v24 = (EventRewardAnotherPayListViewItem_o *)sub_1BC3254(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v24, 0, eventId, (ItemEntity_o *)v23, 0, 0, v25);
    if ( !itemList )
      goto LABEL_29;
    items = itemList->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_29;
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v24,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v24;
      Master_object = (Il2CppObject *)sub_1BC2FAC(v29 + 4);
    }
    v30 = 1;
    if ( !anotherItemIds )
      goto LABEL_29;
  }
  v31 = *(_QWORD *)&anotherItemIds->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v31 )
        sub_1BC326C(Master_object, v19, v20);
      if ( !v21 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v21,
                                        (Il2CppObject **)&v41,
                                        anotherItemIds->m_Items[v32 + 1],
                                        (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v33 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v34 = v41;
        v35 = (EventRewardAnotherPayListViewItem_o *)sub_1BC3254(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v35, v30, eventId, v34, 1, v30, v36);
        if ( !v33 )
          break;
        v37 = v33->fields._items;
        v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v33->fields._version;
        if ( !v37 )
          break;
        v39 = v33->fields._size;
        if ( (unsigned int)v39 >= v37->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)v35,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &v37->obj.klass + v39;
          v33->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v35;
          Master_object = (Il2CppObject *)sub_1BC2FAC(v40 + 4);
        }
        ++v30;
      }
      LODWORD(v31) = anotherItemIds->max_length;
      if ( (__int64)++v32 >= (int)v31 )
        goto LABEL_28;
    }
LABEL_29:
    sub_1BC3264(Master_object, v19);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15061/*"UpdateScrollPosition"*/,
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
  if ( (byte_4AFC963 & 1) == 0 )
  {
    this = (EventRewardAnotherPayListViewManager_o *)sub_1BC3008(
                                                       &Method_EventRewardAnotherPayListViewManager_OnClickListView__,
                                                       obj);
    byte_4AFC963 = 1;
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
      sub_1BC3264(this, obj);
    }
  }
  else
  {
    v8 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BC3020(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v8, v8[4]);
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
    sub_1BC3264(0LL, v3);
  UIScrollView__UpdatePosition(scrollView, 0LL);
}