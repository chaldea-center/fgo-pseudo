void UIPopupList___ctor(UIPopupList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C3C090 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_9958/*"OnSelectionChange"*/);
    byte_4C3C090 = 1;
  }
  this->fields.fontSize = 16;
  this->fields.alignment = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.items = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.items, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_object___ctor__);
  this->fields.itemData = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemData, (int32_t)v6, v7, v8);
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)&this->fields.padding.fields.x = xmmword_C0C5C0;
  *(_OWORD *)&this->fields.textColor.fields.b = _Q0;
  *(_OWORD *)&this->fields.backgroundColor.fields.b = xmmword_C0C5D0;
  *(_QWORD *)&this->fields.highlightColor.fields.b = 0x3F8000003F169697LL;
  this->fields.isAnimated = 1;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onChange, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mLabelList = (struct System_Collections_Generic_List_UILabel__o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mLabelList, (int32_t)v17, v18, v19);
  v20 = StringLiteral_9958/*"OnSelectionChange"*/;
  this->fields.functionName = (struct System_String_o *)StringLiteral_9958/*"OnSelectionChange"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.functionName, v20, v21, v22);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIPopupList__AddItem(UIPopupList_o *this, System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *items; // x0
  struct System_Object_array *v7; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C3C07F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_object__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    byte_4C3C07F = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_13;
  v7 = items->fields._items;
  v8 = Method_System_Collections_Generic_List_string__Add__;
  ++items->fields._version;
  if ( !v7 )
    goto LABEL_13;
  size = items->fields._size;
  if ( (unsigned int)size >= LODWORD(v7->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      (Il2CppObject *)text,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &v7->obj.klass + size;
    items->fields._size = size + 1;
    v10[4] = (Il2CppClass *)text;
    sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 4), (int32_t)text, (int32_t)method, v3);
  }
  items = this->fields.itemData;
  if ( !items
    || (v13 = items->fields._items,
        v14 = Method_System_Collections_Generic_List_object__Add__,
        ++items->fields._version,
        !v13) )
  {
LABEL_13:
    sub_1C32E7C(items);
  }
  v15 = items->fields._size;
  if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      0,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &v13->obj.klass + v15;
    items->fields._size = v15 + 1;
    v16[4] = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), 0, v11, v12);
  }
}


void UIPopupList__AddItem_49153572(
        UIPopupList_o *this,
        System_String_o *text,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *items; // x0
  struct System_Object_array *v8; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4C3C080 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_object__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    byte_4C3C080 = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_13;
  v8 = items->fields._items;
  v9 = Method_System_Collections_Generic_List_string__Add__;
  ++items->fields._version;
  if ( !v8 )
    goto LABEL_13;
  size = items->fields._size;
  if ( (unsigned int)size >= LODWORD(v8->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      (Il2CppObject *)text,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &v8->obj.klass + size;
    items->fields._size = size + 1;
    v11[4] = (Il2CppClass *)text;
    sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 4), (int32_t)text, (int32_t)data, method);
  }
  items = this->fields.itemData;
  if ( !items
    || (v14 = items->fields._items,
        v15 = Method_System_Collections_Generic_List_object__Add__,
        ++items->fields._version,
        !v14) )
  {
LABEL_13:
    sub_1C32E7C(items);
  }
  v16 = items->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      data,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->obj.klass + v16;
    items->fields._size = v16 + 1;
    v17[4] = (Il2CppClass *)data;
    sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)data, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPopupList__Animate(
        UIPopupList_o *this,
        UIWidget_o *widget,
        bool placeAbove,
        float bottom,
        const MethodInfo *method)
{
  UIPopupList_o *v8; // x0
  const MethodInfo *v9; // x3

  UIPopupList__AnimateColor(this, widget, (const MethodInfo *)placeAbove);
  UIPopupList__AnimatePosition(v8, widget, placeAbove, bottom, v9);
}


void UIPopupList__AnimateColor(UIPopupList_o *this, UIWidget_o *widget, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( !widget )
    goto LABEL_4;
  r = widget->fields.mColor.fields.r;
  g = widget->fields.mColor.fields.g;
  b = widget->fields.mColor.fields.b;
  a = widget->fields.mColor.fields.a;
  v9.fields.a = 0.0;
  v9.fields.r = r;
  v9.fields.g = g;
  v9.fields.b = b;
  UIWidget__set_color(widget, v9, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)widget, 0);
  v10.fields.r = r;
  v10.fields.g = g;
  v10.fields.b = b;
  v10.fields.a = a;
  this = (UIPopupList_o *)TweenColor__Begin(gameObject, 0.15, v10, 0);
  if ( !this )
LABEL_4:
    sub_1C32E7C(this);
  *(_DWORD *)&this->fields.isAligument = 2;
}


// local variable allocation has failed, the output may be wrong!
void UIPopupList__AnimatePosition(
        UIPopupList_o *this,
        UIWidget_o *widget,
        bool placeAbove,
        float bottom,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s10
  float z; // s11
  float v11; // s1 OVERLAPPED
  float v12; // s0
  float v13; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( !widget )
    goto LABEL_9;
  this = (UIPopupList_o *)UIRect__get_cachedTransform((UIRect_o *)widget, 0);
  if ( !this )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  this = (UIPopupList_o *)UIRect__get_cachedTransform((UIRect_o *)widget, 0);
  if ( !this )
    goto LABEL_9;
  v11 = placeAbove ? bottom : 0.0;
  v12 = x;
  v13 = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)(&v11 - 1), 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)widget, 0);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  this = (UIPopupList_o *)TweenPosition__Begin(gameObject, 0.15, v16, 0);
  if ( !this )
LABEL_9:
    sub_1C32E7C(this);
  *(_DWORD *)&this->fields.isAligument = 2;
}


void UIPopupList__AnimateScale(
        UIPopupList_o *this,
        UIWidget_o *widget,
        bool placeAbove,
        float bottom,
        const MethodInfo *method)
{
  UIPopupList_o *v6; // x23
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Transform_o *cachedTransform; // x22
  const MethodInfo *v10; // x1
  int32_t activeFontSize; // w24
  const MethodInfo *v12; // x1
  float activeFontScale; // s0
  float v14; // s12
  float x; // s9
  float y; // s10
  float z; // s11
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( !widget )
    goto LABEL_10;
  v6 = this;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)widget, 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)widget, 0);
  activeFontSize = UIPopupList__get_activeFontSize(v6, v10);
  activeFontScale = UIPopupList__get_activeFontScale(v6, v12);
  if ( !cachedTransform )
    goto LABEL_10;
  v14 = (float)(activeFontScale * (float)activeFontSize) + (float)(v6->fields.mBgBorder + v6->fields.mBgBorder);
  v18.fields.y = v14 / (float)widget->fields.mHeight;
  v18.fields.x = 1.0;
  v18.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(cachedTransform, v18, 0);
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  this = (UIPopupList_o *)TweenScale__Begin(gameObject, 0.15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !this )
    goto LABEL_10;
  *(_DWORD *)&this->fields.isAligument = 2;
  if ( !placeAbove )
    return;
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  localPosition.fields.y = v14 + (float)(localPosition.fields.y - (float)widget->fields.mHeight);
  z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition(cachedTransform, localPosition, 0);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  this = (UIPopupList_o *)TweenPosition__Begin(gameObject, 0.15, v20, 0);
  if ( !this )
LABEL_10:
    sub_1C32E7C(this);
  *(_DWORD *)&this->fields.isAligument = 2;
}


void UIPopupList__Clear(UIPopupList_o *this, const MethodInfo *method)
{
  UIPopupList_o *v2; // x19
  struct System_Collections_Generic_List_string__o *items; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_object__o *itemData; // x8
  int32_t v7; // w2
  int v8; // w9

  v2 = this;
  if ( (byte_4C3C07E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_object__Clear__);
    this = (UIPopupList_o *)sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4C3C07E = 1;
  }
  items = v2->fields.items;
  if ( !items )
    goto LABEL_10;
  size = items->fields._size;
  v5 = items->fields._version + 1;
  items->fields._size = 0;
  items->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)items->fields._items, 0, size, 0);
  itemData = v2->fields.itemData;
  if ( !itemData )
LABEL_10:
    sub_1C32E7C(this);
  v7 = itemData->fields._size;
  v8 = itemData->fields._version + 1;
  itemData->fields._size = 0;
  itemData->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)itemData->fields._items, 0, v7, 0);
}


void UIPopupList__Close(UIPopupList_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_mChild; // x20
  UnityEngine_Object_o *mChild; // x21
  void *klass; // x0
  struct System_Collections_Generic_List_UILabel__o *mLabelList; // x8
  const MethodInfo *size; // x2
  int v10; // w9
  __int64 v11; // x8
  _QWORD *v12; // x21
  int v13; // w24
  int v14; // w25
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x8
  _QWORD *v20; // x21
  int v21; // w24
  int v22; // w25
  UnityEngine_Object_o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *v26; // x21
  struct UISprite_o **p_mHighlight; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_Color_o v32; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C3C08C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4512/*"CloseIfUnselected"*/);
    byte_4C3C08C = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_71210140(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4512/*"CloseIfUnselected"*/,
    0);
  this->fields.mSelection = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSelection, 0, v3, v4);
  p_mChild = (CGThumbnailListItem_o *)&this->fields.mChild;
  mChild = (UnityEngine_Object_o *)this->fields.mChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (void *)UnityEngine_Object__op_Inequality(mChild, 0, 0);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    mLabelList = this->fields.mLabelList;
    if ( !mLabelList )
      goto LABEL_35;
    size = (const MethodInfo *)(unsigned int)mLabelList->fields._size;
    v10 = mLabelList->fields._version + 1;
    mLabelList->fields._size = 0;
    mLabelList->fields._version = v10;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)mLabelList->fields._items, 0, (int32_t)size, 0);
    UIPopupList__set_handleEvents(this, 0, size);
    if ( this->fields.isAnimated )
    {
      klass = p_mChild->klass;
      if ( !p_mChild->klass )
        goto LABEL_35;
      klass = UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                (UnityEngine_GameObject_o *)klass,
                (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !klass )
        goto LABEL_35;
      v11 = *((_QWORD *)klass + 3);
      v12 = klass;
      v13 = v11 - 1;
      if ( (int)v11 >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          klass = (void *)v12[v14 + 4];
          if ( !klass )
            break;
          v15 = *((float *)klass + 37);
          v16 = *((float *)klass + 38);
          v17 = *((float *)klass + 39);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
          v32.fields.a = 0.0;
          v32.fields.r = v15;
          v32.fields.g = v16;
          v32.fields.b = v17;
          klass = TweenColor__Begin(gameObject, 0.15, v32, 0);
          if ( !klass )
            break;
          *((_DWORD *)klass + 8) = 2;
          if ( v13 == v14 )
            goto LABEL_20;
          if ( (unsigned int)++v14 >= *((_DWORD *)v12 + 6) )
LABEL_27:
            sub_1C32E84(klass);
        }
LABEL_35:
        sub_1C32E7C(klass);
      }
LABEL_20:
      klass = p_mChild->klass;
      if ( !p_mChild->klass )
        goto LABEL_35;
      klass = UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                (UnityEngine_GameObject_o *)klass,
                (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
      if ( !klass )
        goto LABEL_35;
      v19 = *((_QWORD *)klass + 3);
      v20 = klass;
      v21 = v19 - 1;
      if ( (int)v19 >= 1 )
      {
        v22 = 0;
        while ( 1 )
        {
          klass = (void *)v20[v22 + 4];
          if ( !klass )
            goto LABEL_35;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)klass, 0, 0);
          if ( v21 == v22 )
            break;
          if ( (unsigned int)++v22 >= *((_DWORD *)v20 + 6) )
            goto LABEL_27;
        }
      }
      v23 = (UnityEngine_Object_o *)p_mChild->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy(v23, 0.15, 0);
    }
    else
    {
      v26 = (UnityEngine_Object_o *)p_mChild->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v26, 0);
    }
    this->fields.mBackground = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBackground, 0, v24, v25);
    this->fields.mHighlight = 0;
    p_mHighlight = &this->fields.mHighlight;
    sub_1C32BC4((CGThumbnailListItem_o *)p_mHighlight, 0, v28, v29);
    *(p_mHighlight - 2) = 0;
    sub_1C32BC4(p_mChild, 0, v30, v31);
  }
}


System_Collections_IEnumerator_o *UIPopupList__CloseIfUnselected(UIPopupList_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3C08E & 1) == 0 )
  {
    sub_1C32C20(&UIPopupList__CloseIfUnselected_d__93_TypeInfo);
    byte_4C3C08E = 1;
  }
  v3 = sub_1C32E6C(UIPopupList__CloseIfUnselected_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


UnityEngine_Vector3_o UIPopupList__GetHighlightPosition(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHighlightedLabel; // x20
  UnityEngine_Object_o *mHighlight; // x20
  UISprite_o *atlas; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v7; // x20
  float pixelSize; // s0
  int borderLeft; // s9
  int borderTop; // s10
  float v11; // s8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C086 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C086 = 1;
  }
  mHighlightedLabel = (UnityEngine_Object_o *)this->fields.mHighlightedLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mHighlightedLabel, 0, 0) )
  {
    mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(mHighlight, 0, 0) )
    {
      atlas = this->fields.mHighlight;
      if ( !atlas )
        goto LABEL_18;
      AtlasSprite = UISprite__GetAtlasSprite(atlas, 0);
      if ( AtlasSprite )
      {
        v7 = AtlasSprite;
        atlas = (UISprite_o *)this->fields.atlas;
        if ( atlas )
        {
          pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)atlas, 0);
          atlas = (UISprite_o *)this->fields.mHighlightedLabel;
          if ( atlas )
          {
            borderLeft = v7->fields.borderLeft;
            borderTop = v7->fields.borderTop;
            v11 = pixelSize;
            atlas = (UISprite_o *)UIRect__get_cachedTransform((UIRect_o *)atlas, 0);
            if ( atlas )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)atlas, 0);
              y = (float)(v11 * (float)borderTop) + localPosition.fields.y;
              x = localPosition.fields.x - (float)(v11 * (float)borderLeft);
              z = localPosition.fields.z + 1.0;
              goto LABEL_19;
            }
          }
        }
LABEL_18:
        sub_1C32E7C(atlas);
      }
    }
  }
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
LABEL_19:
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void UIPopupList__Highlight(UIPopupList_o *this, UILabel_o *lbl, bool instant, const MethodInfo *method)
{
  UnityEngine_Object_o *mHighlight; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UISprite_o *cachedTransform; // x0
  const MethodInfo *v11; // x1
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o HighlightPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3C085 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_15197/*"UpdateTweenPosition"*/);
    byte_4C3C085 = 1;
  }
  mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mHighlight, 0, 0) )
  {
    this->fields.mHighlightedLabel = lbl;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mHighlightedLabel, (int32_t)lbl, v8, v9);
    cachedTransform = this->fields.mHighlight;
    if ( cachedTransform )
    {
      if ( !UISprite__GetAtlasSprite(cachedTransform, 0) )
        return;
      HighlightPosition = UIPopupList__GetHighlightPosition(this, v11);
      x = HighlightPosition.fields.x;
      y = HighlightPosition.fields.y;
      z = HighlightPosition.fields.z;
      if ( instant || !this->fields.isAnimated )
      {
        cachedTransform = this->fields.mHighlight;
        if ( cachedTransform )
        {
          cachedTransform = (UISprite_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
          if ( cachedTransform )
          {
            v17.fields.y = y;
            v17.fields.z = z;
            v17.fields.x = x;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v17, 0);
            return;
          }
        }
      }
      else
      {
        cachedTransform = this->fields.mHighlight;
        if ( cachedTransform )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cachedTransform, 0);
          v18.fields.x = x;
          v18.fields.y = y;
          v18.fields.z = z;
          cachedTransform = (UISprite_o *)TweenPosition__Begin(gameObject, 0.1, v18, 0);
          if ( cachedTransform )
          {
            LODWORD(cachedTransform->fields.leftAnchor) = 2;
            if ( !this->fields.mTweening )
            {
              this->fields.mTweening = 1;
              UnityEngine_MonoBehaviour__StartCoroutine(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_15197/*"UpdateTweenPosition"*/,
                0);
            }
            return;
          }
        }
      }
    }
    sub_1C32E7C(cachedTransform);
  }
}


void UIPopupList__OnClick(UIPopupList_o *this, const MethodInfo *method)
{
  int32_t openOn; // w8
  UICamera_c *v4; // x0

  if ( (byte_4C3C08D & 1) == 0 )
  {
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C08D = 1;
  }
  openOn = this->fields.openOn;
  if ( (unsigned int)(openOn - 2) >= 2 )
  {
    if ( openOn != 1 )
      goto LABEL_9;
    v4 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = UICamera_TypeInfo;
    }
    if ( v4->static_fields->currentTouchID == -2 )
LABEL_9:
      UIPopupList__Show(this, method);
  }
}


void UIPopupList__OnDoubleClick(UIPopupList_o *this, const MethodInfo *method)
{
  if ( this->fields.openOn == 2 )
    UIPopupList__Show(this, method);
}


void UIPopupList__OnEnable(UIPopupList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *font; // x20
  struct UIFont_o **p_font; // x20
  UIFont_o *klass; // x0
  struct UnityEngine_Font_o *dynamicFont; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool v16; // w8
  UnityEngine_Object_o *bitmapFont; // x22
  struct UIFont_o *v18; // x1
  UnityEngine_Object_o *v19; // x20
  int32_t defaultSize; // w0
  float textScale; // s8
  float v22; // s9
  float v23; // s9
  double v24; // d8
  double v25; // d0
  double v26; // d0
  double v27; // d1
  int32_t v28; // w8
  double v29; // d1
  CGThumbnailListItem_o *p_trueTypeFont; // x20
  UnityEngine_Object_o *trueTypeFont; // x21
  CGThumbnailListItem_o *p_bitmapFont; // x19
  UnityEngine_Object_o *v33; // x21
  struct UIFont_o *v34; // t1
  UnityEngine_Font_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  double iptr; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3C082 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C082 = 1;
  }
  onChange = this->fields.onChange;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  if ( EventDelegate__IsValid_49205960(onChange, 0) )
  {
    this->fields.eventReceiver = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventReceiver, 0, v4, v5);
    this->fields.functionName = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.functionName, 0, v6, v7);
  }
  font = (UnityEngine_Object_o *)this->fields.font;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(font, 0, 0) )
  {
    p_font = &this->fields.font;
    klass = this->fields.font;
    if ( !klass )
      goto LABEL_56;
    if ( UIFont__get_isDynamic(klass, 0) )
    {
      klass = *p_font;
      if ( !*p_font )
        goto LABEL_56;
      dynamicFont = UIFont__get_dynamicFont(klass, 0);
      this->fields.trueTypeFont = dynamicFont;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.trueTypeFont, (int32_t)dynamicFont, v12, v13);
      klass = this->fields.font;
      if ( !klass )
        goto LABEL_56;
      this->fields.fontStyle = UIFont__get_dynamicFontStyle(klass, 0);
      v16 = 1;
    }
    else
    {
      bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(bitmapFont, 0, 0) )
        goto LABEL_20;
      v18 = *p_font;
      this->fields.bitmapFont = *p_font;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bitmapFont, (int32_t)v18, v14, v15);
      v16 = 0;
    }
    this->fields.mUseDynamicFont = v16;
LABEL_20:
    *p_font = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.font, 0, v14, v15);
  }
  if ( this->fields.textScale != 0.0 )
  {
    v19 = (UnityEngine_Object_o *)this->fields.bitmapFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      v28 = 16;
LABEL_44:
      this->fields.fontSize = v28;
      this->fields.textScale = 0.0;
      goto LABEL_45;
    }
    klass = this->fields.bitmapFont;
    if ( !klass )
      goto LABEL_56;
    defaultSize = UIFont__get_defaultSize(klass, 0);
    textScale = this->fields.textScale;
    v22 = (float)defaultSize;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    v23 = textScale * v22;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v24 = v23;
    v25 = modf(v23, &iptr);
    if ( v23 >= 0.0 )
    {
      if ( v25 == 0.5 )
      {
        v26 = iptr;
        v27 = 1.0;
LABEL_36:
        v29 = v26 + v27;
        if ( ((__int64)v26 & 1) != 0 )
          v26 = v29;
        goto LABEL_41;
      }
      v26 = floor(v24 + 0.5);
    }
    else
    {
      if ( v25 == -0.5 )
      {
        v26 = iptr;
        v27 = -1.0;
        goto LABEL_36;
      }
      v26 = ceil(v24 + -0.5);
    }
LABEL_41:
    if ( v26 == INFINITY )
      v28 = 0x80000000;
    else
      v28 = (int)v26;
    goto LABEL_44;
  }
LABEL_45:
  p_trueTypeFont = (CGThumbnailListItem_o *)&this->fields.trueTypeFont;
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
  {
    v34 = this->fields.bitmapFont;
    p_bitmapFont = (CGThumbnailListItem_o *)&this->fields.bitmapFont;
    v33 = (UnityEngine_Object_o *)v34;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
    {
      klass = (UIFont_o *)p_bitmapFont->klass;
      if ( !p_bitmapFont->klass )
        goto LABEL_56;
      if ( UIFont__get_isDynamic(klass, 0) )
      {
        klass = (UIFont_o *)p_bitmapFont->klass;
        if ( p_bitmapFont->klass )
        {
          v35 = UIFont__get_dynamicFont(klass, 0);
          p_trueTypeFont->klass = (CGThumbnailListItem_c *)v35;
          sub_1C32BC4(p_trueTypeFont, (int32_t)v35, v36, v37);
          p_bitmapFont->klass = 0;
          sub_1C32BC4(p_bitmapFont, 0, v38, v39);
          return;
        }
LABEL_56:
        sub_1C32E7C(klass);
      }
    }
  }
}


// attributes: thunk
void UIPopupList__OnItemClick(UIPopupList_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UIPopupList__Close(this, (const MethodInfo *)go);
}


void UIPopupList__OnItemHover(UIPopupList_o *this, UnityEngine_GameObject_o *go, bool isOver, const MethodInfo *method)
{
  UIPopupList_o *v6; // x19
  Il2CppObject *Component_object; // x1
  const MethodInfo *v8; // x3

  v6 = this;
  if ( (byte_4C3C088 & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4C3C088 = 1;
  }
  if ( isOver )
  {
    if ( !go )
      sub_1C32E7C(this);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    UIPopupList__Highlight(v6, (UILabel_o *)Component_object, 0, v8);
  }
}


void UIPopupList__OnItemPress(
        UIPopupList_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UIPopupList_o *v6; // x19
  Il2CppObject *Component_object; // x1
  const MethodInfo *v8; // x3

  v6 = this;
  if ( (byte_4C3C08A & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4C3C08A = 1;
  }
  if ( isPressed )
  {
    if ( !go )
      sub_1C32E7C(this);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    UIPopupList__Select(v6, (UILabel_o *)Component_object, 1, v8);
  }
}


void UIPopupList__OnKey(UIPopupList_o *this, int32_t key, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *mLabelList; // x0
  int32_t v8; // w0
  const MethodInfo *v9; // x1
  int v10; // w8
  int32_t v11; // w1
  Il2CppObject *Item; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4C3C08B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C08B = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49301984(gameObject, 0) && UIPopupList__get_handleEvents(this, v6) )
    {
      mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
      if ( !mLabelList )
        goto LABEL_23;
      v8 = System_Collections_Generic_List_object___IndexOf(
             mLabelList,
             (Il2CppObject *)this->fields.mHighlightedLabel,
             (const MethodInfo_379945C *)Method_System_Collections_Generic_List_UILabel__IndexOf__);
      if ( v8 == -1 )
        v10 = 0;
      else
        v10 = v8;
      switch ( key )
      {
        case 27:
          UIPopupList__Close(this, v9);
          return;
        case 274:
          mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
          if ( !mLabelList )
            goto LABEL_23;
          v11 = v10 + 1;
          if ( v10 + 1 < mLabelList->fields._size )
            goto LABEL_21;
          break;
        case 273:
          v11 = v10 - 1;
          if ( v10 >= 1 )
          {
            mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
            if ( !mLabelList )
LABEL_23:
              sub_1C32E7C(mLabelList);
LABEL_21:
            Item = System_Collections_Generic_List_object___get_Item(
                     mLabelList,
                     v11,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            UIPopupList__Select(this, (UILabel_o *)Item, 0, v13);
          }
          break;
      }
    }
  }
}


void UIPopupList__OnLocalize(UIPopupList_o *this, const MethodInfo *method)
{
  if ( this->fields.isLocalized )
    UIPopupList__TriggerCallbacks(this, method);
}


// local variable allocation has failed, the output may be wrong!
void UIPopupList__OnSelect(UIPopupList_o *this, bool isSelected, const MethodInfo *method)
{
  if ( !isSelected )
    UIPopupList__Close(this, (const MethodInfo *)isSelected);
}


void UIPopupList__OnValidate(UIPopupList_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UnityEngine_Font_o *trueTypeFont; // x23
  UnityEngine_Object_o *bitmapFont; // x21
  struct UIFont_o **p_bitmapFont; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UnityEngine_Font_o *dynamicFont; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool v20; // w8

  if ( (byte_4C3C083 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C083 = 1;
  }
  trueTypeFont = this->fields.trueTypeFont;
  p_bitmapFont = &this->fields.bitmapFont;
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  this->fields.bitmapFont = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bitmapFont, 0, v2, v3);
  this->fields.trueTypeFont = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.trueTypeFont, 0, v8, v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trueTypeFont, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(bitmapFont, 0, 0) || !this->fields.mUseDynamicFont )
    {
      *p_bitmapFont = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bitmapFont, 0, v10, v11);
LABEL_17:
      this->fields.trueTypeFont = trueTypeFont;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.trueTypeFont, (int32_t)trueTypeFont, v13, v14);
      goto LABEL_18;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
  if ( !v12 )
    goto LABEL_17;
  if ( !bitmapFont )
    sub_1C32E7C(v12);
  if ( !UIFont__get_isDynamic((UIFont_o *)bitmapFont, 0) )
  {
    *p_bitmapFont = (struct UIFont_o *)bitmapFont;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bitmapFont, (int32_t)bitmapFont, v15, v16);
    v20 = 0;
    goto LABEL_19;
  }
  dynamicFont = UIFont__get_dynamicFont((UIFont_o *)bitmapFont, 0);
  this->fields.trueTypeFont = dynamicFont;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.trueTypeFont, (int32_t)dynamicFont, v18, v19);
  this->fields.fontStyle = UIFont__get_dynamicFontStyle((UIFont_o *)bitmapFont, 0);
  this->fields.fontSize = UIFont__get_defaultSize((UIFont_o *)bitmapFont, 0);
LABEL_18:
  v20 = 1;
LABEL_19:
  this->fields.mUseDynamicFont = v20;
}


void UIPopupList__Select(UIPopupList_o *this, UILabel_o *lbl, bool instant, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2
  System_String_c **monitor; // x8
  System_String_o *v10; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x19
  int v13; // w21
  int v14; // w22
  __int64 v15; // x8
  UnityEngine_AudioClip_o *v16; // x20
  float v17; // s8

  if ( (byte_4C3C089 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponents_UIPlaySound___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    byte_4C3C089 = 1;
  }
  UIPopupList__Highlight(this, lbl, instant, method);
  if ( !lbl )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lbl, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
  if ( !gameObject )
    goto LABEL_23;
  monitor = (System_String_c **)gameObject[1].monitor;
  if ( monitor )
    v10 = *monitor == string_TypeInfo ? (System_String_o *)gameObject[1].monitor : 0LL;
  else
    v10 = 0;
  UIPopupList__set_value(this, v10, v8);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponents_object__51201748(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30D46D4 *)Method_UnityEngine_Component_GetComponents_UIPlaySound___);
  if ( !gameObject )
    goto LABEL_23;
  klass = gameObject[1].klass;
  v12 = gameObject;
  v13 = (_DWORD)klass - 1;
  if ( (int)klass >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)&v12[1].monitor + v14);
      if ( !v15 )
        break;
      if ( !*(_DWORD *)(v15 + 40) )
      {
        v16 = *(UnityEngine_AudioClip_o **)(v15 + 32);
        v17 = *(float *)(v15 + 44);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)NGUITools__PlaySound_49300132(v16, v17, 1.0, 0);
      }
      if ( v13 == v14 )
        return;
      if ( (unsigned int)++v14 >= LODWORD(v12[1].klass) )
        sub_1C32E84(gameObject);
    }
LABEL_23:
    sub_1C32E7C(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPopupList__Show(UIPopupList_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  NGUITools_c **v4; // x28
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *mChild; // x20
  struct UnityEngine_GameObject_o **p_mChild; // x25
  UnityEngine_Object_o *atlas; // x20
  UnityEngine_GameObject_o *isValid; // x0
  struct System_Collections_Generic_List_string__o *items; // x8
  struct System_Collections_Generic_List_UILabel__o *mLabelList; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *mPanel; // x20
  UIRect_o **p_mPanel; // x24
  const MethodInfo *v16; // x2
  UnityEngine_Transform_o *transform; // x20
  UIPanel_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_GameObject_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_Transform_o *v27; // x23
  UnityEngine_Object_o *selectedObject; // x20
  struct UnityEngine_GameObject_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_GameObject_o *mSelection; // x20
  struct UnityEngine_GameObject_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x23
  UnityEngine_Object_o *v37; // x20
  bool v38; // w0
  UnityEngine_Transform_o *v39; // x22
  UICamera_c *v40; // x8
  UnityEngine_Camera_o *v41; // x23
  struct UICamera_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s10
  float v45; // s11
  float v46; // s12
  UnityEngine_Transform_o *parent; // x0
  unsigned __int64 v48; // d1 OVERLAPPED
  float v49; // s0
  int v50; // s2
  UnityEngine_GameObject_o *v51; // x23
  UIAtlas_o *v52; // x20
  System_String_o *backgroundSprite; // x22
  struct UISprite_o *v54; // x0
  struct UISprite_o **p_mBackground; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UIWidget_o *v58; // x23
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Transform_o *v60; // x20
  float v61; // s0
  float v62; // s1
  float v63; // s14
  float v64; // s13
  struct UISprite_o *v65; // x0
  struct UISprite_o **p_mHighlight; // x22
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  UISpriteData_o *AtlasSprite; // x0
  const MethodInfo *v70; // x1
  int32_t borderTop; // s15
  int32_t activeFontSize; // w26
  const MethodInfo *v73; // x1
  float activeFontScale; // s0
  float v75; // s8
  System_Collections_Generic_List_object__o *v76; // x24
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int klass; // w21
  float v80; // s15
  float v81; // s11
  int32_t v82; // w1
  float v83; // s8
  float v84; // s9
  float v85; // s13
  float v86; // s12
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v88; // x20
  NGUITools_c **v89; // x22
  System_String_o *v90; // x29
  Il2CppObject *v91; // x28
  System_String_o *v92; // x1
  float v93; // s0
  UnityEngine_Transform_o *cachedTransform; // x0
  float v95; // s10
  UnityEngine_Transform_o *v96; // x26
  float v97; // s0
  float v98; // s0 OVERLAPPED
  UnityEngine_Transform_o *v99; // x0
  float v100; // s10
  float v101; // s0
  float v102; // s2
  float v103; // s1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  float v110; // s10
  float v111; // s0
  UnityEngine_GameObject_o *v112; // x0
  UIEventListener_o *v113; // x26
  UIEventListener_BoolDelegate_o *v114; // x20
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  UIEventListener_BoolDelegate_o *v117; // x20
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  UIEventListener_VoidDelegate_o *v120; // x20
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v128; // x9
  __int64 klass_low; // x10
  intptr_t v130; // x8
  struct System_Collections_Generic_List_UILabel__o *v131; // x8
  float v132; // s8
  float v133; // s9
  int v134; // w21
  int32_t v135; // w25
  float v136; // s8
  UIRect_o *v137; // x26
  UnityEngine_GameObject_o *v138; // x20
  Il2CppObject *Component_object; // x27
  UnityEngine_BoxCollider2D_o *v140; // x20
  double v141; // d8
  double v142; // d0
  double v143; // d0
  double v144; // d1
  double v145; // d1
  UIWidget_o *mBackground; // x27
  int32_t v147; // w25
  float v148; // s8
  float v149; // s10
  double v150; // d8
  double v151; // d0
  double v152; // d0
  double v153; // d1
  double v154; // d1
  float v155; // s9
  int32_t v156; // w1
  UIWidget_o *v157; // x27
  float v158; // s12
  double v159; // d8
  double v160; // d0
  double v161; // d0
  double v162; // d1
  double v163; // d1
  int32_t v164; // w1
  UIWidget_o *v165; // x27
  float v166; // s12
  double v167; // d8
  double v168; // d0
  double v169; // d0
  double v170; // d1
  double v171; // d1
  int32_t v172; // w1
  int v173; // w23
  int32_t v174; // w26
  UIWidget_o *v175; // x20
  float pixelSize; // s0
  float v177; // s12
  UIWidget_o *mHighlight; // x25
  UnityEngine_Transform_o *v179; // x23
  float v180; // s8
  float v181; // s10
  float v182; // s10
  double v183; // d8
  double v184; // d0
  double v185; // d0
  double v186; // d1
  double v187; // d1
  int32_t v188; // w1
  UIWidget_o *v189; // x25
  float v190; // s10
  double v191; // d8
  double v192; // d0
  struct UISprite_o **v193; // x21
  double v194; // d0
  double v195; // d1
  double v196; // d1
  int32_t v197; // w1
  const MethodInfo *v198; // x2
  int32_t v199; // w8
  _BOOL4 v200; // w25
  int32_t layer; // w20
  UnityEngine_Object_o *CameraForLayer; // x26
  UIWidget_o *v203; // x20
  UIPopupList_o *v204; // x0
  const MethodInfo *v205; // x3
  UIPopupList_o *v206; // x0
  const MethodInfo *v207; // x2
  int v208; // w21
  int32_t i; // w23
  Il2CppObject *v210; // x20
  const MethodInfo *v211; // x2
  UIPopupList_o *v212; // x0
  const MethodInfo *v213; // x3
  const MethodInfo *v214; // x3
  float v215; // s0
  float v216; // s8
  float v217; // s1
  float v218; // s9
  float v219; // s2
  float v220; // s10
  float position; // [xsp+Ch] [xbp-134h]
  float position_4; // [xsp+10h] [xbp-130h]
  float position_8; // [xsp+14h] [xbp-12Ch]
  float v224; // [xsp+18h] [xbp-128h]
  float v225; // [xsp+1Ch] [xbp-124h]
  struct UIPanel_o **v226; // [xsp+20h] [xbp-120h]
  int v227; // [xsp+2Ch] [xbp-114h]
  UISpriteData_o *v228; // [xsp+30h] [xbp-110h]
  float v229; // [xsp+38h] [xbp-108h]
  float v230; // [xsp+3Ch] [xbp-104h]
  float y; // [xsp+40h] [xbp-100h]
  UIWidget_o **v232; // [xsp+50h] [xbp-F0h]
  float v233; // [xsp+5Ch] [xbp-E4h]
  struct UISprite_o **v234; // [xsp+60h] [xbp-E0h]
  CGThumbnailListItem_o *p_mSelectedItem; // [xsp+68h] [xbp-D8h]
  UnityEngine_Transform_o *v236; // [xsp+70h] [xbp-D0h]
  float v237; // [xsp+7Ch] [xbp-C4h]
  UnityEngine_Bounds_o iptr; // [xsp+80h] [xbp-C0h] BYREF
  int v239; // [xsp+9Ch] [xbp-A4h] BYREF
  UnityEngine_Vector2_o v240; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v241; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v242; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v243; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v244; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v245; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v246; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v247; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v250; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v251; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v252; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v253; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v254; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v255; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C08F & 1) == 0 )
  {
    sub_1C32C20(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_1C32C20(&Localization_TypeInfo);
    sub_1C32C20(&Method_NGUITools_AddWidget_UILabel___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    sub_1C32C20(&Method_UIPopupList_OnItemClick__);
    sub_1C32C20(&Method_UIPopupList_OnItemHover__);
    sub_1C32C20(&Method_UIPopupList_OnItemPress__);
    sub_1C32C20(&UIEventListener_VoidDelegate_TypeInfo);
    sub_1C32C20(&StringLiteral_4512/*"CloseIfUnselected"*/);
    sub_1C32C20(&StringLiteral_5377/*"Drop-down List"*/);
    byte_4C3C08F = 1;
  }
  v239 = 0;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    goto LABEL_40;
  v4 = &NGUITools_TypeInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_49301984(gameObject, 0) )
    goto LABEL_40;
  p_mChild = &this->fields.mChild;
  mChild = (UnityEngine_Object_o *)this->fields.mChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mChild, 0, 0) )
    goto LABEL_40;
  atlas = (UnityEngine_Object_o *)this->fields.atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(atlas, 0, 0) )
    goto LABEL_40;
  isValid = (UnityEngine_GameObject_o *)UIPopupList__get_isValid(this, v3);
  if ( ((unsigned __int8)isValid & 1) == 0 )
    goto LABEL_40;
  items = this->fields.items;
  if ( !items )
    goto LABEL_280;
  if ( items->fields._size >= 1 )
  {
    mLabelList = this->fields.mLabelList;
    if ( !mLabelList )
      goto LABEL_280;
    size = mLabelList->fields._size;
    v13 = mLabelList->fields._version + 1;
    mLabelList->fields._size = 0;
    mLabelList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mLabelList->fields._items, 0, size, 0);
    p_mPanel = (UIRect_o **)&this->fields.mPanel;
    mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(mPanel, 0, 0) )
      goto LABEL_283;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v18 = UIPanel__Find(transform, 0);
    *p_mPanel = (UIRect_o *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)v18, v19, v20);
    v21 = (UnityEngine_Object_o *)*p_mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v21, 0, 0) )
    {
LABEL_283:
      UIPopupList__set_handleEvents(this, 1, v16);
      v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      v23 = (UnityEngine_GameObject_o *)sub_1C32E6C(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v23, (System_String_o *)StringLiteral_5377/*"Drop-down List"*/, 0);
      this->fields.mChild = v23;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mChild, (int32_t)v23, v24, v25);
      v26 = this->fields.mChild;
      isValid = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !isValid )
        goto LABEL_280;
      isValid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(isValid, 0);
      if ( !v26 )
        goto LABEL_280;
      UnityEngine_GameObject__set_layer(v26, (int32_t)isValid, 0);
      isValid = *p_mChild;
      if ( !*p_mChild )
        goto LABEL_280;
      isValid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(isValid, 0);
      if ( !v22 )
        goto LABEL_280;
      v27 = (UnityEngine_Transform_o *)isValid;
      isValid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(v22, 0);
      if ( !v27 )
        goto LABEL_280;
      UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)isValid, 0);
      UnityEngine_MonoBehaviour__StopCoroutine_71210140(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4512/*"CloseIfUnselected"*/,
        0);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(selectedObject, 0, 0) )
      {
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this->fields.mSelection = v29;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSelection, (int32_t)v29, v30, v31);
        mSelection = this->fields.mSelection;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        UICamera__set_selectedObject(mSelection, 0);
      }
      else
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v33 = UICamera__get_selectedObject(0);
        this->fields.mSelection = v33;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSelection, (int32_t)v33, v34, v35);
      }
      v236 = v27;
      if ( this->fields.openOn != 3 )
        goto LABEL_55;
      v36 = (UnityEngine_Object_o *)this->fields.mSelection;
      v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v38 = UnityEngine_Object__op_Inequality(v36, v37, 0);
      v27 = v236;
      if ( v38 )
      {
        isValid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(v236, 0);
        if ( !*p_mPanel )
          goto LABEL_280;
        v39 = (UnityEngine_Transform_o *)isValid;
        isValid = (UnityEngine_GameObject_o *)UIRect__get_anchorCamera(*p_mPanel, 0);
        v40 = UICamera_TypeInfo;
        v41 = (UnityEngine_Camera_o *)isValid;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v40 = UICamera_TypeInfo;
        }
        if ( !v41 )
          goto LABEL_280;
        static_fields = v40->static_fields;
        v242.fields.z = 0.0;
        v242.fields.x = static_fields->lastTouchPosition.fields.x;
        v242.fields.y = static_fields->lastTouchPosition.fields.y;
        v243 = UnityEngine_Camera__ScreenToWorldPoint_71029932(v41, v242, 0);
        if ( !v39 )
          goto LABEL_280;
        v244 = UnityEngine_Transform__InverseTransformPoint(v39, v243, 0);
        v27 = v236;
        x = v244.fields.x;
        z = v244.fields.z;
        y = v244.fields.y;
        UnityEngine_Transform__set_localPosition(v236, v244, 0);
        v245 = UnityEngine_Transform__get_position(v236, 0);
        v45 = v245.fields.x;
        position_8 = v245.fields.z;
        v224 = v245.fields.y;
        v46 = x;
      }
      else
      {
LABEL_55:
        parent = UnityEngine_Transform__get_parent(v22, 0);
        NGUIMath__CalculateRelativeWidgetBounds_49256556(&iptr, parent, v22, 0, 0, 0);
        v48 = vsub_f32(*(float32x2_t *)&iptr.fields.m_Center.fields.y, *(float32x2_t *)&iptr.fields.m_Extents.fields.y).n64_u64[0];
        z = *((float *)&v48 + 1);
        v46 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
        x = iptr.fields.m_Center.fields.x + iptr.fields.m_Extents.fields.x;
        LODWORD(y) = vadd_f32(
                       *(float32x2_t *)&iptr.fields.m_Center.fields.y,
                       *(float32x2_t *)&iptr.fields.m_Extents.fields.y).n64_u32[0];
        v49 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
        v50 = HIDWORD(v48);
        UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)((char *)&v48 - 4), 0);
        v246 = UnityEngine_Transform__get_position(v22, 0);
        v45 = v246.fields.x;
        position_8 = v246.fields.z;
        v224 = v246.fields.y;
      }
      UnityEngine_MonoBehaviour__StartCoroutine(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4512/*"CloseIfUnselected"*/,
        0);
      if ( !byte_4C313D7 )
      {
        sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
        byte_4C313D7 = 1;
      }
      UnityEngine_Transform__set_localRotation(
        v27,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      if ( !byte_4C313D6 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v51 = this->fields.mChild;
      v52 = this->fields.atlas;
      backgroundSprite = this->fields.backgroundSprite;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v54 = NGUITools__AddSprite(v51, v52, backgroundSprite, 0);
      this->fields.mBackground = v54;
      p_mBackground = &this->fields.mBackground;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBackground, (int32_t)v54, v56, v57);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      if ( !isValid )
        goto LABEL_280;
      UIWidget__set_pivot((UIWidget_o *)isValid, 0, 0);
      isValid = (UnityEngine_GameObject_o *)*p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_280;
      v58 = (UIWidget_o *)*p_mBackground;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
      isValid = (UnityEngine_GameObject_o *)NGUITools__CalculateNextDepth(v59, 0);
      if ( !v58 )
        goto LABEL_280;
      UIWidget__set_depth(v58, (int32_t)isValid, 0);
      isValid = (UnityEngine_GameObject_o *)*p_mBackground;
      if ( !*p_mBackground )
        goto LABEL_280;
      UIWidget__set_color((UIWidget_o *)isValid, this->fields.backgroundColor, 0);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      v60 = v236;
      if ( !isValid )
        goto LABEL_280;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))isValid->klass[2]._1.events)(
        isValid,
        isValid->klass[2]._1.properties);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      this->fields.mBgBorder = v62;
      if ( !isValid )
        goto LABEL_280;
      v63 = v61;
      v64 = v62;
      isValid = (UnityEngine_GameObject_o *)UIRect__get_cachedTransform((UIRect_o *)isValid, 0);
      if ( !isValid )
        goto LABEL_280;
      v247.fields.x = 0.0;
      v247.fields.z = 0.0;
      v247.fields.y = v64;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)isValid, v247, 0);
      v65 = NGUITools__AddSprite(this->fields.mChild, this->fields.atlas, this->fields.highlightSprite, 0);
      this->fields.mHighlight = v65;
      p_mHighlight = &this->fields.mHighlight;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mHighlight, (int32_t)v65, v67, v68);
      isValid = (UnityEngine_GameObject_o *)this->fields.mHighlight;
      if ( !isValid )
        goto LABEL_280;
      UIWidget__set_pivot((UIWidget_o *)isValid, 0, 0);
      isValid = (UnityEngine_GameObject_o *)*p_mHighlight;
      if ( !*p_mHighlight )
        goto LABEL_280;
      UIWidget__set_color((UIWidget_o *)isValid, this->fields.highlightColor, 0);
      isValid = (UnityEngine_GameObject_o *)this->fields.mHighlight;
      if ( !isValid )
        goto LABEL_280;
      AtlasSprite = UISprite__GetAtlasSprite((UISprite_o *)isValid, 0);
      if ( AtlasSprite )
      {
        borderTop = AtlasSprite->fields.borderTop;
        v228 = AtlasSprite;
        v232 = (UIWidget_o **)&this->fields.mHighlight;
        v226 = &this->fields.mPanel;
        activeFontSize = UIPopupList__get_activeFontSize(this, v70);
        activeFontScale = UIPopupList__get_activeFontScale(this, v73);
        v75 = this->fields.padding.fields.y;
        v233 = activeFontScale;
        v76 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UILabel__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v76,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UILabel___ctor__);
        isValid = (UnityEngine_GameObject_o *)this->fields.items;
        if ( !isValid )
          goto LABEL_280;
        p_mSelectedItem = (CGThumbnailListItem_o *)&this->fields.mSelectedItem;
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)isValid,
                (Il2CppObject *)this->fields.mSelectedItem,
                (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          p_mSelectedItem->klass = 0;
          sub_1C32BC4(p_mSelectedItem, 0, v77, v78);
        }
        v239 = 0;
        isValid = (UnityEngine_GameObject_o *)this->fields.items;
        v227 = borderTop;
        v229 = v64;
        v234 = &this->fields.mBackground;
        position = v45;
        position_4 = z;
        if ( !isValid )
          goto LABEL_280;
        klass = (int)isValid[1].klass;
        v80 = -v75;
        v81 = v233 * (float)activeFontSize;
        v225 = v46;
        v230 = x - v46;
        if ( klass < 1 )
        {
          v83 = 0.0;
          v84 = 0.0;
          v85 = 0.0;
          v86 = 0.0;
        }
        else
        {
          v237 = (float)(x - v46) * v233;
          v82 = 0;
          v83 = 0.0;
          v84 = 0.0;
          v85 = 0.0;
          v86 = 0.0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)isValid,
                     v82,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
            v88 = *p_mChild;
            v89 = v4;
            v90 = (System_String_o *)Item;
            if ( !(*v4)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v4);
            v91 = NGUITools__AddWidget_object_(v88, (const MethodInfo_31672B0 *)Method_NGUITools_AddWidget_UILabel___);
            isValid = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v239, 0);
            if ( !v91 )
              goto LABEL_280;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v91, (System_String_o *)isValid, 0);
            UIWidget__set_pivot((UIWidget_o *)v91, 0, 0);
            UILabel__set_bitmapFont((UILabel_o *)v91, this->fields.bitmapFont, 0);
            UILabel__set_trueTypeFont((UILabel_o *)v91, this->fields.trueTypeFont, 0);
            UILabel__set_fontSize((UILabel_o *)v91, this->fields.fontSize, 0);
            UILabel__set_fontStyle((UILabel_o *)v91, this->fields.fontStyle, 0);
            if ( this->fields.isLocalized )
            {
              if ( !Localization_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v92 = Localization__Get(v90, 0);
            }
            else
            {
              v92 = v90;
            }
            UILabel__set_text((UILabel_o *)v91, v92, 0);
            UIWidget__set_color((UIWidget_o *)v91, this->fields.textColor, 0);
            if ( this->fields.isAligument )
            {
              if ( v239 && !(v239 % 20) )
              {
                v83 = v80;
                v80 = -this->fields.padding.fields.y;
                v93 = v237
                    - (float)((float)(v63 + this->fields.padding.fields.x) + (float)(v63 + this->fields.padding.fields.x));
                if ( v86 > v93 )
                  v93 = v86;
                v85 = v85 + v93;
                if ( v84 <= v86 )
                  v84 = v86;
                v86 = 0.0;
              }
              cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v91, 0);
              v95 = this->fields.padding.fields.x;
              v96 = cachedTransform;
              LODWORD(v97) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v91, 0);
              if ( !v96 )
                goto LABEL_280;
              v98 = v85 + (float)((float)(v63 + v95) - v97);
            }
            else
            {
              v99 = UIRect__get_cachedTransform((UIRect_o *)v91, 0);
              v100 = this->fields.padding.fields.x;
              v96 = v99;
              LODWORD(v101) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v91, 0);
              if ( !v96 )
                goto LABEL_280;
              v98 = (float)(v63 + v100) - v101;
            }
            v102 = -1.0;
            v103 = v80;
            UnityEngine_Transform__set_localPosition(v96, *(UnityEngine_Vector3_o *)&v98, 0);
            UILabel__set_overflowMethod((UILabel_o *)v91, 2, 0);
            UILabel__set_alignment((UILabel_o *)v91, this->fields.alignment, 0);
            if ( !v76 )
              goto LABEL_280;
            v106 = v76->fields._items;
            v107 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++v76->fields._version;
            if ( !v106 )
              goto LABEL_280;
            v108 = v76->fields._size;
            if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v76,
                v91,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
            }
            else
            {
              v109 = &v106->obj.klass + v108;
              v76->fields._size = v108 + 1;
              v109[4] = (Il2CppClass *)v91;
              sub_1C32BC4((CGThumbnailListItem_o *)(v109 + 4), (int32_t)v91, v104, v105);
            }
            v110 = this->fields.padding.fields.y;
            v111 = UILabel__get_printedSize((UILabel_o *)v91, 0).fields.x;
            if ( v86 <= v111 )
              v86 = v111;
            v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v91, 0);
            v113 = UIEventListener__Get(v112, 0);
            v114 = (UIEventListener_BoolDelegate_o *)sub_1C32E6C(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v114, (Il2CppObject *)this, Method_UIPopupList_OnItemHover__, 0);
            if ( !v113 )
              goto LABEL_280;
            v113->fields.onHover = v114;
            sub_1C32BC4((CGThumbnailListItem_o *)&v113->fields.onHover, (int32_t)v114, v115, v116);
            v117 = (UIEventListener_BoolDelegate_o *)sub_1C32E6C(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v117, (Il2CppObject *)this, Method_UIPopupList_OnItemPress__, 0);
            v113->fields.onPress = v117;
            sub_1C32BC4((CGThumbnailListItem_o *)&v113->fields.onPress, (int32_t)v117, v118, v119);
            v120 = (UIEventListener_VoidDelegate_o *)sub_1C32E6C(UIEventListener_VoidDelegate_TypeInfo);
            UIEventListener_VoidDelegate___ctor(v120, (Il2CppObject *)this, Method_UIPopupList_OnItemClick__, 0);
            v113->fields.onClick = v120;
            sub_1C32BC4((CGThumbnailListItem_o *)&v113->fields.onClick, (int32_t)v120, v121, v122);
            v113->fields.parameter = (Il2CppObject *)v90;
            sub_1C32BC4((CGThumbnailListItem_o *)&v113->fields.parameter, (int32_t)v90, v123, v124);
            if ( System_String__op_Equality(this->fields.mSelectedItem, v90, 0)
              || !v239 && System_String__IsNullOrEmpty((System_String_o *)p_mSelectedItem->klass, 0) )
            {
              UIPopupList__Highlight(this, (UILabel_o *)v91, 1, v126);
            }
            isValid = (UnityEngine_GameObject_o *)this->fields.mLabelList;
            if ( !isValid )
              goto LABEL_280;
            m_CachedPtr = isValid->fields.m_CachedPtr;
            v128 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++HIDWORD(isValid[1].klass);
            if ( !m_CachedPtr )
              goto LABEL_280;
            klass_low = SLODWORD(isValid[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)isValid,
                v91,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
            }
            else
            {
              v130 = m_CachedPtr + 8 * klass_low;
              LODWORD(isValid[1].klass) = klass_low + 1;
              *(_QWORD *)(v130 + 32) = v91;
              sub_1C32BC4((CGThumbnailListItem_o *)(v130 + 32), (int32_t)v91, v125, v126);
            }
            v80 = (float)(v80 - v81) - v110;
            v4 = v89;
            v82 = ++v239;
            if ( v239 >= klass )
              break;
            isValid = (UnityEngine_GameObject_o *)this->fields.items;
            if ( !isValid )
              goto LABEL_280;
          }
          v60 = v236;
        }
        if ( this->fields.isAligument )
        {
          v131 = this->fields.mLabelList;
          if ( !v131 )
            goto LABEL_280;
          if ( v131->fields._size >= 21 )
            v80 = v83;
          if ( v84 > v86 )
            v86 = v84;
        }
        if ( !this->fields.position )
        {
          LODWORD(v132) = (unsigned int)UnityEngine_Transform__get_localPosition(v60, 0);
          localPosition = UnityEngine_Transform__get_localPosition(v60, 0);
          localPosition.fields.y = v80 * -0.5;
          localPosition.fields.x = v132;
          UnityEngine_Transform__set_localPosition(v60, localPosition, 0);
        }
        v133 = v86 <= (float)((float)(v230 * v233)
                            - (float)((float)(v63 + this->fields.padding.fields.x)
                                    + (float)(v63 + this->fields.padding.fields.x)))
             ? (float)(v230 * v233)
             - (float)((float)(v63 + this->fields.padding.fields.x) + (float)(v63 + this->fields.padding.fields.x))
             : v86;
        if ( !v76 )
          goto LABEL_280;
        v134 = v76->fields._size;
        if ( v134 >= 1 )
        {
          v135 = 0;
          v136 = v81 + this->fields.padding.fields.y;
          do
          {
            isValid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    v76,
                                                    v135,
                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_280;
            v137 = (UIRect_o *)isValid;
            v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
            if ( !(*v4)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v4);
            NGUITools__AddWidgetCollider(v138, 0);
            LOBYTE(v137[1].fields.topAnchor) = 0;
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)v137,
                                 (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            isValid = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0,
                                                    0);
            if ( ((unsigned __int8)isValid & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_280;
              center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
              center.fields.x = v133 * 0.5;
              center.fields.y = v81 * -0.5;
              UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, center, 0);
              v250.fields.z = 1.0;
              v250.fields.x = v133;
              v250.fields.y = v136;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v250, 0);
            }
            else
            {
              isValid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)v137,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
              if ( !isValid )
                goto LABEL_280;
              v240.fields.x = v133 * 0.5;
              v240.fields.y = v81 * -0.5;
              v140 = (UnityEngine_BoxCollider2D_o *)isValid;
              UnityEngine_Collider2D__set_offset((UnityEngine_Collider2D_o *)isValid, v240, 0);
              v241.fields.x = v133;
              v241.fields.y = v136;
              UnityEngine_BoxCollider2D__set_size(v140, v241, 0);
            }
          }
          while ( v134 != ++v135 );
        }
        if ( !byte_4C32B16 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C32B16 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v141 = v133;
        v142 = modf(v133, (double *)&iptr.fields.m_Center.fields.x);
        if ( v133 >= 0.0 )
        {
          if ( v142 != 0.5 )
          {
            v143 = floor(v141 + 0.5);
            goto LABEL_160;
          }
          v143 = *(double *)&iptr.fields.m_Center.fields.x;
          v144 = 1.0;
        }
        else
        {
          if ( v142 != -0.5 )
          {
            v143 = ceil(v141 + -0.5);
            goto LABEL_160;
          }
          v143 = *(double *)&iptr.fields.m_Center.fields.x;
          v144 = -1.0;
        }
        v145 = v143 + v144;
        if ( ((__int64)v143 & 1) != 0 )
          v143 = v145;
LABEL_160:
        mBackground = (UIWidget_o *)this->fields.mBackground;
        if ( v143 == INFINITY )
          v147 = 0x80000000;
        else
          v147 = (int)v143;
        v148 = (float)(v63 + this->fields.padding.fields.x) + (float)(v63 + this->fields.padding.fields.x);
        if ( !byte_4C32B16 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C32B16 = 1;
        }
        v149 = v133 + v148;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v150 = v149;
        v151 = modf(v149, (double *)&iptr.fields.m_Center.fields.x);
        if ( v149 >= 0.0 )
        {
          if ( v151 != 0.5 )
          {
            v152 = floor(v150 + 0.5);
            goto LABEL_177;
          }
          v152 = *(double *)&iptr.fields.m_Center.fields.x;
          v153 = 1.0;
        }
        else
        {
          if ( v151 != -0.5 )
          {
            v152 = ceil(v150 + -0.5);
            goto LABEL_177;
          }
          v152 = *(double *)&iptr.fields.m_Center.fields.x;
          v153 = -1.0;
        }
        v154 = v152 + v153;
        if ( ((__int64)v152 & 1) != 0 )
          v152 = v154;
LABEL_177:
        if ( !mBackground )
          goto LABEL_280;
        v155 = v80 - v229;
        if ( v152 == INFINITY )
          v156 = 0x80000000;
        else
          v156 = (int)v152;
        UIWidget__set_width(mBackground, v156, 0);
        v157 = (UIWidget_o *)*v234;
        if ( !byte_4C32B16 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C32B16 = 1;
        }
        v158 = v229 - v155;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v159 = v158;
        v160 = modf(v158, (double *)&iptr.fields.m_Center.fields.x);
        if ( v158 >= 0.0 )
        {
          if ( v160 != 0.5 )
          {
            v161 = floor(v159 + 0.5);
            goto LABEL_195;
          }
          v161 = *(double *)&iptr.fields.m_Center.fields.x;
          v162 = 1.0;
        }
        else
        {
          if ( v160 != -0.5 )
          {
            v161 = ceil(v159 + -0.5);
            goto LABEL_195;
          }
          v161 = *(double *)&iptr.fields.m_Center.fields.x;
          v162 = -1.0;
        }
        v163 = v161 + v162;
        if ( ((__int64)v161 & 1) != 0 )
          v161 = v163;
LABEL_195:
        if ( !v157 )
          goto LABEL_280;
        if ( v161 == INFINITY )
          v164 = 0x80000000;
        else
          v164 = (int)v161;
        UIWidget__set_height(v157, v164, 0);
        if ( !this->fields.isAligument )
          goto LABEL_219;
        v165 = (UIWidget_o *)*v234;
        if ( !byte_4C32B16 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C32B16 = 1;
        }
        v166 = v85 + v149;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v167 = v166;
        v168 = modf(v166, (double *)&iptr.fields.m_Center.fields.x);
        if ( v166 >= 0.0 )
        {
          if ( v168 == 0.5 )
          {
            v169 = *(double *)&iptr.fields.m_Center.fields.x;
            v170 = 1.0;
LABEL_209:
            v171 = v169 + v170;
            if ( ((__int64)v169 & 1) != 0 )
              v169 = v171;
            goto LABEL_214;
          }
          v169 = floor(v167 + 0.5);
        }
        else
        {
          if ( v168 == -0.5 )
          {
            v169 = *(double *)&iptr.fields.m_Center.fields.x;
            v170 = -1.0;
            goto LABEL_209;
          }
          v169 = ceil(v167 + -0.5);
        }
LABEL_214:
        if ( !v165 )
          goto LABEL_280;
        if ( v169 == INFINITY )
          v172 = 0x80000000;
        else
          v172 = (int)v169;
        UIWidget__set_width(v165, v172, 0);
LABEL_219:
        v173 = v76->fields._size;
        if ( v173 >= 1 )
        {
          v174 = 0;
          do
          {
            isValid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    v76,
                                                    v174,
                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_280;
            v175 = (UIWidget_o *)isValid;
            UILabel__set_overflowMethod((UILabel_o *)isValid, 0, 0);
            UIWidget__set_width(v175, v147, 0);
          }
          while ( v173 != ++v174 );
        }
        isValid = (UnityEngine_GameObject_o *)this->fields.atlas;
        if ( !isValid )
          goto LABEL_280;
        pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)isValid, 0);
        v177 = pixelSize + pixelSize;
        mHighlight = (UIWidget_o *)this->fields.mHighlight;
        v179 = v236;
        v180 = v149
             - (float)((float)(v63 + this->fields.padding.fields.x) + (float)(v63 + this->fields.padding.fields.x));
        v181 = (float)(pixelSize + pixelSize) * (float)v228->fields.borderLeft;
        if ( !byte_4C32B16 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C32B16 = 1;
        }
        v182 = v180 + v181;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v183 = v182;
        v184 = modf(v182, (double *)&iptr.fields.m_Center.fields.x);
        if ( v182 >= 0.0 )
        {
          if ( v184 != 0.5 )
          {
            v185 = floor(v183 + 0.5);
            goto LABEL_238;
          }
          v185 = *(double *)&iptr.fields.m_Center.fields.x;
          v186 = 1.0;
        }
        else
        {
          if ( v184 != -0.5 )
          {
            v185 = ceil(v183 + -0.5);
            goto LABEL_238;
          }
          v185 = *(double *)&iptr.fields.m_Center.fields.x;
          v186 = -1.0;
        }
        v187 = v185 + v186;
        if ( ((__int64)v185 & 1) != 0 )
          v185 = v187;
LABEL_238:
        if ( !mHighlight )
          goto LABEL_280;
        if ( v185 == INFINITY )
          v188 = 0x80000000;
        else
          v188 = (int)v185;
        UIWidget__set_width(mHighlight, v188, 0);
        v189 = *v232;
        if ( !byte_4C32B16 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C32B16 = 1;
        }
        v190 = v81 + (float)(v177 * (float)v227);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v191 = v190;
        v192 = modf(v190, (double *)&iptr.fields.m_Center.fields.x);
        v193 = &this->fields.mBackground;
        if ( v190 >= 0.0 )
        {
          if ( v192 == 0.5 )
          {
            v194 = *(double *)&iptr.fields.m_Center.fields.x;
            v195 = 1.0;
LABEL_251:
            v196 = v194 + v195;
            if ( ((__int64)v194 & 1) != 0 )
              v194 = v196;
            goto LABEL_256;
          }
          v194 = floor(v191 + 0.5);
        }
        else
        {
          if ( v192 == -0.5 )
          {
            v194 = *(double *)&iptr.fields.m_Center.fields.x;
            v195 = -1.0;
            goto LABEL_251;
          }
          v194 = ceil(v191 + -0.5);
        }
LABEL_256:
        if ( !v189 )
          goto LABEL_280;
        if ( v194 == INFINITY )
          v197 = 0x80000000;
        else
          v197 = (int)v194;
        UIWidget__set_height(v189, v197, 0);
        v199 = this->fields.position;
        v200 = v199 == 1;
        if ( !v199 )
        {
          isValid = this->fields.mSelection;
          if ( !isValid )
            goto LABEL_280;
          layer = UnityEngine_GameObject__get_layer(isValid, 0);
          if ( !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          CameraForLayer = (UnityEngine_Object_o *)UICamera__FindCameraForLayer(layer, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          isValid = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(CameraForLayer, 0, 0);
          if ( ((unsigned __int8)isValid & 1) != 0 )
          {
            if ( !CameraForLayer )
              goto LABEL_280;
            isValid = (UnityEngine_GameObject_o *)UICamera__get_cachedCamera((UICamera_o *)CameraForLayer, 0);
            if ( !isValid )
              goto LABEL_280;
            v251.fields.x = position;
            v251.fields.z = position_8;
            v251.fields.y = v224;
            v252 = UnityEngine_Camera__WorldToViewportPoint_71029916((UnityEngine_Camera_o *)isValid, v251, 0);
            v200 = v252.fields.y < 0.5;
          }
        }
        if ( this->fields.isAnimated )
        {
          v203 = *v232;
          UIPopupList__AnimateColor((UIPopupList_o *)isValid, *v232, v198);
          UIPopupList__AnimatePosition(v204, v203, v200, v81 + v155, v205);
          v208 = v76->fields._size;
          if ( v208 >= 1 )
          {
            for ( i = 0; i != v208; ++i )
            {
              v210 = System_Collections_Generic_List_object___get_Item(
                       v76,
                       i,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
              UIPopupList__AnimateColor((UIPopupList_o *)v210, (UIWidget_o *)v210, v211);
              UIPopupList__AnimatePosition(v212, (UIWidget_o *)v210, v200, v81 + v155, v213);
            }
          }
          UIPopupList__AnimateColor(v206, (UIWidget_o *)this->fields.mBackground, v207);
          UIPopupList__AnimateScale(this, (UIWidget_o *)this->fields.mBackground, v200, v215, v214);
          v179 = v236;
          v193 = &this->fields.mBackground;
        }
        if ( v200 )
        {
          v253.fields.z = position_4;
          v253.fields.y = (float)(y - v155) - v229;
          v253.fields.x = v225;
          UnityEngine_Transform__set_localPosition(v179, v253, 0);
        }
        v254 = UnityEngine_Transform__get_localPosition(v179, 0);
        if ( *v193 )
        {
          isValid = (UnityEngine_GameObject_o *)*v226;
          if ( *v226 )
          {
            v216 = COERCE_FLOAT(
                     COERCE_UNSIGNED_INT128(
                       ((long double (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, long double, long double, float, float))*(_QWORD *)&isValid->klass[1]._2.field_count)(
                         isValid,
                         *(_QWORD *)&isValid->klass[1]._2.interfaces_count,
                         *(long double *)&v254.fields.x,
                         *(long double *)&v254.fields.y,
                         v254.fields.x + (float)(*v193)->fields.mWidth,
                         v254.fields.y - (float)(*v193)->fields.mHeight)));
            v218 = v217;
            v220 = v219;
            v255 = UnityEngine_Transform__get_localPosition(v179, 0);
            v255.fields.x = v216 + v255.fields.x;
            v255.fields.y = v218 + v255.fields.y;
            v255.fields.z = v220 + v255.fields.z;
            UnityEngine_Transform__set_localPosition(v179, v255, 0);
            return;
          }
        }
LABEL_280:
        sub_1C32E7C(isValid);
      }
    }
  }
  else
  {
LABEL_40:
    UIPopupList__Close(this, v3);
  }
}


void UIPopupList__Start(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *textLabel; // x20
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v5; // x23
  EventDelegate_Callback_o *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *items; // x0
  Il2CppObject *Item; // x1
  const MethodInfo *v13; // x2
  UIPopupList_o *v14; // x0
  struct System_String_o *mSelectedItem; // x21

  if ( (byte_4C3C084 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UILabel_SetCurrentSelection__);
    byte_4C3C084 = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(textLabel, 0, 0) )
  {
    onChange = this->fields.onChange;
    v5 = (Il2CppObject *)this->fields.textLabel;
    v6 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v6, v5, Method_UILabel_SetCurrentSelection__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(onChange, v6, 0);
    this->fields.textLabel = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.textLabel, 0, v7, v8);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.mSelectedItem, 0) )
    {
      mSelectedItem = this->fields.mSelectedItem;
      this->fields.mSelectedItem = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSelectedItem, 0, v9, v10);
      v14 = this;
      Item = (Il2CppObject *)mSelectedItem;
      goto LABEL_18;
    }
    items = (System_Collections_Generic_List_object__o *)this->fields.items;
    if ( !items )
      sub_1C32E7C(0);
    if ( items->fields._size >= 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               items,
               0,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
      v14 = this;
LABEL_18:
      UIPopupList__set_value(v14, (System_String_o *)Item, v13);
    }
  }
}


void UIPopupList__TriggerCallbacks(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UIPopupList_StaticFields *static_fields; // x8
  struct UIPopupList_o *v7; // x20
  struct UIPopupList_LegacyEvent_o *mLegacyEvent; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  bool IsValid_49205960; // w0
  struct UIPopupList_o *v11; // x24
  System_Collections_Generic_List_EventDelegate__o *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *eventReceiver; // x21
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_4C3C081 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIPopupList_TypeInfo);
    byte_4C3C081 = 1;
  }
  current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(current, (UnityEngine_Object_o *)this, 0) )
  {
    static_fields = UIPopupList_TypeInfo->static_fields;
    v7 = static_fields->current;
    static_fields->current = this;
    sub_1C32BC4((CGThumbnailListItem_o *)UIPopupList_TypeInfo->static_fields, (int32_t)this, v4, v5);
    mLegacyEvent = this->fields.mLegacyEvent;
    if ( mLegacyEvent )
      ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))mLegacyEvent->fields.invoke_impl)(
        mLegacyEvent->fields.method_code,
        this->fields.mSelectedItem,
        mLegacyEvent->fields.method);
    onChange = this->fields.onChange;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    IsValid_49205960 = EventDelegate__IsValid_49205960(onChange, 0);
    if ( IsValid_49205960 )
      v11 = 0;
    else
      v11 = v7;
    if ( IsValid_49205960 )
    {
      v12 = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49177388(v12, 0);
    }
    else
    {
      eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
      {
        if ( !System_String__IsNullOrEmpty(this->fields.functionName, 0) )
        {
          v16 = this->fields.eventReceiver;
          if ( !v16 )
            sub_1C32E7C(0);
          UnityEngine_GameObject__SendMessage_71204432(
            v16,
            this->fields.functionName,
            (Il2CppObject *)this->fields.mSelectedItem,
            1,
            0);
        }
        v7 = v11;
      }
    }
    UIPopupList_TypeInfo->static_fields->current = v7;
    sub_1C32BC4((CGThumbnailListItem_o *)UIPopupList_TypeInfo->static_fields, (int32_t)v7, v13, v14);
  }
}


System_Collections_IEnumerator_o *UIPopupList__UpdateTweenPosition(UIPopupList_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3C087 & 1) == 0 )
  {
    sub_1C32C20(&UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
    byte_4C3C087 = 1;
  }
  v3 = sub_1C32E6C(UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


float UIPopupList__get_activeFontScale(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  float v4; // s8
  UnityEngine_Object_o *bitmapFont; // x20
  UIFont_o *v6; // x0
  int32_t fontSize; // s8

  if ( (byte_4C3C07D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C07D = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = 1.0;
  if ( !UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
  {
    bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(bitmapFont, 0, 0) )
    {
      v6 = this->fields.bitmapFont;
      if ( !v6 )
        sub_1C32E7C(0);
      fontSize = this->fields.fontSize;
      return (float)fontSize / (float)UIFont__get_defaultSize(v6, 0);
    }
  }
  return v4;
}


int32_t UIPopupList__get_activeFontSize(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o *bitmapFont; // x20
  UIFont_o *v6; // x0

  if ( (byte_4C3C07C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C07C = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
    return this->fields.fontSize;
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bitmapFont, 0, 0) )
    return this->fields.fontSize;
  v6 = this->fields.bitmapFont;
  if ( !v6 )
    sub_1C32E7C(0);
  return UIFont__get_defaultSize(v6, 0);
}


UnityEngine_Object_o *UIPopupList__get_ambigiousFont(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o **p_trueTypeFont; // x21
  UnityEngine_Object_o *bitmapFont; // x20

  if ( (byte_4C3C075 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C075 = 1;
  }
  p_trueTypeFont = (UnityEngine_Object_o **)&this->fields.trueTypeFont;
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
  {
    p_trueTypeFont = (UnityEngine_Object_o **)&this->fields.bitmapFont;
    bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
      p_trueTypeFont = (UnityEngine_Object_o **)&this->fields.font;
  }
  return *p_trueTypeFont;
}


Il2CppObject *UIPopupList__get_data(UIPopupList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *items; // x0
  int32_t v4; // w0
  int32_t v5; // w1

  if ( (byte_4C3C078 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    byte_4C3C078 = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_9;
  v4 = System_Collections_Generic_List_object___IndexOf(
         items,
         (Il2CppObject *)this->fields.mSelectedItem,
         (const MethodInfo_379945C *)Method_System_Collections_Generic_List_string__IndexOf__);
  if ( v4 < 0 )
    return 0;
  v5 = v4;
  items = this->fields.itemData;
  if ( !items )
LABEL_9:
    sub_1C32E7C(items);
  if ( v5 < items->fields._size )
    return System_Collections_Generic_List_object___get_Item(
             items,
             v5,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
  return 0;
}


bool UIPopupList__get_handleEvents(UIPopupList_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C3C079 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C079 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    return 1;
  }
  else
  {
    if ( !Component_object )
      sub_1C32E7C(v4);
    return !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
  }
}


bool UIPopupList__get_isOpen(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mChild; // x19

  if ( (byte_4C3C077 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C077 = 1;
  }
  mChild = (UnityEngine_Object_o *)this->fields.mChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(mChild, 0, 0);
}


bool UIPopupList__get_isValid(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bitmapFont; // x20
  UnityEngine_Object_o *trueTypeFont; // x19

  if ( (byte_4C3C07B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C07B = 1;
  }
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
    return 1;
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0);
}


UIPopupList_LegacyEvent_o *UIPopupList__get_onSelectionChange(UIPopupList_o *this, const MethodInfo *method)
{
  return this->fields.mLegacyEvent;
}


System_String_o *UIPopupList__get_selection(UIPopupList_o *this, const MethodInfo *method)
{
  return this->fields.mSelectedItem;
}


System_String_o *UIPopupList__get_value(UIPopupList_o *this, const MethodInfo *method)
{
  return this->fields.mSelectedItem;
}


void UIPopupList__set_ambigiousFont(UIPopupList_o *this, UnityEngine_Object_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Object_c *klass; // x10
  UnityEngine_Object_c *v7; // x8
  Il2CppClass *v8; // x8
  __int64 naturalAligment; // x9
  int32_t v10; // w1
  CGThumbnailListItem_o *p_bitmapFont; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CGThumbnailListItem_o *v16; // x0
  int32_t v17; // w1
  CGThumbnailListItem_o *p_trueTypeFont; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C3C076 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Font_TypeInfo);
    sub_1C32C20(&UIFont_TypeInfo);
    byte_4C3C076 = 1;
  }
  if ( value )
  {
    klass = value->klass;
    v7 = (UnityEngine_Object_c *)UnityEngine_Font_TypeInfo;
    if ( (UnityEngine_Font_c *)value->klass == UnityEngine_Font_TypeInfo )
    {
      this->fields.trueTypeFont = (struct UnityEngine_Font_o *)value;
      if ( value->klass == v7 )
        v10 = (int)value;
      else
        v10 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.trueTypeFont, v10, (int32_t)method, v3);
      this->fields.bitmapFont = 0;
      p_bitmapFont = (CGThumbnailListItem_o *)&this->fields.bitmapFont;
      sub_1C32BC4(p_bitmapFont, 0, v12, v13);
      v16 = (CGThumbnailListItem_o *)((char *)p_bitmapFont + 232);
      p_bitmapFont[1].fields.sortValueLast = 0;
    }
    else
    {
      v8 = (Il2CppClass *)UIFont_TypeInfo;
      naturalAligment = UIFont_TypeInfo->_2.naturalAligment;
      if ( klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UIFont_c *)klass->_2.typeHierarchy[naturalAligment - 1] != UIFont_TypeInfo )
      {
        return;
      }
      this->fields.bitmapFont = (struct UIFont_o *)value;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( value->klass->_2.typeHierarchy[naturalAligment - 1] == v8 )
          v17 = (int)value;
        else
          v17 = 0;
      }
      else
      {
        v17 = 0;
      }
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bitmapFont, v17, (int32_t)method, v3);
      this->fields.trueTypeFont = 0;
      p_trueTypeFont = (CGThumbnailListItem_o *)&this->fields.trueTypeFont;
      sub_1C32BC4(p_trueTypeFont, 0, v19, v20);
      v16 = (CGThumbnailListItem_o *)((char *)p_trueTypeFont + 224);
      p_trueTypeFont[1].fields.sortValue2B = 0;
    }
    sub_1C32BC4(v16, 0, v14, v15);
  }
}


void UIPopupList__set_handleEvents(UIPopupList_o *this, bool value, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0

  if ( (byte_4C3C07A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C07A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C32E7C(v6);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, !value, 0);
  }
}


void UIPopupList__set_onSelectionChange(
        UIPopupList_o *this,
        UIPopupList_LegacyEvent_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mLegacyEvent = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mLegacyEvent, (int32_t)value, (int32_t)method, v3);
}


void UIPopupList__set_value(UIPopupList_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o **p_mSelectedItem; // x20
  const MethodInfo *v6; // x1

  this->fields.mSelectedItem = value;
  p_mSelectedItem = &this->fields.mSelectedItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSelectedItem, (int32_t)value, (int32_t)method, v3);
  if ( *p_mSelectedItem )
    UIPopupList__TriggerCallbacks(this, v6);
}


void UIPopupList_LegacyEvent___ctor(
        UIPopupList_LegacyEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7E158;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7E138;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7E0F0;
}


System_IAsyncResult_o *UIPopupList_LegacyEvent__BeginInvoke(
        UIPopupList_LegacyEvent_o *this,
        System_String_o *val,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = val;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void UIPopupList_LegacyEvent__EndInvoke(
        UIPopupList_LegacyEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void UIPopupList_LegacyEvent__Invoke(UIPopupList_LegacyEvent_o *this, System_String_o *val, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    val,
    this->fields.method);
}


void UIPopupList__CloseIfUnselected_d__93___ctor(
        UIPopupList__CloseIfUnselected_d__93_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIPopupList__CloseIfUnselected_d__93__MoveNext(
        UIPopupList__CloseIfUnselected_d__93_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct UIPopupList_o *_4__this; // x20
  UnityEngine_GameObject_o *selectedObject; // x0
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *mSelection; // x22
  const MethodInfo *v10; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4C3C091 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C091 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    selectedObject = UICamera__get_selectedObject(0);
    if ( !_4__this )
      sub_1C32E7C(selectedObject);
    v8 = (UnityEngine_Object_o *)selectedObject;
    mSelection = (UnityEngine_Object_o *)_4__this->fields.mSelection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v8, mSelection, 0) )
      goto LABEL_14;
    UIPopupList__Close(_4__this, v10);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
LABEL_14:
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *UIPopupList__CloseIfUnselected_d__93__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIPopupList__CloseIfUnselected_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIPopupList__CloseIfUnselected_d__93__System_Collections_IEnumerator_Reset(
        UIPopupList__CloseIfUnselected_d__93_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_UIPopupList__CloseIfUnselected_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *UIPopupList__CloseIfUnselected_d__93__System_Collections_IEnumerator_get_Current(
        UIPopupList__CloseIfUnselected_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIPopupList__CloseIfUnselected_d__93__System_IDisposable_Dispose(
        UIPopupList__CloseIfUnselected_d__93_o *this,
        const MethodInfo *method)
{
  ;
}


void UIPopupList__UpdateTweenPosition_d__78___ctor(
        UIPopupList__UpdateTweenPosition_d__78_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIPopupList__UpdateTweenPosition_d__78__MoveNext(
        UIPopupList__UpdateTweenPosition_d__78_o *this,
        const MethodInfo *method)
{
  UIPopupList__UpdateTweenPosition_d__78_o *v2; // x19
  int32_t _1__state; // w8
  struct UIPopupList_o *_4__this; // x20
  UnityEngine_Object_o *mHighlight; // x21
  UnityEngine_Object_o *mHighlightedLabel; // x21
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UIPopupList__UpdateTweenPosition_d__78_o **p_tp_5__2; // x21
  UnityEngine_Object_o *tp_5__2; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  UIPopupList__UpdateTweenPosition_d__78_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o HighlightPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C3C092 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    this = (UIPopupList__UpdateTweenPosition_d__78_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C092 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
  mHighlight = (UnityEngine_Object_o *)_4__this->fields.mHighlight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mHighlight, 0, 0) )
  {
    mHighlightedLabel = (UnityEngine_Object_o *)_4__this->fields.mHighlightedLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mHighlightedLabel, 0, 0) )
    {
      this = (UIPopupList__UpdateTweenPosition_d__78_o *)_4__this->fields.mHighlight;
      if ( !this )
        goto LABEL_26;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
      v2->fields._tp_5__2 = (struct TweenPosition_o *)Component_object;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._tp_5__2, (int32_t)Component_object, v8, v9);
LABEL_15:
      p_tp_5__2 = (UIPopupList__UpdateTweenPosition_d__78_o **)&v2->fields._tp_5__2;
      tp_5__2 = (UnityEngine_Object_o *)v2->fields._tp_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(tp_5__2, 0, 0) )
      {
        this = *p_tp_5__2;
        if ( !*p_tp_5__2 )
          goto LABEL_26;
        this = (UIPopupList__UpdateTweenPosition_d__78_o *)UnityEngine_Behaviour__get_enabled(
                                                             (UnityEngine_Behaviour_o *)this,
                                                             0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( _4__this )
          {
            v15 = *p_tp_5__2;
            HighlightPosition = UIPopupList__GetHighlightPosition(_4__this, v14);
            if ( v15 )
            {
              *(UnityEngine_Vector3_o *)((char *)&v15[2].fields._tp_5__2 + 4) = HighlightPosition;
              v2->fields.__2__current = 0;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C32BC4(p__2__current, 0, v16, v17);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
LABEL_26:
          sub_1C32E7C(this);
        }
      }
      *p_tp_5__2 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._tp_5__2, 0, v12, v13);
      if ( !_4__this )
        goto LABEL_26;
    }
  }
  result = 0;
  _4__this->fields.mTweening = 0;
  return result;
}


Il2CppObject *UIPopupList__UpdateTweenPosition_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIPopupList__UpdateTweenPosition_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIPopupList__UpdateTweenPosition_d__78__System_Collections_IEnumerator_Reset(
        UIPopupList__UpdateTweenPosition_d__78_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_UIPopupList__UpdateTweenPosition_d__78_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *UIPopupList__UpdateTweenPosition_d__78__System_Collections_IEnumerator_get_Current(
        UIPopupList__UpdateTweenPosition_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIPopupList__UpdateTweenPosition_d__78__System_IDisposable_Dispose(
        UIPopupList__UpdateTweenPosition_d__78_o *this,
        const MethodInfo *method)
{
  ;
}