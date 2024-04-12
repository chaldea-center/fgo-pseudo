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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42AFDE9 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFDE9 = 1;
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
    sub_B52A5C(gameObject, v4);
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
      sub_B52A5C(bonusFilterKindButton, sort);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusFilterKindButton, sort->fields.isBonusKind, 0LL);
  }
}


void __fastcall CharaGraphSortButtonGroup__SetFilterButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL8 IsActive; // x0
  __int64 v6; // x1
  UISprite_o *filterSprite; // x20
  System_String_o **v8; // x8

  if ( (byte_42AFDE7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42AFDE7 = 1;
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
      sub_B52A5C(IsActive, v6);
    }
    v8 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
    if ( !IsActive )
      v8 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
    UISprite__set_spriteName(filterSprite, *v8, 0LL);
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
      sub_B52A5C(0LL, v7);
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
  System_String_o *IsActive; // x0
  const MethodInfo *v10; // x1
  UILabel_o *sortKindLabel; // x23
  int32_t sortKind; // w8
  System_String_o **v13; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UILabel_o *bonusFilterKindLabel; // x22

  if ( (byte_42AFDE8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17139/*"btn_sort_up"*/);
    sub_B52984(&StringLiteral_17223/*"btn_txt_up"*/);
    sub_B52984(&StringLiteral_17179/*"btn_txt_new"*/);
    sub_B52984(&StringLiteral_17169/*"btn_txt_down"*/);
    sub_B52984(&StringLiteral_17186/*"btn_txt_old"*/);
    sub_B52984(&StringLiteral_17136/*"btn_sort_down"*/);
    byte_42AFDE8 = 1;
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
  if ( CharaGraphSortButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.sortOrderSprite, v10) )
  {
    IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                    (UnityEngine_Component_o *)this->fields.sortExplanationSprite,
                                    v10);
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
        v13 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17186/*"btn_txt_old"*/ : &StringLiteral_17179/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v13, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_34;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v15 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
        v16 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
      }
      else
      {
        IsActive = (System_String_o *)this->fields.sortExplanationSprite;
        if ( !IsActive )
          goto LABEL_34;
        v17 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17223/*"btn_txt_up"*/ : &StringLiteral_17169/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v17, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_34;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v15 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
        v16 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
      }
      if ( isAscendingOrder )
        v18 = v15;
      else
        v18 = v16;
      UISprite__set_spriteName((UISprite_o *)IsActive, *v18, 0LL);
    }
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.bonusFilterKindLabel,
                                  v10);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_34;
    if ( sort->fields.isBonusKind )
    {
      bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
      IsActive = ListViewSort__GetBonusKind2Text_34037412(sort, bonusEventIds, servantFilterIds, 0LL, 0LL, 0LL, 0LL);
      if ( bonusFilterKindLabel )
      {
        UILabel__set_text(bonusFilterKindLabel, IsActive, 0LL);
        return;
      }
LABEL_34:
      sub_B52A5C(IsActive, v10);
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._OnClickSortKind_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}