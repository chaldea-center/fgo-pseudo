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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  System_String_o *title; // x1
  UILabel_o *titleTextLabel; // x0
  UILabel_o *commentTextLabel; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UIWidget_o *baseImageTexture; // x22
  int v17; // s0
  struct ScriptBranchListViewItem_o **p_drawItem; // x0
  System_Int32_array **v22; // x1
  const MethodInfo *v23; // x1
  bool IsFlagOn; // w0
  UIWidget_o *checkSprite; // x21
  const MethodInfo *v26; // x1
  int v27; // s0

  if ( (byte_418BE41 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_418BE41 = 1;
  }
  if ( item && mode )
  {
    title = item->fields.title;
    if ( title )
    {
      titleTextLabel = this->fields.titleTextLabel;
      if ( !titleTextLabel )
        goto LABEL_30;
      UILabel__set_text(titleTextLabel, title, 0LL);
    }
    if ( ScriptBranchListViewItem__get_CommentText(item, (const MethodInfo *)title) )
    {
      commentTextLabel = this->fields.commentTextLabel;
      titleTextLabel = (UILabel_o *)ScriptBranchListViewItem__get_CommentText(item, (const MethodInfo *)title);
      if ( !commentTextLabel )
        goto LABEL_30;
      UILabel__set_text(commentTextLabel, (System_String_o *)titleTextLabel, 0LL);
    }
    titleTextLabel = (UILabel_o *)this->fields.baseImageTexture;
    if ( !titleTextLabel
      || (titleTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)titleTextLabel,
                                          0LL)) == 0LL )
    {
LABEL_30:
      sub_B2C434(titleTextLabel, title);
    }
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)titleTextLabel,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    titleTextLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)titleTextLabel & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_30;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
    }
    baseImageTexture = (UIWidget_o *)this->fields.baseImageTexture;
    if ( mode == 1 )
    {
      *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
      if ( !baseImageTexture )
        goto LABEL_30;
    }
    else
    {
      *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
      if ( !baseImageTexture )
        goto LABEL_30;
    }
    UIWidget__set_color(baseImageTexture, *(UnityEngine_Color_o *)&v17, 0LL);
    IsFlagOn = ScriptBranchListViewItem__get_IsFlagOn(item, v23);
    checkSprite = (UIWidget_o *)this->fields.checkSprite;
    this->fields.checkFlag = IsFlagOn;
    if ( ScriptBranchListViewItem__get_IsFlagOn(item, v26) )
    {
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
      if ( !checkSprite )
        goto LABEL_30;
    }
    else
    {
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_gray(0LL);
      if ( !checkSprite )
        goto LABEL_30;
    }
    UIWidget__set_color(checkSprite, *(UnityEngine_Color_o *)&v27, 0LL);
    this->fields.drawItem = item;
    p_drawItem = &this->fields.drawItem;
    v22 = (System_Int32_array **)item;
  }
  else
  {
    this->fields.drawItem = 0LL;
    p_drawItem = &this->fields.drawItem;
    v22 = 0LL;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_drawItem,
    v22,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewItemDraw__Update(ScriptBranchListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptBranchListViewItem_o *drawItem; // x0
  int v4; // w20
  struct ScriptBranchListViewItem_o *v5; // x8
  UIWidget_o *checkSprite; // x21
  int v7; // s0

  drawItem = this->fields.drawItem;
  if ( !drawItem
    || (drawItem = (ScriptBranchListViewItem_o *)ScriptBranchListViewItem__get_IsFlagOn(drawItem, method),
        !this->fields.drawItem) )
  {
LABEL_15:
    sub_B2C434(drawItem, method);
  }
  v4 = (int)drawItem;
  drawItem = (ScriptBranchListViewItem_o *)ScriptBranchListViewItem__get_CommentText(this->fields.drawItem, method);
  if ( ((v4 ^ this->fields.checkFlag) & 1) != 0 )
  {
    v5 = this->fields.drawItem;
    if ( !v5 )
      goto LABEL_15;
    method = (const MethodInfo *)drawItem;
    if ( drawItem && v5->fields.branchType == -1 )
    {
      drawItem = (ScriptBranchListViewItem_o *)this->fields.commentTextLabel;
      if ( !drawItem )
        goto LABEL_15;
      UILabel__set_text((UILabel_o *)drawItem, (System_String_o *)method, 0LL);
    }
    checkSprite = (UIWidget_o *)this->fields.checkSprite;
    if ( (v4 & 1) != 0 )
    {
      *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
      if ( !checkSprite )
        goto LABEL_15;
    }
    else
    {
      *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
      if ( !checkSprite )
        goto LABEL_15;
    }
    UIWidget__set_color(checkSprite, *(UnityEngine_Color_o *)&v7, 0LL);
    this->fields.checkFlag = v4 & 1;
  }
}