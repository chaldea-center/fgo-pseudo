void __fastcall TutorialItemGetDialog___ctor(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B00CF0 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4B00CF0 = 1;
  }
  this->fields.ItemIconScale = 0.8;
  v5 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialItemGetDialog__ClearItemList(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TutorialItemGetDialog___c_c *v7; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__10_0; // x21
  Il2CppObject *v10; // x22
  struct TutorialItemGetDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  int32_t size; // w2
  int v16; // w9

  if ( (byte_4B00CEA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_GameObject__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__ForEach__, v4);
    sub_1BC3008(&Method_TutorialItemGetDialog___c__ClearItemList_b__10_0__, v5);
    sub_1BC3008(&TutorialItemGetDialog___c_TypeInfo, v6);
    byte_4B00CEA = 1;
  }
  v7 = TutorialItemGetDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !TutorialItemGetDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialItemGetDialog___c_TypeInfo);
    v7 = TutorialItemGetDialog___c_TypeInfo;
  }
  _9__10_0 = (System_Action_object__o *)v7->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TutorialItemGetDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_1BC3254(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__10_0, v10, Method_TutorialItemGetDialog___c__ClearItemList_b__10_0__, 0LL);
    static_fields = TutorialItemGetDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v12, v13);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__10_0,
          (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v14 = this->fields.objectList) == 0LL) )
  {
    sub_1BC3264(v7, method);
  }
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
}


void __fastcall TutorialItemGetDialog__Close(
        TutorialItemGetDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B00CED & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, closeCallback);
    sub_1BC3008(&Method_TutorialItemGetDialog_OnCloseEnd__, v6);
    byte_4B00CED = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TutorialItemGetDialog_OnCloseEnd__, 0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall TutorialItemGetDialog__CreateItemList(
        TutorialItemGetDialog_o *this,
        System_Int32_array *itemIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 Master_object; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  unsigned __int64 v17; // x25
  UnityEngine_Transform_o *listRoot; // x23
  Il2CppObject *itemIconPrefab; // x24
  UnityEngine_GameObject_o *v20; // x23
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B00CEB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, itemIds);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_1BC3008(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    byte_4B00CEB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !itemIds )
    goto LABEL_28;
  v15 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1BC326C(Master_object, v13, v14);
      if ( !v16 )
        break;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v16,
                        &entity,
                        itemIds->m_Items[v17 + 1],
                        (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (__int64)UnityEngine_Object__Instantiate_object__50900816(
                                   itemIconPrefab,
                                   listRoot,
                                   (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
        if ( !Master_object )
          break;
        v20 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        v21 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4AFBDB1 )
        {
          Master_object = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v13);
          byte_4AFBDB1 = 1;
        }
        if ( !v21 )
          break;
        UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v20, 0LL);
        if ( !Master_object )
          break;
        v30.fields.x = this->fields.ItemIconScale;
        v30.fields.y = v30.fields.x;
        v30.fields.z = v30.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Master_object, v30, 0LL);
        Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                   v20,
                                   (const MethodInfo_3057480 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !Master_object )
          break;
        ItemIconComponent__SetItem_39949148((ItemIconComponent_o *)Master_object, (ItemEntity_o *)entity, -1, 1, 0LL);
        UnityEngine_GameObject__SetActive(v20, 1, 0LL);
        Master_object = (__int64)this->fields.listRoot;
        if ( !Master_object )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                   gameObject,
                                   (const MethodInfo_3057480 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !Master_object )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 440LL))(
          Master_object,
          *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
        Master_object = (__int64)this->fields.objectList;
        if ( !Master_object )
          break;
        v25 = *(_QWORD *)(Master_object + 16);
        v26 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Master_object + 28);
        if ( !v25 )
          break;
        v27 = *(int *)(Master_object + 24);
        if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v20,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * v27;
          *(_DWORD *)(Master_object + 24) = v27 + 1;
          *(_QWORD *)(v28 + 32) = v20;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v20, v23, v24);
        }
      }
      LODWORD(v15) = itemIds->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        return;
    }
LABEL_28:
    sub_1BC3264(Master_object, v13);
  }
}


void __fastcall TutorialItemGetDialog__Init(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel1; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B00CE9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B00CE9 = 1;
  }
  messageLabel1 = this->fields.messageLabel1;
  if ( !messageLabel1 )
    goto LABEL_10;
  UILabel__set_text(messageLabel1, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel1 = this->fields.messageLabel2;
  if ( !messageLabel1 )
    goto LABEL_10;
  UILabel__set_text(messageLabel1, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel1 = (UILabel_o *)this->fields.scrollView;
  if ( !messageLabel1
    || (((void (__fastcall *)(UILabel_o *, _QWORD, Il2CppMethodPointer, float, float))messageLabel1->klass->vtable._9_CalculateFinalAlpha.method)(
          messageLabel1,
          0LL,
          messageLabel1->klass->vtable._10_get_localCorners.methodPtr,
          0.0,
          0.0),
        (messageLabel1 = (UILabel_o *)this->fields.scrollView) == 0LL)
    || (((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))messageLabel1->klass->vtable._8_set_alpha.method)(
          messageLabel1,
          1LL,
          messageLabel1->klass->vtable._9_CalculateFinalAlpha.methodPtr),
        (messageLabel1 = (UILabel_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__UpdatePosition((UIScrollView_o *)messageLabel1, 0LL),
        TutorialItemGetDialog__ClearItemList(this, v4),
        (messageLabel1 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(messageLabel1, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel1, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialItemGetDialog__OnClickClose(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B00CEE & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BC3008(&Method_TutorialItemGetDialog_OnClickClose__, v3);
    byte_4B00CEE = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v4 = Method_TutorialItemGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialItemGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BC3020(Method_TutorialItemGetDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v7);
    CommonUI__CloseTutorialItemGetDialog((CommonUI_o *)Instance, 0LL);
  }
}


void __fastcall TutorialItemGetDialog__OnCloseEnd(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_1BC2FAC(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall TutorialItemGetDialog__OnEnable(TutorialItemGetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B00CEF & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15505/*"Window/Objects/CloseButton"*/, method);
    byte_4B00CEF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_15505/*"Window/Objects/CloseButton"*/, 0LL);
}


void __fastcall TutorialItemGetDialog__Open(
        TutorialItemGetDialog_o *this,
        System_Int32_array *itemIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *messageLabel1; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *messageLabel2; // x21
  UILabel_o *closeButtonLabel; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4B00CEC & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, itemIds);
    sub_1BC3008(&StringLiteral_11923/*"SHOP18_ITEM_GET_DIALOG_MSG2"*/, v5);
    sub_1BC3008(&StringLiteral_11922/*"SHOP18_ITEM_GET_DIALOG_MSG1"*/, v6);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v7);
    byte_4B00CEC = 1;
  }
  TutorialItemGetDialog__Init(this, (const MethodInfo *)itemIds);
  messageLabel1 = this->fields.messageLabel1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11922/*"SHOP18_ITEM_GET_DIALOG_MSG1"*/, 0LL);
  if ( !messageLabel1
    || (UILabel__set_text(messageLabel1, v9, 0LL),
        messageLabel2 = this->fields.messageLabel2,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11923/*"SHOP18_ITEM_GET_DIALOG_MSG2"*/, 0LL),
        !messageLabel2)
    || (UILabel__set_text(messageLabel2, v9, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_1BC3264(v9, v10);
  }
  UILabel__set_text(closeButtonLabel, v9, 0LL);
  TutorialItemGetDialog__CreateItemList(this, itemIds, v13);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall TutorialItemGetDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B00CF1 & 1) == 0 )
  {
    sub_1BC3008(&TutorialItemGetDialog___c_TypeInfo, v1);
    byte_4B00CF1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(TutorialItemGetDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TutorialItemGetDialog___c_TypeInfo->static_fields->__9 = (struct TutorialItemGetDialog___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)TutorialItemGetDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TutorialItemGetDialog___c___ctor(TutorialItemGetDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialItemGetDialog___c___ClearItemList_b__10_0(
        TutorialItemGetDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4B00CF2 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, obj);
    byte_4B00CF2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)obj, 0LL);
  }
}