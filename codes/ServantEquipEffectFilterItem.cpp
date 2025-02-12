void __fastcall ServantEquipEffectFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC31C3 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantEquipEffectFilterItem_TypeInfo, v1);
    byte_4BC31C3 = 1;
  }
  ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH = 160;
}


void __fastcall ServantEquipEffectFilterItem___ctor(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantEquipEffectFilterItem__Init(
        ServantEquipEffectFilterItem_o *this,
        FunctionCategoryEntity_o *entity,
        ListViewSort_o *sort,
        bool isSelected,
        System_Action_o *onClickEvent,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v12; // x1
  struct FunctionCategoryEntity_o *v13; // x8
  UILabel_o *v14; // x23
  const MethodInfo *v15; // x1

  if ( (byte_4BC31C2 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantEquipEffectFilterItem_TypeInfo, entity);
    byte_4BC31C2 = 1;
  }
  this->fields.entity = entity;
  titleLabel = (UILabel_o *)sub_1C1AB78(&this->fields.entity);
  v13 = this->fields.entity;
  if ( !v13 )
    goto LABEL_9;
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, v13->fields.name, 0LL);
  titleLabel = (UILabel_o *)ServantEquipEffectFilterItem_TypeInfo;
  v14 = this->fields.titleLabel;
  if ( !ServantEquipEffectFilterItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterItem_TypeInfo);
  if ( !v14 )
LABEL_9:
    sub_1C1AE30(titleLabel, v12);
  UILabel__SetCondensedScale(v14, ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0, 0LL);
  this->fields.isSelected = isSelected;
  this->fields.sort = sort;
  sub_1C1AB78(&this->fields.sort);
  this->fields.onClickEvent = onClickEvent;
  sub_1C1AB78(&this->fields.onClickEvent);
  ServantEquipEffectFilterItem__SetCheckMark(this, v15);
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
    sub_1C1AE30(checkMarkSprite, method);
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
    sub_1C1AE30(0LL, isEnable);
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
    sub_1C1AE30(sort, v5);
  ListViewSort__SetSvtEquipEffectFilter_42004512(sort, entity->fields.id, this->fields.isSelected, 0LL);
}