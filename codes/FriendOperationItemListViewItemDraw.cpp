void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BalanceConfig_c *v14; // x0
  struct UnityEngine_GameObject_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct SkillIconComponent_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UIIconLabel_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_GameObject_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct SkillIconComponent_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct UIIconLabel_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42EBE24 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UIIconLabel___TypeInfo, v11, v12, v13);
    byte_42EBE24 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v14->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UIIconLabel_array *)sub_B5D5DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (struct UIIconLabel_array *)sub_B5D5DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__Awake(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v34; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v36; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v38; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v40; // x19

  if ( (byte_42EBE1E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19608/*"icon_skill_mini"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19742/*"img_friend_skill"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19519/*"icon_append_mini"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19741/*"img_friend_appendskill"*/, v23, v24, v25);
    byte_42EBE1E = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v34 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v34, (System_String_o *)StringLiteral_19608/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v36 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v36, (System_String_o *)StringLiteral_19742/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v38 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v38, (System_String_o *)StringLiteral_19519/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v40 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v40, (System_String_o *)StringLiteral_19741/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendOperationItemListViewItemDraw__SetInput(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Object_o *addRangeSprite; // x22
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v14; // w24
  UnityEngine_Behaviour_o *v15; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *pushSpr; // x21
  struct UILabel_o *loginDataLabel; // x8
  struct ServantFaceIconComponent_o *servantFaceIcon; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9
  __int64 v23; // x0

  v6 = this;
  if ( (byte_42EBE23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)item, isInput, method);
    this = (FriendOperationItemListViewItemDraw_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EBE23 = 1;
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
      v14 = 0;
      while ( v14 < skillButtonList->max_length )
      {
        v15 = (UnityEngine_Behaviour_o *)skillButtonList->m_Items[v14];
        if ( !v15 )
          goto LABEL_25;
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))v15->klass[1]._1.namespaze)(
          v15,
          1LL,
          v15->klass[1]._1.byval_arg.data,
          method);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v15->klass[1]._1.implementedInterfaces)(
          v15,
          0LL,
          0LL,
          v15->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v15, isInput, 0LL);
        if ( (int)++v14 >= max_length )
          goto LABEL_26;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_25;
      }
LABEL_100:
      v23 = sub_B5D6C8(this);
      sub_B5D668(v23, 0LL);
    }
  }
LABEL_26:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_25:
    sub_B5D69C(this, item);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_25;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_25;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v18);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  UnityEngine_Object_o *rangeSprite; // x22
  __int64 v89; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *v91; // x22
  int32_t kind; // w8
  bool v93; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  bool v95; // w1
  __int64 v96; // x8
  char v97; // w21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v99; // x26
  const MethodInfo *v100; // x2
  int v101; // w2
  __int64 v102; // x3
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v106; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // x2
  const MethodInfo *v111; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  int v113; // w25
  __int64 v114; // x23
  __int64 v115; // x23
  ServantLimitAddMaster_o *v116; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x28
  char v119; // w22
  UIRangeLabel_o *v120; // x22
  UnityEngine_Object_o *v121; // x22
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v123; // x23
  __int64 v124; // x24
  int v125; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v127; // x26
  __int64 v128; // x27
  ServantLimitImageMaster_o *v129; // x25
  int32_t ServantLimitCountSealAfter; // w24
  char v131; // w25
  System_String_o *OverwriteTDName; // x0
  System_String_o **v133; // x9
  bool v134; // cc
  Il2CppObject *v135; // x22
  System_String_o *v136; // x23
  System_String_o *v137; // x0
  System_String_o *v138; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  int32_t v141; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v143; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v145; // x23
  int64_t createdAt; // x0
  System_String_o *v147; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v149; // x0
  const MethodInfo *v150; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v152; // x8
  int v153; // w9
  unsigned __int64 v154; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v156; // x14
  struct SkillIconComponent_array *v157; // x8
  __int64 v158; // x22
  struct UnityEngine_GameObject_array *v159; // x8
  const MethodInfo *v160; // x2
  __int64 v161; // x22
  __int64 v162; // x23
  unsigned __int64 v163; // x24
  struct UnityEngine_GameObject_array *v164; // x9
  int32_t *v165; // x25
  struct SkillIconComponent_array *v166; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v169; // x8
  __int64 v170; // x9
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v172; // x8
  int v173; // w9
  signed __int64 v174; // x10
  unsigned __int64 v175; // x14
  SkillInfo_o *v176; // x14
  struct SkillIconComponent_array *v177; // x8
  __int64 v178; // x22
  struct UnityEngine_GameObject_array *v179; // x8
  struct System_Collections_Generic_List_UIWidget__o **p_switchSkillUIList; // x22
  __int64 v181; // x22
  __int64 v182; // x23
  unsigned __int64 v183; // x24
  struct UnityEngine_GameObject_array *v184; // x9
  int32_t *v185; // x25
  struct SkillIconComponent_array *v186; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v189; // x8
  __int64 v190; // x9
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v194; // x22
  __int64 v195; // x23
  __int64 v196; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v198; // w23
  float v199; // s0
  float v200; // s2
  float v201; // s8
  float v202; // s9
  __int64 *v203; // x8
  UILabel_o *cancelLabel; // x21
  float v205; // s0
  float v206; // s2
  float v207; // s8
  float v208; // s9
  OtherUserGameEntity_o *v209; // x21
  int32_t Kind_28445348; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v213; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v215; // x2
  float v216; // s0
  float v217; // s8
  float v218; // s0
  float v219; // s9
  UnityEngine_GameObject_o *v220; // x0
  float LocalPositionX; // s0
  float v222; // s10
  UnityEngine_GameObject_o *v223; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v225; // x1
  __int64 v226; // x8
  __int64 v227; // x8
  struct OtherUserGameEntity_o *v228; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  Il2CppObject **v230; // x9
  Il2CppObject *v231; // x21
  Il2CppObject *v232; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  __int64 v234; // x0
  __int64 v235; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  SkillInfo_array *v237; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v240; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v241; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v242; // 0:x0.16
  UnityEngine_Vector3_o v243; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v244; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBE1F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Grade_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&int_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&OptionManager_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_19694/*"img_blacklist_requestdate"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_6414/*"FFFFFF"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_19693/*"img_blacklist_recorddate"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_6413/*"FFFF00"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_9450/*"NO_ENTRY_NAME"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_9472/*"NP_COLOR_NAME"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_16021/*"[{0}]+{1}[-]"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_6538/*"FRIEND_BUTTON_CANCEL"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_19587/*"icon_friend"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_19586/*"icon_follow"*/, v85, v86, v87);
    byte_42EBE1F = 1;
  }
  tdInfo = 0LL;
  v237 = 0LL;
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
      v95 = 0;
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
  v91 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
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
  v93 = kind == 9 || kind == 3;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_363;
  v96 = *(_QWORD *)(gameObject + 88);
  if ( !v96 )
    goto LABEL_363;
  if ( !*(_DWORD *)(v96 + 24) )
  {
LABEL_364:
    v234 = sub_B5D6C8(gameObject);
    sub_B5D668(v234, 0LL);
  }
  v97 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v96 + 32),
                        0LL);
  v99 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_42;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_42;
    v124 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v123 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v240.fields.currentCryptoKey = v124;
    *(_QWORD *)&v240.fields.fakeValue = v123;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v240, 0LL) )
    {
LABEL_42:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v99, 0LL);
      v97 = 0;
    }
    else
    {
      v99 = 0LL;
      v97 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_363;
  ServantFaceIconComponent__Set_30776084(
    (ServantFaceIconComponent_o *)gameObject,
    v99,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v93,
    0,
    0LL);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v100);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_42EBE19 & 1) == 0 )
  {
    gameObject = sub_B5D5C4(&StringLiteral_18624/*"error"*/, v89, v101, v102);
    byte_42EBE19 = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_363;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18624/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0LL);
  v106 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v106 )
  {
    userLv = v106->fields.userLv;
    if ( !gameObject )
      goto LABEL_363;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_363;
  }
  UIIconLabel__Set_41886452((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v109);
  if ( !servantNameLabel )
    goto LABEL_363;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v110);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v111);
  if ( item->fields.servantEntity )
  {
    v113 = TreasureDeviceLevelIcon;
    v114 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v114 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v115 = **(_QWORD **)(v114 + 192);
    if ( (*(_BYTE *)(v115 + 306) & 1) == 0 )
      sub_AF52C4(v115);
    gameObject = **(_QWORD **)(v115 + 184);
    if ( !gameObject )
      goto LABEL_363;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v99 )
      goto LABEL_363;
    v116 = (ServantLimitAddMaster_o *)gameObject;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v99, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v118 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v99;
    if ( OptionManager__GetSpoilerSetting(0LL) || ServantLeaderInfo__IsNpc(v99, 0LL) )
    {
      v119 = v97;
    }
    else
    {
      v119 = v97;
      gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_363;
      gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !gameObject )
        goto LABEL_363;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                     v99->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    v125 = v113;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v128 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
    v127 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
    v129 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v241.fields.currentCryptoKey = v128;
    *(_QWORD *)&v241.fields.fakeValue = v127;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v241, 0LL);
    if ( !v129 )
      goto LABEL_363;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v129,
                                   gameObject,
                                   FriendNpNameDispLimitCount,
                                   0LL);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v118[3], 0LL);
    if ( !tdInfo || !v116 )
      goto LABEL_363;
    v131 = v119;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v116,
                        gameObject,
                        ServantLimitCountSealAfter,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0LL);
    v133 = (System_String_o **)&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/;
    v134 = v125 <= 1;
    v135 = (Il2CppObject *)OverwriteTDName;
    v99 = (ServantLeaderInfo_o *)v118;
    v97 = v131;
    if ( v134 )
      v133 = (System_String_o **)&StringLiteral_9472/*"NP_COLOR_NAME"*/;
    v136 = *v133;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v137 = LocalizationManager__Get(v136, 0LL);
    gameObject = (__int64)System_String__Format(v137, v135, 0LL);
    if ( !tdInfo )
      goto LABEL_363;
    v138 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
    if ( !svtNpTitleLabel )
      goto LABEL_363;
    UIRangeLabel__Set(svtNpTitleLabel, v138, (System_String_o *)gameObject, 0, 0, 0LL);
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
    v120 = this->fields.svtNpTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v120 )
      goto LABEL_363;
    UIRangeLabel__Set(v120, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
    v121 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v121, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_363;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
    }
  }
  v141 = item->fields.kind;
  if ( v141 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v147 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v145 = v147;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_128;
    }
  }
  else if ( v141 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v143 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v145 = v143;
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
    v145 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
      goto LABEL_128;
    }
  }
  createdAt = 0LL;
LABEL_128:
  v149 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
  gameObject = (__int64)System_String__Format(v145, v149, 0LL);
  if ( !loginDataLabel )
    goto LABEL_363;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v150);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_363;
    v152 = *(_QWORD *)&skillIconList->max_length;
    if ( v152 << 32 >= 1 )
    {
      v153 = 0;
      v154 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v154 < (int)max_length )
        {
          if ( v154 >= max_length )
            goto LABEL_364;
          v156 = skillInfoList->m_Items[v154];
          if ( v156 && v156->fields.id >= 1 )
            v153 = v154 + 1;
        }
        if ( (__int64)++v154 >= (int)v152 )
          goto LABEL_153;
      }
      goto LABEL_363;
    }
    v153 = 0;
LABEL_153:
    if ( (int)v152 >= 1 )
    {
      v161 = v153;
      v162 = 4LL;
      do
      {
        v163 = v162 - 4;
        if ( v162 - 4 >= v161 )
        {
          skillBaseList = this->fields.skillBaseList;
          if ( !skillBaseList )
            goto LABEL_363;
          if ( v163 >= skillBaseList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&skillBaseList->obj.klass + v162);
          if ( !gameObject )
            goto LABEL_363;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_363;
          if ( v163 >= skillInfoList->max_length )
            goto LABEL_364;
          v164 = this->fields.skillBaseList;
          if ( !v164 )
            goto LABEL_363;
          if ( v163 >= v164->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&v164->obj.klass + v162);
          if ( !gameObject )
            goto LABEL_363;
          v165 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v162);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v166 = this->fields.skillIconList;
          if ( !v166 )
            goto LABEL_363;
          if ( v163 >= v166->max_length )
            goto LABEL_364;
          if ( !v165 )
            goto LABEL_363;
          gameObject = *((_QWORD *)&v166->obj.klass + v162);
          if ( !gameObject )
            goto LABEL_363;
          SkillIconComponent__Set_26821136(
            (SkillIconComponent_o *)gameObject,
            v165[4],
            v165[5],
            v165[12],
            v165[13],
            0LL);
          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
          if ( !skillLevelIconLabelList )
            goto LABEL_363;
          if ( v163 >= skillLevelIconLabelList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v162);
          if ( !gameObject )
            goto LABEL_363;
          UIIconLabel__Set_41886452((UIIconLabel_o *)gameObject, 48, v165[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v169 = this->fields.skillIconList;
        if ( !v169 )
          goto LABEL_363;
        v170 = v162 - 3;
        ++v162;
      }
      while ( v170 < (int)v169->max_length );
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          goto LABEL_179;
        }
      }
    }
LABEL_363:
    sub_B5D69C(gameObject, v89);
  }
  v157 = this->fields.skillIconList;
  if ( !v157 )
    goto LABEL_363;
  v158 = 0LL;
  while ( (int)v158 < (signed int)v157->max_length )
  {
    v159 = this->fields.skillBaseList;
    if ( !v159 )
      goto LABEL_363;
    if ( (unsigned int)v158 >= v159->max_length )
      goto LABEL_364;
    gameObject = (__int64)v159->m_Items[v158];
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v157 = this->fields.skillIconList;
      ++v158;
      if ( v157 )
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
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v237, v160);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_363;
    v172 = *(_QWORD *)&appendSkillIconList->max_length;
    if ( v172 << 32 < 1 )
    {
      v173 = 0;
    }
    else
    {
      v173 = 0;
      v174 = 0LL;
      do
      {
        if ( v237 )
        {
          v175 = v237->max_length;
          if ( v174 < (int)v175 )
          {
            if ( v174 >= v175 )
              goto LABEL_364;
            v176 = v237->m_Items[v174];
            if ( v176 && v176->fields.id >= 1 )
              v173 = v174 + 1;
          }
        }
        ++v174;
      }
      while ( v174 < (int)v172 );
    }
    if ( (int)v172 >= 1 )
    {
      v181 = v173;
      v182 = 4LL;
      do
      {
        v183 = v182 - 4;
        if ( v182 - 4 >= v181 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_363;
          if ( v183 >= appendSkillBaseList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v182);
          if ( !gameObject )
            goto LABEL_363;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !v237 )
            goto LABEL_363;
          if ( v183 >= v237->max_length )
            goto LABEL_364;
          v184 = this->fields.appendSkillBaseList;
          if ( !v184 )
            goto LABEL_363;
          if ( v183 >= v184->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&v184->obj.klass + v182);
          if ( !gameObject )
            goto LABEL_363;
          v185 = (int32_t *)*((_QWORD *)&v237->obj.klass + v182);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v186 = this->fields.appendSkillIconList;
          if ( !v186 )
            goto LABEL_363;
          if ( v183 >= v186->max_length )
            goto LABEL_364;
          if ( !v185 )
            goto LABEL_363;
          gameObject = *((_QWORD *)&v186->obj.klass + v182);
          if ( !gameObject )
            goto LABEL_363;
          SkillIconComponent__Set_26821136(
            (SkillIconComponent_o *)gameObject,
            v185[4],
            v185[5],
            v185[12],
            v185[13],
            0LL);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_363;
          if ( v183 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_364;
          gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v182);
          if ( !gameObject )
            goto LABEL_363;
          UIIconLabel__Set_41886452((UIIconLabel_o *)gameObject, 48, v185[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v189 = this->fields.appendSkillIconList;
        if ( !v189 )
          goto LABEL_363;
        v190 = v182 - 3;
        ++v182;
      }
      while ( v190 < (int)v189->max_length );
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
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    v177 = this->fields.appendSkillIconList;
    if ( !v177 )
      goto LABEL_363;
    v178 = 0LL;
    while ( (int)v178 < (signed int)v177->max_length )
    {
      v179 = this->fields.appendSkillBaseList;
      if ( !v179 )
        goto LABEL_363;
      if ( (unsigned int)v178 >= v179->max_length )
        goto LABEL_364;
      gameObject = (__int64)v179->m_Items[v178];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v177 = this->fields.appendSkillIconList;
        ++v178;
        if ( v177 )
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
                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    v194 = this->fields.svtCommandCardList;
    if ( v97 & 1 | (servantEntity == 0LL) )
    {
      if ( !v194 )
        goto LABEL_363;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
    }
    else
    {
      v196 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v195 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v242.fields.currentCryptoKey = v196;
      *(_QWORD *)&v242.fields.fakeValue = v195;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v242, 0LL);
      if ( !v99 )
        goto LABEL_363;
      commandCardParam = v99->fields.commandCardParam;
      v198 = gameObject;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v99, 0LL);
      if ( !v194 )
        goto LABEL_363;
      ServantCommandCardListComponent__Set_27528516(
        v194,
        v198,
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
  *(UnityEngine_Vector3_o *)&v199 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_363;
  v201 = v199;
  v202 = v200;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_363;
  v243.fields.y = -45.0;
  v243.fields.x = v201;
  v243.fields.z = v202;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v243, 0LL);
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6538/*"FRIEND_BUTTON_CANCEL"*/, 0LL);
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
      v203 = &StringLiteral_19587/*"icon_friend"*/;
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
      v203 = &StringLiteral_19694/*"img_blacklist_requestdate"*/;
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
      v203 = &StringLiteral_19693/*"img_blacklist_recorddate"*/;
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
      *(UnityEngine_Vector3_o *)&v205 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)gameObject,
                                          0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_363;
      v207 = v205;
      v208 = v206;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      v244.fields.y = 0.0;
      v244.fields.x = v207;
      v244.fields.z = v208;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v244, 0LL);
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
      v203 = &StringLiteral_19586/*"icon_follow"*/;
LABEL_311:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v203, 0LL);
      break;
    default:
      break;
  }
  v209 = item->fields.otherUserGameEntity;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_28445348 = Grade__GetKind_28445348(v209, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_28445348, 0LL);
  baseSpr = this->fields.baseSpr;
  v213 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v213, 0LL);
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
    LODWORD(v216) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_363;
    v217 = v216;
    LODWORD(v218) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_363;
    v219 = v218;
    v220 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v220, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_363;
    v222 = LocalPositionX;
    v223 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionX(v223, (float)(v219 * 0.5) + (float)(v217 + v222), 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_363;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_28445348, 0LL);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v215);
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
    v226 = *(_QWORD *)(gameObject + 88);
    if ( !v226 )
      goto LABEL_365;
    if ( !*(_DWORD *)(v226 + 24) )
    {
      v235 = sub_B5D6C8(gameObject);
      sub_B5D668(v235, 0LL);
    }
    gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)gameObject,
                            item->fields.classPos,
                            1,
                            item->fields.displayServantType,
                            *(_DWORD *)(v226 + 32),
                            0LL);
    if ( gameObject )
    {
      v227 = *(_QWORD *)(gameObject + 40);
      if ( v227 >= 1 )
      {
        v228 = item->fields.otherUserGameEntity;
        if ( !v228 )
          goto LABEL_365;
        if ( v228->fields.pushUserSvtId == v227 )
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
      v230 = (Il2CppObject **)&StringLiteral_6413/*"FFFF00"*/;
    else
      v230 = (Il2CppObject **)&StringLiteral_6414/*"FFFFFF"*/;
    v231 = *v230;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v232 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField);
    gameObject = (__int64)System_String__Format_44573324((System_String_o *)StringLiteral_16021/*"[{0}]+{1}[-]"*/, v231, v232, 0LL);
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
        v95 = item->fields._OpenClassBoardNum_k__BackingField >= 0;
LABEL_361:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v95, 0LL);
        return;
      }
    }
LABEL_365:
    sub_B5D69C(gameObject, v225);
  }
}


void __fastcall FriendOperationItemListViewItemDraw__UpdateLockUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *lockMarkObj; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *removeButton; // x0
  int32_t kind; // w8

  if ( (byte_42EBE21 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EBE21 = 1;
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
      sub_B5D69C(removeButton, v7);
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
    sub_B5D69C(messageDispButton, isHide);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  UIWidget_o *messageLabel; // x21
  float v25; // s0
  float v26; // s1
  float v27; // s2
  int v28; // s3
  float v29; // s4
  float v30; // s5
  float v31; // s6
  UILabel_o *v32; // x21
  int v33; // s0
  int v34; // s1
  int v35; // s2
  UILabel_o *v36; // x21
  System_String_o **v37; // x8
  UnityEngine_Color_o v38; // [xsp+0h] [xbp-30h] BYREF

  v9 = item;
  v10 = this;
  if ( (byte_42EBE20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)item, isDisp, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17211/*"btn_message_on"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6546/*"FRIEND_HIDE_MESSAGE"*/, v17, v18, v19);
    this = (FriendOperationItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_17210/*"btn_message_off"*/, v20, v21, v22);
    byte_42EBE20 = 1;
  }
  if ( !v9 )
    goto LABEL_25;
  otherUserGameEntity = v9->fields.otherUserGameEntity;
  messageLabel = (UIWidget_o *)v10->fields.messageLabel;
  v25 = isDisp ? 1.0 : 0.73725;
  v38 = (UnityEngine_Color_o)0LL;
  v26 = v25;
  v27 = v25;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v38);
  if ( !messageLabel )
    goto LABEL_25;
  UIWidget__set_color(messageLabel, v38, 0LL);
  v32 = v10->fields.messageLabel;
  if ( isDisp )
  {
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v38 = (UnityEngine_Color_o)0LL;
  }
  else
  {
    v33 = 1056997505;
    v38 = (UnityEngine_Color_o)0LL;
    v34 = 1056997505;
    v35 = 1056997505;
  }
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v28 - 3), v29, v30, v31, (const MethodInfo *)&v38);
  if ( !v32 )
    goto LABEL_25;
  UILabel__set_effectColor(v32, v38, 0LL);
  v36 = v10->fields.messageLabel;
  if ( !isDisp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6546/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
    if ( v36 )
      goto LABEL_20;
LABEL_25:
    sub_B5D69C(this, item);
  }
  if ( !otherUserGameEntity )
    goto LABEL_25;
  item = (FriendOperationItemListViewItem_o *)otherUserGameEntity->fields.message;
  if ( !v36 )
    goto LABEL_25;
LABEL_20:
  UILabel__set_text(v36, (System_String_o *)item, 0LL);
  this = (FriendOperationItemListViewItemDraw_o *)v10->fields.messageDispButton;
  if ( !this )
    goto LABEL_25;
  this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)this,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_25;
  v37 = (System_String_o **)&StringLiteral_17210/*"btn_message_off"*/;
  if ( !isDisp )
    v37 = (System_String_o **)&StringLiteral_17211/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v37, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__setupMessageUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendOperationItemListViewItemDraw_o *v5; // x19
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  const MethodInfo *v7; // x3
  bool v8; // w2
  FriendOperationItemListViewItemDraw_o *v9; // x0
  FriendOperationItemListViewItem_o *v10; // x1

  v5 = this;
  if ( (byte_42EBE22 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_B5D5C4(
                                                      &OptionManager_TypeInfo,
                                                      (_DWORD)item,
                                                      (_DWORD)method,
                                                      v3);
    byte_42EBE22 = 1;
  }
  if ( !item )
LABEL_16:
    sub_B5D69C(this, item);
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
        FriendOperationItemListViewItemDraw__dispMessageUI(v5, 1, method);
      }
      else
      {
        FriendOperationItemListViewItemDraw__dispMessageUI(v5, 0, method);
        if ( item->fields.swapMessageDisp )
        {
          v8 = 1;
          v9 = v5;
          v10 = item;
        }
        else
        {
          v9 = v5;
          v10 = item;
          v8 = 0;
        }
        FriendOperationItemListViewItemDraw__setMessageButtonUI(v9, v10, v8, v7);
      }
      return;
    default:
      return;
  }
}