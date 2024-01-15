void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  struct SkillIconComponent_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  struct UIIconLabel_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x2
  struct UnityEngine_GameObject_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x2
  struct SkillIconComponent_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  struct UIIconLabel_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40FD8F2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v5);
    sub_B16FFC(&UIIconLabel___TypeInfo, v6);
    byte_40FD8F2 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax,
                                                v2);
  this->fields.skillBaseList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v16 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                             v15);
  this->fields.skillIconList = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = (struct UIIconLabel_array *)sub_B17014(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                      v23);
  this->fields.skillLevelIconLabelList = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v32 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                                 v31);
  this->fields.appendSkillBaseList = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v40 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                             v39);
  this->fields.appendSkillIconList = v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v48 = (struct UIIconLabel_array *)sub_B17014(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                      v47);
  this->fields.appendSkillLevelIconLabelList = v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__Awake(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v21; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v23; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v25; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v27; // x19

  if ( (byte_40FD8EC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19290/*"icon_skill_mini"*/, v9);
    sub_B16FFC(&StringLiteral_19421/*"img_friend_skill"*/, v10);
    sub_B16FFC(&StringLiteral_19201/*"icon_append_mini"*/, v11);
    sub_B16FFC(&StringLiteral_19420/*"img_friend_appendskill"*/, v12);
    byte_40FD8EC = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v21 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v21, (System_String_o *)StringLiteral_19290/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v23 = this->fields.skillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_19421/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v25 = this->fields.appendSkillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v25, (System_String_o *)StringLiteral_19201/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v27 = this->fields.appendSkillTitleSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_19420/*"img_friend_appendskill"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItemDraw__SetInput(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v16; // w24
  UnityEngine_Behaviour_o *v17; // x22
  UnityEngine_Component_o *offerButton; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Collider_o *v21; // x0
  UnityEngine_Component_o *acceptButton; // x0
  UnityEngine_Collider_o *v23; // x0
  UnityEngine_Component_o *rejectButton; // x0
  UnityEngine_Collider_o *v25; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_Collider_o *v27; // x0
  UnityEngine_Component_o *removeButton; // x0
  UnityEngine_Collider_o *v29; // x0
  UnityEngine_Component_o *registButton; // x0
  UnityEngine_Collider_o *v31; // x0
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v33; // x2
  UnityEngine_Component_o *v34; // x0
  UnityEngine_Collider_o *v35; // x0
  struct UICommonButton_o *v36; // x0
  UnityEngine_Component_o *v37; // x0
  UnityEngine_Collider_o *v38; // x0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_Collider_o *v40; // x0
  struct UICommonButton_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_Collider_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_Collider_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_Collider_o *v47; // x0
  struct UICommonButton_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_Collider_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_Collider_o *v52; // x0
  UnityEngine_Component_o *v53; // x0
  UnityEngine_Collider_o *v54; // x0
  struct UICommonButton_o *v55; // x0
  UnityEngine_Object_o *pushSpr; // x21
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct UILabel_o *loginDataLabel; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 userSvtId; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0

  v6 = this;
  if ( (byte_40FD8F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    this = (FriendOperationItemListViewItemDraw_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FD8F1 = 1;
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
      v9 = (UnityEngine_Component_o *)v6->fields.rangeSprite;
      if ( !v9 )
        goto LABEL_25;
      gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !gameObject )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
      v12 = (UnityEngine_Component_o *)v6->fields.addRangeSprite;
      if ( !v12 )
        goto LABEL_25;
      v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !v13 )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(v13, 0, 0LL);
    }
  }
  skillButtonList = v6->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( v16 < skillButtonList->max_length )
      {
        v17 = (UnityEngine_Behaviour_o *)skillButtonList->m_Items[v16];
        if ( !v17 )
          goto LABEL_25;
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))v17->klass[1]._1.namespaze)(
          v17,
          1LL,
          v17->klass[1]._1.byval_arg.data,
          method);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v17->klass[1]._1.implementedInterfaces)(
          v17,
          0LL,
          0LL,
          v17->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v17, isInput, 0LL);
        if ( (int)++v16 >= max_length )
          goto LABEL_26;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_25;
      }
LABEL_100:
      sub_B17100(this, item, isInput);
      sub_B170A0();
    }
  }
LABEL_26:
  offerButton = (UnityEngine_Component_o *)v6->fields.offerButton;
  if ( !offerButton )
LABEL_25:
    sub_B170D4();
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      offerButton,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Component_o *)v6->fields.offerButton;
    if ( !v20 )
      goto LABEL_25;
    v21 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v20,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !v21 )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled(v21, 0, 0LL);
    acceptButton = (UnityEngine_Component_o *)v6->fields.acceptButton;
    if ( !acceptButton )
      goto LABEL_25;
    v23 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      acceptButton,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !v23 )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled(v23, 0, 0LL);
    rejectButton = (UnityEngine_Component_o *)v6->fields.rejectButton;
    if ( !rejectButton )
      goto LABEL_25;
    v25 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      rejectButton,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !v25 )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled(v25, 0, 0LL);
    cancelButton = (UnityEngine_Component_o *)v6->fields.cancelButton;
    if ( !cancelButton )
      goto LABEL_25;
    v27 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      cancelButton,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !v27 )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled(v27, 0, 0LL);
    removeButton = (UnityEngine_Component_o *)v6->fields.removeButton;
    if ( !removeButton )
      goto LABEL_25;
    v29 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      removeButton,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !v29 )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled(v29, 0, 0LL);
    registButton = (UnityEngine_Component_o *)v6->fields.registButton;
    if ( !registButton )
      goto LABEL_25;
    v31 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      registButton,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !v31 )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled(v31, 0, 0LL);
    baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v34 = (UnityEngine_Component_o *)v6->fields.baseButton;
      if ( !v34 )
        goto LABEL_25;
      v35 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        v34,
                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !v35 )
        goto LABEL_25;
      UnityEngine_Collider__set_enabled(v35, isInput, 0LL);
      v36 = v6->fields.baseButton;
      if ( !v36 )
        goto LABEL_25;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v36->klass->vtable._14_SetState.method)(
        v36,
        0LL,
        1LL,
        v36->klass->vtable._15_OnPress.methodPtr);
    }
    if ( item )
    {
      switch ( item->fields.kind )
      {
        case 0:
          v39 = (UnityEngine_Component_o *)v6->fields.offerButton;
          if ( !v39 )
            goto LABEL_25;
          v40 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v39,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v40 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v40, isInput, 0LL);
          v41 = v6->fields.offerButton;
          if ( !v41 )
            goto LABEL_25;
          goto LABEL_82;
        case 1:
          v42 = (UnityEngine_Component_o *)v6->fields.cancelButton;
          if ( !v42 )
            goto LABEL_25;
          v43 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v42,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v43 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v43, isInput, 0LL);
          v41 = v6->fields.cancelButton;
          if ( !v41 )
            goto LABEL_25;
          goto LABEL_82;
        case 2:
          v44 = (UnityEngine_Component_o *)v6->fields.acceptButton;
          if ( !v44 )
            goto LABEL_25;
          v45 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v44,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v45 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v45, isInput, 0LL);
          v46 = (UnityEngine_Component_o *)v6->fields.rejectButton;
          if ( !v46 )
            goto LABEL_25;
          v47 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v46,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v47 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v47, isInput, 0LL);
          v48 = v6->fields.acceptButton;
          if ( !v48 )
            goto LABEL_25;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v48->klass->vtable._14_SetState.method)(
            v48,
            0LL,
            1LL,
            v48->klass->vtable._15_OnPress.methodPtr);
          v41 = v6->fields.rejectButton;
          if ( !v41 )
            goto LABEL_25;
          goto LABEL_82;
        case 3:
        case 8:
          v37 = (UnityEngine_Component_o *)v6->fields.removeButton;
          if ( !v37 )
            goto LABEL_25;
          v38 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v37,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v38 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v38, isInput, 0LL);
          break;
        case 7:
          v49 = (UnityEngine_Component_o *)v6->fields.registButton;
          if ( !v49 )
            goto LABEL_25;
          v50 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v49,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v50 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v50, isInput, 0LL);
          v41 = v6->fields.registButton;
          if ( !v41 )
            goto LABEL_25;
          goto LABEL_82;
        case 9:
          v51 = (UnityEngine_Component_o *)v6->fields.offerButton;
          if ( !v51 )
            goto LABEL_25;
          v52 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v51,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v52 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v52, isInput, 0LL);
          v53 = (UnityEngine_Component_o *)v6->fields.removeButton;
          if ( !v53 )
            goto LABEL_25;
          v54 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v53,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !v54 )
            goto LABEL_25;
          UnityEngine_Collider__set_enabled(v54, isInput, 0LL);
          v55 = v6->fields.offerButton;
          if ( !v55 )
            goto LABEL_25;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v55->klass->vtable._14_SetState.method)(
            v55,
            0LL,
            1LL,
            v55->klass->vtable._15_OnPress.methodPtr);
          break;
        default:
          goto LABEL_83;
      }
      v41 = v6->fields.removeButton;
      if ( !v41 )
        goto LABEL_25;
LABEL_82:
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v41->klass->vtable._14_SetState.method)(
        v41,
        0LL,
        1LL,
        v41->klass->vtable._15_OnPress.methodPtr);
LABEL_83:
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v33);
      pushSpr = (UnityEngine_Object_o *)v6->fields.pushSpr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
      {
        v57 = (UnityEngine_Component_o *)v6->fields.pushSpr;
        if ( !v57 )
          goto LABEL_25;
        v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
        if ( !v58 )
          goto LABEL_25;
        UnityEngine_GameObject__SetActive(v58, 0, 0LL);
        this = (FriendOperationItemListViewItemDraw_o *)item->fields.otherUserGameEntity;
        if ( !this )
          goto LABEL_25;
        loginDataLabel = this->fields.loginDataLabel;
        if ( !loginDataLabel )
          goto LABEL_25;
        if ( !LODWORD(loginDataLabel->fields.leftAnchor) )
          goto LABEL_100;
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)this,
                              item->fields.classPos,
                              1,
                              item->fields.displayServantType,
                              (int32_t)loginDataLabel->fields.rightAnchor,
                              0LL);
        if ( ServantLeaderInfo )
        {
          userSvtId = ServantLeaderInfo->fields.userSvtId;
          if ( userSvtId >= 1 )
          {
            otherUserGameEntity = item->fields.otherUserGameEntity;
            if ( !otherUserGameEntity )
              goto LABEL_25;
            if ( otherUserGameEntity->fields.pushUserSvtId == userSvtId )
            {
              v63 = (UnityEngine_Component_o *)v6->fields.pushSpr;
              if ( v63 )
              {
                v64 = UnityEngine_Component__get_gameObject(v63, 0LL);
                if ( v64 )
                {
                  UnityEngine_GameObject__SetActive(v64, 1, 0LL);
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
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Object_o *v37; // x22
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  int32_t kind; // w8
  bool v43; // w22
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x20
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  bool v49; // w1
  OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  char v52; // w21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v54; // x26
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *v59; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v61; // x8
  UIIconLabel_o *playerLevelIconLabel; // x0
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v65; // x1
  System_String_o *SvtNameText; // x0
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  int v70; // w25
  __int64 v71; // x23
  __int64 v72; // x23
  DataManager_o *v73; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitAddMaster_o *v75; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x28
  char v78; // w22
  UIRangeLabel_o *v79; // x22
  System_String_o *v80; // x0
  UnityEngine_Object_o *v81; // x22
  ServantNpCommandCardComponent_o *v82; // x0
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v84; // x23
  __int64 v85; // x24
  WebViewManager_o *Instance; // x0
  ServantLimitSpoilerProtectionMaster_o *v87; // x0
  int v88; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v90; // x26
  __int64 v91; // x27
  ServantLimitImageMaster_o *v92; // x25
  int32_t v93; // w0
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v95; // w0
  char v96; // w25
  System_String_o *OverwriteTDName; // x0
  System_String_o **v98; // x9
  bool v99; // cc
  Il2CppObject *v100; // x22
  System_String_o *v101; // x23
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  System_String_o *IconName; // x0
  UnityEngine_Object_o *svtNpCommandCard; // x22
  ServantNpCommandCardComponent_o *v108; // x0
  int32_t v109; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v111; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v113; // x23
  int64_t createdAt; // x0
  System_String_o *v115; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v117; // x0
  System_String_o *v118; // x0
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v120; // x8
  int v121; // w9
  unsigned __int64 v122; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v124; // x14
  struct SkillIconComponent_array *v125; // x8
  __int64 v126; // x22
  struct UnityEngine_GameObject_array *v127; // x8
  UnityEngine_GameObject_o *v128; // x0
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  __int64 v131; // x22
  __int64 v132; // x23
  unsigned __int64 v133; // x24
  struct UnityEngine_GameObject_array *v134; // x9
  UnityEngine_GameObject_o *v135; // x0
  int32_t *v136; // x25
  struct SkillIconComponent_array *v137; // x8
  SkillIconComponent_o *v138; // x0
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  UIIconLabel_o *v140; // x0
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  UnityEngine_GameObject_o *v142; // x0
  struct SkillIconComponent_array *v143; // x8
  __int64 v144; // x9
  UnityEngine_Component_o *skillInfoUiWidget; // x0
  UnityEngine_GameObject_o *v146; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v149; // x8
  int v150; // w9
  signed __int64 v151; // x10
  unsigned __int64 v152; // x14
  SkillInfo_o *v153; // x14
  struct SkillIconComponent_array *v154; // x8
  __int64 v155; // x22
  struct UnityEngine_GameObject_array *v156; // x8
  UnityEngine_GameObject_o *v157; // x0
  UnityEngine_Component_o *v158; // x0
  UnityEngine_GameObject_o *v159; // x0
  struct System_Collections_Generic_List_UIWidget__o **p_switchSkillUIList; // x22
  __int64 v161; // x22
  __int64 v162; // x23
  unsigned __int64 v163; // x24
  struct UnityEngine_GameObject_array *v164; // x9
  UnityEngine_GameObject_o *v165; // x0
  int32_t *v166; // x25
  struct SkillIconComponent_array *v167; // x8
  SkillIconComponent_o *v168; // x0
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  UIIconLabel_o *v170; // x0
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_GameObject_o *v172; // x0
  struct SkillIconComponent_array *v173; // x8
  __int64 v174; // x9
  UnityEngine_Component_o *appendSkillInfoUiWidget; // x0
  UnityEngine_GameObject_o *v176; // x0
  struct System_Collections_Generic_List_UIWidget__o *v177; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v178; // x0
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UIWidget_array *v180; // x0
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v183; // x22
  __int64 v184; // x23
  __int64 v185; // x24
  int32_t v186; // w0
  System_Int32_array *commandCardParam; // x24
  int32_t v188; // w23
  System_Int32_array *CommandCodeIdList; // x0
  UnityEngine_Component_o *removeButton; // x0
  UnityEngine_Transform_o *transform; // x0
  float v192; // s0
  float v193; // s2
  UnityEngine_Component_o *v194; // x0
  float v195; // s8
  float v196; // s9
  UnityEngine_Transform_o *v197; // x0
  UnityEngine_Component_o *v198; // x0
  UnityEngine_GameObject_o *v199; // x0
  UnityEngine_Component_o *acceptButton; // x0
  UnityEngine_GameObject_o *v201; // x0
  UnityEngine_Component_o *rejectButton; // x0
  UnityEngine_GameObject_o *v203; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v205; // x0
  UnityEngine_Component_o *v206; // x0
  UnityEngine_GameObject_o *v207; // x0
  UnityEngine_Component_o *removeButton2; // x0
  UnityEngine_GameObject_o *v209; // x0
  UnityEngine_Component_o *removeMarkSpr; // x0
  UnityEngine_GameObject_o *v211; // x0
  UnityEngine_Component_o *registButton; // x0
  UnityEngine_GameObject_o *v213; // x0
  UnityEngine_Component_o *offerButton; // x0
  UnityEngine_GameObject_o *v215; // x0
  UnityEngine_Component_o *v216; // x0
  UnityEngine_Component_o *v217; // x0
  UnityEngine_GameObject_o *v218; // x0
  UnityEngine_Component_o *v219; // x0
  UnityEngine_GameObject_o *v220; // x0
  UISprite_o *loginDataSpr; // x0
  __int64 *v222; // x8
  UnityEngine_Component_o *v223; // x0
  UnityEngine_GameObject_o *v224; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v226; // x0
  UnityEngine_Component_o *v227; // x0
  UnityEngine_GameObject_o *v228; // x0
  UnityEngine_Component_o *v229; // x0
  UnityEngine_Transform_o *v230; // x0
  float v231; // s0
  float v232; // s2
  UnityEngine_Component_o *v233; // x0
  float v234; // s8
  float v235; // s9
  UnityEngine_Transform_o *v236; // x0
  UnityEngine_Component_o *v237; // x0
  UnityEngine_GameObject_o *v238; // x0
  UnityEngine_Component_o *v239; // x0
  UnityEngine_GameObject_o *v240; // x0
  UnityEngine_Component_o *v241; // x0
  UnityEngine_GameObject_o *v242; // x0
  UnityEngine_GameObject_o *v243; // x0
  UnityEngine_Component_o *v244; // x0
  UnityEngine_GameObject_o *v245; // x0
  UnityEngine_Component_o *v246; // x0
  UnityEngine_GameObject_o *v247; // x0
  UnityEngine_Component_o *v248; // x0
  UnityEngine_GameObject_o *v249; // x0
  OtherUserGameEntity_o *v250; // x21
  int32_t Kind_28870480; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v254; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v256; // x2
  UILabel_o *v257; // x0
  float v258; // s0
  UserGradeComponent_o *v259; // x0
  float v260; // s8
  float v261; // s0
  UnityEngine_Component_o *v262; // x0
  float v263; // s9
  UnityEngine_GameObject_o *v264; // x0
  float LocalPositionX; // s0
  UnityEngine_Component_o *v266; // x0
  float v267; // s10
  UnityEngine_GameObject_o *v268; // x0
  UserGradeComponent_o *v269; // x0
  UnityEngine_Object_o *pushSpr; // x21
  UnityEngine_Component_o *v271; // x0
  UnityEngine_GameObject_o *v272; // x0
  __int64 v273; // x1
  __int64 v274; // x2
  struct OtherUserGameEntity_o *v275; // x0
  struct System_Int32_array *v276; // x8
  ServantLeaderInfo_o *v277; // x0
  __int64 userSvtId; // x8
  struct OtherUserGameEntity_o *v279; // x9
  UnityEngine_Component_o *v280; // x0
  UnityEngine_GameObject_o *v281; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  Il2CppObject **v283; // x9
  Il2CppObject *v284; // x21
  Il2CppObject *v285; // x0
  System_String_o *v286; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UnityEngine_Component_o *v288; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  SkillInfo_array *v290; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v294; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v295; // 0:x0.16
  UnityEngine_Vector3_o v296; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v297; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD8ED & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Grade_TypeInfo, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&OptionManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_19375/*"img_blacklist_requestdate"*/, v22);
    sub_B16FFC(&StringLiteral_6317/*"FFFFFF"*/, v23);
    sub_B16FFC(&StringLiteral_13315/*"TIME_BEFORE_TITLE_COLOR"*/, v24);
    sub_B16FFC(&StringLiteral_9352/*"NP_MAX_COLOR_NAME"*/, v25);
    sub_B16FFC(&StringLiteral_19374/*"img_blacklist_recorddate"*/, v26);
    sub_B16FFC(&StringLiteral_6316/*"FFFF00"*/, v27);
    sub_B16FFC(&StringLiteral_9324/*"NO_ENTRY_NAME"*/, v28);
    sub_B16FFC(&StringLiteral_9346/*"NP_COLOR_NAME"*/, v29);
    sub_B16FFC(&StringLiteral_15767/*"[{0}]+{1}[-]"*/, v30);
    sub_B16FFC(&StringLiteral_6435/*"FRIEND_BUTTON_CANCEL"*/, v31);
    sub_B16FFC(&StringLiteral_19269/*"icon_friend"*/, v32);
    sub_B16FFC(&StringLiteral_19268/*"icon_follow"*/, v33);
    byte_40FD8ED = 1;
  }
  tdInfo = 0LL;
  v290 = 0LL;
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
      v44 = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !v44 )
        goto LABEL_363;
      gameObject = UnityEngine_Component__get_gameObject(v44, 0LL);
      if ( !gameObject )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      v47 = (UnityEngine_Component_o *)this->fields.addRangeSprite;
      if ( !v47 )
        goto LABEL_363;
      v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
      if ( !v48 )
        goto LABEL_363;
      v49 = 0;
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
    v35 = (UnityEngine_Component_o *)this->fields.rangeSprite;
    if ( !v35 )
      goto LABEL_363;
    v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
    if ( !v36 )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive(v36, mode == 0, 0LL);
  }
  v37 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    v40 = (UnityEngine_Component_o *)this->fields.addRangeSprite;
    if ( !v40 )
      goto LABEL_363;
    v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
    if ( !v41 )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive(v41, item->fields.isTerminationSpace, 0LL);
  }
  if ( !mode )
    return;
  kind = item->fields.kind;
  v43 = kind == 9 || kind == 3;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
    goto LABEL_363;
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_363;
  if ( !mainSupportDeckIds->max_length )
  {
LABEL_364:
    sub_B17100(otherUserGameEntity, v38, v39);
    sub_B170A0();
  }
  v52 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        otherUserGameEntity,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        mainSupportDeckIds->m_Items[1],
                        0LL);
  v54 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_42;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_42;
    v85 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v84 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v293.fields.currentCryptoKey = v85;
    *(_QWORD *)&v293.fields.fakeValue = v84;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v293, 0LL) )
    {
LABEL_42:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v54, 0LL);
      v52 = 0;
    }
    else
    {
      v54 = 0LL;
      v52 = 1;
    }
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_363;
  ServantFaceIconComponent__Set_30632248(
    servantFaceIcon,
    v54,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v43,
    0,
    0LL);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v56);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_40FD8E7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326/*"error"*/, v57);
    byte_40FD8E7 = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_363;
  v59 = item->fields.otherUserGameEntity;
  if ( v59 )
    p_userName = &v59->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18326/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0LL);
  v61 = item->fields.otherUserGameEntity;
  playerLevelIconLabel = this->fields.playerLevelIconLabel;
  if ( v61 )
  {
    userLv = v61->fields.userLv;
    if ( !playerLevelIconLabel )
      goto LABEL_363;
  }
  else
  {
    userLv = 1;
    if ( !playerLevelIconLabel )
      goto LABEL_363;
  }
  UIIconLabel__Set_40377052(playerLevelIconLabel, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantNameLabel = this->fields.servantNameLabel;
  SvtNameText = FriendOperationItemListViewItem__get_SvtNameText(item, v65);
  if ( !servantNameLabel )
    goto LABEL_363;
  UIRangeLabel__Set(servantNameLabel, SvtNameText, 0LL, 1, 0, 0LL);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v67);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v68);
  if ( item->fields.servantEntity )
  {
    v70 = TreasureDeviceLevelIcon;
    v71 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v72 = **(_QWORD **)(v71 + 192);
    if ( (*(_BYTE *)(v72 + 306) & 1) == 0 )
      sub_AAFCFC(v72);
    v73 = **(DataManager_o ***)(v72 + 184);
    if ( !v73 )
      goto LABEL_363;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           v73,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v54 )
      goto LABEL_363;
    v75 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v54, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v77 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v54;
    if ( OptionManager__GetSpoilerSetting(0LL) || ServantLeaderInfo__IsNpc(v54, 0LL) )
    {
      v78 = v52;
    }
    else
    {
      v78 = v52;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_363;
      v87 = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !v87 )
        goto LABEL_363;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     v87,
                                     v54->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    v88 = v70;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v91 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
    v90 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
    v92 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v294.fields.currentCryptoKey = v91;
    *(_QWORD *)&v294.fields.fakeValue = v90;
    v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v294, 0LL);
    if ( !v92 )
      goto LABEL_363;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v92,
                                   v93,
                                   FriendNpNameDispLimitCount,
                                   0LL);
    v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v77[3], 0LL);
    if ( !tdInfo || !v75 )
      goto LABEL_363;
    v96 = v78;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v75,
                        v95,
                        ServantLimitCountSealAfter,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0LL);
    v98 = (System_String_o **)&StringLiteral_9352/*"NP_MAX_COLOR_NAME"*/;
    v99 = v88 <= 1;
    v100 = (Il2CppObject *)OverwriteTDName;
    v54 = (ServantLeaderInfo_o *)v77;
    v52 = v96;
    if ( v99 )
      v98 = (System_String_o **)&StringLiteral_9346/*"NP_COLOR_NAME"*/;
    v101 = *v98;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v102 = LocalizationManager__Get(v101, 0LL);
    v103 = System_String__Format(v102, v100, 0LL);
    if ( !tdInfo )
      goto LABEL_363;
    v104 = v103;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    IconName = StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
    if ( !svtNpTitleLabel )
      goto LABEL_363;
    UIRangeLabel__Set(svtNpTitleLabel, v104, IconName, 0, 0, 0LL);
    svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
    {
      v108 = this->fields.svtNpCommandCard;
      if ( !v108 )
        goto LABEL_363;
      ServantNpCommandCardComponent__Set(v108, tdInfo, 0LL);
    }
  }
  else
  {
    v79 = this->fields.svtNpTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v79 )
      goto LABEL_363;
    UIRangeLabel__Set(v79, v80, 0LL, 1, 0, 0LL);
    v81 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
    {
      v82 = this->fields.svtNpCommandCard;
      if ( !v82 )
        goto LABEL_363;
      ServantNpCommandCardComponent__Clear(v82, 0LL);
    }
  }
  v109 = item->fields.kind;
  if ( v109 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v115 = LocalizationManager__Get((System_String_o *)StringLiteral_13315/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v113 = v115;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_128;
    }
  }
  else if ( v109 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_13315/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v113 = v111;
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
    v113 = LocalizationManager__Get((System_String_o *)StringLiteral_13315/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
      goto LABEL_128;
    }
  }
  createdAt = 0LL;
LABEL_128:
  v117 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
  v118 = System_String__Format(v113, v117, 0LL);
  if ( !loginDataLabel )
    goto LABEL_363;
  UILabel__set_text(loginDataLabel, v118, 0LL);
  if ( item->fields.servantEntity )
  {
    otherUserGameEntity = (OtherUserGameEntity_o *)FriendOperationItemListViewItem__GetSkillInfo(
                                                     item,
                                                     &skillInfoList,
                                                     v39);
    skillIconList = this->fields.skillIconList;
    if ( !skillIconList )
      goto LABEL_363;
    v120 = *(_QWORD *)&skillIconList->max_length;
    if ( v120 << 32 >= 1 )
    {
      v121 = 0;
      v122 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v122 < (int)max_length )
        {
          if ( v122 >= max_length )
            goto LABEL_364;
          v124 = skillInfoList->m_Items[v122];
          if ( v124 && v124->fields.id >= 1 )
            v121 = v122 + 1;
        }
        if ( (__int64)++v122 >= (int)v120 )
          goto LABEL_153;
      }
      goto LABEL_363;
    }
    v121 = 0;
LABEL_153:
    if ( (int)v120 >= 1 )
    {
      v131 = v121;
      v132 = 4LL;
      do
      {
        v133 = v132 - 4;
        if ( v132 - 4 >= v131 )
        {
          skillBaseList = this->fields.skillBaseList;
          if ( !skillBaseList )
            goto LABEL_363;
          if ( v133 >= skillBaseList->max_length )
            goto LABEL_364;
          v142 = (UnityEngine_GameObject_o *)*((_QWORD *)&skillBaseList->obj.klass + v132);
          if ( !v142 )
            goto LABEL_363;
          UnityEngine_GameObject__SetActive(v142, 0, 0LL);
        }
        else
        {
          if ( !skillInfoList )
            goto LABEL_363;
          if ( v133 >= skillInfoList->max_length )
            goto LABEL_364;
          v134 = this->fields.skillBaseList;
          if ( !v134 )
            goto LABEL_363;
          if ( v133 >= v134->max_length )
            goto LABEL_364;
          v135 = (UnityEngine_GameObject_o *)*((_QWORD *)&v134->obj.klass + v132);
          if ( !v135 )
            goto LABEL_363;
          v136 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v132);
          UnityEngine_GameObject__SetActive(v135, 1, 0LL);
          v137 = this->fields.skillIconList;
          if ( !v137 )
            goto LABEL_363;
          if ( v133 >= v137->max_length )
            goto LABEL_364;
          if ( !v136 )
            goto LABEL_363;
          v138 = (SkillIconComponent_o *)*((_QWORD *)&v137->obj.klass + v132);
          if ( !v138 )
            goto LABEL_363;
          SkillIconComponent__Set_23612468(v138, v136[4], v136[5], v136[12], v136[13], 0LL);
          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
          if ( !skillLevelIconLabelList )
            goto LABEL_363;
          if ( v133 >= skillLevelIconLabelList->max_length )
            goto LABEL_364;
          v140 = (UIIconLabel_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v132);
          if ( !v140 )
            goto LABEL_363;
          UIIconLabel__Set_40377052(v140, 48, v136[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v143 = this->fields.skillIconList;
        if ( !v143 )
          goto LABEL_363;
        v144 = v132 - 3;
        ++v132;
      }
      while ( v144 < (int)v143->max_length );
    }
    skillInfoUiWidget = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
    if ( skillInfoUiWidget )
    {
      v146 = UnityEngine_Component__get_gameObject(skillInfoUiWidget, 0LL);
      if ( v146 )
      {
        UnityEngine_GameObject__SetActive(v146, 1, 0LL);
        switchSkillUIList = this->fields.switchSkillUIList;
        if ( switchSkillUIList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
          goto LABEL_179;
        }
      }
    }
LABEL_363:
    sub_B170D4();
  }
  v125 = this->fields.skillIconList;
  if ( !v125 )
    goto LABEL_363;
  v126 = 0LL;
  while ( (int)v126 < (signed int)v125->max_length )
  {
    v127 = this->fields.skillBaseList;
    if ( !v127 )
      goto LABEL_363;
    if ( (unsigned int)v126 >= v127->max_length )
      goto LABEL_364;
    v128 = v127->m_Items[v126];
    if ( v128 )
    {
      UnityEngine_GameObject__SetActive(v128, 0, 0LL);
      v125 = this->fields.skillIconList;
      ++v126;
      if ( v125 )
        continue;
    }
    goto LABEL_363;
  }
  v129 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
  if ( !v129 )
    goto LABEL_363;
  v130 = UnityEngine_Component__get_gameObject(v129, 0LL);
  if ( !v130 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v130, 0, 0LL);
LABEL_179:
  if ( item->fields.servantEntity )
  {
    otherUserGameEntity = (OtherUserGameEntity_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v290, v39);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_363;
    v149 = *(_QWORD *)&appendSkillIconList->max_length;
    if ( v149 << 32 < 1 )
    {
      v150 = 0;
    }
    else
    {
      v150 = 0;
      v151 = 0LL;
      do
      {
        if ( v290 )
        {
          v152 = v290->max_length;
          if ( v151 < (int)v152 )
          {
            if ( v151 >= v152 )
              goto LABEL_364;
            v153 = v290->m_Items[v151];
            if ( v153 && v153->fields.id >= 1 )
              v150 = v151 + 1;
          }
        }
        ++v151;
      }
      while ( v151 < (int)v149 );
    }
    if ( (int)v149 >= 1 )
    {
      v161 = v150;
      v162 = 4LL;
      do
      {
        v163 = v162 - 4;
        if ( v162 - 4 >= v161 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_363;
          if ( v163 >= appendSkillBaseList->max_length )
            goto LABEL_364;
          v172 = (UnityEngine_GameObject_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v162);
          if ( !v172 )
            goto LABEL_363;
          UnityEngine_GameObject__SetActive(v172, 0, 0LL);
        }
        else
        {
          if ( !v290 )
            goto LABEL_363;
          if ( v163 >= v290->max_length )
            goto LABEL_364;
          v164 = this->fields.appendSkillBaseList;
          if ( !v164 )
            goto LABEL_363;
          if ( v163 >= v164->max_length )
            goto LABEL_364;
          v165 = (UnityEngine_GameObject_o *)*((_QWORD *)&v164->obj.klass + v162);
          if ( !v165 )
            goto LABEL_363;
          v166 = (int32_t *)*((_QWORD *)&v290->obj.klass + v162);
          UnityEngine_GameObject__SetActive(v165, 1, 0LL);
          v167 = this->fields.appendSkillIconList;
          if ( !v167 )
            goto LABEL_363;
          if ( v163 >= v167->max_length )
            goto LABEL_364;
          if ( !v166 )
            goto LABEL_363;
          v168 = (SkillIconComponent_o *)*((_QWORD *)&v167->obj.klass + v162);
          if ( !v168 )
            goto LABEL_363;
          SkillIconComponent__Set_23612468(v168, v166[4], v166[5], v166[12], v166[13], 0LL);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_363;
          if ( v163 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_364;
          v170 = (UIIconLabel_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v162);
          if ( !v170 )
            goto LABEL_363;
          UIIconLabel__Set_40377052(v170, 48, v166[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v173 = this->fields.appendSkillIconList;
        if ( !v173 )
          goto LABEL_363;
        v174 = v162 - 3;
        ++v162;
      }
      while ( v174 < (int)v173->max_length );
    }
    appendSkillInfoUiWidget = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
    if ( !appendSkillInfoUiWidget )
      goto LABEL_363;
    v176 = UnityEngine_Component__get_gameObject(appendSkillInfoUiWidget, 0LL);
    if ( !v176 )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive(v176, 1, 0LL);
    v177 = this->fields.switchSkillUIList;
    if ( !v177 )
      goto LABEL_363;
    p_switchSkillUIList = &this->fields.switchSkillUIList;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v177,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    v154 = this->fields.appendSkillIconList;
    if ( !v154 )
      goto LABEL_363;
    v155 = 0LL;
    while ( (int)v155 < (signed int)v154->max_length )
    {
      v156 = this->fields.appendSkillBaseList;
      if ( !v156 )
        goto LABEL_363;
      if ( (unsigned int)v155 >= v156->max_length )
        goto LABEL_364;
      v157 = v156->m_Items[v155];
      if ( v157 )
      {
        UnityEngine_GameObject__SetActive(v157, 0, 0LL);
        v154 = this->fields.appendSkillIconList;
        ++v155;
        if ( v154 )
          continue;
      }
      goto LABEL_363;
    }
    v158 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
    if ( !v158 )
      goto LABEL_363;
    v159 = UnityEngine_Component__get_gameObject(v158, 0LL);
    if ( !v159 )
      goto LABEL_363;
    UnityEngine_GameObject__SetActive(v159, 0, 0LL);
    p_switchSkillUIList = &this->fields.switchSkillUIList;
  }
  v178 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)*p_switchSkillUIList;
  if ( !*p_switchSkillUIList )
    goto LABEL_363;
  if ( v178->fields._size >= 2 )
  {
    switchSkillInfo = this->fields.switchSkillInfo;
    v180 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               v178,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_363;
    SwitchUIWidgetComponent__Set(switchSkillInfo, v180, 0LL);
  }
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
  {
    servantEntity = item->fields.servantEntity;
    v183 = this->fields.svtCommandCardList;
    if ( v52 & 1 | (servantEntity == 0LL) )
    {
      if ( !v183 )
        goto LABEL_363;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
    }
    else
    {
      v185 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v184 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v295.fields.currentCryptoKey = v185;
      *(_QWORD *)&v295.fields.fakeValue = v184;
      v186 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v295, 0LL);
      if ( !v54 )
        goto LABEL_363;
      commandCardParam = v54->fields.commandCardParam;
      v188 = v186;
      CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList(v54, 0LL);
      if ( !v183 )
        goto LABEL_363;
      ServantCommandCardListComponent__Set_30472172(v183, v188, commandCardParam, CommandCodeIdList, 2, 1, 0LL);
    }
  }
  removeButton = (UnityEngine_Component_o *)this->fields.removeButton;
  if ( !removeButton )
    goto LABEL_363;
  transform = UnityEngine_Component__get_transform(removeButton, 0LL);
  if ( !transform )
    goto LABEL_363;
  *(UnityEngine_Vector3_o *)&v192 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v194 = (UnityEngine_Component_o *)this->fields.removeButton;
  if ( !v194 )
    goto LABEL_363;
  v195 = v192;
  v196 = v193;
  v197 = UnityEngine_Component__get_transform(v194, 0LL);
  if ( !v197 )
    goto LABEL_363;
  v296.fields.y = -45.0;
  v296.fields.x = v195;
  v296.fields.z = v196;
  UnityEngine_Transform__set_localPosition(v197, v296, 0LL);
  v198 = (UnityEngine_Component_o *)this->fields.removeButton;
  if ( !v198 )
    goto LABEL_363;
  v199 = UnityEngine_Component__get_gameObject(v198, 0LL);
  if ( !v199 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v199, 0, 0LL);
  acceptButton = (UnityEngine_Component_o *)this->fields.acceptButton;
  if ( !acceptButton )
    goto LABEL_363;
  v201 = UnityEngine_Component__get_gameObject(acceptButton, 0LL);
  if ( !v201 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v201, 0, 0LL);
  rejectButton = (UnityEngine_Component_o *)this->fields.rejectButton;
  if ( !rejectButton )
    goto LABEL_363;
  v203 = UnityEngine_Component__get_gameObject(rejectButton, 0LL);
  if ( !v203 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v203, 0, 0LL);
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_363;
  v205 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( !v205 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v205, 0, 0LL);
  v206 = (UnityEngine_Component_o *)this->fields.removeButton;
  if ( !v206 )
    goto LABEL_363;
  v207 = UnityEngine_Component__get_gameObject(v206, 0LL);
  if ( !v207 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v207, 0, 0LL);
  removeButton2 = (UnityEngine_Component_o *)this->fields.removeButton2;
  if ( !removeButton2 )
    goto LABEL_363;
  v209 = UnityEngine_Component__get_gameObject(removeButton2, 0LL);
  if ( !v209 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v209, 0, 0LL);
  removeMarkSpr = (UnityEngine_Component_o *)this->fields.removeMarkSpr;
  if ( !removeMarkSpr )
    goto LABEL_363;
  v211 = UnityEngine_Component__get_gameObject(removeMarkSpr, 0LL);
  if ( !v211 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v211, 0, 0LL);
  registButton = (UnityEngine_Component_o *)this->fields.registButton;
  if ( !registButton )
    goto LABEL_363;
  v213 = UnityEngine_Component__get_gameObject(registButton, 0LL);
  if ( !v213 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v213, 0, 0LL);
  offerButton = (UnityEngine_Component_o *)this->fields.offerButton;
  if ( !offerButton )
    goto LABEL_363;
  v215 = UnityEngine_Component__get_gameObject(offerButton, 0LL);
  if ( !v215 )
    goto LABEL_363;
  UnityEngine_GameObject__SetActive(v215, 0, 0LL);
  switch ( item->fields.kind )
  {
    case 0:
      v216 = (UnityEngine_Component_o *)this->fields.offerButton;
      if ( !v216 )
        goto LABEL_363;
      goto LABEL_299;
    case 1:
      v223 = (UnityEngine_Component_o *)this->fields.cancelButton;
      if ( !v223 )
        goto LABEL_363;
      v224 = UnityEngine_Component__get_gameObject(v223, 0LL);
      if ( !v224 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v224, 1, 0LL);
      cancelLabel = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v226 = LocalizationManager__Get((System_String_o *)StringLiteral_6435/*"FRIEND_BUTTON_CANCEL"*/, 0LL);
      if ( !cancelLabel )
        goto LABEL_363;
      UILabel__set_text(cancelLabel, v226, 0LL);
      break;
    case 2:
      v241 = (UnityEngine_Component_o *)this->fields.acceptButton;
      if ( !v241 )
        goto LABEL_363;
      v242 = UnityEngine_Component__get_gameObject(v241, 0LL);
      if ( !v242 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v242, 1, 0LL);
      v216 = (UnityEngine_Component_o *)this->fields.rejectButton;
      if ( !v216 )
        goto LABEL_363;
LABEL_299:
      v243 = UnityEngine_Component__get_gameObject(v216, 0LL);
      if ( !v243 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v243, 1, 0LL);
      break;
    case 3:
      v244 = (UnityEngine_Component_o *)this->fields.removeButton;
      if ( !v244 )
        goto LABEL_363;
      v245 = UnityEngine_Component__get_gameObject(v244, 0LL);
      if ( !v245 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v245, 1, 0LL);
      v246 = (UnityEngine_Component_o *)this->fields.removeMarkSpr;
      if ( !v246 )
        goto LABEL_363;
      v247 = UnityEngine_Component__get_gameObject(v246, 0LL);
      if ( !v247 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v247, 1, 0LL);
      loginDataSpr = this->fields.removeMarkSpr;
      if ( !loginDataSpr )
        goto LABEL_363;
      v222 = &StringLiteral_19269/*"icon_friend"*/;
      goto LABEL_311;
    case 7:
      v248 = (UnityEngine_Component_o *)this->fields.registButton;
      if ( !v248 )
        goto LABEL_363;
      v249 = UnityEngine_Component__get_gameObject(v248, 0LL);
      if ( !v249 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v249, 1, 0LL);
      loginDataSpr = this->fields.loginDataSpr;
      if ( !loginDataSpr )
        goto LABEL_363;
      v222 = &StringLiteral_19375/*"img_blacklist_requestdate"*/;
      goto LABEL_311;
    case 8:
      v217 = (UnityEngine_Component_o *)this->fields.removeButton2;
      if ( !v217 )
        goto LABEL_363;
      v218 = UnityEngine_Component__get_gameObject(v217, 0LL);
      if ( !v218 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v218, 1, 0LL);
      v219 = (UnityEngine_Component_o *)this->fields.registButton;
      if ( !v219 )
        goto LABEL_363;
      v220 = UnityEngine_Component__get_gameObject(v219, 0LL);
      if ( !v220 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v220, 0, 0LL);
      loginDataSpr = this->fields.loginDataSpr;
      if ( !loginDataSpr )
        goto LABEL_363;
      v222 = &StringLiteral_19374/*"img_blacklist_recorddate"*/;
      goto LABEL_311;
    case 9:
      v227 = (UnityEngine_Component_o *)this->fields.removeButton;
      if ( !v227 )
        goto LABEL_363;
      v228 = UnityEngine_Component__get_gameObject(v227, 0LL);
      if ( !v228 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v228, 1, 0LL);
      v229 = (UnityEngine_Component_o *)this->fields.removeButton;
      if ( !v229 )
        goto LABEL_363;
      v230 = UnityEngine_Component__get_transform(v229, 0LL);
      if ( !v230 )
        goto LABEL_363;
      *(UnityEngine_Vector3_o *)&v231 = UnityEngine_Transform__get_localPosition(v230, 0LL);
      v233 = (UnityEngine_Component_o *)this->fields.removeButton;
      if ( !v233 )
        goto LABEL_363;
      v234 = v231;
      v235 = v232;
      v236 = UnityEngine_Component__get_transform(v233, 0LL);
      if ( !v236 )
        goto LABEL_363;
      v297.fields.y = 0.0;
      v297.fields.x = v234;
      v297.fields.z = v235;
      UnityEngine_Transform__set_localPosition(v236, v297, 0LL);
      v237 = (UnityEngine_Component_o *)this->fields.offerButton;
      if ( !v237 )
        goto LABEL_363;
      v238 = UnityEngine_Component__get_gameObject(v237, 0LL);
      if ( !v238 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v238, 1, 0LL);
      v239 = (UnityEngine_Component_o *)this->fields.removeMarkSpr;
      if ( !v239 )
        goto LABEL_363;
      v240 = UnityEngine_Component__get_gameObject(v239, 0LL);
      if ( !v240 )
        goto LABEL_363;
      UnityEngine_GameObject__SetActive(v240, 1, 0LL);
      loginDataSpr = this->fields.removeMarkSpr;
      if ( !loginDataSpr )
        goto LABEL_363;
      v222 = &StringLiteral_19268/*"icon_follow"*/;
LABEL_311:
      UISprite__set_spriteName(loginDataSpr, (System_String_o *)*v222, 0LL);
      break;
    default:
      break;
  }
  v250 = item->fields.otherUserGameEntity;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_28870480 = Grade__GetKind_28870480(v250, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_28870480, 0LL);
  baseSpr = this->fields.baseSpr;
  v254 = SupportBgImage;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v254, 0LL);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
  {
    v257 = this->fields.playerNameLabel;
    if ( !v257 )
      goto LABEL_363;
    LODWORD(v258) = *(_QWORD *)&UILabel__get_printedSize(v257, 0LL);
    v259 = this->fields.gradeIcon;
    if ( !v259 )
      goto LABEL_363;
    v260 = v258;
    LODWORD(v261) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(v259, 0LL);
    v262 = (UnityEngine_Component_o *)this->fields.playerNameLabel;
    if ( !v262 )
      goto LABEL_363;
    v263 = v261;
    v264 = UnityEngine_Component__get_gameObject(v262, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v264, 0LL);
    v266 = (UnityEngine_Component_o *)this->fields.gradeIcon;
    if ( !v266 )
      goto LABEL_363;
    v267 = LocalPositionX;
    v268 = UnityEngine_Component__get_gameObject(v266, 0LL);
    GameObjectExtensions__SetLocalPositionX(v268, (float)(v263 * 0.5) + (float)(v260 + v267), 0LL);
    v269 = this->fields.gradeIcon;
    if ( !v269 )
      goto LABEL_363;
    UserGradeComponent__Set(v269, Kind_28870480, 0LL);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v256);
  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
  {
    v271 = (UnityEngine_Component_o *)this->fields.pushSpr;
    if ( !v271 )
      goto LABEL_365;
    v272 = UnityEngine_Component__get_gameObject(v271, 0LL);
    if ( !v272 )
      goto LABEL_365;
    UnityEngine_GameObject__SetActive(v272, 0, 0LL);
    v275 = item->fields.otherUserGameEntity;
    if ( !v275 )
      goto LABEL_365;
    v276 = v275->fields.mainSupportDeckIds;
    if ( !v276 )
      goto LABEL_365;
    if ( !v276->max_length )
    {
      sub_B17100(v275, v273, v274);
      sub_B170A0();
    }
    v277 = OtherUserGameEntity__getServantLeaderInfo(
             v275,
             item->fields.classPos,
             1,
             item->fields.displayServantType,
             v276->m_Items[1],
             0LL);
    if ( v277 )
    {
      userSvtId = v277->fields.userSvtId;
      if ( userSvtId >= 1 )
      {
        v279 = item->fields.otherUserGameEntity;
        if ( !v279 )
          goto LABEL_365;
        if ( v279->fields.pushUserSvtId == userSvtId )
        {
          v280 = (UnityEngine_Component_o *)this->fields.pushSpr;
          if ( !v280 )
            goto LABEL_365;
          v281 = UnityEngine_Component__get_gameObject(v280, 0LL);
          if ( !v281 )
            goto LABEL_365;
          UnityEngine_GameObject__SetActive(v281, 1, 0LL);
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
      v283 = (Il2CppObject **)&StringLiteral_6316/*"FFFF00"*/;
    else
      v283 = (Il2CppObject **)&StringLiteral_6317/*"FFFFFF"*/;
    v284 = *v283;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v285 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField);
    v286 = System_String__Format_43739268((System_String_o *)StringLiteral_15767/*"[{0}]+{1}[-]"*/, v284, v285, 0LL);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_365;
    UILabel__set_text(this->fields.openClassBoardNumLabel, v286, 0LL);
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
  {
    v288 = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( v288 )
    {
      v48 = UnityEngine_Component__get_gameObject(v288, 0LL);
      if ( v48 )
      {
        v49 = item->fields._OpenClassBoardNum_k__BackingField >= 0;
LABEL_361:
        UnityEngine_GameObject__SetActive(v48, v49, 0LL);
        return;
      }
    }
LABEL_365:
    sub_B170D4();
  }
}


void __fastcall FriendOperationItemListViewItemDraw__UpdateLockUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *lockMarkObj; // x21
  UnityEngine_GameObject_o *v6; // x0
  int32_t kind; // w8
  struct UICommonButton_o *removeButton; // x0

  if ( (byte_40FD8EF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FD8EF = 1;
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
      v6 = this->fields.lockMarkObj;
      if ( !v6 )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(v6, item->fields.isSwapLock != item->fields.isLock, 0LL);
    }
    kind = item->fields.kind;
    if ( kind == 9 || kind == 3 )
    {
      removeButton = this->fields.removeButton;
      if ( removeButton )
      {
        ((void (*)(void))removeButton->klass->vtable._14_SetState.method)();
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall FriendOperationItemListViewItemDraw__dispMessageUI(
        FriendOperationItemListViewItemDraw_o *this,
        bool isHide,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  int v9; // s0
  UnityEngine_GameObject_o *messageDispButton; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *gradeIcon; // x0

  if ( !isHide )
  {
    messageDispButton = this->fields.messageDispButton;
    if ( messageDispButton )
    {
      UnityEngine_GameObject__SetActive(messageDispButton, 1, 0LL);
      messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( messageLabel )
      {
        gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -1.0, 0LL);
          GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, -1.0, 0LL);
          gradeIcon = (UnityEngine_Component_o *)this->fields.gradeIcon;
          if ( gradeIcon )
          {
            v8 = UnityEngine_Component__get_gameObject(gradeIcon, 0LL);
            v9 = 1112801280;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
  v4 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v4 )
    goto LABEL_13;
  v5 = UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !v5 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(v5, 0, 0LL);
  v6 = this->fields.messageDispButton;
  if ( !v6 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(v6, 0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -11.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, 10.0, 0LL);
  v7 = (UnityEngine_Component_o *)this->fields.gradeIcon;
  if ( !v7 )
    goto LABEL_13;
  v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
  v9 = 1113849856;
LABEL_12:
  GameObjectExtensions__SetLocalPositionY(v8, *(float *)&v9, 0LL);
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
  System_String_o *message; // x1
  UnityEngine_GameObject_o *messageDispButton; // x0
  UISprite_o *Component_srcLineSprite; // x0
  System_String_o **v32; // x8
  UnityEngine_Color_o v33; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_40FD8EE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_16936/*"btn_message_on"*/, v12);
    sub_B16FFC(&StringLiteral_6443/*"FRIEND_HIDE_MESSAGE"*/, v13);
    sub_B16FFC(&StringLiteral_16935/*"btn_message_off"*/, v14);
    byte_40FD8EE = 1;
  }
  if ( !item )
    goto LABEL_25;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  v17 = isDisp ? 1.0 : 0.73725;
  v33 = (UnityEngine_Color_o)0LL;
  v18 = v17;
  v19 = v17;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v33);
  if ( !messageLabel )
    goto LABEL_25;
  UIWidget__set_color(messageLabel, v33, 0LL);
  v24 = this->fields.messageLabel;
  if ( isDisp )
  {
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v33 = (UnityEngine_Color_o)0LL;
  }
  else
  {
    v25 = 1056997505;
    v33 = (UnityEngine_Color_o)0LL;
    v26 = 1056997505;
    v27 = 1056997505;
  }
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v20 - 3), v21, v22, v23, (const MethodInfo *)&v33);
  if ( !v24 )
    goto LABEL_25;
  UILabel__set_effectColor(v24, v33, 0LL);
  v28 = this->fields.messageLabel;
  if ( !isDisp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    message = LocalizationManager__Get((System_String_o *)StringLiteral_6443/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    if ( v28 )
      goto LABEL_20;
LABEL_25:
    sub_B170D4();
  }
  if ( !otherUserGameEntity )
    goto LABEL_25;
  message = otherUserGameEntity->fields.message;
  if ( !v28 )
    goto LABEL_25;
LABEL_20:
  UILabel__set_text(v28, message, 0LL);
  messageDispButton = this->fields.messageDispButton;
  if ( !messageDispButton )
    goto LABEL_25;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            messageDispButton,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  v32 = (System_String_o **)&StringLiteral_16935/*"btn_message_off"*/;
  if ( !isDisp )
    v32 = (System_String_o **)&StringLiteral_16936/*"btn_message_on"*/;
  UISprite__set_spriteName(Component_srcLineSprite, *v32, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__setupMessageUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  const MethodInfo *v6; // x3
  bool v7; // w2
  FriendOperationItemListViewItemDraw_o *v8; // x0
  FriendOperationItemListViewItem_o *v9; // x1

  if ( (byte_40FD8F0 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, item);
    byte_40FD8F0 = 1;
  }
  if ( !item )
LABEL_16:
    sub_B170D4();
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
        FriendOperationItemListViewItemDraw__dispMessageUI(this, 1, method);
      }
      else
      {
        FriendOperationItemListViewItemDraw__dispMessageUI(this, 0, method);
        if ( item->fields.swapMessageDisp )
        {
          v7 = 1;
          v8 = this;
          v9 = item;
        }
        else
        {
          v8 = this;
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