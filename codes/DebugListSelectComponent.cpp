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
  struct BgResourceData_o *bgResourceData; // x8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  int32_t Id_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CB78E1 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&BgResourceData_TypeInfo);
    sub_1C6BA08(&Method_DebugListSelectComponent_CheckBattleBGResourceExistCallback__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_string__int__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_DebugListSelectComponent___c__CheckBattleBGResourceExist_b__28_0__);
    sub_1C6BA08(&DebugListSelectComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3144/*"Bg/{0}"*/);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    this = (DebugListSelectComponent_o *)sub_1C6BA08(&StringLiteral_25505/*"アセットが存在しません。"*/);
    byte_4CB78E1 = 1;
  }
  if ( !bgid )
    goto LABEL_19;
  v5 = System_String__Split_64018700(bgid, (System_String_o *)StringLiteral_1449/*":"*/, 0, 0);
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
    _9__28_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v9,
      Method_DebugListSelectComponent___c__CheckBattleBGResourceExist_b__28_0__,
      0);
    static_fields = DebugListSelectComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_string__int__o *)_9__28_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__28_0,
                                                               (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_string__int___);
  this = (DebugListSelectComponent_o *)System_Linq_Enumerable__ToArray_int_(
                                         v13,
                                         (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !this )
    goto LABEL_19;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
    return;
  BaseCell = (int32_t)this->fields.BaseCell;
  BaseCell_high = HIDWORD(this->fields.BaseCell);
  v16 = (BgResourceData_o *)sub_1C6BC54(BgResourceData_TypeInfo);
  BgResourceData___ctor(v16, BaseCell, BaseCell_high, 0);
  v4->fields.bgResourceData = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.bgResourceData, (int32_t)v16, v17, v18);
  bgResourceData = v4->fields.bgResourceData;
  if ( !bgResourceData )
    goto LABEL_19;
  Id_k__BackingField = bgResourceData->fields._Id_k__BackingField;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Id_k__BackingField);
  v21 = System_String__Format((System_String_o *)StringLiteral_3144/*"Bg/{0}"*/, v20, 0);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v4,
    Method_DebugListSelectComponent_CheckBattleBGResourceExistCallback__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v21, v22, 1, 0) )
  {
    this = (DebugListSelectComponent_o *)v4->fields.messageLabel;
    v4->fields.showIndex = v4->fields.selectIndex;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_25505/*"アセットが存在しません。"*/, 0);
      return;
    }
LABEL_19:
    sub_1C6BC60(this, bgid);
  }
}


void DebugListSelectComponent__CheckBattleBGResourceExistCallback(
        DebugListSelectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetData_o *v3; // x20
  DebugListSelectComponent_o *v4; // x19
  struct BgResourceData_o *bgResourceData; // x8
  System_String_o *v6; // x0
  Il2CppObject *Object_object__51495936; // x21
  __int64 *v8; // x8
  struct UILabel_o *selectingItemLabel; // x8
  struct System_Action_string__bool__o *callback; // x9
  int Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v3 = data;
  v4 = this;
  if ( (byte_4CB78E2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17150/*"bg"*/);
    sub_1C6BA08(&StringLiteral_25505/*"アセットが存在しません。"*/);
    this = (DebugListSelectComponent_o *)sub_1C6BA08(&StringLiteral_17153/*"bg0"*/);
    byte_4CB78E2 = 1;
  }
  bgResourceData = v4->fields.bgResourceData;
  v4->fields.showIndex = v4->fields.selectIndex;
  if ( !bgResourceData )
    goto LABEL_23;
  Type_k__BackingField = bgResourceData->fields._Type_k__BackingField;
  if ( Type_k__BackingField <= 0 )
  {
    data = (AssetData_o *)StringLiteral_17150/*"bg"*/;
    if ( !v3 )
      goto LABEL_23;
  }
  else
  {
    v6 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0);
    this = (DebugListSelectComponent_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_17150/*"bg"*/, v6, 0);
    data = (AssetData_o *)this;
    if ( !v3 )
      goto LABEL_23;
  }
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              v3,
                              (System_String_o *)data,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) )
  {
    if ( Type_k__BackingField <= 0 )
      v8 = &StringLiteral_17153/*"bg0"*/;
    else
      v8 = &StringLiteral_17150/*"bg"*/;
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                v3,
                                (System_String_o *)*v8,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DebugListSelectComponent_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Object_object__51495936,
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
    sub_1C6BC60(this, data);
  }
  this = (DebugListSelectComponent_o *)v4->fields.messageLabel;
  if ( !this )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_25505/*"アセットが存在しません。"*/, 0);
}


void DebugListSelectComponent__Close(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugListSelectComponent__CreateListCoroutine(
        DebugListSelectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB78DC & 1) == 0 )
  {
    sub_1C6BA08(&DebugListSelectComponent__CreateListCoroutine_d__19_TypeInfo);
    byte_4CB78DC = 1;
  }
  v3 = sub_1C6BC54(DebugListSelectComponent__CreateListCoroutine_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  if ( (byte_4CB78DE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (DebugListSelectComponent_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB78DE = 1;
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
                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C6BC60(this, method);
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
  if ( (byte_4CB78DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (DebugListSelectComponent_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB78DF = 1;
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
                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C6BC60(this, method);
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

  if ( (byte_4CB78DD & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB78DD = 1;
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
      sub_1C6BC60(messageLabel, method);
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
    UnityEngine_MonoBehaviour__StopCoroutine_71645488((UnityEngine_MonoBehaviour_o *)this, createListCoroutine, 0);
  DebugListSelectComponent__RemoveList(this, (const MethodInfo *)createListCoroutine);
  ListCoroutine = DebugListSelectComponent__CreateListCoroutine(this, v5);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
  this->fields.createListCoroutine = started;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_createListCoroutine, (int32_t)started, v8, v9);
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
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t size; // w2
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_string__o *dataList; // x8
  int v18; // w9
  struct UIInput_o *inputField; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onChange; // x9
  int32_t v21; // w2
  int v22; // w10
  System_Collections_Generic_List_object__o *v23; // x21
  EventDelegate_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  struct UIButton_o *submitButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  int32_t v33; // w2
  int v34; // w9
  struct UIButton_o *closeButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v36; // x8
  int32_t v37; // w2
  int v38; // w9
  struct UIButton_o *nextButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v40; // x8
  int32_t v41; // w2
  int v42; // w9
  struct UIButton_o *prevButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v44; // x8
  int32_t v45; // w2
  int v46; // w9
  struct UIButton_o *v47; // x8
  System_Collections_Generic_List_object__o *v48; // x21
  EventDelegate_o *v49; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  struct UIButton_o *v56; // x8
  System_Collections_Generic_List_object__o *v57; // x21
  EventDelegate_o *v58; // x22
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  struct UIButton_o *v65; // x8
  System_Collections_Generic_List_object__o *v66; // x21
  EventDelegate_o *v67; // x22
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  struct UIButton_o *v74; // x8
  System_Collections_Generic_List_object__o *v75; // x21
  EventDelegate_o *v76; // x22
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  UnityEngine_Transform_o *v83; // x21
  UIPanel_o *v84; // x21
  const MethodInfo *v85; // x1
  System_Collections_IEnumerator_o *ListCoroutine; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3

  if ( (byte_4CB78DB & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&StringLiteral_9952/*"OnSearchLabelChange"*/);
    sub_1C6BA08(&StringLiteral_9858/*"OnClickNext"*/);
    sub_1C6BA08(&StringLiteral_4499/*"Close"*/);
    sub_1C6BA08(&StringLiteral_9870/*"OnClickSubmit"*/);
    sub_1C6BA08(&StringLiteral_9860/*"OnClickPrev"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB78DB = 1;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)callback, v13, v14);
  dataList = this->fields.dataList;
  if ( dataList )
  {
    size = dataList->fields._size;
    v18 = dataList->fields._version + 1;
    dataList->fields._size = 0;
    dataList->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dataList->fields._items, 0, size, 0);
  }
  this->fields.dataList = list;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dataList, (int32_t)list, size, v16);
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
  v21 = onChange->fields._size;
  v22 = onChange->fields._version + 1;
  onChange->fields._size = 0;
  onChange->fields._version = v22;
  if ( v21 >= 1 )
  {
    System_Array__Clear((System_Array_o *)onChange->fields._items, 0, v21, 0);
    inputField = this->fields.inputField;
    if ( !inputField )
      goto LABEL_71;
  }
  v23 = (System_Collections_Generic_List_object__o *)inputField->fields.onChange;
  v24 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
  EventDelegate___ctor_49576560(v24, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9952/*"OnSearchLabelChange"*/, 0);
  if ( !v23 )
    goto LABEL_71;
  items = v23->fields._items;
  v28 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_71;
  v29 = v23->fields._size;
  if ( (unsigned int)v29 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v24,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + v29;
    v23->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
  }
  submitButton = this->fields.submitButton;
  if ( !submitButton )
    goto LABEL_71;
  onClick = submitButton->fields.onClick;
  if ( !onClick )
    goto LABEL_71;
  v33 = onClick->fields._size;
  v34 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v34;
  if ( v33 >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, v33, 0);
  closeButton = this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_71;
  v36 = closeButton->fields.onClick;
  if ( !v36 )
    goto LABEL_71;
  v37 = v36->fields._size;
  v38 = v36->fields._version + 1;
  v36->fields._size = 0;
  v36->fields._version = v38;
  if ( v37 >= 1 )
    System_Array__Clear((System_Array_o *)v36->fields._items, 0, v37, 0);
  nextButton = this->fields.nextButton;
  if ( !nextButton )
    goto LABEL_71;
  v40 = nextButton->fields.onClick;
  if ( !v40 )
    goto LABEL_71;
  v41 = v40->fields._size;
  v42 = v40->fields._version + 1;
  v40->fields._size = 0;
  v40->fields._version = v42;
  if ( v41 >= 1 )
    System_Array__Clear((System_Array_o *)v40->fields._items, 0, v41, 0);
  prevButton = this->fields.prevButton;
  if ( !prevButton )
    goto LABEL_71;
  v44 = prevButton->fields.onClick;
  if ( !v44 )
    goto LABEL_71;
  v45 = v44->fields._size;
  v46 = v44->fields._version + 1;
  v44->fields._size = 0;
  v44->fields._version = v46;
  if ( v45 >= 1 )
    System_Array__Clear((System_Array_o *)v44->fields._items, 0, v45, 0);
  v47 = this->fields.submitButton;
  if ( !v47 )
    goto LABEL_71;
  v48 = (System_Collections_Generic_List_object__o *)v47->fields.onClick;
  v49 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
  EventDelegate___ctor_49576560(v49, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9870/*"OnClickSubmit"*/, 0);
  if ( !v48 )
    goto LABEL_71;
  v52 = v48->fields._items;
  v53 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v48->fields._version;
  if ( !v52 )
    goto LABEL_71;
  v54 = v48->fields._size;
  if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v48,
      (Il2CppObject *)v49,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v52->obj.klass + v54;
    v48->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)v49;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v49, v50, v51);
  }
  v56 = this->fields.closeButton;
  if ( !v56 )
    goto LABEL_71;
  v57 = (System_Collections_Generic_List_object__o *)v56->fields.onClick;
  v58 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
  EventDelegate___ctor_49576560(v58, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_4499/*"Close"*/, 0);
  if ( !v57 )
    goto LABEL_71;
  v61 = v57->fields._items;
  v62 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v57->fields._version;
  if ( !v61 )
    goto LABEL_71;
  v63 = v57->fields._size;
  if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v57,
      (Il2CppObject *)v58,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &v61->obj.klass + v63;
    v57->fields._size = v63 + 1;
    v64[4] = (Il2CppClass *)v58;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
  }
  v65 = this->fields.nextButton;
  if ( !v65 )
    goto LABEL_71;
  v66 = (System_Collections_Generic_List_object__o *)v65->fields.onClick;
  v67 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
  EventDelegate___ctor_49576560(v67, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9858/*"OnClickNext"*/, 0);
  if ( !v66 )
    goto LABEL_71;
  v70 = v66->fields._items;
  v71 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v66->fields._version;
  if ( !v70 )
    goto LABEL_71;
  v72 = v66->fields._size;
  if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v66,
      (Il2CppObject *)v67,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = &v70->obj.klass + v72;
    v66->fields._size = v72 + 1;
    v73[4] = (Il2CppClass *)v67;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v67, v68, v69);
  }
  v74 = this->fields.prevButton;
  if ( !v74 )
    goto LABEL_71;
  v75 = (System_Collections_Generic_List_object__o *)v74->fields.onClick;
  v76 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
  EventDelegate___ctor_49576560(v76, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9860/*"OnClickPrev"*/, 0);
  if ( !v75 )
    goto LABEL_71;
  v79 = v75->fields._items;
  v80 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v75->fields._version;
  if ( !v79 )
    goto LABEL_71;
  v81 = v75->fields._size;
  if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      (Il2CppObject *)v76,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
  }
  else
  {
    v82 = &v79->obj.klass + v81;
    v75->fields._size = v81 + 1;
    v82[4] = (Il2CppClass *)v76;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v76, v77, v78);
  }
  gameObject = (__int64)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  v83 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4CAFC09 )
  {
    gameObject = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v83 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(v83, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (__int64)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v84 = (UIPanel_o *)gameObject;
  if ( !byte_4CAFAE9 )
  {
    gameObject = sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
    byte_4CAFAE9 = 1;
  }
  if ( !v84 )
LABEL_71:
    sub_1C6BC60(gameObject, v12);
  UIPanel__set_clipOffset(v84, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  this->fields.dataType = type;
  ListCoroutine = DebugListSelectComponent__CreateListCoroutine(this, v85);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
  this->fields.createListCoroutine = started;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.createListCoroutine, (int32_t)started, v88, v89);
}


void DebugListSelectComponent__RemoveList(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CB78E0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB78E0 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
LABEL_13:
    sub_1C6BC60(grid, method);
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
          UnityEngine_Object__Destroy_71659676(gameObject, 0);
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
    sub_1C6BC60(0, id);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x24
  System_Collections_Generic_IEnumerable_TSource__o **p_filteredList; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool v12; // w0
  System_Collections_Generic_IEnumerable_TSource__o *dataList; // x23
  System_Func_object__bool__o *v14; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_TSource__o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w8
  bool result; // w0
  Il2CppObject *BaseCell; // x21
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v25; // x21
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v26; // x22
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v27; // x22
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v28; // x22
  DebugListSelectCellComponent_o *v29; // x21
  Il2CppObject *Item; // x0
  int32_t i_5__4; // w22
  System_String_o *v32; // x23
  System_Action_T1__T2__o *v33; // x24
  const MethodInfo *v34; // x4
  int32_t interval_5__2; // w9
  int v36; // w8
  struct System_Collections_Generic_List_string__o *filteredList; // x9
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  v2 = this;
  if ( (byte_4CB78E4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_string__int__TypeInfo);
    sub_1C6BA08(&Method_DebugListSelectComponent_TapItemSelectCallback__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_DebugListSelectCellComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor___78530416);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_DebugListSelectComponent___c__DisplayClass19_0__CreateListCoroutine_b__0__);
    sub_1C6BA08(&DebugListSelectComponent___c__DisplayClass19_0_TypeInfo);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB78E4 = 1;
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
  v5 = sub_1C6BC54(DebugListSelectComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !_4__this )
    goto LABEL_39;
  DebugListSelectComponent__RemoveList(_4__this, method);
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)_4__this->fields.inputField;
  if ( !this )
    goto LABEL_39;
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UIInput__get_value((UIInput_o *)this, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  _4__this->fields.filteredList = (struct System_Collections_Generic_List_string__o *)v8;
  p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o **)&_4__this->fields.filteredList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.filteredList, (int32_t)v8, v10, v11);
  v12 = System_String__op_Inequality(*(System_String_o **)(v5 + 16), (System_String_o *)StringLiteral_1/*""*/, 0);
  dataList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dataList;
  if ( !v12 )
    goto LABEL_11;
  v14 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_DebugListSelectComponent___c__DisplayClass19_0__CreateListCoroutine_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          dataList,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_string___);
  v16 = System_Linq_Enumerable__ToList_object_(
          v15,
          (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_string___);
  *p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.filteredList, (int32_t)v16, v17, v18);
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)System_Linq_Enumerable__Count_object_(
                                                                    *p_filteredList,
                                                                    (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_string___);
  if ( (int)this <= 0 )
  {
    dataList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dataList;
LABEL_11:
    v19 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)dataList,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_string___ctor___78530416);
    *p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.filteredList, (int32_t)v19, v20, v21);
  }
  v22 = 0;
  v2->fields._i_5__4 = 0;
  *(_QWORD *)&v2->fields._interval_5__2 = 50;
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_39;
    filteredList = _4__this->fields.filteredList;
    if ( !filteredList )
      goto LABEL_39;
    if ( v22 >= filteredList->fields._size )
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
      sub_1C6BC60(this, method);
    }
    BaseCell = (Il2CppObject *)_4__this->fields.BaseCell;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_Object__Instantiate_object_(
                                                                      BaseCell,
                                                                      (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_39;
    v25 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v25,
                                                                      0);
    if ( !_4__this->fields.grid )
      goto LABEL_39;
    v26 = this;
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)_4__this->fields.grid,
                                                                      0);
    if ( !v26 )
      goto LABEL_39;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v26, (UnityEngine_Transform_o *)this, 0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v25,
                                                                      0);
    v27 = this;
    if ( !byte_4CAFC09 )
    {
      this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    if ( !v27 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v27,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v25,
                                                                      0);
    v28 = this;
    if ( !byte_4CAFC0E )
    {
      this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v28 )
      goto LABEL_39;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v28,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)v25,
                                                                      (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_DebugListSelectCellComponent___);
    if ( !_4__this->fields.filteredList )
      goto LABEL_39;
    v29 = (DebugListSelectCellComponent_o *)this;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)_4__this->fields.filteredList,
             v2->fields._i_5__4,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
    i_5__4 = v2->fields._i_5__4;
    v32 = (System_String_o *)Item;
    v33 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_string__int__TypeInfo);
    System_Action_object__int____ctor(
      v33,
      (Il2CppObject *)_4__this,
      Method_DebugListSelectComponent_TapItemSelectCallback__,
      0);
    if ( !v29 )
      goto LABEL_39;
    DebugListSelectCellComponent__Set(v29, v32, i_5__4, (System_Action_string__int__o *)v33, v34);
    interval_5__2 = v2->fields._interval_5__2;
    v36 = v2->fields._cnt_5__3 + 1;
    v2->fields._cnt_5__3 = v36;
    if ( v36 > interval_5__2 )
      break;
LABEL_29:
    v22 = v2->fields._i_5__4 + 1;
    v2->fields._i_5__4 = v22;
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
  sub_1C6B9AC(p__2__current, 0, v39, v40);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_DebugListSelectComponent__CreateListCoroutine_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB78E3 & 1) == 0 )
  {
    sub_1C6BA08(&DebugListSelectComponent___c_TypeInfo);
    byte_4CB78E3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(DebugListSelectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DebugListSelectComponent___c_TypeInfo->static_fields->__9 = (struct DebugListSelectComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)DebugListSelectComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return System_String__Contains(x, this->fields.searchStr, 0);
}