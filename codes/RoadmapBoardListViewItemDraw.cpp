void RoadmapBoardListViewItemDraw___ctor(RoadmapBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void RoadmapBoardListViewItemDraw__Awake(RoadmapBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void RoadmapBoardListViewItemDraw__CheckAssert(RoadmapBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void RoadmapBoardListViewItemDraw__UpdateBoard(
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
  struct UnityEngine_GameObject_o *Object; // x0

  if ( (byte_4C31A3F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31A3F = 1;
  }
  boardSprite = (UnityEngine_Component_o *)this->fields.boardSprite;
  if ( !boardSprite )
    goto LABEL_21;
  boardSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(boardSprite, 0);
  if ( !item )
    goto LABEL_21;
  v6 = (UnityEngine_GameObject_o *)boardSprite;
  Atlas_k__BackingField = (UnityEngine_Object_o *)item->fields._Atlas_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  boardSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Atlas_k__BackingField, 0, 0);
  if ( !v6 )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)boardSprite & 1, 0);
  p_boardPrefab = &this->fields.boardPrefab;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.boardPrefab, 0, 0) )
  {
    boardSprite = (UnityEngine_Component_o *)*p_boardPrefab;
    if ( !*p_boardPrefab )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSprite, 0, 0);
    v9 = (UnityEngine_Object_o *)*p_boardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v9, 0);
    *p_boardPrefab = 0;
    sub_1C32BC4(&this->fields.boardPrefab, 0);
  }
  BoardPrefab_k__BackingField = (UnityEngine_Object_o *)item->fields._BoardPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(BoardPrefab_k__BackingField, 0, 0) )
  {
    v11 = item->fields._BoardPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v11, transform, 0, 0);
    this->fields.boardPrefab = Object;
    sub_1C32BC4(&this->fields.boardPrefab, Object);
    boardSprite = (UnityEngine_Component_o *)this->fields.boardPrefab;
    if ( !boardSprite )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSprite, 1, 0);
  }
  boardSprite = (UnityEngine_Component_o *)this->fields.boardSprite;
  if ( !boardSprite
    || (UISprite__set_atlas((UISprite_o *)boardSprite, item->fields._Atlas_k__BackingField, 0),
        (boardSprite = (UnityEngine_Component_o *)this->fields.boardSprite) == 0) )
  {
LABEL_21:
    sub_1C32E7C(boardSprite);
  }
  UISprite__set_spriteName((UISprite_o *)boardSprite, item->fields._SpriteName_k__BackingField, 0);
}