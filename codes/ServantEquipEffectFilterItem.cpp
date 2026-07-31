void ServantEquipEffectFilterItem___cctor(const MethodInfo *method)
{
  if ( (byte_5932FDE & 1) == 0 )
  {
    sub_21FFC50(&ServantEquipEffectFilterItem_TypeInfo);
    byte_5932FDE = 1;
  }
  ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH = 160;
}


void ServantEquipEffectFilterItem___ctor(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  this->fields.labelBlackCoverColor.fields.rgba = -11711155;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantEquipEffectFilterItem__GetFuncCategoryId(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  struct FunctionCategoryEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, method);
  return entity->fields.id;
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterItem__Init(
        ServantEquipEffectFilterItem_o *this,
        FunctionCategoryEntity_o *entity,
        ListViewSort_o *sort,
        bool isSelected,
        System_Action_o *onClickEvent,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  UILabel_o *titleLabel; // x0
  __int64 v14; // x1
  struct FunctionCategoryEntity_o *v15; // x8
  __int64 v16; // x2
  UILabel_o *v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x1

  if ( (byte_5932FDD & 1) == 0 )
  {
    sub_21FFC50(&ServantEquipEffectFilterItem_TypeInfo);
    byte_5932FDD = 1;
  }
  this->fields.entity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.entity,
    (int32_t)entity,
    (System_String_o *)sort,
    (System_String_o *)isSelected,
    (int32_t)onClickEvent,
    (int32_t)method,
    v6,
    v7);
  v15 = this->fields.entity;
  if ( !v15 )
    goto LABEL_9;
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, v15->fields.name, 0);
  titleLabel = (UILabel_o *)ServantEquipEffectFilterItem_TypeInfo;
  v17 = this->fields.titleLabel;
  if ( !*(&ServantEquipEffectFilterItem_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterItem_TypeInfo, v14, v16);
  if ( !v17 )
LABEL_9:
    sub_21FFECC(titleLabel, v14);
  UILabel__SetCondensedScale(v17, ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0, 0);
  this->fields.isSelected = isSelected;
  this->fields.sort = sort;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)sort, v18, v19, v20, v21, v22, v23);
  this->fields.onClickEvent = onClickEvent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickEvent,
    (int32_t)onClickEvent,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantEquipEffectFilterItem__SetCheckMark(this, v30);
}


void ServantEquipEffectFilterItem__OnClick(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipEffectFilterItem__SetSelectState(this, !this->fields.isSelected, v2);
  ActionExtensions__Call(this->fields.onClickEvent, 0);
}


void ServantEquipEffectFilterItem__RefreshSelectState(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  struct FunctionCategoryEntity_o *entity; // x8
  bool SvtEquipEffectFilter; // w8
  const MethodInfo *v6; // x2

  sort = this->fields.sort;
  if ( sort )
  {
    entity = this->fields.entity;
    if ( entity )
    {
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(sort, entity->fields.id, 0);
      ServantEquipEffectFilterItem__SetSelectState(this, SvtEquipEffectFilter, v6);
    }
  }
}


void ServantEquipEffectFilterItem__SetCheckMark(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *checkMarkSprite; // x0

  checkMarkSprite = (UnityEngine_Component_o *)this->fields.checkMarkSprite;
  if ( !checkMarkSprite
    || (checkMarkSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkMarkSprite, 0)) == 0 )
  {
    sub_21FFECC(checkMarkSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkMarkSprite, this->fields.isSelected, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterItem__SetEnableFilterButton(
        ServantEquipEffectFilterItem_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_21FFECC(0, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0);
}


void ServantEquipEffectFilterItem__SetMask(ServantEquipEffectFilterItem_o *this, const MethodInfo *method)
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
  UIWidget__set_color(titleLabel, v5, 0);
  titleLabel = (UIWidget_o *)this->fields.buttonSprite;
  if ( !titleLabel
    || (v6.fields.r = 0.0,
        v6.fields.g = 0.0,
        v6.fields.b = 0.0,
        v6.fields.a = 1.0,
        UIWidget__set_color(titleLabel, v6, 0),
        (titleLabel = (UIWidget_o *)this->fields.buttonMask) == 0)
    || (titleLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0 )
  {
LABEL_6:
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterItem__SetSelectState(
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
  if ( !entity || (sort = this->fields.sort) == 0 )
    sub_21FFECC(sort, v5);
  ListViewSort__SetSvtEquipEffectFilter_50813016(sort, entity->fields.id, this->fields.isSelected, 0);
}