void ItemIconListViewDialog___ctor(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A35D & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C3A35D = 1;
  }
  *(_OWORD *)&this->fields.TitlePosDefault.fields.x = xmmword_C0CC60;
  *(_QWORD *)&this->fields.TitlePosNoneDetail.fields.y = 1128792064;
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F4CCCCDLL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ItemIconListViewDialog__ClearItemList(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  ItemIconListViewDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__15_0; // x21
  Il2CppObject *v6; // x22
  struct ItemIconListViewDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_GameObject__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4C3A357 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C32C20(&Method_ItemIconListViewDialog___c__ClearItemList_b__15_0__);
    sub_1C32C20(&ItemIconListViewDialog___c_TypeInfo);
    byte_4C3A357 = 1;
  }
  v3 = ItemIconListViewDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !ItemIconListViewDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemIconListViewDialog___c_TypeInfo);
    v3 = ItemIconListViewDialog___c_TypeInfo;
  }
  _9__15_0 = (System_Action_object__o *)v3->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ItemIconListViewDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__15_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_0, v6, Method_ItemIconListViewDialog___c__ClearItemList_b__15_0__, 0);
    static_fields = ItemIconListViewDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Action_GameObject__o *)_9__15_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v8, v9);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__15_0,
          (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v10 = this->fields.objectList) == 0) )
  {
    sub_1C32E7C(v3);
  }
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
}


void ItemIconListViewDialog__Close(
        ItemIconListViewDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3A35A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ItemIconListViewDialog_OnCloseEnd__);
    byte_4C3A35A = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ItemIconListViewDialog_OnCloseEnd__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v6, 0);
}


void ItemIconListViewDialog__CreateItemList(
        ItemIconListViewDialog_o *this,
        System_Collections_Generic_Dictionary_int__long__o *itemList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  Il2CppObject *v6; // x22
  _BOOL8 v7; // x0
  Il2CppObject *value; // x25
  UnityEngine_Transform_o *listRoot; // x24
  Il2CppObject *itemIconPrefab; // x26
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o *v12; // x24
  __int64 transform; // x0
  UnityEngine_Transform_o *v14; // x26
  UnityEngine_Transform_o *v15; // x0
  Il2CppObject *Component_object; // x0
  ItemIconComponent_o *v17; // x26
  __int64 v18; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int64_t qp; // x3
  NetworkManager_c *v21; // x0
  _BOOL8 v22; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *objectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-C8h] BYREF
  UserItemEntity_o *v34; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+40h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3A358 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A358 = 1;
  }
  v34 = 0;
  entity = 0;
  memset(&v36, 0, sizeof(v36));
  if ( itemList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
    v6 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
    System_Collections_Generic_Dictionary_int__long___GetEnumerator(
      &v33,
      itemList,
      (const MethodInfo_33ED248 *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    v36 = v33;
    while ( 1 )
    {
      v7 = System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
             &v36,
             (const MethodInfo_35462F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
      if ( !v7 )
        break;
      if ( !Master_object )
        sub_1C32E7C(v7);
      value = v36.fields._current.fields.value;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             (int32_t)v36.fields._current.fields.key,
             (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v11 = UnityEngine_Object__Instantiate_object__51812484(
                itemIconPrefab,
                listRoot,
                (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
        v12 = (UnityEngine_GameObject_o *)v11;
        if ( !v11 )
          sub_1C32E7C(0);
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
        v14 = (UnityEngine_Transform_o *)transform;
        if ( !byte_4C313D1 )
        {
          transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D1 = 1;
        }
        if ( !v14 )
          sub_1C32E7C(transform);
        UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v15 = UnityEngine_GameObject__get_transform(v12, 0);
        if ( !v15 )
          sub_1C32E7C(0);
        v37.fields.x = this->fields.ItemIconScale;
        v37.fields.y = v37.fields.x;
        v37.fields.z = v37.fields.x;
        UnityEngine_Transform__set_localScale(v15, v37, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v12,
                             (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !entity )
          sub_1C32E7C(Component_object);
        v17 = (ItemIconComponent_o *)Component_object;
        if ( !Component_object )
          sub_1C32E7C(0);
        ItemIconComponent__SetGift_40822420(
          (ItemIconComponent_o *)Component_object,
          2,
          (int32_t)entity[1].klass,
          -1,
          0,
          0);
        ItemIconComponent__SetCondensedScale(v17, this->fields.CounterLabelMaxWidth, 0);
        if ( !entity )
          sub_1C32E7C(v18);
        if ( LODWORD(entity[3].klass) == 1 )
        {
          SelfUserGame = UserGameMaster__getSelfUserGame(0);
          if ( !SelfUserGame )
            sub_1C32E7C(0);
          qp = SelfUserGame->fields.qp;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
          }
          v21 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v21 = NetworkManager_TypeInfo;
          }
          if ( !entity )
            sub_1C32E7C(v21);
          if ( !v6 )
            sub_1C32E7C(v21);
          v22 = UserItemMaster__TryGetEntity(
                  (UserItemMaster_o *)v6,
                  &v34,
                  v21->static_fields->userIdNumber,
                  (int32_t)entity[1].klass,
                  0);
          if ( v22 )
          {
            if ( !v34 )
              sub_1C32E7C(v22);
            qp = v34->fields.num;
          }
          else
          {
            qp = 0;
          }
        }
        ItemIconComponent__SetTwoTypeCounterLabel(
          v17,
          this->fields.counterTitle1,
          this->fields.counterTitle2,
          qp,
          (int64_t)value,
          0);
        UnityEngine_GameObject__SetActive(v12, 1, 0);
        v23 = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !v23 )
          sub_1C32E7C(0);
        gameObject = UnityEngine_Component__get_gameObject(v23, 0);
        v25 = GameObjectExtensions__SafeGetComponent_object_(
                gameObject,
                (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !v25 )
          sub_1C32E7C(0);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v25->klass->vtable[8].methodPtr)(
          v25,
          v25->klass->vtable[8].method);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        if ( !objectList )
          sub_1C32E7C(0);
        items = objectList->fields._items;
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++objectList->fields._version;
        if ( !items )
          sub_1C32E7C(objectList);
        size = objectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)v12,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v12;
          sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v12, v26, v27);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
      &v36,
      (const MethodInfo_354640C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  }
}


void ItemIconListViewDialog__Init(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3A356 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A356 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        ItemIconListViewDialog__ClearItemList(this, v4),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(titleLabel);
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

  if ( (byte_4C3A35B & 1) == 0 )
  {
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
    sub_1C32C20(&Method_ItemIconListViewDialog_OnClickClose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3A35B = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    if ( !objectList )
      goto LABEL_15;
    v4 = 0;
    while ( v4 < objectList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v4,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      objectList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)Item,
                                                                  (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
      if ( objectList )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)objectList, 0, 0);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        ++v4;
        if ( objectList )
          continue;
      }
      goto LABEL_15;
    }
    v6 = Method_ItemIconListViewDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ItemIconListViewDialog_OnClickClose__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C32C38(Method_ItemIconListViewDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    objectList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !objectList )
LABEL_15:
      sub_1C32E7C(objectList);
    CommonUI__CloseItemIconListViewDialog((CommonUI_o *)objectList, 0);
  }
}


void ItemIconListViewDialog__OnCloseEnd(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_1C32BC4(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0);
}


void ItemIconListViewDialog__OnEnable(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3A35C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3076/*"BaseWindow/CloseButton"*/);
    byte_4C3A35C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_3076/*"BaseWindow/CloseButton"*/, 0);
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
  char v16; // w26
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x10
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UILabel_o *closeButtonLabel; // x22
  const MethodInfo *v25; // x2
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3A359 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7516/*"ITEM_ICON_LIST_VIEW_DIALOG_CLOSE_BTN_TEXT"*/);
    byte_4C3A359 = 1;
  }
  ItemIconListViewDialog__Init(this, (const MethodInfo *)itemList);
  IsNullOrEmpty = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(detail, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_19;
  v16 = (char)IsNullOrEmpty;
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.titleLabel, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  v17 = 112;
  if ( (v16 & 1) != 0 )
  {
    v17 = 124;
    v18 = 120;
  }
  else
  {
    v18 = 108;
  }
  v19 = (v16 & 1) != 0 ? 116LL : 104LL;
  v26.fields.z = *(float *)((char *)&this->klass + v17);
  v26.fields.y = *(float *)((char *)&this->klass + v18);
  v26.fields.x = *(float *)((char *)&this->klass + v19);
  UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v26, 0);
  IsNullOrEmpty = (UnityEngine_Transform_o *)this->fields.titleDetailLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)IsNullOrEmpty,
                                               0);
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, (v16 & 1) == 0, 0);
  IsNullOrEmpty = (UnityEngine_Transform_o *)this->fields.titleLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, title, 0);
  IsNullOrEmpty = (UnityEngine_Transform_o *)this->fields.titleDetailLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, detail, 0);
  this->fields.counterTitle1 = counterTitle1;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.counterTitle1, (int32_t)counterTitle1, v20, v21);
  this->fields.counterTitle2 = counterTitle2;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.counterTitle2, (int32_t)counterTitle2, v22, v23);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7516/*"ITEM_ICON_LIST_VIEW_DIALOG_CLOSE_BTN_TEXT"*/, 0);
  if ( !closeButtonLabel )
LABEL_19:
    sub_1C32E7C(IsNullOrEmpty);
  UILabel__set_text(closeButtonLabel, (System_String_o *)IsNullOrEmpty, 0);
  ItemIconListViewDialog__CreateItemList(this, itemList, v25);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ItemIconListViewDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A35E & 1) == 0 )
  {
    sub_1C32C20(&ItemIconListViewDialog___c_TypeInfo);
    byte_4C3A35E = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ItemIconListViewDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemIconListViewDialog___c_TypeInfo->static_fields->__9 = (struct ItemIconListViewDialog___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ItemIconListViewDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C3A35F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A35F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)obj, 0);
  }
}