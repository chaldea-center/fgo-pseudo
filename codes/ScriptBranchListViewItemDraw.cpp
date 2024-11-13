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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *title; // x1
  UILabel_o *titleTextLabel; // x0
  UILabel_o *commentTextLabel; // x22
  __int64 v16; // x1
  Il2CppObject *Component_object; // x22
  float v18; // s0
  float v19; // s3
  float v20; // s1
  float v21; // s2
  bool IsFlagOn; // w0
  UIWidget_o *checkSprite; // x21
  float v24; // s0
  float v25; // s3
  float v26; // s1
  float v27; // s2
  struct ScriptBranchListViewItem_o **p_drawItem; // x0
  ScriptBranchListViewItem_o *v29; // x1

  if ( (byte_4B1395E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1395E = 1;
  }
  if ( !item || !mode )
  {
    this->fields.drawItem = 0LL;
    p_drawItem = &this->fields.drawItem;
    v29 = 0LL;
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
  if ( ScriptBranchListViewItem__get_CommentText(item, 0LL) )
  {
    commentTextLabel = this->fields.commentTextLabel;
    titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_CommentText(item, 0LL);
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
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  titleTextLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)titleTextLabel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  titleTextLabel = (UILabel_o *)this->fields.baseImageTexture;
  v18 = mode == 1 ? 0.5 : 1.0;
  if ( !titleTextLabel )
    goto LABEL_29;
  v19 = 1.0;
  v20 = v18;
  v21 = v18;
  UIWidget__set_color((UIWidget_o *)titleTextLabel, *(UnityEngine_Color_o *)&v18, 0LL);
  IsFlagOn = ScriptBranchListViewItem__get_IsFlagOn(item, 0LL);
  checkSprite = (UIWidget_o *)this->fields.checkSprite;
  this->fields.checkFlag = IsFlagOn;
  titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_IsFlagOn(item, 0LL);
  v24 = ((unsigned __int8)titleTextLabel & 1) != 0 ? 1.0 : 0.5;
  if ( !checkSprite )
LABEL_29:
    sub_1BCAA3C(titleTextLabel, title);
  v25 = 1.0;
  v26 = v24;
  v27 = v24;
  UIWidget__set_color(checkSprite, *(UnityEngine_Color_o *)&v24, 0LL);
  this->fields.drawItem = item;
  p_drawItem = &this->fields.drawItem;
  v29 = item;
LABEL_28:
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_drawItem,
    (int64_t)v29,
    *(int64_t *)&mode,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewItemDraw__Update(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptBranchListViewItem_o *drawItem; // x0
  _BOOL4 v4; // w21
  System_String_o *CommentText; // x0
  System_String_o *v6; // x20
  bool IsMasterFlag; // w0
  float v8; // s0
  float v9; // s3
  float v10; // s1
  float v11; // s2

  drawItem = this->fields.drawItem;
  if ( !drawItem )
    goto LABEL_14;
  drawItem = (ScriptBranchListViewItem_o *)ScriptBranchListViewItem__get_IsFlagOn(drawItem, 0LL);
  if ( !this->fields.drawItem )
    goto LABEL_14;
  v4 = (unsigned __int8)drawItem & 1;
  CommentText = ScriptBranchListViewItem__get_CommentText(this->fields.drawItem, 0LL);
  if ( this->fields.checkFlag == v4 )
    return;
  v6 = CommentText;
  drawItem = this->fields.drawItem;
  if ( !drawItem )
    goto LABEL_14;
  IsMasterFlag = ScriptBranchListViewItem__get_IsMasterFlag(drawItem, 0LL);
  if ( v6 && IsMasterFlag )
  {
    drawItem = (ScriptBranchListViewItem_o *)this->fields.commentTextLabel;
    if ( !drawItem )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)drawItem, v6, 0LL);
  }
  drawItem = (ScriptBranchListViewItem_o *)this->fields.checkSprite;
  v8 = 0.5;
  if ( v4 )
    v8 = 1.0;
  if ( !drawItem )
LABEL_14:
    sub_1BCAA3C(drawItem, method);
  v9 = 1.0;
  v10 = v8;
  v11 = v8;
  UIWidget__set_color((UIWidget_o *)drawItem, *(UnityEngine_Color_o *)&v8, 0LL);
  this->fields.checkFlag = v4;
}