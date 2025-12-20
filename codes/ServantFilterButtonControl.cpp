void ServantFilterButtonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ServantFilterButtonControl_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2771E & 1) == 0 )
  {
    sub_1C94098(&ServantFilterButtonControl_TypeInfo);
    sub_1C94098(&StringLiteral_17525/*"btn_bg_04"*/);
    sub_1C94098(&StringLiteral_17524/*"btn_bg_03"*/);
    byte_4D2771E = 1;
  }
  ServantFilterButtonControl_TypeInfo->static_fields->SPRITE_NAME_ENABLE = (struct System_String_o *)StringLiteral_17524/*"btn_bg_03"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantFilterButtonControl_TypeInfo->static_fields,
    StringLiteral_17524/*"btn_bg_03"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17525/*"btn_bg_04"*/;
  static_fields = ServantFilterButtonControl_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_DISABLE = (struct System_String_o *)StringLiteral_17525/*"btn_bg_04"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->SPRITE_NAME_DISABLE, v7, v9, v10, v11, v12, v13, v14);
}


void ServantFilterButtonControl___ctor(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantFilterButtonControl__Awake(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  ;
}


void ServantFilterButtonControl__Init(
        ServantFilterButtonControl_o *this,
        ListViewSort_o *targetSort,
        ServantFilterButtonControl_OnClickFilterButton_o *onClickFilter,
        bool isDisplay,
        bool isSummon,
        bool isClassOthers,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ListViewSort_o **p_targetSort; // x25
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UILabel_o *buttonText; // x23
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, isDisplay, 0);
  p_targetSort = &this->fields.targetSort;
  if ( isDisplay )
  {
    *p_targetSort = targetSort;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.targetSort,
      (int32_t)targetSort,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( !*p_targetSort )
    {
LABEL_6:
      this->fields.onClickFilterEvent = onClickFilter;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.onClickFilterEvent,
        (int32_t)onClickFilter,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      ServantFilterButtonControl__RefreshButtonSelectState(this, v31);
      return;
    }
    buttonText = this->fields.buttonText;
    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetFilterKindText(*p_targetSort, this->fields.filterKind, 0);
    if ( buttonText )
    {
      UILabel__set_text(buttonText, (System_String_o *)gameObject, 0);
      ServantFilterButtonControl__OverwriteButtonText(this, isSummon, isClassOthers, v29);
      ServantFilterButtonControl__SetCondensedScaleButtons(this, v30);
      goto LABEL_6;
    }
LABEL_8:
    sub_1C942F0(gameObject, v14);
  }
  this->fields.targetSort = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targetSort, 0, v15, v16, v17, v18, v19, v20);
  this->fields.onClickFilterEvent = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onClickFilterEvent, 0, v32, v33, v34, v35, v36, v37);
}


void ServantFilterButtonControl__OnClickEvent(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  struct ServantFilterButtonControl_OnClickFilterButton_o *onClickFilterEvent; // x8

  onClickFilterEvent = this->fields.onClickFilterEvent;
  if ( onClickFilterEvent )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickFilterEvent->fields.invoke_impl)(
      onClickFilterEvent->fields.method_code,
      (unsigned int)this->fields.filterKind,
      onClickFilterEvent->fields.method);
}


void ServantFilterButtonControl__OverwriteButtonText(
        ServantFilterButtonControl_o *this,
        bool isSummon,
        bool isClassOthers,
        const MethodInfo *method)
{
  int32_t filterKind; // w8
  UILabel_o *buttonText; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *v11; // x21
  UILabel_o *v12; // x19

  if ( (byte_4D2771B & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11839/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/);
    sub_1C94098(&StringLiteral_11828/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/);
    sub_1C94098(&StringLiteral_11840/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/);
    byte_4D2771B = 1;
  }
  if ( isSummon )
  {
    filterKind = this->fields.filterKind;
    if ( filterKind == 11 )
    {
      buttonText = this->fields.buttonText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/, 0);
      if ( !buttonText )
        goto LABEL_21;
      UILabel__set_text(buttonText, v9, 0);
      filterKind = this->fields.filterKind;
    }
    if ( filterKind == 12 )
    {
      v11 = this->fields.buttonText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/, 0);
      if ( !v11 )
        goto LABEL_21;
      UILabel__set_text(v11, v9, 0);
    }
  }
  if ( isClassOthers && this->fields.filterKind == 64 )
  {
    v12 = this->fields.buttonText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/, 0);
    if ( v12 )
    {
      UILabel__set_text(v12, v9, 0);
      return;
    }
LABEL_21:
    sub_1C942F0(v9, v10);
  }
}


void ServantFilterButtonControl__RefreshButtonSelectState(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  ListViewSort_o *targetSort; // x0
  struct UISprite_o *buttonSprite; // x20
  UISprite_o *v5; // x22
  int v6; // w19
  ServantFilterButtonControl_c *v7; // x0
  UISprite_o *v8; // x8
  System_String_o **p_SPRITE_NAME_ENABLE; // x9

  if ( (byte_4D2771C & 1) == 0 )
  {
    sub_1C94098(&ServantFilterButtonControl_TypeInfo);
    byte_4D2771C = 1;
  }
  targetSort = this->fields.targetSort;
  buttonSprite = this->fields.buttonSprite;
  if ( targetSort && ListViewSort__GetFilter(targetSort, this->fields.filterKind, 0) )
  {
    v5 = 0;
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v5 = buttonSprite;
    buttonSprite = 0;
  }
  v7 = ServantFilterButtonControl_TypeInfo;
  if ( !ServantFilterButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterButtonControl_TypeInfo);
    v7 = ServantFilterButtonControl_TypeInfo;
  }
  if ( v6 )
    v8 = buttonSprite;
  else
    v8 = v5;
  if ( !v8 )
    sub_1C942F0(v7, method);
  p_SPRITE_NAME_ENABLE = &v7->static_fields->SPRITE_NAME_ENABLE;
  if ( !v6 )
    ++p_SPRITE_NAME_ENABLE;
  UISprite__set_spriteName(v8, *p_SPRITE_NAME_ENABLE, 0);
}


void ServantFilterButtonControl__SetButtonEnable(
        ServantFilterButtonControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *button; // x0

  button = (UnityEngine_Behaviour_o *)this->fields.button;
  if ( !button )
    sub_1C942F0(0, isEnable);
  UnityEngine_Behaviour__set_enabled(button, isEnable, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterButtonControl__SetButtonMask(
        ServantFilterButtonControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *button; // x0
  char v6; // w20
  __int128 v7; // kr00_16 OVERLAPPED
  unsigned __int128 v8; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4D2771D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_406/*"#303030"*/);
    byte_4D2771D = 1;
  }
  v8 = 0u;
  button = (UnityEngine_Behaviour_o *)this->fields.button;
  if ( !button )
    goto LABEL_12;
  v6 = ~isActive;
  UnityEngine_Behaviour__set_enabled(button, v6 & 1, 0);
  if ( (v6 & 1) != 0 )
  {
    button = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
    if ( button )
    {
      *(_QWORD *)&v7 = __PAIR64__(1.0, 1.0);
      *((_QWORD *)&v7 + 1) = __PAIR64__(1.0, 1.0);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C942F0(button, isActive);
  }
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_406/*"#303030"*/,
          (UnityEngine_Color_o *)&v8,
          0) )
    v8 = xmmword_CFE620;
  button = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !button )
    goto LABEL_12;
  *(_QWORD *)&v7 = *((_QWORD *)&v8 + 1);
  *((_QWORD *)&v7 + 1) = v8;
LABEL_11:
  UIWidget__set_color((UIWidget_o *)button, *(UnityEngine_Color_o *)((char *)&v7 + 8), 0);
}


void ServantFilterButtonControl__SetCondensedScaleButtons(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  UILabel_o *buttonText; // x0
  FilterKindList_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  int32_t filterKind; // w8

  if ( (byte_4D2771A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D2771A = 1;
  }
  if ( this->fields.filterKind == 56 )
  {
    buttonText = this->fields.buttonText;
    if ( !buttonText )
      goto LABEL_17;
    UILabel__SetCondensedScale(buttonText, 132, 0, 0);
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  buttonText = (UILabel_o *)v4->static_fields->ClassFilterKindList;
  if ( !buttonText )
LABEL_17:
    sub_1C942F0(buttonText, method);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                              (System_Collections_Generic_List_T__o *)buttonText,
                                                              (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( System_Linq_Enumerable__Contains_Int32Enum_(
         v5,
         this->fields.filterKind,
         (const MethodInfo_31B9554 *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___)
    || (filterKind = this->fields.filterKind, filterKind == 28) )
  {
    buttonText = this->fields.buttonText;
    if ( !buttonText )
      goto LABEL_17;
    UILabel__SetCondensedScale(buttonText, 118, 0, 0);
    filterKind = this->fields.filterKind;
  }
  if ( filterKind == 71 )
  {
    buttonText = this->fields.buttonText;
    if ( buttonText )
    {
      UILabel__SetCondensedScale(buttonText, 134, 0, 0);
      return;
    }
    goto LABEL_17;
  }
}


UISprite_o *ServantFilterButtonControl__get_ButtonSprite(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  return this->fields.buttonSprite;
}


int32_t ServantFilterButtonControl__get_FilterKind(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  return this->fields.filterKind;
}


bool ServantFilterButtonControl__get_IsSelected(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  ListViewSort_o *targetSort; // x0

  targetSort = this->fields.targetSort;
  if ( targetSort )
    LOBYTE(targetSort) = ListViewSort__GetFilter(targetSort, this->fields.filterKind, 0);
  return (char)targetSort;
}


void ServantFilterButtonControl_OnClickFilterButton___ctor(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC0D70;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0D28;
}


System_IAsyncResult_o *ServantFilterButtonControl_OnClickFilterButton__BeginInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        int32_t filterKind,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = filterKind;
  if ( (byte_4D2771F & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_FilterKind_TypeInfo);
    byte_4D2771F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ListViewSort_FilterKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void ServantFilterButtonControl_OnClickFilterButton__EndInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void ServantFilterButtonControl_OnClickFilterButton__Invoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    filterKind,
    this->fields.method);
}