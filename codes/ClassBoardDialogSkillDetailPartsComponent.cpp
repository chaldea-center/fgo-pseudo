void ClassBoardDialogSkillDetailPartsComponent___ctor(
        ClassBoardDialogSkillDetailPartsComponent_o *this,
        const MethodInfo *method)
{
  this->fields.detailUnderMargin = 4.0;
  *(_QWORD *)&this->fields.detailMinHeight = 0x1400000064LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardDialogSkillDetailPartsComponent__Awake(
        ClassBoardDialogSkillDetailPartsComponent_o *this,
        const MethodInfo *method)
{
  ;
}


float ClassBoardDialogSkillDetailPartsComponent__SetDetail(
        ClassBoardDialogSkillDetailPartsComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  UILabel_o *effectNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  struct UILabel_o *effectDetailLabel; // x8
  int32_t detailMinHeight; // s3
  float v16; // s0
  float v17; // s8
  int32_t v18; // w1
  System_String_o *ClassBoardSkillIconName; // x20

  if ( (byte_4C46A8E & 1) == 0 )
  {
    sub_1C37058(&ClassBoardUtility_TypeInfo);
    byte_4C46A8E = 1;
  }
  effectNameLabel = this->fields.effectNameLabel;
  if ( !effectNameLabel )
    goto LABEL_17;
  UILabel__set_text(effectNameLabel, name, 0);
  WrapControlText__textBBCodeAdjust(
    this->fields.effectDetailLabel,
    detail,
    this->fields.detailFontSize,
    this->fields.detailFontSize,
    0);
  effectNameLabel = this->fields.effectDetailLabel;
  if ( !effectNameLabel )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectNameLabel, 0);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
  effectDetailLabel = this->fields.effectDetailLabel;
  if ( !effectDetailLabel )
    goto LABEL_17;
  detailMinHeight = this->fields.detailMinHeight;
  effectNameLabel = (UILabel_o *)this->fields.background;
  v16 = this->fields.detailUnderMargin + (float)(fabsf(LocalPositionY) + (float)effectDetailLabel->fields.mHeight);
  v17 = v16 >= (float)detailMinHeight ? v16 : (float)detailMinHeight;
  if ( !effectNameLabel )
    goto LABEL_17;
  v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
  UIWidget__set_height((UIWidget_o *)effectNameLabel, v18, 0);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardSkillIconName = ClassBoardUtility__GetClassBoardSkillIconName(iconId, skillType, 0);
  effectNameLabel = (UILabel_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)ClassBoardSkillIconName);
  if ( !effectNameLabel )
LABEL_17:
    sub_1C372B4(effectNameLabel);
  AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)effectNameLabel, this->fields.effectIcon, ClassBoardSkillIconName, 0);
  return v17;
}