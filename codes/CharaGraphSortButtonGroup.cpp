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
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B155DC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B155DC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_1BCAA3C(gameObject, v5);
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
      sub_1BCAA3C(bonusFilterKindButton, sort);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusFilterKindButton, sort->fields.isBonusKind, 0LL);
  }
}


void __fastcall CharaGraphSortButtonGroup__SetFilterButtonImage(
        CharaGraphSortButtonGroup_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 IsActive; // x0
  __int64 v8; // x1
  UISprite_o *filterSprite; // x20
  System_String_o **v10; // x8

  if ( (byte_4B155DA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, sort, method);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v5, v6);
    byte_4B155DA = 1;
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
      sub_1BCAA3C(IsActive, v8);
    }
    v10 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
    if ( !IsActive )
      v10 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
    UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
      sub_1BCAA3C(0LL, v7);
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
        ListViewSort_BonusFilterInfo_array *alignedBonusFilterInfos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *IsActive; // x0
  const MethodInfo *v18; // x1
  UILabel_o *sortKindLabel; // x22
  int32_t sortKind; // w8
  System_String_o **v21; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v23; // x9
  System_String_o **v24; // x10
  System_String_o **v25; // x8
  System_String_o **v26; // x8
  UILabel_o *bonusFilterKindLabel; // x21

  if ( (byte_4B155DB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, sort, alignedBonusFilterInfos);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v15, v16);
    byte_4B155DB = 1;
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.sortKindLabel,
                                  (const MethodInfo *)sort);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_34;
    sortKindLabel = this->fields.sortKindLabel;
    IsActive = ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !sortKindLabel )
      goto LABEL_34;
    UILabel__set_text(sortKindLabel, IsActive, 0LL);
  }
  if ( CharaGraphSortButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.sortOrderSprite, v18) )
  {
    IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                    (UnityEngine_Component_o *)this->fields.sortExplanationSprite,
                                    v18);
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
        v21 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v21, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_34;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v23 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
        v24 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      }
      else
      {
        IsActive = (System_String_o *)this->fields.sortExplanationSprite;
        if ( !IsActive )
          goto LABEL_34;
        v25 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)IsActive, *v25, 0LL);
        IsActive = (System_String_o *)this->fields.sortOrderSprite;
        if ( !IsActive )
          goto LABEL_34;
        isAscendingOrder = sort->fields.isAscendingOrder;
        v23 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
        v24 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      }
      if ( isAscendingOrder )
        v26 = v24;
      else
        v26 = v23;
      UISprite__set_spriteName((UISprite_o *)IsActive, *v26, 0LL);
    }
  }
  IsActive = (System_String_o *)CharaGraphSortButtonGroup__IsActive(
                                  (UnityEngine_Component_o *)this->fields.bonusFilterKindLabel,
                                  v18);
  if ( ((unsigned __int8)IsActive & 1) != 0 )
  {
    if ( !sort )
      goto LABEL_34;
    if ( sort->fields.isBonusKind )
    {
      bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
      IsActive = ListViewSort__GetBonusFilterButtonText(sort, alignedBonusFilterInfos, 0, 0LL);
      if ( bonusFilterKindLabel )
      {
        UILabel__set_text(bonusFilterKindLabel, IsActive, 0LL);
        return;
      }
LABEL_34:
      sub_1BCAA3C(IsActive, v18);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickBonusFilterKind_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickBonusFilterKind_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickFilterKind_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickFilterKind_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickSortAscendingOrder_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickSortAscendingOrder_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickSortKind_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickSortKind_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}