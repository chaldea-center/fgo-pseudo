void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UIIconLabel_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_GameObject_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct SkillIconComponent_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UIIconLabel_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_438EAD8 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&SkillIconComponent___TypeInfo);
    sub_B775C4(&UIIconLabel___TypeInfo);
    byte_438EAD8 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_B775DC(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct SkillIconComponent_array *)sub_B775DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UIIconLabel_array *)sub_B775DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UnityEngine_GameObject_array *)sub_B775DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v25;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct SkillIconComponent_array *)sub_B775DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v32;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UIIconLabel_array *)sub_B775DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v39;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__Awake(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v11; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v13; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v15; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v17; // x19

  if ( (byte_438EAD2 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19757/*"icon_skill_mini"*/);
    sub_B775C4(&StringLiteral_19891/*"img_friend_skill"*/);
    sub_B775C4(&StringLiteral_19667/*"icon_append_mini"*/);
    sub_B775C4(&StringLiteral_19890/*"img_friend_appendskill"*/);
    byte_438EAD2 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v11 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_19757/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v13 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_19891/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v15 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_19667/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v17 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v17, (System_String_o *)StringLiteral_19890/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendOperationItemListViewItemDraw__SetInput(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *v6; // x19
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Object_o *addRangeSprite; // x22
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v11; // w24
  UnityEngine_Behaviour_o *v12; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *pushSpr; // x21
  struct UILabel_o *loginDataLabel; // x8
  struct ServantFaceIconComponent_o *servantFaceIcon; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9
  __int64 v20; // x0

  v6 = this;
  if ( (byte_438EAD7 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (FriendOperationItemListViewItemDraw_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EAD7 = 1;
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
      v11 = 0;
      while ( v11 < skillButtonList->max_length )
      {
        v12 = (UnityEngine_Behaviour_o *)skillButtonList->m_Items[v11];
        if ( !v12 )
          goto LABEL_25;
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))v12->klass[1]._1.namespaze)(
          v12,
          1LL,
          v12->klass[1]._1.byval_arg.data,
          method);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v12->klass[1]._1.implementedInterfaces)(
          v12,
          0LL,
          0LL,
          v12->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v12, isInput, 0LL);
        if ( (int)++v11 >= max_length )
          goto LABEL_26;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_25;
      }
LABEL_100:
      v20 = sub_B776C8(this);
      sub_B77668(v20, 0LL);
    }
  }
LABEL_26:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_25:
    sub_B7769C(this, item);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v15);
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
  UnityEngine_Object_o *rangeSprite; // x22
  __int64 v8; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *v10; // x22
  int32_t kind; // w8
  bool v12; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  bool v14; // w1
  __int64 v15; // x8
  char v16; // w21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v18; // x26
  const MethodInfo *v19; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v23; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  int v30; // w25
  __int64 v31; // x23
  __int64 v32; // x23
  ServantLimitAddMaster_o *v33; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v35; // x28
  char v36; // w22
  UIRangeLabel_o *v37; // x22
  UnityEngine_Object_o *v38; // x22
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v40; // x23
  __int64 v41; // x24
  int v42; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v44; // x26
  __int64 v45; // x27
  ServantLimitImageMaster_o *v46; // x25
  int32_t ServantLimitCountSealAfter; // w24
  char v48; // w25
  System_String_o *OverwriteTDName; // x0
  System_String_o **v50; // x9
  bool v51; // cc
  Il2CppObject *v52; // x22
  System_String_o *v53; // x23
  System_String_o *v54; // x0
  System_String_o *v55; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  int32_t v58; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v60; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v62; // x23
  int64_t createdAt; // x0
  System_String_o *v64; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v66; // x0
  const MethodInfo *v67; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v69; // x8
  int v70; // w9
  unsigned __int64 v71; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v73; // x14
  struct SkillIconComponent_array *v74; // x8
  __int64 v75; // x22
  struct UnityEngine_GameObject_array *v76; // x8
  const MethodInfo *v77; // x2
  __int64 v78; // x22
  __int64 v79; // x23
  unsigned __int64 v80; // x24
  struct UnityEngine_GameObject_array *v81; // x9
  int32_t *v82; // x25
  struct SkillIconComponent_array *v83; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v86; // x8
  __int64 v87; // x9
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v89; // x8
  int v90; // w9
  signed __int64 v91; // x10
  unsigned __int64 v92; // x14
  SkillInfo_o *v93; // x14
  struct SkillIconComponent_array *v94; // x8
  __int64 v95; // x22
  struct UnityEngine_GameObject_array *v96; // x8
  struct System_Collections_Generic_List_UIWidget__o **p_switchSkillUIList; // x22
  __int64 v98; // x22
  __int64 v99; // x23
  unsigned __int64 v100; // x24
  struct UnityEngine_GameObject_array *v101; // x9
  int32_t *v102; // x25
  struct SkillIconComponent_array *v103; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v106; // x8
  __int64 v107; // x9
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v111; // x22
  __int64 v112; // x23
  __int64 v113; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v115; // w23
  float v116; // s0
  float v117; // s2
  float v118; // s8
  float v119; // s9
  __int64 *v120; // x8
  UILabel_o *cancelLabel; // x21
  float v122; // s0
  float v123; // s2
  float v124; // s8
  float v125; // s9
  OtherUserGameEntity_o *v126; // x21
  int32_t Kind_28123940; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v130; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v132; // x2
  float v133; // s0
  float v134; // s8
  float v135; // s0
  float v136; // s9
  UnityEngine_GameObject_o *v137; // x0
  float LocalPositionX; // s0
  float v139; // s10
  UnityEngine_GameObject_o *v140; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v142; // x1
  __int64 v143; // x8
  __int64 v144; // x8
  struct OtherUserGameEntity_o *v145; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v147; // x2
  Il2CppObject **v148; // x9
  Il2CppObject *v149; // x21
  Il2CppObject *v150; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  __int64 v152; // x0
  __int64 v153; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  SkillInfo_array *v155; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438EAD3 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Grade_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_19843/*"img_blacklist_requestdate"*/);
    sub_B775C4(&StringLiteral_6483/*"FFFFFF"*/);
    sub_B775C4(&StringLiteral_13621/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_B775C4(&StringLiteral_9553/*"NP_MAX_COLOR_NAME"*/);
    sub_B775C4(&StringLiteral_19842/*"img_blacklist_recorddate"*/);
    sub_B775C4(&StringLiteral_6482/*"FFFF00"*/);
    sub_B775C4(&StringLiteral_9524/*"NO_ENTRY_NAME"*/);
    sub_B775C4(&StringLiteral_9547/*"NP_COLOR_NAME"*/);
    sub_B775C4(&StringLiteral_16122/*"[{0}]+{1}[-]"*/);
    sub_B775C4(&StringLiteral_6607/*"FRIEND_BUTTON_CANCEL"*/);
    sub_B775C4(&StringLiteral_19735/*"icon_friend"*/);
    sub_B775C4(&StringLiteral_19734/*"icon_follow"*/);
    byte_438EAD3 = 1;
  }
  tdInfo = 0LL;
  v155 = 0LL;
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
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
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
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      v14 = 0;
      goto LABEL_361;
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
      goto LABEL_363;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
  }
  v10 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_363;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isTerminationSpace, 0LL);
  }
  if ( !mode )
    return;
  kind = item->fields.kind;
  v12 = kind == 9 || kind == 3;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_363;
  v15 = *(_QWORD *)(gameObject + 88);
  if ( !v15 )
    goto LABEL_363;
  if ( !*(_DWORD *)(v15 + 24) )
  {
LABEL_364:
    v152 = sub_B776C8(gameObject);
    sub_B77668(v152, 0LL);
  }
  v16 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v15 + 32),
                        0LL);
  v18 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_42;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_42;
    v41 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v158.fields.currentCryptoKey = v41;
    *(_QWORD *)&v158.fields.fakeValue = v40;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v158, 0LL) )
    {
LABEL_42:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v18, 0LL);
      v16 = 0;
    }
    else
    {
      v18 = 0LL;
      v16 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_363;
  ServantFaceIconComponent__Set_31684916(
    (ServantFaceIconComponent_o *)gameObject,
    v18,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v12,
    0,
    0LL);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v19);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_438EACD & 1) == 0 )
  {
    gameObject = sub_B775C4(&StringLiteral_18762/*"error"*/);
    byte_438EACD = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_363;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18762/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0LL);
  v23 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v23 )
  {
    userLv = v23->fields.userLv;
    if ( !gameObject )
      goto LABEL_363;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_363;
  }
  UIIconLabel__Set_41716724((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v26);
  if ( !servantNameLabel )
    goto LABEL_363;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v27);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v28);
  if ( item->fields.servantEntity )
  {
    v30 = TreasureDeviceLevelIcon;
    v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v32 = **(_QWORD **)(v31 + 192);
    if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
      sub_B0F2C4(v32);
    gameObject = **(_QWORD **)(v32 + 184);
    if ( !gameObject )
      goto LABEL_363;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v18 )
      goto LABEL_363;
    v33 = (ServantLimitAddMaster_o *)gameObject;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v18, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v35 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v18;
    if ( OptionManager__GetSpoilerSetting(0LL) || ServantLeaderInfo__IsNpc(v18, 0LL) )
    {
      v36 = v16;
    }
    else
    {
      v36 = v16;
      gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !gameObject )
        goto LABEL_363;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                     v18->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    v42 = v30;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v45 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
    v46 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v159.fields.currentCryptoKey = v45;
    *(_QWORD *)&v159.fields.fakeValue = v44;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v159, 0LL);
    if ( !v46 )
      goto LABEL_363;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v46,
                                   gameObject,
                                   FriendNpNameDispLimitCount,
                                   0LL);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v35[3], 0LL);
    if ( !tdInfo || !v33 )
      goto LABEL_363;
    v48 = v36;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v33,
                        gameObject,
                        ServantLimitCountSealAfter,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0LL);
    v50 = (System_String_o **)&StringLiteral_9553/*"NP_MAX_COLOR_NAME"*/;
    v51 = v42 <= 1;
    v52 = (Il2CppObject *)OverwriteTDName;
    v18 = (ServantLeaderInfo_o *)v35;
    v16 = v48;
    if ( v51 )
      v50 = (System_String_o **)&StringLiteral_9547/*"NP_COLOR_NAME"*/;
    v53 = *v50;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get(v53, 0LL);
    gameObject = (__int64)System_String__Format(v54, v52, 0LL);
    if ( !tdInfo )
      goto LABEL_363;
    v55 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
    if ( !svtNpTitleLabel )
      goto LABEL_363;
    UIRangeLabel__Set(svtNpTitleLabel, v55, (System_String_o *)gameObject, 0, 0, 0LL);
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
        goto LABEL_363;
      ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)gameObject, tdInfo, 0LL);
    }
  }
  else
  {
    v37 = this->fields.svtNpTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9524/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v37 )
      goto LABEL_363;
    UIRangeLabel__Set(v37, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
    v38 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_363;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
    }
  }
  v58 = item->fields.kind;
  if ( v58 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_13621/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v62 = v64;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_128;
    }
  }
  else if ( v58 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13621/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v62 = v60;
    if ( userBlacklistEntity )
    {
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_128;
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
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_13621/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
      goto LABEL_128;
    }
  }
  createdAt = 0LL;
LABEL_128:
  v66 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
  gameObject = (__int64)System_String__Format(v62, v66, 0LL);
  if ( !loginDataLabel )
    goto LABEL_363;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v67);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_363;
    v69 = *(_QWORD *)&skillIconList->max_length;
    if ( v69 << 32 >= 1 )
    {
      v70 = 0;
      v71 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v71 < (int)max_length )
        {
          if ( v71 >= max_length )
            goto LABEL_364;
          v73 = skillInfoList->m_Items[v71];
          if ( v73 && v73->fields.id >= 1 )
            v70 = v71 + 1;
        }
        if ( (__int64)++v71 >= (int)v69 )
          goto LABEL_153;
      }
      goto LABEL_363;
    }
    v70 = 0;
LABEL_153:
    if ( (int)v69 >= 1 )
    {
      v78 = v70;
      v79 = 4LL;
      do
      {
        v80 = v79 - 4;
        if ( v79 - 4 >= v78 )
        {
          skillBaseList = this->fields.skillBaseList;
          if ( !skillBaseList )
            goto LABEL_363;
          if ( v80 >= skillBaseList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&skillBaseList->obj.klass + v79);
          if ( !gameObject )
            goto LABEL_363;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_363;
          if ( v80 >= skillInfoList->max_length )
            goto LABEL_364;
          v81 = this->fields.skillBaseList;
          if ( !v81 )
            goto LABEL_363;
          if ( v80 >= v81->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&v81->obj.klass + v79);
          if ( !gameObject )
            goto LABEL_363;
          v82 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v79);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v83 = this->fields.skillIconList;
          if ( !v83 )
            goto LABEL_363;
          if ( v80 >= v83->max_length )
            goto LABEL_364;
          if ( !v82 )
            goto LABEL_363;
          gameObject = *((_QWORD *)&v83->obj.klass + v79);
          if ( !gameObject )
            goto LABEL_363;
          SkillIconComponent__Set_26843124((SkillIconComponent_o *)gameObject, v82[4], v82[5], v82[12], v82[13], 0LL);
          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
          if ( !skillLevelIconLabelList )
            goto LABEL_363;
          if ( v80 >= skillLevelIconLabelList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v79);
          if ( !gameObject )
            goto LABEL_363;
          UIIconLabel__Set_41716724((UIIconLabel_o *)gameObject, 48, v82[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v86 = this->fields.skillIconList;
        if ( !v86 )
          goto LABEL_363;
        v87 = v79 - 3;
        ++v79;
      }
      while ( v87 < (int)v86->max_length );
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
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          goto LABEL_179;
        }
      }
    }
LABEL_363:
    sub_B7769C(gameObject, v8);
  }
  v74 = this->fields.skillIconList;
  if ( !v74 )
    goto LABEL_363;
  v75 = 0LL;
  while ( (int)v75 < (signed int)v74->max_length )
  {
    v76 = this->fields.skillBaseList;
    if ( !v76 )
      goto LABEL_363;
    if ( (unsigned int)v75 >= v76->max_length )
      goto LABEL_364;
    gameObject = (__int64)v76->m_Items[v75];
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v74 = this->fields.skillIconList;
      ++v75;
      if ( v74 )
        continue;
    }
    goto LABEL_363;
  }
  gameObject = (__int64)this->fields.skillInfoUiWidget;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
LABEL_179:
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v155, v77);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_363;
    v89 = *(_QWORD *)&appendSkillIconList->max_length;
    if ( v89 << 32 < 1 )
    {
      v90 = 0;
    }
    else
    {
      v90 = 0;
      v91 = 0LL;
      do
      {
        if ( v155 )
        {
          v92 = v155->max_length;
          if ( v91 < (int)v92 )
          {
            if ( v91 >= v92 )
              goto LABEL_364;
            v93 = v155->m_Items[v91];
            if ( v93 && v93->fields.id >= 1 )
              v90 = v91 + 1;
          }
        }
        ++v91;
      }
      while ( v91 < (int)v89 );
    }
    if ( (int)v89 >= 1 )
    {
      v98 = v90;
      v99 = 4LL;
      do
      {
        v100 = v99 - 4;
        if ( v99 - 4 >= v98 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_363;
          if ( v100 >= appendSkillBaseList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_363;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !v155 )
            goto LABEL_363;
          if ( v100 >= v155->max_length )
            goto LABEL_364;
          v101 = this->fields.appendSkillBaseList;
          if ( !v101 )
            goto LABEL_363;
          if ( v100 >= v101->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&v101->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_363;
          v102 = (int32_t *)*((_QWORD *)&v155->obj.klass + v99);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v103 = this->fields.appendSkillIconList;
          if ( !v103 )
            goto LABEL_363;
          if ( v100 >= v103->max_length )
            goto LABEL_364;
          if ( !v102 )
            goto LABEL_363;
          gameObject = *((_QWORD *)&v103->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_363;
          SkillIconComponent__Set_26843124(
            (SkillIconComponent_o *)gameObject,
            v102[4],
            v102[5],
            v102[12],
            v102[13],
            0LL);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_363;
          if ( v100 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_363;
          UIIconLabel__Set_41716724((UIIconLabel_o *)gameObject, 48, v102[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v106 = this->fields.appendSkillIconList;
        if ( !v106 )
          goto LABEL_363;
        v107 = v99 - 3;
        ++v99;
      }
      while ( v107 < (int)v106->max_length );
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_363;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( !gameObject )
      goto LABEL_363;
    p_switchSkillUIList = &this->fields.switchSkillUIList;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    v94 = this->fields.appendSkillIconList;
    if ( !v94 )
      goto LABEL_363;
    v95 = 0LL;
    while ( (int)v95 < (signed int)v94->max_length )
    {
      v96 = this->fields.appendSkillBaseList;
      if ( !v96 )
        goto LABEL_363;
      if ( (unsigned int)v95 >= v96->max_length )
        goto LABEL_364;
      gameObject = (__int64)v96->m_Items[v95];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v94 = this->fields.appendSkillIconList;
        ++v95;
        if ( v94 )
          continue;
      }
      goto LABEL_363;
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_363;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    p_switchSkillUIList = &this->fields.switchSkillUIList;
  }
  gameObject = (__int64)*p_switchSkillUIList;
  if ( !*p_switchSkillUIList )
    goto LABEL_363;
  if ( *(int *)(gameObject + 24) >= 2 )
  {
    switchSkillInfo = this->fields.switchSkillInfo;
    gameObject = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)gameObject,
                            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_363;
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
    v111 = this->fields.svtCommandCardList;
    if ( v16 & 1 | (servantEntity == 0LL) )
    {
      if ( !v111 )
        goto LABEL_363;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
    }
    else
    {
      v113 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v112 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v160.fields.currentCryptoKey = v113;
      *(_QWORD *)&v160.fields.fakeValue = v112;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v160, 0LL);
      if ( !v18 )
        goto LABEL_363;
      commandCardParam = v18->fields.commandCardParam;
      v115 = gameObject;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v18, 0LL);
      if ( !v111 )
        goto LABEL_363;
      ServantCommandCardListComponent__Set_27820008(
        v111,
        v115,
        commandCardParam,
        (System_Int32_array *)gameObject,
        2,
        1,
        0LL);
    }
  }
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  *(UnityEngine_Vector3_o *)&v116 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_363;
  v118 = v116;
  v119 = v117;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  v161.fields.y = -45.0;
  v161.fields.x = v118;
  v161.fields.z = v119;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v161, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.acceptButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.rejectButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeButton2;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeMarkSpr;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.registButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.offerButton;
  if ( !gameObject )
    goto LABEL_363;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  switch ( item->fields.kind )
  {
    case 0:
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_363;
      goto LABEL_299;
    case 1:
      gameObject = (__int64)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      cancelLabel = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6607/*"FRIEND_BUTTON_CANCEL"*/, 0LL);
      if ( !cancelLabel )
        goto LABEL_363;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      break;
    case 2:
      gameObject = (__int64)this->fields.acceptButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.rejectButton;
      if ( !gameObject )
        goto LABEL_363;
LABEL_299:
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      break;
    case 3:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_363;
      v120 = &StringLiteral_19735/*"icon_friend"*/;
      goto LABEL_311;
    case 7:
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_363;
      v120 = &StringLiteral_19843/*"img_blacklist_requestdate"*/;
      goto LABEL_311;
    case 8:
      gameObject = (__int64)this->fields.removeButton2;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_363;
      v120 = &StringLiteral_19842/*"img_blacklist_recorddate"*/;
      goto LABEL_311;
    case 9:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      *(UnityEngine_Vector3_o *)&v122 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)gameObject,
                                          0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_363;
      v124 = v122;
      v125 = v123;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      v162.fields.y = 0.0;
      v162.fields.x = v124;
      v162.fields.z = v125;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v162, 0LL);
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_363;
      v120 = &StringLiteral_19734/*"icon_follow"*/;
LABEL_311:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v120, 0LL);
      break;
    default:
      break;
  }
  v126 = item->fields.otherUserGameEntity;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_28123940 = Grade__GetKind_28123940(v126, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_28123940, 0LL);
  baseSpr = this->fields.baseSpr;
  v130 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v130, 0LL);
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
      goto LABEL_363;
    LODWORD(v133) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_363;
    v134 = v133;
    LODWORD(v135) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_363;
    v136 = v135;
    v137 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v137, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_363;
    v139 = LocalPositionX;
    v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionX(v140, (float)(v136 * 0.5) + (float)(v134 + v139), 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_363;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_28123940, 0LL);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v132);
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
      goto LABEL_365;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_365;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)item->fields.otherUserGameEntity;
    if ( !gameObject )
      goto LABEL_365;
    v143 = *(_QWORD *)(gameObject + 88);
    if ( !v143 )
      goto LABEL_365;
    if ( !*(_DWORD *)(v143 + 24) )
    {
      v153 = sub_B776C8(gameObject);
      sub_B77668(v153, 0LL);
    }
    gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)gameObject,
                            item->fields.classPos,
                            1,
                            item->fields.displayServantType,
                            *(_DWORD *)(v143 + 32),
                            0LL);
    if ( gameObject )
    {
      v144 = *(_QWORD *)(gameObject + 40);
      if ( v144 >= 1 )
      {
        v145 = item->fields.otherUserGameEntity;
        if ( !v145 )
          goto LABEL_365;
        if ( v145->fields.pushUserSvtId == v144 )
        {
          gameObject = (__int64)this->fields.pushSpr;
          if ( !gameObject )
            goto LABEL_365;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_365;
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
      v148 = (Il2CppObject **)&StringLiteral_6482/*"FFFF00"*/;
    else
      v148 = (Il2CppObject **)&StringLiteral_6483/*"FFFFFF"*/;
    v149 = *v148;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField, v147);
    gameObject = (__int64)System_String__Format_44897472((System_String_o *)StringLiteral_16122/*"[{0}]+{1}[-]"*/, v149, v150, 0LL);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_365;
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
        v14 = item->fields._OpenClassBoardNum_k__BackingField >= 0;
LABEL_361:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v14, 0LL);
        return;
      }
    }
LABEL_365:
    sub_B7769C(gameObject, v142);
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

  if ( (byte_438EAD5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EAD5 = 1;
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
      sub_B7769C(removeButton, v6);
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
    sub_B7769C(messageDispButton, isHide);
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
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  UIWidget_o *messageLabel; // x21
  float v13; // s0
  float v14; // s1
  float v15; // s2
  int v16; // s3
  float v17; // s4
  float v18; // s5
  float v19; // s6
  UILabel_o *v20; // x21
  int v21; // s0
  int v22; // s1
  int v23; // s2
  UILabel_o *v24; // x21
  System_String_o **v25; // x8
  UnityEngine_Color_o v26; // [xsp+0h] [xbp-30h] BYREF

  v9 = item;
  v10 = this;
  if ( (byte_438EAD4 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_17341/*"btn_message_on"*/);
    sub_B775C4(&StringLiteral_6615/*"FRIEND_HIDE_MESSAGE"*/);
    this = (FriendOperationItemListViewItemDraw_o *)sub_B775C4(&StringLiteral_17340/*"btn_message_off"*/);
    byte_438EAD4 = 1;
  }
  if ( !v9 )
    goto LABEL_25;
  otherUserGameEntity = v9->fields.otherUserGameEntity;
  messageLabel = (UIWidget_o *)v10->fields.messageLabel;
  v13 = isDisp ? 1.0 : 0.73725;
  v26 = (UnityEngine_Color_o)0LL;
  v14 = v13;
  v15 = v13;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v26);
  if ( !messageLabel )
    goto LABEL_25;
  UIWidget__set_color(messageLabel, v26, 0LL);
  v20 = v10->fields.messageLabel;
  if ( isDisp )
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v26 = (UnityEngine_Color_o)0LL;
  }
  else
  {
    v21 = 1056997505;
    v26 = (UnityEngine_Color_o)0LL;
    v22 = 1056997505;
    v23 = 1056997505;
  }
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v16 - 3), v17, v18, v19, (const MethodInfo *)&v26);
  if ( !v20 )
    goto LABEL_25;
  UILabel__set_effectColor(v20, v26, 0LL);
  v24 = v10->fields.messageLabel;
  if ( !isDisp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6615/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
    if ( v24 )
      goto LABEL_20;
LABEL_25:
    sub_B7769C(this, item);
  }
  if ( !otherUserGameEntity )
    goto LABEL_25;
  item = (FriendOperationItemListViewItem_o *)otherUserGameEntity->fields.message;
  if ( !v24 )
    goto LABEL_25;
LABEL_20:
  UILabel__set_text(v24, (System_String_o *)item, 0LL);
  this = (FriendOperationItemListViewItemDraw_o *)v10->fields.messageDispButton;
  if ( !this )
    goto LABEL_25;
  this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)this,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_25;
  v25 = (System_String_o **)&StringLiteral_17340/*"btn_message_off"*/;
  if ( !isDisp )
    v25 = (System_String_o **)&StringLiteral_17341/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v25, 0LL);
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
  if ( (byte_438EAD6 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_B775C4(&OptionManager_TypeInfo);
    byte_438EAD6 = 1;
  }
  if ( !item )
LABEL_16:
    sub_B7769C(this, item);
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