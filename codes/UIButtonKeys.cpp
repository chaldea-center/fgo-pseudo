void UIButtonKeys___ctor(UIButtonKeys_o *this, const MethodInfo *method)
{
  if ( (byte_4CF2C68 & 1) == 0 )
  {
    sub_1C7BAE8(&UIKeyNavigation_TypeInfo);
    byte_4CF2C68 = 1;
  }
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonKeys__OnEnable(UIButtonKeys_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIButtonKeys__Upgrade(this, method);
  UIKeyNavigation__OnEnable((UIKeyNavigation_o *)this, v3);
}


void UIButtonKeys__Upgrade(UIButtonKeys_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *onClick; // x21
  struct UIButtonKeys_o **p_selectOnClick; // x21
  UnityEngine_Object_o *selectOnClick; // x22
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *onLeft; // x21
  struct UIButtonKeys_o **p_selectOnLeft; // x21
  UnityEngine_Object_o *selectOnLeft; // x22
  struct UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UnityEngine_Object_o *onRight; // x21
  struct UIButtonKeys_o **p_selectOnRight; // x21
  UnityEngine_Object_o *selectOnRight; // x22
  struct UnityEngine_GameObject_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  UnityEngine_Object_o *onUp; // x21
  struct UIButtonKeys_o **p_selectOnUp; // x21
  UnityEngine_Object_o *selectOnUp; // x22
  struct UnityEngine_GameObject_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  UnityEngine_Object_o *onDown; // x21
  struct UIButtonKeys_o **p_selectOnDown; // x21
  UnityEngine_Object_o *selectOnDown; // x22
  struct UnityEngine_GameObject_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7

  if ( (byte_4CF2C67 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2C67 = 1;
  }
  onClick = (UnityEngine_Object_o *)this->fields.onClick;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onClick, 0, 0) )
  {
    p_selectOnClick = &this->fields.selectOnClick;
    selectOnClick = (UnityEngine_Object_o *)this->fields.selectOnClick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnClick, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnClick;
      if ( !*p_selectOnClick )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onClick = gameObject;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.onClick,
        (int32_t)gameObject,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      *p_selectOnClick = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectOnClick, 0, v15, v16, v17, v18, v19, v20);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onLeft = (UnityEngine_Object_o *)this->fields.onLeft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onLeft, 0, 0) )
  {
    p_selectOnLeft = &this->fields.selectOnLeft;
    selectOnLeft = (UnityEngine_Object_o *)this->fields.selectOnLeft;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnLeft, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnLeft;
      if ( !*p_selectOnLeft )
        goto LABEL_54;
      v24 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onLeft = v24;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onLeft, (int32_t)v24, v25, v26, v27, v28, v29, v30);
      *p_selectOnLeft = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectOnLeft, 0, v31, v32, v33, v34, v35, v36);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onRight = (UnityEngine_Object_o *)this->fields.onRight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onRight, 0, 0) )
  {
    p_selectOnRight = &this->fields.selectOnRight;
    selectOnRight = (UnityEngine_Object_o *)this->fields.selectOnRight;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnRight, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnRight;
      if ( !*p_selectOnRight )
        goto LABEL_54;
      v40 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onRight = v40;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onRight, (int32_t)v40, v41, v42, v43, v44, v45, v46);
      *p_selectOnRight = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectOnRight, 0, v47, v48, v49, v50, v51, v52);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onUp = (UnityEngine_Object_o *)this->fields.onUp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onUp, 0, 0) )
  {
    p_selectOnUp = &this->fields.selectOnUp;
    selectOnUp = (UnityEngine_Object_o *)this->fields.selectOnUp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnUp, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnUp;
      if ( !*p_selectOnUp )
        goto LABEL_54;
      v56 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onUp = v56;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onUp, (int32_t)v56, v57, v58, v59, v60, v61, v62);
      *p_selectOnUp = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectOnUp, 0, v63, v64, v65, v66, v67, v68);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onDown = (UnityEngine_Object_o *)this->fields.onDown;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onDown, 0, 0) )
  {
    p_selectOnDown = &this->fields.selectOnDown;
    selectOnDown = (UnityEngine_Object_o *)this->fields.selectOnDown;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnDown, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnDown;
      if ( *p_selectOnDown )
      {
        v72 = UnityEngine_Component__get_gameObject(v7, 0);
        this->fields.onDown = v72;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onDown, (int32_t)v72, v73, v74, v75, v76, v77, v78);
        *p_selectOnDown = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectOnDown, 0, v79, v80, v81, v82, v83, v84);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
        return;
      }
LABEL_54:
      sub_1C7BD40(v7, v6);
    }
  }
}