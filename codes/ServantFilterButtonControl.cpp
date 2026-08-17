void ServantFilterButtonControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ServantFilterButtonControl_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596B1FA & 1) == 0 )
  {
    sub_2213A60(&ServantFilterButtonControl_TypeInfo);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596B1FA = 1;
  }
  v7 = StringLiteral_18200/*"btn_bg_03"*/;
  ServantFilterButtonControl_TypeInfo->static_fields->SPRITE_NAME_ENABLE = (struct System_String_o *)StringLiteral_18200/*"btn_bg_03"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantFilterButtonControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18201/*"btn_bg_04"*/;
  static_fields = ServantFilterButtonControl_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_DISABLE = (struct System_String_o *)StringLiteral_18201/*"btn_bg_04"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SPRITE_NAME_DISABLE, v8, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ListViewSort_o *v27; // x0
  UILabel_o *buttonText; // x23
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, isDisplay, 0);
  if ( isDisplay )
  {
    this->fields.targetSort = targetSort;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetSort,
      (int32_t)targetSort,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v27 = this->fields.targetSort;
    if ( !v27 )
    {
LABEL_6:
      this->fields.onClickFilterEvent = onClickFilter;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.onClickFilterEvent,
        (int32_t)onClickFilter,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      ServantFilterButtonControl__RefreshButtonSelectState(this, v31);
      return;
    }
    buttonText = this->fields.buttonText;
    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetFilterKindText(v27, this->fields.filterKind, 0);
    if ( buttonText )
    {
      UILabel__set_text(buttonText, (System_String_o *)gameObject, 0);
      ServantFilterButtonControl__OverwriteButtonText(this, isSummon, isClassOthers, v29);
      ServantFilterButtonControl__SetCondensedScaleButtons(this, v30);
      goto LABEL_6;
    }
LABEL_8:
    sub_2213CDC(gameObject, v14);
  }
  this->fields.targetSort = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetSort, 0, v15, v16, v17, v18, v19, v20);
  this->fields.onClickFilterEvent = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClickFilterEvent, 0, v32, v33, v34, v35, v36, v37);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596B1F7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12302/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/);
    sub_2213A60(&StringLiteral_12291/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/);
    sub_2213A60(&StringLiteral_12303/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/);
    byte_596B1F7 = 1;
  }
  if ( isSummon )
  {
    filterKind = this->fields.filterKind;
    if ( filterKind == 11 )
    {
      buttonText = this->fields.buttonText;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isSummon, isClassOthers);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/, 0);
      if ( !buttonText )
        goto LABEL_21;
      UILabel__set_text(buttonText, v9, 0);
      filterKind = this->fields.filterKind;
    }
    if ( filterKind == 12 )
    {
      v11 = this->fields.buttonText;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isSummon, isClassOthers);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12303/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/, 0);
      if ( !v11 )
        goto LABEL_21;
      UILabel__set_text(v11, v9, 0);
    }
  }
  if ( isClassOthers && this->fields.filterKind == 64 )
  {
    v12 = this->fields.buttonText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isSummon, isClassOthers);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12291/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/, 0);
    if ( v12 )
    {
      UILabel__set_text(v12, v9, 0);
      return;
    }
LABEL_21:
    sub_2213CDC(v9, v10);
  }
}


void ServantFilterButtonControl__RefreshButtonSelectState(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewSort_o *targetSort; // x0
  UISprite_o *buttonSprite; // x19
  ServantFilterButtonControl_c *v6; // x0
  System_String_o **p_SPRITE_NAME_ENABLE; // x8

  if ( (byte_596B1F8 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterButtonControl_TypeInfo);
    byte_596B1F8 = 1;
  }
  targetSort = this->fields.targetSort;
  buttonSprite = this->fields.buttonSprite;
  if ( targetSort && ListViewSort__GetFilter(targetSort, this->fields.filterKind, 0) )
  {
    v6 = ServantFilterButtonControl_TypeInfo;
    if ( !*(&ServantFilterButtonControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterButtonControl_TypeInfo, method, v2);
      v6 = ServantFilterButtonControl_TypeInfo;
    }
    p_SPRITE_NAME_ENABLE = &v6->static_fields->SPRITE_NAME_ENABLE;
  }
  else
  {
    v6 = ServantFilterButtonControl_TypeInfo;
    if ( !*(&ServantFilterButtonControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterButtonControl_TypeInfo, method, v2);
      v6 = ServantFilterButtonControl_TypeInfo;
    }
    p_SPRITE_NAME_ENABLE = &v6->static_fields->SPRITE_NAME_DISABLE;
  }
  if ( !buttonSprite )
    sub_2213CDC(v6, method);
  UISprite__set_spriteName(buttonSprite, *p_SPRITE_NAME_ENABLE, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterButtonControl__SetButtonEnable(
        ServantFilterButtonControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *button; // x0

  button = (UnityEngine_Behaviour_o *)this->fields.button;
  if ( !button )
    sub_2213CDC(0, isEnable);
  UnityEngine_Behaviour__set_enabled(button, isEnable, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterButtonControl__SetButtonMask(
        ServantFilterButtonControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *button; // x0
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B1F9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_432/*"#303030"*/);
    byte_596B1F9 = 1;
  }
  button = (UnityEngine_Behaviour_o *)this->fields.button;
  v6 = (UnityEngine_Color_o)0LL;
  if ( !button )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled(button, !isActive, 0);
  if ( isActive )
  {
    if ( !UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_432/*"#303030"*/, &v6, 0) )
      v6 = (UnityEngine_Color_o)xmmword_E9D170;
    button = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
    if ( button )
    {
      UIWidget__set_color((UIWidget_o *)button, v6, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(button, isActive);
  }
  button = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !button )
    goto LABEL_11;
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)button, v7, 0);
}


void ServantFilterButtonControl__SetCondensedScaleButtons(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *buttonText; // x0
  FilterKindList_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  int32_t filterKind; // w8

  if ( (byte_596B1F6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___);
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B1F6 = 1;
  }
  if ( this->fields.filterKind == 56 )
  {
    buttonText = this->fields.buttonText;
    if ( !buttonText )
      goto LABEL_17;
    UILabel__SetCondensedScale(buttonText, 132, 0, 0);
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  buttonText = (UILabel_o *)v5->static_fields->ClassFilterKindList;
  if ( !buttonText )
LABEL_17:
    sub_2213CDC(buttonText, method);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                              (System_Collections_Generic_List_T__o *)buttonText,
                                                              (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( System_Linq_Enumerable__Contains_Int32Enum_(
         v6,
         this->fields.filterKind,
         (const MethodInfo_3876740 *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___)
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2001638;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20015F0;
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
  if ( (byte_596B1FB & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_FilterKind_TypeInfo);
    byte_596B1FB = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ListViewSort_FilterKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ServantFilterButtonControl_OnClickFilterButton__EndInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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