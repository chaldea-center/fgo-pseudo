void DebugListSelectComponent___ctor(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.showIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugListSelectComponent__CheckBattleBGResourceExist(
        DebugListSelectComponent_o *this,
        System_String_o *bgid,
        const MethodInfo *method)
{
  DebugListSelectComponent_o *v4; // x19
  System_String_array *v5; // x0
  DebugListSelectComponent___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_object__int__o *_9__28_0; // x21
  Il2CppObject *v9; // x22
  struct DebugListSelectComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  int32_t BaseCell; // w20
  int32_t BaseCell_high; // w21
  BgResourceData_o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  struct BgResourceData_o *bgResourceData; // x8
  Il2CppObject *v26; // x0
  System_String_o *v27; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  int32_t Id_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4C445A8 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BgResourceData_TypeInfo);
    sub_1C37058(&Method_DebugListSelectComponent_CheckBattleBGResourceExistCallback__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_DebugListSelectComponent___c__CheckBattleBGResourceExist_b__28_0__);
    sub_1C37058(&DebugListSelectComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_3152/*"Bg/{0}"*/);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    this = (DebugListSelectComponent_o *)sub_1C37058(&StringLiteral_25395/*"アセットが存在しません。"*/);
    byte_4C445A8 = 1;
  }
  if ( !bgid )
    goto LABEL_19;
  v5 = System_String__Split_63613548(bgid, (System_String_o *)StringLiteral_1457/*":"*/, 0, 0);
  v6 = DebugListSelectComponent___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !DebugListSelectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugListSelectComponent___c_TypeInfo);
    v6 = DebugListSelectComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v6->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = DebugListSelectComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v9,
      Method_DebugListSelectComponent___c__CheckBattleBGResourceExist_b__28_0__,
      0);
    static_fields = DebugListSelectComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_string__int__o *)_9__28_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__28_0,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
  this = (DebugListSelectComponent_o *)System_Linq_Enumerable__ToArray_int_(
                                         v13,
                                         (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !this )
    goto LABEL_19;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
    return;
  BaseCell = (int32_t)this->fields.BaseCell;
  BaseCell_high = HIDWORD(this->fields.BaseCell);
  v16 = (BgResourceData_o *)sub_1C372A4(BgResourceData_TypeInfo);
  BgResourceData___ctor(v16, BaseCell, BaseCell_high, 0);
  v4->fields.bgResourceData = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.bgResourceData, (int32_t)v16, v17, v18);
  bgResourceData = v4->fields.bgResourceData;
  if ( !bgResourceData )
    goto LABEL_19;
  Id_k__BackingField = bgResourceData->fields._Id_k__BackingField;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Id_k__BackingField, v19, v20, v21, v22, v23, v24);
  v27 = System_String__Format((System_String_o *)StringLiteral_3152/*"Bg/{0}"*/, v26, 0);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v4,
    Method_DebugListSelectComponent_CheckBattleBGResourceExistCallback__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v27, v28, 1, 0) )
  {
    this = (DebugListSelectComponent_o *)v4->fields.messageLabel;
    v4->fields.showIndex = v4->fields.selectIndex;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_25395/*"アセットが存在しません。"*/, 0);
      return;
    }
LABEL_19:
    sub_1C372B4(this);
  }
}


void DebugListSelectComponent__CheckBattleBGResourceExistCallback(
        DebugListSelectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DebugListSelectComponent_o *v4; // x19
  struct BgResourceData_o *bgResourceData; // x8
  System_String_o *v6; // x0
  DebugListSelectComponent_o *v7; // x1
  Il2CppObject *Object_object__51154888; // x21
  __int64 *v9; // x8
  struct UILabel_o *selectingItemLabel; // x8
  struct System_Action_string__bool__o *callback; // x9
  int Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C445A9 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17136/*"bg"*/);
    sub_1C37058(&StringLiteral_25395/*"アセットが存在しません。"*/);
    this = (DebugListSelectComponent_o *)sub_1C37058(&StringLiteral_17139/*"bg0"*/);
    byte_4C445A9 = 1;
  }
  bgResourceData = v4->fields.bgResourceData;
  v4->fields.showIndex = v4->fields.selectIndex;
  if ( !bgResourceData )
    goto LABEL_23;
  Type_k__BackingField = bgResourceData->fields._Type_k__BackingField;
  if ( Type_k__BackingField <= 0 )
  {
    v7 = (DebugListSelectComponent_o *)StringLiteral_17136/*"bg"*/;
    if ( !data )
      goto LABEL_23;
  }
  else
  {
    v6 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0);
    this = (DebugListSelectComponent_o *)System_String__Concat_63561656((System_String_o *)StringLiteral_17136/*"bg"*/, v6, 0);
    v7 = this;
    if ( !data )
      goto LABEL_23;
  }
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              data,
                              (System_String_o *)v7,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
  {
    if ( Type_k__BackingField <= 0 )
      v9 = &StringLiteral_17139/*"bg0"*/;
    else
      v9 = &StringLiteral_17136/*"bg"*/;
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                data,
                                (System_String_o *)*v9,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DebugListSelectComponent_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Object_object__51154888,
                                         0,
                                         0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    selectingItemLabel = v4->fields.selectingItemLabel;
    if ( selectingItemLabel )
    {
      callback = v4->fields.callback;
      if ( callback )
      {
        ((void (__fastcall *)(intptr_t, struct System_String_o *, __int64, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          selectingItemLabel->fields.mText,
          1,
          callback->fields.method);
        return;
      }
    }
LABEL_23:
    sub_1C372B4(this);
  }
  this = (DebugListSelectComponent_o *)v4->fields.messageLabel;
  if ( !this )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_25395/*"アセットが存在しません。"*/, 0);
}


void DebugListSelectComponent__Close(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugListSelectComponent__CreateListCoroutine(
        DebugListSelectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C445A3 & 1) == 0 )
  {
    sub_1C37058(&DebugListSelectComponent__CreateListCoroutine_d__19_TypeInfo);
    byte_4C445A3 = 1;
  }
  v3 = sub_1C372A4(DebugListSelectComponent__CreateListCoroutine_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void DebugListSelectComponent__OnClickNext(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  DebugListSelectComponent_o *v2; // x19
  int showIndex; // w8
  struct System_Collections_Generic_List_string__o *filteredList; // x9
  int v5; // w8
  UILabel_o *selectingItemLabel; // x20
  const MethodInfo *v7; // x2
  struct UILabel_o *v8; // x8
  struct UILabel_o *v9; // x8
  struct System_Action_string__bool__o *callback; // x9

  v2 = this;
  if ( (byte_4C445A5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (DebugListSelectComponent_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C445A5 = 1;
  }
  showIndex = v2->fields.showIndex;
  if ( (showIndex & 0x80000000) == 0 )
  {
    filteredList = v2->fields.filteredList;
    v2->fields.selectIndex = showIndex;
    if ( !filteredList )
      goto LABEL_18;
    this = (DebugListSelectComponent_o *)v2->fields.messageLabel;
    v5 = showIndex < filteredList->fields._size - 1 ? showIndex + 1 : 0;
    v2->fields.selectIndex = v5;
    if ( !this )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (DebugListSelectComponent_o *)v2->fields.filteredList;
    if ( !this )
      goto LABEL_18;
    selectingItemLabel = v2->fields.selectingItemLabel;
    this = (DebugListSelectComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v2->fields.selectIndex,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !selectingItemLabel )
      goto LABEL_18;
    UILabel__set_text(selectingItemLabel, (System_String_o *)this, 0);
    if ( v2->fields.dataType == 1 )
    {
      v8 = v2->fields.selectingItemLabel;
      if ( v8 )
      {
        DebugListSelectComponent__CheckBattleBGResourceExist(v2, v8->fields.mText, v7);
        return;
      }
LABEL_18:
      sub_1C372B4(this);
    }
    v9 = v2->fields.selectingItemLabel;
    v2->fields.showIndex = v2->fields.selectIndex;
    if ( !v9 )
      goto LABEL_18;
    callback = v2->fields.callback;
    if ( !callback )
      goto LABEL_18;
    ((void (__fastcall *)(intptr_t, struct System_String_o *, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v9->fields.mText,
      1,
      callback->fields.method);
  }
}


void DebugListSelectComponent__OnClickPrev(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  DebugListSelectComponent_o *v2; // x19
  int showIndex; // w8
  struct System_Collections_Generic_List_string__o *filteredList; // x9
  int size; // w9
  int v6; // w11
  int v7; // w9
  int32_t v8; // w8
  UILabel_o *selectingItemLabel; // x20
  const MethodInfo *v10; // x2
  struct UILabel_o *v11; // x8
  struct UILabel_o *v12; // x8
  struct System_Action_string__bool__o *callback; // x9

  v2 = this;
  if ( (byte_4C445A6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (DebugListSelectComponent_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C445A6 = 1;
  }
  showIndex = v2->fields.showIndex;
  if ( (showIndex & 0x80000000) == 0 )
  {
    filteredList = v2->fields.filteredList;
    v2->fields.selectIndex = showIndex;
    if ( !filteredList )
      goto LABEL_21;
    size = filteredList->fields._size;
    this = (DebugListSelectComponent_o *)v2->fields.messageLabel;
    v6 = size - 1;
    v7 = showIndex >= size ? 0 : showIndex - 1;
    v8 = showIndex >= 1 ? v7 : v6;
    v2->fields.selectIndex = v8;
    if ( !this )
      goto LABEL_21;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (DebugListSelectComponent_o *)v2->fields.filteredList;
    if ( !this )
      goto LABEL_21;
    selectingItemLabel = v2->fields.selectingItemLabel;
    this = (DebugListSelectComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v2->fields.selectIndex,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !selectingItemLabel )
      goto LABEL_21;
    UILabel__set_text(selectingItemLabel, (System_String_o *)this, 0);
    if ( v2->fields.dataType == 1 )
    {
      v11 = v2->fields.selectingItemLabel;
      if ( v11 )
      {
        DebugListSelectComponent__CheckBattleBGResourceExist(v2, v11->fields.mText, v10);
        return;
      }
LABEL_21:
      sub_1C372B4(this);
    }
    v12 = v2->fields.selectingItemLabel;
    v2->fields.showIndex = v2->fields.selectIndex;
    if ( !v12 )
      goto LABEL_21;
    callback = v2->fields.callback;
    if ( !callback )
      goto LABEL_21;
    ((void (__fastcall *)(intptr_t, struct System_String_o *, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v12->fields.mText,
      1,
      callback->fields.method);
  }
}


void DebugListSelectComponent__OnClickSubmit(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  const MethodInfo *v4; // x2
  struct UILabel_o *selectingItemLabel; // x8
  struct UILabel_o *v6; // x8
  struct System_Action_string__bool__o *callback; // x9

  if ( (byte_4C445A4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C445A4 = 1;
  }
  if ( this->fields.callback && (this->fields.selectIndex & 0x80000000) == 0 )
  {
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_13;
    UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( this->fields.dataType == 1 )
    {
      selectingItemLabel = this->fields.selectingItemLabel;
      if ( selectingItemLabel )
      {
        DebugListSelectComponent__CheckBattleBGResourceExist(this, selectingItemLabel->fields.mText, v4);
        return;
      }
LABEL_13:
      sub_1C372B4(messageLabel);
    }
    v6 = this->fields.selectingItemLabel;
    this->fields.showIndex = this->fields.selectIndex;
    if ( !v6 )
      goto LABEL_13;
    callback = this->fields.callback;
    if ( !callback )
      goto LABEL_13;
    ((void (__fastcall *)(intptr_t, struct System_String_o *, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v6->fields.mText,
      1,
      callback->fields.method);
  }
}


void DebugListSelectComponent__OnSearchLabelChange(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *createListCoroutine; // x1
  struct UnityEngine_Coroutine_o **p_createListCoroutine; // x20
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *ListCoroutine; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  p_createListCoroutine = &this->fields.createListCoroutine;
  createListCoroutine = this->fields.createListCoroutine;
  if ( createListCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_71252944((UnityEngine_MonoBehaviour_o *)this, createListCoroutine, 0);
  DebugListSelectComponent__RemoveList(this, (const MethodInfo *)createListCoroutine);
  ListCoroutine = DebugListSelectComponent__CreateListCoroutine(this, v5);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
  this->fields.createListCoroutine = started;
  sub_1C36FFC((CGThumbnailListItem_o *)p_createListCoroutine, (int32_t)started, v8, v9);
}


void DebugListSelectComponent__Open(
        DebugListSelectComponent_o *this,
        System_Action_string__bool__o *callback,
        System_Collections_Generic_List_string__o *list,
        System_String_o *defaultParam,
        int32_t type,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t size; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_string__o *dataList; // x8
  int v17; // w9
  struct UIInput_o *inputField; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onChange; // x9
  int32_t v20; // w2
  int v21; // w10
  System_Collections_Generic_List_object__o *v22; // x21
  EventDelegate_o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  struct UIButton_o *submitButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  int32_t v32; // w2
  int v33; // w9
  struct UIButton_o *closeButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v35; // x8
  int32_t v36; // w2
  int v37; // w9
  struct UIButton_o *nextButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v39; // x8
  int32_t v40; // w2
  int v41; // w9
  struct UIButton_o *prevButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v43; // x8
  int32_t v44; // w2
  int v45; // w9
  struct UIButton_o *v46; // x8
  System_Collections_Generic_List_object__o *v47; // x21
  EventDelegate_o *v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  struct UIButton_o *v55; // x8
  System_Collections_Generic_List_object__o *v56; // x21
  EventDelegate_o *v57; // x22
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  struct UIButton_o *v64; // x8
  System_Collections_Generic_List_object__o *v65; // x21
  EventDelegate_o *v66; // x22
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  struct UIButton_o *v73; // x8
  System_Collections_Generic_List_object__o *v74; // x21
  EventDelegate_o *v75; // x22
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  UnityEngine_Transform_o *v82; // x21
  UIPanel_o *v83; // x21
  const MethodInfo *v84; // x1
  System_Collections_IEnumerator_o *ListCoroutine; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3

  if ( (byte_4C445A2 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&StringLiteral_9956/*"OnSearchLabelChange"*/);
    sub_1C37058(&StringLiteral_9862/*"OnClickNext"*/);
    sub_1C37058(&StringLiteral_4509/*"Close"*/);
    sub_1C37058(&StringLiteral_9874/*"OnClickSubmit"*/);
    sub_1C37058(&StringLiteral_9864/*"OnClickPrev"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C445A2 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)this->fields.BaseCell;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  this->fields.callback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)callback, v12, v13);
  dataList = this->fields.dataList;
  if ( dataList )
  {
    size = dataList->fields._size;
    v17 = dataList->fields._version + 1;
    dataList->fields._size = 0;
    dataList->fields._version = v17;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dataList->fields._items, 0, size, 0);
  }
  this->fields.dataList = list;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dataList, (int32_t)list, size, v15);
  gameObject = (__int64)this->fields.selectingItemLabel;
  if ( !gameObject )
    goto LABEL_71;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (__int64)this->fields.messageLabel;
  if ( !gameObject )
    goto LABEL_71;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = System_String__op_Inequality(defaultParam, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.selectingItemLabel;
    if ( !gameObject )
      goto LABEL_71;
    UILabel__set_text((UILabel_o *)gameObject, defaultParam, 0);
  }
  inputField = this->fields.inputField;
  if ( !inputField )
    goto LABEL_71;
  onChange = inputField->fields.onChange;
  if ( !onChange )
    goto LABEL_71;
  v20 = onChange->fields._size;
  v21 = onChange->fields._version + 1;
  onChange->fields._size = 0;
  onChange->fields._version = v21;
  if ( v20 >= 1 )
  {
    System_Array__Clear((System_Array_o *)onChange->fields._items, 0, v20, 0);
    inputField = this->fields.inputField;
    if ( !inputField )
      goto LABEL_71;
  }
  v22 = (System_Collections_Generic_List_object__o *)inputField->fields.onChange;
  v23 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v23, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9956/*"OnSearchLabelChange"*/, 0);
  if ( !v22 )
    goto LABEL_71;
  items = v22->fields._items;
  v27 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_71;
  v28 = v22->fields._size;
  if ( (unsigned int)v28 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v23,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + v28;
    v22->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)v23;
    sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
  }
  submitButton = this->fields.submitButton;
  if ( !submitButton )
    goto LABEL_71;
  onClick = submitButton->fields.onClick;
  if ( !onClick )
    goto LABEL_71;
  v32 = onClick->fields._size;
  v33 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v33;
  if ( v32 >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, v32, 0);
  closeButton = this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_71;
  v35 = closeButton->fields.onClick;
  if ( !v35 )
    goto LABEL_71;
  v36 = v35->fields._size;
  v37 = v35->fields._version + 1;
  v35->fields._size = 0;
  v35->fields._version = v37;
  if ( v36 >= 1 )
    System_Array__Clear((System_Array_o *)v35->fields._items, 0, v36, 0);
  nextButton = this->fields.nextButton;
  if ( !nextButton )
    goto LABEL_71;
  v39 = nextButton->fields.onClick;
  if ( !v39 )
    goto LABEL_71;
  v40 = v39->fields._size;
  v41 = v39->fields._version + 1;
  v39->fields._size = 0;
  v39->fields._version = v41;
  if ( v40 >= 1 )
    System_Array__Clear((System_Array_o *)v39->fields._items, 0, v40, 0);
  prevButton = this->fields.prevButton;
  if ( !prevButton )
    goto LABEL_71;
  v43 = prevButton->fields.onClick;
  if ( !v43 )
    goto LABEL_71;
  v44 = v43->fields._size;
  v45 = v43->fields._version + 1;
  v43->fields._size = 0;
  v43->fields._version = v45;
  if ( v44 >= 1 )
    System_Array__Clear((System_Array_o *)v43->fields._items, 0, v44, 0);
  v46 = this->fields.submitButton;
  if ( !v46 )
    goto LABEL_71;
  v47 = (System_Collections_Generic_List_object__o *)v46->fields.onClick;
  v48 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v48, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9874/*"OnClickSubmit"*/, 0);
  if ( !v47 )
    goto LABEL_71;
  v51 = v47->fields._items;
  v52 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v47->fields._version;
  if ( !v51 )
    goto LABEL_71;
  v53 = v47->fields._size;
  if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v47,
      (Il2CppObject *)v48,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &v51->obj.klass + v53;
    v47->fields._size = v53 + 1;
    v54[4] = (Il2CppClass *)v48;
    sub_1C36FFC((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v48, v49, v50);
  }
  v55 = this->fields.closeButton;
  if ( !v55 )
    goto LABEL_71;
  v56 = (System_Collections_Generic_List_object__o *)v55->fields.onClick;
  v57 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v57, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_4509/*"Close"*/, 0);
  if ( !v56 )
    goto LABEL_71;
  v60 = v56->fields._items;
  v61 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v56->fields._version;
  if ( !v60 )
    goto LABEL_71;
  v62 = v56->fields._size;
  if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v56,
      (Il2CppObject *)v57,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v60->obj.klass + v62;
    v56->fields._size = v62 + 1;
    v63[4] = (Il2CppClass *)v57;
    sub_1C36FFC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v57, v58, v59);
  }
  v64 = this->fields.nextButton;
  if ( !v64 )
    goto LABEL_71;
  v65 = (System_Collections_Generic_List_object__o *)v64->fields.onClick;
  v66 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v66, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9862/*"OnClickNext"*/, 0);
  if ( !v65 )
    goto LABEL_71;
  v69 = v65->fields._items;
  v70 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v65->fields._version;
  if ( !v69 )
    goto LABEL_71;
  v71 = v65->fields._size;
  if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v65,
      (Il2CppObject *)v66,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v69->obj.klass + v71;
    v65->fields._size = v71 + 1;
    v72[4] = (Il2CppClass *)v66;
    sub_1C36FFC((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v66, v67, v68);
  }
  v73 = this->fields.prevButton;
  if ( !v73 )
    goto LABEL_71;
  v74 = (System_Collections_Generic_List_object__o *)v73->fields.onClick;
  v75 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v75, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9864/*"OnClickPrev"*/, 0);
  if ( !v74 )
    goto LABEL_71;
  v78 = v74->fields._items;
  v79 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v74->fields._version;
  if ( !v78 )
    goto LABEL_71;
  v80 = v74->fields._size;
  if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v74,
      (Il2CppObject *)v75,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v78->obj.klass + v80;
    v74->fields._size = v80 + 1;
    v81[4] = (Il2CppClass *)v75;
    sub_1C36FFC((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
  }
  gameObject = (__int64)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  v82 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C3C921 )
  {
    gameObject = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v82 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(v82, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (__int64)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v83 = (UIPanel_o *)gameObject;
  if ( !byte_4C3C81A )
  {
    gameObject = sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  if ( !v83 )
LABEL_71:
    sub_1C372B4(gameObject);
  UIPanel__set_clipOffset(v83, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  this->fields.dataType = type;
  ListCoroutine = DebugListSelectComponent__CreateListCoroutine(this, v84);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
  this->fields.createListCoroutine = started;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.createListCoroutine, (int32_t)started, v87, v88);
}


void DebugListSelectComponent__RemoveList(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C445A7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C445A7 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
LABEL_13:
    sub_1C372B4(grid);
  v4 = 0;
  while ( 1 )
  {
    grid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(grid, 0);
    if ( !grid )
      goto LABEL_13;
    if ( v4 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0) )
      break;
    grid = (UnityEngine_Component_o *)this->fields.grid;
    if ( grid )
    {
      grid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(grid, 0);
      if ( grid )
      {
        grid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v4, 0);
        if ( grid )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(grid, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71266752(gameObject, 0);
          grid = (UnityEngine_Component_o *)this->fields.grid;
          ++v4;
          if ( grid )
            continue;
        }
      }
    }
    goto LABEL_13;
  }
}


void DebugListSelectComponent__TapItemSelectCallback(
        DebugListSelectComponent_o *this,
        System_String_o *id,
        int32_t index,
        const MethodInfo *method)
{
  UILabel_o *selectingItemLabel; // x0

  selectingItemLabel = this->fields.selectingItemLabel;
  if ( !selectingItemLabel )
    sub_1C372B4(0);
  UILabel__set_text(selectingItemLabel, id, 0);
  this->fields.selectIndex = index;
}


void DebugListSelectComponent__CreateListCoroutine_d__19___ctor(
        DebugListSelectComponent__CreateListCoroutine_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugListSelectComponent__CreateListCoroutine_d__19__MoveNext(
        DebugListSelectComponent__CreateListCoroutine_d__19_o *this,
        const MethodInfo *method)
{
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v2; // x19
  int32_t _1__state; // w8
  struct DebugListSelectComponent_o *_4__this; // x20
  __int64 v5; // x22
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x24
  System_Collections_Generic_IEnumerable_TSource__o **p_filteredList; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool v13; // w0
  System_Collections_Generic_IEnumerable_TSource__o *dataList; // x23
  System_Func_object__bool__o *v15; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  bool result; // w0
  Il2CppObject *BaseCell; // x21
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v26; // x21
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v27; // x22
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v28; // x22
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v29; // x22
  DebugListSelectCellComponent_o *v30; // x21
  Il2CppObject *Item; // x0
  int32_t i_5__4; // w22
  System_String_o *v33; // x23
  System_Action_T1__T2__o *v34; // x24
  const MethodInfo *v35; // x4
  int32_t interval_5__2; // w9
  int v37; // w8
  struct System_Collections_Generic_List_string__o *filteredList; // x9
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  v2 = this;
  if ( (byte_4C445AB & 1) == 0 )
  {
    sub_1C37058(&System_Action_string__int__TypeInfo);
    sub_1C37058(&Method_DebugListSelectComponent_TapItemSelectCallback__);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C37058(&System_Func_string__bool__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_DebugListSelectCellComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor___78067568);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_DebugListSelectComponent___c__DisplayClass19_0__CreateListCoroutine_b__0__);
    sub_1C37058(&DebugListSelectComponent___c__DisplayClass19_0_TypeInfo);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C445AB = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_29;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_1C372A4(DebugListSelectComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !_4__this )
    goto LABEL_39;
  DebugListSelectComponent__RemoveList(_4__this, v6);
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)_4__this->fields.inputField;
  if ( !this )
    goto LABEL_39;
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UIInput__get_value((UIInput_o *)this, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  _4__this->fields.filteredList = (struct System_Collections_Generic_List_string__o *)v9;
  p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o **)&_4__this->fields.filteredList;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.filteredList, (int32_t)v9, v11, v12);
  v13 = System_String__op_Inequality(*(System_String_o **)(v5 + 16), (System_String_o *)StringLiteral_1/*""*/, 0);
  dataList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dataList;
  if ( !v13 )
    goto LABEL_11;
  v15 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_DebugListSelectComponent___c__DisplayClass19_0__CreateListCoroutine_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          dataList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_string___);
  v17 = System_Linq_Enumerable__ToList_object_(
          v16,
          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_string___);
  *p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.filteredList, (int32_t)v17, v18, v19);
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)System_Linq_Enumerable__Count_object_(
                                                                    *p_filteredList,
                                                                    (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_string___);
  if ( (int)this <= 0 )
  {
    dataList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dataList;
LABEL_11:
    v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)dataList,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_string___ctor___78067568);
    *p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.filteredList, (int32_t)v20, v21, v22);
  }
  v23 = 0;
  v2->fields._i_5__4 = 0;
  *(_QWORD *)&v2->fields._interval_5__2 = 50;
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_39;
    filteredList = _4__this->fields.filteredList;
    if ( !filteredList )
      goto LABEL_39;
    if ( v23 >= filteredList->fields._size )
    {
      this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)_4__this->fields.grid;
      if ( this )
      {
        ((void (__fastcall *)(DebugListSelectComponent__CreateListCoroutine_d__19_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
          this,
          this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
        this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)_4__this->fields.ScrollView;
        if ( this )
        {
          UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
          this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)_4__this->fields.ScrollView;
          if ( this )
          {
            UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0);
            result = 0;
            *(_QWORD *)&_4__this->fields.showIndex = -1;
            return result;
          }
        }
      }
LABEL_39:
      sub_1C372B4(this);
    }
    BaseCell = (Il2CppObject *)_4__this->fields.BaseCell;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_Object__Instantiate_object_(
                                                                      BaseCell,
                                                                      (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_39;
    v26 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v26,
                                                                      0);
    if ( !_4__this->fields.grid )
      goto LABEL_39;
    v27 = this;
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)_4__this->fields.grid,
                                                                      0);
    if ( !v27 )
      goto LABEL_39;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v27, (UnityEngine_Transform_o *)this, 0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v26,
                                                                      0);
    v28 = this;
    if ( !byte_4C3C921 )
    {
      this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v28 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v28,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v26,
                                                                      0);
    v29 = this;
    if ( !byte_4C3C926 )
    {
      this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v29 )
      goto LABEL_39;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v29,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)v26,
                                                                      (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_DebugListSelectCellComponent___);
    if ( !_4__this->fields.filteredList )
      goto LABEL_39;
    v30 = (DebugListSelectCellComponent_o *)this;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)_4__this->fields.filteredList,
             v2->fields._i_5__4,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
    i_5__4 = v2->fields._i_5__4;
    v33 = (System_String_o *)Item;
    v34 = (System_Action_T1__T2__o *)sub_1C372A4(System_Action_string__int__TypeInfo);
    System_Action_object__int____ctor(
      v34,
      (Il2CppObject *)_4__this,
      Method_DebugListSelectComponent_TapItemSelectCallback__,
      0);
    if ( !v30 )
      goto LABEL_39;
    DebugListSelectCellComponent__Set(v30, v33, i_5__4, (System_Action_string__int__o *)v34, v35);
    interval_5__2 = v2->fields._interval_5__2;
    v37 = v2->fields._cnt_5__3 + 1;
    v2->fields._cnt_5__3 = v37;
    if ( v37 > interval_5__2 )
      break;
LABEL_29:
    v23 = v2->fields._i_5__4 + 1;
    v2->fields._i_5__4 = v23;
  }
  v2->fields._cnt_5__3 = 0;
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)_4__this->fields.grid;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(DebugListSelectComponent__CreateListCoroutine_d__19_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
    this,
    this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C36FFC(p__2__current, 0, v40, v41);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *DebugListSelectComponent__CreateListCoroutine_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugListSelectComponent__CreateListCoroutine_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugListSelectComponent__CreateListCoroutine_d__19__System_Collections_IEnumerator_Reset(
        DebugListSelectComponent__CreateListCoroutine_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_DebugListSelectComponent__CreateListCoroutine_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *DebugListSelectComponent__CreateListCoroutine_d__19__System_Collections_IEnumerator_get_Current(
        DebugListSelectComponent__CreateListCoroutine_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugListSelectComponent__CreateListCoroutine_d__19__System_IDisposable_Dispose(
        DebugListSelectComponent__CreateListCoroutine_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugListSelectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C445AA & 1) == 0 )
  {
    sub_1C37058(&DebugListSelectComponent___c_TypeInfo);
    byte_4C445AA = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(DebugListSelectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DebugListSelectComponent___c_TypeInfo->static_fields->__9 = (struct DebugListSelectComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)DebugListSelectComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void DebugListSelectComponent___c___ctor(DebugListSelectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DebugListSelectComponent___c___CheckBattleBGResourceExist_b__28_0(
        DebugListSelectComponent___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_Int32__Parse(x, 0);
}


void DebugListSelectComponent___c__DisplayClass19_0___ctor(
        DebugListSelectComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DebugListSelectComponent___c__DisplayClass19_0___CreateListCoroutine_b__0(
        DebugListSelectComponent___c__DisplayClass19_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return System_String__Contains(x, this->fields.searchStr, 0);
}