void __fastcall ServantFilterButtonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct ServantFilterButtonControl_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42168CC & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterButtonControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v8);
    sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v9);
    byte_42168CC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantFilterButtonControl_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_17007/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17007/*"btn_bg_03"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = ServantFilterButtonControl_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17008/*"btn_bg_04"*/;
  v12->SPRITE_NAME_DISABLE = (struct System_String_o *)StringLiteral_17008/*"btn_bg_04"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->SPRITE_NAME_DISABLE, v13, v14, v15, v16, v17, v18, v19);
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
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ListViewSort_o **p_onClickFilterEvent; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UILabel_o *v25; // x22
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, isDisplay, 0LL);
  p_onClickFilterEvent = (ListViewSort_o **)&this->fields.onClickFilterEvent;
  if ( isDisplay )
  {
    *p_onClickFilterEvent = targetSort;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onClickFilterEvent,
      (System_Int32_array **)targetSort,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !*p_onClickFilterEvent )
    {
LABEL_6:
      this[1].klass = (ServantFilterButtonControl_c *)onClickFilter;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this[1],
        (System_Int32_array **)onClickFilter,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      ServantFilterButtonControl__RefreshButtonSelectState(this, v28);
      return;
    }
    v25 = (UILabel_o *)this->fields.targetSort;
    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetFilterKindText(
                                               *p_onClickFilterEvent,
                                               (int32_t)this->fields.button,
                                               0LL);
    if ( v25 )
    {
      UILabel__set_text(v25, (System_String_o *)gameObject, 0LL);
      ServantFilterButtonControl__SetCondensedScaleButtons(this, v26);
      ServantFilterButtonControl__OverwriteButtonText(this, isSummon, v27);
      goto LABEL_6;
    }
LABEL_8:
    sub_B0D97C(gameObject);
  }
  this->fields.onClickFilterEvent = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onClickFilterEvent, 0LL, v12, v13, v14, v15, v16, v17);
  this[1].klass = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], 0LL, v29, v30, v31, v32, v33, v34);
}


void __fastcall ServantFilterButtonControl__OnClickEvent(ServantFilterButtonControl_o *this, const MethodInfo *method)
{
  ServantFilterButtonControl_OnClickFilterButton_o *klass; // x0

  klass = (ServantFilterButtonControl_OnClickFilterButton_o *)this[1].klass;
  if ( klass )
    ServantFilterButtonControl_OnClickFilterButton__Invoke(klass, (int32_t)this->fields.button, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl__OverwriteButtonText(
        ServantFilterButtonControl_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int button; // w8
  UILabel_o *targetSort; // x20
  System_String_o *v9; // x0
  UILabel_o *v10; // x19

  if ( (byte_42168C9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, isSummon);
    sub_B0D8A4(&StringLiteral_11897/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/, v5);
    sub_B0D8A4(&StringLiteral_11898/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/, v6);
    byte_42168C9 = 1;
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
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11897/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_FIND"*/, 0LL);
      if ( !targetSort )
        goto LABEL_17;
      UILabel__set_text(targetSort, v9, 0LL);
      button = (int)this->fields.button;
    }
    if ( button == 12 )
    {
      v10 = (UILabel_o *)this->fields.targetSort;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_SORT_FILTER_KIND_COLLECTION_SUMMON_GET"*/, 0LL);
      if ( v10 )
      {
        UILabel__set_text(v10, v9, 0LL);
        return;
      }
LABEL_17:
      sub_B0D97C(v9);
    }
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

  if ( (byte_42168CA & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterButtonControl_TypeInfo, method);
    byte_42168CA = 1;
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
      sub_B0D97C(v5);
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
    sub_B0D97C(0LL);
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

  if ( (byte_42168CB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_355/*"#303030"*/, isActive);
    byte_42168CB = 1;
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
    sub_B0D97C(buttonSprite);
  }
  if ( !UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_355/*"#303030"*/, &gray, 0LL) )
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
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *targetSort; // x0
  FilterKindList_c *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  int button; // w8

  if ( (byte_42168C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___, method);
    sub_B0D8A4(&FilterKindList_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v4);
    byte_42168C8 = 1;
  }
  if ( LODWORD(this->fields.button) == 56 )
  {
    targetSort = (UILabel_o *)this->fields.targetSort;
    if ( !targetSort )
      goto LABEL_18;
    UILabel__SetCondensedScale(targetSort, 132, 0LL);
  }
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  targetSort = (UILabel_o *)v6->static_fields->ClassFilterKindList;
  if ( !targetSort )
LABEL_18:
    sub_B0D97C(targetSort);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                              (System_Collections_Generic_List_Voice_BATTLE__o *)targetSort,
                                                              (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( System_Linq_Enumerable__Contains_ListViewSort_FilterKind_(
         v7,
         (int32_t)this->fields.button,
         (const MethodInfo_1B452E4 *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterKind___)
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_421222D & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_FilterKind_TypeInfo, *(_QWORD *)&filterKind);
    byte_421222D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ListViewSort_FilterKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ServantFilterButtonControl_OnClickFilterButton__EndInvoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterButtonControl_OnClickFilterButton__Invoke(
        ServantFilterButtonControl_OnClickFilterButton_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  ServantFilterButtonControl_OnClickFilterButton_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ServantFilterButtonControl_OnClickFilterButton_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  unsigned int v25; // w23
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  unsigned int v31; // [xsp+4h] [xbp-4Ch] BYREF
  ServantFilterButtonControl_OnClickFilterButton_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v31 = filterKind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v32;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (ServantFilterButtonControl_OnClickFilterButton_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&filterKind, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v31, v21);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v20 )
    {
      v22(&v31 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        v25 = v31;
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v27, v28);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, v25, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v31;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v31,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v31, v21);
    goto LABEL_38;
  }
}