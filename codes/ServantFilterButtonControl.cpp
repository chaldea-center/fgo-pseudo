void __fastcall ServantFilterButtonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct ServantFilterButtonControl_StaticFields *static_fields; // x0

  if ( (byte_4B119AD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterButtonControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v5, v6);
    byte_4B119AD = 1;
  }
  ServantFilterButtonControl_TypeInfo->static_fields->SPRITE_NAME_ENABLE = (struct System_String_o *)StringLiteral_17643/*"btn_bg_03"*/;
  sub_1BCA784(ServantFilterButtonControl_TypeInfo->static_fields, StringLiteral_17643/*"btn_bg_03"*/);
  v7 = StringLiteral_17644/*"btn_bg_04"*/;
  static_fields = ServantFilterButtonControl_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_DISABLE = (struct System_String_o *)StringLiteral_17644/*"btn_bg_04"*/;
  sub_1BCA784(&static_fields->SPRITE_NAME_DISABLE, v7);
}


void __fastcall ServantFilterButtonControl___ctor(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantFilterButtonControl__Awake(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantFilterButtonControl__Init(
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
  ListViewSort_o **p_targetSort; // x25
  UILabel_o *buttonText; // x23
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, isDisplay, 0LL);
  p_targetSort = &this->fields.targetSort;
  if ( isDisplay )
  {
    *p_targetSort = targetSort;
    sub_1BCA784(&this->fields.targetSort, targetSort);
    if ( !*p_targetSort )
    {
LABEL_6:
      this->fields.onClickFilterEvent = onClickFilter;
      sub_1BCA784(&this->fields.onClickFilterEvent, onClickFilter);
      ServantFilterButtonControl__RefreshButtonSelectState(this, v19);
      return;
    }
    buttonText = this->fields.buttonText;
    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetFilterKindText(
                                               *p_targetSort,
                                               this->fields.filterKind,
                                               0LL);
    if ( buttonText )
    {
      UILabel__set_text(buttonText, (System_String_o *)gameObject, 0LL);
      ServantFilterButtonControl__OverwriteButtonText(this, isSummon, isClassOthers, v17);
      ServantFilterButtonControl__SetCondensedScaleButtons(this, v18);
      goto LABEL_6;
    }
LABEL_8:
    sub_1BCAA3C(gameObject, v14);
  }
  this->fields.targetSort = 0LL;
  sub_1BCA784(&this->fields.targetSort, 0LL);
  this->fields.onClickFilterEvent = 0LL;
  sub_1BCA784(&this->fields.onClickFilterEvent, 0LL);
}


void __fastcall ServantFilterButtonControl__OnClickEvent(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  struct ServantFilterButtonControl_OnClickFilterButton_o *onClickFilterEvent; // x8

  onClickFilterEvent = this->fields.onClickFilterEvent;
  if ( onClickFilterEvent )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickFilterEvent->fields.m_target)(
      onClickFilterEvent->fields.original_method_info,
      (unsigned int)this->fields.filterKind,
      *(_QWORD *)&onClickFilterEvent->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl__OverwriteButtonText(
        ServantFilterButtonControl_o *this,
        bool isSummon,
        bool isClassOthers,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t filterKind; // w8
  UILabel_o *buttonText; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *v17; // x21
  UILabel_o *v18; // x19

  if ( (byte_4B119AA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isSummon, isClassOthers);
    sub_1BCA7E0(&StringLiteral_11894/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11883/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11895/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/, v11, v12);
    byte_4B119AA = 1;
  }
  if ( isSummon )
  {
    filterKind = this->fields.filterKind;
    if ( filterKind == 11 )
    {
      buttonText = this->fields.buttonText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isSummon);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/, 0LL);
      if ( !buttonText )
        goto LABEL_21;
      UILabel__set_text(buttonText, v15, 0LL);
      filterKind = this->fields.filterKind;
    }
    if ( filterKind == 12 )
    {
      v17 = this->fields.buttonText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isSummon);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/, 0LL);
      if ( !v17 )
        goto LABEL_21;
      UILabel__set_text(v17, v15, 0LL);
    }
  }
  if ( isClassOthers && this->fields.filterKind == 64 )
  {
    v18 = this->fields.buttonText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isSummon);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/, 0LL);
    if ( v18 )
    {
      UILabel__set_text(v18, v15, 0LL);
      return;
    }
LABEL_21:
    sub_1BCAA3C(v15, v16);
  }
}


void __fastcall ServantFilterButtonControl__RefreshButtonSelectState(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewSort_o *targetSort; // x0
  struct UISprite_o *buttonSprite; // x20
  UISprite_o *v6; // x22
  int v7; // w19
  ServantFilterButtonControl_c *v8; // x0
  UISprite_o *v9; // x8
  System_String_o **p_SPRITE_NAME_ENABLE; // x9

  if ( (byte_4B119AB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterButtonControl_TypeInfo, method, v2);
    byte_4B119AB = 1;
  }
  targetSort = this->fields.targetSort;
  buttonSprite = this->fields.buttonSprite;
  if ( targetSort && ListViewSort__GetFilter(targetSort, this->fields.filterKind, 0LL) )
  {
    v6 = 0LL;
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v6 = buttonSprite;
    buttonSprite = 0LL;
  }
  v8 = ServantFilterButtonControl_TypeInfo;
  if ( !ServantFilterButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterButtonControl_TypeInfo, method);
    v8 = ServantFilterButtonControl_TypeInfo;
  }
  if ( v7 )
    v9 = buttonSprite;
  else
    v9 = v6;
  if ( !v9 )
    sub_1BCAA3C(v8, method);
  p_SPRITE_NAME_ENABLE = &v8->static_fields->SPRITE_NAME_ENABLE;
  if ( !v7 )
    ++p_SPRITE_NAME_ENABLE;
  UISprite__set_spriteName(v9, *p_SPRITE_NAME_ENABLE, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl__SetButtonEnable(
        ServantFilterButtonControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *button; // x0

  button = (UnityEngine_Behaviour_o *)this->fields.button;
  if ( !button )
    sub_1BCAA3C(0LL, isEnable);
  UnityEngine_Behaviour__set_enabled(button, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl__SetButtonMask(
        ServantFilterButtonControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *button; // x0
  char v6; // w20
  float v7; // s2
  float v8; // s3
  float v9; // s0
  float v10; // s1
  unsigned __int128 v11; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B119AC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_434/*"#303030"*/, isActive, method);
    byte_4B119AC = 1;
  }
  v11 = 0uLL;
  button = (UnityEngine_Behaviour_o *)this->fields.button;
  if ( !button )
    goto LABEL_12;
  v6 = ~isActive;
  UnityEngine_Behaviour__set_enabled(button, v6 & 1, 0LL);
  if ( (v6 & 1) != 0 )
  {
    button = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
    if ( button )
    {
      v9 = 1.0;
      v10 = 1.0;
      v7 = 1.0;
      v8 = 1.0;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(button, isActive);
  }
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_434/*"#303030"*/,
          (UnityEngine_Color_o *)&v11,
          0LL) )
    v11 = xmmword_BD2310;
  button = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !button )
    goto LABEL_12;
  v8 = *((float *)&v11 + 3);
  v7 = *((float *)&v11 + 2);
  v10 = *((float *)&v11 + 1);
  v9 = *(float *)&v11;
LABEL_11:
  UIWidget__set_color((UIWidget_o *)button, *(UnityEngine_Color_o *)&v9, 0LL);
}


void __fastcall ServantFilterButtonControl__SetCondensedScaleButtons(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *buttonText; // x0
  FilterKindList_c *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  int32_t filterKind; // w8

  if ( (byte_4B119A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___, method, v2);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7);
    byte_4B119A9 = 1;
  }
  if ( this->fields.filterKind == 56 )
  {
    buttonText = this->fields.buttonText;
    if ( !buttonText )
      goto LABEL_17;
    UILabel__SetCondensedScale(buttonText, 132, 0LL);
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v9 = FilterKindList_TypeInfo;
  }
  buttonText = (UILabel_o *)v9->static_fields->ClassFilterKindList;
  if ( !buttonText )
LABEL_17:
    sub_1BCAA3C(buttonText, method);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                               (System_Collections_Generic_List_T__o *)buttonText,
                                                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( System_Linq_Enumerable__Contains_Int32Enum_(
         v10,
         this->fields.filterKind,
         (const MethodInfo_2F2B078 *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___)
    || (filterKind = this->fields.filterKind, filterKind == 28) )
  {
    buttonText = this->fields.buttonText;
    if ( !buttonText )
      goto LABEL_17;
    UILabel__SetCondensedScale(buttonText, 118, 0LL);
    filterKind = this->fields.filterKind;
  }
  if ( filterKind == 71 )
  {
    buttonText = this->fields.buttonText;
    if ( buttonText )
    {
      UILabel__SetCondensedScale(buttonText, 134, 0LL);
      return;
    }
    goto LABEL_17;
  }
}


UISprite_o *__fastcall ServantFilterButtonControl__get_ButtonSprite(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  return this->fields.buttonSprite;
}


int32_t __fastcall ServantFilterButtonControl__get_FilterKind(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  return this->fields.filterKind;
}


bool __fastcall ServantFilterButtonControl__get_IsSelected(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *targetSort; // x0

  targetSort = this->fields.targetSort;
  if ( targetSort )
    LOBYTE(targetSort) = ListViewSort__GetFilter(targetSort, this->fields.filterKind, 0LL);
  return (char)targetSort;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl_OnClickFilterButton___ctor(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A06490;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06448;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantFilterButtonControl_OnClickFilterButton__BeginInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        int32_t filterKind,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = filterKind;
  if ( (byte_4B119AE & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterKind_TypeInfo, *(_QWORD *)&filterKind, callback);
    byte_4B119AE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ListViewSort_FilterKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantFilterButtonControl_OnClickFilterButton__EndInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantFilterButtonControl_OnClickFilterButton__Invoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    filterKind,
    *(_QWORD *)&this->fields.extra_arg);
}