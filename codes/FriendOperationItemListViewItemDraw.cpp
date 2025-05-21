void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0

  if ( (byte_4B3F6C6 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BDB878(&SkillIconComponent___TypeInfo, v4);
    sub_1BDB878(&UIIconLabel___TypeInfo, v5);
    byte_4B3F6C6 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1BDB920(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1BDB81C(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1BDB920(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BDB81C(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BDB920(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BDB81C(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1BDB920(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BDB81C(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1BDB920(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BDB81C(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BDB920(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BDB81C(&this->fields.appendSkillLevelIconLabelList);
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

  if ( (byte_4B3F6C0 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_20248/*"icon_skill_mini"*/, v6);
    sub_1BDB878(&StringLiteral_20423/*"img_friend_skill"*/, v7);
    sub_1BDB878(&StringLiteral_20144/*"icon_append_mini"*/, v8);
    sub_1BDB878(&StringLiteral_20422/*"img_friend_appendskill"*/, v9);
    byte_4B3F6C0 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1BDB81C(&this->fields.switchSkillUIList);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v12 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v12, (System_String_o *)StringLiteral_20248/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_20423/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v16 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20144/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_20422/*"img_friend_appendskill"*/, 0LL);
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
  if ( (byte_4B3F6C5 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B3F6C5 = 1;
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
      sub_1BDBADC(this, item, isInput);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1BDBAD4(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                          item->fields._FollowerGrandGraphId_k__BackingField,
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
  const MethodInfo *v42; // x2
  int32_t kind; // w8
  bool v44; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  __int64 v46; // x8
  char v47; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v49; // x21
  const MethodInfo *v50; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v54; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  long double v61; // q0
  int v62; // w22
  __int64 v63; // x0
  __int64 v64; // x0
  ServantLimitAddMaster_o *v65; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  Il2CppObject *Master_object; // x0
  __int64 v68; // x26
  __int64 v69; // x27
  ServantLimitImageMaster_o *v70; // x25
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *OverwriteTDName; // x0
  System_String_o **v73; // x9
  bool v74; // cc
  Il2CppObject *v75; // x22
  System_String_o *v76; // x23
  System_String_o *v77; // x0
  System_String_o *v78; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v81; // x22
  UnityEngine_Object_o *v82; // x22
  int32_t v83; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v85; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v87; // x23
  int64_t createdAt; // x0
  System_String_o *v89; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v91; // x0
  struct SkillIconComponent_array *v92; // x8
  __int64 v93; // x8
  int v94; // w9
  unsigned __int64 v95; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v97; // x14
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v99; // x22
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v102; // x23
  __int64 v103; // x24
  __int64 v104; // x22
  __int64 v105; // x23
  unsigned __int64 v106; // x24
  struct UnityEngine_GameObject_array *v107; // x9
  int32_t *v108; // x25
  struct SkillIconComponent_array *v109; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v111; // x8
  struct SkillIconComponent_array *v112; // x8
  __int64 v113; // x9
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v119; // x8
  int v120; // w9
  signed __int64 v121; // x10
  unsigned __int64 v122; // x14
  SkillInfo_o *v123; // x14
  struct SkillIconComponent_array *v124; // x8
  __int64 v125; // x22
  struct UnityEngine_GameObject_array *v126; // x8
  __int64 v127; // x22
  __int64 v128; // x23
  unsigned __int64 v129; // x24
  struct UnityEngine_GameObject_array *v130; // x9
  int32_t *v131; // x25
  struct SkillIconComponent_array *v132; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v135; // x8
  __int64 v136; // x9
  __int64 v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  __int64 v140; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v144; // x22
  __int64 v145; // x23
  __int64 v146; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v148; // w23
  float v149; // s0
  float v150; // s2
  float v151; // s8
  float v152; // s9
  UISprite_o *offerBackSprite; // x21
  UILabel_o *cancelLabel; // x21
  __int64 *v155; // x8
  float v156; // s0
  float v157; // s2
  float v158; // s8
  float v159; // s9
  OtherUserGameEntity_o *v160; // x21
  int32_t Kind_39449696; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v164; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v166; // x2
  float v167; // s0
  float v168; // s8
  float v169; // s0
  float v170; // s9
  UnityEngine_GameObject_o *v171; // x0
  float LocalPositionX; // s0
  float v173; // s10
  UnityEngine_GameObject_o *v174; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v176; // x8
  __int64 v177; // x8
  struct OtherUserGameEntity_o *v178; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  Il2CppObject **v183; // x9
  Il2CppObject *v184; // x21
  Il2CppObject *v185; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UISprite_o *classBoardBackSprite; // x20
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v189; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  UnityEngine_Vector3_o v195; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3F6C1 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1BDB878(&DataManager_TypeInfo, v10);
    sub_1BDB878(&Grade_TypeInfo, v11);
    sub_1BDB878(&int_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Add__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v15);
    sub_1BDB878(&LocalizationManager_TypeInfo, v16);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BDB878(&OptionManager_TypeInfo, v19);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BDB878(&StringLiteral_20351/*"img_blacklist_requestdate"*/, v22);
    sub_1BDB878(&StringLiteral_17469/*"btn_bg_27_2"*/, v23);
    sub_1BDB878(&StringLiteral_6414/*"FFFFFF"*/, v24);
    sub_1BDB878(&StringLiteral_13364/*"TIME_BEFORE_TITLE_COLOR"*/, v25);
    sub_1BDB878(&StringLiteral_17470/*"btn_bg_29_2"*/, v26);
    sub_1BDB878(&StringLiteral_9353/*"NP_MAX_COLOR_NAME"*/, v27);
    sub_1BDB878(&StringLiteral_17468/*"btn_bg_26_2"*/, v28);
    sub_1BDB878(&StringLiteral_20350/*"img_blacklist_recorddate"*/, v29);
    sub_1BDB878(&StringLiteral_6413/*"FFFF00"*/, v30);
    sub_1BDB878(&StringLiteral_9321/*"NO_ENTRY_NAME"*/, v31);
    sub_1BDB878(&StringLiteral_9347/*"NP_COLOR_NAME"*/, v32);
    sub_1BDB878(&StringLiteral_15997/*"[{0}]+{1}[-]"*/, v33);
    sub_1BDB878(&StringLiteral_6537/*"FRIEND_BUTTON_CANCEL"*/, v34);
    sub_1BDB878(&StringLiteral_20221/*"icon_friend"*/, v35);
    sub_1BDB878(&StringLiteral_20220/*"icon_follow"*/, v36);
    byte_4B3F6C1 = 1;
  }
  tdInfo = 0LL;
  v189 = 0LL;
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
  v44 = kind == 9 || kind == 3;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_183;
  v46 = *(_QWORD *)(gameObject + 96);
  if ( !v46 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v46 + 24) )
    goto LABEL_346;
  v47 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v46 + 32),
                        item->fields._FollowerGrandGraphId_k__BackingField,
                        0LL);
  v49 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_36;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_36;
    v103 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v102 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v193.fields.currentCryptoKey = v103;
    *(_QWORD *)&v193.fields.fakeValue = v102;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v193, 0LL) )
    {
LABEL_36:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v49, 0LL);
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v49, 0LL);
      v47 = 0;
    }
    else
    {
      v49 = 0LL;
      v47 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_183;
  ServantFaceIconComponent__Set_40022108(
    (ServantFaceIconComponent_o *)gameObject,
    v49,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v44,
    0,
    0LL);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v50);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_4B3F6BB & 1) == 0 )
  {
    gameObject = sub_1BDB878(&StringLiteral_19073/*"error"*/, skillInfoUiWidget);
    byte_4B3F6BB = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_183;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19073/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0LL);
  v54 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v54 )
  {
    userLv = v54->fields.userLv;
    if ( !gameObject )
      goto LABEL_183;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_183;
  }
  UIIconLabel__Set_40036752((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v57);
  if ( !servantNameLabel )
    goto LABEL_183;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v58);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v59);
  if ( item->fields.servantEntity )
  {
    v62 = TreasureDeviceLevelIcon;
    v63 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
      v63 = sub_1C2BF08(v61);
    v64 = *(_QWORD *)(*(_QWORD *)(v63 + 192) + 16LL);
    if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
      v64 = sub_1C2BF08(v61);
    gameObject = **(_QWORD **)(v64 + 184);
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v49 )
      goto LABEL_183;
    v65 = (ServantLimitAddMaster_o *)gameObject;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v49, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v49, 0LL) )
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !gameObject )
        goto LABEL_183;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                     v49->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v69 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
    v68 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
    v70 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v192.fields.currentCryptoKey = v69;
    *(_QWORD *)&v192.fields.fakeValue = v68;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v192, 0LL);
    if ( !v70 )
      goto LABEL_183;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v70,
                                   gameObject,
                                   FriendNpNameDispLimitCount,
                                   0LL);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v49->fields.svtId, 0LL);
    if ( !tdInfo || !v65 )
      goto LABEL_183;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v65,
                        gameObject,
                        ServantLimitCountSealAfter,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0LL);
    v73 = (System_String_o **)&StringLiteral_9353/*"NP_MAX_COLOR_NAME"*/;
    v74 = v62 <= 1;
    v75 = (Il2CppObject *)OverwriteTDName;
    if ( v74 )
      v73 = (System_String_o **)&StringLiteral_9347/*"NP_COLOR_NAME"*/;
    v76 = *v73;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v77 = LocalizationManager__Get(v76, 0LL);
    gameObject = (__int64)System_String__Format(v77, v75, 0LL);
    if ( !tdInfo )
      goto LABEL_183;
    v78 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
    if ( !svtNpTitleLabel )
      goto LABEL_183;
    UIRangeLabel__Set(svtNpTitleLabel, v78, (System_String_o *)gameObject, 0, 0, 0, 0LL);
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
    v81 = this->fields.svtNpTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NO_ENTRY_NAME"*/, 0LL);
    if ( !v81 )
      goto LABEL_183;
    UIRangeLabel__Set(v81, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
    v82 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_183;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
    }
  }
  v83 = item->fields.kind;
  if ( v83 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v89 = LocalizationManager__Get((System_String_o *)StringLiteral_13364/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v87 = v89;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_105;
    }
  }
  else if ( v83 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_13364/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v87 = v85;
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
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_13364/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
      goto LABEL_105;
    }
  }
  createdAt = 0LL;
LABEL_105:
  v91 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
  gameObject = (__int64)System_String__Format(v87, v91, 0LL);
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
    sub_1BDBAD4(gameObject, skillInfoUiWidget);
  }
  gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v42);
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
    v104 = v94;
    v105 = 4LL;
    do
    {
      v106 = v105 - 4;
      if ( v105 - 4 >= v104 )
      {
        v111 = this->fields.skillBaseList;
        if ( !v111 )
          goto LABEL_183;
        if ( v106 >= v111->max_length )
          goto LABEL_346;
        gameObject = *((_QWORD *)&v111->obj.klass + v105);
        if ( !gameObject )
          goto LABEL_183;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      else
      {
        if ( !skillInfoList )
          goto LABEL_183;
        if ( v106 >= skillInfoList->max_length )
          goto LABEL_346;
        v107 = this->fields.skillBaseList;
        if ( !v107 )
          goto LABEL_183;
        if ( v106 >= v107->max_length )
          goto LABEL_346;
        gameObject = *((_QWORD *)&v107->obj.klass + v105);
        if ( !gameObject )
          goto LABEL_183;
        v108 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v105);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v109 = this->fields.skillIconList;
        if ( !v109 )
          goto LABEL_183;
        if ( v106 >= v109->max_length )
          goto LABEL_346;
        if ( !v108 )
          goto LABEL_183;
        gameObject = *((_QWORD *)&v109->obj.klass + v105);
        if ( !gameObject )
          goto LABEL_183;
        SkillIconComponent__Set_40035936((SkillIconComponent_o *)gameObject, v108[4], v108[5], v108[12], v108[13], 0LL);
        skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
        if ( !skillLevelIconLabelList )
          goto LABEL_183;
        if ( v106 >= skillLevelIconLabelList->max_length )
          goto LABEL_346;
        gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v105);
        if ( !gameObject )
          goto LABEL_183;
        UIIconLabel__Set_40036752((UIIconLabel_o *)gameObject, 48, v108[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
      }
      v112 = this->fields.skillIconList;
      if ( !v112 )
        goto LABEL_183;
      v113 = v105 - 3;
      ++v105;
    }
    while ( v113 < (int)v112->max_length );
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
  v114 = *(_QWORD *)(gameObject + 16);
  v115 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(gameObject + 28);
  if ( !v114 )
    goto LABEL_183;
  v116 = *(int *)(gameObject + 24);
  if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      skillInfoUiWidget,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v117 = v114 + 8 * v116;
    *(_DWORD *)(gameObject + 24) = v116 + 1;
    *(_QWORD *)(v117 + 32) = skillInfoUiWidget;
    gameObject = sub_1BDB81C(v117 + 32);
  }
LABEL_164:
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v189, v42);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_183;
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
        if ( v189 )
        {
          v122 = v189->max_length;
          if ( v121 < (int)v122 )
          {
            if ( v121 >= v122 )
              goto LABEL_346;
            v123 = v189->m_Items[v121];
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
      v127 = v120;
      v128 = 4LL;
      do
      {
        v129 = v128 - 4;
        if ( v128 - 4 >= v127 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_183;
          if ( v129 >= appendSkillBaseList->max_length )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v128);
          if ( !gameObject )
            goto LABEL_183;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( !v189 )
            goto LABEL_183;
          if ( v129 >= v189->max_length )
            goto LABEL_346;
          v130 = this->fields.appendSkillBaseList;
          if ( !v130 )
            goto LABEL_183;
          if ( v129 >= v130->max_length )
            goto LABEL_346;
          gameObject = *((_QWORD *)&v130->obj.klass + v128);
          if ( !gameObject )
            goto LABEL_183;
          v131 = (int32_t *)*((_QWORD *)&v189->obj.klass + v128);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v132 = this->fields.appendSkillIconList;
          if ( !v132 )
            goto LABEL_183;
          if ( v129 >= v132->max_length )
            goto LABEL_346;
          if ( !v131 )
            goto LABEL_183;
          gameObject = *((_QWORD *)&v132->obj.klass + v128);
          if ( !gameObject )
            goto LABEL_183;
          SkillIconComponent__Set_40035936(
            (SkillIconComponent_o *)gameObject,
            v131[4],
            v131[5],
            v131[12],
            v131[13],
            0LL);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_183;
          if ( v129 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v128);
          if ( !gameObject )
            goto LABEL_183;
          UIIconLabel__Set_40036752((UIIconLabel_o *)gameObject, 48, v131[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
        }
        v135 = this->fields.appendSkillIconList;
        if ( !v135 )
          goto LABEL_183;
        v136 = v128 - 3;
        ++v128;
      }
      while ( v136 < (int)v135->max_length );
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
    v137 = *(_QWORD *)(gameObject + 16);
    v138 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v137 )
      goto LABEL_183;
    v139 = *(int *)(gameObject + 24);
    if ( (unsigned int)v139 >= *(_DWORD *)(v137 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        skillInfoUiWidget,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
    }
    else
    {
      v140 = v137 + 8 * v139;
      *(_DWORD *)(gameObject + 24) = v139 + 1;
      *(_QWORD *)(v140 + 32) = skillInfoUiWidget;
      sub_1BDB81C(v140 + 32);
    }
  }
  else
  {
    v124 = this->fields.appendSkillIconList;
    if ( !v124 )
      goto LABEL_183;
    v125 = 0LL;
    while ( (int)v125 < (signed int)v124->max_length )
    {
      v126 = this->fields.appendSkillBaseList;
      if ( !v126 )
        goto LABEL_183;
      if ( (unsigned int)v125 >= v126->max_length )
        goto LABEL_346;
      gameObject = (__int64)v126->m_Items[v125];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v124 = this->fields.appendSkillIconList;
        ++v125;
        if ( v124 )
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
                            (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_183;
    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0, 0LL);
  }
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    servantEntity = item->fields.servantEntity;
    v144 = this->fields.svtCommandCardList;
    if ( v47 & 1 | (servantEntity == 0LL) )
    {
      if ( !v144 )
        goto LABEL_183;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
    }
    else
    {
      v146 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v145 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v194.fields.currentCryptoKey = v146;
      *(_QWORD *)&v194.fields.fakeValue = v145;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v194, 0LL);
      if ( !v49 )
        goto LABEL_183;
      commandCardParam = v49->fields.commandCardParam;
      v148 = gameObject;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v49, 0LL);
      if ( !v144 )
        goto LABEL_183;
      ServantCommandCardListComponent__Set_40007044(
        v144,
        v148,
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
  *(UnityEngine_Vector3_o *)&v149 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  v151 = v149;
  v152 = v150;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_183;
  v195.fields.y = -45.0;
  v195.fields.x = v151;
  v195.fields.z = v152;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v195, 0LL);
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
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_17468/*"btn_bg_26_2"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite, (System_String_o *)StringLiteral_17469/*"btn_bg_27_2"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.registBackSprite, (System_String_o *)StringLiteral_17468/*"btn_bg_26_2"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite2, (System_String_o *)StringLiteral_17469/*"btn_bg_27_2"*/, 0LL);
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6537/*"FRIEND_BUTTON_CANCEL"*/, 0LL);
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
      v155 = &StringLiteral_20221/*"icon_friend"*/;
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
      v155 = &StringLiteral_20351/*"img_blacklist_requestdate"*/;
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
      v155 = &StringLiteral_20350/*"img_blacklist_recorddate"*/;
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
      *(UnityEngine_Vector3_o *)&v156 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)gameObject,
                                          0LL);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      v158 = v156;
      v159 = v157;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      v196.fields.y = 0.0;
      v196.fields.x = v158;
      v196.fields.z = v159;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v196, 0LL);
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
      v155 = &StringLiteral_20220/*"icon_follow"*/;
LABEL_298:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v155, 0LL);
      break;
    default:
      break;
  }
  v160 = item->fields.otherUserGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_39449696 = Grade__GetKind_39449696(v160, 0LL);
  SupportBgImage = Grade__GetSupportBgImage(Kind_39449696, 0LL);
  baseSpr = this->fields.baseSpr;
  v164 = SupportBgImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v164, 0LL);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    LODWORD(v167) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v168 = v167;
    LODWORD(v169) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    v170 = v169;
    v171 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v171, 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v173 = LocalPositionX;
    v174 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionX(v174, (float)(v170 * 0.5) + (float)(v168 + v173), 0LL);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_39449696, 0LL);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v166);
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
  v176 = *(_QWORD *)(gameObject + 96);
  if ( !v176 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v176 + 24) )
LABEL_346:
    sub_1BDBADC(gameObject, skillInfoUiWidget, v42);
  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                          (OtherUserGameEntity_o *)gameObject,
                          item->fields.classPos,
                          1,
                          item->fields.displayServantType,
                          *(_DWORD *)(v176 + 32),
                          item->fields._FollowerGrandGraphId_k__BackingField,
                          0LL);
  if ( gameObject )
  {
    v177 = *(_QWORD *)(gameObject + 40);
    if ( v177 >= 1 )
    {
      v178 = item->fields.otherUserGameEntity;
      if ( !v178 )
        goto LABEL_183;
      if ( v178->fields.pushUserSvtId == v177 )
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
      v183 = (Il2CppObject **)&StringLiteral_6413/*"FFFF00"*/;
    else
      v183 = (Il2CppObject **)&StringLiteral_6414/*"FFFFFF"*/;
    v184 = *v183;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField, v180, v181, v182);
    gameObject = (__int64)System_String__Format_62613552((System_String_o *)StringLiteral_15997/*"[{0}]+{1}[-]"*/, v184, v185, 0LL);
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
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17470/*"btn_bg_29_2"*/, 0LL);
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

  if ( (byte_4B3F6C3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, item);
    byte_4B3F6C3 = 1;
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
      sub_1BDBAD4(removeButton, v6);
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
    sub_1BDBAD4(messageDispButton, isHide);
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
  if ( (byte_4B3F6C2 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_17515/*"btn_message_on"*/, v8);
    sub_1BDB878(&StringLiteral_6545/*"FRIEND_HIDE_MESSAGE"*/, v9);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1BDB878(&StringLiteral_17514/*"btn_message_off"*/, v10);
    byte_4B3F6C2 = 1;
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
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6545/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1BDBAD4(this, item);
  }
  v21 = (System_String_o **)&StringLiteral_17514/*"btn_message_off"*/;
  if ( !isDisp )
    v21 = (System_String_o **)&StringLiteral_17515/*"btn_message_on"*/;
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
  if ( (byte_4B3F6C4 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1BDB878(&OptionManager_TypeInfo, item);
    byte_4B3F6C4 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1BDBAD4(this, item);
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