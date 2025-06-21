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

  if ( (byte_4B1B890 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B890 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_1BCB254(gameObject, v4);
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
      sub_1BCB254(bonusFilterKindButton, sort);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusFilterKindButton, sort->fields.isBonusKind, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphSortButtonGroup__SetBonusFilterButtonState(
        CharaGraphSortButtonGroup_o *this,
        int32_t state,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UIWidget_o *bonusFilterKindButton; // x0
  float v9; // s0
  float v10; // s3
  float v11; // s1
  float v12; // s2

  if ( CharaGraphSortButtonGroup__IsActive(
         (UnityEngine_Component_o *)this->fields.bonusFilterKindButton,
         *(const MethodInfo **)&state) )
  {
    bonusFilterKindButton = (UIWidget_o *)this->fields.bonusFilterKindButton;
    if ( !bonusFilterKindButton )
      goto LABEL_8;
    ((void (__fastcall *)(UIWidget_o *, _QWORD, bool, Il2CppMethodPointer))bonusFilterKindButton->klass->vtable._14_OnEnable.method)(
      bonusFilterKindButton,
      (unsigned int)state,
      immediate,
      bonusFilterKindButton->klass->vtable._15_OnInit.methodPtr);
    bonusFilterKindButton = (UIWidget_o *)this->fields.bonusFilterKindLabel;
    v9 = 1.0;
    if ( state == 3 )
      v9 = 0.5;
    if ( !bonusFilterKindButton )
LABEL_8:
      sub_1BCB254(bonusFilterKindButton, v7);
    v10 = 1.0;
    v11 = v9;
    v12 = v9;
    UIWidget__set_color(bonusFilterKindButton, *(UnityEngine_Color_o *)&v9, 0LL);
  }
}


void __fastcall CharaGraphSortButtonGroup__SetFilterButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 IsActive; // x0
  __int64 v7; // x1
  UISprite_o *filterSprite; // x20
  System_String_o **v9; // x8

  if ( (byte_4B1B88E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17343/*"btn_filter_on"*/, sort);
    sub_1BCAFF8(&StringLiteral_17342/*"btn_filter"*/, v5);
    byte_4B1B88E = 1;
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
      sub_1BCB254(IsActive, v7);
    }
    v9 = (System_String_o **)&StringLiteral_17342/*"btn_filter"*/;
    if ( !IsActive )
      v9 = (System_String_o **)&StringLiteral_17343/*"btn_filter_on"*/;
    UISprite__set_spriteName(filterSprite, *v9, 0LL);
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
      sub_1BCB254(0LL, v7);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))filterButton->klass->vtable._14_SetState.method)(
      filterButton,
      (unsigned int)state,
      isAnimation,
      filterButton->klass->vtable._15_OnPress.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphSortButtonGroup__SetSortButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        ListViewSort_BonusFilterInfo_array *alignedBonusFilterInfos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *IsActive; // x0
  const MethodInfo *v13; // x1
  UILabel_o *sortKindLabel; // x22
  int32_t sortKind; // w8
  System_String_o **v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UILabel_o *bonusFilterKindLabel; // x22
  struct UICommonButton_o *bonusFilterKindButton; // x8
  float v24; // s0
  float v25; // s3
  float v26; // s1
  float v27; // s2

  if ( (byte_4B1B88F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17379/*"btn_sort_up"*/, sort);
    sub_1BCAFF8(&StringLiteral_17474/*"btn_txt_up"*/, v7);
    sub_1BCAFF8(&StringLiteral_17427/*"btn_txt_new"*/, v8);
    sub_1BCAFF8(&StringLiteral_17417/*"btn_txt_down"*/, v9);
    sub_1BCAFF8(&StringLiteral_17434/*"btn_txt_old"*/, v10);
    sub_1BCAFF8(&StringLiteral_17376/*"btn_sort_down"*/, v11);
    byte_4B1B88F = 1;
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.sortKindLabel,
                                  (const MethodInfo *)sort);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_38;
    sortKindLabel = this->fields.sortKindLabel;
    IsActive = ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !sortKindLabel )
      goto LABEL_38;
    UILabel__set_text(sortKindLabel, IsActive, 0LL);
  }
  if ( CharaGraphSortButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.sortOrderSprite, v13) )
  {
    IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                    (UnityEngine_Component_o *)this->fields.sortExplanationSprite,
                                    v13);
    if ( ((unsigned __int8)IsActive & 1) != 0 )
    {
      if ( !sort )
        goto LABEL_38;
      sortKind = sort->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        IsActive = (System_String_o *)this->fields.sortExplanationSprite;
        if ( !IsActive )
          goto LABEL_38;
        v16 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17434/*"btn_txt_old"*/ : &StringLiteral_17427/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v16, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_38;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v18 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
        v19 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
      }
      else
      {
        IsActive = (System_String_o *)this->fields.sortExplanationSprite;
        if ( !IsActive )
          goto LABEL_38;
        v20 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17474/*"btn_txt_up"*/ : &StringLiteral_17417/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v20, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_38;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v18 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
        v19 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
      }
      if ( isAscendingOrder )
        v21 = v19;
      else
        v21 = v18;
      UISprite__set_spriteName((UISprite_o *)IsActive, *v21, 0LL);
    }
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.bonusFilterKindLabel,
                                  v13);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_38;
    if ( sort->fields.isBonusKind )
    {
      bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
      IsActive = ListViewSort__GetBonusFilterButtonText(sort, alignedBonusFilterInfos, 0, 0LL);
      if ( bonusFilterKindLabel )
      {
        UILabel__set_text(bonusFilterKindLabel, IsActive, 0LL);
        bonusFilterKindButton = this->fields.bonusFilterKindButton;
        if ( bonusFilterKindButton )
        {
          IsActive = (System_String_o *)this->fields.bonusFilterKindLabel;
          v24 = 1.0;
          if ( bonusFilterKindButton->fields.mState == 3 )
            v24 = 0.5;
          if ( IsActive )
          {
            v25 = 1.0;
            v26 = v24;
            v27 = v24;
            UIWidget__set_color((UIWidget_o *)IsActive, *(UnityEngine_Color_o *)&v24, 0LL);
            return;
          }
        }
      }
LABEL_38:
      sub_1BCB254(IsActive, v13);
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
  const MethodInfo *v3; // x3

  this->fields._OnClickBonusFilterKind_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._OnClickBonusFilterKind_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortButtonGroup__set_OnClickFilterKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickFilterKind_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._OnClickFilterKind_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortButtonGroup__set_OnClickSortAscendingOrder(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickSortAscendingOrder_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._OnClickSortAscendingOrder_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortButtonGroup__set_OnClickSortKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickSortKind_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._OnClickSortKind_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}