void CostSpriteViewItemDraw___ctor(CostSpriteViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool CostSpriteViewItemDraw__IsCostSpriteEnabled(CostSpriteViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *costSprite; // x0

  costSprite = (UnityEngine_Behaviour_o *)this->fields.costSprite;
  if ( !costSprite )
    sub_1C372B4(0);
  return UnityEngine_Behaviour__get_enabled(costSprite, 0);
}


void CostSpriteViewItemDraw__SetItem(
        CostSpriteViewItemDraw_o *this,
        CostSpriteViewItem_o *viewItem,
        const MethodInfo *method)
{
  CostSpriteViewItemDraw_o *v4; // x19
  int32_t id; // w20
  CostSpriteViewItemDraw_o *v6; // x20
  UISprite_o *costSprite; // x21

  v4 = this;
  if ( (byte_4C40447 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    this = (CostSpriteViewItemDraw_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C40447 = 1;
  }
  if ( !viewItem )
    goto LABEL_12;
  id = viewItem->fields.id;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  this = (CostSpriteViewItemDraw_o *)QuestBoardListViewItemDraw__GetApSpriteFileName(id, 0);
  if ( !v4->fields.fileNameLable )
    goto LABEL_12;
  v6 = this;
  UILabel__set_text(v4->fields.fileNameLable, (System_String_o *)this, 0);
  costSprite = v4->fields.costSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (CostSpriteViewItemDraw_o *)AtlasManager__SetEventUI(costSprite, (System_String_o *)v6, 0);
  if ( !costSprite
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)costSprite, (unsigned __int8)this & 1, 0),
        (this = (CostSpriteViewItemDraw_o *)v4->fields.costSprite) == 0) )
  {
LABEL_12:
    sub_1C372B4(this);
  }
  ((void (__fastcall *)(CostSpriteViewItemDraw_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
}