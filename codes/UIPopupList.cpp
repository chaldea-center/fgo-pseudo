void UIPopupList___ctor(UIPopupList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_EventDelegate__c *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_5975047 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_object___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_10362/*"OnSelectionChange"*/);
    byte_5975047 = 1;
  }
  v3 = System_Collections_Generic_List_string__TypeInfo;
  this->fields.fontSize = 16;
  this->fields.alignment = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.items = (struct System_Collections_Generic_List_string__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.items, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_object___ctor__);
  this->fields.itemData = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemData, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  __asm { FMOV            V1.4S, #1.0 }
  v23 = System_Collections_Generic_List_EventDelegate__TypeInfo;
  this->fields.isAnimated = 1;
  *(_QWORD *)&this->fields.highlightColor.fields.b = 0x3F8000003F169697LL;
  *(_OWORD *)&this->fields.textColor.fields.b = _Q1;
  *(_OWORD *)&this->fields.backgroundColor.fields.b = xmmword_E9CC30;
  *(_OWORD *)&this->fields.padding.fields.x = xmmword_E9C160;
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onChange, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mLabelList = (struct System_Collections_Generic_List_UILabel__o *)v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mLabelList, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_10362/*"OnSelectionChange"*/;
  this->fields.functionName = (struct System_String_o *)StringLiteral_10362/*"OnSelectionChange"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.functionName, v38, v39, v40, v41, v42, v43, v44);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIPopupList__AddItem(UIPopupList_o *this, System_String_o *text, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *items; // x0
  struct System_Object_array *v11; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Collections_Generic_List_object__o *itemData; // x8
  struct System_Object_array *v22; // x9
  _QWORD *v23; // x10
  __int64 v24; // x11
  Il2CppClass **v25; // x0

  if ( (byte_5975036 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_object__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    byte_5975036 = 1;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &v11->obj.klass + size;
    items->fields._size = size + 1;
    v14[4] = (Il2CppClass *)text;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)text,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  itemData = this->fields.itemData;
  if ( !itemData
    || (v22 = itemData->fields._items,
        v23 = Method_System_Collections_Generic_List_object__Add__,
        ++itemData->fields._version,
        !v22) )
  {
LABEL_13:
    sub_2213CDC(items, text);
  }
  v24 = itemData->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemData,
      0,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v25[4] = 0;
    itemData->fields._size = v24 + 1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), 0, v15, v16, v17, v18, v19, v20);
  }
}


void UIPopupList__AddItem_56262060(
        UIPopupList_o *this,
        System_String_o *text,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *items; // x0
  struct System_Object_array *v12; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_List_object__o *itemData; // x8
  struct System_Object_array *v23; // x9
  _QWORD *v24; // x10
  __int64 v25; // x11
  Il2CppClass **v26; // x0

  if ( (byte_5975037 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_object__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    byte_5975037 = 1;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &v12->obj.klass + size;
    items->fields._size = size + 1;
    v15[4] = (Il2CppClass *)text;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v15 + 4),
      (int32_t)text,
      (System_String_o *)data,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemData = this->fields.itemData;
  if ( !itemData
    || (v23 = itemData->fields._items,
        v24 = Method_System_Collections_Generic_List_object__Add__,
        ++itemData->fields._version,
        !v23) )
  {
LABEL_13:
    sub_2213CDC(items, text);
  }
  v25 = itemData->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemData,
      data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    itemData->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)data;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)data, v16, v17, v18, v19, v20, v21);
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
  v9.fields.a = 0.0;
  b = widget->fields.mColor.fields.b;
  a = widget->fields.mColor.fields.a;
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
    sub_2213CDC(this, widget);
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
  float x; // s11
  float y; // s9
  float z; // s10
  float v11; // s2 OVERLAPPED
  float v12; // s1
  float v13; // s0
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
  v11 = z;
  v12 = placeAbove ? bottom : 0.0;
  v13 = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)(&v11 - 2), 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)widget, 0);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  this = (UIPopupList_o *)TweenPosition__Begin(gameObject, 0.15, v16, 0);
  if ( !this )
LABEL_9:
    sub_2213CDC(this, widget);
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
  UnityEngine_Transform_o *cachedTransform; // x21
  const MethodInfo *v10; // x1
  int32_t activeFontSize; // w24
  const MethodInfo *v12; // x1
  float activeFontScale; // s0
  float v14; // s11
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
  v18.fields.z = 1.0;
  v18.fields.y = v14 / (float)widget->fields.mHeight;
  v18.fields.x = 1.0;
  UnityEngine_Transform__set_localScale(cachedTransform, v18, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
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
    sub_2213CDC(this, widget);
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
  if ( (byte_5975035 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_object__Clear__);
    this = (UIPopupList_o *)sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    byte_5975035 = 1;
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
    sub_2213CDC(this, method);
  v7 = itemData->fields._size;
  v8 = itemData->fields._version + 1;
  itemData->fields._size = 0;
  itemData->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)itemData->fields._items, 0, v7, 0);
}


void UIPopupList__Close(UIPopupList_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  struct UnityEngine_GameObject_o **p_mChild; // x20
  UnityEngine_Object_o *mChild; // x21
  void *ComponentsInChildren_object__59472212; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_UILabel__o *mLabelList; // x8
  const MethodInfo *size; // x2
  int v16; // w9
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x24
  _QWORD *v19; // x21
  __int64 v20; // x25
  float v21; // s9
  float v22; // s10
  float v23; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x24
  _QWORD *v26; // x21
  __int64 v27; // x25
  UnityEngine_Object_o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct UISprite_o **p_mHighlight; // x19
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  UnityEngine_Color_o v48; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5975043 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_4685/*"CloseIfUnselected"*/);
    byte_5975043 = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_83445668(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4685/*"CloseIfUnselected"*/,
    0);
  this->fields.mSelection = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSelection, 0, v3, v4, v5, v6, v7, v8);
  p_mChild = &this->fields.mChild;
  mChild = (UnityEngine_Object_o *)this->fields.mChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  ComponentsInChildren_object__59472212 = (void *)UnityEngine_Object__op_Inequality(mChild, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object__59472212 & 1) != 0 )
  {
    mLabelList = this->fields.mLabelList;
    if ( mLabelList )
    {
      size = (const MethodInfo *)(unsigned int)mLabelList->fields._size;
      v16 = mLabelList->fields._version + 1;
      mLabelList->fields._size = 0;
      mLabelList->fields._version = v16;
      if ( (int)size >= 1 )
        System_Array__Clear((System_Array_o *)mLabelList->fields._items, 0, (int32_t)size, 0);
      UIPopupList__set_handleEvents(this, 0, size);
      v17 = (UnityEngine_Object_o *)this->fields.mChild;
      if ( !this->fields.isAnimated )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        UnityEngine_Object__Destroy_83459800(v17, 0);
LABEL_32:
        this->fields.mBackground = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mBackground, 0, v29, v30, v31, v32, v33, v34);
        this->fields.mHighlight = 0;
        p_mHighlight = &this->fields.mHighlight;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mHighlight, 0, v36, v37, v38, v39, v40, v41);
        *(p_mHighlight - 2) = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mChild, 0, v42, v43, v44, v45, v46, v47);
        return;
      }
      if ( v17 )
      {
        ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                  this->fields.mChild,
                                                  (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( ComponentsInChildren_object__59472212 )
        {
          v18 = *((_QWORD *)ComponentsInChildren_object__59472212 + 3);
          v19 = ComponentsInChildren_object__59472212;
          if ( (int)v18 >= 1 )
          {
            v20 = 0;
            while ( (unsigned int)v20 < *((_DWORD *)v19 + 6) )
            {
              ComponentsInChildren_object__59472212 = (void *)v19[v20 + 4];
              if ( !ComponentsInChildren_object__59472212 )
                goto LABEL_33;
              v21 = *((float *)ComponentsInChildren_object__59472212 + 37);
              v22 = *((float *)ComponentsInChildren_object__59472212 + 38);
              v23 = *((float *)ComponentsInChildren_object__59472212 + 39);
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)ComponentsInChildren_object__59472212,
                             0);
              v48.fields.a = 0.0;
              v48.fields.r = v21;
              v48.fields.g = v22;
              v48.fields.b = v23;
              ComponentsInChildren_object__59472212 = TweenColor__Begin(gameObject, 0.15, v48, 0);
              if ( !ComponentsInChildren_object__59472212 )
                goto LABEL_33;
              ++v20;
              *((_DWORD *)ComponentsInChildren_object__59472212 + 8) = 2;
              if ( (_DWORD)v18 == (_DWORD)v20 )
                goto LABEL_18;
            }
LABEL_34:
            sub_2213CE4(ComponentsInChildren_object__59472212);
          }
LABEL_18:
          ComponentsInChildren_object__59472212 = *p_mChild;
          if ( *p_mChild )
          {
            ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                      (UnityEngine_GameObject_o *)ComponentsInChildren_object__59472212,
                                                      (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Collider___);
            if ( ComponentsInChildren_object__59472212 )
            {
              v25 = *((_QWORD *)ComponentsInChildren_object__59472212 + 3);
              v26 = ComponentsInChildren_object__59472212;
              if ( (int)v25 >= 1 )
              {
                v27 = 0;
                while ( (unsigned int)v27 < *((_DWORD *)v26 + 6) )
                {
                  ComponentsInChildren_object__59472212 = (void *)v26[v27 + 4];
                  if ( !ComponentsInChildren_object__59472212 )
                    goto LABEL_33;
                  UnityEngine_Collider__set_enabled(
                    (UnityEngine_Collider_o *)ComponentsInChildren_object__59472212,
                    0,
                    0);
                  if ( (_DWORD)v25 == (_DWORD)++v27 )
                    goto LABEL_25;
                }
                goto LABEL_34;
              }
LABEL_25:
              v28 = (UnityEngine_Object_o *)*p_mChild;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
              UnityEngine_Object__Destroy(v28, 0.15, 0);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_33:
    sub_2213CDC(ComponentsInChildren_object__59472212, v13);
  }
}


System_Collections_IEnumerator_o *UIPopupList__CloseIfUnselected(UIPopupList_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5975045 & 1) == 0 )
  {
    sub_2213A60(&UIPopupList__CloseIfUnselected_d__93_TypeInfo);
    byte_5975045 = 1;
  }
  v3 = sub_2213CCC(UIPopupList__CloseIfUnselected_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


UnityEngine_Vector3_o UIPopupList__GetHighlightPosition(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHighlightedLabel; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *mHighlight; // x20
  __int64 v6; // x1
  UISprite_o *atlas; // x0
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v9; // x20
  float pixelSize; // s0
  int borderLeft; // s9
  int borderTop; // s10
  float v13; // s8
  float y; // s1
  float z; // s2
  float x; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597503D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597503D = 1;
  }
  mHighlightedLabel = (UnityEngine_Object_o *)this->fields.mHighlightedLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mHighlightedLabel, 0, 0) )
  {
    mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(mHighlight, 0, 0) )
    {
      atlas = this->fields.mHighlight;
      if ( !atlas )
        goto LABEL_18;
      AtlasSprite = UISprite__GetAtlasSprite(atlas, 0);
      if ( AtlasSprite )
      {
        v9 = AtlasSprite;
        atlas = (UISprite_o *)this->fields.atlas;
        if ( atlas )
        {
          pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)atlas, 0);
          atlas = (UISprite_o *)this->fields.mHighlightedLabel;
          if ( atlas )
          {
            borderLeft = v9->fields.borderLeft;
            borderTop = v9->fields.borderTop;
            v13 = pixelSize;
            atlas = (UISprite_o *)UIRect__get_cachedTransform((UIRect_o *)atlas, 0);
            if ( atlas )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)atlas, 0);
              y = (float)(v13 * (float)borderTop) + localPosition.fields.y;
              z = localPosition.fields.z + 1.0;
              x = localPosition.fields.x - (float)(v13 * (float)borderLeft);
              goto LABEL_19;
            }
          }
        }
LABEL_18:
        sub_2213CDC(atlas, v6);
      }
    }
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  UISprite_o *cachedTransform; // x0
  const MethodInfo *v16; // x1
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 mTweening; // w8
  System_String_o *v22; // x1
  UnityEngine_Vector3_o HighlightPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_597503C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15806/*"UpdateTweenPosition"*/);
    byte_597503C = 1;
  }
  mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, lbl);
  if ( UnityEngine_Object__op_Inequality(mHighlight, 0, 0) )
  {
    this->fields.mHighlightedLabel = lbl;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mHighlightedLabel,
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
            v24.fields.y = y;
            v24.fields.z = z;
            v24.fields.x = x;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v24, 0);
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
          v25.fields.x = x;
          v25.fields.y = y;
          v25.fields.z = z;
          cachedTransform = (UISprite_o *)TweenPosition__Begin(gameObject, 0.1, v25, 0);
          if ( cachedTransform )
          {
            mTweening = this->fields.mTweening;
            LODWORD(cachedTransform->fields.leftAnchor) = 2;
            if ( !mTweening )
            {
              v22 = (System_String_o *)StringLiteral_15806/*"UpdateTweenPosition"*/;
              this->fields.mTweening = 1;
              UnityEngine_MonoBehaviour__StartCoroutine((UnityEngine_MonoBehaviour_o *)this, v22, 0);
            }
            return;
          }
        }
      }
    }
    sub_2213CDC(cachedTransform, v14);
  }
}


void UIPopupList__OnClick(UIPopupList_o *this, const MethodInfo *method)
{
  int32_t openOn; // w8
  UICamera_c *v4; // x0

  if ( (byte_5975044 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975044 = 1;
  }
  openOn = this->fields.openOn;
  if ( (unsigned int)(openOn - 2) >= 2 )
  {
    if ( openOn != 1 )
      goto LABEL_9;
    v4 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
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
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_Object_o *font; // x20
  __int64 v18; // x1
  UIFont_o *klass; // x0
  struct UnityEngine_Font_o *dynamicFont; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t dynamicFontStyle; // w0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  bool v34; // w8
  UnityEngine_Object_o *bitmapFont; // x21
  struct UIFont_o *v36; // x1
  UnityEngine_Object_o *v37; // x20
  __int64 v38; // x1
  float defaultSize; // s8
  float textScale; // s9
  float v41; // s9
  double v42; // d8
  double v43; // d0
  double v44; // d0
  double v45; // d1
  int32_t v46; // w8
  double v47; // d1
  MissionNaviTransitionBoardItem_o *p_trueTypeFont; // x20
  UnityEngine_Object_o *trueTypeFont; // x21
  __int64 v50; // x1
  MissionNaviTransitionBoardItem_o *p_bitmapFont; // x19
  UnityEngine_Object_o *v52; // x21
  struct UIFont_o *v53; // t1
  UnityEngine_Font_o *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5975039 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975039 = 1;
  }
  onChange = this->fields.onChange;
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, method);
  if ( EventDelegate__IsValid_56312868(onChange, 0) )
  {
    this->fields.eventReceiver = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventReceiver, 0, v5, v6, v7, v8, v9, v10);
    this->fields.functionName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.functionName, 0, v11, v12, v13, v14, v15, v16);
  }
  font = (UnityEngine_Object_o *)this->fields.font;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(font, 0, 0) )
  {
    klass = this->fields.font;
    if ( !klass )
      goto LABEL_56;
    if ( UIFont__get_isDynamic(klass, 0) )
    {
      klass = this->fields.font;
      if ( !klass )
        goto LABEL_56;
      dynamicFont = UIFont__get_dynamicFont(klass, 0);
      this->fields.trueTypeFont = dynamicFont;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.trueTypeFont,
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
      dynamicFontStyle = UIFont__get_dynamicFontStyle(klass, 0);
      v34 = 1;
      this->fields.fontStyle = dynamicFontStyle;
    }
    else
    {
      bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( !UnityEngine_Object__op_Equality(bitmapFont, 0, 0) )
        goto LABEL_20;
      v36 = this->fields.font;
      this->fields.bitmapFont = v36;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFont,
        (int32_t)v36,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = 0;
    }
    this->fields.mUseDynamicFont = v34;
LABEL_20:
    this->fields.font = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.font, 0, v28, v29, v30, v31, v32, v33);
  }
  if ( this->fields.textScale != 0.0 )
  {
    v37 = (UnityEngine_Object_o *)this->fields.bitmapFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( !UnityEngine_Object__op_Inequality(v37, 0, 0) )
    {
      v46 = 16;
LABEL_44:
      this->fields.fontSize = v46;
      this->fields.textScale = 0.0;
      goto LABEL_45;
    }
    klass = this->fields.bitmapFont;
    if ( !klass )
      goto LABEL_56;
    defaultSize = (float)UIFont__get_defaultSize(klass, 0);
    textScale = this->fields.textScale;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    v41 = textScale * defaultSize;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38);
    v42 = v41;
    v43 = modf(v41, &iptr);
    if ( v41 >= 0.0 )
    {
      if ( v43 == 0.5 )
      {
        v45 = 1.0;
        v44 = iptr;
LABEL_36:
        v47 = v44 + v45;
        if ( ((__int64)v44 & 1) != 0 )
          v44 = v47;
        goto LABEL_41;
      }
      v44 = floor(v42 + 0.5);
    }
    else
    {
      if ( v43 == -0.5 )
      {
        v44 = iptr;
        v45 = -1.0;
        goto LABEL_36;
      }
      v44 = ceil(v42 + -0.5);
    }
LABEL_41:
    if ( v44 == INFINITY )
      v46 = 0x80000000;
    else
      v46 = (int)v44;
    goto LABEL_44;
  }
LABEL_45:
  p_trueTypeFont = (MissionNaviTransitionBoardItem_o *)&this->fields.trueTypeFont;
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
  {
    v53 = this->fields.bitmapFont;
    p_bitmapFont = (MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFont;
    v52 = (UnityEngine_Object_o *)v53;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
    {
      klass = (UIFont_o *)p_bitmapFont->klass;
      if ( !p_bitmapFont->klass )
        goto LABEL_56;
      if ( UIFont__get_isDynamic(klass, 0) )
      {
        klass = (UIFont_o *)p_bitmapFont->klass;
        if ( p_bitmapFont->klass )
        {
          v54 = UIFont__get_dynamicFont(klass, 0);
          p_trueTypeFont->klass = (MissionNaviTransitionBoardItem_c *)v54;
          sub_2213A04(p_trueTypeFont, (int32_t)v54, v55, v56, v57, v58, v59, v60);
          p_bitmapFont->klass = 0;
          sub_2213A04(p_bitmapFont, 0, v61, v62, v63, v64, v65, v66);
          return;
        }
LABEL_56:
        sub_2213CDC(klass, v18);
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
  if ( (byte_597503F & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_597503F = 1;
  }
  if ( isOver )
  {
    if ( !go )
      sub_2213CDC(this, go);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
  if ( (byte_5975041 & 1) == 0 )
  {
    this = (UIPopupList_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_5975041 = 1;
  }
  if ( isPressed )
  {
    if ( !go )
      sub_2213CDC(this, go);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    UIPopupList__Select(v6, (UILabel_o *)Component_object, 1, v8);
  }
}


void UIPopupList__OnKey(UIPopupList_o *this, int32_t key, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *mLabelList; // x0
  int32_t v10; // w0
  int v11; // w8
  Il2CppObject *Item; // x1
  const MethodInfo *v13; // x3

  if ( (byte_5975042 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975042 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive_56411004(gameObject, 0) && UIPopupList__get_handleEvents(this, v7) )
    {
      mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
      if ( !mLabelList )
        goto LABEL_23;
      v10 = System_Collections_Generic_List_object___IndexOf(
              mLabelList,
              (Il2CppObject *)this->fields.mHighlightedLabel,
              (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_UILabel__IndexOf__);
      if ( v10 == -1 )
        v11 = 0;
      else
        v11 = v10;
      switch ( key )
      {
        case 27:
          UIPopupList__Close(this, v8);
          break;
        case 274:
          mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
          if ( !mLabelList )
            goto LABEL_23;
          LODWORD(v8) = v11 + 1;
          if ( v11 + 1 < mLabelList->fields._size )
            goto LABEL_20;
          break;
        case 273:
          v8 = (const MethodInfo *)(unsigned int)(v11 - 1);
          if ( v11 >= 1 )
          {
            mLabelList = (System_Collections_Generic_List_object__o *)this->fields.mLabelList;
            if ( !mLabelList )
LABEL_23:
              sub_2213CDC(mLabelList, v8);
LABEL_20:
            Item = System_Collections_Generic_List_object___get_Item(
                     mLabelList,
                     (int32_t)v8,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UnityEngine_Font_o *trueTypeFont; // x23
  UnityEngine_Object_o *bitmapFont; // x21
  struct UIFont_o **p_bitmapFont; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UnityEngine_Font_o *dynamicFont; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t defaultSize; // w0
  bool v48; // w8

  if ( (byte_597503A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597503A = 1;
  }
  trueTypeFont = this->fields.trueTypeFont;
  p_bitmapFont = &this->fields.bitmapFont;
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  this->fields.bitmapFont = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFont, 0, v2, v3, v4, v5, v6, v7);
  this->fields.trueTypeFont = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.trueTypeFont, 0, v12, v13, v14, v15, v16, v17);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trueTypeFont, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Equality(bitmapFont, 0, 0) || !this->fields.mUseDynamicFont )
    {
      *p_bitmapFont = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFont, 0, v20, v21, v22, v23, v24, v25);
LABEL_17:
      this->fields.trueTypeFont = trueTypeFont;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.trueTypeFont,
        (int32_t)trueTypeFont,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v48 = 1;
      goto LABEL_18;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v26 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
  if ( !v26 )
    goto LABEL_17;
  if ( !bitmapFont )
    sub_2213CDC(v26, v27);
  if ( UIFont__get_isDynamic((UIFont_o *)bitmapFont, 0) )
  {
    dynamicFont = UIFont__get_dynamicFont((UIFont_o *)bitmapFont, 0);
    this->fields.trueTypeFont = dynamicFont;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.trueTypeFont,
      (int32_t)dynamicFont,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    this->fields.fontStyle = UIFont__get_dynamicFontStyle((UIFont_o *)bitmapFont, 0);
    defaultSize = UIFont__get_defaultSize((UIFont_o *)bitmapFont, 0);
    v48 = 1;
    this->fields.fontSize = defaultSize;
  }
  else
  {
    *p_bitmapFont = (struct UIFont_o *)bitmapFont;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFont,
      (int32_t)bitmapFont,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v48 = 0;
  }
LABEL_18:
  this->fields.mUseDynamicFont = v48;
}


void UIPopupList__Select(UIPopupList_o *this, UILabel_o *lbl, bool instant, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  _QWORD *monitor; // x8
  System_String_o *v11; // x1
  UnityEngine_GameObject_c *klass; // x21
  UnityEngine_GameObject_o *v13; // x19
  __int64 v14; // x22
  __int64 v15; // x8
  UnityEngine_AudioClip_o *v16; // x20
  float v17; // s8

  if ( (byte_5975040 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponents_UIPlaySound___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975040 = 1;
  }
  UIPopupList__Highlight(this, lbl, instant, method);
  if ( !lbl )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lbl, 0);
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
  if ( !gameObject )
    goto LABEL_22;
  monitor = gameObject[1].monitor;
  if ( monitor )
    v11 = *monitor == qword_5984390 ? (System_String_o *)gameObject[1].monitor : 0LL;
  else
    v11 = 0;
  UIPopupList__set_value(this, v11, v9);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponents_object__58856932(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_38215E4 *)Method_UnityEngine_Component_GetComponents_UIPlaySound___);
  if ( !gameObject )
    goto LABEL_22;
  klass = gameObject[1].klass;
  v13 = gameObject;
  if ( (int)klass >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= LODWORD(v13[1].klass) )
        sub_2213CE4(gameObject);
      v15 = *((_QWORD *)&v13[1].monitor + v14);
      if ( !v15 )
        break;
      if ( !*(_DWORD *)(v15 + 40) )
      {
        v16 = *(UnityEngine_AudioClip_o **)(v15 + 32);
        v17 = *(float *)(v15 + 44);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v8);
        gameObject = (UnityEngine_GameObject_o *)NGUITools__PlaySound_56409168(v16, v17, 1.0, 0);
      }
      if ( (_DWORD)klass == (_DWORD)++v14 )
        return;
    }
LABEL_22:
    sub_2213CDC(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPopupList__Show(UIPopupList_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *mChild; // x20
  struct UnityEngine_GameObject_o **p_mChild; // x22
  UnityEngine_Object_o *atlas; // x20
  __int64 isValid; // x0
  struct System_Collections_Generic_List_string__o *items; // x8
  __int64 v11; // x1
  UnityEngine_Object_o *mPanel; // x21
  UIRect_o **p_mPanel; // x26
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x21
  UIPanel_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x21
  UnityEngine_Transform_o *v26; // x23
  UnityEngine_GameObject_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_Transform_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x1
  UnityEngine_Object_o *selectedObject; // x24
  __int64 v39; // x1
  struct UnityEngine_GameObject_o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  UnityEngine_GameObject_o *mSelection; // x24
  struct UnityEngine_GameObject_o *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  UnityEngine_Object_o *v56; // x24
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x25
  UnityEngine_Transform_o *v59; // x23
  UnityEngine_Camera_o *v60; // x24
  struct UICamera_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s10
  float v64; // s11
  float v65; // s12
  UnityEngine_Transform_o *parent; // x0
  unsigned __int64 v67; // d1 OVERLAPPED
  float v68; // s0
  int v69; // s2
  __int64 v70; // x1
  UnityEngine_GameObject_o *v71; // x23
  UIAtlas_o *v72; // x24
  System_String_o *backgroundSprite; // x25
  struct UISprite_o *v74; // x0
  struct UISprite_o **p_mBackground; // x20
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  UIWidget_o *v82; // x24
  UnityEngine_GameObject_o *v83; // x0
  float v84; // s0
  float v85; // s1
  float v86; // s14
  float v87; // s13
  struct UISprite_o *v88; // x0
  struct UISprite_o **p_mHighlight; // x21
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  UISpriteData_o *AtlasSprite; // x0
  const MethodInfo *v97; // x1
  int32_t borderTop; // s15
  int32_t activeFontSize; // w27
  const MethodInfo *v100; // x1
  float activeFontScale; // s0
  float v102; // s8
  System_Collections_Generic_List_object__o *v103; // x25
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct System_Collections_Generic_List_string__o *v110; // x8
  float v111; // s15
  int size; // w20
  float v113; // s11
  float v114; // s1
  float v115; // s12
  float v116; // s13
  float v117; // s8
  float v118; // s10
  Il2CppObject *Item; // x0
  __int64 v120; // x1
  UnityEngine_GameObject_o *v121; // x26
  System_String_o *v122; // x28
  Il2CppObject *v123; // x27
  System_String_o *v124; // x1
  float v125; // s0
  UnityEngine_Transform_o *cachedTransform; // x0
  float v127; // s9
  UnityEngine_Transform_o *v128; // x29
  float v129; // s0
  float v130; // s0 OVERLAPPED
  UnityEngine_Transform_o *v131; // x0
  float v132; // s9
  float v133; // s0
  float v134; // s1
  float v135; // s2
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  float v146; // s9
  float v147; // s0
  UnityEngine_GameObject_o *v148; // x0
  UIEventListener_o *v149; // x29
  UIEventListener_BoolDelegate_o *v150; // x26
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  UIEventListener_BoolDelegate_o *v157; // x26
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  UIEventListener_VoidDelegate_o *v164; // x26
  System_String_o *v165; // x2
  System_String_o *v166; // x3
  int32_t v167; // w4
  int32_t v168; // w5
  bool v169; // w6
  bool v170; // w7
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  System_String_o *v177; // x2
  MethodInfo *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  __int64 v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  __int64 v186; // x8
  struct System_Collections_Generic_List_UILabel__o *mLabelList; // x8
  float v188; // s8
  float v189; // s9
  int v190; // w20
  float v191; // s8
  int32_t v192; // w22
  __int64 v193; // x27
  __int64 v194; // x1
  UnityEngine_GameObject_o *v195; // x26
  const MethodInfo_3820CA8 *v196; // x1
  __int64 v197; // x1
  Il2CppObject *Component_object; // x28
  UnityEngine_BoxCollider2D_o *v199; // x26
  int32_t v200; // w0
  UIWidget_o *mBackground; // x26
  int32_t v202; // w22
  float v203; // s8
  float v204; // s9
  UIWidget_o *v205; // x26
  UIWidget_o *v206; // x26
  int v207; // w20
  int32_t v208; // w27
  UIWidget_o *v209; // x26
  float pixelSize; // s0
  float v211; // s10
  UIWidget_o *mHighlight; // x22
  UIWidget_o *v213; // x22
  const MethodInfo *v214; // x3
  int32_t v215; // w8
  _BOOL4 v216; // w22
  __int64 v217; // x1
  int32_t layer; // w22
  __int64 v219; // x1
  UnityEngine_Object_o *CameraForLayer; // x22
  UIPopupList_o *v221; // x0
  const MethodInfo *v222; // x2
  int v223; // w20
  int32_t i; // w24
  Il2CppObject *v225; // x26
  const MethodInfo *v226; // x2
  UIPopupList_o *v227; // x0
  const MethodInfo *v228; // x3
  const MethodInfo *v229; // x3
  float v230; // s0
  float v231; // s8
  float v232; // s1
  float v233; // s9
  float v234; // s2
  float v235; // s10
  float position; // [xsp+14h] [xbp-12Ch]
  float position_4; // [xsp+18h] [xbp-128h]
  float position_8; // [xsp+1Ch] [xbp-124h]
  float v239; // [xsp+20h] [xbp-120h]
  int v240; // [xsp+24h] [xbp-11Ch]
  UIWidget_o **v241; // [xsp+28h] [xbp-118h]
  UISpriteData_o *v242; // [xsp+30h] [xbp-110h]
  struct UIPanel_o **v243; // [xsp+38h] [xbp-108h]
  float v244; // [xsp+44h] [xbp-FCh]
  float v245; // [xsp+48h] [xbp-F8h]
  float v246; // [xsp+4Ch] [xbp-F4h]
  float y; // [xsp+50h] [xbp-F0h]
  UnityEngine_Transform_o *v248; // [xsp+68h] [xbp-D8h]
  struct UISprite_o **v249; // [xsp+70h] [xbp-D0h]
  float v250; // [xsp+7Ch] [xbp-C4h]
  float v251; // [xsp+80h] [xbp-C0h]
  UnityEngine_Bounds_o v252; // [xsp+84h] [xbp-BCh] BYREF
  int v253; // [xsp+9Ch] [xbp-A4h] BYREF
  UnityEngine_Vector2_o v254; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v255; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v256; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v257; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v258; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v259; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v260; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v261; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v262; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v265; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v266; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v267; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v268; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v269; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v270; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v271; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5975046 & 1) == 0 )
  {
    sub_2213A60(&UIEventListener_BoolDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_2213A60(&Localization_TypeInfo);
    sub_2213A60(&Method_NGUITools_AddWidget_UILabel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&UIPanel_TypeInfo);
    sub_2213A60(&Method_UIPopupList_OnItemClick__);
    sub_2213A60(&Method_UIPopupList_OnItemHover__);
    sub_2213A60(&Method_UIPopupList_OnItemPress__);
    sub_2213A60(&UIEventListener_VoidDelegate_TypeInfo);
    sub_2213A60(&StringLiteral_4685/*"CloseIfUnselected"*/);
    sub_2213A60(&StringLiteral_5570/*"Drop-down List"*/);
    byte_5975046 = 1;
  }
  v253 = 0;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4);
  if ( !NGUITools__GetActive_56411004(gameObject, 0) )
    goto LABEL_38;
  p_mChild = &this->fields.mChild;
  mChild = (UnityEngine_Object_o *)this->fields.mChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Equality(mChild, 0, 0) )
    goto LABEL_38;
  atlas = (UnityEngine_Object_o *)this->fields.atlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Inequality(atlas, 0, 0) )
    goto LABEL_38;
  isValid = UIPopupList__get_isValid(this, v3);
  if ( (isValid & 1) == 0 )
    goto LABEL_38;
  items = this->fields.items;
  if ( !items )
    goto LABEL_171;
  if ( items->fields._size >= 1 )
  {
    isValid = (__int64)this->fields.mLabelList;
    if ( !isValid )
      goto LABEL_171;
    sub_2016D2C(isValid, Method_System_Collections_Generic_List_UILabel__Clear__);
    p_mPanel = (UIRect_o **)&this->fields.mPanel;
    mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Equality(mPanel, 0, 0) )
      goto LABEL_174;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v15);
    v17 = UIPanel__Find(transform, 0);
    *p_mPanel = (UIRect_o *)v17;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    v25 = (UnityEngine_Object_o *)*p_mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( !UnityEngine_Object__op_Equality(v25, 0, 0) )
    {
LABEL_174:
      UIPopupList__set_handleEvents(this, 1, v14);
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      v27 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v27, (System_String_o *)StringLiteral_5570/*"Drop-down List"*/, 0);
      this->fields.mChild = v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mChild, (int32_t)v27, v28, v29, v30, v31, v32, v33);
      v34 = this->fields.mChild;
      isValid = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !isValid )
        goto LABEL_171;
      isValid = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)isValid, 0);
      if ( !v34 )
        goto LABEL_171;
      UnityEngine_GameObject__set_layer(v34, isValid, 0);
      isValid = (__int64)*p_mChild;
      if ( !*p_mChild )
        goto LABEL_171;
      isValid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)isValid, 0);
      if ( !v26 )
        goto LABEL_171;
      v35 = (UnityEngine_Transform_o *)isValid;
      isValid = (__int64)UnityEngine_Transform__get_parent(v26, 0);
      if ( !v35 )
        goto LABEL_171;
      UnityEngine_Transform__set_parent(v35, (UnityEngine_Transform_o *)isValid, 0);
      UnityEngine_MonoBehaviour__StopCoroutine_83445668(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4685/*"CloseIfUnselected"*/,
        0);
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v36);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      if ( UnityEngine_Object__op_Equality(selectedObject, 0, 0) )
      {
        v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this->fields.mSelection = v40;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mSelection,
          (int32_t)v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        mSelection = this->fields.mSelection;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v47);
        UICamera__set_selectedObject(mSelection, 0);
      }
      else
      {
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v39);
        v49 = UICamera__get_selectedObject(0);
        this->fields.mSelection = v49;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mSelection,
          (int32_t)v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      if ( this->fields.openOn != 3 )
        goto LABEL_52;
      v56 = (UnityEngine_Object_o *)this->fields.mSelection;
      v58 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
      if ( UnityEngine_Object__op_Inequality(v56, v58, 0) )
      {
        isValid = (__int64)UnityEngine_Transform__get_parent(v35, 0);
        if ( !*p_mPanel )
          goto LABEL_171;
        v59 = (UnityEngine_Transform_o *)isValid;
        isValid = (__int64)UIRect__get_anchorCamera(*p_mPanel, 0);
        v60 = (UnityEngine_Camera_o *)isValid;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
        if ( !v60 )
          goto LABEL_171;
        v256.fields.z = 0.0;
        static_fields = UICamera_TypeInfo->static_fields;
        v256.fields.x = static_fields->lastTouchPosition.fields.x;
        v256.fields.y = static_fields->lastTouchPosition.fields.y;
        v257 = UnityEngine_Camera__ScreenToWorldPoint_83198228(v60, v256, 0);
        if ( !v59 )
          goto LABEL_171;
        v258 = UnityEngine_Transform__InverseTransformPoint(v59, v257, 0);
        x = v258.fields.x;
        z = v258.fields.z;
        y = v258.fields.y;
        UnityEngine_Transform__set_localPosition(v35, v258, 0);
        v259 = UnityEngine_Transform__get_position(v35, 0);
        v64 = v259.fields.x;
        position_8 = v259.fields.z;
        v239 = v259.fields.y;
        v65 = x;
      }
      else
      {
LABEL_52:
        parent = UnityEngine_Transform__get_parent(v26, 0);
        NGUIMath__CalculateRelativeWidgetBounds_56362504(&v252, parent, v26, 0, 0, 0);
        v67 = vsub_f32(*(float32x2_t *)&v252.fields.m_Center.fields.y, *(float32x2_t *)&v252.fields.m_Extents.fields.y).n64_u64[0];
        v65 = v252.fields.m_Center.fields.x - v252.fields.m_Extents.fields.x;
        x = v252.fields.m_Center.fields.x + v252.fields.m_Extents.fields.x;
        z = *((float *)&v67 + 1);
        LODWORD(y) = vadd_f32(
                       *(float32x2_t *)&v252.fields.m_Center.fields.y,
                       *(float32x2_t *)&v252.fields.m_Extents.fields.y).n64_u32[0];
        v68 = v252.fields.m_Center.fields.x - v252.fields.m_Extents.fields.x;
        v69 = HIDWORD(v67);
        UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)((char *)&v67 - 4), 0);
        v260 = UnityEngine_Transform__get_position(v26, 0);
        v64 = v260.fields.x;
        position_8 = v260.fields.z;
        v239 = v260.fields.y;
      }
      UnityEngine_MonoBehaviour__StartCoroutine(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_4685/*"CloseIfUnselected"*/,
        0);
      sub_2B9EAA4(0);
      UnityEngine_Transform__set_localRotation(v35, v271, 0);
      v261.fields.x = sub_2417914(0);
      v248 = v35;
      UnityEngine_Transform__set_localScale(v35, v261, 0);
      v71 = this->fields.mChild;
      v72 = this->fields.atlas;
      backgroundSprite = this->fields.backgroundSprite;
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v70);
      v74 = NGUITools__AddSprite(v71, v72, backgroundSprite, 0);
      this->fields.mBackground = v74;
      p_mBackground = &this->fields.mBackground;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mBackground,
        (int32_t)v74,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      isValid = (__int64)this->fields.mBackground;
      if ( !isValid )
        goto LABEL_171;
      UIWidget__set_pivot((UIWidget_o *)isValid, 0, 0);
      isValid = (__int64)*p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_171;
      v82 = (UIWidget_o *)*p_mBackground;
      v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
      isValid = NGUITools__CalculateNextDepth(v83, 0);
      if ( !v82 )
        goto LABEL_171;
      UIWidget__set_depth(v82, isValid, 0);
      isValid = (__int64)*p_mBackground;
      if ( !*p_mBackground )
        goto LABEL_171;
      UIWidget__set_color((UIWidget_o *)isValid, this->fields.backgroundColor, 0);
      isValid = (__int64)this->fields.mBackground;
      if ( !isValid )
        goto LABEL_171;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)isValid + 888LL))(
        isValid,
        *(_QWORD *)(*(_QWORD *)isValid + 896LL));
      isValid = (__int64)this->fields.mBackground;
      this->fields.mBgBorder = v85;
      if ( !isValid )
        goto LABEL_171;
      v86 = v84;
      v87 = v85;
      isValid = (__int64)UIRect__get_cachedTransform((UIRect_o *)isValid, 0);
      if ( !isValid )
        goto LABEL_171;
      v262.fields.x = 0.0;
      v262.fields.z = 0.0;
      v262.fields.y = v87;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)isValid, v262, 0);
      v88 = NGUITools__AddSprite(this->fields.mChild, this->fields.atlas, this->fields.highlightSprite, 0);
      this->fields.mHighlight = v88;
      p_mHighlight = &this->fields.mHighlight;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mHighlight,
        (int32_t)v88,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
      isValid = (__int64)this->fields.mHighlight;
      if ( !isValid )
        goto LABEL_171;
      UIWidget__set_pivot((UIWidget_o *)isValid, 0, 0);
      isValid = (__int64)*p_mHighlight;
      if ( !*p_mHighlight )
        goto LABEL_171;
      UIWidget__set_color((UIWidget_o *)isValid, this->fields.highlightColor, 0);
      isValid = (__int64)this->fields.mHighlight;
      if ( !isValid )
        goto LABEL_171;
      AtlasSprite = UISprite__GetAtlasSprite((UISprite_o *)isValid, 0);
      if ( AtlasSprite )
      {
        v242 = AtlasSprite;
        v243 = &this->fields.mPanel;
        borderTop = AtlasSprite->fields.borderTop;
        activeFontSize = UIPopupList__get_activeFontSize(this, v97);
        activeFontScale = UIPopupList__get_activeFontScale(this, v100);
        v102 = this->fields.padding.fields.y;
        v250 = activeFontScale;
        v103 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UILabel__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v103,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UILabel___ctor__);
        isValid = (__int64)this->fields.items;
        if ( !isValid )
          goto LABEL_171;
        isValid = System_Collections_Generic_List_object___Contains(
                    (System_Collections_Generic_List_object__o *)isValid,
                    (Il2CppObject *)this->fields.mSelectedItem,
                    (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( (isValid & 1) == 0 )
        {
          this->fields.mSelectedItem = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mSelectedItem,
            0,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
        }
        v110 = this->fields.items;
        v240 = borderTop;
        v245 = v87;
        position = v64;
        position_4 = z;
        v253 = 0;
        if ( !v110 )
          goto LABEL_171;
        v111 = -v102;
        v249 = &this->fields.mBackground;
        size = v110->fields._size;
        v241 = (UIWidget_o **)&this->fields.mHighlight;
        v244 = v65;
        v113 = v250 * (float)activeFontSize;
        v114 = x - v65;
        v246 = x - v65;
        if ( size >= 1 )
        {
          v115 = 0.0;
          v116 = 0.0;
          v117 = 0.0;
          v118 = 0.0;
          v3 = 0;
          v251 = v114 * v250;
          while ( 1 )
          {
            isValid = (__int64)this->fields.items;
            if ( !isValid )
              goto LABEL_171;
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)isValid,
                     (int32_t)v3,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
            v121 = *p_mChild;
            v122 = (System_String_o *)Item;
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v120);
            v123 = NGUITools__AddWidget_object_(v121, (const MethodInfo_38F074C *)Method_NGUITools_AddWidget_UILabel___);
            isValid = (__int64)System_Int32__ToString((int32_t)&v253, 0);
            if ( !v123 )
              goto LABEL_171;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v123, (System_String_o *)isValid, 0);
            UIWidget__set_pivot((UIWidget_o *)v123, 0, 0);
            UILabel__set_bitmapFont((UILabel_o *)v123, this->fields.bitmapFont, 0);
            UILabel__set_trueTypeFont((UILabel_o *)v123, this->fields.trueTypeFont, 0);
            UILabel__set_fontSize((UILabel_o *)v123, this->fields.fontSize, 0);
            UILabel__set_fontStyle((UILabel_o *)v123, this->fields.fontStyle, 0);
            v124 = v122;
            if ( this->fields.isLocalized )
            {
              if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v122);
              v124 = Localization__Get(v122, 0);
            }
            UILabel__set_text((UILabel_o *)v123, v124, 0);
            UIWidget__set_color((UIWidget_o *)v123, this->fields.textColor, 0);
            if ( this->fields.isAligument )
            {
              if ( v253 && !(v253 % 20) )
              {
                v118 = v111;
                v125 = v251
                     - (float)((float)(v86 + this->fields.padding.fields.x)
                             + (float)(v86 + this->fields.padding.fields.x));
                v111 = -this->fields.padding.fields.y;
                if ( v115 > v125 )
                  v125 = v115;
                if ( v117 <= v115 )
                  v117 = v115;
                v115 = 0.0;
                v116 = v116 + v125;
              }
              cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v123, 0);
              v127 = this->fields.padding.fields.x;
              v128 = cachedTransform;
              LODWORD(v129) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v123, 0);
              if ( !v128 )
                goto LABEL_171;
              v130 = v116 + (float)((float)(v86 + v127) - v129);
            }
            else
            {
              v131 = UIRect__get_cachedTransform((UIRect_o *)v123, 0);
              v132 = this->fields.padding.fields.x;
              v128 = v131;
              LODWORD(v133) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)v123, 0);
              if ( !v128 )
                goto LABEL_171;
              v130 = (float)(v86 + v132) - v133;
            }
            v134 = v111;
            v135 = -1.0;
            UnityEngine_Transform__set_localPosition(v128, *(UnityEngine_Vector3_o *)&v130, 0);
            UILabel__set_overflowMethod((UILabel_o *)v123, 2, 0);
            UILabel__set_alignment((UILabel_o *)v123, this->fields.alignment, 0);
            if ( !v103 )
              goto LABEL_171;
            v142 = v103->fields._items;
            v143 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++v103->fields._version;
            if ( !v142 )
              goto LABEL_171;
            v144 = v103->fields._size;
            if ( (unsigned int)v144 >= LODWORD(v142->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v103,
                v123,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
            }
            else
            {
              v145 = &v142->obj.klass + v144;
              v103->fields._size = v144 + 1;
              v145[4] = (Il2CppClass *)v123;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v145 + 4),
                (int32_t)v123,
                v136,
                v137,
                v138,
                v139,
                v140,
                v141);
            }
            v146 = this->fields.padding.fields.y;
            v147 = UILabel__get_printedSize((UILabel_o *)v123, 0).fields.x;
            if ( v115 <= v147 )
              v115 = v147;
            v148 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v123, 0);
            v149 = UIEventListener__Get(v148, 0);
            v150 = (UIEventListener_BoolDelegate_o *)sub_2213CCC(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v150, (Il2CppObject *)this, Method_UIPopupList_OnItemHover__, 0);
            if ( !v149 )
              goto LABEL_171;
            v149->fields.onHover = v150;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v149->fields.onHover,
              (int32_t)v150,
              v151,
              v152,
              v153,
              v154,
              v155,
              v156);
            v157 = (UIEventListener_BoolDelegate_o *)sub_2213CCC(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v157, (Il2CppObject *)this, Method_UIPopupList_OnItemPress__, 0);
            v149->fields.onPress = v157;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v149->fields.onPress,
              (int32_t)v157,
              v158,
              v159,
              v160,
              v161,
              v162,
              v163);
            v164 = (UIEventListener_VoidDelegate_o *)sub_2213CCC(UIEventListener_VoidDelegate_TypeInfo);
            UIEventListener_VoidDelegate___ctor(v164, (Il2CppObject *)this, Method_UIPopupList_OnItemClick__, 0);
            v149->fields.onClick = v164;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v149->fields.onClick,
              (int32_t)v164,
              v165,
              v166,
              v167,
              v168,
              v169,
              v170);
            v149->fields.parameter = (Il2CppObject *)v122;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v149->fields.parameter,
              (int32_t)v122,
              v171,
              v172,
              v173,
              v174,
              v175,
              v176);
            if ( System_String__op_Equality(this->fields.mSelectedItem, v122, 0)
              || !v253 && System_String__IsNullOrEmpty(this->fields.mSelectedItem, 0) )
            {
              UIPopupList__Highlight(this, (UILabel_o *)v123, 1, v178);
            }
            isValid = (__int64)this->fields.mLabelList;
            if ( !isValid )
              goto LABEL_171;
            v183 = *(_QWORD *)(isValid + 16);
            v184 = Method_System_Collections_Generic_List_UILabel__Add__;
            ++*(_DWORD *)(isValid + 28);
            if ( !v183 )
              goto LABEL_171;
            v185 = *(int *)(isValid + 24);
            if ( (unsigned int)v185 >= *(_DWORD *)(v183 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)isValid,
                v123,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
            }
            else
            {
              v186 = v183 + 8 * v185;
              *(_DWORD *)(isValid + 24) = v185 + 1;
              *(_QWORD *)(v186 + 32) = v123;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v186 + 32),
                (int32_t)v123,
                v177,
                (System_String_o *)v178,
                v179,
                v180,
                v181,
                v182);
            }
            v3 = (const MethodInfo *)(unsigned int)++v253;
            v111 = (float)(v111 - v113) - v146;
            if ( v253 >= size )
              goto LABEL_112;
          }
        }
        v118 = 0.0;
        v117 = 0.0;
        v116 = 0.0;
        v115 = 0.0;
LABEL_112:
        if ( this->fields.isAligument )
        {
          mLabelList = this->fields.mLabelList;
          if ( !mLabelList )
            goto LABEL_171;
          if ( mLabelList->fields._size >= 21 )
            v111 = v118;
          if ( v117 > v115 )
            v115 = v117;
        }
        if ( !this->fields.position )
        {
          LODWORD(v188) = (unsigned int)UnityEngine_Transform__get_localPosition(v248, 0);
          localPosition = UnityEngine_Transform__get_localPosition(v248, 0);
          localPosition.fields.y = v111 * -0.5;
          localPosition.fields.x = v188;
          UnityEngine_Transform__set_localPosition(v248, localPosition, 0);
        }
        if ( v115 <= (float)((float)(v246 * v250)
                           - (float)((float)(v86 + this->fields.padding.fields.x)
                                   + (float)(v86 + this->fields.padding.fields.x))) )
          v189 = (float)(v246 * v250)
               - (float)((float)(v86 + this->fields.padding.fields.x) + (float)(v86 + this->fields.padding.fields.x));
        else
          v189 = v115;
        if ( !v103 )
          goto LABEL_171;
        v190 = v103->fields._size;
        if ( v190 >= 1 )
        {
          v191 = v113 + this->fields.padding.fields.y;
          v192 = 0;
          do
          {
            isValid = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v103,
                                 v192,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_171;
            v193 = isValid;
            v195 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isValid, 0);
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v194);
            NGUITools__AddWidgetCollider(v195, 0);
            v196 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___;
            *(_BYTE *)(v193 + 208) = 0;
            Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)v193, v196);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v197);
            isValid = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
            if ( (isValid & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_171;
              center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
              center.fields.x = v189 * 0.5;
              center.fields.y = v113 * -0.5;
              UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, center, 0);
              v265.fields.x = v189;
              v265.fields.y = v191;
              v265.fields.z = 1.0;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v265, 0);
            }
            else
            {
              isValid = (__int64)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)v193,
                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
              if ( !isValid )
                goto LABEL_171;
              v254.fields.x = v189 * 0.5;
              v254.fields.y = v113 * -0.5;
              v199 = (UnityEngine_BoxCollider2D_o *)isValid;
              UnityEngine_Collider2D__set_offset((UnityEngine_Collider2D_o *)isValid, v254, 0);
              v255.fields.x = v189;
              v255.fields.y = v191;
              UnityEngine_BoxCollider2D__set_size(v199, v255, 0);
            }
          }
          while ( v190 != ++v192 );
        }
        v200 = sub_35AC9F8(0, v189);
        mBackground = (UIWidget_o *)this->fields.mBackground;
        v202 = v200;
        v203 = v189
             + (float)((float)(v86 + this->fields.padding.fields.x) + (float)(v86 + this->fields.padding.fields.x));
        isValid = sub_35AC9F8(0, v203);
        if ( !mBackground )
          goto LABEL_171;
        v204 = v111 - v245;
        UIWidget__set_width(mBackground, isValid, 0);
        v205 = (UIWidget_o *)*v249;
        isValid = sub_35AC9F8(0, v245 - (float)(v111 - v245));
        if ( !v205 )
          goto LABEL_171;
        UIWidget__set_height(v205, isValid, 0);
        if ( this->fields.isAligument )
        {
          v206 = (UIWidget_o *)*v249;
          isValid = sub_35AC9F8(0, v116 + v203);
          if ( !v206 )
            goto LABEL_171;
          UIWidget__set_width(v206, isValid, 0);
        }
        v207 = v103->fields._size;
        if ( v207 >= 1 )
        {
          v208 = 0;
          do
          {
            isValid = (__int64)System_Collections_Generic_List_object___get_Item(
                                 v103,
                                 v208,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
            if ( !isValid )
              goto LABEL_171;
            v209 = (UIWidget_o *)isValid;
            UILabel__set_overflowMethod((UILabel_o *)isValid, 0, 0);
            UIWidget__set_width(v209, v202, 0);
          }
          while ( v207 != ++v208 );
        }
        isValid = (__int64)this->fields.atlas;
        if ( !isValid )
          goto LABEL_171;
        pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)isValid, 0);
        v211 = pixelSize + pixelSize;
        mHighlight = (UIWidget_o *)this->fields.mHighlight;
        isValid = sub_35AC9F8(
                    0,
                    (float)(v203
                          - (float)((float)(v86 + this->fields.padding.fields.x)
                                  + (float)(v86 + this->fields.padding.fields.x)))
                  + (float)((float)(pixelSize + pixelSize) * (float)v242->fields.borderLeft));
        if ( !mHighlight )
          goto LABEL_171;
        UIWidget__set_width(mHighlight, isValid, 0);
        v213 = *v241;
        isValid = sub_35AC9F8(0, v113 + (float)(v211 * (float)v240));
        if ( !v213 )
          goto LABEL_171;
        UIWidget__set_height(v213, isValid, 0);
        v215 = this->fields.position;
        v216 = v215 == 1;
        if ( !v215 )
        {
          isValid = (__int64)this->fields.mSelection;
          if ( !isValid )
            goto LABEL_171;
          layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)isValid, 0);
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v217);
          CameraForLayer = (UnityEngine_Object_o *)UICamera__FindCameraForLayer(layer, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v219);
          isValid = UnityEngine_Object__op_Inequality(CameraForLayer, 0, 0);
          if ( (isValid & 1) != 0 )
          {
            if ( !CameraForLayer )
              goto LABEL_171;
            isValid = (__int64)UICamera__get_cachedCamera((UICamera_o *)CameraForLayer, 0);
            if ( !isValid )
              goto LABEL_171;
            v266.fields.z = position_8;
            v266.fields.y = v239;
            v266.fields.x = position;
            v267 = UnityEngine_Camera__WorldToViewportPoint_83198212((UnityEngine_Camera_o *)isValid, v266, 0);
            v216 = v267.fields.y < 0.5;
          }
          else
          {
            v216 = 0;
          }
        }
        if ( this->fields.isAnimated )
        {
          UIPopupList__Animate((UIPopupList_o *)isValid, *v241, v216, v113 + v204, v214);
          v223 = v103->fields._size;
          if ( v223 >= 1 )
          {
            for ( i = 0; i != v223; ++i )
            {
              v225 = System_Collections_Generic_List_object___get_Item(
                       v103,
                       i,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UILabel__get_Item__);
              UIPopupList__AnimateColor((UIPopupList_o *)v225, (UIWidget_o *)v225, v226);
              UIPopupList__AnimatePosition(v227, (UIWidget_o *)v225, v216, v113 + v204, v228);
            }
          }
          UIPopupList__AnimateColor(v221, (UIWidget_o *)this->fields.mBackground, v222);
          UIPopupList__AnimateScale(this, (UIWidget_o *)this->fields.mBackground, v216, v230, v229);
        }
        if ( v216 )
        {
          v268.fields.z = position_4;
          v268.fields.y = (float)(y - v204) - v245;
          v268.fields.x = v244;
          UnityEngine_Transform__set_localPosition(v248, v268, 0);
        }
        v269 = UnityEngine_Transform__get_localPosition(v248, 0);
        if ( !*v249 || (isValid = (__int64)*v243) == 0 )
LABEL_171:
          sub_2213CDC(isValid, v3);
        v231 = (*(float (__fastcall **)(__int64, _QWORD, long double, long double, float, float))(*(_QWORD *)isValid
                                                                                                + 664LL))(
                 isValid,
                 *(_QWORD *)(*(_QWORD *)isValid + 672LL),
                 *(long double *)&v269.fields.x,
                 *(long double *)&v269.fields.y,
                 v269.fields.x + (float)(*v249)->fields.mWidth,
                 v269.fields.y - (float)(*v249)->fields.mHeight);
        v233 = v232;
        v235 = v234;
        v270 = UnityEngine_Transform__get_localPosition(v248, 0);
        v270.fields.x = v231 + v270.fields.x;
        v270.fields.y = v233 + v270.fields.y;
        v270.fields.z = v235 + v270.fields.z;
        UnityEngine_Transform__set_localPosition(v248, v270, 0);
      }
    }
  }
  else
  {
LABEL_38:
    UIPopupList__Close(this, v3);
  }
}


void UIPopupList__Start(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *textLabel; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v6; // x22
  EventDelegate_Callback_o *v7; // x21
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_String_o **p_mSelectedItem; // x20
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *items; // x0
  const MethodInfo *v24; // x2
  Il2CppObject *Item; // x21

  if ( (byte_597503B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UILabel_SetCurrentSelection__);
    byte_597503B = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(textLabel, 0, 0) )
  {
    onChange = this->fields.onChange;
    v6 = (Il2CppObject *)this->fields.textLabel;
    v7 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v7, v6, Method_UILabel_SetCurrentSelection__, 0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v8);
    EventDelegate__Add(onChange, v7, 0);
    this->fields.textLabel = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.textLabel, 0, v9, v10, v11, v12, v13, v14);
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v4);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    p_mSelectedItem = &this->fields.mSelectedItem;
    if ( !System_String__IsNullOrEmpty(this->fields.mSelectedItem, 0) )
    {
      Item = (Il2CppObject *)*p_mSelectedItem;
      *p_mSelectedItem = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSelectedItem, 0, v17, v18, v19, v20, v21, v22);
      goto LABEL_18;
    }
    items = (System_Collections_Generic_List_object__o *)this->fields.items;
    if ( !items )
      sub_2213CDC(0, v16);
    if ( items->fields._size >= 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               items,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_18:
      UIPopupList__set_value(this, (System_String_o *)Item, v24);
    }
  }
}


void UIPopupList__TriggerCallbacks(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UIPopupList_StaticFields *static_fields; // x8
  struct UIPopupList_o *v11; // x20
  __int64 v12; // x1
  struct UIPopupList_LegacyEvent_o *mLegacyEvent; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  __int64 v15; // x1
  System_Collections_Generic_List_EventDelegate__o *v16; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Object_o *eventReceiver; // x21
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_5975038 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIPopupList_TypeInfo);
    byte_5975038 = 1;
  }
  current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(current, (UnityEngine_Object_o *)this, 0) )
  {
    static_fields = UIPopupList_TypeInfo->static_fields;
    v11 = static_fields->current;
    static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIPopupList_TypeInfo->static_fields,
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
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
    if ( EventDelegate__IsValid_56312868(onChange, 0) )
    {
      v16 = this->fields.onChange;
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v15);
      EventDelegate__Execute_56285144(v16, 0);
    }
    else
    {
      eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.functionName, 0) )
      {
        v25 = this->fields.eventReceiver;
        if ( !v25 )
          sub_2213CDC(0, v24);
        UnityEngine_GameObject__SendMessage_83433568(
          v25,
          this->fields.functionName,
          (Il2CppObject *)this->fields.mSelectedItem,
          1,
          0);
      }
    }
    UIPopupList_TypeInfo->static_fields->current = v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIPopupList_TypeInfo->static_fields,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597503E & 1) == 0 )
  {
    sub_2213A60(&UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
    byte_597503E = 1;
  }
  v3 = sub_2213CCC(UIPopupList__UpdateTweenPosition_d__78_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


float UIPopupList__get_activeFontScale(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  __int64 v4; // x1
  float v5; // s8
  UnityEngine_Object_o *bitmapFont; // x20
  __int64 v7; // x1
  UIFont_o *v8; // x0
  int32_t fontSize; // s8

  if ( (byte_5975034 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975034 = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = 1.0;
  if ( !UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
  {
    bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(bitmapFont, 0, 0) )
    {
      v8 = this->fields.bitmapFont;
      if ( !v8 )
        sub_2213CDC(0, v7);
      fontSize = this->fields.fontSize;
      return (float)fontSize / (float)UIFont__get_defaultSize(v8, 0);
    }
  }
  return v5;
}


int32_t UIPopupList__get_activeFontSize(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *bitmapFont; // x20
  __int64 v6; // x1
  UIFont_o *v8; // x0

  if ( (byte_5975033 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975033 = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
    return this->fields.fontSize;
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(bitmapFont, 0, 0) )
    return this->fields.fontSize;
  v8 = this->fields.bitmapFont;
  if ( !v8 )
    sub_2213CDC(0, v6);
  return UIFont__get_defaultSize(v8, 0);
}


UnityEngine_Object_o *UIPopupList__get_ambigiousFont(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o **p_trueTypeFont; // x22
  __int64 v5; // x1
  UnityEngine_Object_o *bitmapFont; // x20

  if ( (byte_597502C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597502C = 1;
  }
  p_trueTypeFont = (UnityEngine_Object_o **)&this->fields.trueTypeFont;
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
  {
    bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
      p_trueTypeFont = (UnityEngine_Object_o **)&this->fields.bitmapFont;
    else
      p_trueTypeFont = (UnityEngine_Object_o **)&this->fields.font;
  }
  return *p_trueTypeFont;
}


Il2CppObject *UIPopupList__get_data(UIPopupList_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *items; // x0
  unsigned int v4; // w0

  if ( (byte_597502F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    byte_597502F = 1;
  }
  items = (System_Collections_Generic_List_object__o *)this->fields.items;
  if ( !items )
    goto LABEL_9;
  v4 = System_Collections_Generic_List_object___IndexOf(
         items,
         (Il2CppObject *)this->fields.mSelectedItem,
         (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_string__IndexOf__);
  if ( (v4 & 0x80000000) != 0 )
    return 0;
  method = (const MethodInfo *)v4;
  items = this->fields.itemData;
  if ( !items )
LABEL_9:
    sub_2213CDC(items, method);
  if ( (int)method < items->fields._size )
    return System_Collections_Generic_List_object___get_Item(
             items,
             (int32_t)method,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
  return 0;
}


bool UIPopupList__get_handleEvents(UIPopupList_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_5975030 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975030 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
  {
    return 1;
  }
  else
  {
    if ( !Component_object )
      sub_2213CDC(v5, v6);
    return !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
  }
}


bool UIPopupList__get_isOpen(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mChild; // x19

  if ( (byte_597502E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597502E = 1;
  }
  mChild = (UnityEngine_Object_o *)this->fields.mChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(mChild, 0, 0);
}


bool UIPopupList__get_isValid(UIPopupList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bitmapFont; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *trueTypeFont; // x19

  if ( (byte_5975032 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975032 = 1;
  }
  bitmapFont = (UnityEngine_Object_o *)this->fields.bitmapFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
    return 1;
  trueTypeFont = (UnityEngine_Object_o *)this->fields.trueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Object_c *klass; // x10
  UnityEngine_Object_c *v11; // x8
  Il2CppClass *v12; // x8
  __int64 naturalAligment; // x9
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  MissionNaviTransitionBoardItem_o *p_bitmapFont; // x0
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_597502D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Font_TypeInfo);
    sub_2213A60(&UIFont_TypeInfo);
    byte_597502D = 1;
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.trueTypeFont,
        v14,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      p_bitmapFont = (MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFont;
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
          v22 = (int)value;
        else
          v22 = 0;
      }
      else
      {
        v22 = 0;
      }
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.bitmapFont,
        v22,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      p_bitmapFont = (MissionNaviTransitionBoardItem_o *)&this->fields.trueTypeFont;
    }
    p_bitmapFont->klass = 0;
    sub_2213A04(p_bitmapFont, 0, v15, v16, v17, v18, v19, v20);
    this->fields.font = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.font, 0, v23, v24, v25, v26, v27, v28);
  }
}


void UIPopupList__set_handleEvents(UIPopupList_o *this, bool value, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_5975031 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975031 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      sub_2213CDC(v7, v8);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, !value, 0);
  }
}


void UIPopupList__set_onSelectionChange(
        UIPopupList_o *this,
        UIPopupList_LegacyEvent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mLegacyEvent = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mLegacyEvent,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIPopupList__set_value(UIPopupList_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_mSelectedItem; // x20
  const MethodInfo *v10; // x1

  this->fields.mSelectedItem = value;
  p_mSelectedItem = &this->fields.mSelectedItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSelectedItem,
    (int32_t)value,
    (System_String_o *)method,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2016DB8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2016D9C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2016D54;
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
  return (System_IAsyncResult_o *)sub_2213A14(this, &v6, callback, object);
}


void UIPopupList_LegacyEvent__EndInvoke(
        UIPopupList_LegacyEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct UIPopupList_o *_4__this; // x20
  UnityEngine_GameObject_o *selectedObject; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *mSelection; // x22
  const MethodInfo *v15; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_5975048 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975048 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    selectedObject = UICamera__get_selectedObject(0);
    if ( !_4__this )
      sub_2213CDC(selectedObject, v12);
    v13 = (UnityEngine_Object_o *)selectedObject;
    mSelection = (UnityEngine_Object_o *)_4__this->fields.mSelection;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_UIPopupList__CloseIfUnselected_d__93_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  __int64 v6; // x1
  UnityEngine_Object_o *mHighlightedLabel; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UIPopupList__UpdateTweenPosition_d__78_o **p_tp_5__2; // x21
  UnityEngine_Object_o *tp_5__2; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UIPopupList__UpdateTweenPosition_d__78_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o HighlightPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5975049 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    this = (UIPopupList__UpdateTweenPosition_d__78_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975049 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mHighlight, 0, 0) )
  {
    mHighlightedLabel = (UnityEngine_Object_o *)_4__this->fields.mHighlightedLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(mHighlightedLabel, 0, 0) )
    {
      this = (UIPopupList__UpdateTweenPosition_d__78_o *)_4__this->fields.mHighlight;
      if ( !this )
        goto LABEL_26;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
      v2->fields._tp_5__2 = (struct TweenPosition_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v2->fields._tp_5__2,
        (int32_t)Component_object,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
LABEL_15:
      p_tp_5__2 = (UIPopupList__UpdateTweenPosition_d__78_o **)&v2->fields._tp_5__2;
      tp_5__2 = (UnityEngine_Object_o *)v2->fields._tp_5__2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
            v23 = *p_tp_5__2;
            HighlightPosition = UIPopupList__GetHighlightPosition(_4__this, method);
            if ( v23 )
            {
              *(UnityEngine_Vector3_o *)((char *)&v23[2].fields._tp_5__2 + 4) = HighlightPosition;
              v2->fields.__2__current = 0;
              p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
              sub_2213A04(p__2__current, 0, v24, v25, v26, v27, v28, v29);
              result = 1;
              p__2__current[-1].fields._BoardType_k__BackingField = 1;
              return result;
            }
          }
LABEL_26:
          sub_2213CDC(this, method);
        }
      }
      *p_tp_5__2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields._tp_5__2, 0, v17, v18, v19, v20, v21, v22);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_UIPopupList__UpdateTweenPosition_d__78_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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