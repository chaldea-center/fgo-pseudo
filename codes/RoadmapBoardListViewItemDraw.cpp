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
  __int64 v6; // x2
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_Object_o *Atlas_k__BackingField; // x22
  struct UnityEngine_GameObject_o **p_boardPrefab; // x21
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Object_o *BoardPrefab_k__BackingField; // x22
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_59326CD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59326CD = 1;
  }
  boardSprite = (UnityEngine_Component_o *)this->fields.boardSprite;
  if ( !boardSprite )
    goto LABEL_21;
  boardSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(boardSprite, 0);
  if ( !item )
    goto LABEL_21;
  v7 = (UnityEngine_GameObject_o *)boardSprite;
  Atlas_k__BackingField = (UnityEngine_Object_o *)item->fields._Atlas_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v6);
  boardSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Atlas_k__BackingField, 0, 0);
  if ( !v7 )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v7, (unsigned __int8)boardSprite & 1, 0);
  p_boardPrefab = &this->fields.boardPrefab;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.boardPrefab, 0, 0) )
  {
    boardSprite = (UnityEngine_Component_o *)*p_boardPrefab;
    if ( !*p_boardPrefab )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSprite, 0, 0);
    v13 = (UnityEngine_Object_o *)*p_boardPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    UnityEngine_Object__Destroy_83246496(v13, 0);
    *p_boardPrefab = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.boardPrefab, 0, v14, v15, v16, v17, v18, v19);
  }
  BoardPrefab_k__BackingField = (UnityEngine_Object_o *)item->fields._BoardPrefab_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v10);
  if ( UnityEngine_Object__op_Inequality(BoardPrefab_k__BackingField, 0, 0) )
  {
    v21 = item->fields._BoardPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v21, transform, 0, 0);
    this->fields.boardPrefab = Object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.boardPrefab,
      (int32_t)Object,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
    sub_21FFECC(boardSprite, item);
  }
  UISprite__set_spriteName((UISprite_o *)boardSprite, item->fields._SpriteName_k__BackingField, 0);
}