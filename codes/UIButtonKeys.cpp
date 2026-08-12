void UIButtonKeys___ctor(UIButtonKeys_o *this, const MethodInfo *method)
{
  if ( (byte_5974F93 & 1) == 0 )
  {
    sub_2213A60(&UIKeyNavigation_TypeInfo);
    byte_5974F93 = 1;
  }
  if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, method);
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
  __int64 v4; // x1
  struct UIButtonKeys_o **p_selectOnClick; // x21
  UnityEngine_Object_o *selectOnClick; // x22
  UnityEngine_Component_o *v7; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  UnityEngine_Object_o *onLeft; // x21
  struct UIButtonKeys_o **p_selectOnLeft; // x21
  UnityEngine_Object_o *selectOnLeft; // x22
  struct UnityEngine_GameObject_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  UnityEngine_Object_o *onRight; // x21
  struct UIButtonKeys_o **p_selectOnRight; // x21
  UnityEngine_Object_o *selectOnRight; // x22
  struct UnityEngine_GameObject_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x1
  UnityEngine_Object_o *onUp; // x21
  struct UIButtonKeys_o **p_selectOnUp; // x21
  UnityEngine_Object_o *selectOnUp; // x22
  struct UnityEngine_GameObject_o *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x1
  UnityEngine_Object_o *onDown; // x21
  __int64 v74; // x1
  struct UIButtonKeys_o **p_selectOnDown; // x21
  UnityEngine_Object_o *selectOnDown; // x22
  struct UnityEngine_GameObject_o *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x1

  if ( (byte_5974F92 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F92 = 1;
  }
  onClick = (UnityEngine_Object_o *)this->fields.onClick;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(onClick, 0, 0) )
  {
    p_selectOnClick = &this->fields.selectOnClick;
    selectOnClick = (UnityEngine_Object_o *)this->fields.selectOnClick;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(selectOnClick, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnClick;
      if ( !*p_selectOnClick )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onClick = gameObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.onClick,
        (int32_t)gameObject,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      *p_selectOnClick = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectOnClick, 0, v15, v16, v17, v18, v19, v20);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v21);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onLeft = (UnityEngine_Object_o *)this->fields.onLeft;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(onLeft, 0, 0) )
  {
    p_selectOnLeft = &this->fields.selectOnLeft;
    selectOnLeft = (UnityEngine_Object_o *)this->fields.selectOnLeft;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(selectOnLeft, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnLeft;
      if ( !*p_selectOnLeft )
        goto LABEL_54;
      v25 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onLeft = v25;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onLeft, (int32_t)v25, v26, v27, v28, v29, v30, v31);
      *p_selectOnLeft = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectOnLeft, 0, v32, v33, v34, v35, v36, v37);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v38);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onRight = (UnityEngine_Object_o *)this->fields.onRight;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(onRight, 0, 0) )
  {
    p_selectOnRight = &this->fields.selectOnRight;
    selectOnRight = (UnityEngine_Object_o *)this->fields.selectOnRight;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(selectOnRight, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnRight;
      if ( !*p_selectOnRight )
        goto LABEL_54;
      v42 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onRight = v42;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onRight, (int32_t)v42, v43, v44, v45, v46, v47, v48);
      *p_selectOnRight = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectOnRight, 0, v49, v50, v51, v52, v53, v54);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v55);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onUp = (UnityEngine_Object_o *)this->fields.onUp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(onUp, 0, 0) )
  {
    p_selectOnUp = &this->fields.selectOnUp;
    selectOnUp = (UnityEngine_Object_o *)this->fields.selectOnUp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(selectOnUp, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnUp;
      if ( !*p_selectOnUp )
        goto LABEL_54;
      v59 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onUp = v59;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onUp, (int32_t)v59, v60, v61, v62, v63, v64, v65);
      *p_selectOnUp = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectOnUp, 0, v66, v67, v68, v69, v70, v71);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v72);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onDown = (UnityEngine_Object_o *)this->fields.onDown;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(onDown, 0, 0) )
  {
    p_selectOnDown = &this->fields.selectOnDown;
    selectOnDown = (UnityEngine_Object_o *)this->fields.selectOnDown;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74);
    if ( UnityEngine_Object__op_Inequality(selectOnDown, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_selectOnDown;
      if ( *p_selectOnDown )
      {
        v77 = UnityEngine_Component__get_gameObject(v7, 0);
        this->fields.onDown = v77;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.onDown,
          (int32_t)v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83);
        *p_selectOnDown = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectOnDown, 0, v84, v85, v86, v87, v88, v89);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v90);
        NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
        return;
      }
LABEL_54:
      sub_2213CDC(v7, v4);
    }
  }
}