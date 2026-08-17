void ScrollConfirmDialog___cctor(const MethodInfo *method)
{
  struct ScrollConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_596D658 & 1) == 0 )
  {
    sub_2213A60(&ScrollConfirmDialog_TypeInfo);
    byte_596D658 = 1;
  }
  static_fields = ScrollConfirmDialog_TypeInfo->static_fields;
  static_fields->TITLE_WIDTH = 700;
  *(_QWORD *)&static_fields->CANCEL_BUTTON_DEFAULT_POSITION_X = 3273326592LL;
  *(_QWORD *)&static_fields->MESSAGE_POS_WHEN_ITEM_ICON_DISPLAY = 0xFFFFFF610000004ALL;
}


void ScrollConfirmDialog___ctor(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596D657 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596D657 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_OWORD *)&this->fields.CANCEL_BUTTON_DEFAULT_POSITION.fields.x = xmmword_E9D1D0;
  *(_OWORD *)&this->fields.DECIDE_BUTTON_DEFAULT_POSITION.fields.y = xmmword_E9C9F0;
  *(_OWORD *)&this->fields.CANCEL_BUTTON_AP_AND_ITEM_POSITION.fields.z = xmmword_E9C360;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScrollConfirmDialog__CheckAssertApAndItemDialog(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void ScrollConfirmDialog__Close(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollConfirmDialog__Close_43776688(this, 0, v2);
}


void ScrollConfirmDialog__Close_43776688(
        ScrollConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596D64C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_EndClose__);
    byte_596D64C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ScrollConfirmDialog__EndClose(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  ScrollConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ScrollConfirmDialog__EndOpen(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ScrollConfirmDialog__Init(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *scrollLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *descriptionSprite; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  ScrollConfirmDialog_c *v20; // x0
  const MethodInfo *v21; // x2

  if ( (byte_596D644 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrollConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D644 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_38;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_38:
    sub_2213CDC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  this->fields.decideSe = 8;
  ScrollConfirmDialog__SetDecideButtonActive(this, 1, v17);
  v20 = ScrollConfirmDialog_TypeInfo;
  if ( !*(&ScrollConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo, v18, v19);
    v20 = ScrollConfirmDialog_TypeInfo;
  }
  ScrollConfirmDialog__SetCanelButtonPositionX(this, v20->static_fields->CANCEL_BUTTON_DEFAULT_POSITION_X, v18);
  ScrollConfirmDialog__OffsetApAndItemLayout(this, 0, v21);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrollConfirmDialog__OffsetApAndItemLayout(
        ScrollConfirmDialog_o *this,
        bool IsApAndItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *buttonCancelObject; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *buttonDecideObject; // x21
  __int64 v24; // x8
  float v25; // s9
  __int64 v26; // x9
  __int64 v27; // x10
  __int64 v28; // x11
  float v29; // s15
  __int64 v30; // x12
  __int64 v31; // x13
  float v32; // s8
  int32_t v33; // w24
  UnityEngine_Component_o *v34; // x0
  __int64 v35; // x1
  int32_t v36; // w23
  int32_t v37; // w22
  int32_t v38; // w21
  float v39; // s12
  float v40; // s13
  float v41; // s14
  float v42; // s11
  float v43; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  float v49; // [xsp+48h] [xbp-38h]
  float v50; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D656 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D656 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsApAndItem, method);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) )
  {
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(titleLabel, 0, 0) )
    {
      messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( !UnityEngine_Object__op_Equality(messageLabel, 0, 0) )
      {
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        if ( !UnityEngine_Object__op_Equality(buttonCancelLabel, 0, 0) )
        {
          buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
          if ( !UnityEngine_Object__op_Equality(buttonDecideLabel, 0, 0) )
          {
            buttonCancelObject = (UnityEngine_Object_o *)this->fields.buttonCancelObject;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
            if ( !UnityEngine_Object__op_Equality(buttonCancelObject, 0, 0) )
            {
              buttonDecideObject = (UnityEngine_Object_o *)this->fields.buttonDecideObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
              if ( !UnityEngine_Object__op_Equality(buttonDecideObject, 0, 0) )
              {
                v24 = 112;
                if ( IsApAndItem )
                {
                  v24 = 136;
                  v25 = 194.0;
                }
                else
                {
                  v25 = 180.0;
                }
                if ( IsApAndItem )
                  v26 = 132;
                else
                  v26 = 108;
                if ( IsApAndItem )
                  v27 = 128;
                else
                  v27 = 104;
                v28 = 124;
                if ( IsApAndItem )
                  v29 = -103.0;
                else
                  v29 = -105.6;
                if ( IsApAndItem )
                {
                  v28 = 148;
                  v30 = 144;
                }
                else
                {
                  v30 = 120;
                }
                v31 = 116;
                if ( IsApAndItem )
                {
                  v31 = 140;
                  v32 = 0.0;
                }
                else
                {
                  v32 = -1.0;
                }
                if ( IsApAndItem )
                  v33 = 712;
                else
                  v33 = 720;
                v34 = (UnityEngine_Component_o *)this->fields.bgSprite;
                v35 = 24;
                if ( IsApAndItem )
                  v36 = 244;
                else
                  v36 = 235;
                if ( IsApAndItem )
                  v37 = 28;
                else
                  v37 = 30;
                if ( IsApAndItem )
                  v38 = 24;
                else
                  v38 = 30;
                if ( !v34 )
                  goto LABEL_70;
                v39 = *(float *)((char *)&this->klass + v27);
                v40 = *(float *)((char *)&this->klass + v26);
                v41 = *(float *)((char *)&this->klass + v24);
                v42 = *(float *)((char *)&this->klass + v31);
                v43 = IsApAndItem ? 50.0 : 36.9;
                v49 = *(float *)((char *)&this->klass + v28);
                v50 = *(float *)((char *)&this->klass + v30);
                gameObject = UnityEngine_Component__get_gameObject(v34, 0);
                GameObjectExtensions__SetLocalPositionY(gameObject, v43, 0);
                v34 = (UnityEngine_Component_o *)this->fields.bgSprite;
                if ( !v34 )
                  goto LABEL_70;
                UIWidget__set_width((UIWidget_o *)v34, v33, 0);
                v34 = (UnityEngine_Component_o *)this->fields.bgSprite;
                if ( !v34 )
                  goto LABEL_70;
                UIWidget__set_height((UIWidget_o *)v34, v36, 0);
                v34 = (UnityEngine_Component_o *)this->fields.titleLabel;
                if ( !v34 )
                  goto LABEL_70;
                v45 = UnityEngine_Component__get_gameObject(v34, 0);
                GameObjectExtensions__SetLocalPositionY(v45, v25, 0);
                v34 = (UnityEngine_Component_o *)this->fields.titleLabel;
                if ( !v34 )
                  goto LABEL_70;
                UILabel__set_fontSize((UILabel_o *)v34, v37, 0);
                v34 = (UnityEngine_Component_o *)this->fields.messageLabel;
                if ( !v34 )
                  goto LABEL_70;
                v46 = UnityEngine_Component__get_gameObject(v34, 0);
                GameObjectExtensions__SetLocalPositionY(v46, v29, 0);
                v34 = (UnityEngine_Component_o *)this->fields.messageLabel;
                if ( !v34 )
                  goto LABEL_70;
                UILabel__set_fontSize((UILabel_o *)v34, v38, 0);
                v34 = (UnityEngine_Component_o *)this->fields.buttonCancelLabel;
                if ( !v34
                  || (UILabel__set_fontSize((UILabel_o *)v34, v38, 0),
                      (v34 = (UnityEngine_Component_o *)this->fields.buttonDecideLabel) == 0)
                  || (UILabel__set_fontSize((UILabel_o *)v34, v38, 0),
                      (v34 = (UnityEngine_Component_o *)this->fields.buttonCancelLabel) == 0)
                  || (v47 = UnityEngine_Component__get_gameObject(v34, 0),
                      GameObjectExtensions__SetLocalPositionY(v47, v32, 0),
                      (v34 = (UnityEngine_Component_o *)this->fields.buttonDecideLabel) == 0) )
                {
LABEL_70:
                  sub_2213CDC(v34, v35);
                }
                v48 = UnityEngine_Component__get_gameObject(v34, 0);
                GameObjectExtensions__SetLocalPositionY(v48, v32, 0);
                v51.fields.x = v39;
                v51.fields.y = v40;
                v51.fields.z = v41;
                GameObjectExtensions__SetLocalPosition(this->fields.buttonCancelObject, v51, 0);
                v52.fields.x = v42;
                v52.fields.z = v49;
                v52.fields.y = v50;
                GameObjectExtensions__SetLocalPosition(this->fields.buttonDecideObject, v52, 0);
              }
            }
          }
        }
      }
    }
  }
}


void ScrollConfirmDialog__OnClickCancel(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x22
  Il2CppObject *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  UnityEngine_GameObject_o *buttonDecideObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  System_Func_object__bool__o *v29; // x21
  int32_t v30; // w20
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_c *v35; // x0
  UnityEngine_Object_o *questDialogIconImageComponent; // x20
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596D64F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_string___);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_OnClickCancel__);
    sub_2213A60(&Method_ScrollConfirmDialog__OnClickCancel_b__76_0__);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_596D64F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
    v5 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    if ( v6 )
    {
      items = v6->fields._items;
      v16 = Method_System_Collections_Generic_List_string__Add__;
      ++v6->fields._version;
      if ( items )
      {
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v4,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v4;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v4, v9, v10, v11, v12, v13, v14);
        }
        v25 = v6->fields._items;
        v26 = Method_System_Collections_Generic_List_string__Add__;
        ++v6->fields._version;
        if ( v25 )
        {
          v27 = v6->fields._size;
          if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v5,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &v25->obj.klass + v27;
            v6->fields._size = v27 + 1;
            v28[4] = (Il2CppClass *)v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v5, v19, v20, v21, v22, v23, v24);
          }
          buttonDecideObject = this->fields.buttonDecideObject;
          if ( buttonDecideObject )
          {
            if ( UnityEngine_GameObject__get_activeSelf(buttonDecideObject, 0) )
            {
              v29 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v29,
                (Il2CppObject *)this,
                Method_ScrollConfirmDialog__OnClickCancel_b__76_0__,
                0);
              v30 = BasicHelper__Any_object_(
                      (System_Collections_Generic_List_T__o *)v6,
                      (System_Func_T__bool__o *)v29,
                      (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_string___);
            }
            else
            {
              v30 = 0;
            }
            v31 = Method_ScrollConfirmDialog_OnClickCancel__;
            if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
              v31 = (_QWORD *)sub_2213A78(Method_ScrollConfirmDialog_OnClickCancel__);
            v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v31, v31[4]);
            OverwriteAssetSoundName__PlaySystemSe(v32, v30, 0, 0);
            v35 = UnityEngine_Object_TypeInfo;
            questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
            this->fields.isButtonEnable = 0;
            if ( !*(&v35->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v35, v33, v34);
            if ( !UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
              goto LABEL_28;
            buttonDecideObject = (UnityEngine_GameObject_o *)this->fields.questDialogIconImageComponent;
            if ( buttonDecideObject )
            {
              buttonDecideObject = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)buttonDecideObject,
                                     0);
              if ( buttonDecideObject )
              {
                UnityEngine_GameObject__SetActive(buttonDecideObject, 0, 0);
                buttonDecideObject = (UnityEngine_GameObject_o *)this->fields.questDialogIconImageComponent;
                if ( buttonDecideObject )
                {
                  QuestDialogIconImageComponent__DestroyIcon((QuestDialogIconImageComponent_o *)buttonDecideObject, 0);
LABEL_28:
                  clickFunc = this->fields.clickFunc;
                  if ( clickFunc )
                    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
                      clickFunc->fields.method_code,
                      0,
                      clickFunc->fields.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_2213CDC(buttonDecideObject, v8);
  }
}


void ScrollConfirmDialog__OnClickClose(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596D650 & 1) == 0 )
  {
    sub_2213A60(&Method_ScrollConfirmDialog_OnClickClose__);
    byte_596D650 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScrollConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void ScrollConfirmDialog__OnClickDecide(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t decideSe; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *questDialogIconImageComponent; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596D64D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_OnClickDecide__);
    byte_596D64D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollConfirmDialog_OnClickDecide__;
    if ( this->fields.isDecideBtnSe )
    {
      if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_ScrollConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      decideSe = this->fields.decideSe;
    }
    else
    {
      if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_ScrollConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      decideSe = 0;
    }
    OverwriteAssetSoundName__PlaySystemSe(v4, decideSe, 0, 0);
    questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent) == 0) )
      {
        sub_2213CDC(gameObject, v9);
      }
      QuestDialogIconImageComponent__DestroyIcon((QuestDialogIconImageComponent_o *)gameObject, 0);
    }
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void ScrollConfirmDialog__OnClickDecide2(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *questDialogIconImageComponent; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596D64E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_OnClickDecide2__);
    byte_596D64E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollConfirmDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScrollConfirmDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v7 = UnityEngine_Object_TypeInfo;
    questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
    this->fields.isButtonEnable = 0;
    if ( !*(&v7->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
    if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent) == 0) )
      {
        sub_2213CDC(gameObject, v9);
      }
      QuestDialogIconImageComponent__DestroyIcon((QuestDialogIconImageComponent_o *)gameObject, 0);
    }
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void ScrollConfirmDialog__Open(
        ScrollConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *scrollMessage,
        System_String_o *footMessage,
        ScrollConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v13; // x23
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *scrollLabel; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *gameObject; // x0
  System_String_o *v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *descriptionSprite; // x21
  __int64 v24; // x2
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v26; // x2
  System_String_o *v27; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *v31; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *v35; // x20

  if ( (byte_596D645 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D645 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    scrollMessage,
    footMessage,
    (int32_t)func,
    (int32_t)method,
    v6,
    v7);
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v14);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_40;
    if ( scrollMessage )
      v21 = scrollMessage;
    else
      v21 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v21, 0);
    ScrollConfirmDialog__ResetScrollPosition(this, 0.0, 1, v22);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v24);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_40;
    if ( footMessage )
      v27 = footMessage;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v27, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v26);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v31 = this->fields.buttonDecideLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
    if ( !v31 )
      goto LABEL_40;
    UILabel__set_text(v31, (System_String_o *)gameObject, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v35 = this->fields.buttonCancelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
    if ( v35 )
    {
      UILabel__set_text(v35, (System_String_o *)gameObject, 0);
      goto LABEL_39;
    }
LABEL_40:
    sub_2213CDC(gameObject, v18);
  }
LABEL_39:
  *(_WORD *)&this->fields.isButtonEnable = 0;
}


void ScrollConfirmDialog__OpenApAndItemDialog(
        ScrollConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *explanationText,
        System_String_o *consumeApCountText,
        System_String_o *apCountText,
        System_String_o *itemName,
        System_String_o *itemCostNumText,
        int32_t itemNum,
        System_String_o *footMessage,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        ScrollConfirmDialog_ClickDelegate_o *func,
        int32_t decideSe,
        const MethodInfo *method)
{
  System_Action_o *v20; // x27
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *scrollLabel; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  ScrollConfirmDialog_c *v30; // x0
  UnityEngine_Object_o *descriptionSprite; // x26
  __int64 v32; // x2
  UnityEngine_Object_o *questDialogIconImageComponent; // x26
  __int64 v34; // x2
  UnityEngine_Object_o *RearMessageLabel; // x26
  __int64 v36; // x2
  UnityEngine_Object_o *apAndItemDialogRoot; // x26
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *consumeApCountHeadLabel; // x25
  UILabel_o *apCountHeadLabel; // x24
  UILabel_o *consumeItemCountLabel; // x23
  System_String_o *v44; // x0
  UILabel_o *itemCountLabel; // x22
  System_String_o *v46; // x0
  UILabel_o *itemCountNumLabel; // x21
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v49; // x2
  System_String_o *v50; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v52; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v54; // x2

  if ( (byte_596D64B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_EndOpen__);
    sub_2213A60(&ScrollConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_11344/*"QUEST_CONFIRM_POSSESSION_ITEM"*/);
    sub_2213A60(&StringLiteral_11324/*"QUEST_CONFIRM_AP"*/);
    sub_2213A60(&StringLiteral_11330/*"QUEST_CONFIRM_CONSUME_AP"*/);
    sub_2213A60(&StringLiteral_11336/*"QUEST_CONFIRM_CONSUME_ITEM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D64B = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    explanationText,
    consumeApCountText,
    (int32_t)apCountText,
    (int32_t)itemName,
    (bool)itemCostNumText,
    itemNum);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v21);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    v30 = ScrollConfirmDialog_TypeInfo;
    if ( !*(&ScrollConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo, v28, v29);
      v30 = ScrollConfirmDialog_TypeInfo;
    }
    ScrollConfirmDialog__ResetScrollPosition(
      this,
      (float)v30->static_fields->MESSAGE_POS_WHEN_ITEM_ICON_DISPLAY,
      1,
      v29);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_63;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v32);
  if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.questDialogIconImageComponent;
    if ( !gameObject )
      goto LABEL_63;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  RearMessageLabel = (UnityEngine_Object_o *)this->fields.RearMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v34);
  if ( UnityEngine_Object__op_Inequality(RearMessageLabel, 0, 0) )
  {
    gameObject = this->fields.RearMessageLabel;
    if ( !gameObject )
      goto LABEL_63;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  apAndItemDialogRoot = (UnityEngine_Object_o *)this->fields.apAndItemDialogRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v36);
  if ( UnityEngine_Object__op_Inequality(apAndItemDialogRoot, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.apAndItemDialogRoot;
    if ( !gameObject )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = this->fields.explanationLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, explanationText, 0);
    consumeApCountHeadLabel = this->fields.consumeApCountHeadLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11330/*"QUEST_CONFIRM_CONSUME_AP"*/, 0);
    if ( !consumeApCountHeadLabel )
      goto LABEL_63;
    UILabel__set_text(consumeApCountHeadLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.consumeApCountValueLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, consumeApCountText, 0);
    apCountHeadLabel = this->fields.apCountHeadLabel;
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11324/*"QUEST_CONFIRM_AP"*/, 0);
    if ( !apCountHeadLabel )
      goto LABEL_63;
    UILabel__set_text(apCountHeadLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.apCountValueLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, apCountText, 0);
    consumeItemCountLabel = this->fields.consumeItemCountLabel;
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11336/*"QUEST_CONFIRM_CONSUME_ITEM"*/, 0);
    gameObject = (UILabel_o *)System_String__Format(v44, (Il2CppObject *)itemName, 0);
    if ( !consumeItemCountLabel )
      goto LABEL_63;
    UILabel__set_text(consumeItemCountLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.consumeItemCountNumLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, itemCostNumText, 0);
    itemCountLabel = this->fields.itemCountLabel;
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11344/*"QUEST_CONFIRM_POSSESSION_ITEM"*/, 0);
    gameObject = (UILabel_o *)System_String__Format(v46, (Il2CppObject *)itemName, 0);
    if ( !itemCountLabel )
      goto LABEL_63;
    UILabel__set_text(itemCountLabel, (System_String_o *)gameObject, 0);
    itemCountNumLabel = this->fields.itemCountNumLabel;
    gameObject = (UILabel_o *)LocalizationManager__GetNumberFormat(itemNum, 0);
    if ( !itemCountNumLabel )
      goto LABEL_63;
    UILabel__set_text(itemCountNumLabel, (System_String_o *)gameObject, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v38);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_63;
    if ( footMessage )
      v50 = footMessage;
    else
      v50 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v50, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v49);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v52);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text(gameObject, cancleTxt, 0);
      goto LABEL_62;
    }
LABEL_63:
    sub_2213CDC(gameObject, v25);
  }
LABEL_62:
  ScrollConfirmDialog__OffsetApAndItemLayout(this, 1, v54);
  this->fields.decideSe = decideSe;
  *(_WORD *)&this->fields.isButtonEnable = 256;
}


void ScrollConfirmDialog__OpenDecideDlg(
        ScrollConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *scrollMessage,
        System_String_o *footMessage,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        ScrollConfirmDialog_ClickDelegate_o *func,
        int32_t decideSe,
        float offY,
        bool centering,
        const MethodInfo *method)
{
  System_Action_o *v19; // x26
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *scrollLabel; // x25
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *gameObject; // x0
  System_String_o *v27; // x1
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *descriptionSprite; // x24
  __int64 v30; // x2
  UnityEngine_Object_o *questDialogIconImageComponent; // x24
  __int64 v32; // x2
  UnityEngine_Object_o *RearMessageLabel; // x24
  __int64 v34; // x2
  UnityEngine_Object_o *apAndItemDialogRoot; // x24
  __int64 v36; // x2
  UnityEngine_Object_o *messageLabel; // x24
  __int64 v38; // x2
  System_String_o *v39; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x23
  __int64 v41; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x22

  if ( (byte_596D647 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D647 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    scrollMessage,
    footMessage,
    (int32_t)decideTxt,
    (int32_t)cancleTxt,
    (bool)func,
    decideSe);
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v20);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_54;
    if ( scrollMessage )
      v27 = scrollMessage;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v27, 0);
    ScrollConfirmDialog__ResetScrollPosition(this, offY, centering, v28);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_54;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v30);
  if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.questDialogIconImageComponent;
    if ( !gameObject )
      goto LABEL_54;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  RearMessageLabel = (UnityEngine_Object_o *)this->fields.RearMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v32);
  if ( UnityEngine_Object__op_Inequality(RearMessageLabel, 0, 0) )
  {
    gameObject = this->fields.RearMessageLabel;
    if ( !gameObject )
      goto LABEL_54;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  apAndItemDialogRoot = (UnityEngine_Object_o *)this->fields.apAndItemDialogRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v34);
  if ( UnityEngine_Object__op_Inequality(apAndItemDialogRoot, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.apAndItemDialogRoot;
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v36);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_54;
    if ( footMessage )
      v39 = footMessage;
    else
      v39 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v39, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v38);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_54;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v41);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_54;
    UILabel__set_text(gameObject, cancleTxt, 0);
  }
  gameObject = (UILabel_o *)this->fields.scrollView;
  if ( !gameObject )
LABEL_54:
    sub_2213CDC(gameObject, v24);
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  this->fields.decideSe = decideSe;
  *(_WORD *)&this->fields.isButtonEnable = 256;
}


void ScrollConfirmDialog__OpenImageDlg(
        ScrollConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *imageName,
        System_String_o *footMessage,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        ScrollConfirmDialog_ClickDelegate_o *func,
        int32_t decideSe,
        const MethodInfo *method)
{
  System_Action_o *v16; // x26
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *scrollLabel; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *descriptionSprite; // x25
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UISprite_o *v28; // x25
  __int64 v29; // x2
  UISprite_o *v30; // x25
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_GameObject_o *v33; // x24
  UnityEngine_Object_o *messageLabel; // x24
  __int64 v35; // x2
  System_String_o *v36; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x23
  __int64 v38; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x22

  if ( (byte_596D64A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D64A = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    imageName,
    footMessage,
    (int32_t)decideTxt,
    (int32_t)cancleTxt,
    (bool)func,
    decideSe);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v17);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v28 = this->fields.descriptionSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26, v27);
    if ( !AtlasManager__SetEventUI(v28, imageName, 0) )
    {
      v30 = this->fields.descriptionSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v29);
      AtlasManager__SetBanner(v30, imageName, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_44;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
      gameObject,
      gameObject->klass[2]._1.generic_class);
    gameObject = (UnityEngine_Component_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_44;
    v33 = UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v31, v32);
    NGUITools__UpdateWidgetCollider_56414228(v33, 1, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v25);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_44;
    if ( footMessage )
      v36 = footMessage;
    else
      v36 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v36, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v35);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v38);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, cancleTxt, 0);
      goto LABEL_43;
    }
LABEL_44:
    sub_2213CDC(gameObject, v21);
  }
LABEL_43:
  this->fields.decideSe = decideSe;
  *(_WORD *)&this->fields.isButtonEnable = 256;
}


void ScrollConfirmDialog__OpenItemIconDlg(
        ScrollConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *scrollMessage,
        QuestConsumeItemEntity_o *itemConsumeEnt,
        System_String_o *rearScrollMessage,
        System_String_o *footMessage,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        ScrollConfirmDialog_ClickDelegate_o *func,
        int32_t decideSe,
        const MethodInfo *method)
{
  System_Action_o *v17; // x27
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *scrollLabel; // x26
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *gameObject; // x0
  System_String_o *v25; // x1
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  ScrollConfirmDialog_c *v28; // x0
  UnityEngine_Object_o *descriptionSprite; // x25
  __int64 v30; // x2
  UnityEngine_Object_o *questDialogIconImageComponent; // x25
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_GameObject_o *v35; // x24
  UnityEngine_Object_o *RearMessageLabel; // x24
  bool v37; // w0
  __int64 v38; // x2
  __int64 v39; // x2
  float x; // s8
  float z; // s9
  int method_ptr; // s10
  UnityEngine_Object_o *apAndItemDialogRoot; // x23
  __int64 v44; // x2
  UnityEngine_Object_o *messageLabel; // x23
  __int64 v46; // x2
  System_String_o *v47; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x22
  __int64 v49; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x21
  System_String_o *v51; // [xsp+8h] [xbp-88h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D648 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_EndOpen__);
    sub_2213A60(&ScrollConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D648 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    scrollMessage,
    (System_String_o *)itemConsumeEnt,
    (int32_t)rearScrollMessage,
    (int32_t)footMessage,
    (bool)decideTxt,
    (bool)cancleTxt);
  v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v18);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_70;
    if ( scrollMessage )
      v25 = scrollMessage;
    else
      v25 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v25, 0);
    v28 = ScrollConfirmDialog_TypeInfo;
    if ( !*(&ScrollConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo, v26, v27);
      v28 = ScrollConfirmDialog_TypeInfo;
    }
    ScrollConfirmDialog__ResetScrollPosition(
      this,
      (float)v28->static_fields->MESSAGE_POS_WHEN_ITEM_ICON_DISPLAY,
      1,
      v27);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_70;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v30);
  if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.questDialogIconImageComponent;
    if ( !gameObject )
      goto LABEL_70;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UILabel_o *)this->fields.questDialogIconImageComponent;
    if ( !gameObject )
      goto LABEL_70;
    QuestDialogIconImageComponent__SetIconData((QuestDialogIconImageComponent_o *)gameObject, itemConsumeEnt, 0);
    gameObject = (UILabel_o *)this->fields.questDialogIconImageComponent;
    if ( !gameObject )
      goto LABEL_70;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v33, v34);
    NGUITools__UpdateWidgetCollider_56414228(v35, 1, 0);
    gameObject = (UILabel_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_70;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  }
  RearMessageLabel = (UnityEngine_Object_o *)this->fields.RearMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v32);
  v37 = UnityEngine_Object__op_Inequality(RearMessageLabel, 0, 0);
  if ( rearScrollMessage
    && v37
    && System_String__op_Inequality(rearScrollMessage, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    gameObject = this->fields.RearMessageLabel;
    if ( !gameObject )
      goto LABEL_70;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = this->fields.RearMessageLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, rearScrollMessage, 0);
    gameObject = this->fields.RearMessageLabel;
    if ( !gameObject )
      goto LABEL_70;
    gameObject = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_70;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    x = localPosition.fields.x;
    z = localPosition.fields.z;
    gameObject = (UILabel_o *)ScrollConfirmDialog_TypeInfo;
    if ( !*(&ScrollConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo, v22, v39);
      gameObject = (UILabel_o *)ScrollConfirmDialog_TypeInfo;
    }
    if ( !this->fields.RearMessageLabel )
      goto LABEL_70;
    method_ptr = gameObject->fields.onChange->fields.method_ptr;
    gameObject = (UILabel_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.RearMessageLabel,
                                0);
    if ( !gameObject )
      goto LABEL_70;
    v54.fields.y = (float)method_ptr;
    v54.fields.x = x;
    v54.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v54, 0);
    gameObject = (UILabel_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_70;
    HIDWORD(gameObject->fields.mTrans) = 1;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  }
  apAndItemDialogRoot = (UnityEngine_Object_o *)this->fields.apAndItemDialogRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v38);
  if ( UnityEngine_Object__op_Inequality(apAndItemDialogRoot, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.apAndItemDialogRoot;
    if ( !gameObject )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v44);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_70;
    if ( footMessage )
      v47 = footMessage;
    else
      v47 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v47, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v46);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v49);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text(gameObject, v51, 0);
      goto LABEL_69;
    }
LABEL_70:
    sub_2213CDC(gameObject, v22);
  }
LABEL_69:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  this->fields.decideSe = decideSe;
}


void ScrollConfirmDialog__OpenNoticeDlg(
        ScrollConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *scrollMessage,
        System_String_o *footMessage,
        System_String_o *cancleTxt,
        ScrollConfirmDialog_ClickDelegate_o *func,
        float offY,
        bool centering,
        const MethodInfo *method)
{
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  ScrollConfirmDialog_c *v19; // x0
  const MethodInfo *v20; // [xsp+8h] [xbp-68h]

  if ( (byte_596D649 & 1) == 0 )
  {
    sub_2213A60(&ScrollConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D649 = 1;
  }
  ScrollConfirmDialog__SetDecideButtonActive(this, 0, (const MethodInfo *)scrollMessage);
  v19 = ScrollConfirmDialog_TypeInfo;
  if ( !*(&ScrollConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo, v17, v18);
    v19 = ScrollConfirmDialog_TypeInfo;
  }
  ScrollConfirmDialog__SetCanelButtonPositionX(this, v19->static_fields->CANCEL_BUTTON_CENTER_POSITION_X, v17);
  ScrollConfirmDialog__OpenDecideDlg(
    this,
    title,
    scrollMessage,
    footMessage,
    (System_String_o *)StringLiteral_1/*""*/,
    cancleTxt,
    func,
    8,
    offY,
    centering,
    v20);
}


void ScrollConfirmDialog__Open_43771380(
        ScrollConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *scrollMessage,
        System_String_o *footMessage,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        ScrollConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  System_Action_o *v15; // x25
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *scrollLabel; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *gameObject; // x0
  System_String_o *v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *descriptionSprite; // x23
  __int64 v26; // x2
  UnityEngine_Object_o *questDialogIconImageComponent; // x23
  __int64 v28; // x2
  UnityEngine_Object_o *RearMessageLabel; // x23
  __int64 v30; // x2
  UnityEngine_Object_o *apAndItemDialogRoot; // x23
  __int64 v32; // x2
  UnityEngine_Object_o *messageLabel; // x23
  __int64 v34; // x2
  System_String_o *v35; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x22
  __int64 v37; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x21

  if ( (byte_596D646 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D646 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    scrollMessage,
    footMessage,
    (int32_t)decideTxt,
    (int32_t)cancleTxt,
    (bool)func,
    (bool)method);
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v16);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_53;
    if ( scrollMessage )
      v23 = scrollMessage;
    else
      v23 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v23, 0);
    ScrollConfirmDialog__ResetScrollPosition(this, 0.0, 1, v24);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v26);
  if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.questDialogIconImageComponent;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  RearMessageLabel = (UnityEngine_Object_o *)this->fields.RearMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v28);
  if ( UnityEngine_Object__op_Inequality(RearMessageLabel, 0, 0) )
  {
    gameObject = this->fields.RearMessageLabel;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  apAndItemDialogRoot = (UnityEngine_Object_o *)this->fields.apAndItemDialogRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v30);
  if ( UnityEngine_Object__op_Inequality(apAndItemDialogRoot, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.apAndItemDialogRoot;
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v32);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_53;
    if ( footMessage )
      v35 = footMessage;
    else
      v35 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v35, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v34);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_53;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v37);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text(gameObject, cancleTxt, 0);
      goto LABEL_52;
    }
LABEL_53:
    sub_2213CDC(gameObject, v20);
  }
LABEL_52:
  *(_WORD *)&this->fields.isButtonEnable = 0;
}


// local variable allocation has failed, the output may be wrong!
void ScrollConfirmDialog__ResetScrollPosition(
        ScrollConfirmDialog_o *this,
        float offY,
        bool centering,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollLabel; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v11; // x2
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v14; // x8
  int v15; // w8
  UnityEngine_Object_o *scrollLabelSpace; // x20
  struct UILabel_o *v17; // x8
  UnityEngine_Component_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x1
  UIRect_o *v20; // x0
  int v21; // w8
  int32_t v22; // w5
  float x; // s9
  float z; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D651 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D651 = 1;
  }
  scrollLabel = (UnityEngine_Component_o *)this->fields.scrollLabel;
  if ( !scrollLabel )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject(scrollLabel, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v8, v9);
  NGUITools__UpdateWidgetCollider_56414228(gameObject, 1, 0);
  if ( centering )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_36;
    scrollLabel = (UnityEngine_Component_o *)scrollView->fields.mPanel;
    if ( !scrollLabel )
      goto LABEL_36;
    height = UIPanel__get_height((UIPanel_o *)scrollLabel, 0);
    v14 = this->fields.scrollLabel;
    if ( !v14 )
      goto LABEL_36;
    if ( height <= (float)v14->fields.mHeight )
      v15 = 1;
    else
      v15 = 4;
    scrollView->fields.contentPivot = v15;
  }
  scrollLabelSpace = (UnityEngine_Object_o *)this->fields.scrollLabelSpace;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, centering, v11);
  if ( UnityEngine_Object__op_Inequality(scrollLabelSpace, 0, 0) )
  {
    scrollLabel = (UnityEngine_Component_o *)this->fields.scrollLabelSpace;
    if ( !scrollLabel )
      goto LABEL_36;
    scrollLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)scrollLabel,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    v17 = this->fields.scrollLabel;
    v18 = scrollLabel;
    if ( offY >= 0.0 )
    {
      if ( !v17 )
        goto LABEL_36;
      scrollLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.scrollLabel,
                                                 0);
      if ( !v18 )
        goto LABEL_36;
      v19 = (UnityEngine_GameObject_o *)scrollLabel;
      v20 = (UIRect_o *)v18;
      v22 = 0;
    }
    else
    {
      if ( !v17 )
        goto LABEL_36;
      scrollLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.scrollLabel,
                                                 0);
      if ( !v18 )
        goto LABEL_36;
      v19 = (UnityEngine_GameObject_o *)scrollLabel;
      v20 = (UIRect_o *)v18;
      if ( offY == INFINITY )
        v21 = 0x80000000;
      else
        v21 = (int)offY;
      v22 = -v21;
    }
    UIRect__SetAnchor_56478636(v20, v19, 0, 0, 0, v22, 0);
  }
  scrollLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollLabel )
    goto LABEL_36;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollLabel, 0);
  if ( offY < 0.0 )
    return;
  scrollLabel = (UnityEngine_Component_o *)this->fields.scrollLabel;
  if ( !scrollLabel
    || (scrollLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollLabel, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollLabel, 0),
        (scrollLabel = (UnityEngine_Component_o *)this->fields.scrollLabel) == 0)
    || (x = localPosition.fields.x,
        z = localPosition.fields.z,
        (scrollLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollLabel, 0)) == 0) )
  {
LABEL_36:
    sub_2213CDC(scrollLabel, centering);
  }
  v26.fields.x = x;
  v26.fields.y = offY;
  v26.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollLabel, v26, 0);
}


void ScrollConfirmDialog__SetCanelButtonPositionX(ScrollConfirmDialog_o *this, float x, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *buttonCancelObject; // x20

  if ( (byte_596D654 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D654 = 1;
  }
  buttonCancelObject = (UnityEngine_Object_o *)this->fields.buttonCancelObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( !UnityEngine_Object__op_Equality(buttonCancelObject, 0, 0) )
    GameObjectExtensions__SetLocalPositionX(this->fields.buttonCancelObject, x, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrollConfirmDialog__SetDecideButtonActive(ScrollConfirmDialog_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596D653 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D653 = 1;
  }
  buttonDecideObject = (UnityEngine_Object_o *)this->fields.buttonDecideObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive, method);
  if ( !UnityEngine_Object__op_Equality(buttonDecideObject, 0, 0) )
  {
    v7 = this->fields.buttonDecideObject;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void ScrollConfirmDialog__SetTitleText(ScrollConfirmDialog_o *this, System_String_o *title, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  System_String_o *v8; // x1
  __int64 v9; // x2
  UILabel_o *v10; // x19

  if ( (byte_596D652 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrollConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D652 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, title, method);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      goto LABEL_15;
    v8 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v7, v8, 0);
    v10 = this->fields.titleLabel;
    v7 = (UILabel_o *)ScrollConfirmDialog_TypeInfo;
    if ( !*(&ScrollConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo, v6, v9);
    if ( !v10 )
LABEL_15:
      sub_2213CDC(v7, v6);
    UILabel__SetCondensedScale(v10, ScrollConfirmDialog_TypeInfo->static_fields->TITLE_WIDTH, 0, 0);
  }
}


bool ScrollConfirmDialog___OnClickCancel_b__76_0(
        ScrollConfirmDialog_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  struct UILabel_o *buttonCancelLabel; // x8

  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !buttonCancelLabel || !x )
    sub_2213CDC(this, x);
  return System_String__Equals_75686512(x, buttonCancelLabel->fields.mText, 0);
}


UILabel_o *ScrollConfirmDialog__get_ButtonCancelLabel(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *ScrollConfirmDialog__get_ButtonDecideLabel(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}


UILabel_o *ScrollConfirmDialog__get_ScrollLabel(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.scrollLabel;
}


System_String_o *ScrollConfirmDialog__get_closeBtnPath(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_596D655 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596D655 = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void ScrollConfirmDialog_ClickDelegate___ctor(
        ScrollConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2007F24;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2007EDC;
}


System_IAsyncResult_o *ScrollConfirmDialog_ClickDelegate__BeginInvoke(
        ScrollConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ScrollConfirmDialog_ClickDelegate__EndInvoke(
        ScrollConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScrollConfirmDialog_ClickDelegate__Invoke(
        ScrollConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}