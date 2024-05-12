void __fastcall ServantFilterButtonControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ServantFilterButtonControl_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438D4A7 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterButtonControl_TypeInfo);
    sub_B775C4(&StringLiteral_17296/*"btn_bg_04"*/);
    sub_B775C4(&StringLiteral_17295/*"btn_bg_03"*/);
    byte_438D4A7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantFilterButtonControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17295/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17295/*"btn_bg_03"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantFilterButtonControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17296/*"btn_bg_04"*/;
  v9->SPRITE_NAME_DISABLE = (struct System_String_o *)StringLiteral_17296/*"btn_bg_04"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->SPRITE_NAME_DISABLE, v10, v11, v12, v13, v14, v15, v16);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ListViewSort_o **p_onClickFilterEvent; // x25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UILabel_o *v28; // x23
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, isDisplay, 0LL);
  p_onClickFilterEvent = (ListViewSort_o **)&this->fields.onClickFilterEvent;
  if ( isDisplay )
  {
    *p_onClickFilterEvent = targetSort;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onClickFilterEvent,
      (System_Int32_array **)targetSort,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( !*p_onClickFilterEvent )
    {
LABEL_6:
      this[1].klass = (ServantFilterButtonControl_c *)onClickFilter;
      sub_B77560(
        (BattleServantConfConponent_o *)&this[1],
        (System_Int32_array **)onClickFilter,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      ServantFilterButtonControl__RefreshButtonSelectState(this, v31);
      return;
    }
    v28 = (UILabel_o *)this->fields.targetSort;
    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetFilterKindText(
                                               *p_onClickFilterEvent,
                                               (int32_t)this->fields.button,
                                               0LL);
    if ( v28 )
    {
      UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
      ServantFilterButtonControl__OverwriteButtonText(this, isSummon, isClassOthers, v29);
      ServantFilterButtonControl__SetCondensedScaleButtons(this, v30);
      goto LABEL_6;
    }
LABEL_8:
    sub_B7769C(gameObject, v14);
  }
  this->fields.onClickFilterEvent = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.onClickFilterEvent, 0LL, v15, v16, v17, v18, v19, v20);
  this[1].klass = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this[1], 0LL, v32, v33, v34, v35, v36, v37);
}


void __fastcall ServantFilterButtonControl__OnClickEvent(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  ServantFilterButtonControl_OnClickFilterButton_o *klass; // x0

  klass = (ServantFilterButtonControl_OnClickFilterButton_o *)this[1].klass;
  if ( klass )
    ServantFilterButtonControl_OnClickFilterButton__Invoke(klass, (int32_t)this->fields.button, 0LL);
}


void __fastcall ServantFilterButtonControl__OverwriteButtonText(
        ServantFilterButtonControl_o *this,
        bool isSummon,
        bool isClassOthers,
        const MethodInfo *method)
{
  int button; // w8
  UILabel_o *targetSort; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *v11; // x21
  UILabel_o *v12; // x19

  if ( (byte_438D4A4 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12094/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/);
    sub_B775C4(&StringLiteral_12083/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/);
    sub_B775C4(&StringLiteral_12095/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/);
    byte_438D4A4 = 1;
  }
  if ( isSummon )
  {
    button = (int)this->fields.button;
    if ( button == 11 )
    {
      targetSort = (UILabel_o *)this->fields.targetSort;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/, 0LL);
      if ( !targetSort )
        goto LABEL_24;
      UILabel__set_text(targetSort, v9, 0LL);
      button = (int)this->fields.button;
    }
    if ( button == 12 )
    {
      v11 = (UILabel_o *)this->fields.targetSort;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12095/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/, 0LL);
      if ( !v11 )
        goto LABEL_24;
      UILabel__set_text(v11, v9, 0LL);
    }
  }
  if ( isClassOthers && LODWORD(this->fields.button) == 64 )
  {
    v12 = (UILabel_o *)this->fields.targetSort;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SERVANT_SORT_FILTER_KIND_CLASS_33_OTHERS"*/, 0LL);
    if ( v12 )
    {
      UILabel__set_text(v12, v9, 0LL);
      return;
    }
LABEL_24:
    sub_B7769C(v9, v10);
  }
}


void __fastcall ServantFilterButtonControl__RefreshButtonSelectState(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  struct ServantFilterButtonControl_OnClickFilterButton_o *onClickFilterEvent; // x0
  struct UILabel_o *buttonText; // x19
  ServantFilterButtonControl_c *v5; // x0
  System_String_o **p_SPRITE_NAME_ENABLE; // x8

  if ( (byte_438D4A5 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterButtonControl_TypeInfo);
    byte_438D4A5 = 1;
  }
  onClickFilterEvent = this->fields.onClickFilterEvent;
  buttonText = this->fields.buttonText;
  if ( onClickFilterEvent
    && ListViewSort__GetFilter((ListViewSort_o *)onClickFilterEvent, (int32_t)this->fields.button, 0LL) )
  {
    v5 = ServantFilterButtonControl_TypeInfo;
    if ( (BYTE3(ServantFilterButtonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantFilterButtonControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterButtonControl_TypeInfo);
      v5 = ServantFilterButtonControl_TypeInfo;
    }
    p_SPRITE_NAME_ENABLE = &v5->static_fields->SPRITE_NAME_ENABLE;
    if ( !buttonText )
      goto LABEL_15;
  }
  else
  {
    v5 = ServantFilterButtonControl_TypeInfo;
    if ( (BYTE3(ServantFilterButtonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantFilterButtonControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterButtonControl_TypeInfo);
      v5 = ServantFilterButtonControl_TypeInfo;
    }
    p_SPRITE_NAME_ENABLE = &v5->static_fields->SPRITE_NAME_DISABLE;
    if ( !buttonText )
LABEL_15:
      sub_B7769C(v5, method);
  }
  UISprite__set_spriteName((UISprite_o *)buttonText, *p_SPRITE_NAME_ENABLE, 0LL);
}


void __fastcall ServantFilterButtonControl__SetButtonEnable(
        ServantFilterButtonControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *buttonSprite; // x0

  buttonSprite = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !buttonSprite )
    sub_B7769C(0LL, isEnable);
  UnityEngine_Behaviour__set_enabled(buttonSprite, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl__SetButtonMask(
        ServantFilterButtonControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *buttonSprite; // x0
  char v6; // w20
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  struct UILabel_o *buttonText; // x19
  UnityEngine_Color_o gray; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_438D4A6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_360/*"#303030"*/);
    byte_438D4A6 = 1;
  }
  *(_QWORD *)&gray.fields.r = 0LL;
  *(_QWORD *)&gray.fields.b = 0LL;
  buttonSprite = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !buttonSprite )
    goto LABEL_12;
  v6 = ~isActive;
  UnityEngine_Behaviour__set_enabled(buttonSprite, v6 & 1, 0LL);
  if ( (v6 & 1) != 0 )
  {
    buttonText = this->fields.buttonText;
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
    if ( buttonText )
    {
      buttonSprite = (UnityEngine_Behaviour_o *)buttonText;
      goto LABEL_11;
    }
LABEL_12:
    sub_B7769C(buttonSprite, isActive);
  }
  if ( !UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_360/*"#303030"*/, &gray, 0LL) )
    gray = UnityEngine_Color__get_gray(0LL);
  buttonSprite = (UnityEngine_Behaviour_o *)this->fields.buttonText;
  if ( !buttonSprite )
    goto LABEL_12;
  b = gray.fields.b;
  a = gray.fields.a;
  g = gray.fields.g;
  r = gray.fields.r;
LABEL_11:
  UIWidget__set_color((UIWidget_o *)buttonSprite, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall ServantFilterButtonControl__SetCondensedScaleButtons(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *targetSort; // x0
  FilterKindList_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  int button; // w8

  if ( (byte_438D4A3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___);
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438D4A3 = 1;
  }
  if ( LODWORD(this->fields.button) == 56 )
  {
    targetSort = (UILabel_o *)this->fields.targetSort;
    if ( !targetSort )
      goto LABEL_18;
    UILabel__SetCondensedScale(targetSort, 132, 0LL);
  }
  v4 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  targetSort = (UILabel_o *)v4->static_fields->ClassFilterKindList;
  if ( !targetSort )
LABEL_18:
    sub_B7769C(targetSort, method);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                              (System_Collections_Generic_List_Voice_BATTLE__o *)targetSort,
                                                              (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( System_Linq_Enumerable__Contains_ListViewSort_FilterKind_(
         v5,
         (int32_t)this->fields.button,
         (const MethodInfo_1D2A71C *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___)
    || (button = (int)this->fields.button, button == 28) )
  {
    targetSort = (UILabel_o *)this->fields.targetSort;
    if ( !targetSort )
      goto LABEL_18;
    UILabel__SetCondensedScale(targetSort, 118, 0LL);
    button = (int)this->fields.button;
  }
  if ( button == 71 )
  {
    targetSort = (UILabel_o *)this->fields.targetSort;
    if ( targetSort )
    {
      UILabel__SetCondensedScale(targetSort, 134, 0LL);
      return;
    }
    goto LABEL_18;
  }
}


UISprite_o *__fastcall ServantFilterButtonControl__get_ButtonSprite(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  return (UISprite_o *)this->fields.buttonText;
}


int32_t __fastcall ServantFilterButtonControl__get_FilterKind(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  return (int32_t)this->fields.button;
}


bool __fastcall ServantFilterButtonControl__get_IsSelected(
        ServantFilterButtonControl_o *this,
        const MethodInfo *method)
{
  struct ServantFilterButtonControl_OnClickFilterButton_o *onClickFilterEvent; // x0

  onClickFilterEvent = this->fields.onClickFilterEvent;
  if ( onClickFilterEvent )
    LOBYTE(onClickFilterEvent) = ListViewSort__GetFilter(
                                   (ListViewSort_o *)onClickFilterEvent,
                                   (int32_t)this->fields.button,
                                   0LL);
  return (char)onClickFilterEvent;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl_OnClickFilterButton___ctor(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall ServantFilterButtonControl_OnClickFilterButton__BeginInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        int32_t filterKind,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = filterKind;
  if ( (byte_4388818 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_FilterKind_TypeInfo);
    byte_4388818 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ListViewSort_FilterKind_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall ServantFilterButtonControl_OnClickFilterButton__EndInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl_OnClickFilterButton__Invoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  ServantFilterButtonControl_OnClickFilterButton_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  ServantFilterButtonControl_OnClickFilterButton_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  ServantFilterButtonControl_OnClickFilterButton_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = filterKind;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (ServantFilterButtonControl_OnClickFilterButton_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&filterKind);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}