void __fastcall ServantEquipEffectFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F775D & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipEffectFilterItem_TypeInfo, v1);
    byte_49F775D = 1;
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
  struct FunctionCategoryEntity_o *v12; // x8
  UILabel_o *v13; // x23
  const MethodInfo *v14; // x1

  if ( (byte_49F775C & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipEffectFilterItem_TypeInfo, entity);
    byte_49F775C = 1;
  }
  this->fields.entity = entity;
  titleLabel = (UILabel_o *)sub_1B6406C(&this->fields.entity);
  v12 = this->fields.entity;
  if ( !v12 )
    goto LABEL_9;
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, v12->fields.name, 0LL);
  titleLabel = (UILabel_o *)ServantEquipEffectFilterItem_TypeInfo;
  v13 = this->fields.titleLabel;
  if ( !ServantEquipEffectFilterItem_TypeInfo->_2.cctor_finished )
    titleLabel = (UILabel_o *)j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterItem_TypeInfo);
  if ( !v13 )
LABEL_9:
    sub_1B64324(titleLabel);
  UILabel__SetCondensedScale(v13, ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL);
  this->fields.isSelected = isSelected;
  this->fields.sort = sort;
  sub_1B6406C(&this->fields.sort);
  this->fields.onClickEvent = onClickEvent;
  sub_1B6406C(&this->fields.onClickEvent);
  ServantEquipEffectFilterItem__SetCheckMark(this, v14);
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
    sub_1B64324(checkMarkSprite);
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
    sub_1B64324(0LL);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterItem__SetSelectState(
        ServantEquipEffectFilterItem_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  struct FunctionCategoryEntity_o *entity; // x8

  this->fields.isSelected = isSelected;
  ServantEquipEffectFilterItem__SetCheckMark(this, (const MethodInfo *)isSelected);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_1B64324(sort);
  ListViewSort__SetSvtEquipEffectFilter_40454872(sort, entity->fields.id, this->fields.isSelected, 0LL);
}