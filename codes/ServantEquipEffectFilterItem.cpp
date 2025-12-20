void ServantEquipEffectFilterItem___cctor(const MethodInfo *method)
{
  if ( (byte_4D27707 & 1) == 0 )
  {
    sub_1C94098(&ServantEquipEffectFilterItem_TypeInfo);
    byte_4D27707 = 1;
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
    sub_1C942F0(this, method);
  return entity->fields.id;
}


void ServantEquipEffectFilterItem__Init(
        ServantEquipEffectFilterItem_o *this,
        FunctionCategoryEntity_o *entity,
        ListViewSort_o *sort,
        bool isSelected,
        System_Action_o *onClickEvent,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *titleLabel; // x0
  __int64 v14; // x1
  struct FunctionCategoryEntity_o *v15; // x8
  UILabel_o *v16; // x23
  int32_t v17; // w2
  char v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  char v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4D27706 & 1) == 0 )
  {
    sub_1C94098(&ServantEquipEffectFilterItem_TypeInfo);
    byte_4D27706 = 1;
  }
  this->fields.entity = entity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.entity,
    (int32_t)entity,
    (int32_t)sort,
    isSelected,
    (System_String_o *)onClickEvent,
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
  v16 = this->fields.titleLabel;
  if ( !ServantEquipEffectFilterItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterItem_TypeInfo);
  if ( !v16 )
LABEL_9:
    sub_1C942F0(titleLabel, v14);
  UILabel__SetCondensedScale(v16, ServantEquipEffectFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0, 0);
  this->fields.isSelected = isSelected;
  this->fields.sort = sort;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)sort, v17, v18, v19, v20, v21, v22);
  this->fields.onClickEvent = onClickEvent;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickEvent,
    (int32_t)onClickEvent,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantEquipEffectFilterItem__SetCheckMark(this, v29);
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
  bool SvtEquipEffectFilter; // w1
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
    sub_1C942F0(checkMarkSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkMarkSprite, this->fields.isSelected, 0);
}


void ServantEquipEffectFilterItem__SetEnableFilterButton(
        ServantEquipEffectFilterItem_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_1C942F0(0, isEnable);
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
    sub_1C942F0(titleLabel, method);
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
    sub_1C942F0(sort, v5);
  ListViewSort__SetSvtEquipEffectFilter_44656944(sort, entity->fields.id, this->fields.isSelected, 0);
}