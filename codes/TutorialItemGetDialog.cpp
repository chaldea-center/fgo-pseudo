void TutorialItemGetDialog___ctor(TutorialItemGetDialog_o *this, const MethodInfo *method)
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
  __int64 v12; // x2

  if ( (byte_59372CA & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_59372CA = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.ItemIconScale = 0.8;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TutorialItemGetDialog__ClearItemList(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialItemGetDialog___c_c *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  struct TutorialItemGetDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__10_0; // x21
  Il2CppObject *v8; // x22
  struct TutorialItemGetDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_GameObject__o *v16; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_59372C4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_TutorialItemGetDialog___c__ClearItemList_b__10_0__);
    sub_21FFC50(&TutorialItemGetDialog___c_TypeInfo);
    byte_59372C4 = 1;
  }
  v4 = TutorialItemGetDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&TutorialItemGetDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialItemGetDialog___c_TypeInfo, method, v2);
    v4 = TutorialItemGetDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__10_0 = (System_Action_object__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = TutorialItemGetDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__10_0, v8, Method_TutorialItemGetDialog___c__ClearItemList_b__10_0__, 0);
    v9 = TutorialItemGetDialog___c_TypeInfo->static_fields;
    v9->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__10_0, (int32_t)_9__10_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__10_0,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v16 = this->fields.objectList) == 0) )
  {
    sub_21FFECC(v4, method);
  }
  size = v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0);
}


void TutorialItemGetDialog__Close(
        TutorialItemGetDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_59372C7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_TutorialItemGetDialog_OnCloseEnd__);
    byte_59372C7 = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TutorialItemGetDialog_OnCloseEnd__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void TutorialItemGetDialog__CreateItemList(
        TutorialItemGetDialog_o *this,
        System_Int32_array *itemIds,
        const MethodInfo *method)
{
  int v5; // w8
  __int64 Master_object; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  unsigned __int64 v10; // x25
  __int64 v11; // x2
  Il2CppObject *itemIconPrefab; // x23
  UnityEngine_Transform_o *listRoot; // x24
  UnityEngine_GameObject_o *v14; // x23
  UnityEngine_Transform_o *v15; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59372C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59372C5 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, itemIds, method);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !itemIds )
    goto LABEL_28;
  max_length = itemIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_21FFED4(Master_object);
      if ( !v9 )
        break;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v9,
                        &entity,
                        itemIds->m_Items[v10],
                        (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v11);
        Master_object = (__int64)UnityEngine_Object__Instantiate_object__59506996(
                                   itemIconPrefab,
                                   listRoot,
                                   (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
        if ( !Master_object )
          break;
        v14 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0);
        v15 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_5931940 )
        {
          Master_object = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !v15 )
          break;
        UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v14, 0);
        if ( !Master_object )
          break;
        v28.fields.x = this->fields.ItemIconScale;
        v28.fields.y = v28.fields.x;
        v28.fields.z = v28.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Master_object, v28, 0);
        Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                   v14,
                                   (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !Master_object )
          break;
        ItemIconComponent__SetItem_47933276((ItemIconComponent_o *)Master_object, (ItemEntity_o *)entity, -1, 1, 0);
        UnityEngine_GameObject__SetActive(v14, 1, 0);
        Master_object = (__int64)this->fields.listRoot;
        if ( !Master_object )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                   gameObject,
                                   (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !Master_object )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 440LL))(
          Master_object,
          *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
        Master_object = (__int64)this->fields.objectList;
        if ( !Master_object )
          break;
        v23 = *(_QWORD *)(Master_object + 16);
        v24 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Master_object + 28);
        if ( !v23 )
          break;
        v25 = *(int *)(Master_object + 24);
        if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v14,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * v25;
          *(_DWORD *)(Master_object + 24) = v25 + 1;
          *(_QWORD *)(v26 + 32) = v14;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v14, v17, v18, v19, v20, v21, v22);
        }
      }
      LODWORD(max_length) = itemIds->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        return;
    }
LABEL_28:
    sub_21FFECC(Master_object, v7);
  }
}


void TutorialItemGetDialog__Init(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel1; // x0
  const MethodInfo *v4; // x1

  if ( (byte_59372C3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59372C3 = 1;
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
    || (((void (__fastcall *)(UILabel_o *, _QWORD, const MethodInfo *, double, double))messageLabel1->klass->vtable._9_CalculateFinalAlpha.methodPtr)(
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
    sub_21FFECC(messageLabel1, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel1, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialItemGetDialog__OnClickClose(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_59372C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TutorialItemGetDialog_OnClickClose__);
    byte_59372C8 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_TutorialItemGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialItemGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_TutorialItemGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v6);
    CommonUI__CloseTutorialItemGetDialog((CommonUI_o *)Instance, 0);
  }
}


void TutorialItemGetDialog__OnCloseEnd(TutorialItemGetDialog_o *this, const MethodInfo *method)
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


void TutorialItemGetDialog__OnEnable(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_59372C9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16237/*"Window/Objects/CloseButton"*/);
    byte_59372C9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16237/*"Window/Objects/CloseButton"*/, 0);
}


void TutorialItemGetDialog__Open(TutorialItemGetDialog_o *this, System_Int32_array *itemIds, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *messageLabel1; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *messageLabel2; // x21
  UILabel_o *closeButtonLabel; // x21
  const MethodInfo *v12; // x2

  if ( (byte_59372C6 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_3556/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG1"*/);
    sub_21FFC50(&StringLiteral_3557/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG2"*/);
    byte_59372C6 = 1;
  }
  TutorialItemGetDialog__Init(this, (const MethodInfo *)itemIds);
  messageLabel1 = this->fields.messageLabel1;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3556/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG1"*/, 0);
  if ( !messageLabel1
    || (UILabel__set_text(messageLabel1, v8, 0),
        messageLabel2 = this->fields.messageLabel2,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3557/*"CLASS_BOARD_RESET_ITEM_GET_DIALOG_MSG2"*/, 0),
        !messageLabel2)
    || (UILabel__set_text(messageLabel2, v8, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeButtonLabel) )
  {
    sub_21FFECC(v8, v9);
  }
  UILabel__set_text(closeButtonLabel, v8, 0);
  TutorialItemGetDialog__CreateItemList(this, itemIds, v12);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void TutorialItemGetDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59372CB & 1) == 0 )
  {
    sub_21FFC50(&TutorialItemGetDialog___c_TypeInfo);
    byte_59372CB = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TutorialItemGetDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TutorialItemGetDialog___c_TypeInfo->static_fields->__9 = (struct TutorialItemGetDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TutorialItemGetDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_59372CC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59372CC = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)obj, 0);
  }
}