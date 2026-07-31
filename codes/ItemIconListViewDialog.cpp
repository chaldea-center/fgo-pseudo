void ItemIconListViewDialog___ctor(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1

  if ( (byte_593B864 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_593B864 = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_OWORD *)&this->fields.TitlePosDefault.fields.x = xmmword_E94690;
  *(_QWORD *)&this->fields.TitlePosNoneDetail.fields.y = 1128792064;
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F4CCCCDLL;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ItemIconListViewDialog__ClearItemList(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  ItemIconListViewDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  struct ItemIconListViewDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__15_0; // x21
  Il2CppObject *v7; // x22
  struct ItemIconListViewDialog___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Collections_Generic_List_GameObject__o *v15; // x8
  int32_t size; // w2
  int v17; // w9

  if ( (byte_593B85E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_ItemIconListViewDialog___c__ClearItemList_b__15_0__);
    sub_21FFC50(&ItemIconListViewDialog___c_TypeInfo);
    byte_593B85E = 1;
  }
  v3 = ItemIconListViewDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&ItemIconListViewDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemIconListViewDialog___c_TypeInfo, method);
    v3 = ItemIconListViewDialog___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__15_0 = (System_Action_object__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = ItemIconListViewDialog___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_0, v7, Method_ItemIconListViewDialog___c__ClearItemList_b__15_0__, 0);
    v8 = ItemIconListViewDialog___c_TypeInfo->static_fields;
    v8->__9__15_0 = (struct System_Action_GameObject__o *)_9__15_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__15_0, (int32_t)_9__15_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__15_0,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v15 = this->fields.objectList) == 0) )
  {
    sub_21FFECC(v3, method);
  }
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0);
}


void ItemIconListViewDialog__Close(
        ItemIconListViewDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_593B861 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ItemIconListViewDialog_OnCloseEnd__);
    byte_593B861 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ItemIconListViewDialog_OnCloseEnd__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void ItemIconListViewDialog__CreateItemList(
        ItemIconListViewDialog_o *this,
        System_Collections_Generic_Dictionary_int__long__o *itemList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  Il2CppObject *v6; // x22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *value; // x25
  __int64 v10; // x1
  Il2CppObject *itemIconPrefab; // x24
  UnityEngine_Transform_o *listRoot; // x26
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x24
  __int64 transform; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x26
  UnityEngine_Transform_o *v19; // x0
  __int64 v20; // x1
  Il2CppObject *Component_object; // x0
  __int64 v22; // x1
  ItemIconComponent_o *v23; // x26
  __int64 v24; // x0
  __int64 v25; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v27; // x1
  int64_t qp; // x3
  NetworkManager_c *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_object__o *objectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-C8h] BYREF
  UserItemEntity_o *v50; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+40h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593B85F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B85F = 1;
  }
  v50 = 0;
  entity = 0;
  memset(&v52, 0, sizeof(v52));
  if ( itemList )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, itemList);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
    v6 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
    System_Collections_Generic_Dictionary_int__long___GetEnumerator(
      &v49,
      itemList,
      (const MethodInfo_3F65DEC *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    v52 = v49;
    v49.fields._dictionary = 0;
    *(_QWORD *)&v49.fields._version = &v52;
    while ( 1 )
    {
      v7 = System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
             &v52,
             (const MethodInfo_4124104 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
      if ( !v7 )
        break;
      if ( !Master_object )
        sub_21FFECC(v7, v8);
      value = v52.fields._current.fields.value;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             (int32_t)v52.fields._current.fields.key,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        v13 = UnityEngine_Object__Instantiate_object__59506996(
                itemIconPrefab,
                listRoot,
                (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
        v15 = (UnityEngine_GameObject_o *)v13;
        if ( !v13 )
          sub_21FFECC(0, v14);
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
        v18 = (UnityEngine_Transform_o *)transform;
        if ( !byte_5931940 )
        {
          transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !v18 )
          sub_21FFECC(transform, v17);
        UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v19 = UnityEngine_GameObject__get_transform(v15, 0);
        if ( !v19 )
          sub_21FFECC(0, v20);
        v53.fields.x = this->fields.ItemIconScale;
        v53.fields.y = v53.fields.x;
        v53.fields.z = v53.fields.x;
        UnityEngine_Transform__set_localScale(v19, v53, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v15,
                             (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !entity )
          sub_21FFECC(Component_object, v22);
        v23 = (ItemIconComponent_o *)Component_object;
        if ( !Component_object )
          sub_21FFECC(0, v22);
        ItemIconComponent__SetGift_47936840(
          (ItemIconComponent_o *)Component_object,
          2,
          (int32_t)entity[1].klass,
          -1,
          0,
          0);
        ItemIconComponent__SetCondensedScale(v23, this->fields.CounterLabelMaxWidth, 0);
        if ( !entity )
          sub_21FFECC(v24, v25);
        if ( LODWORD(entity[3].klass) == 1 )
        {
          SelfUserGame = UserGameMaster__getSelfUserGame(0);
          if ( !SelfUserGame )
            sub_21FFECC(0, v27);
          qp = SelfUserGame->fields.qp;
        }
        else
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
          if ( !byte_5931D52 )
          {
            sub_21FFC50(&NetworkManager_TypeInfo);
            byte_5931D52 = 1;
          }
          v29 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
            v29 = NetworkManager_TypeInfo;
          }
          if ( !entity )
            sub_21FFECC(v29, v25);
          if ( !v6 )
            sub_21FFECC(v29, v25);
          v30 = UserItemMaster__TryGetEntity(
                  (UserItemMaster_o *)v6,
                  &v50,
                  v29->static_fields->userIdNumber,
                  (int32_t)entity[1].klass,
                  0);
          if ( v30 )
          {
            if ( !v50 )
              sub_21FFECC(v30, v31);
            qp = v50->fields.num;
          }
          else
          {
            qp = 0;
          }
        }
        ItemIconComponent__SetTwoTypeCounterLabel(
          v23,
          this->fields.counterTitle1,
          this->fields.counterTitle2,
          qp,
          (int64_t)value,
          0);
        UnityEngine_GameObject__SetActive(v15, 1, 0);
        v33 = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !v33 )
          sub_21FFECC(0, v32);
        gameObject = UnityEngine_Component__get_gameObject(v33, 0);
        v35 = GameObjectExtensions__SafeGetComponent_object_(
                gameObject,
                (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !v35 )
          sub_21FFECC(0, v36);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v35->klass->vtable[8].methodPtr)(
          v35,
          v35->klass->vtable[8].method);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        if ( !objectList
          || (items = objectList->fields._items,
              v46 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++objectList->fields._version,
              !items) )
        {
          sub_21FFECC(objectList, v37);
        }
        size = objectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v15, v38, v39, v40, v41, v42, v43);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
      &v52,
      (const MethodInfo_412421C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  }
}


void ItemIconListViewDialog__Init(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_593B85D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B85D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        ItemIconListViewDialog__ClearItemList(this, v4),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ItemIconListViewDialog__OnClickClose(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v4; // w20
  Il2CppObject *Item; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_593B862 & 1) == 0 )
  {
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
    sub_21FFC50(&Method_ItemIconListViewDialog_OnClickClose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593B862 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    if ( !objectList )
      goto LABEL_9;
    v4 = 0;
    while ( v4 < objectList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v4,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      objectList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)Item,
                                                                  (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
      if ( objectList )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)objectList, 0, 0);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        ++v4;
        if ( objectList )
          continue;
      }
      goto LABEL_9;
    }
    v6 = Method_ItemIconListViewDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ItemIconListViewDialog_OnClickClose__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_ItemIconListViewDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    objectList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !objectList )
LABEL_9:
      sub_21FFECC(objectList, method);
    CommonUI__CloseItemIconListViewDialog((CommonUI_o *)objectList, 0);
  }
}


void ItemIconListViewDialog__OnCloseEnd(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_21FFBF4(p_closeCallback, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0);
}


void ItemIconListViewDialog__OnEnable(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593B863 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3194/*"BaseWindow/CloseButton"*/);
    byte_593B863 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_3194/*"BaseWindow/CloseButton"*/, 0);
}


void ItemIconListViewDialog__Open(
        ItemIconListViewDialog_o *this,
        System_Collections_Generic_Dictionary_int__long__o *itemList,
        System_String_o *title,
        System_String_o *detail,
        System_String_o *counterTitle1,
        System_String_o *counterTitle2,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  char v17; // w26
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x10
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  UILabel_o *closeButtonLabel; // x22
  const MethodInfo *v35; // x2
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593B860 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7829/*"ITEM_ICON_LIST_VIEW_DIALOG_CLOSE_BTN_TEXT"*/);
    byte_593B860 = 1;
  }
  ItemIconListViewDialog__Init(this, (const MethodInfo *)itemList);
  IsNullOrEmpty = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(detail, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_19;
  v17 = (char)IsNullOrEmpty;
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.titleLabel, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v18 = 112;
  if ( (v17 & 1) != 0 )
  {
    v18 = 124;
    v19 = 120;
  }
  else
  {
    v19 = 108;
  }
  v20 = (v17 & 1) != 0 ? 116LL : 104LL;
  v36.fields.z = *(float *)((char *)&this->klass + v18);
  v36.fields.y = *(float *)((char *)&this->klass + v19);
  v36.fields.x = *(float *)((char *)&this->klass + v20);
  UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v36, 0);
  IsNullOrEmpty = (UnityEngine_Transform_o *)this->fields.titleDetailLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)IsNullOrEmpty,
                                               0);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, (v17 & 1) == 0, 0);
  IsNullOrEmpty = (UnityEngine_Transform_o *)this->fields.titleLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, title, 0);
  IsNullOrEmpty = (UnityEngine_Transform_o *)this->fields.titleDetailLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, detail, 0);
  this->fields.counterTitle1 = counterTitle1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.counterTitle1,
    (int32_t)counterTitle1,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.counterTitle2 = counterTitle2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.counterTitle2,
    (int32_t)counterTitle2,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  IsNullOrEmpty = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7829/*"ITEM_ICON_LIST_VIEW_DIALOG_CLOSE_BTN_TEXT"*/, 0);
  if ( !closeButtonLabel )
LABEL_19:
    sub_21FFECC(IsNullOrEmpty, v16);
  UILabel__set_text(closeButtonLabel, (System_String_o *)IsNullOrEmpty, 0);
  ItemIconListViewDialog__CreateItemList(this, itemList, v35);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ItemIconListViewDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B865 & 1) == 0 )
  {
    sub_21FFC50(&ItemIconListViewDialog___c_TypeInfo);
    byte_593B865 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ItemIconListViewDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemIconListViewDialog___c_TypeInfo->static_fields->__9 = (struct ItemIconListViewDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ItemIconListViewDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemIconListViewDialog___c___ctor(ItemIconListViewDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ItemIconListViewDialog___c___ClearItemList_b__15_0(
        ItemIconListViewDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_593B866 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B866 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)obj, 0);
  }
}