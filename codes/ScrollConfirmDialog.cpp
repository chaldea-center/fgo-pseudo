void ScrollConfirmDialog___cctor(const MethodInfo *method)
{
  struct ScrollConfirmDialog_StaticFields *static_fields; // x8

  if ( (byte_4D29589 & 1) == 0 )
  {
    sub_1C94098(&ScrollConfirmDialog_TypeInfo);
    byte_4D29589 = 1;
  }
  static_fields = ScrollConfirmDialog_TypeInfo->static_fields;
  static_fields->TITLE_WIDTH = 700;
  *(_QWORD *)&static_fields->CANCEL_BUTTON_DEFAULT_POSITION_X = 3273326592LL;
  *(_QWORD *)&static_fields->MESSAGE_POS_WHEN_ITEM_ICON_DISPLAY = 0xFFFFFF610000004ALL;
}


void ScrollConfirmDialog___ctor(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D29588 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D29588 = 1;
  }
  *(_OWORD *)&this->fields.CANCEL_BUTTON_DEFAULT_POSITION.fields.x = xmmword_CFFF80;
  *(_OWORD *)&this->fields.DECIDE_BUTTON_DEFAULT_POSITION.fields.y = xmmword_CFEA40;
  *(_OWORD *)&this->fields.CANCEL_BUTTON_AP_AND_ITEM_POSITION.fields.z = xmmword_CFF2A0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScrollConfirmDialog__CheckAssertApAndItemDialog(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void ScrollConfirmDialog__Close(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollConfirmDialog__Close_37297916(this, 0, v2);
}


void ScrollConfirmDialog__Close_37297916(
        ScrollConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2957D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_EndClose__);
    byte_4D2957D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ScrollConfirmDialog__EndClose(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  ScrollConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *scrollLabel; // x20
  UnityEngine_Object_o *descriptionSprite; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  ScrollConfirmDialog_c *v13; // x0
  const MethodInfo *v14; // x2

  if ( (byte_4D29575 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ScrollConfirmDialog_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29575 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  this->fields.decideSe = 8;
  ScrollConfirmDialog__SetDecideButtonActive(this, 1, v11);
  v13 = ScrollConfirmDialog_TypeInfo;
  if ( !ScrollConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo);
    v13 = ScrollConfirmDialog_TypeInfo;
  }
  ScrollConfirmDialog__SetCanelButtonPositionX(this, v13->static_fields->CANCEL_BUTTON_DEFAULT_POSITION_X, v12);
  ScrollConfirmDialog__OffsetApAndItemLayout(this, 0, v14);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ScrollConfirmDialog__OffsetApAndItemLayout(
        ScrollConfirmDialog_o *this,
        bool IsApAndItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x21
  UnityEngine_Object_o *titleLabel; // x21
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *buttonCancelLabel; // x21
  UnityEngine_Object_o *buttonDecideLabel; // x21
  UnityEngine_Object_o *buttonCancelObject; // x21
  UnityEngine_Object_o *buttonDecideObject; // x21
  __int64 v12; // x9
  __int64 v13; // x8
  int32_t v14; // w23
  __int64 v15; // x10
  __int64 v16; // x12
  __int64 v17; // x1
  __int64 v18; // x11
  __int64 v19; // x13
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  int32_t v22; // w24
  int32_t v23; // w22
  int32_t v24; // w21
  float v25; // s15
  float v26; // s14
  float v27; // s13
  float v28; // s11
  float v29; // s12
  float v30; // s10
  float v31; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  float v37; // [xsp+48h] [xbp-38h]
  float v38; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D29587 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29587 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) )
  {
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(titleLabel, 0, 0) )
    {
      messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(messageLabel, 0, 0) )
      {
        buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(buttonCancelLabel, 0, 0) )
        {
          buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(buttonDecideLabel, 0, 0) )
          {
            buttonCancelObject = (UnityEngine_Object_o *)this->fields.buttonCancelObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(buttonCancelObject, 0, 0) )
            {
              buttonDecideObject = (UnityEngine_Object_o *)this->fields.buttonDecideObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(buttonDecideObject, 0, 0) )
              {
                v12 = 136;
                if ( IsApAndItem )
                {
                  v13 = 148;
                }
                else
                {
                  v12 = 112;
                  v13 = 124;
                }
                if ( IsApAndItem )
                  v14 = 244;
                else
                  v14 = 235;
                v15 = 108;
                v16 = 104;
                v17 = 140;
                if ( IsApAndItem )
                {
                  v15 = 132;
                  v16 = 128;
                  v18 = 144;
                }
                else
                {
                  v18 = 120;
                }
                if ( IsApAndItem )
                  v19 = 140;
                else
                  v19 = 116;
                v20 = (UnityEngine_Component_o *)this->fields.bgSprite;
                if ( IsApAndItem )
                  v21 = 194.0;
                else
                  v21 = 180.0;
                if ( IsApAndItem )
                  v22 = 712;
                else
                  v22 = 720;
                if ( IsApAndItem )
                  v23 = 28;
                else
                  v23 = 30;
                if ( IsApAndItem )
                  v24 = 24;
                else
                  v24 = 30;
                if ( IsApAndItem )
                  v25 = -103.0;
                else
                  v25 = -105.6;
                if ( IsApAndItem )
                  v26 = 0.0;
                else
                  v26 = -1.0;
                if ( !v20 )
                  goto LABEL_70;
                v27 = *(float *)((char *)&this->klass + v12);
                v28 = *(float *)((char *)&this->klass + v16);
                v37 = *(float *)((char *)&this->klass + v18);
                v38 = *(float *)((char *)&this->klass + v19);
                v29 = *(float *)((char *)&this->klass + v15);
                v30 = *(float *)((char *)&this->klass + v13);
                v31 = IsApAndItem ? 50.0 : 36.9;
                gameObject = UnityEngine_Component__get_gameObject(v20, 0);
                GameObjectExtensions__SetLocalPositionY(gameObject, v31, 0);
                v20 = (UnityEngine_Component_o *)this->fields.bgSprite;
                if ( !v20 )
                  goto LABEL_70;
                UIWidget__set_width((UIWidget_o *)v20, v22, 0);
                v20 = (UnityEngine_Component_o *)this->fields.bgSprite;
                if ( !v20 )
                  goto LABEL_70;
                UIWidget__set_height((UIWidget_o *)v20, v14, 0);
                v20 = (UnityEngine_Component_o *)this->fields.titleLabel;
                if ( !v20 )
                  goto LABEL_70;
                v33 = UnityEngine_Component__get_gameObject(v20, 0);
                GameObjectExtensions__SetLocalPositionY(v33, v21, 0);
                v20 = (UnityEngine_Component_o *)this->fields.titleLabel;
                if ( !v20 )
                  goto LABEL_70;
                UILabel__set_fontSize((UILabel_o *)v20, v23, 0);
                v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
                if ( !v20 )
                  goto LABEL_70;
                v34 = UnityEngine_Component__get_gameObject(v20, 0);
                GameObjectExtensions__SetLocalPositionY(v34, v25, 0);
                v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
                if ( !v20 )
                  goto LABEL_70;
                UILabel__set_fontSize((UILabel_o *)v20, v24, 0);
                v20 = (UnityEngine_Component_o *)this->fields.buttonCancelLabel;
                if ( !v20
                  || (UILabel__set_fontSize((UILabel_o *)v20, v24, 0),
                      (v20 = (UnityEngine_Component_o *)this->fields.buttonDecideLabel) == 0)
                  || (UILabel__set_fontSize((UILabel_o *)v20, v24, 0),
                      (v20 = (UnityEngine_Component_o *)this->fields.buttonCancelLabel) == 0)
                  || (v35 = UnityEngine_Component__get_gameObject(v20, 0),
                      GameObjectExtensions__SetLocalPositionY(v35, v26, 0),
                      (v20 = (UnityEngine_Component_o *)this->fields.buttonDecideLabel) == 0) )
                {
LABEL_70:
                  sub_1C942F0(v20, v17);
                }
                v36 = UnityEngine_Component__get_gameObject(v20, 0);
                GameObjectExtensions__SetLocalPositionY(v36, v26, 0);
                v39.fields.x = v28;
                v39.fields.y = v29;
                v39.fields.z = v27;
                GameObjectExtensions__SetLocalPosition(this->fields.buttonCancelObject, v39, 0);
                v40.fields.y = v37;
                v40.fields.x = v38;
                v40.fields.z = v30;
                GameObjectExtensions__SetLocalPosition(this->fields.buttonDecideObject, v40, 0);
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
  Il2CppObject *v3; // x22
  Il2CppObject *v4; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  UnityEngine_GameObject_o *buttonDecideObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  System_Func_object__bool__o *v28; // x21
  int32_t v29; // w20
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  UnityEngine_Object_o *questDialogIconImageComponent; // x20
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D29580 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_string___);
    sub_1C94098(&System_Func_string__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_OnClickCancel__);
    sub_1C94098(&Method_ScrollConfirmDialog__OnClickCancel_b__76_0__);
    sub_1C94098(&StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4D29580 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( v5 )
    {
      items = v5->fields._items;
      v15 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( items )
      {
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v3,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v3;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v3, v8, v9, v10, v11, v12, v13);
        }
        v24 = v5->fields._items;
        v25 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( v24 )
        {
          v26 = v5->fields._size;
          if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v4,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &v24->obj.klass + v26;
            v5->fields._size = v26 + 1;
            v27[4] = (Il2CppClass *)v4;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v4, v18, v19, v20, v21, v22, v23);
          }
          buttonDecideObject = this->fields.buttonDecideObject;
          if ( buttonDecideObject )
          {
            if ( UnityEngine_GameObject__get_activeSelf(buttonDecideObject, 0) )
            {
              v28 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_string__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v28,
                (Il2CppObject *)this,
                Method_ScrollConfirmDialog__OnClickCancel_b__76_0__,
                0);
              v29 = BasicHelper__Any_object_(
                      (System_Collections_Generic_List_T__o *)v5,
                      (System_Func_T__bool__o *)v28,
                      (const MethodInfo_3185468 *)Method_BasicHelper_Any_string___);
            }
            else
            {
              v29 = 0;
            }
            v30 = Method_ScrollConfirmDialog_OnClickCancel__;
            if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
              v30 = (_QWORD *)sub_1C940B0(Method_ScrollConfirmDialog_OnClickCancel__);
            v31 = (System_Reflection_MethodBase_o *)sub_1C9407C(v30, v30[4]);
            OverwriteAssetSoundName__PlaySystemSe(v31, v29, 0, 0);
            this->fields.isButtonEnable = 0;
            questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(buttonDecideObject, v7);
  }
}


void ScrollConfirmDialog__OnClickClose(ScrollConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D29581 & 1) == 0 )
  {
    sub_1C94098(&Method_ScrollConfirmDialog_OnClickClose__);
    byte_4D29581 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ScrollConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  _BOOL4 isDecideBtnSe; // w21
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int32_t decideSe; // w1
  UnityEngine_Object_o *questDialogIconImageComponent; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D2957E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_OnClickDecide__);
    byte_4D2957E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_ScrollConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_ScrollConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    if ( isDecideBtnSe )
      decideSe = this->fields.decideSe;
    else
      decideSe = 0;
    OverwriteAssetSoundName__PlaySystemSe(v5, decideSe, 0, 0);
    questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent) == 0) )
      {
        sub_1C942F0(gameObject, v8);
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
  UnityEngine_Object_o *questDialogIconImageComponent; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ScrollConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D2957F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_OnClickDecide2__);
    byte_4D2957F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollConfirmDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_ScrollConfirmDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ScrollConfirmDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    this->fields.isButtonEnable = 0;
    questDialogIconImageComponent = (UnityEngine_Object_o *)this->fields.questDialogIconImageComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(questDialogIconImageComponent, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.questDialogIconImageComponent) == 0) )
      {
        sub_1C942F0(gameObject, v6);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v13; // x23
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *scrollLabel; // x22
  __int64 v16; // x1
  UILabel_o *gameObject; // x0
  System_String_o *v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *descriptionSprite; // x21
  UnityEngine_Object_o *messageLabel; // x21
  System_String_o *v22; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v24; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v26; // x20

  if ( (byte_4D29576 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_EndOpen__);
    sub_1C94098(&StringLiteral_3693/*"COMMON_CONFIRM_NO"*/);
    sub_1C94098(&StringLiteral_3698/*"COMMON_CONFIRM_YES"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29576 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)scrollMessage,
    (int32_t)footMessage,
    (System_String_o *)func,
    (int32_t)method,
    v6,
    v7);
  v13 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v14);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_40;
    if ( scrollMessage )
      v18 = scrollMessage;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v18, 0);
    ScrollConfirmDialog__ResetScrollPosition(this, 0.0, 1, v19);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_40;
    if ( footMessage )
      v22 = footMessage;
    else
      v22 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v22, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v24 = this->fields.buttonDecideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMON_CONFIRM_YES"*/, 0);
    if ( !v24 )
      goto LABEL_40;
    UILabel__set_text(v24, (System_String_o *)gameObject, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v26 = this->fields.buttonCancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_NO"*/, 0);
    if ( v26 )
    {
      UILabel__set_text(v26, (System_String_o *)gameObject, 0);
      goto LABEL_39;
    }
LABEL_40:
    sub_1C942F0(gameObject, v16);
  }
LABEL_39:
  *(_WORD *)&this->fields.isButtonEnable = 0;
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Object_o *scrollLabel; // x26
  __int64 v23; // x1
  UILabel_o *gameObject; // x0
  const MethodInfo *v25; // x2
  ScrollConfirmDialog_c *v26; // x0
  UnityEngine_Object_o *descriptionSprite; // x26
  UnityEngine_Object_o *questDialogIconImageComponent; // x26
  UnityEngine_Object_o *RearMessageLabel; // x26
  UnityEngine_Object_o *apAndItemDialogRoot; // x26
  UILabel_o *consumeApCountHeadLabel; // x25
  UILabel_o *apCountHeadLabel; // x24
  UILabel_o *consumeItemCountLabel; // x23
  System_String_o *v34; // x0
  UILabel_o *itemCountLabel; // x22
  System_String_o *v36; // x0
  UILabel_o *itemCountNumLabel; // x21
  UnityEngine_Object_o *messageLabel; // x20
  System_String_o *v39; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v42; // x2

  if ( (byte_4D2957C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_EndOpen__);
    sub_1C94098(&ScrollConfirmDialog_TypeInfo);
    sub_1C94098(&StringLiteral_10910/*"QUEST_CONFIRM_POSSESSION_ITEM"*/);
    sub_1C94098(&StringLiteral_10890/*"QUEST_CONFIRM_AP"*/);
    sub_1C94098(&StringLiteral_10896/*"QUEST_CONFIRM_CONSUME_AP"*/);
    sub_1C94098(&StringLiteral_10902/*"QUEST_CONFIRM_CONSUME_ITEM"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2957C = 1;
  }
  this->fields.clickFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)explanationText,
    (int32_t)consumeApCountText,
    apCountText,
    (int32_t)itemName,
    (int64_t)itemCostNumText,
    *(System_String_o **)&itemNum);
  v20 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v21);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    v26 = ScrollConfirmDialog_TypeInfo;
    if ( !ScrollConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo);
      v26 = ScrollConfirmDialog_TypeInfo;
    }
    ScrollConfirmDialog__ResetScrollPosition(
      this,
      (float)v26->static_fields->MESSAGE_POS_WHEN_ITEM_ICON_DISPLAY,
      1,
      v25);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10896/*"QUEST_CONFIRM_CONSUME_AP"*/, 0);
    if ( !consumeApCountHeadLabel )
      goto LABEL_63;
    UILabel__set_text(consumeApCountHeadLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.consumeApCountValueLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, consumeApCountText, 0);
    apCountHeadLabel = this->fields.apCountHeadLabel;
    gameObject = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10890/*"QUEST_CONFIRM_AP"*/, 0);
    if ( !apCountHeadLabel )
      goto LABEL_63;
    UILabel__set_text(apCountHeadLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.apCountValueLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, apCountText, 0);
    consumeItemCountLabel = this->fields.consumeItemCountLabel;
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10902/*"QUEST_CONFIRM_CONSUME_ITEM"*/, 0);
    gameObject = (UILabel_o *)System_String__Format(v34, (Il2CppObject *)itemName, 0);
    if ( !consumeItemCountLabel )
      goto LABEL_63;
    UILabel__set_text(consumeItemCountLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.consumeItemCountNumLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, itemCostNumText, 0);
    itemCountLabel = this->fields.itemCountLabel;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10910/*"QUEST_CONFIRM_POSSESSION_ITEM"*/, 0);
    gameObject = (UILabel_o *)System_String__Format(v36, (Il2CppObject *)itemName, 0);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_63;
    if ( footMessage )
      v39 = footMessage;
    else
      v39 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v39, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_63;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text(gameObject, cancleTxt, 0);
      goto LABEL_62;
    }
LABEL_63:
    sub_1C942F0(gameObject, v23);
  }
LABEL_62:
  ScrollConfirmDialog__OffsetApAndItemLayout(this, 1, v42);
  *(_WORD *)&this->fields.isButtonEnable = 256;
  this->fields.decideSe = decideSe;
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Object_o *scrollLabel; // x25
  __int64 v22; // x1
  UILabel_o *gameObject; // x0
  System_String_o *v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *descriptionSprite; // x24
  UnityEngine_Object_o *questDialogIconImageComponent; // x24
  UnityEngine_Object_o *RearMessageLabel; // x24
  UnityEngine_Object_o *apAndItemDialogRoot; // x24
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v31; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x23
  UnityEngine_Object_o *buttonCancelLabel; // x22

  if ( (byte_4D29578 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_EndOpen__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29578 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)scrollMessage,
    (int32_t)footMessage,
    decideTxt,
    (int32_t)cancleTxt,
    (int64_t)func,
    *(System_String_o **)&decideSe);
  v19 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v20);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_54;
    if ( scrollMessage )
      v24 = scrollMessage;
    else
      v24 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v24, 0);
    ScrollConfirmDialog__ResetScrollPosition(this, offY, centering, v25);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(apAndItemDialogRoot, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.apAndItemDialogRoot;
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_54;
    if ( footMessage )
      v31 = footMessage;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v31, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_54;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(gameObject, v22);
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  *(_WORD *)&this->fields.isButtonEnable = 256;
  this->fields.decideSe = decideSe;
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Object_o *scrollLabel; // x25
  __int64 v19; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *descriptionSprite; // x25
  UISprite_o *v22; // x25
  UISprite_o *v23; // x25
  UnityEngine_GameObject_o *v24; // x24
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v26; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x23
  UnityEngine_Object_o *buttonCancelLabel; // x22

  if ( (byte_4D2957B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_EndOpen__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2957B = 1;
  }
  this->fields.clickFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)imageName,
    (int32_t)footMessage,
    decideTxt,
    (int32_t)cancleTxt,
    (int64_t)func,
    *(System_String_o **)&decideSe);
  v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v17);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(descriptionSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.descriptionSprite;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v22 = this->fields.descriptionSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v22, imageName, 0) )
    {
      v23 = this->fields.descriptionSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v23, imageName, 0);
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
    v24 = UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__UpdateWidgetCollider_50042072(v24, 1, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_44;
    if ( footMessage )
      v26 = footMessage;
    else
      v26 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v26, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, cancleTxt, 0);
      goto LABEL_43;
    }
LABEL_44:
    sub_1C942F0(gameObject, v19);
  }
LABEL_43:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  this->fields.decideSe = decideSe;
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
  UnityEngine_Object_o *scrollLabel; // x26
  __int64 v20; // x1
  UILabel_o *gameObject; // x0
  System_String_o *v22; // x1
  const MethodInfo *v23; // x2
  ScrollConfirmDialog_c *v24; // x0
  UnityEngine_Object_o *descriptionSprite; // x25
  UnityEngine_Object_o *questDialogIconImageComponent; // x25
  UnityEngine_GameObject_o *v27; // x24
  UnityEngine_Object_o *RearMessageLabel; // x24
  bool v29; // w0
  float x; // s8
  float z; // s9
  int method_ptr; // s10
  UnityEngine_Object_o *apAndItemDialogRoot; // x23
  UnityEngine_Object_o *messageLabel; // x23
  System_String_o *v35; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x21
  System_String_o *v38; // [xsp+8h] [xbp-88h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D29579 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_EndOpen__);
    sub_1C94098(&ScrollConfirmDialog_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29579 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)scrollMessage,
    (int32_t)itemConsumeEnt,
    rearScrollMessage,
    (int32_t)footMessage,
    (int64_t)decideTxt,
    cancleTxt);
  v17 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v18);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_70;
    if ( scrollMessage )
      v22 = scrollMessage;
    else
      v22 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v22, 0);
    v24 = ScrollConfirmDialog_TypeInfo;
    if ( !ScrollConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo);
      v24 = ScrollConfirmDialog_TypeInfo;
    }
    ScrollConfirmDialog__ResetScrollPosition(
      this,
      (float)v24->static_fields->MESSAGE_POS_WHEN_ITEM_ICON_DISPLAY,
      1,
      v23);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__UpdateWidgetCollider_50042072(v27, 1, 0);
    gameObject = (UILabel_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_70;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  }
  RearMessageLabel = (UnityEngine_Object_o *)this->fields.RearMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__op_Inequality(RearMessageLabel, 0, 0);
  if ( rearScrollMessage
    && v29
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
    if ( !ScrollConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo);
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
    v41.fields.y = (float)method_ptr;
    v41.fields.x = x;
    v41.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v41, 0);
    gameObject = (UILabel_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_70;
    HIDWORD(gameObject->fields.mTrans) = 1;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  }
  apAndItemDialogRoot = (UnityEngine_Object_o *)this->fields.apAndItemDialogRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(apAndItemDialogRoot, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.apAndItemDialogRoot;
    if ( !gameObject )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_70;
    if ( footMessage )
      v35 = footMessage;
    else
      v35 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v35, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text(gameObject, v38, 0);
      goto LABEL_69;
    }
LABEL_70:
    sub_1C942F0(gameObject, v20);
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
  ScrollConfirmDialog_c *v18; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2957A & 1) == 0 )
  {
    sub_1C94098(&ScrollConfirmDialog_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2957A = 1;
  }
  ScrollConfirmDialog__SetDecideButtonActive(this, 0, (const MethodInfo *)scrollMessage);
  v18 = ScrollConfirmDialog_TypeInfo;
  if ( !ScrollConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo);
    v18 = ScrollConfirmDialog_TypeInfo;
  }
  ScrollConfirmDialog__SetCanelButtonPositionX(this, v18->static_fields->CANCEL_BUTTON_CENTER_POSITION_X, v17);
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
    v19);
}


void ScrollConfirmDialog__Open_37292608(
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
  UnityEngine_Object_o *scrollLabel; // x24
  __int64 v18; // x1
  UILabel_o *gameObject; // x0
  System_String_o *v20; // x1
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *descriptionSprite; // x23
  UnityEngine_Object_o *questDialogIconImageComponent; // x23
  UnityEngine_Object_o *RearMessageLabel; // x23
  UnityEngine_Object_o *apAndItemDialogRoot; // x23
  UnityEngine_Object_o *messageLabel; // x23
  System_String_o *v27; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x21

  if ( (byte_4D29577 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ScrollConfirmDialog_EndOpen__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29577 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)scrollMessage,
    (int32_t)footMessage,
    decideTxt,
    (int32_t)cancleTxt,
    (int64_t)func,
    (System_String_o *)method);
  v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ScrollConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
  ScrollConfirmDialog__SetTitleText(this, title, v16);
  scrollLabel = (UnityEngine_Object_o *)this->fields.scrollLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollLabel, 0, 0) )
  {
    gameObject = this->fields.scrollLabel;
    if ( !gameObject )
      goto LABEL_53;
    if ( scrollMessage )
      v20 = scrollMessage;
    else
      v20 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v20, 0);
    ScrollConfirmDialog__ResetScrollPosition(this, 0.0, 1, v21);
  }
  descriptionSprite = (UnityEngine_Object_o *)this->fields.descriptionSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(apAndItemDialogRoot, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.apAndItemDialogRoot;
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_53;
    if ( footMessage )
      v27 = footMessage;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(gameObject, v27, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_53;
    UILabel__set_text(gameObject, decideTxt, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( gameObject )
    {
      UILabel__set_text(gameObject, cancleTxt, 0);
      goto LABEL_52;
    }
LABEL_53:
    sub_1C942F0(gameObject, v18);
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
  UnityEngine_GameObject_o *gameObject; // x21
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v11; // x8
  int v12; // w8
  UnityEngine_Object_o *scrollLabelSpace; // x20
  UIRect_o *v14; // x20
  int v15; // w8
  int32_t v16; // w5
  float x; // s9
  float z; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D29582 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29582 = 1;
  }
  scrollLabel = (UnityEngine_Component_o *)this->fields.scrollLabel;
  if ( !scrollLabel )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(scrollLabel, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_50042072(gameObject, 1, 0);
  if ( centering )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_33;
    scrollLabel = (UnityEngine_Component_o *)scrollView->fields.mPanel;
    if ( !scrollLabel )
      goto LABEL_33;
    height = UIPanel__get_height((UIPanel_o *)scrollLabel, 0);
    v11 = this->fields.scrollLabel;
    if ( !v11 )
      goto LABEL_33;
    if ( height <= (float)v11->fields.mHeight )
      v12 = 1;
    else
      v12 = 4;
    scrollView->fields.contentPivot = v12;
  }
  scrollLabelSpace = (UnityEngine_Object_o *)this->fields.scrollLabelSpace;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollLabelSpace, 0, 0) )
  {
    scrollLabel = (UnityEngine_Component_o *)this->fields.scrollLabelSpace;
    if ( !scrollLabel )
      goto LABEL_33;
    scrollLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)scrollLabel,
                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !this->fields.scrollLabel )
      goto LABEL_33;
    v14 = (UIRect_o *)scrollLabel;
    scrollLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.scrollLabel,
                                               0);
    if ( !v14 )
      goto LABEL_33;
    v15 = (int)offY;
    if ( offY == INFINITY )
      v15 = 0x80000000;
    if ( offY < 0.0 )
      v16 = -v15;
    else
      v16 = 0;
    UIRect__SetAnchor_50106372(v14, (UnityEngine_GameObject_o *)scrollLabel, 0, 0, 0, v16, 0);
  }
  scrollLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollLabel )
    goto LABEL_33;
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
LABEL_33:
    sub_1C942F0(scrollLabel, centering);
  }
  v20.fields.x = x;
  v20.fields.y = offY;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollLabel, v20, 0);
}


void ScrollConfirmDialog__SetCanelButtonPositionX(ScrollConfirmDialog_o *this, float x, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancelObject; // x20

  if ( (byte_4D29585 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29585 = 1;
  }
  buttonCancelObject = (UnityEngine_Object_o *)this->fields.buttonCancelObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonCancelObject, 0, 0) )
    GameObjectExtensions__SetLocalPositionX(this->fields.buttonCancelObject, x, 0);
}


void ScrollConfirmDialog__SetDecideButtonActive(ScrollConfirmDialog_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4D29584 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29584 = 1;
  }
  buttonDecideObject = (UnityEngine_Object_o *)this->fields.buttonDecideObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonDecideObject, 0, 0) )
  {
    v7 = this->fields.buttonDecideObject;
    if ( !v7 )
      sub_1C942F0(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void ScrollConfirmDialog__SetTitleText(ScrollConfirmDialog_o *this, System_String_o *title, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  System_String_o *v8; // x1
  UILabel_o *v9; // x19

  if ( (byte_4D29583 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ScrollConfirmDialog_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29583 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      goto LABEL_15;
    v8 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v7, v8, 0);
    v9 = this->fields.titleLabel;
    v7 = (UILabel_o *)ScrollConfirmDialog_TypeInfo;
    if ( !ScrollConfirmDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrollConfirmDialog_TypeInfo);
    if ( !v9 )
LABEL_15:
      sub_1C942F0(v7, v6);
    UILabel__SetCondensedScale(v9, ScrollConfirmDialog_TypeInfo->static_fields->TITLE_WIDTH, 0, 0);
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
    sub_1C942F0(this, x);
  return System_String__Equals_64453064(x, buttonCancelLabel->fields.mText, 0);
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
  if ( (byte_4D29586 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15698/*"Window/CancelButton"*/);
    byte_4D29586 = 1;
  }
  return (System_String_o *)StringLiteral_15698/*"Window/CancelButton"*/;
}


void ScrollConfirmDialog_ClickDelegate___ctor(
        ScrollConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC54FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC54B4;
}


System_IAsyncResult_o *ScrollConfirmDialog_ClickDelegate__BeginInvoke(
        ScrollConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4D2958A & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D2958A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void ScrollConfirmDialog_ClickDelegate__EndInvoke(
        ScrollConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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