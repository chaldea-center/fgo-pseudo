void __fastcall RoadmapBoardListViewItemDraw___ctor(RoadmapBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall RoadmapBoardListViewItemDraw__Awake(RoadmapBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
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
  UnityEngine_Component_o *boardSprite; // x0
  UnityEngine_GameObject_o *v6; // x21
  UnityEngine_Object_o *Atlas_k__BackingField; // x22
  struct UnityEngine_GameObject_o **p_boardPrefab; // x21
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Object_o *BoardPrefab_k__BackingField; // x22
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BC2792 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, item);
    byte_4BC2792 = 1;
  }
  boardSprite = (UnityEngine_Component_o *)this->fields.boardSprite;
  if ( !boardSprite )
    goto LABEL_21;
  boardSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(boardSprite, 0LL);
  if ( !item )
    goto LABEL_21;
  v6 = (UnityEngine_GameObject_o *)boardSprite;
  Atlas_k__BackingField = (UnityEngine_Object_o *)item->fields._Atlas_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  boardSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Atlas_k__BackingField, 0LL, 0LL);
  if ( !v6 )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)boardSprite & 1, 0LL);
  p_boardPrefab = &this->fields.boardPrefab;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.boardPrefab, 0LL, 0LL) )
  {
    boardSprite = (UnityEngine_Component_o *)*p_boardPrefab;
    if ( !*p_boardPrefab )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSprite, 0, 0LL);
    v9 = (UnityEngine_Object_o *)*p_boardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v9, 0LL);
    *p_boardPrefab = 0LL;
    sub_1C1AB78(&this->fields.boardPrefab);
  }
  BoardPrefab_k__BackingField = (UnityEngine_Object_o *)item->fields._BoardPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(BoardPrefab_k__BackingField, 0LL, 0LL) )
  {
    v11 = item->fields._BoardPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    this->fields.boardPrefab = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v11, transform, 0LL, 0LL);
    sub_1C1AB78(&this->fields.boardPrefab);
    boardSprite = (UnityEngine_Component_o *)this->fields.boardPrefab;
    if ( !boardSprite )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSprite, 1, 0LL);
  }
  boardSprite = (UnityEngine_Component_o *)this->fields.boardSprite;
  if ( !boardSprite
    || (UISprite__set_atlas((UISprite_o *)boardSprite, item->fields._Atlas_k__BackingField, 0LL),
        (boardSprite = (UnityEngine_Component_o *)this->fields.boardSprite) == 0LL) )
  {
LABEL_21:
    sub_1C1AE30(boardSprite, item);
  }
  UISprite__set_spriteName((UISprite_o *)boardSprite, item->fields._SpriteName_k__BackingField, 0LL);
}