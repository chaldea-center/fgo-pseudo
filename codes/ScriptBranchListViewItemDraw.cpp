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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *title; // x1
  UILabel_o *titleTextLabel; // x0
  UILabel_o *commentTextLabel; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x22
  const MethodInfo *v18; // x1
  bool IsFlagOn; // w0
  UIWidget_o *checkSprite; // x21
  const MethodInfo *v21; // x1
  struct ScriptBranchListViewItem_o **p_drawItem; // x0
  int32_t v24; // w1
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596DCD3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DCD3 = 1;
  }
  if ( !item || !mode )
  {
    this->fields.drawItem = 0;
    p_drawItem = &this->fields.drawItem;
    v24 = 0;
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
    titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_CommentText(item, (const MethodInfo *)title);
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
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  titleTextLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)titleTextLabel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  titleTextLabel = (UILabel_o *)this->fields.baseImageTexture;
  if ( !titleTextLabel )
    goto LABEL_29;
  v25.fields.a = 1.0;
  v25.fields.r = mode == 1 ? 0.5 : 1.0;
  v25.fields.g = v25.fields.r;
  v25.fields.b = v25.fields.r;
  UIWidget__set_color((UIWidget_o *)titleTextLabel, v25, 0);
  IsFlagOn = ScriptBranchListViewItem__get_IsFlagOn(item, v18);
  checkSprite = (UIWidget_o *)this->fields.checkSprite;
  this->fields.checkFlag = IsFlagOn;
  titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_IsFlagOn(item, v21);
  if ( !checkSprite )
LABEL_29:
    sub_2213CDC(titleTextLabel, title);
  v26.fields.a = 1.0;
  if ( ((unsigned __int8)titleTextLabel & 1) != 0 )
    v26.fields.r = 1.0;
  else
    v26.fields.r = 0.5;
  v26.fields.g = v26.fields.r;
  v26.fields.b = v26.fields.r;
  UIWidget__set_color(checkSprite, v26, 0);
  this->fields.drawItem = item;
  p_drawItem = &this->fields.drawItem;
  v24 = (int)item;
LABEL_28:
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_drawItem,
    v24,
    *(System_String_o **)&mode,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}


void ScriptBranchListViewItemDraw__Update(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptBranchListViewItem_o *drawItem; // x0
  _BOOL4 v4; // w20
  struct ScriptBranchListViewItem_o *v5; // x8
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  drawItem = this->fields.drawItem;
  if ( !drawItem )
    goto LABEL_14;
  drawItem = (ScriptBranchListViewItem_o *)ScriptBranchListViewItem__get_IsFlagOn(drawItem, method);
  if ( !this->fields.drawItem )
    goto LABEL_14;
  v4 = (unsigned __int8)drawItem & 1;
  drawItem = (ScriptBranchListViewItem_o *)ScriptBranchListViewItem__get_CommentText(this->fields.drawItem, method);
  if ( this->fields.checkFlag == v4 )
    return;
  v5 = this->fields.drawItem;
  if ( !v5 )
    goto LABEL_14;
  if ( v5->fields.branchType == -1 )
  {
    method = (const MethodInfo *)drawItem;
    if ( drawItem )
    {
      drawItem = (ScriptBranchListViewItem_o *)this->fields.commentTextLabel;
      if ( !drawItem )
        goto LABEL_14;
      UILabel__set_text((UILabel_o *)drawItem, (System_String_o *)method, 0);
    }
  }
  drawItem = (ScriptBranchListViewItem_o *)this->fields.checkSprite;
  if ( !drawItem )
LABEL_14:
    sub_2213CDC(drawItem, method);
  v7.fields.r = 0.5;
  v7.fields.a = 1.0;
  if ( v4 )
    v7.fields.r = 1.0;
  v7.fields.g = v7.fields.r;
  v7.fields.b = v7.fields.r;
  UIWidget__set_color((UIWidget_o *)drawItem, v7, 0);
  this->fields.checkFlag = v4;
}