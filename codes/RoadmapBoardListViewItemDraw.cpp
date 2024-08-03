void __fastcall RoadmapBoardListViewItemDraw___ctor(RoadmapBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RoadmapBoardListViewItemDraw__Awake(RoadmapBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *unimplementedLabel; // x19
  System_String_o *v5; // x0

  if ( (byte_49FFF38 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11071/*"ROADMAP_BOARD_UNIMPLEMENTED"*/, v3);
    byte_49FFF38 = 1;
  }
  unimplementedLabel = this->fields.unimplementedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11071/*"ROADMAP_BOARD_UNIMPLEMENTED"*/, 0LL);
  if ( !unimplementedLabel )
    sub_1B64324(v5);
  UILabel__set_text(unimplementedLabel, v5, 0LL);
}


void __fastcall RoadmapBoardListViewItemDraw__CheckAssert(
        RoadmapBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RoadmapBoardListViewItemDraw__UpdateBoard(
        RoadmapBoardListViewItemDraw_o *this,
        RoadmapBoardListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *unimplementedLabel; // x0

  unimplementedLabel = (UnityEngine_Component_o *)this->fields.unimplementedLabel;
  if ( !unimplementedLabel )
    goto LABEL_8;
  unimplementedLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(unimplementedLabel, 0LL);
  if ( !item || !unimplementedLabel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)unimplementedLabel,
    item->fields._IsDisplayUnimplementedLabel_k__BackingField,
    0LL);
  if ( item->fields._IsDisplayUnimplementedLabel_k__BackingField )
    return;
  unimplementedLabel = (UnityEngine_Component_o *)this->fields.boardSprite;
  if ( !unimplementedLabel
    || (UISprite__set_atlas((UISprite_o *)unimplementedLabel, item->fields._Atlas_k__BackingField, 0LL),
        (unimplementedLabel = (UnityEngine_Component_o *)this->fields.boardSprite) == 0LL) )
  {
LABEL_8:
    sub_1B64324(unimplementedLabel);
  }
  UISprite__set_spriteName((UISprite_o *)unimplementedLabel, item->fields._SpriteName_k__BackingField, 0LL);
}