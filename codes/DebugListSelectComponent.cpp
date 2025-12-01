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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  int32_t BaseCell; // w20
  int32_t BaseCell_high; // w21
  BgResourceData_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct BgResourceData_o *bgResourceData; // x8
  Il2CppObject *v28; // x0
  System_String_o *v29; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  int32_t Id_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CC8A0A & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BgResourceData_TypeInfo);
    sub_1C713B0(&Method_DebugListSelectComponent_CheckBattleBGResourceExistCallback__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_string__int__TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_DebugListSelectComponent___c__CheckBattleBGResourceExist_b__28_0__);
    sub_1C713B0(&DebugListSelectComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_3147/*"Bg/{0}"*/);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    this = (DebugListSelectComponent_o *)sub_1C713B0(&StringLiteral_25525/*"アセットが存在しません。"*/);
    byte_4CC8A0A = 1;
  }
  if ( !bgid )
    goto LABEL_19;
  v5 = System_String__Split_64083632(bgid, (System_String_o *)StringLiteral_1450/*":"*/, 0, 0);
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
    _9__28_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v9,
      Method_DebugListSelectComponent___c__CheckBattleBGResourceExist_b__28_0__,
      0);
    static_fields = DebugListSelectComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_string__int__o *)_9__28_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0,
      (int32_t)_9__28_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__28_0,
                                                               (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_string__int___);
  this = (DebugListSelectComponent_o *)System_Linq_Enumerable__ToArray_int_(
                                         v17,
                                         (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !this )
    goto LABEL_19;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
    return;
  BaseCell = (int32_t)this->fields.BaseCell;
  BaseCell_high = HIDWORD(this->fields.BaseCell);
  v20 = (BgResourceData_o *)sub_1C715FC(BgResourceData_TypeInfo);
  BgResourceData___ctor(v20, BaseCell, BaseCell_high, 0);
  v4->fields.bgResourceData = v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.bgResourceData, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  bgResourceData = v4->fields.bgResourceData;
  if ( !bgResourceData )
    goto LABEL_19;
  Id_k__BackingField = bgResourceData->fields._Id_k__BackingField;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Id_k__BackingField);
  v29 = System_String__Format((System_String_o *)StringLiteral_3147/*"Bg/{0}"*/, v28, 0);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v4,
    Method_DebugListSelectComponent_CheckBattleBGResourceExistCallback__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v29, v30, 1, 0) )
  {
    this = (DebugListSelectComponent_o *)v4->fields.messageLabel;
    v4->fields.showIndex = v4->fields.selectIndex;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_25525/*"アセットが存在しません。"*/, 0);
      return;
    }
LABEL_19:
    sub_1C71608(this, bgid);
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
  Il2CppObject *Object_object__51560868; // x21
  __int64 *v8; // x8
  struct UILabel_o *selectingItemLabel; // x8
  struct System_Action_string__bool__o *callback; // x9
  int Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v3 = data;
  v4 = this;
  if ( (byte_4CC8A0B & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_17157/*"bg"*/);
    sub_1C713B0(&StringLiteral_25525/*"アセットが存在しません。"*/);
    this = (DebugListSelectComponent_o *)sub_1C713B0(&StringLiteral_17160/*"bg0"*/);
    byte_4CC8A0B = 1;
  }
  bgResourceData = v4->fields.bgResourceData;
  v4->fields.showIndex = v4->fields.selectIndex;
  if ( !bgResourceData )
    goto LABEL_23;
  Type_k__BackingField = bgResourceData->fields._Type_k__BackingField;
  if ( Type_k__BackingField <= 0 )
  {
    data = (AssetData_o *)StringLiteral_17157/*"bg"*/;
    if ( !v3 )
      goto LABEL_23;
  }
  else
  {
    v6 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0);
    this = (DebugListSelectComponent_o *)System_String__Concat_64031724((System_String_o *)StringLiteral_17157/*"bg"*/, v6, 0);
    data = (AssetData_o *)this;
    if ( !v3 )
      goto LABEL_23;
  }
  Object_object__51560868 = AssetData__GetObject_object__51560868(
                              v3,
                              (System_String_o *)data,
                              (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51560868, 0, 0) )
  {
    if ( Type_k__BackingField <= 0 )
      v8 = &StringLiteral_17160/*"bg0"*/;
    else
      v8 = &StringLiteral_17157/*"bg"*/;
    Object_object__51560868 = AssetData__GetObject_object__51560868(
                                v3,
                                (System_String_o *)*v8,
                                (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DebugListSelectComponent_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Object_object__51560868,
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
    sub_1C71608(this, data);
  }
  this = (DebugListSelectComponent_o *)v4->fields.messageLabel;
  if ( !this )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_25525/*"アセットが存在しません。"*/, 0);
}


void DebugListSelectComponent__Close(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugListSelectComponent__CreateListCoroutine(
        DebugListSelectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC8A05 & 1) == 0 )
  {
    sub_1C713B0(&DebugListSelectComponent__CreateListCoroutine_d__19_TypeInfo);
    byte_4CC8A05 = 1;
  }
  v3 = sub_1C715FC(DebugListSelectComponent__CreateListCoroutine_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4CC8A07 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (DebugListSelectComponent_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8A07 = 1;
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
                                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C71608(this, method);
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
  if ( (byte_4CC8A08 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (DebugListSelectComponent_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8A08 = 1;
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
                                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C71608(this, method);
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

  if ( (byte_4CC8A06 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8A06 = 1;
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
      sub_1C71608(messageLabel, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  p_createListCoroutine = &this->fields.createListCoroutine;
  createListCoroutine = this->fields.createListCoroutine;
  if ( createListCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_71710420((UnityEngine_MonoBehaviour_o *)this, createListCoroutine, 0);
  DebugListSelectComponent__RemoveList(this, (const MethodInfo *)createListCoroutine);
  ListCoroutine = DebugListSelectComponent__CreateListCoroutine(this, v5);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
  this->fields.createListCoroutine = started;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_createListCoroutine, (int32_t)started, v8, v9, v10, v11, v12, v13);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t size; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Collections_Generic_List_string__o *dataList; // x8
  int v26; // w9
  struct UIInput_o *inputField; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onChange; // x9
  int32_t v29; // w2
  int v30; // w10
  System_Collections_Generic_List_object__o *v31; // x21
  EventDelegate_o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  struct UIButton_o *submitButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  int32_t v45; // w2
  int v46; // w9
  struct UIButton_o *closeButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v48; // x8
  int32_t v49; // w2
  int v50; // w9
  struct UIButton_o *nextButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v52; // x8
  int32_t v53; // w2
  int v54; // w9
  struct UIButton_o *prevButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v56; // x8
  int32_t v57; // w2
  int v58; // w9
  struct UIButton_o *v59; // x8
  System_Collections_Generic_List_object__o *v60; // x21
  EventDelegate_o *v61; // x22
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  struct UIButton_o *v72; // x8
  System_Collections_Generic_List_object__o *v73; // x21
  EventDelegate_o *v74; // x22
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  struct UIButton_o *v85; // x8
  System_Collections_Generic_List_object__o *v86; // x21
  EventDelegate_o *v87; // x22
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  struct UIButton_o *v98; // x8
  System_Collections_Generic_List_object__o *v99; // x21
  EventDelegate_o *v100; // x22
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  UnityEngine_Transform_o *v111; // x21
  UIPanel_o *v112; // x21
  const MethodInfo *v113; // x1
  System_Collections_IEnumerator_o *ListCoroutine; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7

  if ( (byte_4CC8A04 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C713B0(&StringLiteral_9957/*"OnSearchLabelChange"*/);
    sub_1C713B0(&StringLiteral_9863/*"OnClickNext"*/);
    sub_1C713B0(&StringLiteral_4502/*"Close"*/);
    sub_1C713B0(&StringLiteral_9875/*"OnClickSubmit"*/);
    sub_1C713B0(&StringLiteral_9865/*"OnClickPrev"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8A04 = 1;
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callback, (int32_t)callback, v13, v14, v15, v16, v17, v18);
  dataList = this->fields.dataList;
  if ( dataList )
  {
    size = dataList->fields._size;
    v26 = dataList->fields._version + 1;
    dataList->fields._size = 0;
    dataList->fields._version = v26;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dataList->fields._items, 0, size, 0);
  }
  this->fields.dataList = list;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dataList, (int32_t)list, size, v20, v21, v22, v23, v24);
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
  v29 = onChange->fields._size;
  v30 = onChange->fields._version + 1;
  onChange->fields._size = 0;
  onChange->fields._version = v30;
  if ( v29 >= 1 )
  {
    System_Array__Clear((System_Array_o *)onChange->fields._items, 0, v29, 0);
    inputField = this->fields.inputField;
    if ( !inputField )
      goto LABEL_71;
  }
  v31 = (System_Collections_Generic_List_object__o *)inputField->fields.onChange;
  v32 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v32, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9957/*"OnSearchLabelChange"*/, 0);
  if ( !v31 )
    goto LABEL_71;
  items = v31->fields._items;
  v40 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v31->fields._version;
  if ( !items )
    goto LABEL_71;
  v41 = v31->fields._size;
  if ( (unsigned int)v41 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v31,
      (Il2CppObject *)v32,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + v41;
    v31->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)v32;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  }
  submitButton = this->fields.submitButton;
  if ( !submitButton )
    goto LABEL_71;
  onClick = submitButton->fields.onClick;
  if ( !onClick )
    goto LABEL_71;
  v45 = onClick->fields._size;
  v46 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v46;
  if ( v45 >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, v45, 0);
  closeButton = this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_71;
  v48 = closeButton->fields.onClick;
  if ( !v48 )
    goto LABEL_71;
  v49 = v48->fields._size;
  v50 = v48->fields._version + 1;
  v48->fields._size = 0;
  v48->fields._version = v50;
  if ( v49 >= 1 )
    System_Array__Clear((System_Array_o *)v48->fields._items, 0, v49, 0);
  nextButton = this->fields.nextButton;
  if ( !nextButton )
    goto LABEL_71;
  v52 = nextButton->fields.onClick;
  if ( !v52 )
    goto LABEL_71;
  v53 = v52->fields._size;
  v54 = v52->fields._version + 1;
  v52->fields._size = 0;
  v52->fields._version = v54;
  if ( v53 >= 1 )
    System_Array__Clear((System_Array_o *)v52->fields._items, 0, v53, 0);
  prevButton = this->fields.prevButton;
  if ( !prevButton )
    goto LABEL_71;
  v56 = prevButton->fields.onClick;
  if ( !v56 )
    goto LABEL_71;
  v57 = v56->fields._size;
  v58 = v56->fields._version + 1;
  v56->fields._size = 0;
  v56->fields._version = v58;
  if ( v57 >= 1 )
    System_Array__Clear((System_Array_o *)v56->fields._items, 0, v57, 0);
  v59 = this->fields.submitButton;
  if ( !v59 )
    goto LABEL_71;
  v60 = (System_Collections_Generic_List_object__o *)v59->fields.onClick;
  v61 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v61, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9875/*"OnClickSubmit"*/, 0);
  if ( !v60 )
    goto LABEL_71;
  v68 = v60->fields._items;
  v69 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v60->fields._version;
  if ( !v68 )
    goto LABEL_71;
  v70 = v60->fields._size;
  if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v60,
      (Il2CppObject *)v61,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &v68->obj.klass + v70;
    v60->fields._size = v70 + 1;
    v71[4] = (Il2CppClass *)v61;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v71 + 4), (int32_t)v61, v62, v63, v64, v65, v66, v67);
  }
  v72 = this->fields.closeButton;
  if ( !v72 )
    goto LABEL_71;
  v73 = (System_Collections_Generic_List_object__o *)v72->fields.onClick;
  v74 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v74, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_4502/*"Close"*/, 0);
  if ( !v73 )
    goto LABEL_71;
  v81 = v73->fields._items;
  v82 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v73->fields._version;
  if ( !v81 )
    goto LABEL_71;
  v83 = v73->fields._size;
  if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v73,
      (Il2CppObject *)v74,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &v81->obj.klass + v83;
    v73->fields._size = v83 + 1;
    v84[4] = (Il2CppClass *)v74;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)v74, v75, v76, v77, v78, v79, v80);
  }
  v85 = this->fields.nextButton;
  if ( !v85 )
    goto LABEL_71;
  v86 = (System_Collections_Generic_List_object__o *)v85->fields.onClick;
  v87 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v87, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9863/*"OnClickNext"*/, 0);
  if ( !v86 )
    goto LABEL_71;
  v94 = v86->fields._items;
  v95 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v86->fields._version;
  if ( !v94 )
    goto LABEL_71;
  v96 = v86->fields._size;
  if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v86,
      (Il2CppObject *)v87,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v97 = &v94->obj.klass + v96;
    v86->fields._size = v96 + 1;
    v97[4] = (Il2CppClass *)v87;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v87, v88, v89, v90, v91, v92, v93);
  }
  v98 = this->fields.prevButton;
  if ( !v98 )
    goto LABEL_71;
  v99 = (System_Collections_Generic_List_object__o *)v98->fields.onClick;
  v100 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v100, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9865/*"OnClickPrev"*/, 0);
  if ( !v99 )
    goto LABEL_71;
  v107 = v99->fields._items;
  v108 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v99->fields._version;
  if ( !v107 )
    goto LABEL_71;
  v109 = v99->fields._size;
  if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v99,
      (Il2CppObject *)v100,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  }
  else
  {
    v110 = &v107->obj.klass + v109;
    v99->fields._size = v109 + 1;
    v110[4] = (Il2CppClass *)v100;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v110 + 4), (int32_t)v100, v101, v102, v103, v104, v105, v106);
  }
  gameObject = (__int64)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  v111 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4CC0D09 )
  {
    gameObject = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v111 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(v111, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (__int64)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)gameObject,
                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v112 = (UIPanel_o *)gameObject;
  if ( !byte_4CC0BE9 )
  {
    gameObject = sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
  }
  if ( !v112 )
LABEL_71:
    sub_1C71608(gameObject, v12);
  UIPanel__set_clipOffset(v112, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  this->fields.dataType = type;
  ListCoroutine = DebugListSelectComponent__CreateListCoroutine(this, v113);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
  this->fields.createListCoroutine = started;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.createListCoroutine,
    (int32_t)started,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
}


void DebugListSelectComponent__RemoveList(DebugListSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CC8A09 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8A09 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
LABEL_13:
    sub_1C71608(grid, method);
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
          UnityEngine_Object__Destroy_71724608(gameObject, 0);
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
    sub_1C71608(0, id);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o **p_filteredList; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  bool v20; // w0
  System_Collections_Generic_IEnumerable_TSource__o *dataList; // x23
  System_Func_object__bool__o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_TSource__o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int v38; // w8
  bool result; // w0
  Il2CppObject *BaseCell; // x21
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v41; // x21
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v42; // x22
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v43; // x22
  DebugListSelectComponent__CreateListCoroutine_d__19_o *v44; // x22
  DebugListSelectCellComponent_o *v45; // x21
  Il2CppObject *Item; // x0
  int32_t i_5__4; // w22
  System_String_o *v48; // x23
  System_Action_T1__T2__o *v49; // x24
  const MethodInfo *v50; // x4
  int32_t interval_5__2; // w9
  int v52; // w8
  struct System_Collections_Generic_List_string__o *filteredList; // x9
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7

  v2 = this;
  if ( (byte_4CC8A0D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_string__int__TypeInfo);
    sub_1C713B0(&Method_DebugListSelectComponent_TapItemSelectCallback__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C713B0(&System_Func_string__bool__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_DebugListSelectCellComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor___78599176);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_DebugListSelectComponent___c__DisplayClass19_0__CreateListCoroutine_b__0__);
    sub_1C713B0(&DebugListSelectComponent___c__DisplayClass19_0_TypeInfo);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8A0D = 1;
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
  v5 = sub_1C715FC(DebugListSelectComponent___c__DisplayClass19_0_TypeInfo);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  _4__this->fields.filteredList = (struct System_Collections_Generic_List_string__o *)v12;
  p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o **)&_4__this->fields.filteredList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&_4__this->fields.filteredList, (int32_t)v12, v14, v15, v16, v17, v18, v19);
  v20 = System_String__op_Inequality(*(System_String_o **)(v5 + 16), (System_String_o *)StringLiteral_1/*""*/, 0);
  dataList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dataList;
  if ( !v20 )
    goto LABEL_11;
  v22 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_DebugListSelectComponent___c__DisplayClass19_0__CreateListCoroutine_b__0__,
    0);
  v23 = System_Linq_Enumerable__Where_object_(
          dataList,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_string___);
  v24 = System_Linq_Enumerable__ToList_object_(
          v23,
          (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_string___);
  *p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&_4__this->fields.filteredList, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)System_Linq_Enumerable__Count_object_(
                                                                    *p_filteredList,
                                                                    (const MethodInfo_316B570 *)Method_System_Linq_Enumerable_Count_string___);
  if ( (int)this <= 0 )
  {
    dataList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dataList;
LABEL_11:
    v31 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58785804(
      v31,
      (System_Collections_Generic_IEnumerable_T__o *)dataList,
      (const MethodInfo_381000C *)Method_System_Collections_Generic_List_string___ctor___78599176);
    *p_filteredList = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.filteredList,
      (int32_t)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = 0;
  v2->fields._i_5__4 = 0;
  *(_QWORD *)&v2->fields._interval_5__2 = 50;
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_39;
    filteredList = _4__this->fields.filteredList;
    if ( !filteredList )
      goto LABEL_39;
    if ( v38 >= filteredList->fields._size )
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
      sub_1C71608(this, method);
    }
    BaseCell = (Il2CppObject *)_4__this->fields.BaseCell;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_Object__Instantiate_object_(
                                                                      BaseCell,
                                                                      (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_39;
    v41 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v41,
                                                                      0);
    if ( !_4__this->fields.grid )
      goto LABEL_39;
    v42 = this;
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)_4__this->fields.grid,
                                                                      0);
    if ( !v42 )
      goto LABEL_39;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v42, (UnityEngine_Transform_o *)this, 0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v41,
                                                                      0);
    v43 = this;
    if ( !byte_4CC0D09 )
    {
      this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    if ( !v43 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v43,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v41,
                                                                      0);
    v44 = this;
    if ( !byte_4CC0D0E )
    {
      this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D0E = 1;
    }
    if ( !v44 )
      goto LABEL_39;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v44,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0);
    this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)v41,
                                                                      (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_DebugListSelectCellComponent___);
    if ( !_4__this->fields.filteredList )
      goto LABEL_39;
    v45 = (DebugListSelectCellComponent_o *)this;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)_4__this->fields.filteredList,
             v2->fields._i_5__4,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
    i_5__4 = v2->fields._i_5__4;
    v48 = (System_String_o *)Item;
    v49 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_string__int__TypeInfo);
    System_Action_object__int____ctor(
      v49,
      (Il2CppObject *)_4__this,
      Method_DebugListSelectComponent_TapItemSelectCallback__,
      0);
    if ( !v45 )
      goto LABEL_39;
    DebugListSelectCellComponent__Set(v45, v48, i_5__4, (System_Action_string__int__o *)v49, v50);
    interval_5__2 = v2->fields._interval_5__2;
    v52 = v2->fields._cnt_5__3 + 1;
    v2->fields._cnt_5__3 = v52;
    if ( v52 > interval_5__2 )
      break;
LABEL_29:
    v38 = v2->fields._i_5__4 + 1;
    v2->fields._i_5__4 = v38;
  }
  v2->fields._cnt_5__3 = 0;
  this = (DebugListSelectComponent__CreateListCoroutine_d__19_o *)_4__this->fields.grid;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(DebugListSelectComponent__CreateListCoroutine_d__19_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
    this,
    this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  v2->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C71354(p__2__current, 0, v55, v56, v57, v58, v59, v60);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_DebugListSelectComponent__CreateListCoroutine_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC8A0C & 1) == 0 )
  {
    sub_1C713B0(&DebugListSelectComponent___c_TypeInfo);
    byte_4CC8A0C = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(DebugListSelectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DebugListSelectComponent___c_TypeInfo->static_fields->__9 = (struct DebugListSelectComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)DebugListSelectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, 0);
  return System_String__Contains(x, this->fields.searchStr, 0);
}