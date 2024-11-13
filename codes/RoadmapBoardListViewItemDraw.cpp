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
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x22
  UnityEngine_Object_o *BoardPrefab_k__BackingField; // x22
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0

  if ( (byte_4B10FA6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B10FA6 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    v10 = (UnityEngine_Object_o *)*p_boardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_70154244(v10, 0LL);
    *p_boardPrefab = 0LL;
    sub_1BCA784(&this->fields.boardPrefab, 0LL);
  }
  BoardPrefab_k__BackingField = (UnityEngine_Object_o *)item->fields._BoardPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(BoardPrefab_k__BackingField, 0LL, 0LL) )
  {
    v12 = item->fields._BoardPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v12, transform, 0LL, 0LL);
    this->fields.boardPrefab = Object;
    sub_1BCA784(&this->fields.boardPrefab, Object);
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
    sub_1BCAA3C(boardSprite, item);
  }
  UISprite__set_spriteName((UISprite_o *)boardSprite, item->fields._SpriteName_k__BackingField, 0LL);
}