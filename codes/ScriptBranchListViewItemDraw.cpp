void ScriptBranchListViewItemDraw___ctor(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptBranchListViewItemDraw__SetItem(
        ScriptBranchListViewItemDraw_o *this,
        ScriptBranchListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *title; // x1
  UILabel_o *titleTextLabel; // x0
  const MethodInfo *v9; // x1
  UILabel_o *commentTextLabel; // x22
  Il2CppObject *Component_object; // x22
  float v12; // s0 OVERLAPPED
  float v13; // s3
  float v14; // s1
  float v15; // s2
  const MethodInfo *v16; // x1
  bool IsFlagOn; // w0
  UIWidget_o *checkSprite; // x21
  const MethodInfo *v19; // x1
  float v20; // s0 OVERLAPPED
  float v21; // s3
  float v22; // s1
  float v23; // s2
  struct ScriptBranchListViewItem_o **p_drawItem; // x0
  int32_t v25; // w1

  if ( (byte_4C34F6C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34F6C = 1;
  }
  if ( !item || !mode )
  {
    this->fields.drawItem = 0;
    p_drawItem = &this->fields.drawItem;
    v25 = 0;
    goto LABEL_28;
  }
  title = item->fields.title;
  if ( title )
  {
    titleTextLabel = this->fields.titleTextLabel;
    if ( !titleTextLabel )
      goto LABEL_29;
    UILabel__set_text(titleTextLabel, title, 0);
  }
  if ( ScriptBranchListViewItem__get_CommentText(item, (const MethodInfo *)title) )
  {
    commentTextLabel = this->fields.commentTextLabel;
    titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_CommentText(item, v9);
    if ( !commentTextLabel )
      goto LABEL_29;
    UILabel__set_text(commentTextLabel, (System_String_o *)titleTextLabel, 0);
  }
  titleTextLabel = (UILabel_o *)this->fields.baseImageTexture;
  if ( !titleTextLabel )
    goto LABEL_29;
  titleTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleTextLabel, 0);
  if ( !titleTextLabel )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)titleTextLabel,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  titleTextLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)titleTextLabel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  titleTextLabel = (UILabel_o *)this->fields.baseImageTexture;
  v12 = mode == 1 ? 0.5 : 1.0;
  if ( !titleTextLabel )
    goto LABEL_29;
  v13 = 1.0;
  v14 = v12;
  v15 = v12;
  UIWidget__set_color((UIWidget_o *)titleTextLabel, *(UnityEngine_Color_o *)&v12, 0);
  IsFlagOn = ScriptBranchListViewItem__get_IsFlagOn(item, v16);
  checkSprite = (UIWidget_o *)this->fields.checkSprite;
  this->fields.checkFlag = IsFlagOn;
  titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_IsFlagOn(item, v19);
  v20 = ((unsigned __int8)titleTextLabel & 1) != 0 ? 1.0 : 0.5;
  if ( !checkSprite )
LABEL_29:
    sub_1C32E7C(titleTextLabel);
  v21 = 1.0;
  v22 = v20;
  v23 = v20;
  UIWidget__set_color(checkSprite, *(UnityEngine_Color_o *)&v20, 0);
  this->fields.drawItem = item;
  p_drawItem = &this->fields.drawItem;
  v25 = (int)item;
LABEL_28:
  sub_1C32BC4((CGThumbnailListItem_o *)p_drawItem, v25, mode, method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptBranchListViewItemDraw__Update(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptBranchListViewItem_o *drawItem; // x0
  const MethodInfo *v4; // x1
  _BOOL4 v5; // w20
  struct ScriptBranchListViewItem_o *v6; // x8
  System_String_o *v7; // x1
  float v8; // s0 OVERLAPPED
  float v9; // s3
  float v10; // s1
  float v11; // s2

  drawItem = this->fields.drawItem;
  if ( !drawItem )
    goto LABEL_14;
  drawItem = (ScriptBranchListViewItem_o *)ScriptBranchListViewItem__get_IsFlagOn(drawItem, method);
  if ( !this->fields.drawItem )
    goto LABEL_14;
  v5 = (unsigned __int8)drawItem & 1;
  drawItem = (ScriptBranchListViewItem_o *)ScriptBranchListViewItem__get_CommentText(this->fields.drawItem, v4);
  if ( this->fields.checkFlag == v5 )
    return;
  v6 = this->fields.drawItem;
  if ( !v6 )
    goto LABEL_14;
  v7 = (System_String_o *)drawItem;
  if ( drawItem && v6->fields.branchType == -1 )
  {
    drawItem = (ScriptBranchListViewItem_o *)this->fields.commentTextLabel;
    if ( !drawItem )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)drawItem, v7, 0);
  }
  drawItem = (ScriptBranchListViewItem_o *)this->fields.checkSprite;
  v8 = 0.5;
  if ( v5 )
    v8 = 1.0;
  if ( !drawItem )
LABEL_14:
    sub_1C32E7C(drawItem);
  v9 = 1.0;
  v10 = v8;
  v11 = v8;
  UIWidget__set_color((UIWidget_o *)drawItem, *(UnityEngine_Color_o *)&v8, 0);
  this->fields.checkFlag = v5;
}