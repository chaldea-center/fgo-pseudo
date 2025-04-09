void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0

  if ( (byte_49B5E15 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B4CF90(&SkillIconComponent___TypeInfo, v4);
    sub_1B4CF90(&UIIconLabel___TypeInfo, v5);
    byte_49B5E15 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1B4D038(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1B4CF34(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1B4D038(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B4CF34(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B4D038(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B4CF34(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1B4D038(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B4CF34(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1B4D038(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B4CF34(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B4D038(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B4CF34(&this->fields.appendSkillLevelIconLabelList);
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
  System_Collections_Generic_List_object__o *v10; // x20
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v12; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v14; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v16; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v18; // x19

  if ( (byte_49B5E0F & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_19877/*"icon_skill_mini"*/, v6);
    sub_1B4CF90(&StringLiteral_20025/*"img_friend_skill"*/, v7);
    sub_1B4CF90(&StringLiteral_19775/*"icon_append_mini"*/, v8);
    sub_1B4CF90(&StringLiteral_20024/*"img_friend_appendskill"*/, v9);
    byte_49B5E0F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1B4CF34(&this->fields.switchSkillUIList);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v12 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v12, (System_String_o *)StringLiteral_19877/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_20025/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v16 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_19775/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_20024/*"img_friend_appendskill"*/, 0LL);
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
  int max_length; // w24
  il2cpp_array_size_t v12; // w25
  UnityEngine_Behaviour_o *v13; // x22
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *pushSpr; // x21
  struct UILabel_o *loginDataLabel; // x8
  struct UISprite_o *v19; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9

  v6 = this;
  if ( (byte_49B5E14 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49B5E14 = 1;
  }
  if ( !item )
  {
    rangeSprite = (UnityEngine_Object_o *)v6->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rangeSprite;
      if ( !this )
        goto LABEL_23;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
      if ( !this )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)v6->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.addRangeSprite;
      if ( !this )
        goto LABEL_23;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
      if ( !this )
        goto LABEL_23;
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
          goto LABEL_23;
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
        if ( max_length == ++v12 )
          goto LABEL_24;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_23;
      }
LABEL_95:
      sub_1B4D1F4(this, item);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1B4D1EC(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_23;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !this )
        goto LABEL_23;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_23;
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
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_23;
          goto LABEL_78;
        case 1:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
          if ( !this )
            goto LABEL_23;
          goto LABEL_78;
        case 2:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
          if ( !this )
            goto LABEL_23;
          ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          goto LABEL_78;
        case 3:
        case 8:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          break;
        case 7:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
          if ( !this )
            goto LABEL_23;
          goto LABEL_78;
        case 9:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_23;
          ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          break;
        default:
          goto LABEL_79;
      }
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
      if ( !this )
        goto LABEL_23;
LABEL_78:
      ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
LABEL_79:
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v16);
      pushSpr = (UnityEngine_Object_o *)v6->fields.pushSpr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
      {
        this = (FriendOperationItemListViewItemDraw_o *)v6->fields.pushSpr;
        if ( !this )
          goto LABEL_23;
        this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
        if ( !this )
          goto LABEL_23;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FriendOperationItemListViewItemDraw_o *)item->fields.otherUserGameEntity;
        if ( !this )
          goto LABEL_23;
        loginDataLabel = this->fields.loginDataLabel;
        if ( !loginDataLabel )
          goto LABEL_23;
        if ( !LODWORD(loginDataLabel->fields.m_CancellationTokenSource) )
          goto LABEL_95;
        this = (FriendOperationItemListViewItemDraw_o *)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)this,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          (int32_t)loginDataLabel->fields.leftAnchor,
                                                          0LL);
        if ( this )
        {
          v19 = this->fields.addRangeSprite;
          if ( (__int64)v19 >= 1 )
          {
            otherUserGameEntity = item->fields.otherUserGameEntity;
            if ( !otherUserGameEntity )
              goto LABEL_23;
            if ( (struct UISprite_o *)otherUserGameEntity->fields.pushUserSvtId == v19 )
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
              goto LABEL_23;
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
  __int64 v35; // x1
  __int64 v36; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  bool v38; // w0
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *v41; // x22
  int32_t kind; // w8
  bool v43; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  __int64 v45; // x8
  char v46; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v48; // x21
  const MethodInfo *v49; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v53; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  long double v60; // q0
  int v61; // w22
  __int64 v62; // x0
  __int64 v63; // x0
  ServantLimitAddMaster_o *v64; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  Il2CppObject *Master_object; // x0
  __int64 v67; // x26
  __int64 v68; // x27
  ServantLimitImageMaster_o *v69; // x25
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *OverwriteTDName; // x0
  System_String_o **v72; // x9
  bool v73; // cc
  Il2CppObject *v74; // x22
  System_String_o *v75; // x23
  System_String_o *v76; // x0
  System_String_o *v77; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v80; // x22
  UnityEngine_Object_o *v81; // x22
  int32_t v82; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v84; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v86; // x23
  int64_t createdAt; // x0
  System_String_o *v88; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v90; // x0
  const MethodInfo *v91; // x2
  struct SkillIconComponent_array *v92; // x8
  __int64 v93; // x8
  int v94; // w9
  unsigned __int64 v95; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v97; // x14
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v99; // x22
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  const MethodInfo *v101; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v103; // x23
  __int64 v104; // x24
  __int64 v105; // x22
  __int64 v106; // x23
  unsigned __int64 v107; // x24
  struct UnityEngine_GameObject_array *v108; // x9
  int32_t *v109; // x25
  struct SkillIconComponent_array *v110; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v112; // x8
  struct SkillIconComponent_array *v113; // x8
  __int64 v114; // x9
  __int64 v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v120; // x8
  int v121; // w9
  signed __int64 v122; // x10
  unsigned __int64 v123; // x14
  SkillInfo_o *v124; // x14
  struct SkillIconComponent_array *v125; // x8
  __int64 v126; // x22
  struct UnityEngine_GameObject_array *v127; // x8
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
  __int64 v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  __int64 v141; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v145; // x22
  __int64 v146; // x23
  __int64 v147; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v149; // w23
  float v150; // s0
  float v151; // s2
  float v152; // s8
  float v153; // s9
  UISprite_o *offerBackSprite; // x21
  UILabel_o *cancelLabel; // x21
  __int64 *v156; // x8
  float v157; // s0
  float v158; // s2
  float v159; // s8
  float v160; // s9
  OtherUserGameEntity_o *v161; // x21
  int32_t Kind_38224752; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v165; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v167; // x2
  float v168; // s0
  float v169; // s8
  float v170; // s0
  float v171; // s9
  UnityEngine_GameObject_o *v172; // x0
  float LocalPositionX; // s0
  float v174; // s10
  UnityEngine_GameObject_o *v175; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v177; // x8
  __int64 v178; // x8
  struct OtherUserGameEntity_o *v179; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v181; // x2
  __int64 v182; // x3
  __int64 v183; // x4
  Il2CppObject **v184; // x9
  Il2CppObject *v185; // x21
  Il2CppObject *v186; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UISprite_o *classBoardBackSprite; // x20
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v190; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v197; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B5E10 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, item);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Grade_TypeInfo, v11);
    sub_1B4CF90(&int_TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v15);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v16);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v17);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B4CF90(&OptionManager_TypeInfo, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B4CF90(&StringLiteral_19971/*"img_blacklist_requestdate"*/, v22);
    sub_1B4CF90(&StringLiteral_17166/*"btn_bg_27_2"*/, v23);
    sub_1B4CF90(&StringLiteral_6294/*"FFFFFF"*/, v24);
    sub_1B4CF90(&StringLiteral_13097/*"TIME_BEFORE_TITLE_COLOR"*/, v25);
    sub_1B4CF90(&StringLiteral_17167/*"btn_bg_29_2"*/, v26);
    sub_1B4CF90(&StringLiteral_9156/*"NP_MAX_COLOR_NAME"*/, v27);
    sub_1B4CF90(&StringLiteral_17165/*"btn_bg_26_2"*/, v28);
    sub_1B4CF90(&StringLiteral_19970/*"img_blacklist_recorddate"*/, v29);
    sub_1B4CF90(&StringLiteral_6293/*"FFFF00"*/, v30);
    sub_1B4CF90(&StringLiteral_9126/*"NO_ENTRY_NAME"*/, v31);
    sub_1B4CF90(&StringLiteral_9150/*"NP_COLOR_NAME"*/, v32);
    sub_1B4CF90(&StringLiteral_15722/*"[{0}]+{1}[-]"*/, v33);
    sub_1B4CF90(&StringLiteral_6415/*"FRIEND_BUTTON_CANCEL"*/, v34);
    sub_1B4CF90(&StringLiteral_19851/*"icon_friend"*/, v35);
    sub_1B4CF90(&StringLiteral_19850/*"icon_follow"*/, v36);
    byte_49B5E10 = 1;
  }
  tdInfo = 0LL;
  v190 = 0LL;
  skillInfoList = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v38 = UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
  if ( !item )
  {
    if ( v38 )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    return;
  }
  if ( v38 )
  {
    gameObject = (__int64)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
  }
  v41 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isTerminationSpace, 0LL);
  }
  if ( !mode )
    return;
  kind = item->fields.kind;
  v43 = kind == 9 || kind == 3;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_183;
  v45 = *(_QWORD *)(gameObject + 96);
  if ( !v45 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v45 + 24) )
    goto LABEL_346;
  v46 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v45 + 32),
                        0LL);
  v48 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_36;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_36;
    v104 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v103 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v194.fields.currentCryptoKey = v104;
    *(_QWORD *)&v194.fields.fakeValue = v103;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v194, 0LL) )
    {
LABEL_36:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v48, 0LL);
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v48, 0LL);
      v46 = 0;
    }
    else
    {
      v48 = 0LL;
      v46 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_183;
  ServantFaceIconComponent__Set_38764344(
    (ServantFaceIconComponent_o *)gameObject,
    v48,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v43,
    0,
    0LL);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v49);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_49B5E0A & 1) == 0 )
  {
    gameObject = sub_1B4CF90(&StringLiteral_18745/*"error"*/, skillInfoUiWidget);
    byte_49B5E0A = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_183;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18745/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0LL);
  v53 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v53 )
  {
    userLv = v53->fields.userLv;
    if ( !gameObject )
      goto LABEL_183;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_183;
  }
  UIIconLabel__Set_38776192((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v56);
  if ( !servantNameLabel )
    goto LABEL_183;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v57);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v58);
  if ( item->fields.servantEntity )
  {
    v61 = TreasureDeviceLevelIcon;
    v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
      v62 = sub_1B9D620(v60);
    v63 = *(_QWORD *)(*(_QWORD *)(v62 + 192) + 16LL);
    if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
      v63 = sub_1B9D620(v60);
    gameObject = **(_QWORD **)(v63 + 184);
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v48 )
      goto LABEL_183;
    v64 = (ServantLimitAddMaster_o *)gameObject;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v48, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v48, 0LL) )
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !gameObject )
        goto LABEL_183;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                     v48->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v68 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
    v67 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
    v69 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v193.fields.currentCryptoKey = v68;
    *(_QWORD *)&v193.fields.fakeValue = v67;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v193, 0LL);
    if ( !v69 )
      goto LABEL_183;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v69,
                                   gameObject,
                                   FriendNpNameDispLimitCount,
                                   0LL);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v48->fields.svtId, 0LL);
    if ( !tdInfo || !v64 )
      goto LABEL_183;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v64,
                        gameObject,
                        ServantLimitCountSealAfter,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0LL);
    v72 = (System_String_o **)&StringLiteral_9156/*"NP_MAX_COLOR_NAME"*/;
    v73 = v61 <= 1;
    v74 = (Il2CppObject *)OverwriteTDName;
    if ( v73 )
      v72 = (System_String_o **)&StringLiteral_9150/*"NP_COLOR_NAME"*/;
    v75 = *v72;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v76 = LocalizationManager__Get(v75, 0LL);
    gameObject = (__int64)System_String__Format(v76, v74, 0LL);
    if ( !tdInfo )
      goto LABEL_183;
    v77 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
    if ( !svtNpTitleLabel )
      goto LABEL_183;
    UIRangeLabel__Set(svtNpTitleLabel, v77, (System_String_o *)gameObject, 0, 0, 0LL);
    svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_183;
      ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)gameObject, tdInfo, 0LL);
    }
  }
  else
  {
    v80 = this->fields.svtNpTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9126/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v80 )
      goto LABEL_183;
    UIRangeLabel__Set(v80, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
    v81 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_183;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
    }
  }
  v82 = item->fields.kind;
  if ( v82 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v88 = LocalizationManager__Get((System_String_o *)StringLiteral_13097/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v86 = v88;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_105;
    }
  }
  else if ( v82 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_13097/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v86 = v84;
    if ( userBlacklistEntity )
    {
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_105;
    }
  }
  else
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_13097/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
      goto LABEL_105;
    }
  }
  createdAt = 0LL;
LABEL_105:
  v90 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
  gameObject = (__int64)System_String__Format(v86, v90, 0LL);
  if ( !loginDataLabel )
    goto LABEL_183;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
  if ( !item->fields.servantEntity )
  {
    skillIconList = this->fields.skillIconList;
    if ( skillIconList )
    {
      v99 = 0LL;
      while ( (int)v99 < (signed int)skillIconList->max_length )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_183;
        if ( (unsigned int)v99 >= skillBaseList->max_length )
          goto LABEL_346;
        gameObject = (__int64)skillBaseList->m_Items[v99];
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          skillIconList = this->fields.skillIconList;
          ++v99;
          if ( skillIconList )
            continue;
        }
        goto LABEL_183;
      }
      gameObject = (__int64)this->fields.skillInfoUiWidget;
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          goto LABEL_164;
        }
      }
    }
LABEL_183:
    sub_1B4D1EC(gameObject, skillInfoUiWidget);
  }
  gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v91);
  v92 = this->fields.skillIconList;
  if ( !v92 )
    goto LABEL_183;
  v93 = *(_QWORD *)&v92->max_length;
  if ( v93 << 32 >= 1 )
  {
    v94 = 0;
    v95 = 0LL;
    while ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( (__int64)v95 < (int)max_length )
      {
        if ( v95 >= max_length )
          goto LABEL_346;
        v97 = skillInfoList->m_Items[v95];
        if ( v97 && v97->fields.id >= 1 )
          v94 = v95 + 1;
      }
      if ( (__int64)++v95 >= (int)v93 )
        goto LABEL_135;
    }
    goto LABEL_183;
  }
  v94 = 0;
LABEL_135:
  if ( (int)v93 >= 1 )
  {
    v105 = v94;
    v106 = 4LL;
    do
    {
      v107 = v106 - 4;
      if ( v106 - 4 >= v105 )
      {
        v112 = this->fields.skillBaseList;
        if ( !v112 )
          goto LABEL_183;
        if ( v107 >= v112->max_length )
          goto LABEL_346;
        gameObject = *((_QWORD *)&v112->obj.klass + v106);
        if ( !gameObject )
          goto LABEL_183;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      else
      {
        if ( !skillInfoList )
          goto LABEL_183;
        if ( v107 >= skillInfoList->max_length )
          goto LABEL_346;
        v108 = this->fields.skillBaseList;
        if ( !v108 )
          goto LABEL_183;
        if ( v107 >= v108->max_length )
          goto LABEL_346;
        gameObject = *((_QWORD *)&v108->obj.klass + v106);
        if ( !gameObject )
          goto LABEL_183;
        v109 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v106);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v110 = this->fields.skillIconList;
        if ( !v110 )
          goto LABEL_183;
        if ( v107 >= v110->max_length )
          goto LABEL_346;
        if ( !v109 )
          goto LABEL_183;
        gameObject = *((_QWORD *)&v110->obj.klass + v106);
        if ( !gameObject )
          goto LABEL_183;
        SkillIconComponent__Set_38775388((SkillIconComponent_o *)gameObject, v109[4], v109[5], v109[12], v109[13], 0LL);
        skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
        if ( !skillLevelIconLabelList )
          goto LABEL_183;
        if ( v107 >= skillLevelIconLabelList->max_length )
          goto LABEL_346;
        gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v106);
        if ( !gameObject )
          goto LABEL_183;
        UIIconLabel__Set_38776192((UIIconLabel_o *)gameObject, 48, v109[5], 0, 0, 0LL, 0, 0, 0, 0LL);
      }
      v113 = this->fields.skillIconList;
      if ( !v113 )
        goto LABEL_183;
      v114 = v106 - 3;
      ++v106;
    }
    while ( v114 < (int)v113->max_length );
  }
  gameObject = (__int64)this->fields.skillInfoUiWidget;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_183;
  skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
  v115 = *(_QWORD *)(gameObject + 16);
  v116 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(gameObject + 28);
  if ( !v115 )
    goto LABEL_183;
  v117 = *(int *)(gameObject + 24);
  if ( (unsigned int)v117 >= *(_DWORD *)(v115 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      skillInfoUiWidget,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
  }
  else
  {
    v118 = v115 + 8 * v117;
    *(_DWORD *)(gameObject + 24) = v117 + 1;
    *(_QWORD *)(v118 + 32) = skillInfoUiWidget;
    gameObject = sub_1B4CF34(v118 + 32);
  }
LABEL_164:
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v190, v101);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_183;
    v120 = *(_QWORD *)&appendSkillIconList->max_length;
    if ( v120 << 32 < 1 )
    {
      v121 = 0;
    }
    else
    {
      v121 = 0;
      v122 = 0LL;
      do
      {
        if ( v190 )
        {
          v123 = v190->max_length;
          if ( v122 < (int)v123 )
          {
            if ( v122 >= v123 )
              goto LABEL_346;
            v124 = v190->m_Items[v122];
            if ( v124 && v124->fields.id >= 1 )
              v121 = v122 + 1;
          }
        }
        ++v122;
      }
      while ( v122 < (int)v120 );
    }
    if ( (int)v120 >= 1 )
    {
      v128 = v121;
      v129 = 4LL;
      do
      {
        v130 = v129 - 4;
        if ( v129 - 4 >= v128 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_183;
          if ( v130 >= appendSkillBaseList->max_length )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_183;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !v190 )
            goto LABEL_183;
          if ( v130 >= v190->max_length )
            goto LABEL_346;
          v131 = this->fields.appendSkillBaseList;
          if ( !v131 )
            goto LABEL_183;
          if ( v130 >= v131->max_length )
            goto LABEL_346;
          gameObject = *((_QWORD *)&v131->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_183;
          v132 = (int32_t *)*((_QWORD *)&v190->obj.klass + v129);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v133 = this->fields.appendSkillIconList;
          if ( !v133 )
            goto LABEL_183;
          if ( v130 >= v133->max_length )
            goto LABEL_346;
          if ( !v132 )
            goto LABEL_183;
          gameObject = *((_QWORD *)&v133->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_183;
          SkillIconComponent__Set_38775388(
            (SkillIconComponent_o *)gameObject,
            v132[4],
            v132[5],
            v132[12],
            v132[13],
            0LL);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_183;
          if ( v130 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v129);
          if ( !gameObject )
            goto LABEL_183;
          UIIconLabel__Set_38776192((UIIconLabel_o *)gameObject, 48, v132[5], 0, 0, 0LL, 0, 0, 0, 0LL);
        }
        v136 = this->fields.appendSkillIconList;
        if ( !v136 )
          goto LABEL_183;
        v137 = v129 - 3;
        ++v129;
      }
      while ( v137 < (int)v136->max_length );
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( !gameObject )
      goto LABEL_183;
    skillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
    v138 = *(_QWORD *)(gameObject + 16);
    v139 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v138 )
      goto LABEL_183;
    v140 = *(int *)(gameObject + 24);
    if ( (unsigned int)v140 >= *(_DWORD *)(v138 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        skillInfoUiWidget,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
    }
    else
    {
      v141 = v138 + 8 * v140;
      *(_DWORD *)(gameObject + 24) = v140 + 1;
      *(_QWORD *)(v141 + 32) = skillInfoUiWidget;
      sub_1B4CF34(v141 + 32);
    }
  }
  else
  {
    v125 = this->fields.appendSkillIconList;
    if ( !v125 )
      goto LABEL_183;
    v126 = 0LL;
    while ( (int)v126 < (signed int)v125->max_length )
    {
      v127 = this->fields.appendSkillBaseList;
      if ( !v127 )
        goto LABEL_183;
      if ( (unsigned int)v126 >= v127->max_length )
        goto LABEL_346;
      gameObject = (__int64)v127->m_Items[v126];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v125 = this->fields.appendSkillIconList;
        ++v126;
        if ( v125 )
          continue;
      }
      goto LABEL_183;
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_183;
  if ( *(int *)(gameObject + 24) >= 2 )
  {
    switchSkillInfo = this->fields.switchSkillInfo;
    gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)gameObject,
                            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_183;
    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0LL);
  }
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    servantEntity = item->fields.servantEntity;
    v145 = this->fields.svtCommandCardList;
    if ( v46 & 1 | (servantEntity == 0LL) )
    {
      if ( !v145 )
        goto LABEL_183;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
    }
    else
    {
      v147 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v146 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v195.fields.currentCryptoKey = v147;
      *(_QWORD *)&v195.fields.fakeValue = v146;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v195, 0LL);
      if ( !v48 )
        goto LABEL_183;
      commandCardParam = v48->fields.commandCardParam;
      v149 = gameObject;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v48, 0LL);
      if ( !v145 )
        goto LABEL_183;
      ServantCommandCardListComponent__Set_38753232(
        v145,
        v149,
        commandCardParam,
        (System_Int32_array *)gameObject,
        2,
        1,
        0LL);
    }
  }
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  *(UnityEngine_Vector3_o *)&v150 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  v152 = v150;
  v153 = v151;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  v196.fields.y = -45.0;
  v196.fields.x = v152;
  v196.fields.z = v153;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v196, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.acceptButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.rejectButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeButton2;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.removeMarkSpr;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.registButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.offerButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  offerBackSprite = this->fields.offerBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_17165/*"btn_bg_26_2"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite, (System_String_o *)StringLiteral_17166/*"btn_bg_27_2"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.registBackSprite, (System_String_o *)StringLiteral_17165/*"btn_bg_26_2"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite2, (System_String_o *)StringLiteral_17166/*"btn_bg_27_2"*/, 0LL);
  switch ( item->fields.kind )
  {
    case 0:
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_183;
      goto LABEL_268;
    case 1:
      gameObject = (__int64)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      cancelLabel = this->fields.cancelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6415/*"FRIEND_BUTTON_CANCEL"*/, 0LL);
      if ( !cancelLabel )
        goto LABEL_183;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      break;
    case 2:
      gameObject = (__int64)this->fields.acceptButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.rejectButton;
      if ( !gameObject )
        goto LABEL_183;
LABEL_268:
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      break;
    case 3:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      v156 = &StringLiteral_19851/*"icon_friend"*/;
      goto LABEL_298;
    case 7:
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_183;
      v156 = &StringLiteral_19971/*"img_blacklist_requestdate"*/;
      goto LABEL_298;
    case 8:
      gameObject = (__int64)this->fields.removeButton2;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_183;
      v156 = &StringLiteral_19970/*"img_blacklist_recorddate"*/;
      goto LABEL_298;
    case 9:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      *(UnityEngine_Vector3_o *)&v157 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)gameObject,
                                          0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      v159 = v157;
      v160 = v158;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      v197.fields.y = 0.0;
      v197.fields.x = v159;
      v197.fields.z = v160;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v197, 0LL);
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      v156 = &StringLiteral_19850/*"icon_follow"*/;
LABEL_298:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v156, 0LL);
      break;
    default:
      break;
  }
  v161 = item->fields.otherUserGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_38224752 = Grade__GetKind_38224752(v161, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_38224752, 0LL);
  baseSpr = this->fields.baseSpr;
  v165 = SupportBgImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v165, 0LL);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    LODWORD(v168) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v169 = v168;
    LODWORD(v170) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    v171 = v170;
    v172 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v172, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v174 = LocalPositionX;
    v175 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionX(v175, (float)(v171 * 0.5) + (float)(v169 + v174), 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_38224752, 0LL);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v167);
  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
    goto LABEL_327;
  gameObject = (__int64)this->fields.pushSpr;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_183;
  v177 = *(_QWORD *)(gameObject + 96);
  if ( !v177 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v177 + 24) )
LABEL_346:
    sub_1B4D1F4(gameObject, skillInfoUiWidget);
  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                          (OtherUserGameEntity_o *)gameObject,
                          item->fields.classPos,
                          1,
                          item->fields.displayServantType,
                          *(_DWORD *)(v177 + 32),
                          0LL);
  if ( gameObject )
  {
    v178 = *(_QWORD *)(gameObject + 40);
    if ( v178 >= 1 )
    {
      v179 = item->fields.otherUserGameEntity;
      if ( !v179 )
        goto LABEL_183;
      if ( v179->fields.pushUserSvtId == v178 )
      {
        gameObject = (__int64)this->fields.pushSpr;
        if ( !gameObject )
          goto LABEL_183;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_183;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
    }
  }
LABEL_327:
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL)
    && (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) == 0 )
  {
    if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
      v184 = (Il2CppObject **)&StringLiteral_6293/*"FFFF00"*/;
    else
      v184 = (Il2CppObject **)&StringLiteral_6294/*"FFFFFF"*/;
    v185 = *v184;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v186 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField, v181, v182, v183);
    gameObject = (__int64)System_String__Format_61134760((System_String_o *)StringLiteral_15722/*"[{0}]+{1}[-]"*/, v185, v186, 0LL);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_183;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0LL);
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.classBoardOpenButton;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._OpenClassBoardNum_k__BackingField >= 0,
      0LL);
    classBoardBackSprite = this->fields.classBoardBackSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17167/*"btn_bg_29_2"*/, 0LL);
    gameObject = (__int64)this->fields.classBoardBackSprite;
    if ( !gameObject )
      goto LABEL_183;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
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
  bool isLock; // w1
  int32_t kind; // w8

  if ( (byte_49B5E12 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, item);
    byte_49B5E12 = 1;
  }
  if ( item )
  {
    lockMarkObj = (UnityEngine_Object_o *)this->fields.lockMarkObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockMarkObj, 0LL, 0LL) )
    {
      removeButton = this->fields.lockMarkObj;
      if ( !removeButton )
        goto LABEL_17;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive(removeButton, isLock, 0LL);
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
LABEL_17:
      sub_1B4D1EC(removeButton, v6);
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
  int v5; // w8
  float v6; // s8
  UnityEngine_GameObject_o *gameObject; // x0

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
            v5 = 1112801280;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_1B4D1EC(messageDispButton, isHide);
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
  v5 = 1113849856;
LABEL_12:
  v6 = *(float *)&v5;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewItemDraw__setMessageButtonUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isDisp,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *v5; // x21
  FriendOperationItemListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  float v11; // s0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  float v13; // s3
  float v14; // s1
  float v15; // s2
  float v16; // s0
  float v17; // s3
  float v18; // s1
  float v19; // s2
  UILabel_o *messageLabel; // x21
  System_String_o **v21; // x8

  v5 = item;
  v6 = this;
  if ( (byte_49B5E11 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_17207/*"btn_message_on"*/, v8);
    sub_1B4CF90(&StringLiteral_6423/*"FRIEND_HIDE_MESSAGE"*/, v9);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_17206/*"btn_message_off"*/, v10);
    byte_49B5E11 = 1;
  }
  if ( !v5 )
    goto LABEL_22;
  v11 = 0.73725;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v11 = 1.0;
  if ( !this )
    goto LABEL_22;
  otherUserGameEntity = v5->fields.otherUserGameEntity;
  v13 = 1.0;
  v14 = v11;
  v15 = v11;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v11, 0LL);
  v16 = 0.50196;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v16 = 0.0;
  if ( !this )
    goto LABEL_22;
  v17 = 1.0;
  v18 = v16;
  v19 = v16;
  UILabel__set_effectColor((UILabel_o *)this, *(UnityEngine_Color_o *)&v16, 0LL);
  messageLabel = v6->fields.messageLabel;
  if ( isDisp )
  {
    if ( !otherUserGameEntity )
      goto LABEL_22;
    item = (FriendOperationItemListViewItem_o *)otherUserGameEntity->fields.message;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6423/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1B4D1EC(this, item);
  }
  v21 = (System_String_o **)&StringLiteral_17206/*"btn_message_off"*/;
  if ( !isDisp )
    v21 = (System_String_o **)&StringLiteral_17207/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v21, 0LL);
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
  if ( (byte_49B5E13 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B4CF90(&OptionManager_TypeInfo, item);
    byte_49B5E13 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1B4D1EC(this, item);
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
        goto LABEL_15;
      if ( System_String__IsNullOrEmpty(otherUserGameEntity->fields.message, 0LL) )
        goto LABEL_5;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
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