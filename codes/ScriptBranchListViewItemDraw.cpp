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
  float v17; // s3 OVERLAPPED
  float v18; // s0
  float v19; // s1
  float v20; // s2
  const MethodInfo *v21; // x1
  bool IsFlagOn; // w0
  UIWidget_o *checkSprite; // x21
  const MethodInfo *v24; // x1
  float v25; // s3 OVERLAPPED
  float v26; // s0
  float v27; // s1
  float v28; // s2
  struct ScriptBranchListViewItem_o **p_drawItem; // x0
  int32_t v30; // w1

  if ( (byte_5935B91 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935B91 = 1;
  }
  if ( !item || !mode )
  {
    this->fields.drawItem = 0;
    p_drawItem = &this->fields.drawItem;
    v30 = 0;
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
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
  v17 = 1.0;
  v18 = mode == 1 ? 0.5 : 1.0;
  v19 = v18;
  v20 = v18;
  UIWidget__set_color((UIWidget_o *)titleTextLabel, *(UnityEngine_Color_o *)(&v17 - 3), 0);
  IsFlagOn = ScriptBranchListViewItem__get_IsFlagOn(item, v21);
  checkSprite = (UIWidget_o *)this->fields.checkSprite;
  this->fields.checkFlag = IsFlagOn;
  titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_IsFlagOn(item, v24);
  if ( !checkSprite )
LABEL_29:
    sub_21FFECC(titleTextLabel, title);
  v25 = 1.0;
  if ( ((unsigned __int8)titleTextLabel & 1) != 0 )
    v26 = 1.0;
  else
    v26 = 0.5;
  v27 = v26;
  v28 = v26;
  UIWidget__set_color(checkSprite, *(UnityEngine_Color_o *)(&v25 - 3), 0);
  this->fields.drawItem = item;
  p_drawItem = &this->fields.drawItem;
  v30 = (int)item;
LABEL_28:
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_drawItem,
    v30,
    *(System_String_o **)&mode,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ScriptBranchListViewItemDraw__Update(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptBranchListViewItem_o *drawItem; // x0
  _BOOL4 v4; // w20
  struct ScriptBranchListViewItem_o *v5; // x8
  float v6; // s0 OVERLAPPED
  float v7; // s3
  float v8; // s1
  float v9; // s2

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
    sub_21FFECC(drawItem, method);
  v6 = 0.5;
  v7 = 1.0;
  if ( v4 )
    v6 = 1.0;
  v8 = v6;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)drawItem, *(UnityEngine_Color_o *)&v6, 0);
  this->fields.checkFlag = v4;
}