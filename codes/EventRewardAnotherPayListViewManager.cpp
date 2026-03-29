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
  il2cpp_array_size_t max_length; // x8
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

  if ( (byte_4D2B10D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&StringLiteral_15295/*"UpdateScrollPosition"*/);
    byte_4D2B10D = 1;
  }
  v35 = 0;
  entity = 0;
  this->fields.onSelectItemAction = clickAction;
  sub_1C93A78(&this->fields.onSelectItemAction, clickAction);
  this->fields._IsSkillList_k__BackingField = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( isOnlyAnotherItem )
    goto LABEL_12;
  if ( !Master_object )
    goto LABEL_29;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    shopItemId,
                                    (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
    v18 = (EventRewardAnotherPayListViewItem_o *)sub_1C93D20(EventRewardAnotherPayListViewItem_TypeInfo);
    EventRewardAnotherPayListViewItem___ctor(v18, 0, eventId, (ItemEntity_o *)v17, 0, 0, v19);
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
        (Il2CppObject *)v18,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v18;
      Master_object = (Il2CppObject *)sub_1C93A78(v23 + 4, v18);
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
        sub_1C93D34(Master_object);
      if ( !v15 )
        break;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v15,
                                        (Il2CppObject **)&v35,
                                        anotherItemIds->m_Items[v26],
                                        (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v27 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v28 = v35;
        v29 = (EventRewardAnotherPayListViewItem_o *)sub_1C93D20(EventRewardAnotherPayListViewItem_TypeInfo);
        EventRewardAnotherPayListViewItem___ctor(v29, v24, eventId, v28, 1, v24, v30);
        if ( !v27 )
          break;
        v31 = v27->fields._items;
        v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v27->fields._version;
        if ( !v31 )
          break;
        v33 = v27->fields._size;
        if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v29,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &v31->obj.klass + v33;
          v27->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v29;
          Master_object = (Il2CppObject *)sub_1C93A78(v34 + 4, v29);
        }
        ++v24;
      }
      LODWORD(max_length) = anotherItemIds->max_length;
      if ( (__int64)++v26 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_29:
    sub_1C93D2C(Master_object, v14);
  }
LABEL_28:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15295/*"UpdateScrollPosition"*/, 0.0, 0);
}


void EventRewardAnotherPayListViewManager__CreateList_32923000(
        EventRewardAnotherPayListViewManager_o *this,
        int32_t eventId,
        int32_t anotherItemId,
        System_Action_int__o *clickAction,
        const MethodInfo *method)
{
  DataManager_c **v5; // x24
  System_Int32_array *Master_object; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v11; // x21
  int32_t v12; // w22
  unsigned __int64 v13; // x28
  int32_t v14; // w23
  Il2CppObject *v15; // x26
  Il2CppObject *v16; // x25
  DataManager_c **v17; // x20
  System_Collections_Generic_List_object__o *itemList; // x23
  EventRewardAnotherPayListViewItem_o *v19; // x24
  const MethodInfo *v20; // x6
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  Il2CppObject *v27; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  v5 = &DataManager_TypeInfo;
  if ( (byte_4D2B10E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&EventRewardAnotherPayListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&StringLiteral_15295/*"UpdateScrollPosition"*/);
    byte_4D2B10E = 1;
  }
  v27 = 0;
  entity = 0;
  this->fields.onSelectSkillAction = clickAction;
  sub_1C93A78(&this->fields.onSelectSkillAction, clickAction);
  this->fields._IsSkillList_k__BackingField = 1;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         anotherItemId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Master_object = (System_Int32_array *)entity;
    if ( !entity )
      goto LABEL_24;
    Master_object = ItemEntity__GetSkillList((ItemEntity_o *)entity, 0);
    if ( !Master_object )
      goto LABEL_24;
    max_length = Master_object->max_length;
    v11 = Master_object;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1C93D34(Master_object);
        v14 = v11->m_Items[v13];
        if ( !(*v5)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v5);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Master_object )
          break;
        Master_object = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &v27,
                                                v14,
                                                (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v15 = v27;
          v16 = entity;
          v17 = v5;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v19 = (EventRewardAnotherPayListViewItem_o *)sub_1C93D20(EventRewardAnotherPayListViewItem_TypeInfo);
          EventRewardAnotherPayListViewItem___ctor_32925980(
            v19,
            v12,
            eventId,
            (ItemEntity_o *)v16,
            (SkillEntity_o *)v15,
            v12,
            v20);
          if ( !itemList )
            break;
          items = itemList->fields._items;
          v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            break;
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v19,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            Master_object = (System_Int32_array *)sub_1C93A78(v24 + 4, v19);
          }
          ++v12;
          v5 = v17;
        }
        LODWORD(max_length) = v11->max_length;
        if ( (__int64)++v13 >= (int)max_length )
          goto LABEL_23;
      }
LABEL_24:
      sub_1C93D2C(Master_object, v9);
    }
  }
LABEL_23:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15295/*"UpdateScrollPosition"*/, 0.0, 0);
}


void EventRewardAnotherPayListViewManager__OnClickListView(
        EventRewardAnotherPayListViewManager_o *this,
        EventRewardAnotherPayListViewItemObject_o *targetObj,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewManager_o *v4; // x19
  EventRewardAnotherPayListViewManager_o *v5; // x20
  __int64 v6; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct UICommonButton_o *sortKindButton; // x8
  int dropList_low; // w8
  struct UnityEngine_GameObject_o *dragParentObject; // x9
  int32_t m_CachedPtr; // w2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4D2B10F & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool__int___);
    sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (EventRewardAnotherPayListViewManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B10F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !targetObj )
    goto LABEL_32;
  this = (EventRewardAnotherPayListViewManager_o *)EventRewardAnotherPayListViewItemObject__GetItem(
                                                     targetObj,
                                                     (const MethodInfo *)targetObj);
  v5 = this;
  if ( v4->fields._IsSkillList_k__BackingField )
  {
    this = (EventRewardAnotherPayListViewManager_o *)v4->fields.objectList;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v18 = v17;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v18.fields._current )
          sub_1C93D2C(0, v6);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v18.fields._current,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemObject___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v8 = UnityEngine_Object__op_Equality(
                 (UnityEngine_Object_o *)Component_object,
                 (UnityEngine_Object_o *)targetObj,
                 0);
          if ( !Component_object )
            sub_1C93D2C(v8, v9);
          EventRewardAnotherPayListViewItemObject__SetSelectedFrame(
            (EventRewardAnotherPayListViewItemObject_o *)Component_object,
            v8,
            v10);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v5 )
      {
        sortKindButton = v5->fields.sortKindButton;
        if ( sortKindButton )
        {
          ActionExtensions__Call_int_(
            (System_Action_T__o *)v4->fields.onSelectSkillAction,
            sortKindButton->fields.m_CachedPtr,
            (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
          return;
        }
      }
    }
LABEL_32:
    sub_1C93D2C(this, targetObj);
  }
  if ( !this )
    goto LABEL_32;
  if ( BYTE1(this->fields.dropList) )
  {
    dropList_low = LOBYTE(this->fields.dropList);
    this = (EventRewardAnotherPayListViewManager_o *)v4->fields.onSelectItemAction;
    if ( LOBYTE(v5->fields.dropList) )
    {
      dragParentObject = v5->fields.dragParentObject;
      if ( !dragParentObject )
        goto LABEL_32;
      m_CachedPtr = dragParentObject->fields.m_CachedPtr;
    }
    else
    {
      m_CachedPtr = 0;
    }
    ActionExtensions__Call_bool__int_(
      (System_Action_T1__T2__o *)this,
      dropList_low != 0,
      m_CachedPtr,
      (const MethodInfo_30EBE90 *)Method_ActionExtensions_Call_bool__int___);
  }
  else
  {
    v15 = Method_EventRewardAnotherPayListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C93AEC(Method_EventRewardAnotherPayListViewManager_OnClickListView__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
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
    sub_1C93D2C(0, v3);
  UIScrollView__UpdatePosition(scrollView, 0);
}


bool EventRewardAnotherPayListViewManager__get_IsSkillList(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSkillList_k__BackingField;
}


int32_t EventRewardAnotherPayListViewManager__get_SelectedSkillId(
        EventRewardAnotherPayListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedSkillId_k__BackingField;
}


void EventRewardAnotherPayListViewManager__set_IsSkillList(
        EventRewardAnotherPayListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSkillList_k__BackingField = value;
}


void EventRewardAnotherPayListViewManager__set_SelectedSkillId(
        EventRewardAnotherPayListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedSkillId_k__BackingField = value;
}