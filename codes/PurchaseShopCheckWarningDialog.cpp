void __fastcall PurchaseShopCheckWarningDialog___ctor(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B40BF6 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4B40BF6 = 1;
  }
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F4CCCCDLL;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_BEB150;
  v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PurchaseShopCheckWarningDialog__ClearItemList(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PurchaseShopCheckWarningDialog___c_c *v7; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__22_0; // x21
  Il2CppObject *v10; // x22
  struct PurchaseShopCheckWarningDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  int32_t size; // w2
  int v16; // w9

  if ( (byte_4B40BEF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GameObject__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Clear__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__ForEach__, v4);
    sub_1BDB878(&Method_PurchaseShopCheckWarningDialog___c__ClearItemList_b__22_0__, v5);
    sub_1BDB878(&PurchaseShopCheckWarningDialog___c_TypeInfo, v6);
    byte_4B40BEF = 1;
  }
  v7 = PurchaseShopCheckWarningDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PurchaseShopCheckWarningDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseShopCheckWarningDialog___c_TypeInfo);
    v7 = PurchaseShopCheckWarningDialog___c_TypeInfo;
  }
  _9__22_0 = (System_Action_object__o *)v7->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PurchaseShopCheckWarningDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__22_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__22_0, v10, Method_PurchaseShopCheckWarningDialog___c__ClearItemList_b__22_0__, 0LL);
    static_fields = PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Action_GameObject__o *)_9__22_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v12, v13);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__22_0,
          (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v14 = this->fields.objectList) == 0LL) )
  {
    sub_1BDBAD4(v7, method);
  }
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
}


void __fastcall PurchaseShopCheckWarningDialog__Close(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B40BF2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_PurchaseShopCheckWarningDialog_Init__, v3);
    byte_4B40BF2 = 1;
  }
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PurchaseShopCheckWarningDialog_Init__, 0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall PurchaseShopCheckWarningDialog__CreateItemList(
        PurchaseShopCheckWarningDialog_o *this,
        System_Collections_Generic_Dictionary_int__int__o *itemList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Master_object; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t key_high; // x23^4
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *itemIconPrefab; // x24
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x22
  __int64 transform; // x0
  __int64 v28; // x1
  UnityEngine_Transform_o *v29; // x24
  UnityEngine_Transform_o *v30; // x0
  __int64 v31; // x1
  Il2CppObject *Component_object; // x0
  __int64 v33; // x1
  ItemIconComponent_o *v34; // x24
  __int64 v35; // x1
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_List_object__o *objectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B40BF0 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, itemList);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v10);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v11);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___, v12);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160024, v16);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v17);
    byte_4B40BF0 = 1;
  }
  memset(&v49, 0, 32);
  *(_QWORD *)&v48.fields._getEnumeratorRetType = 0LL;
  if ( itemList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      &v48,
      itemList,
      (const MethodInfo_3332C40 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    *(_OWORD *)&v49.fields._dictionary = *(_OWORD *)&v48.fields._dictionary;
    v49.fields._current = v48.fields._current;
    while ( 1 )
    {
      v19 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v49,
              (const MethodInfo_348C11C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
      if ( !v19 )
        break;
      if ( !Master_object )
        sub_1BDBAD4(v19, v20);
      key_high = HIDWORD(v49.fields._current.fields.key);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (Il2CppObject **)&v48.fields._getEnumeratorRetType,
             (int32_t)v49.fields._current.fields.key,
             (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v24 = UnityEngine_Object__Instantiate_object__51108816(
                itemIconPrefab,
                listRoot,
                (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
        v26 = (UnityEngine_GameObject_o *)v24;
        if ( !v24 )
          sub_1BDBAD4(0LL, v25);
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
        v29 = (UnityEngine_Transform_o *)transform;
        if ( !byte_4B3E911 )
        {
          transform = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v28);
          byte_4B3E911 = 1;
        }
        if ( !v29 )
          sub_1BDBAD4(transform, v28);
        UnityEngine_Transform__set_localPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        v30 = UnityEngine_GameObject__get_transform(v26, 0LL);
        if ( !v30 )
          sub_1BDBAD4(0LL, v31);
        v50.fields.x = this->fields.ItemIconScale;
        v50.fields.y = v50.fields.x;
        v50.fields.z = v50.fields.x;
        UnityEngine_Transform__set_localScale(v30, v50, 0LL);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v26,
                             (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        v34 = (ItemIconComponent_o *)Component_object;
        if ( !Component_object )
          sub_1BDBAD4(0LL, v33);
        ItemIconComponent__SetItem_39931520(
          (ItemIconComponent_o *)Component_object,
          *(ItemEntity_o **)&v48.fields._getEnumeratorRetType,
          key_high,
          1,
          0LL);
        ItemIconComponent__SetCondensedScale(v34, this->fields.CounterLabelMaxWidth, 0LL);
        UnityEngine_GameObject__SetActive(v26, 1, 0LL);
        v36 = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !v36 )
          sub_1BDBAD4(0LL, v35);
        gameObject = UnityEngine_Component__get_gameObject(v36, 0LL);
        v38 = GameObjectExtensions__SafeGetComponent_object_(
                gameObject,
                (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !v38 )
          sub_1BDBAD4(0LL, v39);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v38->klass->vtable[8].method)(
          v38,
          v38->klass->vtable[9].methodPtr);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        if ( !objectList )
          sub_1BDBAD4(0LL, v40);
        items = objectList->fields._items;
        v45 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++objectList->fields._version;
        if ( !items )
          sub_1BDBAD4(objectList, v40);
        size = objectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)v26,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v26;
          sub_1BDB81C((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v26, v41, v42);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v49,
      (const MethodInfo_348C21C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  }
}


void __fastcall PurchaseShopCheckWarningDialog__Init(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  const MethodInfo *v6; // x1
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B40BED & 1) == 0 )
  {
    sub_1BDB878(&UIProgressBar_OnDragFinished_TypeInfo, method);
    sub_1BDB878(&Method_PurchaseShopCheckWarningDialog_OnSliderDragFinished__, v3);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B40BED = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !titleLabel )
    goto LABEL_15;
  ((void (__fastcall *)(UILabel_o *, _QWORD, Il2CppMethodPointer, float, float))titleLabel->klass->vtable._9_CalculateFinalAlpha.method)(
    titleLabel,
    0LL,
    titleLabel->klass->vtable._10_get_localCorners.methodPtr,
    0.0,
    0.0);
  titleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !titleLabel )
    goto LABEL_15;
  ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))titleLabel->klass->vtable._8_set_alpha.method)(
    titleLabel,
    1LL,
    titleLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr);
  titleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !titleLabel )
    goto LABEL_15;
  UIScrollView__UpdatePosition((UIScrollView_o *)titleLabel, 0LL);
  PurchaseShopCheckWarningDialog__ClearItemList(this, v6);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v12, 0LL);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_15;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0LL);
  checkSlider = this->fields.checkSlider;
  v8 = (UIProgressBar_OnDragFinished_o *)sub_1BDBAC4(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v8,
    (Il2CppObject *)this,
    Method_PurchaseShopCheckWarningDialog_OnSliderDragFinished__,
    0LL);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v8,
        sub_1BDB81C((CGThumbnailListItem_o *)&checkSlider->fields.onDragFinished, (int32_t)v8, v9, v10),
        PurchaseShopCheckWarningDialog__SetSlider(this, 0, v11),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_1BDBAD4(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PurchaseShopCheckWarningDialog__OnClickCancel(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B40BF4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_PurchaseShopCheckWarningDialog_OnClickCancel__, v3);
    sub_1BDB878(&Method_PurchaseShopCheckWarningDialog__OnClickCancel_b__27_0__, v4);
    byte_4B40BF4 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_PurchaseShopCheckWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PurchaseShopCheckWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_PurchaseShopCheckWarningDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PurchaseShopCheckWarningDialog__OnClickCancel_b__27_0__, 0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall PurchaseShopCheckWarningDialog__OnClickDecide(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_4B40BF3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_PurchaseShopCheckWarningDialog_OnClickDecide__, v3);
    sub_1BDB878(&Method_PurchaseShopCheckWarningDialog__OnClickDecide_b__26_0__, v4);
    byte_4B40BF3 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1BDBAD4(0LL, method);
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v7 = Method_PurchaseShopCheckWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PurchaseShopCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_PurchaseShopCheckWarningDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    if ( value >= 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
      v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PurchaseShopCheckWarningDialog__OnClickDecide_b__26_0__,
        0LL);
      BaseDialog__SafeClose((BaseDialog_o *)this, v9, 0LL);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
    }
  }
}


void __fastcall PurchaseShopCheckWarningDialog__OnEnable(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B40BF5 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4B40BF5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43873512(transform, (System_String_o *)StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall PurchaseShopCheckWarningDialog__OnSliderDragFinished(
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
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1BDBAD4(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  PurchaseShopCheckWarningDialog__SetSlider(this, v7, v8);
}


void __fastcall PurchaseShopCheckWarningDialog__Open(
        PurchaseShopCheckWarningDialog_o *this,
        ShopEntity_o *shop,
        System_Collections_Generic_Dictionary_int__int__o *itemList,
        PurchaseShopCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UILabel_o *titleLabel; // x22
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *warningLabel; // x22
  UILabel_o *reInforeceLabel; // x21
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v23; // x2

  if ( (byte_4B40BF1 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, shop);
    sub_1BDB878(&StringLiteral_10492/*"PURCHASE_SHOP18_CHECK_DIALOG_TITLE"*/, v9);
    sub_1BDB878(&StringLiteral_10493/*"PURCHASE_SHOP18_CHECK_DIALOG_WARNING_MSG"*/, v10);
    sub_1BDB878(&StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, v11);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_1BDB878(&StringLiteral_10491/*"PURCHASE_SHOP18_CHECK_DIALOG_SLIDER_MSG"*/, v13);
    byte_4B40BF1 = 1;
  }
  PurchaseShopCheckWarningDialog__Init(this, (const MethodInfo *)shop);
  this->fields.closeFunc = closeCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v14, v15);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10492/*"PURCHASE_SHOP18_CHECK_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, v17, 0LL);
  warningLabel = this->fields.warningLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10493/*"PURCHASE_SHOP18_CHECK_DIALOG_WARNING_MSG"*/, 0LL);
  if ( !shop )
    goto LABEL_12;
  v17 = System_String__Format(v17, (Il2CppObject *)shop->fields.name, 0LL);
  if ( !warningLabel )
    goto LABEL_12;
  UILabel__set_text(warningLabel, v17, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10491/*"PURCHASE_SHOP18_CHECK_DIALOG_SLIDER_MSG"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v17, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v17, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_12:
    sub_1BDBAD4(v17, v18);
  }
  UILabel__set_text(cancelButtonLabel, v17, 0LL);
  PurchaseShopCheckWarningDialog__CreateItemList(this, itemList, v23);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseShopCheckWarningDialog__SetSlider(
        PurchaseShopCheckWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *sliderSprite; // x0
  System_String_o **v7; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v12; // x1

  if ( (byte_4B40BEE & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20590/*"img_slider_thumb_locked"*/, sliderOn);
    sub_1BDB878(&StringLiteral_20589/*"img_slider_thumb"*/, v5);
    byte_4B40BEE = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v7 = (System_String_o **)&StringLiteral_20589/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v7 = (System_String_o **)&StringLiteral_20590/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v7, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( !sliderOn )
  {
    r = this->fields.DisableColor.fields.r;
    g = this->fields.DisableColor.fields.g;
    b = this->fields.DisableColor.fields.b;
    a = this->fields.DisableColor.fields.a;
  }
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL)
    || (!sliderOn ? (v12 = 3LL) : (v12 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v12,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1BDBAD4(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}


void __fastcall PurchaseShopCheckWarningDialog___OnClickCancel_b__27_0(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PurchaseShopCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  PurchaseShopCheckWarningDialog__Init(this, method);
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1BDBAD4(v3, v4);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    0LL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


void __fastcall PurchaseShopCheckWarningDialog___OnClickDecide_b__26_0(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PurchaseShopCheckWarningDialog_ClickDelegate_o *closeFunc; // x8

  PurchaseShopCheckWarningDialog__Init(this, method);
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1BDBAD4(v3, v4);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseShopCheckWarningDialog_ClickDelegate___ctor(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A207B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A20768;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PurchaseShopCheckWarningDialog_ClickDelegate__BeginInvoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B40BF7 & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, isDecide);
    byte_4B40BF7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall PurchaseShopCheckWarningDialog_ClickDelegate__EndInvoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall PurchaseShopCheckWarningDialog_ClickDelegate__Invoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PurchaseShopCheckWarningDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B40BF8 & 1) == 0 )
  {
    sub_1BDB878(&PurchaseShopCheckWarningDialog___c_TypeInfo, v1);
    byte_4B40BF8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(PurchaseShopCheckWarningDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields->__9 = (struct PurchaseShopCheckWarningDialog___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall PurchaseShopCheckWarningDialog___c___ctor(
        PurchaseShopCheckWarningDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseShopCheckWarningDialog___c___ClearItemList_b__22_0(
        PurchaseShopCheckWarningDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4B40BF9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, obj);
    byte_4B40BF9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)obj, 0LL);
  }
}