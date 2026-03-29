void PurchaseShopCheckWarningDialog___ctor(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2C8E0 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2C8E0 = 1;
  }
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F4CCCCDLL;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_D01050;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PurchaseShopCheckWarningDialog__ClearItemList(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  PurchaseShopCheckWarningDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__22_0; // x21
  Il2CppObject *v6; // x22
  struct PurchaseShopCheckWarningDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  int32_t size; // w2
  int v16; // w9

  if ( (byte_4D2C8D9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C93AD4(&Method_PurchaseShopCheckWarningDialog___c__ClearItemList_b__22_0__);
    sub_1C93AD4(&PurchaseShopCheckWarningDialog___c_TypeInfo);
    byte_4D2C8D9 = 1;
  }
  v3 = PurchaseShopCheckWarningDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PurchaseShopCheckWarningDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseShopCheckWarningDialog___c_TypeInfo);
    v3 = PurchaseShopCheckWarningDialog___c_TypeInfo;
  }
  _9__22_0 = (System_Action_object__o *)v3->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PurchaseShopCheckWarningDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__22_0 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__22_0, v6, Method_PurchaseShopCheckWarningDialog___c__ClearItemList_b__22_0__, 0);
    static_fields = PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Action_GameObject__o *)_9__22_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__22_0,
          (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v14 = this->fields.objectList) == 0) )
  {
    sub_1C93D2C(v3, method);
  }
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
}


void PurchaseShopCheckWarningDialog__Close(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2C8DC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PurchaseShopCheckWarningDialog_Init__);
    byte_4D2C8DC = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PurchaseShopCheckWarningDialog_Init__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
}


void PurchaseShopCheckWarningDialog__CreateItemList(
        PurchaseShopCheckWarningDialog_o *this,
        System_Collections_Generic_Dictionary_int__long__o *itemList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *value; // x23
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *itemIconPrefab; // x24
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x22
  __int64 transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x24
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x0
  __int64 v20; // x1
  ItemIconComponent_o *v21; // x24
  __int64 v22; // x1
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_object__o *objectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2C8DA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C8DA = 1;
  }
  memset(&v41, 0, sizeof(v41));
  entity = 0;
  if ( itemList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
    System_Collections_Generic_Dictionary_int__long___GetEnumerator(
      &v39,
      itemList,
      (const MethodInfo_34BA2B0 *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    v41 = v39;
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
             &v41,
             (const MethodInfo_361D374 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
      if ( !v6 )
        break;
      if ( !Master_object )
        sub_1C93D2C(v6, v7);
      value = v41.fields._current.fields.value;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             (int32_t)v41.fields._current.fields.key,
             (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v11 = UnityEngine_Object__Instantiate_object__52629400(
                itemIconPrefab,
                listRoot,
                (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
        v13 = (UnityEngine_GameObject_o *)v11;
        if ( !v11 )
          sub_1C93D2C(0, v12);
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
        v16 = (UnityEngine_Transform_o *)transform;
        if ( !byte_4D2A139 )
        {
          transform = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        if ( !v16 )
          sub_1C93D2C(transform, v15);
        UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v17 = UnityEngine_GameObject__get_transform(v13, 0);
        if ( !v17 )
          sub_1C93D2C(0, v18);
        v42.fields.x = this->fields.ItemIconScale;
        v42.fields.y = v42.fields.x;
        v42.fields.z = v42.fields.x;
        UnityEngine_Transform__set_localScale(v17, v42, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v13,
                             (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        v21 = (ItemIconComponent_o *)Component_object;
        if ( !Component_object )
          sub_1C93D2C(0, v20);
        ItemIconComponent__SetItem_41637264(
          (ItemIconComponent_o *)Component_object,
          (ItemEntity_o *)entity,
          (int64_t)value,
          1,
          0);
        ItemIconComponent__SetCondensedScale(v21, this->fields.CounterLabelMaxWidth, 0);
        UnityEngine_GameObject__SetActive(v13, 1, 0);
        v23 = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !v23 )
          sub_1C93D2C(0, v22);
        gameObject = UnityEngine_Component__get_gameObject(v23, 0);
        v25 = GameObjectExtensions__SafeGetComponent_object_(
                gameObject,
                (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !v25 )
          sub_1C93D2C(0, v26);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v25->klass->vtable[8].methodPtr)(
          v25,
          v25->klass->vtable[8].method);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        if ( !objectList )
          sub_1C93D2C(0, v27);
        items = objectList->fields._items;
        v36 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++objectList->fields._version;
        if ( !items )
          sub_1C93D2C(objectList, v27);
        size = objectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)v13,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v13;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v13, v28, v29, v30, v31, v32, v33);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
      &v41,
      (const MethodInfo_361D48C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  }
}


void PurchaseShopCheckWarningDialog__Init(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2C8D7 & 1) == 0 )
  {
    sub_1C93AD4(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C93AD4(&Method_PurchaseShopCheckWarningDialog_OnSliderDragFinished__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C8D7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !titleLabel )
    goto LABEL_15;
  ((void (__fastcall *)(UILabel_o *, _QWORD, const MethodInfo *, float, float))titleLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr)(
    titleLabel,
    0,
    titleLabel->klass->vtable._9_CalculateFinalAlpha.method,
    0.0,
    0.0);
  titleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !titleLabel )
    goto LABEL_15;
  ((void (__fastcall *)(UILabel_o *, __int64, const MethodInfo *))titleLabel->klass->vtable._8_set_alpha.methodPtr)(
    titleLabel,
    1,
    titleLabel->klass->vtable._8_set_alpha.method);
  titleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !titleLabel )
    goto LABEL_15;
  UIScrollView__UpdatePosition((UIScrollView_o *)titleLabel, 0);
  PurchaseShopCheckWarningDialog__ClearItemList(this, v4);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  v14.fields.r = 1.0;
  v14.fields.g = 1.0;
  v14.fields.b = 1.0;
  v14.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v14, 0);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_15;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0);
  checkSlider = this->fields.checkSlider;
  v6 = (UIProgressBar_OnDragFinished_o *)sub_1C93D20(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PurchaseShopCheckWarningDialog_OnSliderDragFinished__,
    0);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v6,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&checkSlider->fields.onDragFinished,
          (int32_t)v6,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        PurchaseShopCheckWarningDialog__SetSlider(this, 0, v13),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_15:
    sub_1C93D2C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PurchaseShopCheckWarningDialog__OnClickCancel(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2C8DE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PurchaseShopCheckWarningDialog_OnClickCancel__);
    sub_1C93AD4(&Method_PurchaseShopCheckWarningDialog__OnClickCancel_b__27_0__);
    byte_4D2C8DE = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PurchaseShopCheckWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PurchaseShopCheckWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PurchaseShopCheckWarningDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PurchaseShopCheckWarningDialog__OnClickCancel_b__27_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PurchaseShopCheckWarningDialog__OnClickDecide(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4D2C8DD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PurchaseShopCheckWarningDialog_OnClickDecide__);
    sub_1C93AD4(&Method_PurchaseShopCheckWarningDialog__OnClickDecide_b__26_0__);
    byte_4D2C8DD = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C93D2C(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_PurchaseShopCheckWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PurchaseShopCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_PurchaseShopCheckWarningDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    if ( value >= 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_PurchaseShopCheckWarningDialog__OnClickDecide_b__26_0__, 0);
      BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void PurchaseShopCheckWarningDialog__OnEnable(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2C8DF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4D2C8DF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void PurchaseShopCheckWarningDialog__OnSliderDragFinished(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  bool v5; // nf
  float v6; // s0
  bool v7; // w20
  const MethodInfo *v8; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0) )
  {
    sub_1C93D2C(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  PurchaseShopCheckWarningDialog__SetSlider(this, v7, v8);
}


void PurchaseShopCheckWarningDialog__Open(
        PurchaseShopCheckWarningDialog_o *this,
        ShopEntity_o *shop,
        System_Collections_Generic_Dictionary_int__long__o *itemList,
        PurchaseShopCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *warningLabel; // x22
  UILabel_o *reInforeceLabel; // x21
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v22; // x2

  if ( (byte_4D2C8DB & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10563/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_SLIDER_MSG"*/);
    sub_1C93AD4(&StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10565/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_WARNING_MSG"*/);
    sub_1C93AD4(&StringLiteral_10564/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_TITLE"*/);
    byte_4D2C8DB = 1;
  }
  PurchaseShopCheckWarningDialog__Init(this, (const MethodInfo *)shop);
  this->fields.closeFunc = closeCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10564/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, v16, 0);
  warningLabel = this->fields.warningLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10565/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_WARNING_MSG"*/, 0);
  if ( !shop )
    goto LABEL_12;
  v16 = System_String__Format(v16, (Il2CppObject *)shop->fields.name, 0);
  if ( !warningLabel )
    goto LABEL_12;
  UILabel__set_text(warningLabel, v16, 0);
  reInforeceLabel = this->fields.reInforeceLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10563/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_SLIDER_MSG"*/, 0);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v16, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v16, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_12:
    sub_1C93D2C(v16, v17);
  }
  UILabel__set_text(cancelButtonLabel, v16, 0);
  PurchaseShopCheckWarningDialog__CreateItemList(this, itemList, v22);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseShopCheckWarningDialog__SetSlider(
        PurchaseShopCheckWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  __int64 v10; // x1
  UnityEngine_Color_o DisableColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2C8D8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20815/*"img_slider_thumb_locked"*/);
    sub_1C93AD4(&StringLiteral_20814/*"img_slider_thumb"*/);
    byte_4D2C8D8 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v6 = (System_String_o **)&StringLiteral_20814/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20815/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  DisableColor.fields.a = 1.0;
  DisableColor.fields.b = 1.0;
  DisableColor.fields.g = 1.0;
  DisableColor.fields.r = 1.0;
  if ( !sliderOn )
    DisableColor = this->fields.DisableColor;
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, DisableColor, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0)
    || (!sliderOn ? (v10 = 3) : (v10 = 0),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, const MethodInfo *))sliderSprite->klass->vtable._14_OnEnable.methodPtr)(
          sliderSprite,
          v10,
          1,
          sliderSprite->klass->vtable._14_OnEnable.method),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_15:
    sub_1C93D2C(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}


void PurchaseShopCheckWarningDialog___OnClickCancel_b__27_0(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PurchaseShopCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  PurchaseShopCheckWarningDialog__Init(this, method);
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C93D2C(v3, v4);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    0,
    closeFunc->fields.method);
}


void PurchaseShopCheckWarningDialog___OnClickDecide_b__26_0(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PurchaseShopCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  PurchaseShopCheckWarningDialog__Init(this, method);
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C93D2C(v3, v4);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    1,
    closeFunc->fields.method);
}


void PurchaseShopCheckWarningDialog_ClickDelegate___ctor(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC3D60;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3D18;
}


System_IAsyncResult_o *PurchaseShopCheckWarningDialog_ClickDelegate__BeginInvoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4D2C8E1 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2C8E1 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void PurchaseShopCheckWarningDialog_ClickDelegate__EndInvoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void PurchaseShopCheckWarningDialog_ClickDelegate__Invoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void PurchaseShopCheckWarningDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C8E2 & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseShopCheckWarningDialog___c_TypeInfo);
    byte_4D2C8E2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PurchaseShopCheckWarningDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields->__9 = (struct PurchaseShopCheckWarningDialog___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseShopCheckWarningDialog___c___ctor(PurchaseShopCheckWarningDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseShopCheckWarningDialog___c___ClearItemList_b__22_0(
        PurchaseShopCheckWarningDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4D2C8E3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C8E3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)obj, 0);
  }
}