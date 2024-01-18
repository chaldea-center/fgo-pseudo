void __fastcall ServantEquipEffectFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AB30 & 1) == 0 )
  {
    sub_B2C35C(&ServantEquipEffectFilterItem_TypeInfo, v1);
    byte_418AB30 = 1;
  }
  ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH = 160;
}


void __fastcall ServantEquipEffectFilterItem___ctor(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterItem__Init(
        ServantEquipEffectFilterItem_o *this,
        FunctionCategoryEntity_o *entity,
        ListViewSort_o *sort,
        bool isSelected,
        System_Action_o *onClickEvent,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *titleLabel; // x0
  __int64 v14; // x1
  struct FunctionCategoryEntity_o *v15; // x8
  UILabel_o *v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_418AB2F & 1) == 0 )
  {
    sub_B2C35C(&ServantEquipEffectFilterItem_TypeInfo, entity);
    byte_418AB2F = 1;
  }
  this->fields.entity = entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.entity,
    (System_Int32_array **)entity,
    (System_String_array **)sort,
    (System_String_array **)isSelected,
    (System_Boolean_array **)onClickEvent,
    (System_Int32_array **)method,
    v6,
    v7);
  v15 = this->fields.entity;
  if ( !v15 )
    goto LABEL_10;
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, v15->fields.name, 0LL);
  v16 = this->fields.titleLabel;
  titleLabel = (UILabel_o *)ServantEquipEffectFilterItem_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterItem_TypeInfo);
  }
  if ( !v16 )
LABEL_10:
    sub_B2C434(titleLabel, v14);
  UILabel__SetCondensedScale(v16, ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL);
  this->fields.isSelected = isSelected;
  this->fields.sort = sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sort,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.onClickEvent = onClickEvent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)onClickEvent,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantEquipEffectFilterItem__SetCheckMark(this, v29);
}


void __fastcall ServantEquipEffectFilterItem__OnClick(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipEffectFilterItem__SetSelectState(this, !this->fields.isSelected, v2);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


void __fastcall ServantEquipEffectFilterItem__RefreshSelectState(
        ServantEquipEffectFilterItem_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  struct FunctionCategoryEntity_o *entity; // x8
  bool SvtEquipEffectFilter; // w1
  const MethodInfo *v6; // x2

  sort = this->fields.sort;
  if ( sort )
  {
    entity = this->fields.entity;
    if ( entity )
    {
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(sort, entity->fields.id, 0LL);
      ServantEquipEffectFilterItem__SetSelectState(this, SvtEquipEffectFilter, v6);
    }
  }
}


void __fastcall ServantEquipEffectFilterItem__SetCheckMark(
        ServantEquipEffectFilterItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *checkMarkSprite; // x0

  checkMarkSprite = (UnityEngine_Component_o *)this->fields.checkMarkSprite;
  if ( !checkMarkSprite
    || (checkMarkSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkMarkSprite, 0LL)) == 0LL )
  {
    sub_B2C434(checkMarkSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkMarkSprite, this->fields.isSelected, 0LL);
}


void __fastcall ServantEquipEffectFilterItem__SetEnableFilterButton(
        ServantEquipEffectFilterItem_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_B2C434(0LL, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterItem__SetSelectState(
        ServantEquipEffectFilterItem_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  __int64 v5; // x1
  struct FunctionCategoryEntity_o *entity; // x8

  this->fields.isSelected = isSelected;
  ServantEquipEffectFilterItem__SetCheckMark(this, (const MethodInfo *)isSelected);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_B2C434(sort, v5);
  ListViewSort__SetSvtEquipEffectFilter_33937132(sort, entity->fields.id, this->fields.isSelected, 0LL);
}