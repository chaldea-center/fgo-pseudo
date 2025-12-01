void UIPopupList___ctor(UIPopupList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4CCBB38 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&StringLiteral_9960/*"OnSelectionChange"*/);
    byte_4CCBB38 = 1;
  }
  this->fields.fontSize = 16;
  this->fields.alignment = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.items = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.items, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_object___ctor__);
  this->fields.itemData = v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemData, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)&this->fields.padding.fields.x = xmmword_CEEAC0;
  *(_OWORD *)&this->fields.textColor.fields.b = _Q0;
  *(_OWORD *)&this->fields.backgroundColor.fields.b = xmmword_CEEAD0;
  *(_QWORD *)&this->fields.highlightColor.fields.b = 0x3F8000003F169697LL;
  this->fields.isAnimated = 1;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v22;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onChange, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mLabelList = (struct System_Collections_Generic_List_UILabel__o *)v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mLabelList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_9960/*"OnSelectionChange"*/;
  this->fields.functionName = (struct System_String_o *)StringLiteral_9960/*"OnSelectionChange"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.functionName, v36, v37, v38, v39, v40, v41, v42);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIPopupList__AddItem(UIPopupList_o *this, System_String_o *text, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *items; // x0
  struct System_Object_array *v11; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4CCBB27 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_object__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    byte_4CCBB27 = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_13;
  v11 = items->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++items->fields._version;
  if ( !v11 )
    goto LABEL_13;
  size = items->fields._size;
  if ( (unsigned int)size >= LODWORD(v11->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      (Il2CppObject *)text,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &v11->obj.klass + size;
    items->fields._size = size + 1;
    v14[4] = (Il2CppClass *)text;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)text, (int32_t)method, v3, v4, v5, v6, v7);
  }
  items = this->fields.itemData;
  if ( !items
    || (v21 = items->fields._items,
        v22 = Method_System_Collections_Generic_List_object__Add__,
        ++items->fields._version,
        !v21) )
  {
LABEL_13:
    sub_1C71608(items, text);
  }
  v23 = items->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      0,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    items->fields._size = v23 + 1;
    v24[4] = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), 0, v15, v16, v17, v18, v19, v20);
  }
}


void UIPopupList__AddItem_49563740(
        UIPopupList_o *this,
        System_String_o *text,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *items; // x0
  struct System_Object_array *v12; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4CCBB28 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_object__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    byte_4CCBB28 = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_13;
  v12 = items->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++items->fields._version;
  if ( !v12 )
    goto LABEL_13;
  size = items->fields._size;
  if ( (unsigned int)size >= LODWORD(v12->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      (Il2CppObject *)text,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &v12->obj.klass + size;
    items->fields._size = size + 1;
    v15[4] = (Il2CppClass *)text;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)text, (int32_t)data, (int32_t)method, v4, v5, v6, v7);
  }
  items = this->fields.itemData;
  if ( !items
    || (v22 = items->fields._items,
        v23 = Method_System_Collections_Generic_List_object__Add__,
        ++items->fields._version,
        !v22) )
  {
LABEL_13:
    sub_1C71608(items, text);
  }
  v24 = items->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      data,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    items->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)data;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)data, v16, v17, v18, v19, v20, v21);
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
    sub_1C71608(this, widget);
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
    sub_1C71608(this, widget);
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
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
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
    sub_1C71608(this, widget);
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
  if ( (byte_4CCBB26 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_object__Clear__);
    this = (UIPopupList_o *)sub_1C713B0(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4CCBB26 = 1;
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
    sub_1C71608(this, method);
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
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_mChild; // x20
  UnityEngine_Object_o *mChild; // x21
  void *klass; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_UILabel__o *mLabelList; // x8
  const MethodInfo *size; // x2
  int v15; // w9
  __int64 v16; // x8
  _QWORD *v17; // x21
  int v18; // w24
  int v19; // w25
  float v20; // s9
  float v21; // s10
  float v22; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x8
  _QWORD *v25; // x21
  int v26; // w24
  int v27; // w25
  UnityEngine_Object_o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  UnityEngine_Object_o *v35; // x21
  struct UISprite_o **p_mHighlight; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  UnityEngine_Color_o v49; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4CCBB34 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_4505/*"CloseIfUnselected"*/);
    byte_4CCBB34 = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_71710728(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4505/*"CloseIfUnselected"*/,
    0);
  this->fields.mSelection = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSelection, 0, v3, v4, v5, v6, v7, v8);
  p_mChild = (GrandQuestFolderBoardItem_o *)&this->fields.mChild;
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
    v15 = mLabelList->fields._version + 1;
    mLabelList->fields._size = 0;
    mLabelList->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)mLabelList->fields._items, 0, (int32_t)size, 0);
    UIPopupList__set_handleEvents(this, 0, size);
    if ( this->fields.isAnimated )
    {
      klass = p_mChild->klass;
      if ( !p_mChild->klass )
        goto LABEL_35;
      klass = UnityEngine_GameObject__GetComponentsInChildren_object__52050676(
                (UnityEngine_GameObject_o *)klass,
                (const MethodInfo_31A3AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !klass )
        goto LABEL_35;
      v16 = *((_QWORD *)klass + 3);
      v17 = klass;
      v18 = v16 - 1;
      if ( (int)v16 >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          klass = (void *)v17[v19 + 4];
          if ( !klass )
            break;
          v20 = *((float *)klass + 37);
          v21 = *((float *)klass + 38);
          v22 = *((float *)klass + 39);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
          v49.fields.a = 0.0;
          v49.fields.r = v20;
          v49.fields.g = v21;
          v49.fields.b = v22;
          klass = TweenColor__Begin(gameObject, 0.15, v49, 0);
          if ( !klass )
            break;
          *((_DWORD *)klass + 8) = 2;
          if ( v18 == v19 )
            goto LABEL_20;
          if ( (unsigned int)++v19 >= *((_DWORD *)v17 + 6) )
LABEL_27:
            sub_1C71610(klass);
        }
LABEL_35:
        sub_1C71608(klass, v12);
      }
LABEL_20:
      klass = p_mChild->klass;
      if ( !p_mChild->klass )
        goto LABEL_35;
      klass = UnityEngine_GameObject__GetComponentsInChildren_object__52050676(
                (UnityEngine_GameObject_o *)klass,
                (const MethodInfo_31A3AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
      if ( !klass )
        goto LABEL_35;
      v24 = *((_QWORD *)klass + 3);
      v25 = klass;
      v26 = v24 - 1;
      if ( (int)v24 >= 1 )
      {
        v27 = 0;
        while ( 1 )
        {
          klass = (void *)v25[v27 + 4];
          if ( !klass )
            goto LABEL_35;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)klass, 0, 0);
          if ( v26 == v27 )
            break;
          if ( (unsigned int)++v27 >= *((_DWORD *)v25 + 6) )
            goto LABEL_27;
        }
      }
      v28 = (UnityEngine_Object_o *)p_mChild->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy(v28, 0.15, 0);
    }
    else
    {
      v35 = (UnityEngine_Object_o *)p_mChild->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v35, 0);
    }
    this->fields.mBackground = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mBackground, 0, v29, v30, v31, v32, v33, v34);
    this->fields.mHighlight = 0;
    p_mHighlight = &this->fields.mHighlight;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_mHighlight, 0, v37, v38, v39, v40, v41, v42);
    *(p_mHighlight - 2) = 0;
    sub_1C71354(p_mChild, 0, v43, v44, v45, v46, v47, v48);
  }
}


System_Collections_IEnumerator_o *UIPopupList__CloseIfUnselected(UIPopupList_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCBB36 & 1) == 0 )
  {
    sub_1C713B0(&UIPopupList__CloseIfUnselected_d__93_TypeInfo);
    byte_4CCBB36 = 1;
  }
  v3 = sub_1C715FC(UIPopupList__CloseIfUnselected_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


UnityEngine_Vector3_o UIPopupList__GetHighlightPosition(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHighlightedLabel; // x20
  UnityEngine_Object_o *mHighlight; // x20
  __int64 v5; // x1
  UISprite_o *atlas; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v8; // x20
  float pixelSize; // s0
  int borderLeft; // s9
  int borderTop; // s10
  float v12; // s8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBB2E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB2E = 1;
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
        v8 = AtlasSprite;
        atlas = (UISprite_o *)this->fields.atlas;
        if ( atlas )
        {
          pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)atlas, 0);
          atlas = (UISprite_o *)this->fields.mHighlightedLabel;
          if ( atlas )
          {
            borderLeft = v8->fields.borderLeft;
            borderTop = v8->fields.borderTop;
            v12 = pixelSize;
            atlas = (UISprite_o *)UIRect__get_cachedTransform((UIRect_o *)atlas, 0);
            if ( atlas )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)atlas, 0);
              y = (float)(v12 * (float)borderTop) + localPosition.fields.y;
              x = localPosition.fields.x - (float)(v12 * (float)borderLeft);
              z = localPosition.fields.z + 1.0;
              goto LABEL_19;
            }
          }
        }
LABEL_18:
        sub_1C71608(atlas, v5);
      }
    }
  }
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  UISprite_o *cachedTransform; // x0
  const MethodInfo *v16; // x1
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o HighlightPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CCBB2D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_15202/*"UpdateTweenPosition"*/);
    byte_4CCBB2D = 1;
  }
  mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mHighlight, 0, 0) )
  {
    this->fields.mHighlightedLabel = lbl;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mHighlightedLabel,
      (int32_t)lbl,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    cachedTransform = this->fields.mHighlight;
    if ( cachedTransform )
    {
      if ( !UISprite__GetAtlasSprite(cachedTransform, 0) )
        return;
      HighlightPosition = UIPopupList__GetHighlightPosition(this, v16);
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
            v22.fields.y = y;
            v22.fields.z = z;
            v22.fields.x = x;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v22, 0);
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
          v23.fields.x = x;
          v23.fields.y = y;
          v23.fields.z = z;
          cachedTransform = (UISprite_o *)TweenPosition__Begin(gameObject, 0.1, v23, 0);
          if ( cachedTransform )
          {
            LODWORD(cachedTransform->fields.leftAnchor) = 2;
            if ( !this->fields.mTweening )
            {
              this->fields.mTweening = 1;
              UnityEngine_MonoBehaviour__StartCoroutine(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_15202/*"UpdateTweenPosition"*/,
                0);
            }
            return;
          }
        }
      }
    }
    sub_1C71608(cachedTransform, v14);
  }
}


void UIPopupList__OnClick(UIPopupList_o *this, const MethodInfo *method)
{
  int32_t openOn; // w8
  UICamera_c *v4; // x0

  if ( (byte_4CCBB35 & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBB35 = 1;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *font; // x20
  __int64 v17; // x1
  struct UIFont_o **p_font; // x20
  UIFont_o *klass; // x0
  struct UnityEngine_Font_o *dynamicFont; // x0
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
  bool v33; // w8
  UnityEngine_Object_o *bitmapFont; // x22
  struct UIFont_o *v35; // x1
  UnityEngine_Object_o *v36; // x20
  int32_t defaultSize; // w0
  float textScale; // s8
  float v39; // s9
  float v40; // s9
  double v41; // d8
  double v42; // d0
  double v43; // d0
  double v44; // d1
  int32_t v45; // w8
  double v46; // d1
  GrandQuestFolderBoardItem_o *p_trueTypeFont; // x20
  UnityEngine_Object_o *trueTypeFont; // x21
  GrandQuestFolderBoardItem_o *p_bitmapFont; // x19
  UnityEngine_Object_o *v50; // x21
  struct UIFont_o *v51; // t1
  UnityEngine_Font_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  double iptr; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CCBB2A & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB2A = 1;
  }
  onChange = this->fields.onChange;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  if ( EventDelegate__IsValid_49616128(onChange, 0) )
  {
    this->fields.eventReceiver = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.eventReceiver, 0, v4, v5, v6, v7, v8, v9);
    this->fields.functionName = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.functionName, 0, v10, v11, v12, v13, v14, v15);
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
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont,
        (int32_t)dynamicFont,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      klass = this->fields.font;
      if ( !klass )
        goto LABEL_56;
      this->fields.fontStyle = UIFont__get_dynamicFontStyle(klass, 0);
      v33 = 1;
    }
    else
    {
      bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(bitmapFont, 0, 0) )
        goto LABEL_20;
      v35 = *p_font;
      this->fields.bitmapFont = *p_font;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, (int32_t)v35, v27, v28, v29, v30, v31, v32);
      v33 = 0;
    }
    this->fields.mUseDynamicFont = v33;
LABEL_20:
    *p_font = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.font, 0, v27, v28, v29, v30, v31, v32);
  }
  if ( this->fields.textScale != 0.0 )
  {
    v36 = (UnityEngine_Object_o *)this->fields.bitmapFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v36, 0, 0) )
    {
      v45 = 16;
LABEL_44:
      this->fields.fontSize = v45;
      this->fields.textScale = 0.0;
      goto LABEL_45;
    }
    klass = this->fields.bitmapFont;
    if ( !klass )
      goto LABEL_56;
    defaultSize = UIFont__get_defaultSize(klass, 0);
    textScale = this->fields.textScale;
    v39 = (float)defaultSize;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    v40 = textScale * v39;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v41 = v40;
    v42 = modf(v40, &iptr);
    if ( v40 >= 0.0 )
    {
      if ( v42 == 0.5 )
      {
        v43 = iptr;
        v44 = 1.0;
LABEL_36:
        v46 = v43 + v44;
        if ( ((__int64)v43 & 1) != 0 )
          v43 = v46;
        goto LABEL_41;
      }
      v43 = floor(v41 + 0.5);
    }
    else
    {
      if ( v42 == -0.5 )
      {
        v43 = iptr;
        v44 = -1.0;
        goto LABEL_36;
      }
      v43 = ceil(v41 + -0.5);
    }
LABEL_41:
    if ( v43 == INFINITY )
      v45 = 0x80000000;
    else
      v45 = (int)v43;
    goto LABEL_44;
  }
LABEL_45:
  p_trueTypeFont = (GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont;
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
  {
    v51 = this->fields.bitmapFont;
    p_bitmapFont = (GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont;
    v50 = (UnityEngine_Object_o *)v51;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v50, 0, 0) )
    {
      klass = (UIFont_o *)p_bitmapFont->klass;
      if ( !p_bitmapFont->klass )
        goto LABEL_56;
      if ( UIFont__get_isDynamic(klass, 0) )
      {
        klass = (UIFont_o *)p_bitmapFont->klass;
        if ( p_bitmapFont->klass )
        {
          v52 = UIFont__get_dynamicFont(klass, 0);
          p_trueTypeFont->klass = (GrandQuestFolderBoardItem_c *)v52;
          sub_1C71354(p_trueTypeFont, (int32_t)v52, v53, v54, v55, v56, v57, v58);
          p_bitmapFont->klass = 0;
          sub_1C71354(p_bitmapFont, 0, v59, v60, v61, v62, v63, v64);
          return;
        }
LABEL_56:
        sub_1C71608(klass, v17);
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
  if ( (byte_4CCBB30 & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CCBB30 = 1;
  }
  if ( isOver )
  {
    if ( !go )
      sub_1C71608(this, go);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
  if ( (byte_4CCBB32 & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CCBB32 = 1;
  }
  if ( isPressed )
  {
    if ( !go )
      sub_1C71608(this, go);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    UIPopupList__Select(v6, (UILabel_o *)Component_object, 1, v8);
  }
}


void UIPopupList__OnKey(UIPopupList_o *this, int32_t key, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *mLabelList; // x0
  int32_t v9; // w0
  int v10; // w8
  Il2CppObject *Item; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4CCBB33 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_1C713B0(&NGUITools_TypeInfo);
    byte_4CCBB33 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49712152(gameObject, 0) && UIPopupList__get_handleEvents(this, v6) )
    {
      mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
      if ( !mLabelList )
        goto LABEL_23;
      v9 = System_Collections_Generic_List_object___IndexOf(
             mLabelList,
             (Il2CppObject *)this->fields.mHighlightedLabel,
             (const MethodInfo_38113B8 *)Method_System_Collections_Generic_List_UILabel__IndexOf__);
      if ( v9 == -1 )
        v10 = 0;
      else
        v10 = v9;
      switch ( key )
      {
        case 27:
          UIPopupList__Close(this, v7);
          return;
        case 274:
          mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
          if ( !mLabelList )
            goto LABEL_23;
          LODWORD(v7) = v10 + 1;
          if ( v10 + 1 < mLabelList->fields._size )
            goto LABEL_21;
          break;
        case 273:
          v7 = (const MethodInfo *)(unsigned int)(v10 - 1);
          if ( v10 >= 1 )
          {
            mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
            if ( !mLabelList )
LABEL_23:
              sub_1C71608(mLabelList, v7);
LABEL_21:
            Item = System_Collections_Generic_List_object___get_Item(
                     mLabelList,
                     (int32_t)v7,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            UIPopupList__Select(this, (UILabel_o *)Item, 0, v12);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_Font_o *trueTypeFont; // x23
  UnityEngine_Object_o *bitmapFont; // x21
  struct UIFont_o **p_bitmapFont; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct UnityEngine_Font_o *dynamicFont; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  bool v45; // w8

  if ( (byte_4CCBB2B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB2B = 1;
  }
  trueTypeFont = this->fields.trueTypeFont;
  p_bitmapFont = &this->fields.bitmapFont;
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  this->fields.bitmapFont = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, 0, v2, v3, v4, v5, v6, v7);
  this->fields.trueTypeFont = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont, 0, v12, v13, v14, v15, v16, v17);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trueTypeFont, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(bitmapFont, 0, 0) || !this->fields.mUseDynamicFont )
    {
      *p_bitmapFont = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, 0, v18, v19, v20, v21, v22, v23);
LABEL_17:
      this->fields.trueTypeFont = trueTypeFont;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont,
        (int32_t)trueTypeFont,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      goto LABEL_18;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
  if ( !v24 )
    goto LABEL_17;
  if ( !bitmapFont )
    sub_1C71608(v24, v25);
  if ( !UIFont__get_isDynamic((UIFont_o *)bitmapFont, 0) )
  {
    *p_bitmapFont = (struct UIFont_o *)bitmapFont;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont,
      (int32_t)bitmapFont,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v45 = 0;
    goto LABEL_19;
  }
  dynamicFont = UIFont__get_dynamicFont((UIFont_o *)bitmapFont, 0);
  this->fields.trueTypeFont = dynamicFont;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont,
    (int32_t)dynamicFont,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.fontStyle = UIFont__get_dynamicFontStyle((UIFont_o *)bitmapFont, 0);
  this->fields.fontSize = UIFont__get_defaultSize((UIFont_o *)bitmapFont, 0);
LABEL_18:
  v45 = 1;
LABEL_19:
  this->fields.mUseDynamicFont = v45;
}


void UIPopupList__Select(UIPopupList_o *this, UILabel_o *lbl, bool instant, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_String_c **monitor; // x8
  System_String_o *v11; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x19
  int v14; // w21
  int v15; // w22
  __int64 v16; // x8
  UnityEngine_AudioClip_o *v17; // x20
  float v18; // s8

  if ( (byte_4CCBB31 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponents_UIPlaySound___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    byte_4CCBB31 = 1;
  }
  UIPopupList__Highlight(this, lbl, instant, method);
  if ( !lbl )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lbl, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
  if ( !gameObject )
    goto LABEL_23;
  monitor = (System_String_c **)gameObject[1].monitor;
  if ( monitor )
    v11 = *monitor == string_TypeInfo ? (System_String_o *)gameObject[1].monitor : 0LL;
  else
    v11 = 0;
  UIPopupList__set_value(this, v11, v9);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponents_object__51651568(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_31423F0 *)Method_UnityEngine_Component_GetComponents_UIPlaySound___);
  if ( !gameObject )
    goto LABEL_23;
  klass = gameObject[1].klass;
  v13 = gameObject;
  v14 = (_DWORD)klass - 1;
  if ( (int)klass >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *((_QWORD *)&v13[1].monitor + v15);
      if ( !v16 )
        break;
      if ( !*(_DWORD *)(v16 + 40) )
      {
        v17 = *(UnityEngine_AudioClip_o **)(v16 + 32);
        v18 = *(float *)(v16 + 44);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)NGUITools__PlaySound_49710300(v17, v18, 1.0, 0);
      }
      if ( v14 == v15 )
        return;
      if ( (unsigned int)++v15 >= LODWORD(v13[1].klass) )
        sub_1C71610(gameObject);
    }
LABEL_23:
    sub_1C71608(gameObject, v8);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Transform_o *v26; // x22
  UnityEngine_GameObject_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_Transform_o *v35; // x23
  UnityEngine_Object_o *selectedObject; // x20
  struct UnityEngine_GameObject_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  UnityEngine_GameObject_o *mSelection; // x20
  struct UnityEngine_GameObject_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  UnityEngine_Object_o *v52; // x23
  UnityEngine_Object_o *v53; // x20
  bool v54; // w0
  UnityEngine_Transform_o *v55; // x22
  UICamera_c *v56; // x8
  UnityEngine_Camera_o *v57; // x23
  struct UICamera_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s10
  float v61; // s11
  float v62; // s12
  UnityEngine_Transform_o *parent; // x0
  unsigned __int64 v64; // d1 OVERLAPPED
  float v65; // s0
  int v66; // s2
  UnityEngine_GameObject_o *v67; // x23
  UIAtlas_o *v68; // x20
  System_String_o *backgroundSprite; // x22
  struct UISprite_o *v70; // x0
  struct UISprite_o **p_mBackground; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  UIWidget_o *v78; // x23
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Transform_o *v80; // x20
  float v81; // s0
  float v82; // s1
  float v83; // s14
  float v84; // s13
  struct UISprite_o *v85; // x0
  struct UISprite_o **p_mHighlight; // x22
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  UISpriteData_o *AtlasSprite; // x0
  const MethodInfo *v94; // x1
  int32_t borderTop; // s15
  int32_t activeFontSize; // w26
  const MethodInfo *v97; // x1
  float activeFontScale; // s0
  float v99; // s8
  System_Collections_Generic_List_object__o *v100; // x24
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  int klass; // w21
  float v108; // s15
  float v109; // s11
  float v110; // s8
  float v111; // s9
  float v112; // s13
  float v113; // s12
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v115; // x20
  NGUITools_c **v116; // x22
  System_String_o *v117; // x29
  Il2CppObject *v118; // x28
  System_String_o *v119; // x1
  float v120; // s0
  UnityEngine_Transform_o *cachedTransform; // x0
  float v122; // s10
  UnityEngine_Transform_o *v123; // x26
  float v124; // s0
  float v125; // s0 OVERLAPPED
  UnityEngine_Transform_o *v126; // x0
  float v127; // s10
  float v128; // s0
  float v129; // s2
  float v130; // s1
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  float v141; // s10
  float v142; // s0
  UnityEngine_GameObject_o *v143; // x0
  UIEventListener_o *v144; // x26
  UIEventListener_BoolDelegate_o *v145; // x20
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  UIEventListener_BoolDelegate_o *v152; // x20
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  UIEventListener_VoidDelegate_o *v159; // x20
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  System_String_o *v174; // x4
  int32_t v175; // w5
  int64_t v176; // x6
  System_String_o *v177; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v179; // x9
  __int64 klass_low; // x10
  intptr_t v181; // x8
  struct System_Collections_Generic_List_UILabel__o *v182; // x8
  float v183; // s8
  float v184; // s9
  int v185; // w21
  int32_t v186; // w25
  float v187; // s8
  UIRect_o *v188; // x26
  UnityEngine_GameObject_o *v189; // x20
  Il2CppObject *Component_object; // x27
  UnityEngine_BoxCollider2D_o *v191; // x20
  double v192; // d8
  double v193; // d0
  double v194; // d0
  double v195; // d1
  double v196; // d1
  UIWidget_o *mBackground; // x27
  int32_t v198; // w25
  float v199; // s8
  float v200; // s10
  double v201; // d8
  double v202; // d0
  double v203; // d0
  double v204; // d1
  double v205; // d1
  float v206; // s9
  int32_t v207; // w1
  UIWidget_o *v208; // x27
  float v209; // s12
  double v210; // d8
  double v211; // d0
  double v212; // d0
  double v213; // d1
  double v214; // d1
  int32_t v215; // w1
  UIWidget_o *v216; // x27
  float v217; // s12
  double v218; // d8
  double v219; // d0
  double v220; // d0
  double v221; // d1
  double v222; // d1
  int32_t v223; // w1
  int v224; // w23
  int32_t v225; // w26
  UIWidget_o *v226; // x20
  float pixelSize; // s0
  float v228; // s12
  UIWidget_o *mHighlight; // x25
  UnityEngine_Transform_o *v230; // x23
  float v231; // s8
  float v232; // s10
  float v233; // s10
  double v234; // d8
  double v235; // d0
  double v236; // d0
  double v237; // d1
  double v238; // d1
  int32_t v239; // w1
  UIWidget_o *v240; // x25
  float v241; // s10
  double v242; // d8
  double v243; // d0
  struct UISprite_o **v244; // x21
  double v245; // d0
  double v246; // d1
  double v247; // d1
  int32_t v248; // w1
  const MethodInfo *v249; // x2
  int32_t v250; // w8
  _BOOL4 v251; // w25
  int32_t layer; // w20
  UnityEngine_Object_o *CameraForLayer; // x26
  UIWidget_o *v254; // x20
  UIPopupList_o *v255; // x0
  const MethodInfo *v256; // x3
  UIPopupList_o *v257; // x0
  const MethodInfo *v258; // x2
  int v259; // w21
  int32_t i; // w23
  Il2CppObject *v261; // x20
  const MethodInfo *v262; // x2
  UIPopupList_o *v263; // x0
  const MethodInfo *v264; // x3
  const MethodInfo *v265; // x3
  float v266; // s0
  float v267; // s8
  float v268; // s1
  float v269; // s9
  float v270; // s2
  float v271; // s10
  float position; // [xsp+Ch] [xbp-134h]
  float position_4; // [xsp+10h] [xbp-130h]
  float position_8; // [xsp+14h] [xbp-12Ch]
  float v275; // [xsp+18h] [xbp-128h]
  float v276; // [xsp+1Ch] [xbp-124h]
  struct UIPanel_o **v277; // [xsp+20h] [xbp-120h]
  int v278; // [xsp+2Ch] [xbp-114h]
  UISpriteData_o *v279; // [xsp+30h] [xbp-110h]
  float v280; // [xsp+38h] [xbp-108h]
  float v281; // [xsp+3Ch] [xbp-104h]
  float y; // [xsp+40h] [xbp-100h]
  UIWidget_o **v283; // [xsp+50h] [xbp-F0h]
  float v284; // [xsp+5Ch] [xbp-E4h]
  struct UISprite_o **v285; // [xsp+60h] [xbp-E0h]
  GrandQuestFolderBoardItem_o *p_mSelectedItem; // [xsp+68h] [xbp-D8h]
  UnityEngine_Transform_o *v287; // [xsp+70h] [xbp-D0h]
  float v288; // [xsp+7Ch] [xbp-C4h]
  UnityEngine_Bounds_o iptr; // [xsp+80h] [xbp-C0h] BYREF
  int v290; // [xsp+9Ch] [xbp-A4h] BYREF
  UnityEngine_Vector2_o v291; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v292; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v293; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v294; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v295; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v296; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v297; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v298; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v301; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v302; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v303; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v304; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v305; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v306; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBB37 & 1) == 0 )
  {
    sub_1C713B0(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C713B0(&UnityEngine_GameObject_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_1C713B0(&Localization_TypeInfo);
    sub_1C713B0(&Method_NGUITools_AddWidget_UILabel___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&UIPanel_TypeInfo);
    sub_1C713B0(&Method_UIPopupList_OnItemClick__);
    sub_1C713B0(&Method_UIPopupList_OnItemHover__);
    sub_1C713B0(&Method_UIPopupList_OnItemPress__);
    sub_1C713B0(&UIEventListener_VoidDelegate_TypeInfo);
    sub_1C713B0(&StringLiteral_4505/*"CloseIfUnselected"*/);
    sub_1C713B0(&StringLiteral_5369/*"Drop-down List"*/);
    byte_4CCBB37 = 1;
  }
  v290 = 0;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    goto LABEL_40;
  v4 = &NGUITools_TypeInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_49712152(gameObject, 0) )
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v18, v19, v20, v21, v22, v23, v24);
    v25 = (UnityEngine_Object_o *)*p_mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v25, 0, 0) )
    {
LABEL_283:
      UIPopupList__set_handleEvents(this, 1, v16);
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      v27 = (UnityEngine_GameObject_o *)sub_1C715FC(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v27, (System_String_o *)StringLiteral_5369/*"Drop-down List"*/, 0);
      this->fields.mChild = v27;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mChild, (int32_t)v27, v28, v29, v30, v31, v32, v33);
      v34 = this->fields.mChild;
      isValid = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !isValid )
        goto LABEL_280;
      isValid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(isValid, 0);
      if ( !v34 )
        goto LABEL_280;
      UnityEngine_GameObject__set_layer(v34, (int32_t)isValid, 0);
      isValid = *p_mChild;
      if ( !*p_mChild )
        goto LABEL_280;
      isValid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(isValid, 0);
      if ( !v26 )
        goto LABEL_280;
      v35 = (UnityEngine_Transform_o *)isValid;
      isValid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(v26, 0);
      if ( !v35 )
        goto LABEL_280;
      UnityEngine_Transform__set_parent(v35, (UnityEngine_Transform_o *)isValid, 0);
      UnityEngine_MonoBehaviour__StopCoroutine_71710728(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4505/*"CloseIfUnselected"*/,
        0);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(selectedObject, 0, 0) )
      {
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this->fields.mSelection = v37;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSelection, (int32_t)v37, v38, v39, v40, v41, v42, v43);
        mSelection = this->fields.mSelection;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        UICamera__set_selectedObject(mSelection, 0);
      }
      else
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v45 = UICamera__get_selectedObject(0);
        this->fields.mSelection = v45;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSelection, (int32_t)v45, v46, v47, v48, v49, v50, v51);
      }
      v287 = v35;
      if ( this->fields.openOn != 3 )
        goto LABEL_55;
      v52 = (UnityEngine_Object_o *)this->fields.mSelection;
      v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v54 = UnityEngine_Object__op_Inequality(v52, v53, 0);
      v35 = v287;
      if ( v54 )
      {
        isValid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(v287, 0);
        if ( !*p_mPanel )
          goto LABEL_280;
        v55 = (UnityEngine_Transform_o *)isValid;
        isValid = (UnityEngine_GameObject_o *)UIRect__get_anchorCamera(*p_mPanel, 0);
        v56 = UICamera_TypeInfo;
        v57 = (UnityEngine_Camera_o *)isValid;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v56 = UICamera_TypeInfo;
        }
        if ( !v57 )
          goto LABEL_280;
        static_fields = v56->static_fields;
        v293.fields.z = 0.0;
        v293.fields.x = static_fields->lastTouchPosition.fields.x;
        v293.fields.y = static_fields->lastTouchPosition.fields.y;
        v294 = UnityEngine_Camera__ScreenToWorldPoint_71529204(v57, v293, 0);
        if ( !v55 )
          goto LABEL_280;
        v295 = UnityEngine_Transform__InverseTransformPoint(v55, v294, 0);
        v35 = v287;
        x = v295.fields.x;
        z = v295.fields.z;
        y = v295.fields.y;
        UnityEngine_Transform__set_localPosition(v287, v295, 0);
        v296 = UnityEngine_Transform__get_position(v287, 0);
        v61 = v296.fields.x;
        position_8 = v296.fields.z;
        v275 = v296.fields.y;
        v62 = x;
      }
      else
      {
LABEL_55:
        parent = UnityEngine_Transform__get_parent(v26, 0);
        NGUIMath__CalculateRelativeWidgetBounds_49666724(&iptr, parent, v26, 0, 0, 0);
        v64 = vsub_f32(*(float32x2_t *)&iptr.fields.m_Center.fields.y, *(float32x2_t *)&iptr.fields.m_Extents.fields.y).n64_u64[0];
        z = *((float *)&v64 + 1);
        v62 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
        x = iptr.fields.m_Center.fields.x + iptr.fields.m_Extents.fields.x;
        LODWORD(y) = vadd_f32(
                       *(float32x2_t *)&iptr.fields.m_Center.fields.y,
                       *(float32x2_t *)&iptr.fields.m_Extents.fields.y).n64_u32[0];
        v65 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
        v66 = HIDWORD(v64);
        UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)((char *)&v64 - 4), 0);
        v297 = UnityEngine_Transform__get_position(v26, 0);
        v61 = v297.fields.x;
        position_8 = v297.fields.z;
        v275 = v297.fields.y;
      }
      UnityEngine_MonoBehaviour__StartCoroutine(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4505/*"CloseIfUnselected"*/,
        0);
      if ( !byte_4CC0D0F )
      {
        sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
        byte_4CC0D0F = 1;
      }
      UnityEngine_Transform__set_localRotation(
        v35,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      if ( !byte_4CC0D0E )
      {
        sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
      }
      UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v67 = this->fields.mChild;
      v68 = this->fields.atlas;
      backgroundSprite = this->fields.backgroundSprite;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v70 = NGUITools__AddSprite(v67, v68, backgroundSprite, 0);
      this->fields.mBackground = v70;
      p_mBackground = &this->fields.mBackground;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mBackground, (int32_t)v70, v72, v73, v74, v75, v76, v77);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      if ( !isValid )
        goto LABEL_280;
      UIWidget__set_pivot((UIWidget_o *)isValid, 0, 0);
      isValid = (UnityEngine_GameObject_o *)*p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_280;
      v78 = (UIWidget_o *)*p_mBackground;
      v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
      isValid = (UnityEngine_GameObject_o *)NGUITools__CalculateNextDepth(v79, 0);
      if ( !v78 )
        goto LABEL_280;
      UIWidget__set_depth(v78, (int32_t)isValid, 0);
      isValid = (UnityEngine_GameObject_o *)*p_mBackground;
      if ( !*p_mBackground )
        goto LABEL_280;
      UIWidget__set_color((UIWidget_o *)isValid, this->fields.backgroundColor, 0);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      v80 = v287;
      if ( !isValid )
        goto LABEL_280;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))isValid->klass[2]._1.events)(
        isValid,
        isValid->klass[2]._1.properties);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      this->fields.mBgBorder = v82;
      if ( !isValid )
        goto LABEL_280;
      v83 = v81;
      v84 = v82;
      isValid = (UnityEngine_GameObject_o *)UIRect__get_cachedTransform((UIRect_o *)isValid, 0);
      if ( !isValid )
        goto LABEL_280;
      v298.fields.x = 0.0;
      v298.fields.z = 0.0;
      v298.fields.y = v84;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)isValid, v298, 0);
      v85 = NGUITools__AddSprite(this->fields.mChild, this->fields.atlas, this->fields.highlightSprite, 0);
      this->fields.mHighlight = v85;
      p_mHighlight = &this->fields.mHighlight;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mHighlight, (int32_t)v85, v87, v88, v89, v90, v91, v92);
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
        v279 = AtlasSprite;
        v283 = (UIWidget_o **)&this->fields.mHighlight;
        v277 = &this->fields.mPanel;
        activeFontSize = UIPopupList__get_activeFontSize(this, v94);
        activeFontScale = UIPopupList__get_activeFontScale(this, v97);
        v99 = this->fields.padding.fields.y;
        v284 = activeFontScale;
        v100 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UILabel__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v100,
          (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UILabel___ctor__);
        isValid = (UnityEngine_GameObject_o *)this->fields.items;
        if ( !isValid )
          goto LABEL_280;
        p_mSelectedItem = (GrandQuestFolderBoardItem_o *)&this->fields.mSelectedItem;
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)isValid,
                (Il2CppObject *)this->fields.mSelectedItem,
                (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          p_mSelectedItem->klass = 0;
          sub_1C71354(p_mSelectedItem, 0, v101, v102, v103, v104, v105, v106);
        }
        v290 = 0;
        isValid = (UnityEngine_GameObject_o *)this->fields.items;
        v278 = borderTop;
        v280 = v84;
        v285 = &this->fields.mBackground;
        position = v61;
        position_4 = z;
        if ( !isValid )
          goto LABEL_280;
        klass = (int)isValid[1].klass;
        v108 = -v99;
        v109 = v284 * (float)activeFontSize;
        v276 = v62;
        v281 = x - v62;
        if ( klass < 1 )
        {
          v110 = 0.0;
          v111 = 0.0;
          v112 = 0.0;
          v113 = 0.0;
        }
        else
        {
          v288 = (float)(x - v62) * v284;
          LODWORD(v3) = 0;
          v110 = 0.0;
          v111 = 0.0;
          v112 = 0.0;
          v113 = 0.0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)isValid,
                     (int32_t)v3,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
            v115 = *p_mChild;
            v116 = v4;
            v117 = (System_String_o *)Item;
            if ( !(*v4)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v4);
            v118 = NGUITools__AddWidget_object_(v115, (const MethodInfo_31D5810 *)Method_NGUITools_AddWidget_UILabel___);
            isValid = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v290, 0);
            if ( !v118 )
              goto LABEL_280;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v118, (System_String_o *)isValid, 0);
            UIWidget__set_pivot((UIWidget_o *)v118, 0, 0);
            UILabel__set_bitmapFont((UILabel_o *)v118, this->fields.bitmapFont, 0);
            UILabel__set_trueTypeFont((UILabel_o *)v118, this->fields.trueTypeFont, 0);
            UILabel__set_fontSize((UILabel_o *)v118, this->fields.fontSize, 0);
            UILabel__set_fontStyle((UILabel_o *)v118, this->fields.fontStyle, 0);
            if ( this->fields.isLocalized )
            {
              if ( !Localization_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v119 = Localization__Get(v117, 0);
            }
            else
            {
              v119 = v117;
            }
            UILabel__set_text((UILabel_o *)v118, v119, 0);
            UIWidget__set_color((UIWidget_o *)v118, this->fields.textColor, 0);
            if ( this->fields.isAligument )
            {
              if ( v290 && !(v290 % 20) )
              {
                v110 = v108;
                v108 = -this->fields.padding.fields.y;
                v120 = v288
                     - (float)((float)(v83 + this->fields.padding.fields.x)
                             + (float)(v83 + this->fields.padding.fields.x));
                if ( v113 > v120 )
                  v120 = v113;
                v112 = v112 + v120;
                if ( v111 <= v113 )
                  v111 = v113;
                v113 = 0.0;
              }
              cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v118, 0);
              v122 = this->fields.padding.fields.x;
              v123 = cachedTransform;
              LODWORD(v124) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v118, 0);
              if ( !v123 )
                goto LABEL_280;
              v125 = v112 + (float)((float)(v83 + v122) - v124);
            }
            else
            {
              v126 = UIRect__get_cachedTransform((UIRect_o *)v118, 0);
              v127 = this->fields.padding.fields.x;
              v123 = v126;
              LODWORD(v128) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v118, 0);
              if ( !v123 )
                goto LABEL_280;
              v125 = (float)(v83 + v127) - v128;
            }
            v129 = -1.0;
            v130 = v108;
            UnityEngine_Transform__set_localPosition(v123, *(UnityEngine_Vector3_o *)&v125, 0);
            UILabel__set_overflowMethod((UILabel_o *)v118, 2, 0);
            UILabel__set_alignment((UILabel_o *)v118, this->fields.alignment, 0);
            if ( !v100 )
              goto LABEL_280;
            v137 = v100->fields._items;
            v138 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++v100->fields._version;
            if ( !v137 )
              goto LABEL_280;
            v139 = v100->fields._size;
            if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v100,
                v118,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
            }
            else
            {
              v140 = &v137->obj.klass + v139;
              v100->fields._size = v139 + 1;
              v140[4] = (Il2CppClass *)v118;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v140 + 4), (int32_t)v118, v131, v132, v133, v134, v135, v136);
            }
            v141 = this->fields.padding.fields.y;
            v142 = UILabel__get_printedSize((UILabel_o *)v118, 0).fields.x;
            if ( v113 <= v142 )
              v113 = v142;
            v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v118, 0);
            v144 = UIEventListener__Get(v143, 0);
            v145 = (UIEventListener_BoolDelegate_o *)sub_1C715FC(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v145, (Il2CppObject *)this, Method_UIPopupList_OnItemHover__, 0);
            if ( !v144 )
              goto LABEL_280;
            v144->fields.onHover = v145;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v144->fields.onHover,
              (int32_t)v145,
              v146,
              v147,
              v148,
              v149,
              v150,
              v151);
            v152 = (UIEventListener_BoolDelegate_o *)sub_1C715FC(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v152, (Il2CppObject *)this, Method_UIPopupList_OnItemPress__, 0);
            v144->fields.onPress = v152;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v144->fields.onPress,
              (int32_t)v152,
              v153,
              v154,
              v155,
              v156,
              v157,
              v158);
            v159 = (UIEventListener_VoidDelegate_o *)sub_1C715FC(UIEventListener_VoidDelegate_TypeInfo);
            UIEventListener_VoidDelegate___ctor(v159, (Il2CppObject *)this, Method_UIPopupList_OnItemClick__, 0);
            v144->fields.onClick = v159;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v144->fields.onClick,
              (int32_t)v159,
              v160,
              v161,
              v162,
              v163,
              v164,
              v165);
            v144->fields.parameter = (Il2CppObject *)v117;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v144->fields.parameter,
              (int32_t)v117,
              v166,
              v167,
              v168,
              v169,
              v170,
              v171);
            if ( System_String__op_Equality(this->fields.mSelectedItem, v117, 0)
              || !v290 && System_String__IsNullOrEmpty((System_String_o *)p_mSelectedItem->klass, 0) )
            {
              UIPopupList__Highlight(this, (UILabel_o *)v118, 1, v173);
            }
            isValid = (UnityEngine_GameObject_o *)this->fields.mLabelList;
            if ( !isValid )
              goto LABEL_280;
            m_CachedPtr = isValid->fields.m_CachedPtr;
            v179 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++HIDWORD(isValid[1].klass);
            if ( !m_CachedPtr )
              goto LABEL_280;
            klass_low = SLODWORD(isValid[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)isValid,
                v118,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
            }
            else
            {
              v181 = m_CachedPtr + 8 * klass_low;
              LODWORD(isValid[1].klass) = klass_low + 1;
              *(_QWORD *)(v181 + 32) = v118;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)(v181 + 32),
                (int32_t)v118,
                v172,
                (int32_t)v173,
                v174,
                v175,
                v176,
                v177);
            }
            v108 = (float)(v108 - v109) - v141;
            v4 = v116;
            v3 = (const MethodInfo *)(unsigned int)++v290;
            if ( v290 >= klass )
              break;
            isValid = (UnityEngine_GameObject_o *)this->fields.items;
            if ( !isValid )
              goto LABEL_280;
          }
          v80 = v287;
        }
        if ( this->fields.isAligument )
        {
          v182 = this->fields.mLabelList;
          if ( !v182 )
            goto LABEL_280;
          if ( v182->fields._size >= 21 )
            v108 = v110;
          if ( v111 > v113 )
            v113 = v111;
        }
        if ( !this->fields.position )
        {
          LODWORD(v183) = (unsigned int)UnityEngine_Transform__get_localPosition(v80, 0);
          localPosition = UnityEngine_Transform__get_localPosition(v80, 0);
          localPosition.fields.y = v108 * -0.5;
          localPosition.fields.x = v183;
          UnityEngine_Transform__set_localPosition(v80, localPosition, 0);
        }
        v184 = v113 <= (float)((float)(v281 * v284)
                             - (float)((float)(v83 + this->fields.padding.fields.x)
                                     + (float)(v83 + this->fields.padding.fields.x)))
             ? (float)(v281 * v284)
             - (float)((float)(v83 + this->fields.padding.fields.x) + (float)(v83 + this->fields.padding.fields.x))
             : v113;
        if ( !v100 )
          goto LABEL_280;
        v185 = v100->fields._size;
        if ( v185 >= 1 )
        {
          v186 = 0;
          v187 = v109 + this->fields.padding.fields.y;
          do
          {
            isValid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    v100,
                                                    v186,
                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_280;
            v188 = (UIRect_o *)isValid;
            v189 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
            if ( !(*v4)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v4);
            NGUITools__AddWidgetCollider(v189, 0);
            LOBYTE(v188[1].fields.topAnchor) = 0;
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)v188,
                                 (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
              center.fields.x = v184 * 0.5;
              center.fields.y = v109 * -0.5;
              UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, center, 0);
              v301.fields.z = 1.0;
              v301.fields.x = v184;
              v301.fields.y = v187;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v301, 0);
            }
            else
            {
              isValid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)v188,
                                                      (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
              if ( !isValid )
                goto LABEL_280;
              v291.fields.x = v184 * 0.5;
              v291.fields.y = v109 * -0.5;
              v191 = (UnityEngine_BoxCollider2D_o *)isValid;
              UnityEngine_Collider2D__set_offset((UnityEngine_Collider2D_o *)isValid, v291, 0);
              v292.fields.x = v184;
              v292.fields.y = v187;
              UnityEngine_BoxCollider2D__set_size(v191, v292, 0);
            }
          }
          while ( v185 != ++v186 );
        }
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v192 = v184;
        v193 = modf(v184, (double *)&iptr.fields.m_Center.fields.x);
        if ( v184 >= 0.0 )
        {
          if ( v193 != 0.5 )
          {
            v194 = floor(v192 + 0.5);
            goto LABEL_160;
          }
          v194 = *(double *)&iptr.fields.m_Center.fields.x;
          v195 = 1.0;
        }
        else
        {
          if ( v193 != -0.5 )
          {
            v194 = ceil(v192 + -0.5);
            goto LABEL_160;
          }
          v194 = *(double *)&iptr.fields.m_Center.fields.x;
          v195 = -1.0;
        }
        v196 = v194 + v195;
        if ( ((__int64)v194 & 1) != 0 )
          v194 = v196;
LABEL_160:
        mBackground = (UIWidget_o *)this->fields.mBackground;
        if ( v194 == INFINITY )
          v198 = 0x80000000;
        else
          v198 = (int)v194;
        v199 = (float)(v83 + this->fields.padding.fields.x) + (float)(v83 + this->fields.padding.fields.x);
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
        }
        v200 = v184 + v199;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v201 = v200;
        v202 = modf(v200, (double *)&iptr.fields.m_Center.fields.x);
        if ( v200 >= 0.0 )
        {
          if ( v202 != 0.5 )
          {
            v203 = floor(v201 + 0.5);
            goto LABEL_177;
          }
          v203 = *(double *)&iptr.fields.m_Center.fields.x;
          v204 = 1.0;
        }
        else
        {
          if ( v202 != -0.5 )
          {
            v203 = ceil(v201 + -0.5);
            goto LABEL_177;
          }
          v203 = *(double *)&iptr.fields.m_Center.fields.x;
          v204 = -1.0;
        }
        v205 = v203 + v204;
        if ( ((__int64)v203 & 1) != 0 )
          v203 = v205;
LABEL_177:
        if ( !mBackground )
          goto LABEL_280;
        v206 = v108 - v280;
        if ( v203 == INFINITY )
          v207 = 0x80000000;
        else
          v207 = (int)v203;
        UIWidget__set_width(mBackground, v207, 0);
        v208 = (UIWidget_o *)*v285;
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
        }
        v209 = v280 - v206;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v210 = v209;
        v211 = modf(v209, (double *)&iptr.fields.m_Center.fields.x);
        if ( v209 >= 0.0 )
        {
          if ( v211 != 0.5 )
          {
            v212 = floor(v210 + 0.5);
            goto LABEL_195;
          }
          v212 = *(double *)&iptr.fields.m_Center.fields.x;
          v213 = 1.0;
        }
        else
        {
          if ( v211 != -0.5 )
          {
            v212 = ceil(v210 + -0.5);
            goto LABEL_195;
          }
          v212 = *(double *)&iptr.fields.m_Center.fields.x;
          v213 = -1.0;
        }
        v214 = v212 + v213;
        if ( ((__int64)v212 & 1) != 0 )
          v212 = v214;
LABEL_195:
        if ( !v208 )
          goto LABEL_280;
        if ( v212 == INFINITY )
          v215 = 0x80000000;
        else
          v215 = (int)v212;
        UIWidget__set_height(v208, v215, 0);
        if ( !this->fields.isAligument )
          goto LABEL_219;
        v216 = (UIWidget_o *)*v285;
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
        }
        v217 = v112 + v200;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v218 = v217;
        v219 = modf(v217, (double *)&iptr.fields.m_Center.fields.x);
        if ( v217 >= 0.0 )
        {
          if ( v219 == 0.5 )
          {
            v220 = *(double *)&iptr.fields.m_Center.fields.x;
            v221 = 1.0;
LABEL_209:
            v222 = v220 + v221;
            if ( ((__int64)v220 & 1) != 0 )
              v220 = v222;
            goto LABEL_214;
          }
          v220 = floor(v218 + 0.5);
        }
        else
        {
          if ( v219 == -0.5 )
          {
            v220 = *(double *)&iptr.fields.m_Center.fields.x;
            v221 = -1.0;
            goto LABEL_209;
          }
          v220 = ceil(v218 + -0.5);
        }
LABEL_214:
        if ( !v216 )
          goto LABEL_280;
        if ( v220 == INFINITY )
          v223 = 0x80000000;
        else
          v223 = (int)v220;
        UIWidget__set_width(v216, v223, 0);
LABEL_219:
        v224 = v100->fields._size;
        if ( v224 >= 1 )
        {
          v225 = 0;
          do
          {
            isValid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    v100,
                                                    v225,
                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_280;
            v226 = (UIWidget_o *)isValid;
            UILabel__set_overflowMethod((UILabel_o *)isValid, 0, 0);
            UIWidget__set_width(v226, v198, 0);
          }
          while ( v224 != ++v225 );
        }
        isValid = (UnityEngine_GameObject_o *)this->fields.atlas;
        if ( !isValid )
          goto LABEL_280;
        pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)isValid, 0);
        v228 = pixelSize + pixelSize;
        mHighlight = (UIWidget_o *)this->fields.mHighlight;
        v230 = v287;
        v231 = v200
             - (float)((float)(v83 + this->fields.padding.fields.x) + (float)(v83 + this->fields.padding.fields.x));
        v232 = (float)(pixelSize + pixelSize) * (float)v279->fields.borderLeft;
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
        }
        v233 = v231 + v232;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v234 = v233;
        v235 = modf(v233, (double *)&iptr.fields.m_Center.fields.x);
        if ( v233 >= 0.0 )
        {
          if ( v235 != 0.5 )
          {
            v236 = floor(v234 + 0.5);
            goto LABEL_238;
          }
          v236 = *(double *)&iptr.fields.m_Center.fields.x;
          v237 = 1.0;
        }
        else
        {
          if ( v235 != -0.5 )
          {
            v236 = ceil(v234 + -0.5);
            goto LABEL_238;
          }
          v236 = *(double *)&iptr.fields.m_Center.fields.x;
          v237 = -1.0;
        }
        v238 = v236 + v237;
        if ( ((__int64)v236 & 1) != 0 )
          v236 = v238;
LABEL_238:
        if ( !mHighlight )
          goto LABEL_280;
        if ( v236 == INFINITY )
          v239 = 0x80000000;
        else
          v239 = (int)v236;
        UIWidget__set_width(mHighlight, v239, 0);
        v240 = *v283;
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
        }
        v241 = v109 + (float)(v228 * (float)v278);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v242 = v241;
        v243 = modf(v241, (double *)&iptr.fields.m_Center.fields.x);
        v244 = &this->fields.mBackground;
        if ( v241 >= 0.0 )
        {
          if ( v243 == 0.5 )
          {
            v245 = *(double *)&iptr.fields.m_Center.fields.x;
            v246 = 1.0;
LABEL_251:
            v247 = v245 + v246;
            if ( ((__int64)v245 & 1) != 0 )
              v245 = v247;
            goto LABEL_256;
          }
          v245 = floor(v242 + 0.5);
        }
        else
        {
          if ( v243 == -0.5 )
          {
            v245 = *(double *)&iptr.fields.m_Center.fields.x;
            v246 = -1.0;
            goto LABEL_251;
          }
          v245 = ceil(v242 + -0.5);
        }
LABEL_256:
        if ( !v240 )
          goto LABEL_280;
        if ( v245 == INFINITY )
          v248 = 0x80000000;
        else
          v248 = (int)v245;
        UIWidget__set_height(v240, v248, 0);
        v250 = this->fields.position;
        v251 = v250 == 1;
        if ( !v250 )
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
            v302.fields.x = position;
            v302.fields.z = position_8;
            v302.fields.y = v275;
            v303 = UnityEngine_Camera__WorldToViewportPoint_71529188((UnityEngine_Camera_o *)isValid, v302, 0);
            v251 = v303.fields.y < 0.5;
          }
        }
        if ( this->fields.isAnimated )
        {
          v254 = *v283;
          UIPopupList__AnimateColor((UIPopupList_o *)isValid, *v283, v249);
          UIPopupList__AnimatePosition(v255, v254, v251, v109 + v206, v256);
          v259 = v100->fields._size;
          if ( v259 >= 1 )
          {
            for ( i = 0; i != v259; ++i )
            {
              v261 = System_Collections_Generic_List_object___get_Item(
                       v100,
                       i,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
              UIPopupList__AnimateColor((UIPopupList_o *)v261, (UIWidget_o *)v261, v262);
              UIPopupList__AnimatePosition(v263, (UIWidget_o *)v261, v251, v109 + v206, v264);
            }
          }
          UIPopupList__AnimateColor(v257, (UIWidget_o *)this->fields.mBackground, v258);
          UIPopupList__AnimateScale(this, (UIWidget_o *)this->fields.mBackground, v251, v266, v265);
          v230 = v287;
          v244 = &this->fields.mBackground;
        }
        if ( v251 )
        {
          v304.fields.z = position_4;
          v304.fields.y = (float)(y - v206) - v280;
          v304.fields.x = v276;
          UnityEngine_Transform__set_localPosition(v230, v304, 0);
        }
        v305 = UnityEngine_Transform__get_localPosition(v230, 0);
        if ( *v244 )
        {
          isValid = (UnityEngine_GameObject_o *)*v277;
          if ( *v277 )
          {
            v267 = COERCE_FLOAT(
                     COERCE_UNSIGNED_INT128(
                       ((long double (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, long double, long double, float, float))*(_QWORD *)&isValid->klass[1]._2.field_count)(
                         isValid,
                         *(_QWORD *)&isValid->klass[1]._2.interfaces_count,
                         *(long double *)&v305.fields.x,
                         *(long double *)&v305.fields.y,
                         v305.fields.x + (float)(*v244)->fields.mWidth,
                         v305.fields.y - (float)(*v244)->fields.mHeight)));
            v269 = v268;
            v271 = v270;
            v306 = UnityEngine_Transform__get_localPosition(v230, 0);
            v306.fields.x = v267 + v306.fields.x;
            v306.fields.y = v269 + v306.fields.y;
            v306.fields.z = v271 + v306.fields.z;
            UnityEngine_Transform__set_localPosition(v230, v306, 0);
            return;
          }
        }
LABEL_280:
        sub_1C71608(isValid, v3);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_object__o *items; // x0
  Il2CppObject *Item; // x1
  const MethodInfo *v22; // x2
  UIPopupList_o *v23; // x0
  struct System_String_o *mSelectedItem; // x21

  if ( (byte_4CCBB2C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UILabel_SetCurrentSelection__);
    byte_4CCBB2C = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(textLabel, 0, 0) )
  {
    onChange = this->fields.onChange;
    v5 = (Il2CppObject *)this->fields.textLabel;
    v6 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v6, v5, Method_UILabel_SetCurrentSelection__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(onChange, v6, 0);
    this->fields.textLabel = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.textLabel, 0, v7, v8, v9, v10, v11, v12);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.mSelectedItem, 0) )
    {
      mSelectedItem = this->fields.mSelectedItem;
      this->fields.mSelectedItem = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSelectedItem, 0, v14, v15, v16, v17, v18, v19);
      v23 = this;
      Item = (Il2CppObject *)mSelectedItem;
      goto LABEL_18;
    }
    items = (System_Collections_Generic_List_object__o *)this->fields.items;
    if ( !items )
      sub_1C71608(0, v13);
    if ( items->fields._size >= 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               items,
               0,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
      v23 = this;
LABEL_18:
      UIPopupList__set_value(v23, (System_String_o *)Item, v22);
    }
  }
}


void UIPopupList__TriggerCallbacks(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct UIPopupList_StaticFields *static_fields; // x8
  struct UIPopupList_o *v11; // x20
  struct UIPopupList_LegacyEvent_o *mLegacyEvent; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  bool IsValid_49616128; // w0
  struct UIPopupList_o *v15; // x24
  System_Collections_Generic_List_EventDelegate__o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *eventReceiver; // x21
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_4CCBB29 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIPopupList_TypeInfo);
    byte_4CCBB29 = 1;
  }
  current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(current, (UnityEngine_Object_o *)this, 0) )
  {
    static_fields = UIPopupList_TypeInfo->static_fields;
    v11 = static_fields->current;
    static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIPopupList_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    mLegacyEvent = this->fields.mLegacyEvent;
    if ( mLegacyEvent )
      ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))mLegacyEvent->fields.invoke_impl)(
        mLegacyEvent->fields.method_code,
        this->fields.mSelectedItem,
        mLegacyEvent->fields.method);
    onChange = this->fields.onChange;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    IsValid_49616128 = EventDelegate__IsValid_49616128(onChange, 0);
    if ( IsValid_49616128 )
      v15 = 0;
    else
      v15 = v11;
    if ( IsValid_49616128 )
    {
      v16 = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49587556(v16, 0);
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
          v25 = this->fields.eventReceiver;
          if ( !v25 )
            sub_1C71608(0, v24);
          UnityEngine_GameObject__SendMessage_71704892(
            v25,
            this->fields.functionName,
            (Il2CppObject *)this->fields.mSelectedItem,
            1,
            0);
        }
        v11 = v15;
      }
    }
    UIPopupList_TypeInfo->static_fields->current = v11;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIPopupList_TypeInfo->static_fields,
      (int32_t)v11,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


System_Collections_IEnumerator_o *UIPopupList__UpdateTweenPosition(UIPopupList_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCBB2F & 1) == 0 )
  {
    sub_1C713B0(&UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
    byte_4CCBB2F = 1;
  }
  v3 = sub_1C715FC(UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


float UIPopupList__get_activeFontScale(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  float v4; // s8
  UnityEngine_Object_o *bitmapFont; // x20
  __int64 v6; // x1
  UIFont_o *v7; // x0
  int32_t fontSize; // s8

  if ( (byte_4CCBB25 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB25 = 1;
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
      v7 = this->fields.bitmapFont;
      if ( !v7 )
        sub_1C71608(0, v6);
      fontSize = this->fields.fontSize;
      return (float)fontSize / (float)UIFont__get_defaultSize(v7, 0);
    }
  }
  return v4;
}


int32_t UIPopupList__get_activeFontSize(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o *bitmapFont; // x20
  __int64 v5; // x1
  UIFont_o *v7; // x0

  if ( (byte_4CCBB24 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB24 = 1;
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
  v7 = this->fields.bitmapFont;
  if ( !v7 )
    sub_1C71608(0, v5);
  return UIFont__get_defaultSize(v7, 0);
}


UnityEngine_Object_o *UIPopupList__get_ambigiousFont(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o **p_trueTypeFont; // x21
  UnityEngine_Object_o *bitmapFont; // x20

  if ( (byte_4CCBB1D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB1D = 1;
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
  unsigned int v4; // w0

  if ( (byte_4CCBB20 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_object__get_Item__);
    byte_4CCBB20 = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_9;
  v4 = System_Collections_Generic_List_object___IndexOf(
         items,
         (Il2CppObject *)this->fields.mSelectedItem,
         (const MethodInfo_38113B8 *)Method_System_Collections_Generic_List_string__IndexOf__);
  if ( (v4 & 0x80000000) != 0 )
    return 0;
  method = (const MethodInfo *)v4;
  items = this->fields.itemData;
  if ( !items )
LABEL_9:
    sub_1C71608(items, method);
  if ( (int)method < items->fields._size )
    return System_Collections_Generic_List_object___get_Item(
             items,
             (int32_t)method,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_object__get_Item__);
  return 0;
}


bool UIPopupList__get_handleEvents(UIPopupList_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CCBB21 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB21 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
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
      sub_1C71608(v4, v5);
    return !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
  }
}


bool UIPopupList__get_isOpen(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mChild; // x19

  if ( (byte_4CCBB1F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB1F = 1;
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

  if ( (byte_4CCBB23 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB23 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_c *klass; // x10
  UnityEngine_Object_c *v11; // x8
  Il2CppClass *v12; // x8
  __int64 naturalAligment; // x9
  int32_t v14; // w1
  GrandQuestFolderBoardItem_o *p_bitmapFont; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  GrandQuestFolderBoardItem_o *v28; // x0
  int32_t v29; // w1
  GrandQuestFolderBoardItem_o *p_trueTypeFont; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4CCBB1E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Font_TypeInfo);
    sub_1C713B0(&UIFont_TypeInfo);
    byte_4CCBB1E = 1;
  }
  if ( value )
  {
    klass = value->klass;
    v11 = (UnityEngine_Object_c *)UnityEngine_Font_TypeInfo;
    if ( (UnityEngine_Font_c *)value->klass == UnityEngine_Font_TypeInfo )
    {
      this->fields.trueTypeFont = (struct UnityEngine_Font_o *)value;
      if ( value->klass == v11 )
        v14 = (int)value;
      else
        v14 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont, v14, (int32_t)method, v3, v4, v5, v6, v7);
      this->fields.bitmapFont = 0;
      p_bitmapFont = (GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont;
      sub_1C71354(p_bitmapFont, 0, v16, v17, v18, v19, v20, v21);
      v28 = (GrandQuestFolderBoardItem_o *)((char *)p_bitmapFont + 232);
      p_bitmapFont[1].fields.sortValue2 = 0;
    }
    else
    {
      v12 = (Il2CppClass *)UIFont_TypeInfo;
      naturalAligment = UIFont_TypeInfo->_2.naturalAligment;
      if ( klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UIFont_c *)klass->_2.typeHierarchy[naturalAligment - 1] != UIFont_TypeInfo )
      {
        return;
      }
      this->fields.bitmapFont = (struct UIFont_o *)value;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( value->klass->_2.typeHierarchy[naturalAligment - 1] == v12 )
          v29 = (int)value;
        else
          v29 = 0;
      }
      else
      {
        v29 = 0;
      }
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, v29, (int32_t)method, v3, v4, v5, v6, v7);
      this->fields.trueTypeFont = 0;
      p_trueTypeFont = (GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont;
      sub_1C71354(p_trueTypeFont, 0, v31, v32, v33, v34, v35, v36);
      v28 = (GrandQuestFolderBoardItem_o *)((char *)p_trueTypeFont + 224);
      p_trueTypeFont[1].fields.sortValue1B = 0;
    }
    sub_1C71354(v28, 0, v22, v23, v24, v25, v26, v27);
  }
}


void UIPopupList__set_handleEvents(UIPopupList_o *this, bool value, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CCBB22 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB22 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C71608(v6, v7);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, !value, 0);
  }
}


void UIPopupList__set_onSelectionChange(
        UIPopupList_o *this,
        UIPopupList_LegacyEvent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mLegacyEvent = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mLegacyEvent,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIPopupList__set_value(UIPopupList_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_mSelectedItem; // x20
  const MethodInfo *v10; // x1

  this->fields.mSelectedItem = value;
  p_mSelectedItem = &this->fields.mSelectedItem;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mSelectedItem,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( *p_mSelectedItem )
    UIPopupList__TriggerCallbacks(this, v10);
}


void UIPopupList_LegacyEvent___ctor(
        UIPopupList_LegacyEvent_o *this,
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
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AAE1D0;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AAE1B0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AAE168;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
}


void UIPopupList_LegacyEvent__EndInvoke(
        UIPopupList_LegacyEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  struct UIPopupList_o *_4__this; // x20
  UnityEngine_GameObject_o *selectedObject; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *mSelection; // x22
  const MethodInfo *v15; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4CCBB39 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBB39 = 1;
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
      sub_1C71608(selectedObject, v12);
    v13 = (UnityEngine_Object_o *)selectedObject;
    mSelection = (UnityEngine_Object_o *)_4__this->fields.mSelection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v13, mSelection, 0) )
      goto LABEL_14;
    UIPopupList__Close(_4__this, v15);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
LABEL_14:
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_UIPopupList__CloseIfUnselected_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UIPopupList__UpdateTweenPosition_d__78_o **p_tp_5__2; // x21
  UnityEngine_Object_o *tp_5__2; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UIPopupList__UpdateTweenPosition_d__78_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o HighlightPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CCBB3A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    this = (UIPopupList__UpdateTweenPosition_d__78_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB3A = 1;
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
                           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
      v2->fields._tp_5__2 = (struct TweenPosition_o *)Component_object;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v2->fields._tp_5__2,
        (int32_t)Component_object,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
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
            v22 = *p_tp_5__2;
            HighlightPosition = UIPopupList__GetHighlightPosition(_4__this, method);
            if ( v22 )
            {
              *(UnityEngine_Vector3_o *)((char *)&v22[2].fields._tp_5__2 + 4) = HighlightPosition;
              v2->fields.__2__current = 0;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
              sub_1C71354(p__2__current, 0, v23, v24, v25, v26, v27, v28);
              result = 1;
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
              return result;
            }
          }
LABEL_26:
          sub_1C71608(this, method);
        }
      }
      *p_tp_5__2 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields._tp_5__2, 0, v16, v17, v18, v19, v20, v21);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_UIPopupList__UpdateTweenPosition_d__78_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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