void PurchaseShopCheckWarningDialog___ctor(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
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

  if ( (byte_593454E & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_593454E = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F4CCCCDLL;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_E93440;
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


void PurchaseShopCheckWarningDialog__ClearItemList(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseShopCheckWarningDialog___c_c *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  struct PurchaseShopCheckWarningDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__22_0; // x21
  Il2CppObject *v8; // x22
  struct PurchaseShopCheckWarningDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_GameObject__o *v16; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_5934547 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_PurchaseShopCheckWarningDialog___c__ClearItemList_b__22_0__);
    sub_21FFC50(&PurchaseShopCheckWarningDialog___c_TypeInfo);
    byte_5934547 = 1;
  }
  v4 = PurchaseShopCheckWarningDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&PurchaseShopCheckWarningDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseShopCheckWarningDialog___c_TypeInfo, method, v2);
    v4 = PurchaseShopCheckWarningDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__22_0 = (System_Action_object__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__22_0, v8, Method_PurchaseShopCheckWarningDialog___c__ClearItemList_b__22_0__, 0);
    v9 = PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields;
    v9->__9__22_0 = (struct System_Action_GameObject__o *)_9__22_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__22_0, (int32_t)_9__22_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__22_0,
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


void PurchaseShopCheckWarningDialog__Close(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_593454A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PurchaseShopCheckWarningDialog_Init__);
    byte_593454A = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *itemIconPrefab; // x22
  UnityEngine_Transform_o *listRoot; // x24
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x22
  __int64 transform; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x24
  UnityEngine_Transform_o *v19; // x0
  __int64 v20; // x1
  Il2CppObject *Component_object; // x0
  __int64 v22; // x1
  ItemIconComponent_o *v23; // x24
  __int64 v24; // x1
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_object__o *objectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5934548 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
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
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934548 = 1;
  }
  entity = 0;
  memset(&v43, 0, sizeof(v43));
  if ( itemList )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, itemList, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
    System_Collections_Generic_Dictionary_int__long___GetEnumerator(
      &v41,
      itemList,
      (const MethodInfo_3F65DEC *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    v43 = v41;
    v41.fields._dictionary = 0;
    *(_QWORD *)&v41.fields._version = &v43;
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
             &v43,
             (const MethodInfo_4124104 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
      if ( !v6 )
        break;
      if ( !Master_object )
        sub_21FFECC(v6, v7);
      value = v43.fields._current.fields.value;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             (int32_t)v43.fields._current.fields.key,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      {
        listRoot = this->fields.listRoot;
        itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
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
        v44.fields.x = this->fields.ItemIconScale;
        v44.fields.y = v44.fields.x;
        v44.fields.z = v44.fields.x;
        UnityEngine_Transform__set_localScale(v19, v44, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             v15,
                             (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        v23 = (ItemIconComponent_o *)Component_object;
        if ( !Component_object )
          sub_21FFECC(0, v22);
        ItemIconComponent__SetItem_47933276(
          (ItemIconComponent_o *)Component_object,
          (ItemEntity_o *)entity,
          (int64_t)value,
          1,
          0);
        ItemIconComponent__SetCondensedScale(v23, this->fields.CounterLabelMaxWidth, 0);
        UnityEngine_GameObject__SetActive(v15, 1, 0);
        v25 = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !v25 )
          sub_21FFECC(0, v24);
        gameObject = UnityEngine_Component__get_gameObject(v25, 0);
        v27 = GameObjectExtensions__SafeGetComponent_object_(
                gameObject,
                (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
        if ( !v27 )
          sub_21FFECC(0, v28);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v27->klass->vtable[8].methodPtr)(
          v27,
          v27->klass->vtable[8].method);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        if ( !objectList
          || (items = objectList->fields._items,
              v38 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++objectList->fields._version,
              !items) )
        {
          sub_21FFECC(objectList, v29);
        }
        size = objectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v15, v30, v31, v32, v33, v34, v35);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
      &v43,
      (const MethodInfo_412421C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  }
}


void PurchaseShopCheckWarningDialog__Init(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934545 & 1) == 0 )
  {
    sub_21FFC50(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_21FFC50(&Method_PurchaseShopCheckWarningDialog_OnSliderDragFinished__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934545 = 1;
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
  ((void (__fastcall *)(UILabel_o *, _QWORD, const MethodInfo *, double, double))titleLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr)(
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
  v6 = (UIProgressBar_OnDragFinished_o *)sub_21FFEBC(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PurchaseShopCheckWarningDialog_OnSliderDragFinished__,
    0);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v6,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&checkSlider->fields.onDragFinished,
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
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PurchaseShopCheckWarningDialog__OnClickCancel(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_593454C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PurchaseShopCheckWarningDialog_OnClickCancel__);
    sub_21FFC50(&Method_PurchaseShopCheckWarningDialog__OnClickCancel_b__27_0__);
    byte_593454C = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PurchaseShopCheckWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PurchaseShopCheckWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PurchaseShopCheckWarningDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PurchaseShopCheckWarningDialog__OnClickCancel_b__27_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PurchaseShopCheckWarningDialog__OnClickDecide(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_o *v8; // x20

  if ( (byte_593454B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PurchaseShopCheckWarningDialog_OnClickDecide__);
    sub_21FFC50(&Method_PurchaseShopCheckWarningDialog__OnClickDecide_b__26_0__);
    byte_593454B = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_21FFECC(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_PurchaseShopCheckWarningDialog_OnClickDecide__;
    if ( value >= 1.0 )
    {
      if ( (*((_BYTE *)Method_PurchaseShopCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_PurchaseShopCheckWarningDialog_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_PurchaseShopCheckWarningDialog__OnClickDecide_b__26_0__, 0);
      BaseDialog__SafeClose((BaseDialog_o *)this, v8, 0);
    }
    else
    {
      if ( (*((_BYTE *)Method_PurchaseShopCheckWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_PurchaseShopCheckWarningDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void PurchaseShopCheckWarningDialog__OnEnable(PurchaseShopCheckWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593454D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_593454D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void PurchaseShopCheckWarningDialog__OnSliderDragFinished(
        PurchaseShopCheckWarningDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  float v5; // s1
  bool v6; // w20
  const MethodInfo *v7; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_6;
  value = UIProgressBar__get_value(checkSlider, 0);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( value < 0.9 )
  {
    v5 = 0.0;
    if ( checkSlider )
      goto LABEL_4;
LABEL_6:
    sub_21FFECC(checkSlider, method);
  }
  v5 = 1.0;
  if ( !checkSlider )
    goto LABEL_6;
LABEL_4:
  v6 = value >= 0.9;
  UIProgressBar__set_value(checkSlider, v5, 0);
  PurchaseShopCheckWarningDialog__SetSlider(this, v6, v7);
}


void PurchaseShopCheckWarningDialog__Open(
        PurchaseShopCheckWarningDialog_o *this,
        ShopEntity_o *shop,
        System_Collections_Generic_Dictionary_int__long__o *itemList,
        PurchaseShopCheckWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *titleLabel; // x22
  System_String_o *v18; // x0
  __int64 v19; // x1
  UILabel_o *warningLabel; // x22
  UILabel_o *reInforeceLabel; // x21
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v24; // x2

  if ( (byte_5934549 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10913/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_SLIDER_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_10915/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_WARNING_MSG"*/);
    sub_21FFC50(&StringLiteral_10914/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_TITLE"*/);
    byte_5934549 = 1;
  }
  PurchaseShopCheckWarningDialog__Init(this, (const MethodInfo *)shop);
  this->fields.closeFunc = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10914/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, v18, 0);
  warningLabel = this->fields.warningLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10915/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_WARNING_MSG"*/, 0);
  if ( !shop )
    goto LABEL_12;
  v18 = System_String__Format(v18, (Il2CppObject *)shop->fields.name, 0);
  if ( !warningLabel )
    goto LABEL_12;
  UILabel__set_text(warningLabel, v18, 0);
  reInforeceLabel = this->fields.reInforeceLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10913/*"PURCHASE_CLASS_BOARD_RESET_CHECK_DIALOG_SLIDER_MSG"*/, 0);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v18, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v18, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_12:
    sub_21FFECC(v18, v19);
  }
  UILabel__set_text(cancelButtonLabel, v18, 0);
  PurchaseShopCheckWarningDialog__CreateItemList(this, itemList, v24);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseShopCheckWarningDialog__SetSlider(
        PurchaseShopCheckWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  __int64 *v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  if ( (byte_5934546 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21535/*"img_slider_thumb_locked"*/);
    sub_21FFC50(&StringLiteral_21534/*"img_slider_thumb"*/);
    byte_5934546 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_12;
  v6 = &StringLiteral_21534/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = &StringLiteral_21535/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, (System_String_o *)*v6, 0);
  a = 1.0;
  b = 1.0;
  sliderSprite = (UISprite_o *)this->fields.decideButton;
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
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0)
    || (sliderSprite->klass->vtable._14_OnEnable.methodPtr(),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_12:
    sub_21FFECC(sliderSprite, sliderOn);
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
    sub_21FFECC(v3, v4);
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
    sub_21FFECC(v3, v4);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF2ACC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF2A84;
}


System_IAsyncResult_o *PurchaseShopCheckWarningDialog_ClickDelegate__BeginInvoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void PurchaseShopCheckWarningDialog_ClickDelegate__EndInvoke(
        PurchaseShopCheckWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593454F & 1) == 0 )
  {
    sub_21FFC50(&PurchaseShopCheckWarningDialog___c_TypeInfo);
    byte_593454F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PurchaseShopCheckWarningDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields->__9 = (struct PurchaseShopCheckWarningDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseShopCheckWarningDialog___c_TypeInfo->static_fields,
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
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5934550 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934550 = 1;
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