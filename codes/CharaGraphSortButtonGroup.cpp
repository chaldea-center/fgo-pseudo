void __fastcall CharaGraphSortButtonGroup___ctor(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CharaGraphSortButtonGroup__AssertionForSerializeField(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphSortButtonGroup__Awake(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *bonusFilterKindButton; // x0

  ((void (__fastcall *)(CharaGraphSortButtonGroup_o *, void *))this->klass->vtable._4_AssertionForSerializeField.method)(
    this,
    this->klass[1]._1.image);
  if ( !this->fields.initialized )
  {
    bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    this->fields.initialized = 1;
    this->fields.isBonusFilterDefaultActive = CharaGraphSortButtonGroup__IsActive(bonusFilterKindButton, v3);
  }
}


void __fastcall CharaGraphSortButtonGroup__ClickBonusFilterKind(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickBonusFilterKind_k__BackingField, 0LL);
}


void __fastcall CharaGraphSortButtonGroup__ClickFilterKind(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickFilterKind_k__BackingField, 0LL);
}


void __fastcall CharaGraphSortButtonGroup__ClickSortAscendingOrder(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickSortAscendingOrder_k__BackingField, 0LL);
}


void __fastcall CharaGraphSortButtonGroup__ClickSortKind(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickSortKind_k__BackingField, 0LL);
}


void __fastcall CharaGraphSortButtonGroup__Init(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bonusFilterKindButton; // x0

  if ( !this->fields.initialized )
  {
    bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    this->fields.initialized = 1;
    this->fields.isBonusFilterDefaultActive = CharaGraphSortButtonGroup__IsActive(bonusFilterKindButton, method);
  }
}


bool __fastcall CharaGraphSortButtonGroup__IsActive(UnityEngine_Component_o *c, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42E96F6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96F6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_B5D69C(gameObject, v6);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall CharaGraphSortButtonGroup__SetBonusFilterButton(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bonusFilterKindButton; // x0

  if ( this->fields.isBonusFilterDefaultActive )
  {
    bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( !bonusFilterKindButton
      || (bonusFilterKindButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               bonusFilterKindButton,
                                                               0LL),
          !sort)
      || !bonusFilterKindButton )
    {
      sub_B5D69C(bonusFilterKindButton, sort);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusFilterKindButton, sort->fields.isBonusKind, 0LL);
  }
}


void __fastcall CharaGraphSortButtonGroup__SetFilterButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _BOOL8 IsActive; // x0
  __int64 v10; // x1
  UISprite_o *filterSprite; // x20
  System_String_o **v12; // x8

  if ( (byte_42E96F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v6, v7, v8);
    byte_42E96F4 = 1;
  }
  IsActive = CharaGraphSortButtonGroup__IsActive(
               (UnityEngine_Component_o *)this->fields.filterSprite,
               (const MethodInfo *)sort);
  if ( IsActive )
  {
    if ( !sort
      || (filterSprite = this->fields.filterSprite,
          IsActive = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
          !filterSprite) )
    {
      sub_B5D69C(IsActive, v10);
    }
    v12 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
    if ( !IsActive )
      v12 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
    UISprite__set_spriteName(filterSprite, *v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphSortButtonGroup__SetFilterButtonState(
        CharaGraphSortButtonGroup_o *this,
        int32_t state,
        bool isAnimation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct UICommonButton_o *filterButton; // x0

  if ( CharaGraphSortButtonGroup__IsActive(
         (UnityEngine_Component_o *)this->fields.filterButton,
         *(const MethodInfo **)&state) )
  {
    filterButton = this->fields.filterButton;
    if ( !filterButton )
      sub_B5D69C(0LL, v7);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))filterButton->klass->vtable._14_SetState.method)(
      filterButton,
      (unsigned int)state,
      isAnimation,
      filterButton->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall CharaGraphSortButtonGroup__SetSortButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        System_Int32_array *bonusEventIds,
        System_Int32_array *servantFilterIds,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_String_o *IsActive; // x0
  const MethodInfo *v25; // x1
  UILabel_o *sortKindLabel; // x23
  int32_t sortKind; // w8
  System_String_o **v28; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v30; // x9
  System_String_o **v31; // x10
  System_String_o **v32; // x8
  System_String_o **v33; // x8
  UILabel_o *bonusFilterKindLabel; // x22

  if ( (byte_42E96F5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, (_DWORD)sort, (_DWORD)bonusEventIds, servantFilterIds);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v21, v22, v23);
    byte_42E96F5 = 1;
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.sortKindLabel,
                                  (const MethodInfo *)sort);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_34;
    sortKindLabel = this->fields.sortKindLabel;
    IsActive = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !sortKindLabel )
      goto LABEL_34;
    UILabel__set_text(sortKindLabel, IsActive, 0LL);
  }
  if ( CharaGraphSortButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.sortOrderSprite, v25) )
  {
    IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                    (UnityEngine_Component_o *)this->fields.sortExplanationSprite,
                                    v25);
    if ( ((unsigned __int8)IsActive & 1) != 0 )
    {
      if ( !sort )
        goto LABEL_34;
      sortKind = sort->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        IsActive = (System_String_o *)this->fields.sortExplanationSprite;
        if ( !IsActive )
          goto LABEL_34;
        v28 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v28, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_34;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v30 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
        v31 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      }
      else
      {
        IsActive = (System_String_o *)this->fields.sortExplanationSprite;
        if ( !IsActive )
          goto LABEL_34;
        v32 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v32, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_34;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v30 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
        v31 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      }
      if ( isAscendingOrder )
        v33 = v30;
      else
        v33 = v31;
      UISprite__set_spriteName((UISprite_o *)IsActive, *v33, 0LL);
    }
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.bonusFilterKindLabel,
                                  v25);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_34;
    if ( sort->fields.isBonusKind )
    {
      bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
      IsActive = ListViewSort__GetBonusKind2Text_34067136(sort, bonusEventIds, servantFilterIds, 0LL, 0LL, 0LL, 0LL);
      if ( bonusFilterKindLabel )
      {
        UILabel__set_text(bonusFilterKindLabel, IsActive, 0LL);
        return;
      }
LABEL_34:
      sub_B5D69C(IsActive, v25);
    }
  }
}


System_Action_o *__fastcall CharaGraphSortButtonGroup__get_OnClickBonusFilterKind(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickBonusFilterKind_k__BackingField;
}


System_Action_o *__fastcall CharaGraphSortButtonGroup__get_OnClickFilterKind(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickFilterKind_k__BackingField;
}


System_Action_o *__fastcall CharaGraphSortButtonGroup__get_OnClickSortAscendingOrder(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickSortAscendingOrder_k__BackingField;
}


System_Action_o *__fastcall CharaGraphSortButtonGroup__get_OnClickSortKind(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickSortKind_k__BackingField;
}


void __fastcall CharaGraphSortButtonGroup__set_OnClickBonusFilterKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickBonusFilterKind_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickBonusFilterKind_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortButtonGroup__set_OnClickFilterKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickFilterKind_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickFilterKind_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortButtonGroup__set_OnClickSortAscendingOrder(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickSortAscendingOrder_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickSortAscendingOrder_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortButtonGroup__set_OnClickSortKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickSortKind_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickSortKind_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}