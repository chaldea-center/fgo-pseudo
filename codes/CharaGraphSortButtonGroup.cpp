void CharaGraphSortButtonGroup___ctor(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CharaGraphSortButtonGroup__AssertionForSerializeField(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  ;
}


void CharaGraphSortButtonGroup__Awake(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *bonusFilterKindButton; // x0

  ((void (__fastcall *)(CharaGraphSortButtonGroup_o *, const MethodInfo *))this->klass->vtable._4_AssertionForSerializeField.methodPtr)(
    this,
    this->klass->vtable._4_AssertionForSerializeField.method);
  if ( !this->fields.initialized )
  {
    bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    this->fields.initialized = 1;
    this->fields.isBonusFilterDefaultActive = CharaGraphSortButtonGroup__IsActive(bonusFilterKindButton, v3);
  }
}


void CharaGraphSortButtonGroup__ClickBonusFilterKind(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickBonusFilterKind_k__BackingField, 0);
}


void CharaGraphSortButtonGroup__ClickFilterKind(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickFilterKind_k__BackingField, 0);
}


void CharaGraphSortButtonGroup__ClickSortAscendingOrder(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickSortAscendingOrder_k__BackingField, 0);
}


void CharaGraphSortButtonGroup__ClickSortKind(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickSortKind_k__BackingField, 0);
}


void CharaGraphSortButtonGroup__Init(CharaGraphSortButtonGroup_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bonusFilterKindButton; // x0

  if ( !this->fields.initialized )
  {
    bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    this->fields.initialized = 1;
    this->fields.isBonusFilterDefaultActive = CharaGraphSortButtonGroup__IsActive(bonusFilterKindButton, method);
  }
}


bool CharaGraphSortButtonGroup__IsActive(UnityEngine_Component_o *c, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4CED9DD & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED9DD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0)) == 0 )
    sub_1C7BD40(gameObject, v4);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void CharaGraphSortButtonGroup__SetBonusFilterButton(
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
                                                               0),
          !sort)
      || !bonusFilterKindButton )
    {
      sub_1C7BD40(bonusFilterKindButton, sort);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusFilterKindButton, sort->fields.isBonusKind, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphSortButtonGroup__SetBonusFilterButtonState(
        CharaGraphSortButtonGroup_o *this,
        int32_t state,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UIWidget_o *bonusFilterKindButton; // x0
  float v9; // s0 OVERLAPPED
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
    ((void (__fastcall *)(UIWidget_o *, _QWORD, bool, const MethodInfo *))bonusFilterKindButton->klass->vtable._14_OnEnable.methodPtr)(
      bonusFilterKindButton,
      (unsigned int)state,
      immediate,
      bonusFilterKindButton->klass->vtable._14_OnEnable.method);
    bonusFilterKindButton = (UIWidget_o *)this->fields.bonusFilterKindLabel;
    v9 = 1.0;
    if ( state == 3 )
      v9 = 0.5;
    if ( !bonusFilterKindButton )
LABEL_8:
      sub_1C7BD40(bonusFilterKindButton, v7);
    v10 = 1.0;
    v11 = v9;
    v12 = v9;
    UIWidget__set_color(bonusFilterKindButton, *(UnityEngine_Color_o *)&v9, 0);
  }
}


void CharaGraphSortButtonGroup__SetFilterButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL8 IsActive; // x0
  __int64 v6; // x1
  UISprite_o *filterSprite; // x20
  System_String_o **v8; // x8

  if ( (byte_4CED9DB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17575/*"btn_filter_on"*/);
    sub_1C7BAE8(&StringLiteral_17574/*"btn_filter"*/);
    byte_4CED9DB = 1;
  }
  IsActive = CharaGraphSortButtonGroup__IsActive(
               (UnityEngine_Component_o *)this->fields.filterSprite,
               (const MethodInfo *)sort);
  if ( IsActive )
  {
    if ( !sort
      || (filterSprite = this->fields.filterSprite,
          IsActive = ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
          !filterSprite) )
    {
      sub_1C7BD40(IsActive, v6);
    }
    v8 = (System_String_o **)&StringLiteral_17574/*"btn_filter"*/;
    if ( !IsActive )
      v8 = (System_String_o **)&StringLiteral_17575/*"btn_filter_on"*/;
    UISprite__set_spriteName(filterSprite, *v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphSortButtonGroup__SetFilterButtonState(
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
      sub_1C7BD40(0, v7);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, const MethodInfo *))filterButton->klass->vtable._14_SetState.methodPtr)(
      filterButton,
      (unsigned int)state,
      isAnimation,
      filterButton->klass->vtable._14_SetState.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphSortButtonGroup__SetSortButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        ListViewSort_BonusFilterInfo_array *alignedBonusFilterInfos,
        const MethodInfo *method)
{
  System_String_o *IsActive; // x0
  const MethodInfo *v8; // x1
  UILabel_o *sortKindLabel; // x22
  int32_t sortKind; // w8
  System_String_o **v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  System_String_o **v16; // x8
  UILabel_o *bonusFilterKindLabel; // x22
  struct UICommonButton_o *bonusFilterKindButton; // x8
  float v19; // s0 OVERLAPPED
  float v20; // s3
  float v21; // s1
  float v22; // s2

  if ( (byte_4CED9DC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17611/*"btn_sort_up"*/);
    sub_1C7BAE8(&StringLiteral_17711/*"btn_txt_up"*/);
    sub_1C7BAE8(&StringLiteral_17662/*"btn_txt_new"*/);
    sub_1C7BAE8(&StringLiteral_17652/*"btn_txt_down"*/);
    sub_1C7BAE8(&StringLiteral_17669/*"btn_txt_old"*/);
    sub_1C7BAE8(&StringLiteral_17608/*"btn_sort_down"*/);
    byte_4CED9DC = 1;
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.sortKindLabel,
                                  (const MethodInfo *)sort);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_38;
    sortKindLabel = this->fields.sortKindLabel;
    IsActive = ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !sortKindLabel )
      goto LABEL_38;
    UILabel__set_text(sortKindLabel, IsActive, 0);
  }
  if ( CharaGraphSortButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.sortOrderSprite, v8) )
  {
    IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                    (UnityEngine_Component_o *)this->fields.sortExplanationSprite,
                                    v8);
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
        v11 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17669/*"btn_txt_old"*/ : &StringLiteral_17662/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v11, 0);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_38;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v13 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
        v14 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
      }
      else
      {
        IsActive = (System_String_o *)this->fields.sortExplanationSprite;
        if ( !IsActive )
          goto LABEL_38;
        v15 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17711/*"btn_txt_up"*/ : &StringLiteral_17652/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v15, 0);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_38;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v13 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
        v14 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
      }
      if ( isAscendingOrder )
        v16 = v14;
      else
        v16 = v13;
      UISprite__set_spriteName((UISprite_o *)IsActive, *v16, 0);
    }
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.bonusFilterKindLabel,
                                  v8);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_38;
    if ( sort->fields.isBonusKind )
    {
      bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
      IsActive = ListViewSort__GetBonusFilterButtonText(sort, alignedBonusFilterInfos, 0, 0);
      if ( bonusFilterKindLabel )
      {
        UILabel__set_text(bonusFilterKindLabel, IsActive, 0);
        bonusFilterKindButton = this->fields.bonusFilterKindButton;
        if ( bonusFilterKindButton )
        {
          IsActive = (System_String_o *)this->fields.bonusFilterKindLabel;
          v19 = 1.0;
          if ( bonusFilterKindButton->fields.mState == 3 )
            v19 = 0.5;
          if ( IsActive )
          {
            v20 = 1.0;
            v21 = v19;
            v22 = v19;
            UIWidget__set_color((UIWidget_o *)IsActive, *(UnityEngine_Color_o *)&v19, 0);
            return;
          }
        }
      }
LABEL_38:
      sub_1C7BD40(IsActive, v8);
    }
  }
}


System_Action_o *CharaGraphSortButtonGroup__get_OnClickBonusFilterKind(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickBonusFilterKind_k__BackingField;
}


System_Action_o *CharaGraphSortButtonGroup__get_OnClickFilterKind(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickFilterKind_k__BackingField;
}


System_Action_o *CharaGraphSortButtonGroup__get_OnClickSortAscendingOrder(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickSortAscendingOrder_k__BackingField;
}


System_Action_o *CharaGraphSortButtonGroup__get_OnClickSortKind(
        CharaGraphSortButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickSortKind_k__BackingField;
}


void CharaGraphSortButtonGroup__set_OnClickBonusFilterKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickBonusFilterKind_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickBonusFilterKind_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortButtonGroup__set_OnClickFilterKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickFilterKind_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickFilterKind_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortButtonGroup__set_OnClickSortAscendingOrder(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickSortAscendingOrder_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickSortAscendingOrder_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortButtonGroup__set_OnClickSortKind(
        CharaGraphSortButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickSortKind_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickSortKind_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}