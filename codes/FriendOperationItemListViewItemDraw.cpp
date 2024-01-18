void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SkillIconComponent_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UIIconLabel_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_GameObject_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct SkillIconComponent_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UIIconLabel_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_418A8A1 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v4);
    sub_B2C35C(&UIIconLabel___TypeInfo, v5);
    byte_418A8A1 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct UIIconLabel_array *)sub_B2C374(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UIIconLabel_array *)sub_B2C374(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v42;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__Awake(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v20; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v22; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v24; // x19

  if ( (byte_418A89B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_19364/*"icon_skill_mini"*/, v6);
    sub_B2C35C(&StringLiteral_19495/*"img_friend_skill"*/, v7);
    sub_B2C35C(&StringLiteral_19275/*"icon_append_mini"*/, v8);
    sub_B2C35C(&StringLiteral_19494/*"img_friend_appendskill"*/, v9);
    byte_418A89B = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_19364/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_19495/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v22 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_19275/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v24 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v24, (System_String_o *)StringLiteral_19494/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendOperationItemListViewItemDraw__SetInput(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Object_o *addRangeSprite; // x22
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v12; // w24
  UnityEngine_Behaviour_o *v13; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *pushSpr; // x21
  struct UILabel_o *loginDataLabel; // x8
  struct ServantFaceIconComponent_o *servantFaceIcon; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9
  __int64 v21; // x0

  v6 = this;
  if ( (byte_418A8A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    this = (FriendOperationItemListViewItemDraw_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418A8A0 = 1;
  }
  if ( !item )
  {
    rangeSprite = (UnityEngine_Object_o *)v6->fields.rangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rangeSprite;
      if ( !this )
        goto LABEL_25;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
      if ( !this )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)v6->fields.addRangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.addRangeSprite;
      if ( !this )
        goto LABEL_25;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
      if ( !this )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
  skillButtonList = v6->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( v12 < skillButtonList->max_length )
      {
        v13 = (UnityEngine_Behaviour_o *)skillButtonList->m_Items[v12];
        if ( !v13 )
          goto LABEL_25;
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))v13->klass[1]._1.namespaze)(
          v13,
          1LL,
          v13->klass[1]._1.byval_arg.data,
          method);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v13->klass[1]._1.implementedInterfaces)(
          v13,
          0LL,
          0LL,
          v13->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v13, isInput, 0LL);
        if ( (int)++v12 >= max_length )
          goto LABEL_26;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_25;
      }
LABEL_100:
      v21 = sub_B2C460(this);
      sub_B2C400(v21, 0LL);
    }
  }
LABEL_26:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_25:
    sub_B2C434(this, item);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_25;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !this )
        goto LABEL_25;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_25;
      ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
    }
    if ( item )
    {
      switch ( item->fields.kind )
      {
        case 0:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_25;
          goto LABEL_82;
        case 1:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
          if ( !this )
            goto LABEL_25;
          goto LABEL_82;
        case 2:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
          if ( !this )
            goto LABEL_25;
          ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_25;
          goto LABEL_82;
        case 3:
        case 8:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          break;
        case 7:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
          if ( !this )
            goto LABEL_25;
          goto LABEL_82;
        case 9:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_25;
          ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          break;
        default:
          goto LABEL_83;
      }
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
      if ( !this )
        goto LABEL_25;
LABEL_82:
      ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
LABEL_83:
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v16);
      pushSpr = (UnityEngine_Object_o *)v6->fields.pushSpr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
      {
        this = (FriendOperationItemListViewItemDraw_o *)v6->fields.pushSpr;
        if ( !this )
          goto LABEL_25;
        this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
        if ( !this )
          goto LABEL_25;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FriendOperationItemListViewItemDraw_o *)item->fields.otherUserGameEntity;
        if ( !this )
          goto LABEL_25;
        loginDataLabel = this->fields.loginDataLabel;
        if ( !loginDataLabel )
          goto LABEL_25;
        if ( !LODWORD(loginDataLabel->fields.leftAnchor) )
          goto LABEL_100;
        this = (FriendOperationItemListViewItemDraw_o *)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)this,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          (int32_t)loginDataLabel->fields.rightAnchor,
                                                          0LL);
        if ( this )
        {
          servantFaceIcon = this->fields.servantFaceIcon;
          if ( (__int64)servantFaceIcon >= 1 )
          {
            otherUserGameEntity = item->fields.otherUserGameEntity;
            if ( !otherUserGameEntity )
              goto LABEL_25;
            if ( (struct ServantFaceIconComponent_o *)otherUserGameEntity->fields.pushUserSvtId == servantFaceIcon )
            {
              this = (FriendOperationItemListViewItemDraw_o *)v6->fields.pushSpr;
              if ( this )
              {
                this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  return;
                }
              }
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItemDraw__SetItem(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  __int64 v36; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *v38; // x22
  int32_t kind; // w8
  bool v40; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  bool v42; // w1
  __int64 v43; // x8
  char v44; // w21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v46; // x27
  const MethodInfo *v47; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v51; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  int v58; // w22
  __int64 v59; // x23
  __int64 v60; // x23
  ServantLimitAddMaster_o *v61; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  ServantLeaderInfo_o *v63; // x28
  char v64; // w26
  UIRangeLabel_o *v65; // x22
  UnityEngine_Object_o *v66; // x22
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v68; // x23
  __int64 v69; // x24
  char v70; // w22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v72; // x26
  __int64 v73; // x27
  ServantLimitImageMaster_o *v74; // x25
  int32_t ServantLimitCountSealAfter; // w24
  __int64 v76; // x25
  __int64 v77; // x25
  TreasureDvcMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_String_o *v79; // x25
  System_String_o *OverwriteTDName; // x0
  System_String_o **v81; // x9
  Il2CppObject *v82; // x22
  System_String_o *v83; // x23
  System_String_o *v84; // x0
  System_String_o *v85; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  int32_t v88; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v90; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v92; // x23
  int64_t createdAt; // x0
  System_String_o *v94; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v96; // x0
  const MethodInfo *v97; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v99; // x8
  int v100; // w9
  unsigned __int64 v101; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v103; // x14
  struct SkillIconComponent_array *v104; // x8
  __int64 v105; // x22
  struct UnityEngine_GameObject_array *v106; // x8
  const MethodInfo *v107; // x2
  __int64 v108; // x22
  __int64 v109; // x23
  unsigned __int64 v110; // x24
  struct UnityEngine_GameObject_array *v111; // x9
  int32_t *v112; // x25
  struct SkillIconComponent_array *v113; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v116; // x8
  __int64 v117; // x9
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v119; // x8
  int v120; // w9
  signed __int64 v121; // x10
  unsigned __int64 v122; // x14
  SkillInfo_o *v123; // x14
  struct SkillIconComponent_array *v124; // x8
  __int64 v125; // x22
  struct UnityEngine_GameObject_array *v126; // x8
  struct System_Collections_Generic_List_UIWidget__o **p_switchSkillUIList; // x22
  __int64 v128; // x22
  __int64 v129; // x23
  unsigned __int64 v130; // x24
  struct UnityEngine_GameObject_array *v131; // x9
  int32_t *v132; // x25
  struct SkillIconComponent_array *v133; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v136; // x8
  __int64 v137; // x9
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v141; // x22
  __int64 v142; // x23
  __int64 v143; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v145; // w23
  float v146; // s0
  float v147; // s2
  float v148; // s8
  float v149; // s9
  __int64 *v150; // x8
  UILabel_o *cancelLabel; // x21
  float v152; // s0
  float v153; // s2
  float v154; // s8
  float v155; // s9
  OtherUserGameEntity_o *v156; // x21
  int32_t Kind_27344472; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v160; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v162; // x2
  UnityEngine_Vector2_o v163; // x1
  float v164; // s0
  float v165; // s8
  float v166; // s0
  float v167; // s9
  UnityEngine_GameObject_o *v168; // x0
  float LocalPositionX; // s0
  float v170; // s10
  UnityEngine_GameObject_o *v171; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v173; // x8
  __int64 v174; // x8
  struct OtherUserGameEntity_o *v175; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  Il2CppObject **v177; // x9
  Il2CppObject *v178; // x21
  Il2CppObject *v179; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  __int64 v181; // x0
  __int64 v182; // x0
  int v183; // [xsp+18h] [xbp-88h]
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  SkillInfo_array *v185; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  UnityEngine_Vector3_o v191; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v192; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A89C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Grade_TypeInfo, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&OptionManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_19449/*"img_blacklist_requestdate"*/, v23);
    sub_B2C35C(&StringLiteral_6335/*"FFFFFF"*/, v24);
    sub_B2C35C(&StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, v25);
    sub_B2C35C(&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/, v26);
    sub_B2C35C(&StringLiteral_19448/*"img_blacklist_recorddate"*/, v27);
    sub_B2C35C(&StringLiteral_6334/*"FFFF00"*/, v28);
    sub_B2C35C(&StringLiteral_9354/*"NO_ENTRY_NAME"*/, v29);
    sub_B2C35C(&StringLiteral_9376/*"NP_COLOR_NAME"*/, v30);
    sub_B2C35C(&StringLiteral_15830/*"[{0}]+{1}[-]"*/, v31);
    sub_B2C35C(&StringLiteral_6459/*"FRIEND_BUTTON_CANCEL"*/, v32);
    sub_B2C35C(&StringLiteral_19343/*"icon_friend"*/, v33);
    sub_B2C35C(&StringLiteral_19342/*"icon_follow"*/, v34);
    byte_418A89C = 1;
  }
  tdInfo = 0LL;
  v185 = 0LL;
  skillInfoList = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !item )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      v42 = 0;
      goto LABEL_368;
    }
    return;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_370;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_370;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
  }
  v38 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_370;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_370;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isTerminationSpace, 0LL);
  }
  if ( !mode )
    return;
  kind = item->fields.kind;
  v40 = kind == 9 || kind == 3;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_370;
  v43 = *(_QWORD *)(gameObject + 88);
  if ( !v43 )
    goto LABEL_370;
  if ( !*(_DWORD *)(v43 + 24) )
  {
LABEL_371:
    v181 = sub_B2C460(gameObject);
    sub_B2C400(v181, 0LL);
  }
  v44 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v43 + 32),
                        0LL);
  v46 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_42;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_42;
    v69 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v68 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v188.fields.currentCryptoKey = v69;
    *(_QWORD *)&v188.fields.fakeValue = v68;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v188, 0LL) )
    {
LABEL_42:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v46, 0LL);
      v44 = 0;
    }
    else
    {
      v46 = 0LL;
      v44 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_370;
  ServantFaceIconComponent__Set_30720044(
    (ServantFaceIconComponent_o *)gameObject,
    v46,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v40,
    0,
    0LL);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v47);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_418A896 & 1) == 0 )
  {
    gameObject = sub_B2C35C(&StringLiteral_18395/*"error"*/, v36);
    byte_418A896 = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_370;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18395/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0LL);
  v51 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v51 )
  {
    userLv = v51->fields.userLv;
    if ( !gameObject )
      goto LABEL_370;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_370;
  }
  UIIconLabel__Set_41609428((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v54);
  if ( !servantNameLabel )
    goto LABEL_370;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v55);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v56);
  if ( item->fields.servantEntity )
  {
    v58 = TreasureDeviceLevelIcon;
    v59 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v60 = **(_QWORD **)(v59 + 192);
    if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
      sub_AC505C(v60);
    gameObject = **(_QWORD **)(v60 + 184);
    if ( !gameObject )
      goto LABEL_370;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v46 )
      goto LABEL_370;
    v61 = (ServantLimitAddMaster_o *)gameObject;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v46, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v63 = v46;
    if ( OptionManager__GetSpoilerSetting(0LL) || ServantLeaderInfo__IsNpc(v46, 0LL) )
    {
      v64 = v44;
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_370;
      v64 = v44;
      gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !gameObject )
        goto LABEL_370;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                     v46->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    v183 = v58;
    v70 = v64;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v73 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
    v72 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
    v74 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v189.fields.currentCryptoKey = v73;
    *(_QWORD *)&v189.fields.fakeValue = v72;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v189, 0LL);
    if ( !v74 )
      goto LABEL_370;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v74,
                                   gameObject,
                                   FriendNpNameDispLimitCount,
                                   0LL);
    v44 = v70;
    v76 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
      sub_AC505C(v76);
    v46 = v63;
    v77 = **(_QWORD **)(v76 + 192);
    if ( (*(_BYTE *)(v77 + 306) & 1) == 0 )
      sub_AC505C(v77);
    gameObject = **(_QWORD **)(v77 + 184);
    if ( !gameObject )
      goto LABEL_370;
    MasterData_WarQuestSelectionMaster = (TreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)gameObject,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63->fields.svtId, 0LL);
    if ( !tdInfo )
      goto LABEL_370;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_370;
    gameObject = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                            MasterData_WarQuestSelectionMaster,
                            gameObject,
                            tdInfo->fields.id,
                            0LL);
    if ( !gameObject )
      goto LABEL_370;
    v79 = *(System_String_o **)(gameObject + 24);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63->fields.svtId, 0LL);
    if ( !tdInfo || !v61 )
      goto LABEL_370;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v61,
                        gameObject,
                        ServantLimitCountSealAfter,
                        v79,
                        tdInfo->fields.lv,
                        0LL);
    v81 = (System_String_o **)&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/;
    v82 = (Il2CppObject *)OverwriteTDName;
    if ( v183 <= 1 )
      v81 = (System_String_o **)&StringLiteral_9376/*"NP_COLOR_NAME"*/;
    v83 = *v81;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = LocalizationManager__Get(v83, 0LL);
    gameObject = (__int64)System_String__Format(v84, v82, 0LL);
    if ( !tdInfo )
      goto LABEL_370;
    v85 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
    if ( !svtNpTitleLabel )
      goto LABEL_370;
    UIRangeLabel__Set(svtNpTitleLabel, v85, (System_String_o *)gameObject, 0, 0, 0LL);
    svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_370;
      ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)gameObject, tdInfo, 0LL);
    }
  }
  else
  {
    v65 = this->fields.svtNpTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v65 )
      goto LABEL_370;
    UIRangeLabel__Set(v65, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
    v66 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_370;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
    }
  }
  v88 = item->fields.kind;
  if ( v88 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v92 = v94;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_135;
    }
  }
  else if ( v88 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v92 = v90;
    if ( userBlacklistEntity )
    {
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_135;
    }
  }
  else
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
      goto LABEL_135;
    }
  }
  createdAt = 0LL;
LABEL_135:
  v96 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
  gameObject = (__int64)System_String__Format(v92, v96, 0LL);
  if ( !loginDataLabel )
    goto LABEL_370;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v97);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_370;
    v99 = *(_QWORD *)&skillIconList->max_length;
    if ( v99 << 32 >= 1 )
    {
      v100 = 0;
      v101 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v101 < (int)max_length )
        {
          if ( v101 >= max_length )
            goto LABEL_371;
          v103 = skillInfoList->m_Items[v101];
          if ( v103 && v103->fields.id >= 1 )
            v100 = v101 + 1;
        }
        if ( (__int64)++v101 >= (int)v99 )
          goto LABEL_160;
      }
      goto LABEL_370;
    }
    v100 = 0;
LABEL_160:
    if ( (int)v99 >= 1 )
    {
      v108 = v100;
      v109 = 4LL;
      do
      {
        v110 = v109 - 4;
        if ( v109 - 4 >= v108 )
        {
          skillBaseList = this->fields.skillBaseList;
          if ( !skillBaseList )
            goto LABEL_370;
          if ( v110 >= skillBaseList->max_length )
            goto LABEL_371;
          gameObject = *((_QWORD *)&skillBaseList->obj.klass + v109);
          if ( !gameObject )
            goto LABEL_370;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_370;
          if ( v110 >= skillInfoList->max_length )
            goto LABEL_371;
          v111 = this->fields.skillBaseList;
          if ( !v111 )
            goto LABEL_370;
          if ( v110 >= v111->max_length )
            goto LABEL_371;
          gameObject = *((_QWORD *)&v111->obj.klass + v109);
          if ( !gameObject )
            goto LABEL_370;
          v112 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v109);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v113 = this->fields.skillIconList;
          if ( !v113 )
            goto LABEL_370;
          if ( v110 >= v113->max_length )
            goto LABEL_371;
          if ( !v112 )
            goto LABEL_370;
          gameObject = *((_QWORD *)&v113->obj.klass + v109);
          if ( !gameObject )
            goto LABEL_370;
          SkillIconComponent__Set_23786384(
            (SkillIconComponent_o *)gameObject,
            v112[4],
            v112[5],
            v112[12],
            v112[13],
            0LL);
          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
          if ( !skillLevelIconLabelList )
            goto LABEL_370;
          if ( v110 >= skillLevelIconLabelList->max_length )
            goto LABEL_371;
          gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v109);
          if ( !gameObject )
            goto LABEL_370;
          UIIconLabel__Set_41609428((UIIconLabel_o *)gameObject, 48, v112[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v116 = this->fields.skillIconList;
        if ( !v116 )
          goto LABEL_370;
        v117 = v109 - 3;
        ++v109;
      }
      while ( v117 < (int)v116->max_length );
    }
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)this->fields.switchSkillUIList;
        if ( gameObject )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          goto LABEL_186;
        }
      }
    }
LABEL_370:
    sub_B2C434(gameObject, v36);
  }
  v104 = this->fields.skillIconList;
  if ( !v104 )
    goto LABEL_370;
  v105 = 0LL;
  while ( (int)v105 < (signed int)v104->max_length )
  {
    v106 = this->fields.skillBaseList;
    if ( !v106 )
      goto LABEL_370;
    if ( (unsigned int)v105 >= v106->max_length )
      goto LABEL_371;
    gameObject = (__int64)v106->m_Items[v105];
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v104 = this->fields.skillIconList;
      ++v105;
      if ( v104 )
        continue;
    }
    goto LABEL_370;
  }
  gameObject = (__int64)this->fields.skillInfoUiWidget;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
LABEL_186:
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v185, v107);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_370;
    v119 = *(_QWORD *)&appendSkillIconList->max_length;
    if ( v119 << 32 < 1 )
    {
      v120 = 0;
    }
    else
    {
      v120 = 0;
      v121 = 0LL;
      do
      {
        if ( v185 )
        {
          v122 = v185->max_length;
          if ( v121 < (int)v122 )
          {
            if ( v121 >= v122 )
              goto LABEL_371;
            v123 = v185->m_Items[v121];
            if ( v123 && v123->fields.id >= 1 )
              v120 = v121 + 1;
          }
        }
        ++v121;
      }
      while ( v121 < (int)v119 );
    }
    if ( (int)v119 >= 1 )
    {
      v128 = v120;
      v129 = 4LL;
      do
      {
        v130 = v129 - 4;
        if ( v129 - 4 >= v128 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_370;
          if ( v130 >= appendSkillBaseList->max_length )
            goto LABEL_371;
          gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_370;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !v185 )
            goto LABEL_370;
          if ( v130 >= v185->max_length )
            goto LABEL_371;
          v131 = this->fields.appendSkillBaseList;
          if ( !v131 )
            goto LABEL_370;
          if ( v130 >= v131->max_length )
            goto LABEL_371;
          gameObject = *((_QWORD *)&v131->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_370;
          v132 = (int32_t *)*((_QWORD *)&v185->obj.klass + v129);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v133 = this->fields.appendSkillIconList;
          if ( !v133 )
            goto LABEL_370;
          if ( v130 >= v133->max_length )
            goto LABEL_371;
          if ( !v132 )
            goto LABEL_370;
          gameObject = *((_QWORD *)&v133->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_370;
          SkillIconComponent__Set_23786384(
            (SkillIconComponent_o *)gameObject,
            v132[4],
            v132[5],
            v132[12],
            v132[13],
            0LL);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_370;
          if ( v130 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_371;
          gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_370;
          UIIconLabel__Set_41609428((UIIconLabel_o *)gameObject, 48, v132[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v136 = this->fields.appendSkillIconList;
        if ( !v136 )
          goto LABEL_370;
        v137 = v129 - 3;
        ++v129;
      }
      while ( v137 < (int)v136->max_length );
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_370;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_370;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( !gameObject )
      goto LABEL_370;
    p_switchSkillUIList = &this->fields.switchSkillUIList;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    v124 = this->fields.appendSkillIconList;
    if ( !v124 )
      goto LABEL_370;
    v125 = 0LL;
    while ( (int)v125 < (signed int)v124->max_length )
    {
      v126 = this->fields.appendSkillBaseList;
      if ( !v126 )
        goto LABEL_370;
      if ( (unsigned int)v125 >= v126->max_length )
        goto LABEL_371;
      gameObject = (__int64)v126->m_Items[v125];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v124 = this->fields.appendSkillIconList;
        ++v125;
        if ( v124 )
          continue;
      }
      goto LABEL_370;
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_370;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_370;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    p_switchSkillUIList = &this->fields.switchSkillUIList;
  }
  gameObject = (__int64)*p_switchSkillUIList;
  if ( !*p_switchSkillUIList )
    goto LABEL_370;
  if ( *(int *)(gameObject + 24) >= 2 )
  {
    switchSkillInfo = this->fields.switchSkillInfo;
    gameObject = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)gameObject,
                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_370;
    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0LL);
  }
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    servantEntity = item->fields.servantEntity;
    v141 = this->fields.svtCommandCardList;
    if ( v44 & 1 | (servantEntity == 0LL) )
    {
      if ( !v141 )
        goto LABEL_370;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
    }
    else
    {
      v143 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v142 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v190.fields.currentCryptoKey = v143;
      *(_QWORD *)&v190.fields.fakeValue = v142;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v190, 0LL);
      if ( !v46 )
        goto LABEL_370;
      commandCardParam = v46->fields.commandCardParam;
      v145 = gameObject;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v46, 0LL);
      if ( !v141 )
        goto LABEL_370;
      ServantCommandCardListComponent__Set_29228872(
        v141,
        v145,
        commandCardParam,
        (System_Int32_array *)gameObject,
        2,
        1,
        0LL);
    }
  }
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  *(UnityEngine_Vector3_o *)&v146 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_370;
  v148 = v146;
  v149 = v147;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  v191.fields.y = -45.0;
  v191.fields.x = v148;
  v191.fields.z = v149;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v191, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.acceptButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.rejectButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeButton2;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeMarkSpr;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.registButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.offerButton;
  if ( !gameObject )
    goto LABEL_370;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_370;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  switch ( item->fields.kind )
  {
    case 0:
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_370;
      goto LABEL_306;
    case 1:
      gameObject = (__int64)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      cancelLabel = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6459/*"FRIEND_BUTTON_CANCEL"*/, 0LL);
      if ( !cancelLabel )
        goto LABEL_370;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      break;
    case 2:
      gameObject = (__int64)this->fields.acceptButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.rejectButton;
      if ( !gameObject )
        goto LABEL_370;
LABEL_306:
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      break;
    case 3:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_370;
      v150 = &StringLiteral_19343/*"icon_friend"*/;
      goto LABEL_318;
    case 7:
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_370;
      v150 = &StringLiteral_19449/*"img_blacklist_requestdate"*/;
      goto LABEL_318;
    case 8:
      gameObject = (__int64)this->fields.removeButton2;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_370;
      v150 = &StringLiteral_19448/*"img_blacklist_recorddate"*/;
      goto LABEL_318;
    case 9:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      *(UnityEngine_Vector3_o *)&v152 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)gameObject,
                                          0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_370;
      v154 = v152;
      v155 = v153;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      v192.fields.y = 0.0;
      v192.fields.x = v154;
      v192.fields.z = v155;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v192, 0LL);
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_370;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_370;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_370;
      v150 = &StringLiteral_19342/*"icon_follow"*/;
LABEL_318:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v150, 0LL);
      break;
    default:
      break;
  }
  v156 = item->fields.otherUserGameEntity;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_27344472 = Grade__GetKind_27344472(v156, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_27344472, 0LL);
  baseSpr = this->fields.baseSpr;
  v160 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v160, 0LL);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_370;
    LODWORD(v164) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_372;
    v165 = v164;
    LODWORD(v166) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_372;
    v167 = v166;
    v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v168, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_372;
    v170 = LocalPositionX;
    v171 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionX(v171, (float)(v167 * 0.5) + (float)(v165 + v170), 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_372;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_27344472, 0LL);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v162);
  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushSpr;
    if ( !gameObject )
      goto LABEL_372;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_372;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)item->fields.otherUserGameEntity;
    if ( !gameObject )
      goto LABEL_372;
    v173 = *(_QWORD *)(gameObject + 88);
    if ( !v173 )
      goto LABEL_372;
    if ( !*(_DWORD *)(v173 + 24) )
    {
      v182 = sub_B2C460(gameObject);
      sub_B2C400(v182, 0LL);
    }
    gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)gameObject,
                            item->fields.classPos,
                            1,
                            item->fields.displayServantType,
                            *(_DWORD *)(v173 + 32),
                            0LL);
    if ( gameObject )
    {
      v174 = *(_QWORD *)(gameObject + 40);
      if ( v174 >= 1 )
      {
        v175 = item->fields.otherUserGameEntity;
        if ( !v175 )
          goto LABEL_372;
        if ( v175->fields.pushUserSvtId == v174 )
        {
          gameObject = (__int64)this->fields.pushSpr;
          if ( !gameObject )
            goto LABEL_372;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_372;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
      }
    }
  }
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL)
    && (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) == 0 )
  {
    if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
      v177 = (Il2CppObject **)&StringLiteral_6334/*"FFFF00"*/;
    else
      v177 = (Il2CppObject **)&StringLiteral_6335/*"FFFFFF"*/;
    v178 = *v177;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v179 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField);
    gameObject = (__int64)System_String__Format_44301068((System_String_o *)StringLiteral_15830/*"[{0}]+{1}[-]"*/, v178, v179, 0LL);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_372;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0LL);
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.classBoardOpenButton;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        v42 = item->fields._OpenClassBoardNum_k__BackingField >= 0;
LABEL_368:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v42, 0LL);
        return;
      }
    }
LABEL_372:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(gameObject, v163);
  }
}


void __fastcall FriendOperationItemListViewItemDraw__UpdateLockUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *lockMarkObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *removeButton; // x0
  int32_t kind; // w8

  if ( (byte_418A89E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_418A89E = 1;
  }
  if ( item )
  {
    lockMarkObj = (UnityEngine_Object_o *)this->fields.lockMarkObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockMarkObj, 0LL, 0LL) )
    {
      removeButton = this->fields.lockMarkObj;
      if ( !removeButton )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(removeButton, item->fields.isSwapLock != item->fields.isLock, 0LL);
    }
    kind = item->fields.kind;
    if ( kind == 9 || kind == 3 )
    {
      removeButton = (UnityEngine_GameObject_o *)this->fields.removeButton;
      if ( removeButton )
      {
        ((void (*)(void))removeButton->klass[1]._1.implementedInterfaces)();
        return;
      }
LABEL_15:
      sub_B2C434(removeButton, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItemDraw__dispMessageUI(
        FriendOperationItemListViewItemDraw_o *this,
        bool isHide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *messageDispButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v6; // s0

  if ( !isHide )
  {
    messageDispButton = this->fields.messageDispButton;
    if ( messageDispButton )
    {
      UnityEngine_GameObject__SetActive(messageDispButton, 1, 0LL);
      messageDispButton = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( messageDispButton )
      {
        messageDispButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0LL);
        if ( messageDispButton )
        {
          UnityEngine_GameObject__SetActive(messageDispButton, 1, 0LL);
          GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -1.0, 0LL);
          GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, -1.0, 0LL);
          messageDispButton = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
          if ( messageDispButton )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0LL);
            v6 = 1112801280;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_B2C434(messageDispButton, isHide);
  }
  messageDispButton = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !messageDispButton )
    goto LABEL_13;
  messageDispButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0LL);
  if ( !messageDispButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(messageDispButton, 0, 0LL);
  messageDispButton = this->fields.messageDispButton;
  if ( !messageDispButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(messageDispButton, 0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -11.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, 10.0, 0LL);
  messageDispButton = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
  if ( !messageDispButton )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0LL);
  v6 = 1113849856;
LABEL_12:
  GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItemDraw__setMessageButtonUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isDisp,
        const MethodInfo *method)
{
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  FriendOperationItemListViewItem_o *v9; // x21
  FriendOperationItemListViewItemDraw_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  UIWidget_o *messageLabel; // x21
  float v17; // s0
  float v18; // s1
  float v19; // s2
  int v20; // s3
  float v21; // s4
  float v22; // s5
  float v23; // s6
  UILabel_o *v24; // x21
  int v25; // s0
  int v26; // s1
  int v27; // s2
  UILabel_o *v28; // x21
  System_String_o **v29; // x8
  UnityEngine_Color_o v30; // [xsp+0h] [xbp-30h] BYREF

  v9 = item;
  v10 = this;
  if ( (byte_418A89D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_17002/*"btn_message_on"*/, v12);
    sub_B2C35C(&StringLiteral_6467/*"FRIEND_HIDE_MESSAGE"*/, v13);
    this = (FriendOperationItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_17001/*"btn_message_off"*/, v14);
    byte_418A89D = 1;
  }
  if ( !v9 )
    goto LABEL_25;
  otherUserGameEntity = v9->fields.otherUserGameEntity;
  messageLabel = (UIWidget_o *)v10->fields.messageLabel;
  v17 = isDisp ? 1.0 : 0.73725;
  v30 = (UnityEngine_Color_o)0LL;
  v18 = v17;
  v19 = v17;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v30);
  if ( !messageLabel )
    goto LABEL_25;
  UIWidget__set_color(messageLabel, v30, 0LL);
  v24 = v10->fields.messageLabel;
  if ( isDisp )
  {
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v30 = (UnityEngine_Color_o)0LL;
  }
  else
  {
    v25 = 1056997505;
    v30 = (UnityEngine_Color_o)0LL;
    v26 = 1056997505;
    v27 = 1056997505;
  }
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v20 - 3), v21, v22, v23, (const MethodInfo *)&v30);
  if ( !v24 )
    goto LABEL_25;
  UILabel__set_effectColor(v24, v30, 0LL);
  v28 = v10->fields.messageLabel;
  if ( !isDisp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6467/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
    if ( v28 )
      goto LABEL_20;
LABEL_25:
    sub_B2C434(this, item);
  }
  if ( !otherUserGameEntity )
    goto LABEL_25;
  item = (FriendOperationItemListViewItem_o *)otherUserGameEntity->fields.message;
  if ( !v28 )
    goto LABEL_25;
LABEL_20:
  UILabel__set_text(v28, (System_String_o *)item, 0LL);
  this = (FriendOperationItemListViewItemDraw_o *)v10->fields.messageDispButton;
  if ( !this )
    goto LABEL_25;
  this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)this,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_25;
  v29 = (System_String_o **)&StringLiteral_17001/*"btn_message_off"*/;
  if ( !isDisp )
    v29 = (System_String_o **)&StringLiteral_17002/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v29, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__setupMessageUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *v4; // x19
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  const MethodInfo *v6; // x3
  bool v7; // w2
  FriendOperationItemListViewItemDraw_o *v8; // x0
  FriendOperationItemListViewItem_o *v9; // x1

  v4 = this;
  if ( (byte_418A89F & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_B2C35C(&OptionManager_TypeInfo, item);
    byte_418A89F = 1;
  }
  if ( !item )
LABEL_16:
    sub_B2C434(this, item);
  switch ( item->fields.kind )
  {
    case 0:
    case 1:
    case 2:
    case 7:
    case 8:
    case 9:
      goto LABEL_5;
    case 3:
      otherUserGameEntity = item->fields.otherUserGameEntity;
      if ( !otherUserGameEntity )
        goto LABEL_16;
      if ( System_String__IsNullOrEmpty(otherUserGameEntity->fields.message, 0LL) )
        goto LABEL_5;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetMessageDisp(0LL) )
      {
LABEL_5:
        FriendOperationItemListViewItemDraw__dispMessageUI(v4, 1, method);
      }
      else
      {
        FriendOperationItemListViewItemDraw__dispMessageUI(v4, 0, method);
        if ( item->fields.swapMessageDisp )
        {
          v7 = 1;
          v8 = v4;
          v9 = item;
        }
        else
        {
          v8 = v4;
          v9 = item;
          v7 = 0;
        }
        FriendOperationItemListViewItemDraw__setMessageButtonUI(v8, v9, v7, v6);
      }
      return;
    default:
      return;
  }
}