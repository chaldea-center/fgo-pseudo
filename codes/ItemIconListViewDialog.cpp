void ItemIconListViewDialog___ctor(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF0F28 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CF0F28 = 1;
  }
  *(_OWORD *)&this->fields.TitlePosDefault.fields.x = xmmword_CF5B10;
  *(_QWORD *)&this->fields.TitlePosNoneDetail.fields.y = 1128792064;
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F4CCCCDLL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  int32_t size; // w2
  int v16; // w9

  if ( (byte_4CF0F22 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_GameObject__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C7BAE8(&Method_ItemIconListViewDialog___c__ClearItemList_b__15_0__);
    sub_1C7BAE8(&ItemIconListViewDialog___c_TypeInfo);
    byte_4CF0F22 = 1;
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
    _9__15_0 = (System_Action_object__o *)sub_1C7BD34(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_0, v6, Method_ItemIconListViewDialog___c__ClearItemList_b__15_0__, 0);
    static_fields = ItemIconListViewDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Action_GameObject__o *)_9__15_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__15_0,
          (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v14 = this->fields.objectList) == 0) )
  {
    sub_1C7BD40(v3, method);
  }
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
}


void ItemIconListViewDialog__Close(
        ItemIconListViewDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CF0F25 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ItemIconListViewDialog_OnCloseEnd__);
    byte_4CF0F25 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  UnityEngine_Transform_o *listRoot; // x24
  Il2CppObject *itemIconPrefab; // x26
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x24
  __int64 transform; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x26
  UnityEngine_Transform_o *v18; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x0
  __int64 v21; // x1
  ItemIconComponent_o *v22; // x26
  __int64 v23; // x0
  __int64 v24; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v26; // x1
  int64_t qp; // x3
  NetworkManager_c *v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_List_object__o *objectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+8h] [xbp-C8h] BYREF
  UserItemEntity_o *v49; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+40h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF0F23 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0F23 = 1;
  }
  v49 = 0;
  entity = 0;
  memset(&v51, 0, sizeof(v51));
  if ( itemList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
    v6 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserItemMaster___);
    System_Collections_Generic_Dictionary_int__long___GetEnumerator(
      &v48,
      itemList,
      (const MethodInfo_3484C3C *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    v51 = v48;
    while ( 1 )
    {
      v7 = System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
             &v51,
             (const MethodInfo_35E12F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
      if ( !v7 )
        break;
      if ( !Master_object )
        sub_1C7BD40(v7, v8);
      value = v51.fields._current.fields.value;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             (int32_t)v51.fields._current.fields.key,
             (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__Instantiate_object__52412380(
                itemIconPrefab,
                listRoot,
                (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
        v14 = (UnityEngine_GameObject_o *)v12;
        if ( !v12 )
          sub_1C7BD40(0, v13);
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
        v17 = (UnityEngine_Transform_o *)transform;
        if ( !byte_4CE7E59 )
        {
          transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E59 = 1;
        }
        if ( !v17 )
          sub_1C7BD40(transform, v16);
        UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v18 = UnityEngine_GameObject__get_transform(v14, 0);
        if ( !v18 )
          sub_1C7BD40(0, v19);
        v52.fields.x = this->fields.ItemIconScale;
        v52.fields.y = v52.fields.x;
        v52.fields.z = v52.fields.x;
        UnityEngine_Transform__set_localScale(v18, v52, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v14,
                             (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !entity )
          sub_1C7BD40(Component_object, v21);
        v22 = (ItemIconComponent_o *)Component_object;
        if ( !Component_object )
          sub_1C7BD40(0, v21);
        ItemIconComponent__SetGift_41487788(
          (ItemIconComponent_o *)Component_object,
          2,
          (int32_t)entity[1].klass,
          -1,
          0,
          0);
        ItemIconComponent__SetCondensedScale(v22, this->fields.CounterLabelMaxWidth, 0);
        if ( !entity )
          sub_1C7BD40(v23, v24);
        if ( LODWORD(entity[3].klass) == 1 )
        {
          SelfUserGame = UserGameMaster__getSelfUserGame(0);
          if ( !SelfUserGame )
            sub_1C7BD40(0, v26);
          qp = SelfUserGame->fields.qp;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CE827C )
          {
            sub_1C7BAE8(&NetworkManager_TypeInfo);
            byte_4CE827C = 1;
          }
          v28 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v28 = NetworkManager_TypeInfo;
          }
          if ( !entity )
            sub_1C7BD40(v28, v24);
          if ( !v6 )
            sub_1C7BD40(v28, v24);
          v29 = UserItemMaster__TryGetEntity(
                  (UserItemMaster_o *)v6,
                  &v49,
                  v28->static_fields->userIdNumber,
                  (int32_t)entity[1].klass,
                  0);
          if ( v29 )
          {
            if ( !v49 )
              sub_1C7BD40(v29, v30);
            qp = v49->fields.num;
          }
          else
          {
            qp = 0;
          }
        }
        ItemIconComponent__SetTwoTypeCounterLabel(
          v22,
          this->fields.counterTitle1,
          this->fields.counterTitle2,
          qp,
          (int64_t)value,
          0);
        UnityEngine_GameObject__SetActive(v14, 1, 0);
        v32 = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !v32 )
          sub_1C7BD40(0, v31);
        gameObject = UnityEngine_Component__get_gameObject(v32, 0);
        v34 = GameObjectExtensions__SafeGetComponent_object_(
                gameObject,
                (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !v34 )
          sub_1C7BD40(0, v35);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v34->klass->vtable[8].methodPtr)(
          v34,
          v34->klass->vtable[8].method);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        if ( !objectList )
          sub_1C7BD40(0, v36);
        items = objectList->fields._items;
        v45 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++objectList->fields._version;
        if ( !items )
          sub_1C7BD40(objectList, v36);
        size = objectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)v14,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v14;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)v14, v37, v38, v39, v40, v41, v42);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
      &v51,
      (const MethodInfo_35E140C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  }
}


void ItemIconListViewDialog__Init(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4CF0F21 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF0F21 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        ItemIconListViewDialog__ClearItemList(this, v4),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(titleLabel, method);
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

  if ( (byte_4CF0F26 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
    sub_1C7BAE8(&Method_ItemIconListViewDialog_OnClickClose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF0F26 = 1;
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
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      objectList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)Item,
                                                                  (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_BoxCollider___);
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
      v6 = (_QWORD *)sub_1C7BB00(Method_ItemIconListViewDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    objectList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !objectList )
LABEL_15:
      sub_1C7BD40(objectList, method);
    CommonUI__CloseItemIconListViewDialog((CommonUI_o *)objectList, 0);
  }
}


void ItemIconListViewDialog__OnCloseEnd(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_1C7BA8C(p_closeCallback, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0);
}


void ItemIconListViewDialog__OnEnable(ItemIconListViewDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CF0F27 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3077/*"BaseWindow/CloseButton"*/);
    byte_4CF0F27 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_3077/*"BaseWindow/CloseButton"*/, 0);
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UILabel_o *closeButtonLabel; // x22
  const MethodInfo *v34; // x2
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF0F24 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7534/*"ITEM_ICON_LIST_VIEW_DIALOG_CLOSE_BTN_TEXT"*/);
    byte_4CF0F24 = 1;
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
  v35.fields.z = *(float *)((char *)&this->klass + v18);
  v35.fields.y = *(float *)((char *)&this->klass + v19);
  v35.fields.x = *(float *)((char *)&this->klass + v20);
  UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v35, 0);
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.counterTitle1,
    (int32_t)counterTitle1,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.counterTitle2 = counterTitle2;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.counterTitle2,
    (int32_t)counterTitle2,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7534/*"ITEM_ICON_LIST_VIEW_DIALOG_CLOSE_BTN_TEXT"*/, 0);
  if ( !closeButtonLabel )
LABEL_19:
    sub_1C7BD40(IsNullOrEmpty, v16);
  UILabel__set_text(closeButtonLabel, (System_String_o *)IsNullOrEmpty, 0);
  ItemIconListViewDialog__CreateItemList(this, itemList, v34);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ItemIconListViewDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF0F29 & 1) == 0 )
  {
    sub_1C7BAE8(&ItemIconListViewDialog___c_TypeInfo);
    byte_4CF0F29 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ItemIconListViewDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemIconListViewDialog___c_TypeInfo->static_fields->__9 = (struct ItemIconListViewDialog___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ItemIconListViewDialog___c_TypeInfo->static_fields,
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
  if ( (byte_4CF0F2A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0F2A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)obj, 0);
  }
}