void CenterEffectDetailItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C317DC & 1) == 0 )
  {
    sub_1C32C20(&CenterEffectDetailItemListViewItemDraw_TypeInfo);
    byte_4C317DC = 1;
  }
  *CenterEffectDetailItemListViewItemDraw_TypeInfo->static_fields = (struct CenterEffectDetailItemListViewItemDraw_StaticFields)0x1000000012LL;
}


void CenterEffectDetailItemListViewItemDraw___ctor(
        CenterEffectDetailItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CenterEffectDetailItemListViewItemDraw__SetItem(
        CenterEffectDetailItemListViewItemDraw_o *this,
        CenterEffectDetailItemListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  SkillEntity_o *v6; // x21
  UICrossNarrowLabel_o *nameTextLabel; // x22
  System_String_o *Name; // x23
  UILabel_o *levelLabel; // x22
  UILabel_o *v10; // x22
  System_String_o *v11; // x0
  UILabel_o *detailLabel; // x20
  System_String_o *EffectExplanation; // x0
  int32_t skillLevel; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C317DB & 1) == 0 )
  {
    sub_1C32C20(&CenterEffectDetailItemListViewItemDraw_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_8513/*"Lv."*/);
    byte_4C317DB = 1;
  }
  skillLevel = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_17;
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                item->fields.skillId,
                                (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !this->fields.skillIcon )
    goto LABEL_17;
  v6 = (SkillEntity_o *)Instance;
  SkillIconComponent__Set(this->fields.skillIcon, item->fields.skillId, 0);
  if ( !v6 )
    goto LABEL_17;
  nameTextLabel = this->fields.nameTextLabel;
  Name = SkillEntity__getName(v6, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__ReplaceCommonTag(Name, 0, 0);
  if ( !nameTextLabel )
    goto LABEL_17;
  UICrossNarrowLabel__SetCrossNarrowText(nameTextLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)CenterEffectDetailItemListViewItemDraw_TypeInfo;
  levelLabel = this->fields.levelLabel;
  if ( !CenterEffectDetailItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    Instance = (DataManager_o *)j_il2cpp_runtime_class_init_0(CenterEffectDetailItemListViewItemDraw_TypeInfo);
  if ( !levelLabel
    || (UILabel__set_fontSize(
          levelLabel,
          CenterEffectDetailItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE,
          0),
        v10 = this->fields.levelLabel,
        skillLevel = item->fields.skillLevel,
        v11 = System_Int32__ToString((int32_t)&skillLevel, 0),
        Instance = (DataManager_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_8513/*"Lv."*/, v11, 0),
        !v10)
    || (UILabel__set_text(v10, (System_String_o *)Instance, 0),
        (Instance = (DataManager_o *)this->fields.detailLabel) == 0) )
  {
LABEL_17:
    sub_1C32E7C(Instance);
  }
  UILabel__set_fontSize(
    (UILabel_o *)Instance,
    CenterEffectDetailItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0);
  detailLabel = this->fields.detailLabel;
  EffectExplanation = SkillEntity__getEffectExplanation(v6, item->fields.skillLevel, 0);
  WrapControlText__textAdjust(
    detailLabel,
    EffectExplanation,
    CenterEffectDetailItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0,
    0);
}