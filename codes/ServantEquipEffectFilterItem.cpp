void __fastcall ServantEquipEffectFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1711D & 1) == 0 )
  {
    sub_1BCAFF8(&ServantEquipEffectFilterItem_TypeInfo, v1);
    byte_4B1711D = 1;
  }
  ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH = 160;
}


void __fastcall ServantEquipEffectFilterItem___ctor(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  this->fields.labelBlackCoverColor.fields.rgba = -11711155;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantEquipEffectFilterItem__GetFuncCategoryId(
        ServantEquipEffectFilterItem_o *this,
        const MethodInfo *method)
{
  struct FunctionCategoryEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCB254(this, method);
  return entity->fields.id;
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

  if ( (byte_4B1711C & 1) == 0 )
  {
    sub_1BCAFF8(&ServantEquipEffectFilterItem_TypeInfo, entity);
    byte_4B1711C = 1;
  }
  this->fields.entity = entity;
  titleLabel = (UILabel_o *)sub_1BCAF9C(&this->fields.entity);
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
    sub_1BCB254(titleLabel, v12);
  UILabel__SetCondensedScale(v14, ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0, 0LL);
  this->fields.isSelected = isSelected;
  this->fields.sort = sort;
  sub_1BCAF9C(&this->fields.sort);
  this->fields.onClickEvent = onClickEvent;
  sub_1BCAF9C(&this->fields.onClickEvent);
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
    sub_1BCB254(checkMarkSprite, method);
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
    sub_1BCB254(0LL, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


void __fastcall ServantEquipEffectFilterItem__SetMask(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  UIWidget_o *titleLabel; // x0
  unsigned int rgba; // w8
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  titleLabel = (UIWidget_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_6;
  rgba = this->fields.labelBlackCoverColor.fields.rgba;
  v5.fields.a = (float)HIBYTE(rgba) / 255.0;
  v5.fields.b = (float)BYTE2(rgba) / 255.0;
  v5.fields.g = (float)BYTE1(rgba) / 255.0;
  v5.fields.r = (float)(unsigned __int8)rgba / 255.0;
  UIWidget__set_color(titleLabel, v5, 0LL);
  titleLabel = (UIWidget_o *)this->fields.buttonSprite;
  if ( !titleLabel
    || (v6.fields.r = 0.0,
        v6.fields.g = 0.0,
        v6.fields.b = 0.0,
        v6.fields.a = 1.0,
        UIWidget__set_color(titleLabel, v6, 0LL),
        (titleLabel = (UIWidget_o *)this->fields.buttonMask) == 0LL)
    || (titleLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL )
  {
LABEL_6:
    sub_1BCB254(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
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
    sub_1BCB254(sort, v5);
  ListViewSort__SetSvtEquipEffectFilter_42993504(sort, entity->fields.id, this->fields.isSelected, 0LL);
}