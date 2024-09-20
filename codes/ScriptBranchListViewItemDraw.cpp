void __fastcall ScriptBranchListViewItemDraw___ctor(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewItemDraw__SetItem(
        ScriptBranchListViewItemDraw_o *this,
        ScriptBranchListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *title; // x1
  UILabel_o *titleTextLabel; // x0
  UILabel_o *commentTextLabel; // x22
  Il2CppObject *Component_object; // x22
  float v11; // s0
  float v12; // s3
  float v13; // s1
  float v14; // s2
  const MethodInfo *v15; // x1
  bool IsFlagOn; // w0
  UIWidget_o *checkSprite; // x21
  const MethodInfo *v18; // x1
  float v19; // s0
  float v20; // s3
  float v21; // s1
  float v22; // s2
  struct ScriptBranchListViewItem_o **p_drawItem; // x0
  int32_t v24; // w1

  if ( (byte_4A589F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A589F3 = 1;
  }
  if ( !item || !mode )
  {
    this->fields.drawItem = 0LL;
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
    UILabel__set_text(titleTextLabel, title, 0LL);
  }
  if ( ScriptBranchListViewItem__get_CommentText(item, (const MethodInfo *)title) )
  {
    commentTextLabel = this->fields.commentTextLabel;
    titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_CommentText(item, (const MethodInfo *)title);
    if ( !commentTextLabel )
      goto LABEL_29;
    UILabel__set_text(commentTextLabel, (System_String_o *)titleTextLabel, 0LL);
  }
  titleTextLabel = (UILabel_o *)this->fields.baseImageTexture;
  if ( !titleTextLabel )
    goto LABEL_29;
  titleTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleTextLabel, 0LL);
  if ( !titleTextLabel )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)titleTextLabel,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  titleTextLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)titleTextLabel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  titleTextLabel = (UILabel_o *)this->fields.baseImageTexture;
  v11 = mode == 1 ? 0.5 : 1.0;
  if ( !titleTextLabel )
    goto LABEL_29;
  v12 = 1.0;
  v13 = v11;
  v14 = v11;
  UIWidget__set_color((UIWidget_o *)titleTextLabel, *(UnityEngine_Color_o *)&v11, 0LL);
  IsFlagOn = ScriptBranchListViewItem__get_IsFlagOn(item, v15);
  checkSprite = (UIWidget_o *)this->fields.checkSprite;
  this->fields.checkFlag = IsFlagOn;
  titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_IsFlagOn(item, v18);
  v19 = ((unsigned __int8)titleTextLabel & 1) != 0 ? 1.0 : 0.5;
  if ( !checkSprite )
LABEL_29:
    sub_1B8880C(titleTextLabel, title);
  v20 = 1.0;
  v21 = v19;
  v22 = v19;
  UIWidget__set_color(checkSprite, *(UnityEngine_Color_o *)&v19, 0LL);
  this->fields.drawItem = item;
  p_drawItem = &this->fields.drawItem;
  v24 = (int)item;
LABEL_28:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_drawItem, v24, mode, (int32_t)method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewItemDraw__Update(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptBranchListViewItem_o *drawItem; // x0
  _BOOL4 v4; // w20
  struct ScriptBranchListViewItem_o *v5; // x8
  float v6; // s0
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
  method = (const MethodInfo *)drawItem;
  if ( drawItem && v5->fields.branchType == -1 )
  {
    drawItem = (ScriptBranchListViewItem_o *)this->fields.commentTextLabel;
    if ( !drawItem )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)drawItem, (System_String_o *)method, 0LL);
  }
  drawItem = (ScriptBranchListViewItem_o *)this->fields.checkSprite;
  v6 = 0.5;
  if ( v4 )
    v6 = 1.0;
  if ( !drawItem )
LABEL_14:
    sub_1B8880C(drawItem, method);
  v7 = 1.0;
  v8 = v6;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)drawItem, *(UnityEngine_Color_o *)&v6, 0LL);
  this->fields.checkFlag = v4;
}