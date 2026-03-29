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

  if ( (byte_4D3510C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&StringLiteral_10015/*"OnSelectionChange"*/);
    byte_4D3510C = 1;
  }
  this->fields.fontSize = 16;
  this->fields.alignment = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.items = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.items, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_object___ctor__);
  this->fields.itemData = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemData, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)&this->fields.padding.fields.x = xmmword_D005D0;
  *(_OWORD *)&this->fields.textColor.fields.b = _Q0;
  *(_OWORD *)&this->fields.backgroundColor.fields.b = xmmword_D005E0;
  *(_QWORD *)&this->fields.highlightColor.fields.b = 0x3F8000003F169697LL;
  this->fields.isAnimated = 1;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onChange, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mLabelList = (struct System_Collections_Generic_List_UILabel__o *)v29;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mLabelList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_10015/*"OnSelectionChange"*/;
  this->fields.functionName = (struct System_String_o *)StringLiteral_10015/*"OnSelectionChange"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.functionName, v36, v37, v38, v39, v40, v41, v42);
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

  if ( (byte_4D350FB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    byte_4D350FB = 1;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &v11->obj.klass + size;
    items->fields._size = size + 1;
    v14[4] = (Il2CppClass *)text;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)text, (int32_t)method, v3, v4, v5, v6, v7);
  }
  items = this->fields.itemData;
  if ( !items
    || (v21 = items->fields._items,
        v22 = Method_System_Collections_Generic_List_object__Add__,
        ++items->fields._version,
        !v21) )
  {
LABEL_13:
    sub_1C93D2C(items, text);
  }
  v23 = items->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      0,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    items->fields._size = v23 + 1;
    v24[4] = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), 0, v15, v16, v17, v18, v19, v20);
  }
}


void UIPopupList__AddItem_49919816(
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

  if ( (byte_4D350FC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    byte_4D350FC = 1;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &v12->obj.klass + size;
    items->fields._size = size + 1;
    v15[4] = (Il2CppClass *)text;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)text, (int32_t)data, (int32_t)method, v4, v5, v6, v7);
  }
  items = this->fields.itemData;
  if ( !items
    || (v22 = items->fields._items,
        v23 = Method_System_Collections_Generic_List_object__Add__,
        ++items->fields._version,
        !v22) )
  {
LABEL_13:
    sub_1C93D2C(items, text);
  }
  v24 = items->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      items,
      data,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    items->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)data;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)data, v16, v17, v18, v19, v20, v21);
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
    sub_1C93D2C(this, widget);
  *(_DWORD *)&this->fields.isAligument = 2;
}


void UIPopupList__AnimatePosition(
        UIPopupList_o *this,
        UIWidget_o *widget,
        bool placeAbove,
        float bottom,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( !widget )
    goto LABEL_9;
  this = (UIPopupList_o *)UIRect__get_cachedTransform((UIRect_o *)widget, 0);
  if ( !this )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIPopupList_o *)UIRect__get_cachedTransform((UIRect_o *)widget, 0);
  if ( !this )
    goto LABEL_9;
  v10.fields.y = placeAbove ? bottom : 0.0;
  v10.fields.x = localPosition.fields.x;
  v10.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v10, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)widget, 0);
  this = (UIPopupList_o *)TweenPosition__Begin(gameObject, 0.15, localPosition, 0);
  if ( !this )
LABEL_9:
    sub_1C93D2C(this, widget);
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

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
  v16.fields.y = v14 / (float)widget->fields.mHeight;
  v16.fields.x = 1.0;
  v16.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(cachedTransform, v16, 0);
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  this = (UIPopupList_o *)TweenScale__Begin(gameObject, 0.15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !this )
    goto LABEL_10;
  *(_DWORD *)&this->fields.isAligument = 2;
  if ( !placeAbove )
    return;
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  v17.fields.x = localPosition.fields.x;
  v17.fields.z = localPosition.fields.z;
  v17.fields.y = v14 + (float)(localPosition.fields.y - (float)widget->fields.mHeight);
  UnityEngine_Transform__set_localPosition(cachedTransform, v17, 0);
  this = (UIPopupList_o *)TweenPosition__Begin(gameObject, 0.15, localPosition, 0);
  if ( !this )
LABEL_10:
    sub_1C93D2C(this, widget);
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
  if ( (byte_4D350FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__Clear__);
    this = (UIPopupList_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4D350FA = 1;
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
    sub_1C93D2C(this, method);
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

  if ( (byte_4D35108 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_4532/*"CloseIfUnselected"*/);
    byte_4D35108 = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_72106028(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4532/*"CloseIfUnselected"*/,
    0);
  this->fields.mSelection = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSelection, 0, v3, v4, v5, v6, v7, v8);
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
      klass = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                (UnityEngine_GameObject_o *)klass,
                (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
            sub_1C93D34(klass);
        }
LABEL_35:
        sub_1C93D2C(klass, v12);
      }
LABEL_20:
      klass = p_mChild->klass;
      if ( !p_mChild->klass )
        goto LABEL_35;
      klass = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                (UnityEngine_GameObject_o *)klass,
                (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
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
      UnityEngine_Object__Destroy_72119908(v35, 0);
    }
    this->fields.mBackground = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mBackground, 0, v29, v30, v31, v32, v33, v34);
    this->fields.mHighlight = 0;
    p_mHighlight = &this->fields.mHighlight;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_mHighlight, 0, v37, v38, v39, v40, v41, v42);
    *(p_mHighlight - 2) = 0;
    sub_1C93A78(p_mChild, 0, v43, v44, v45, v46, v47, v48);
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

  if ( (byte_4D3510A & 1) == 0 )
  {
    sub_1C93AD4(&UIPopupList__CloseIfUnselected_d__93_TypeInfo);
    byte_4D3510A = 1;
  }
  v3 = sub_1C93D20(UIPopupList__CloseIfUnselected_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35102 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35102 = 1;
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
              result.fields.y = (float)(v12 * (float)borderTop) + localPosition.fields.y;
              result.fields.x = localPosition.fields.x - (float)(v12 * (float)borderLeft);
              result.fields.z = localPosition.fields.z + 1.0;
              return result;
            }
          }
        }
LABEL_18:
        sub_1C93D2C(atlas, v5);
      }
    }
  }
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o HighlightPosition; // 0:kr00_12.12

  if ( (byte_4D35101 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_15299/*"UpdateTweenPosition"*/);
    byte_4D35101 = 1;
  }
  mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mHighlight, 0, 0) )
  {
    this->fields.mHighlightedLabel = lbl;
    sub_1C93A78(
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
      if ( instant || !this->fields.isAnimated )
      {
        cachedTransform = this->fields.mHighlight;
        if ( cachedTransform )
        {
          cachedTransform = (UISprite_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
          if ( cachedTransform )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, HighlightPosition, 0);
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
          cachedTransform = (UISprite_o *)TweenPosition__Begin(gameObject, 0.1, HighlightPosition, 0);
          if ( cachedTransform )
          {
            LODWORD(cachedTransform->fields.leftAnchor) = 2;
            if ( !this->fields.mTweening )
            {
              this->fields.mTweening = 1;
              UnityEngine_MonoBehaviour__StartCoroutine(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_15299/*"UpdateTweenPosition"*/,
                0);
            }
            return;
          }
        }
      }
    }
    sub_1C93D2C(cachedTransform, v14);
  }
}


void UIPopupList__OnClick(UIPopupList_o *this, const MethodInfo *method)
{
  int32_t openOn; // w8
  UICamera_c *v4; // x0

  if ( (byte_4D35109 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D35109 = 1;
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

  if ( (byte_4D350FE & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350FE = 1;
  }
  onChange = this->fields.onChange;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  if ( EventDelegate__IsValid_49972204(onChange, 0) )
  {
    this->fields.eventReceiver = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventReceiver, 0, v4, v5, v6, v7, v8, v9);
    this->fields.functionName = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.functionName, 0, v10, v11, v12, v13, v14, v15);
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
      sub_1C93A78(
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
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, (int32_t)v35, v27, v28, v29, v30, v31, v32);
      v33 = 0;
    }
    this->fields.mUseDynamicFont = v33;
LABEL_20:
    *p_font = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.font, 0, v27, v28, v29, v30, v31, v32);
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
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
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
          sub_1C93A78(p_trueTypeFont, (int32_t)v52, v53, v54, v55, v56, v57, v58);
          p_bitmapFont->klass = 0;
          sub_1C93A78(p_bitmapFont, 0, v59, v60, v61, v62, v63, v64);
          return;
        }
LABEL_56:
        sub_1C93D2C(klass, v17);
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
  if ( (byte_4D35104 & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4D35104 = 1;
  }
  if ( isOver )
  {
    if ( !go )
      sub_1C93D2C(this, go);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
  if ( (byte_4D35106 & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4D35106 = 1;
  }
  if ( isPressed )
  {
    if ( !go )
      sub_1C93D2C(this, go);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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

  if ( (byte_4D35107 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__IndexOf__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35107 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) && UIPopupList__get_handleEvents(this, v6) )
    {
      mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
      if ( !mLabelList )
        goto LABEL_23;
      v9 = System_Collections_Generic_List_object___IndexOf(
             mLabelList,
             (Il2CppObject *)this->fields.mHighlightedLabel,
             (const MethodInfo_387A63C *)Method_System_Collections_Generic_List_UILabel__IndexOf__);
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
              sub_1C93D2C(mLabelList, v7);
LABEL_21:
            Item = System_Collections_Generic_List_object___get_Item(
                     mLabelList,
                     (int32_t)v7,
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
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

  if ( (byte_4D350FF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350FF = 1;
  }
  trueTypeFont = this->fields.trueTypeFont;
  p_bitmapFont = &this->fields.bitmapFont;
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  this->fields.bitmapFont = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, 0, v2, v3, v4, v5, v6, v7);
  this->fields.trueTypeFont = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont, 0, v12, v13, v14, v15, v16, v17);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trueTypeFont, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(bitmapFont, 0, 0) || !this->fields.mUseDynamicFont )
    {
      *p_bitmapFont = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, 0, v18, v19, v20, v21, v22, v23);
LABEL_17:
      this->fields.trueTypeFont = trueTypeFont;
      sub_1C93A78(
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
    sub_1C93D2C(v24, v25);
  if ( !UIFont__get_isDynamic((UIFont_o *)bitmapFont, 0) )
  {
    *p_bitmapFont = (struct UIFont_o *)bitmapFont;
    sub_1C93A78(
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
  sub_1C93A78(
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

  if ( (byte_4D35105 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponents_UIPlaySound___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D35105 = 1;
  }
  UIPopupList__Highlight(this, lbl, instant, method);
  if ( !lbl )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lbl, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
  if ( !gameObject )
    goto LABEL_23;
  monitor = (System_String_c **)gameObject[1].monitor;
  if ( monitor )
    v11 = *monitor == string_TypeInfo ? (System_String_o *)gameObject[1].monitor : 0LL;
  else
    v11 = 0;
  UIPopupList__set_value(this, v11, v9);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponents_object__52018464(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_319BD20 *)Method_UnityEngine_Component_GetComponents_UIPlaySound___);
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
        gameObject = (UnityEngine_GameObject_o *)NGUITools__PlaySound_50069564(v17, v18, 1.0, 0);
      }
      if ( v14 == v15 )
        return;
      if ( (unsigned int)++v15 >= LODWORD(v13[1].klass) )
        sub_1C93D34(gameObject);
    }
LABEL_23:
    sub_1C93D2C(gameObject, v8);
  }
}


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
  unsigned __int64 v64; // d1
  UnityEngine_GameObject_o *v65; // x23
  UIAtlas_o *v66; // x20
  System_String_o *backgroundSprite; // x22
  struct UISprite_o *v68; // x0
  struct UISprite_o **p_mBackground; // x21
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  UIWidget_o *v76; // x23
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Transform_o *v78; // x20
  float v79; // s0
  float v80; // s1
  float v81; // s14
  float v82; // s13
  struct UISprite_o *v83; // x0
  struct UISprite_o **p_mHighlight; // x22
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  UISpriteData_o *AtlasSprite; // x0
  const MethodInfo *v92; // x1
  int32_t borderTop; // s15
  int32_t activeFontSize; // w26
  const MethodInfo *v95; // x1
  float activeFontScale; // s0
  float v97; // s8
  System_Collections_Generic_List_object__o *v98; // x24
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  int klass; // w21
  float v106; // s15
  float v107; // s11
  float v108; // s8
  float v109; // s9
  float v110; // s13
  float v111; // s12
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v113; // x20
  NGUITools_c **v114; // x22
  System_String_o *v115; // x29
  Il2CppObject *v116; // x28
  System_String_o *v117; // x1
  float v118; // s0
  UnityEngine_Transform_o *cachedTransform; // x0
  float v120; // s10
  UnityEngine_Transform_o *v121; // x26
  float v122; // s0
  UnityEngine_Transform_o *v123; // x0
  float v124; // s10
  float v125; // s0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  Il2CppClass **v135; // x0
  float v136; // s10
  float v137; // s0
  UnityEngine_GameObject_o *v138; // x0
  UIEventListener_o *v139; // x26
  UIEventListener_BoolDelegate_o *v140; // x20
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  UIEventListener_BoolDelegate_o *v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  UIEventListener_VoidDelegate_o *v154; // x20
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v174; // x9
  __int64 klass_low; // x10
  intptr_t v176; // x8
  struct System_Collections_Generic_List_UILabel__o *v177; // x8
  float v178; // s8
  float v179; // s9
  int v180; // w21
  int32_t v181; // w25
  float v182; // s8
  UIRect_o *v183; // x26
  UnityEngine_GameObject_o *v184; // x20
  Il2CppObject *Component_object; // x27
  UnityEngine_BoxCollider2D_o *v186; // x20
  double v187; // d8
  double v188; // d0
  double v189; // d0
  double v190; // d1
  double v191; // d1
  UIWidget_o *mBackground; // x27
  int32_t v193; // w25
  float v194; // s8
  float v195; // s10
  double v196; // d8
  double v197; // d0
  double v198; // d0
  double v199; // d1
  double v200; // d1
  float v201; // s9
  int32_t v202; // w1
  UIWidget_o *v203; // x27
  float v204; // s12
  double v205; // d8
  double v206; // d0
  double v207; // d0
  double v208; // d1
  double v209; // d1
  int32_t v210; // w1
  UIWidget_o *v211; // x27
  float v212; // s12
  double v213; // d8
  double v214; // d0
  double v215; // d0
  double v216; // d1
  double v217; // d1
  int32_t v218; // w1
  int v219; // w23
  int32_t v220; // w26
  UIWidget_o *v221; // x20
  float pixelSize; // s0
  float v223; // s12
  UIWidget_o *mHighlight; // x25
  UnityEngine_Transform_o *v225; // x23
  float v226; // s8
  float v227; // s10
  float v228; // s10
  double v229; // d8
  double v230; // d0
  double v231; // d0
  double v232; // d1
  double v233; // d1
  int32_t v234; // w1
  UIWidget_o *v235; // x25
  float v236; // s10
  double v237; // d8
  double v238; // d0
  struct UISprite_o **v239; // x21
  double v240; // d0
  double v241; // d1
  double v242; // d1
  int32_t v243; // w1
  const MethodInfo *v244; // x2
  int32_t v245; // w8
  _BOOL4 v246; // w25
  int32_t layer; // w20
  UnityEngine_Object_o *CameraForLayer; // x26
  UIWidget_o *v249; // x20
  UIPopupList_o *v250; // x0
  const MethodInfo *v251; // x3
  UIPopupList_o *v252; // x0
  const MethodInfo *v253; // x2
  int v254; // w21
  int32_t i; // w23
  Il2CppObject *v256; // x20
  const MethodInfo *v257; // x2
  UIPopupList_o *v258; // x0
  const MethodInfo *v259; // x3
  const MethodInfo *v260; // x3
  float v261; // s0
  float v262; // s8
  float v263; // s1
  float v264; // s9
  float v265; // s2
  float v266; // s10
  unsigned __int64 localPosition; // kr80_8
  float position; // [xsp+Ch] [xbp-134h]
  float position_4; // [xsp+10h] [xbp-130h]
  float position_8; // [xsp+14h] [xbp-12Ch]
  float v271; // [xsp+18h] [xbp-128h]
  float v272; // [xsp+1Ch] [xbp-124h]
  struct UIPanel_o **v273; // [xsp+20h] [xbp-120h]
  int v274; // [xsp+2Ch] [xbp-114h]
  UISpriteData_o *v275; // [xsp+30h] [xbp-110h]
  float v276; // [xsp+38h] [xbp-108h]
  float v277; // [xsp+3Ch] [xbp-104h]
  float y; // [xsp+40h] [xbp-100h]
  UIWidget_o **v279; // [xsp+50h] [xbp-F0h]
  float v280; // [xsp+5Ch] [xbp-E4h]
  struct UISprite_o **v281; // [xsp+60h] [xbp-E0h]
  GrandQuestFolderBoardItem_o *p_mSelectedItem; // [xsp+68h] [xbp-D8h]
  UnityEngine_Transform_o *v283; // [xsp+70h] [xbp-D0h]
  float v284; // [xsp+7Ch] [xbp-C4h]
  UnityEngine_Bounds_o iptr; // [xsp+80h] [xbp-C0h] BYREF
  int v286; // [xsp+9Ch] [xbp-A4h] BYREF
  UnityEngine_Vector3_o v287; // 0:kr14_12.12
  UnityEngine_Vector3_o v288; // 0:kr20_12.12
  UnityEngine_Vector3_o v289; // 0:kr34_12.12
  UnityEngine_Vector3_o v290; // 0:kr94_12.12
  UnityEngine_Vector3_o v291; // 0:krA0_12.12
  UnityEngine_Vector2_o v292; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v293; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v294; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v295; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v296; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v297; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v298; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v299; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v300; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v301; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v302; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v303; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3510B & 1) == 0 )
  {
    sub_1C93AD4(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_1C93AD4(&Localization_TypeInfo);
    sub_1C93AD4(&Method_NGUITools_AddWidget_UILabel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&UIPanel_TypeInfo);
    sub_1C93AD4(&Method_UIPopupList_OnItemClick__);
    sub_1C93AD4(&Method_UIPopupList_OnItemHover__);
    sub_1C93AD4(&Method_UIPopupList_OnItemPress__);
    sub_1C93AD4(&UIEventListener_VoidDelegate_TypeInfo);
    sub_1C93AD4(&StringLiteral_4532/*"CloseIfUnselected"*/);
    sub_1C93AD4(&StringLiteral_5399/*"Drop-down List"*/);
    byte_4D3510B = 1;
  }
  v286 = 0;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    goto LABEL_40;
  v4 = &NGUITools_TypeInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_50071416(gameObject, 0) )
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v18, v19, v20, v21, v22, v23, v24);
    v25 = (UnityEngine_Object_o *)*p_mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v25, 0, 0) )
    {
LABEL_283:
      UIPopupList__set_handleEvents(this, 1, v16);
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      v27 = (UnityEngine_GameObject_o *)sub_1C93D20(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v27, (System_String_o *)StringLiteral_5399/*"Drop-down List"*/, 0);
      this->fields.mChild = v27;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mChild, (int32_t)v27, v28, v29, v30, v31, v32, v33);
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
      UnityEngine_MonoBehaviour__StopCoroutine_72106028(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4532/*"CloseIfUnselected"*/,
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
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSelection, (int32_t)v37, v38, v39, v40, v41, v42, v43);
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
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSelection, (int32_t)v45, v46, v47, v48, v49, v50, v51);
      }
      v283 = v35;
      if ( this->fields.openOn != 3 )
        goto LABEL_55;
      v52 = (UnityEngine_Object_o *)this->fields.mSelection;
      v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v54 = UnityEngine_Object__op_Inequality(v52, v53, 0);
      v35 = v283;
      if ( v54 )
      {
        isValid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(v283, 0);
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
        v294.fields.z = 0.0;
        v294.fields.x = static_fields->lastTouchPosition.fields.x;
        v294.fields.y = static_fields->lastTouchPosition.fields.y;
        v301 = UnityEngine_Camera__ScreenToWorldPoint_71924504(v57, v294, 0);
        if ( !v55 )
          goto LABEL_280;
        v287 = UnityEngine_Transform__InverseTransformPoint(v55, v301, 0);
        v35 = v283;
        x = v287.fields.x;
        z = v287.fields.z;
        y = v287.fields.y;
        UnityEngine_Transform__set_localPosition(v283, v287, 0);
        v288 = UnityEngine_Transform__get_position(v283, 0);
        v61 = v288.fields.x;
        position_8 = v288.fields.z;
        v271 = v288.fields.y;
        v62 = v287.fields.x;
      }
      else
      {
LABEL_55:
        parent = UnityEngine_Transform__get_parent(v26, 0);
        NGUIMath__CalculateRelativeWidgetBounds_50022900(&iptr, parent, v26, 0, 0, 0);
        v64 = vsub_f32(*(float32x2_t *)&iptr.fields.m_Center.fields.y, *(float32x2_t *)&iptr.fields.m_Extents.fields.y).n64_u64[0];
        z = *((float *)&v64 + 1);
        v62 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
        x = iptr.fields.m_Center.fields.x + iptr.fields.m_Extents.fields.x;
        LODWORD(y) = vadd_f32(
                       *(float32x2_t *)&iptr.fields.m_Center.fields.y,
                       *(float32x2_t *)&iptr.fields.m_Extents.fields.y).n64_u32[0];
        v291.fields.x = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
        *(_QWORD *)&v291.fields.y = v64;
        UnityEngine_Transform__set_localPosition(v35, v291, 0);
        v289 = UnityEngine_Transform__get_position(v26, 0);
        v61 = v289.fields.x;
        position_8 = v289.fields.z;
        v271 = v289.fields.y;
      }
      UnityEngine_MonoBehaviour__StartCoroutine(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4532/*"CloseIfUnselected"*/,
        0);
      if ( !byte_4D2A13F )
      {
        sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
        byte_4D2A13F = 1;
      }
      UnityEngine_Transform__set_localRotation(
        v35,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      if ( !byte_4D2A13E )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v65 = this->fields.mChild;
      v66 = this->fields.atlas;
      backgroundSprite = this->fields.backgroundSprite;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v68 = NGUITools__AddSprite(v65, v66, backgroundSprite, 0);
      this->fields.mBackground = v68;
      p_mBackground = &this->fields.mBackground;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mBackground, (int32_t)v68, v70, v71, v72, v73, v74, v75);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      if ( !isValid )
        goto LABEL_280;
      UIWidget__set_pivot((UIWidget_o *)isValid, 0, 0);
      isValid = (UnityEngine_GameObject_o *)*p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_280;
      v76 = (UIWidget_o *)*p_mBackground;
      v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
      isValid = (UnityEngine_GameObject_o *)NGUITools__CalculateNextDepth(v77, 0);
      if ( !v76 )
        goto LABEL_280;
      UIWidget__set_depth(v76, (int32_t)isValid, 0);
      isValid = (UnityEngine_GameObject_o *)*p_mBackground;
      if ( !*p_mBackground )
        goto LABEL_280;
      UIWidget__set_color((UIWidget_o *)isValid, this->fields.backgroundColor, 0);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      v78 = v283;
      if ( !isValid )
        goto LABEL_280;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))isValid->klass[2]._1.events)(
        isValid,
        isValid->klass[2]._1.properties);
      isValid = (UnityEngine_GameObject_o *)this->fields.mBackground;
      this->fields.mBgBorder = v80;
      if ( !isValid )
        goto LABEL_280;
      v81 = v79;
      v82 = v80;
      isValid = (UnityEngine_GameObject_o *)UIRect__get_cachedTransform((UIRect_o *)isValid, 0);
      if ( !isValid )
        goto LABEL_280;
      v295.fields.x = 0.0;
      v295.fields.z = 0.0;
      v295.fields.y = v82;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)isValid, v295, 0);
      v83 = NGUITools__AddSprite(this->fields.mChild, this->fields.atlas, this->fields.highlightSprite, 0);
      this->fields.mHighlight = v83;
      p_mHighlight = &this->fields.mHighlight;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mHighlight, (int32_t)v83, v85, v86, v87, v88, v89, v90);
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
        v275 = AtlasSprite;
        v279 = (UIWidget_o **)&this->fields.mHighlight;
        v273 = &this->fields.mPanel;
        activeFontSize = UIPopupList__get_activeFontSize(this, v92);
        activeFontScale = UIPopupList__get_activeFontScale(this, v95);
        v97 = this->fields.padding.fields.y;
        v280 = activeFontScale;
        v98 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UILabel__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v98,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UILabel___ctor__);
        isValid = (UnityEngine_GameObject_o *)this->fields.items;
        if ( !isValid )
          goto LABEL_280;
        p_mSelectedItem = (GrandQuestFolderBoardItem_o *)&this->fields.mSelectedItem;
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)isValid,
                (Il2CppObject *)this->fields.mSelectedItem,
                (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          p_mSelectedItem->klass = 0;
          sub_1C93A78(p_mSelectedItem, 0, v99, v100, v101, v102, v103, v104);
        }
        v286 = 0;
        isValid = (UnityEngine_GameObject_o *)this->fields.items;
        v274 = borderTop;
        v276 = v82;
        v281 = &this->fields.mBackground;
        position = v61;
        position_4 = z;
        if ( !isValid )
          goto LABEL_280;
        klass = (int)isValid[1].klass;
        v106 = -v97;
        v107 = v280 * (float)activeFontSize;
        v272 = v62;
        v277 = x - v62;
        if ( klass < 1 )
        {
          v108 = 0.0;
          v109 = 0.0;
          v110 = 0.0;
          v111 = 0.0;
        }
        else
        {
          v284 = (float)(x - v62) * v280;
          LODWORD(v3) = 0;
          v108 = 0.0;
          v109 = 0.0;
          v110 = 0.0;
          v111 = 0.0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)isValid,
                     (int32_t)v3,
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
            v113 = *p_mChild;
            v114 = v4;
            v115 = (System_String_o *)Item;
            if ( !(*v4)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v4);
            v116 = NGUITools__AddWidget_object_(v113, (const MethodInfo_322E9C4 *)Method_NGUITools_AddWidget_UILabel___);
            isValid = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v286, 0);
            if ( !v116 )
              goto LABEL_280;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v116, (System_String_o *)isValid, 0);
            UIWidget__set_pivot((UIWidget_o *)v116, 0, 0);
            UILabel__set_bitmapFont((UILabel_o *)v116, this->fields.bitmapFont, 0);
            UILabel__set_trueTypeFont((UILabel_o *)v116, this->fields.trueTypeFont, 0);
            UILabel__set_fontSize((UILabel_o *)v116, this->fields.fontSize, 0);
            UILabel__set_fontStyle((UILabel_o *)v116, this->fields.fontStyle, 0);
            if ( this->fields.isLocalized )
            {
              if ( !Localization_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v117 = Localization__Get(v115, 0);
            }
            else
            {
              v117 = v115;
            }
            UILabel__set_text((UILabel_o *)v116, v117, 0);
            UIWidget__set_color((UIWidget_o *)v116, this->fields.textColor, 0);
            if ( this->fields.isAligument )
            {
              if ( v286 && !(v286 % 20) )
              {
                v108 = v106;
                v106 = -this->fields.padding.fields.y;
                v118 = v284
                     - (float)((float)(v81 + this->fields.padding.fields.x)
                             + (float)(v81 + this->fields.padding.fields.x));
                if ( v111 > v118 )
                  v118 = v111;
                v110 = v110 + v118;
                if ( v109 <= v111 )
                  v109 = v111;
                v111 = 0.0;
              }
              cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v116, 0);
              v120 = this->fields.padding.fields.x;
              v121 = cachedTransform;
              LODWORD(v122) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v116, 0);
              if ( !v121 )
                goto LABEL_280;
              v296.fields.x = v110 + (float)((float)(v81 + v120) - v122);
            }
            else
            {
              v123 = UIRect__get_cachedTransform((UIRect_o *)v116, 0);
              v124 = this->fields.padding.fields.x;
              v121 = v123;
              LODWORD(v125) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v116, 0);
              if ( !v121 )
                goto LABEL_280;
              v296.fields.x = (float)(v81 + v124) - v125;
            }
            v296.fields.z = -1.0;
            v296.fields.y = v106;
            UnityEngine_Transform__set_localPosition(v121, v296, 0);
            UILabel__set_overflowMethod((UILabel_o *)v116, 2, 0);
            UILabel__set_alignment((UILabel_o *)v116, this->fields.alignment, 0);
            if ( !v98 )
              goto LABEL_280;
            v132 = v98->fields._items;
            v133 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++v98->fields._version;
            if ( !v132 )
              goto LABEL_280;
            v134 = v98->fields._size;
            if ( (unsigned int)v134 >= LODWORD(v132->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v98,
                v116,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
            }
            else
            {
              v135 = &v132->obj.klass + v134;
              v98->fields._size = v134 + 1;
              v135[4] = (Il2CppClass *)v116;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v135 + 4), (int32_t)v116, v126, v127, v128, v129, v130, v131);
            }
            v136 = this->fields.padding.fields.y;
            v137 = UILabel__get_printedSize((UILabel_o *)v116, 0).fields.x;
            if ( v111 <= v137 )
              v111 = v137;
            v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v116, 0);
            v139 = UIEventListener__Get(v138, 0);
            v140 = (UIEventListener_BoolDelegate_o *)sub_1C93D20(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v140, (Il2CppObject *)this, Method_UIPopupList_OnItemHover__, 0);
            if ( !v139 )
              goto LABEL_280;
            v139->fields.onHover = v140;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v139->fields.onHover,
              (int32_t)v140,
              v141,
              v142,
              v143,
              v144,
              v145,
              v146);
            v147 = (UIEventListener_BoolDelegate_o *)sub_1C93D20(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v147, (Il2CppObject *)this, Method_UIPopupList_OnItemPress__, 0);
            v139->fields.onPress = v147;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v139->fields.onPress,
              (int32_t)v147,
              v148,
              v149,
              v150,
              v151,
              v152,
              v153);
            v154 = (UIEventListener_VoidDelegate_o *)sub_1C93D20(UIEventListener_VoidDelegate_TypeInfo);
            UIEventListener_VoidDelegate___ctor(v154, (Il2CppObject *)this, Method_UIPopupList_OnItemClick__, 0);
            v139->fields.onClick = v154;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v139->fields.onClick,
              (int32_t)v154,
              v155,
              v156,
              v157,
              v158,
              v159,
              v160);
            v139->fields.parameter = (Il2CppObject *)v115;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v139->fields.parameter,
              (int32_t)v115,
              v161,
              v162,
              v163,
              v164,
              v165,
              v166);
            if ( System_String__op_Equality(this->fields.mSelectedItem, v115, 0)
              || !v286 && System_String__IsNullOrEmpty((System_String_o *)p_mSelectedItem->klass, 0) )
            {
              UIPopupList__Highlight(this, (UILabel_o *)v116, 1, v168);
            }
            isValid = (UnityEngine_GameObject_o *)this->fields.mLabelList;
            if ( !isValid )
              goto LABEL_280;
            m_CachedPtr = isValid->fields.m_CachedPtr;
            v174 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++HIDWORD(isValid[1].klass);
            if ( !m_CachedPtr )
              goto LABEL_280;
            klass_low = SLODWORD(isValid[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)isValid,
                v116,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
            }
            else
            {
              v176 = m_CachedPtr + 8 * klass_low;
              LODWORD(isValid[1].klass) = klass_low + 1;
              *(_QWORD *)(v176 + 32) = v116;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)(v176 + 32),
                (int32_t)v116,
                v167,
                (int32_t)v168,
                v169,
                v170,
                v171,
                v172);
            }
            v106 = (float)(v106 - v107) - v136;
            v4 = v114;
            v3 = (const MethodInfo *)(unsigned int)++v286;
            if ( v286 >= klass )
              break;
            isValid = (UnityEngine_GameObject_o *)this->fields.items;
            if ( !isValid )
              goto LABEL_280;
          }
          v78 = v283;
        }
        if ( this->fields.isAligument )
        {
          v177 = this->fields.mLabelList;
          if ( !v177 )
            goto LABEL_280;
          if ( v177->fields._size >= 21 )
            v106 = v108;
          if ( v109 > v111 )
            v111 = v109;
        }
        if ( !this->fields.position )
        {
          LODWORD(v178) = (unsigned int)UnityEngine_Transform__get_localPosition(v78, 0);
          v302.fields.z = UnityEngine_Transform__get_localPosition(v78, 0).fields.z;
          v302.fields.y = v106 * -0.5;
          v302.fields.x = v178;
          UnityEngine_Transform__set_localPosition(v78, v302, 0);
        }
        v179 = v111 <= (float)((float)(v277 * v280)
                             - (float)((float)(v81 + this->fields.padding.fields.x)
                                     + (float)(v81 + this->fields.padding.fields.x)))
             ? (float)(v277 * v280)
             - (float)((float)(v81 + this->fields.padding.fields.x) + (float)(v81 + this->fields.padding.fields.x))
             : v111;
        if ( !v98 )
          goto LABEL_280;
        v180 = v98->fields._size;
        if ( v180 >= 1 )
        {
          v181 = 0;
          v182 = v107 + this->fields.padding.fields.y;
          do
          {
            isValid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    v98,
                                                    v181,
                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_280;
            v183 = (UIRect_o *)isValid;
            v184 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
            if ( !(*v4)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v4);
            NGUITools__AddWidgetCollider(v184, 0);
            LOBYTE(v183[1].fields.topAnchor) = 0;
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)v183,
                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
              v303.fields.z = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0).fields.z;
              v303.fields.x = v179 * 0.5;
              v303.fields.y = v107 * -0.5;
              UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, v303, 0);
              v297.fields.z = 1.0;
              v297.fields.x = v179;
              v297.fields.y = v182;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v297, 0);
            }
            else
            {
              isValid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)v183,
                                                      (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
              if ( !isValid )
                goto LABEL_280;
              v292.fields.x = v179 * 0.5;
              v292.fields.y = v107 * -0.5;
              v186 = (UnityEngine_BoxCollider2D_o *)isValid;
              UnityEngine_Collider2D__set_offset((UnityEngine_Collider2D_o *)isValid, v292, 0);
              v293.fields.x = v179;
              v293.fields.y = v182;
              UnityEngine_BoxCollider2D__set_size(v186, v293, 0);
            }
          }
          while ( v180 != ++v181 );
        }
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v187 = v179;
        v188 = modf(v179, (double *)&iptr.fields.m_Center.fields.x);
        if ( v179 >= 0.0 )
        {
          if ( v188 != 0.5 )
          {
            v189 = floor(v187 + 0.5);
            goto LABEL_160;
          }
          v189 = *(double *)&iptr.fields.m_Center.fields.x;
          v190 = 1.0;
        }
        else
        {
          if ( v188 != -0.5 )
          {
            v189 = ceil(v187 + -0.5);
            goto LABEL_160;
          }
          v189 = *(double *)&iptr.fields.m_Center.fields.x;
          v190 = -1.0;
        }
        v191 = v189 + v190;
        if ( ((__int64)v189 & 1) != 0 )
          v189 = v191;
LABEL_160:
        mBackground = (UIWidget_o *)this->fields.mBackground;
        if ( v189 == INFINITY )
          v193 = 0x80000000;
        else
          v193 = (int)v189;
        v194 = (float)(v81 + this->fields.padding.fields.x) + (float)(v81 + this->fields.padding.fields.x);
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v195 = v179 + v194;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v196 = v195;
        v197 = modf(v195, (double *)&iptr.fields.m_Center.fields.x);
        if ( v195 >= 0.0 )
        {
          if ( v197 != 0.5 )
          {
            v198 = floor(v196 + 0.5);
            goto LABEL_177;
          }
          v198 = *(double *)&iptr.fields.m_Center.fields.x;
          v199 = 1.0;
        }
        else
        {
          if ( v197 != -0.5 )
          {
            v198 = ceil(v196 + -0.5);
            goto LABEL_177;
          }
          v198 = *(double *)&iptr.fields.m_Center.fields.x;
          v199 = -1.0;
        }
        v200 = v198 + v199;
        if ( ((__int64)v198 & 1) != 0 )
          v198 = v200;
LABEL_177:
        if ( !mBackground )
          goto LABEL_280;
        v201 = v106 - v276;
        if ( v198 == INFINITY )
          v202 = 0x80000000;
        else
          v202 = (int)v198;
        UIWidget__set_width(mBackground, v202, 0);
        v203 = (UIWidget_o *)*v281;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v204 = v276 - v201;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v205 = v204;
        v206 = modf(v204, (double *)&iptr.fields.m_Center.fields.x);
        if ( v204 >= 0.0 )
        {
          if ( v206 != 0.5 )
          {
            v207 = floor(v205 + 0.5);
            goto LABEL_195;
          }
          v207 = *(double *)&iptr.fields.m_Center.fields.x;
          v208 = 1.0;
        }
        else
        {
          if ( v206 != -0.5 )
          {
            v207 = ceil(v205 + -0.5);
            goto LABEL_195;
          }
          v207 = *(double *)&iptr.fields.m_Center.fields.x;
          v208 = -1.0;
        }
        v209 = v207 + v208;
        if ( ((__int64)v207 & 1) != 0 )
          v207 = v209;
LABEL_195:
        if ( !v203 )
          goto LABEL_280;
        if ( v207 == INFINITY )
          v210 = 0x80000000;
        else
          v210 = (int)v207;
        UIWidget__set_height(v203, v210, 0);
        if ( !this->fields.isAligument )
          goto LABEL_219;
        v211 = (UIWidget_o *)*v281;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v212 = v110 + v195;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v213 = v212;
        v214 = modf(v212, (double *)&iptr.fields.m_Center.fields.x);
        if ( v212 >= 0.0 )
        {
          if ( v214 == 0.5 )
          {
            v215 = *(double *)&iptr.fields.m_Center.fields.x;
            v216 = 1.0;
LABEL_209:
            v217 = v215 + v216;
            if ( ((__int64)v215 & 1) != 0 )
              v215 = v217;
            goto LABEL_214;
          }
          v215 = floor(v213 + 0.5);
        }
        else
        {
          if ( v214 == -0.5 )
          {
            v215 = *(double *)&iptr.fields.m_Center.fields.x;
            v216 = -1.0;
            goto LABEL_209;
          }
          v215 = ceil(v213 + -0.5);
        }
LABEL_214:
        if ( !v211 )
          goto LABEL_280;
        if ( v215 == INFINITY )
          v218 = 0x80000000;
        else
          v218 = (int)v215;
        UIWidget__set_width(v211, v218, 0);
LABEL_219:
        v219 = v98->fields._size;
        if ( v219 >= 1 )
        {
          v220 = 0;
          do
          {
            isValid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    v98,
                                                    v220,
                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_280;
            v221 = (UIWidget_o *)isValid;
            UILabel__set_overflowMethod((UILabel_o *)isValid, 0, 0);
            UIWidget__set_width(v221, v193, 0);
          }
          while ( v219 != ++v220 );
        }
        isValid = (UnityEngine_GameObject_o *)this->fields.atlas;
        if ( !isValid )
          goto LABEL_280;
        pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)isValid, 0);
        v223 = pixelSize + pixelSize;
        mHighlight = (UIWidget_o *)this->fields.mHighlight;
        v225 = v283;
        v226 = v195
             - (float)((float)(v81 + this->fields.padding.fields.x) + (float)(v81 + this->fields.padding.fields.x));
        v227 = (float)(pixelSize + pixelSize) * (float)v275->fields.borderLeft;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v228 = v226 + v227;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v229 = v228;
        v230 = modf(v228, (double *)&iptr.fields.m_Center.fields.x);
        if ( v228 >= 0.0 )
        {
          if ( v230 != 0.5 )
          {
            v231 = floor(v229 + 0.5);
            goto LABEL_238;
          }
          v231 = *(double *)&iptr.fields.m_Center.fields.x;
          v232 = 1.0;
        }
        else
        {
          if ( v230 != -0.5 )
          {
            v231 = ceil(v229 + -0.5);
            goto LABEL_238;
          }
          v231 = *(double *)&iptr.fields.m_Center.fields.x;
          v232 = -1.0;
        }
        v233 = v231 + v232;
        if ( ((__int64)v231 & 1) != 0 )
          v231 = v233;
LABEL_238:
        if ( !mHighlight )
          goto LABEL_280;
        if ( v231 == INFINITY )
          v234 = 0x80000000;
        else
          v234 = (int)v231;
        UIWidget__set_width(mHighlight, v234, 0);
        v235 = *v279;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v236 = v107 + (float)(v223 * (float)v274);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v237 = v236;
        v238 = modf(v236, (double *)&iptr.fields.m_Center.fields.x);
        v239 = &this->fields.mBackground;
        if ( v236 >= 0.0 )
        {
          if ( v238 == 0.5 )
          {
            v240 = *(double *)&iptr.fields.m_Center.fields.x;
            v241 = 1.0;
LABEL_251:
            v242 = v240 + v241;
            if ( ((__int64)v240 & 1) != 0 )
              v240 = v242;
            goto LABEL_256;
          }
          v240 = floor(v237 + 0.5);
        }
        else
        {
          if ( v238 == -0.5 )
          {
            v240 = *(double *)&iptr.fields.m_Center.fields.x;
            v241 = -1.0;
            goto LABEL_251;
          }
          v240 = ceil(v237 + -0.5);
        }
LABEL_256:
        if ( !v235 )
          goto LABEL_280;
        if ( v240 == INFINITY )
          v243 = 0x80000000;
        else
          v243 = (int)v240;
        UIWidget__set_height(v235, v243, 0);
        v245 = this->fields.position;
        v246 = v245 == 1;
        if ( !v245 )
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
            v298.fields.x = position;
            v298.fields.z = position_8;
            v298.fields.y = v271;
            v246 = COERCE_FLOAT(LODWORD(UnityEngine_Camera__WorldToViewportPoint_71924488(
                                          (UnityEngine_Camera_o *)isValid,
                                          v298,
                                          0).fields.y)) < 0.5;
          }
        }
        if ( this->fields.isAnimated )
        {
          v249 = *v279;
          UIPopupList__AnimateColor((UIPopupList_o *)isValid, *v279, v244);
          UIPopupList__AnimatePosition(v250, v249, v246, v107 + v201, v251);
          v254 = v98->fields._size;
          if ( v254 >= 1 )
          {
            for ( i = 0; i != v254; ++i )
            {
              v256 = System_Collections_Generic_List_object___get_Item(
                       v98,
                       i,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UILabel__get_Item__);
              UIPopupList__AnimateColor((UIPopupList_o *)v256, (UIWidget_o *)v256, v257);
              UIPopupList__AnimatePosition(v258, (UIWidget_o *)v256, v246, v107 + v201, v259);
            }
          }
          UIPopupList__AnimateColor(v252, (UIWidget_o *)this->fields.mBackground, v253);
          UIPopupList__AnimateScale(this, (UIWidget_o *)this->fields.mBackground, v246, v261, v260);
          v225 = v283;
          v239 = &this->fields.mBackground;
        }
        if ( v246 )
        {
          v299.fields.z = position_4;
          v299.fields.y = (float)(y - v201) - v276;
          v299.fields.x = v272;
          UnityEngine_Transform__set_localPosition(v225, v299, 0);
        }
        localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(v225, 0);
        if ( *v239 )
        {
          isValid = (UnityEngine_GameObject_o *)*v273;
          if ( *v273 )
          {
            v262 = COERCE_FLOAT(
                     COERCE_UNSIGNED_INT128(
                       ((long double (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, float, float, float, float))*(_QWORD *)&isValid->klass[1]._2.field_count)(
                         isValid,
                         *(_QWORD *)&isValid->klass[1]._2.interfaces_count,
                         *(float *)&localPosition,
                         *((float *)&localPosition + 1),
                         *(float *)&localPosition + (float)(*v239)->fields.mWidth,
                         *((float *)&localPosition + 1) - (float)(*v239)->fields.mHeight)));
            v264 = v263;
            v266 = v265;
            v290 = UnityEngine_Transform__get_localPosition(v225, 0);
            v300.fields.x = v262 + v290.fields.x;
            v300.fields.y = v264 + v290.fields.y;
            v300.fields.z = v266 + v290.fields.z;
            UnityEngine_Transform__set_localPosition(v225, v300, 0);
            return;
          }
        }
LABEL_280:
        sub_1C93D2C(isValid, v3);
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

  if ( (byte_4D35100 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UILabel_SetCurrentSelection__);
    byte_4D35100 = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(textLabel, 0, 0) )
  {
    onChange = this->fields.onChange;
    v5 = (Il2CppObject *)this->fields.textLabel;
    v6 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v6, v5, Method_UILabel_SetCurrentSelection__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(onChange, v6, 0);
    this->fields.textLabel = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.textLabel, 0, v7, v8, v9, v10, v11, v12);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.mSelectedItem, 0) )
    {
      mSelectedItem = this->fields.mSelectedItem;
      this->fields.mSelectedItem = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSelectedItem, 0, v14, v15, v16, v17, v18, v19);
      v23 = this;
      Item = (Il2CppObject *)mSelectedItem;
      goto LABEL_18;
    }
    items = (System_Collections_Generic_List_object__o *)this->fields.items;
    if ( !items )
      sub_1C93D2C(0, v13);
    if ( items->fields._size >= 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               items,
               0,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
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
  bool IsValid_49972204; // w0
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

  if ( (byte_4D350FD & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIPopupList_TypeInfo);
    byte_4D350FD = 1;
  }
  current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(current, (UnityEngine_Object_o *)this, 0) )
  {
    static_fields = UIPopupList_TypeInfo->static_fields;
    v11 = static_fields->current;
    static_fields->current = this;
    sub_1C93A78(
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
    IsValid_49972204 = EventDelegate__IsValid_49972204(onChange, 0);
    if ( IsValid_49972204 )
      v15 = 0;
    else
      v15 = v11;
    if ( IsValid_49972204 )
    {
      v16 = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49943632(v16, 0);
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
            sub_1C93D2C(0, v24);
          UnityEngine_GameObject__SendMessage_72100192(
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
    sub_1C93A78(
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

  if ( (byte_4D35103 & 1) == 0 )
  {
    sub_1C93AD4(&UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
    byte_4D35103 = 1;
  }
  v3 = sub_1C93D20(UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4D350F9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350F9 = 1;
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
        sub_1C93D2C(0, v6);
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

  if ( (byte_4D350F8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350F8 = 1;
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
    sub_1C93D2C(0, v5);
  return UIFont__get_defaultSize(v7, 0);
}


UnityEngine_Object_o *UIPopupList__get_ambigiousFont(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o **p_trueTypeFont; // x21
  UnityEngine_Object_o *bitmapFont; // x20

  if ( (byte_4D350F1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350F1 = 1;
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

  if ( (byte_4D350F4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    byte_4D350F4 = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_9;
  v4 = System_Collections_Generic_List_object___IndexOf(
         items,
         (Il2CppObject *)this->fields.mSelectedItem,
         (const MethodInfo_387A63C *)Method_System_Collections_Generic_List_string__IndexOf__);
  if ( (v4 & 0x80000000) != 0 )
    return 0;
  method = (const MethodInfo *)v4;
  items = this->fields.itemData;
  if ( !items )
LABEL_9:
    sub_1C93D2C(items, method);
  if ( (int)method < items->fields._size )
    return System_Collections_Generic_List_object___get_Item(
             items,
             (int32_t)method,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
  return 0;
}


bool UIPopupList__get_handleEvents(UIPopupList_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D350F5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350F5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
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
      sub_1C93D2C(v4, v5);
    return !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
  }
}


bool UIPopupList__get_isOpen(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mChild; // x19

  if ( (byte_4D350F3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350F3 = 1;
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

  if ( (byte_4D350F7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350F7 = 1;
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

  if ( (byte_4D350F2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Font_TypeInfo);
    sub_1C93AD4(&UIFont_TypeInfo);
    byte_4D350F2 = 1;
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
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont, v14, (int32_t)method, v3, v4, v5, v6, v7);
      this->fields.bitmapFont = 0;
      p_bitmapFont = (GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont;
      sub_1C93A78(p_bitmapFont, 0, v16, v17, v18, v19, v20, v21);
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
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bitmapFont, v29, (int32_t)method, v3, v4, v5, v6, v7);
      this->fields.trueTypeFont = 0;
      p_trueTypeFont = (GrandQuestFolderBoardItem_o *)&this->fields.trueTypeFont;
      sub_1C93A78(p_trueTypeFont, 0, v31, v32, v33, v34, v35, v36);
      v28 = (GrandQuestFolderBoardItem_o *)((char *)p_trueTypeFont + 224);
      p_trueTypeFont[1].fields.sortValue1B = 0;
    }
    sub_1C93A78(v28, 0, v22, v23, v24, v25, v26, v27);
  }
}


void UIPopupList__set_handleEvents(UIPopupList_o *this, bool value, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D350F6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D350F6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C93D2C(v6, v7);
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
  sub_1C93A78(
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1ACFD18;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1ACFCF8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1ACFCB0;
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
  return sub_1C93A88(this, &v6, callback, object);
}


void UIPopupList_LegacyEvent__EndInvoke(
        UIPopupList_LegacyEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  Il2CppObject **p__2__current; // x19

  if ( (byte_4D3510D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3510D = 1;
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
      sub_1C93D2C(selectedObject, v12);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p__2__current - 2) = 1;
  return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_UIPopupList__CloseIfUnselected_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  UnityEngine_Vector3_o HighlightPosition; // 0:kr00_12.12

  v2 = this;
  if ( (byte_4D3510E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    this = (UIPopupList__UpdateTweenPosition_d__78_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3510E = 1;
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
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
      v2->fields._tp_5__2 = (struct TweenPosition_o *)Component_object;
      sub_1C93A78(
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
              sub_1C93A78(p__2__current, 0, v23, v24, v25, v26, v27, v28);
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
              return 1;
            }
          }
LABEL_26:
          sub_1C93D2C(this, method);
        }
      }
      *p_tp_5__2 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields._tp_5__2, 0, v16, v17, v18, v19, v20, v21);
      if ( !_4__this )
        goto LABEL_26;
    }
  }
  _4__this->fields.mTweening = 0;
  return 0;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_UIPopupList__UpdateTweenPosition_d__78_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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