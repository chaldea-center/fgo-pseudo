void TutorialItemGetDialog___ctor(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C36645 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C36645 = 1;
  }
  this->fields.ItemIconScale = 0.8;
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


void TutorialItemGetDialog__ClearItemList(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  TutorialItemGetDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__10_0; // x21
  Il2CppObject *v6; // x22
  struct TutorialItemGetDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_GameObject__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4C3663F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C32C20(&Method_TutorialItemGetDialog___c__ClearItemList_b__10_0__);
    sub_1C32C20(&TutorialItemGetDialog___c_TypeInfo);
    byte_4C3663F = 1;
  }
  v3 = TutorialItemGetDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !TutorialItemGetDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialItemGetDialog___c_TypeInfo);
    v3 = TutorialItemGetDialog___c_TypeInfo;
  }
  _9__10_0 = (System_Action_object__o *)v3->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TutorialItemGetDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__10_0, v6, Method_TutorialItemGetDialog___c__ClearItemList_b__10_0__, 0);
    static_fields = TutorialItemGetDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__10_0,
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


void TutorialItemGetDialog__Close(
        TutorialItemGetDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C36642 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_TutorialItemGetDialog_OnCloseEnd__);
    byte_4C36642 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TutorialItemGetDialog_OnCloseEnd__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v6, 0);
}


void TutorialItemGetDialog__CreateItemList(
        TutorialItemGetDialog_o *this,
        System_Int32_array *itemIds,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  unsigned __int64 v8; // x25
  UnityEngine_Transform_o *listRoot; // x23
  Il2CppObject *itemIconPrefab; // x24
  UnityEngine_GameObject_o *v11; // x23
  UnityEngine_Transform_o *v12; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36640 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36640 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !itemIds )
    goto LABEL_28;
  max_length = itemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C32E84(Master_object);
      if ( !v7 )
        break;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v7,
                        &entity,
                        itemIds->m_Items[v8],
                        (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (__int64)UnityEngine_Object__Instantiate_object__51812484(
                                   itemIconPrefab,
                                   listRoot,
                                   (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
        if ( !Master_object )
          break;
        v11 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0);
        v12 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4C313D1 )
        {
          Master_object = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D1 = 1;
        }
        if ( !v12 )
          break;
        UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v11, 0);
        if ( !Master_object )
          break;
        v21.fields.x = this->fields.ItemIconScale;
        v21.fields.y = v21.fields.x;
        v21.fields.z = v21.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Master_object, v21, 0);
        Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                   v11,
                                   (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !Master_object )
          break;
        ItemIconComponent__SetItem_40818828((ItemIconComponent_o *)Master_object, (ItemEntity_o *)entity, -1, 1, 0);
        UnityEngine_GameObject__SetActive(v11, 1, 0);
        Master_object = (__int64)this->fields.listRoot;
        if ( !Master_object )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                   gameObject,
                                   (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !Master_object )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 440LL))(
          Master_object,
          *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
        Master_object = (__int64)this->fields.objectList;
        if ( !Master_object )
          break;
        v16 = *(_QWORD *)(Master_object + 16);
        v17 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Master_object + 28);
        if ( !v16 )
          break;
        v18 = *(int *)(Master_object + 24);
        if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v11,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = v16 + 8 * v18;
          *(_DWORD *)(Master_object + 24) = v18 + 1;
          *(_QWORD *)(v19 + 32) = v11;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v11, v14, v15);
        }
      }
      LODWORD(max_length) = itemIds->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return;
    }
LABEL_28:
    sub_1C32E7C(Master_object);
  }
}


void TutorialItemGetDialog__Init(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel1; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3663E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3663E = 1;
  }
  messageLabel1 = this->fields.messageLabel1;
  if ( !messageLabel1 )
    goto LABEL_10;
  UILabel__set_text(messageLabel1, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel1 = this->fields.messageLabel2;
  if ( !messageLabel1 )
    goto LABEL_10;
  UILabel__set_text(messageLabel1, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel1 = (UILabel_o *)this->fields.scrollView;
  if ( !messageLabel1
    || (((void (__fastcall *)(UILabel_o *, _QWORD, const MethodInfo *, float, float))messageLabel1->klass->vtable._9_CalculateFinalAlpha.methodPtr)(
          messageLabel1,
          0,
          messageLabel1->klass->vtable._9_CalculateFinalAlpha.method,
          0.0,
          0.0),
        (messageLabel1 = (UILabel_o *)this->fields.scrollView) == 0)
    || (((void (__fastcall *)(UILabel_o *, __int64, const MethodInfo *))messageLabel1->klass->vtable._8_set_alpha.methodPtr)(
          messageLabel1,
          1,
          messageLabel1->klass->vtable._8_set_alpha.method),
        (messageLabel1 = (UILabel_o *)this->fields.scrollView) == 0)
    || (UIScrollView__UpdatePosition((UIScrollView_o *)messageLabel1, 0),
        TutorialItemGetDialog__ClearItemList(this, v4),
        (messageLabel1 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C32E7C(messageLabel1);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel1, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialItemGetDialog__OnClickClose(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C36643 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TutorialItemGetDialog_OnClickClose__);
    byte_4C36643 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_TutorialItemGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialItemGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_TutorialItemGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    CommonUI__CloseTutorialItemGetDialog((CommonUI_o *)Instance, 0);
  }
}


void TutorialItemGetDialog__OnCloseEnd(TutorialItemGetDialog_o *this, const MethodInfo *method)
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


void TutorialItemGetDialog__OnEnable(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C36644 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15649/*"Window/Objects/CloseButton"*/);
    byte_4C36644 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_15649/*"Window/Objects/CloseButton"*/, 0);
}


void TutorialItemGetDialog__Open(TutorialItemGetDialog_o *this, System_Int32_array *itemIds, const MethodInfo *method)
{
  UILabel_o *messageLabel1; // x21
  System_String_o *v6; // x0
  UILabel_o *messageLabel2; // x21
  UILabel_o *closeButtonLabel; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4C36641 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_3422/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG1"*/);
    sub_1C32C20(&StringLiteral_3423/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG2"*/);
    byte_4C36641 = 1;
  }
  TutorialItemGetDialog__Init(this, (const MethodInfo *)itemIds);
  messageLabel1 = this->fields.messageLabel1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3422/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG1"*/, 0);
  if ( !messageLabel1
    || (UILabel__set_text(messageLabel1, v6, 0),
        messageLabel2 = this->fields.messageLabel2,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3423/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG2"*/, 0),
        !messageLabel2)
    || (UILabel__set_text(messageLabel2, v6, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeButtonLabel) )
  {
    sub_1C32E7C(v6);
  }
  UILabel__set_text(closeButtonLabel, v6, 0);
  TutorialItemGetDialog__CreateItemList(this, itemIds, v9);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void TutorialItemGetDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C36646 & 1) == 0 )
  {
    sub_1C32C20(&TutorialItemGetDialog___c_TypeInfo);
    byte_4C36646 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TutorialItemGetDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TutorialItemGetDialog___c_TypeInfo->static_fields->__9 = (struct TutorialItemGetDialog___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)TutorialItemGetDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TutorialItemGetDialog___c___ctor(TutorialItemGetDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TutorialItemGetDialog___c___ClearItemList_b__10_0(
        TutorialItemGetDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4C36647 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36647 = 1;
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