void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  struct SkillIconComponent_array *v5; // x0
  struct UIIconLabel_array *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  struct UIIconLabel_array *v9; // x0
  struct System_Int32_array *v10; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4BD764C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&SkillIconComponent___TypeInfo);
    sub_1C21E38(&UIIconLabel___TypeInfo);
    byte_4BD764C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C21DDC(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1C21DDC(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1C21EE0(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1C21DDC(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1C21DDC(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1C21DDC(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1C21EE0(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1C21DDC(&this->fields.appendSkillLevelIconLabelList, v9);
  v10 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v10 )
    sub_1C22094(0LL, v11);
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[1] = 95, max_length == 1) )
    sub_1C2209C(v10, v10);
  v10->m_Items[2] = 46;
  this->fields.OFFER_BUTTON_SIZE = v10;
  sub_1C21DDC(&this->fields.OFFER_BUTTON_SIZE, v10);
  *(_QWORD *)&this->fields.REJECT_BUTTON_POS_Y = 0x3F000000FFFFFFCFLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__Awake(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v5; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v7; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v9; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v11; // x19

  if ( (byte_4BD7646 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20533/*"icon_skill_mini"*/);
    sub_1C21E38(&StringLiteral_20684/*"img_friend_skill"*/);
    sub_1C21E38(&StringLiteral_20432/*"icon_append_mini"*/);
    sub_1C21E38(&StringLiteral_20683/*"img_friend_appendskill"*/);
    byte_4BD7646 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C21DDC(&this->fields.switchSkillUIList, v3);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_20533/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v7 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_20684/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v9 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20432/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v11 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20683/*"img_friend_appendskill"*/, 0LL);
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
  int max_length; // w24
  il2cpp_array_size_t v11; // w25
  UnityEngine_Behaviour_o *v12; // x22
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *pushSpr; // x21
  struct UILabel_o *loginDataLabel; // x8
  struct UISprite_o *v18; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9

  v6 = this;
  if ( (byte_4BD764B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD764B = 1;
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
      v11 = 0;
      while ( v11 < skillButtonList->max_length )
      {
        v12 = (UnityEngine_Behaviour_o *)skillButtonList->m_Items[v11];
        if ( !v12 )
          goto LABEL_23;
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
        if ( max_length == ++v11 )
          goto LABEL_24;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_23;
      }
LABEL_95:
      sub_1C2209C(this, item);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1C22094(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v15);
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
          v18 = this->fields.addRangeSprite;
          if ( (__int64)v18 >= 1 )
          {
            otherUserGameEntity = item->fields.otherUserGameEntity;
            if ( !otherUserGameEntity )
              goto LABEL_23;
            if ( (struct UISprite_o *)otherUserGameEntity->fields.pushUserSvtId == v18 )
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
  UnityEngine_Object_o *rangeSprite; // x22
  bool v8; // w0
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  int32_t kind; // w8
  bool v13; // w22
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x8
  char v16; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v18; // x21
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
  long double v30; // q0
  int v31; // w22
  __int64 v32; // x0
  __int64 v33; // x0
  ServantLimitAddMaster_o *v34; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  Il2CppObject *Master_object; // x0
  __int64 v37; // x26
  __int64 v38; // x27
  ServantLimitImageMaster_o *v39; // x25
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *OverwriteTDName; // x0
  System_String_o **v42; // x9
  bool v43; // cc
  Il2CppObject *v44; // x22
  System_String_o *v45; // x23
  System_String_o *v46; // x0
  System_String_o *v47; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v50; // x22
  UnityEngine_Object_o *v51; // x22
  int32_t v52; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v54; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v56; // x23
  int64_t createdAt; // x0
  System_String_o *v58; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v60; // x0
  const MethodInfo *v61; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v63; // x8
  int v64; // w9
  unsigned __int64 v65; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v67; // x14
  struct SkillIconComponent_array *v68; // x8
  __int64 v69; // x22
  struct UnityEngine_GameObject_array *v70; // x8
  const MethodInfo *v71; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v73; // x23
  __int64 v74; // x24
  __int64 v75; // x22
  __int64 v76; // x23
  unsigned __int64 v77; // x24
  struct UnityEngine_GameObject_array *v78; // x9
  int32_t *v79; // x25
  struct SkillIconComponent_array *v80; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v83; // x8
  __int64 v84; // x9
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v90; // x8
  int v91; // w9
  signed __int64 v92; // x10
  unsigned __int64 v93; // x14
  SkillInfo_o *v94; // x14
  struct SkillIconComponent_array *v95; // x8
  __int64 v96; // x22
  struct UnityEngine_GameObject_array *v97; // x8
  unsigned __int64 v98; // x22
  signed __int64 v99; // x23
  struct UnityEngine_GameObject_array *v100; // x9
  SkillInfo_o *v101; // x25
  struct SkillIconComponent_array *v102; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  __int64 v104; // x9
  int v105; // w8
  struct UnityEngine_GameObject_array *v106; // x9
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v108; // x8
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v116; // x22
  __int64 v117; // x23
  __int64 v118; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v120; // w23
  float v121; // s0
  float v122; // s2
  float v123; // s8
  float v124; // s9
  UISprite_o *offerBackSprite; // x21
  struct System_Int32_array *OFFER_BUTTON_SIZE; // x8
  struct System_Int32_array *v127; // x8
  UnityEngine_GameObject_o *v128; // x0
  struct System_Int32_array *v129; // x8
  struct System_Int32_array *v130; // x8
  UnityEngine_GameObject_o *v131; // x0
  struct System_Int32_array *v132; // x8
  struct System_Int32_array *v133; // x8
  UnityEngine_GameObject_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  struct System_Int32_array *v136; // x8
  struct System_Int32_array *v137; // x8
  UnityEngine_GameObject_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v141; // x0
  __int64 *v142; // x8
  float v143; // s0
  float v144; // s2
  float v145; // s8
  float v146; // s9
  OtherUserGameEntity_o *v147; // x21
  int32_t Kind_38931288; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v151; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v153; // x2
  float v154; // s0
  float v155; // s8
  float v156; // s0
  float v157; // s9
  UnityEngine_GameObject_o *v158; // x0
  float LocalPositionX; // s0
  float v160; // s10
  UnityEngine_GameObject_o *v161; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v163; // x8
  __int64 v164; // x8
  struct OtherUserGameEntity_o *v165; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v167; // x2
  __int64 v168; // x3
  __int64 v169; // x4
  Il2CppObject **v170; // x9
  Il2CppObject *v171; // x21
  Il2CppObject *v172; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UnityEngine_GameObject_o *v174; // x20
  BalanceConfig_c *v175; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v177; // x0
  UnityEngine_GameObject_o *v178; // x0
  UnityEngine_GameObject_o *v179; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v181; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v188; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7647 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Grade_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_20630/*"img_blacklist_requestdate"*/);
    sub_1C21E38(&StringLiteral_17773/*"btn_bg_27_2"*/);
    sub_1C21E38(&StringLiteral_6537/*"FFFFFF"*/);
    sub_1C21E38(&StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1C21E38(&StringLiteral_17774/*"btn_bg_29_2"*/);
    sub_1C21E38(&StringLiteral_9522/*"NP_MAX_COLOR_NAME"*/);
    sub_1C21E38(&StringLiteral_17772/*"btn_bg_26_2"*/);
    sub_1C21E38(&StringLiteral_20629/*"img_blacklist_recorddate"*/);
    sub_1C21E38(&StringLiteral_6536/*"FFFF00"*/);
    sub_1C21E38(&StringLiteral_9492/*"NO_ENTRY_NAME"*/);
    sub_1C21E38(&StringLiteral_9516/*"NP_COLOR_NAME"*/);
    sub_1C21E38(&StringLiteral_16302/*"[{0}]+{1}[-]"*/);
    sub_1C21E38(&StringLiteral_6661/*"FRIEND_BUTTON_CANCEL"*/);
    sub_1C21E38(&StringLiteral_20507/*"icon_friend"*/);
    sub_1C21E38(&StringLiteral_20506/*"icon_follow"*/);
    byte_4BD7647 = 1;
  }
  tdInfo = 0LL;
  v181 = 0LL;
  skillInfoList = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
  if ( item )
  {
    if ( v8 )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isTerminationSpace, 0LL);
    }
    if ( mode )
    {
      kind = item->fields.kind;
      v13 = kind == 9 || kind == 3;
      gameObject = (__int64)item->fields.otherUserGameEntity;
      if ( !gameObject )
        goto LABEL_183;
      v15 = *(_QWORD *)(gameObject + 96);
      if ( !v15 )
        goto LABEL_183;
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_395;
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
          goto LABEL_36;
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( !equipTarget1 )
          goto LABEL_36;
        v74 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v73 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v185.fields.currentCryptoKey = v74;
        *(_QWORD *)&v185.fields.fakeValue = v73;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v185, 0LL) )
        {
LABEL_36:
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v18, 0LL);
          ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v18, 0LL);
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
        goto LABEL_183;
      ServantFaceIconComponent__Set_39468548(
        (ServantFaceIconComponent_o *)gameObject,
        v18,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        v13,
        0,
        0LL);
      FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v19);
      playerNameLabel = this->fields.playerNameLabel;
      if ( (byte_4BD7641 & 1) == 0 )
      {
        gameObject = sub_1C21E38(&StringLiteral_19380/*"error"*/);
        byte_4BD7641 = 1;
      }
      if ( !playerNameLabel )
        goto LABEL_183;
      otherUserGameEntity = item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
        p_userName = &otherUserGameEntity->fields.userName;
      else
        p_userName = (System_String_o **)&StringLiteral_19380/*"error"*/;
      UILabel__set_text(playerNameLabel, *p_userName, 0LL);
      v23 = item->fields.otherUserGameEntity;
      gameObject = (__int64)this->fields.playerLevelIconLabel;
      if ( v23 )
      {
        userLv = v23->fields.userLv;
        if ( !gameObject )
          goto LABEL_183;
      }
      else
      {
        userLv = 1;
        if ( !gameObject )
          goto LABEL_183;
      }
      UIIconLabel__Set_39480396((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
      servantNameLabel = this->fields.servantNameLabel;
      gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v26);
      if ( !servantNameLabel )
        goto LABEL_183;
      UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v27);
      TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v28);
      if ( item->fields.servantEntity )
      {
        v31 = TreasureDeviceLevelIcon;
        v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
          v32 = sub_1C73D14(v30);
        v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
        if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
          v33 = sub_1C73D14(v30);
        gameObject = **(_QWORD **)(v33 + 184);
        if ( !gameObject )
          goto LABEL_183;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        if ( !v18 )
          goto LABEL_183;
        v34 = (ServantLimitAddMaster_o *)gameObject;
        FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v18, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v18, 0LL) )
        {
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_183;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
          if ( !gameObject )
            goto LABEL_183;
          FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                         (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                         v18->fields.svtId,
                                         FriendNpNameDispLimitCount,
                                         0LL);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v38 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        v39 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v184.fields.currentCryptoKey = v38;
        *(_QWORD *)&v184.fields.fakeValue = v37;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v184, 0LL);
        if ( !v39 )
          goto LABEL_183;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v39,
                                       gameObject,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v18->fields.svtId, 0LL);
        if ( !tdInfo || !v34 )
          goto LABEL_183;
        OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                            v34,
                            gameObject,
                            ServantLimitCountSealAfter,
                            tdInfo->fields.name,
                            tdInfo->fields.lv,
                            0LL);
        v42 = (System_String_o **)&StringLiteral_9522/*"NP_MAX_COLOR_NAME"*/;
        v43 = v31 <= 1;
        v44 = (Il2CppObject *)OverwriteTDName;
        if ( v43 )
          v42 = (System_String_o **)&StringLiteral_9516/*"NP_COLOR_NAME"*/;
        v45 = *v42;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get(v45, 0LL);
        gameObject = (__int64)System_String__Format(v46, v44, 0LL);
        if ( !tdInfo )
          goto LABEL_183;
        v47 = (System_String_o *)gameObject;
        svtNpTitleLabel = this->fields.svtNpTitleLabel;
        gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
        if ( !svtNpTitleLabel )
          goto LABEL_183;
        UIRangeLabel__Set(svtNpTitleLabel, v47, (System_String_o *)gameObject, 0, 0, 0LL);
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
        v50 = this->fields.svtNpTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9492/*"NO_ENTRY_NAME"*/, 0LL);
        if ( !v50 )
          goto LABEL_183;
        UIRangeLabel__Set(v50, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
        v51 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
        {
          gameObject = (__int64)this->fields.svtNpCommandCard;
          if ( !gameObject )
            goto LABEL_183;
          ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
        }
      }
      v52 = item->fields.kind;
      if ( v52 == 7 )
      {
        loginDataLabel = this->fields.loginDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
        v56 = v58;
        if ( userFriendRequestHistoryEntity )
        {
          createdAt = userFriendRequestHistoryEntity->fields.createdAt;
          goto LABEL_105;
        }
      }
      else if ( v52 == 8 )
      {
        loginDataLabel = this->fields.loginDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        userBlacklistEntity = item->fields.userBlacklistEntity;
        v56 = v54;
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
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( item->fields.otherUserGameEntity )
        {
          createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
          goto LABEL_105;
        }
      }
      createdAt = 0LL;
LABEL_105:
      v60 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
      gameObject = (__int64)System_String__Format(v56, v60, 0LL);
      if ( !loginDataLabel )
        goto LABEL_183;
      UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
      if ( item->fields.servantEntity )
      {
        gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v61);
        skillIconList = this->fields.skillIconList;
        if ( !skillIconList )
          goto LABEL_183;
        v63 = *(_QWORD *)&skillIconList->max_length;
        if ( v63 << 32 >= 1 )
        {
          v64 = 0;
          v65 = 0LL;
          while ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( (__int64)v65 < (int)max_length )
            {
              if ( v65 >= max_length )
                goto LABEL_395;
              v67 = skillInfoList->m_Items[v65];
              if ( v67 && v67->fields.id >= 1 )
                v64 = v65 + 1;
            }
            if ( (__int64)++v65 >= (int)v63 )
              goto LABEL_135;
          }
          goto LABEL_183;
        }
        v64 = 0;
LABEL_135:
        if ( (int)v63 >= 1 )
        {
          v75 = v64;
          v76 = 4LL;
          do
          {
            v77 = v76 - 4;
            if ( v76 - 4 >= v75 )
            {
              skillBaseList = this->fields.skillBaseList;
              if ( !skillBaseList )
                goto LABEL_183;
              if ( v77 >= skillBaseList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillBaseList->obj.klass + v76);
              if ( !gameObject )
                goto LABEL_183;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_183;
              if ( v77 >= skillInfoList->max_length )
                goto LABEL_395;
              v78 = this->fields.skillBaseList;
              if ( !v78 )
                goto LABEL_183;
              if ( v77 >= v78->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&v78->obj.klass + v76);
              if ( !gameObject )
                goto LABEL_183;
              v79 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v76);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              v80 = this->fields.skillIconList;
              if ( !v80 )
                goto LABEL_183;
              if ( v77 >= v80->max_length )
                goto LABEL_395;
              if ( !v79 )
                goto LABEL_183;
              gameObject = *((_QWORD *)&v80->obj.klass + v76);
              if ( !gameObject )
                goto LABEL_183;
              SkillIconComponent__Set_39479592(
                (SkillIconComponent_o *)gameObject,
                v79[4],
                v79[5],
                v79[12],
                v79[13],
                0LL);
              skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
              if ( !skillLevelIconLabelList )
                goto LABEL_183;
              if ( v77 >= skillLevelIconLabelList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v76);
              if ( !gameObject )
                goto LABEL_183;
              UIIconLabel__Set_39480396((UIIconLabel_o *)gameObject, 48, v79[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
            v83 = this->fields.skillIconList;
            if ( !v83 )
              goto LABEL_183;
            v84 = v76 - 3;
            ++v76;
          }
          while ( v84 < (int)v83->max_length );
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
              skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
              v85 = *(_QWORD *)(gameObject + 16);
              v86 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(gameObject + 28);
              if ( v85 )
              {
                v87 = *(int *)(gameObject + 24);
                if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = v85 + 8 * v87;
                  *(_DWORD *)(gameObject + 24) = v87 + 1;
                  *(_QWORD *)(v88 + 32) = skillInfoUiWidget;
                  gameObject = sub_1C21DDC(v88 + 32, skillInfoUiWidget);
                }
                goto LABEL_164;
              }
            }
          }
        }
      }
      else
      {
        v68 = this->fields.skillIconList;
        if ( v68 )
        {
          v69 = 0LL;
          while ( (int)v69 < (signed int)v68->max_length )
          {
            v70 = this->fields.skillBaseList;
            if ( !v70 )
              goto LABEL_183;
            if ( (unsigned int)v69 >= v70->max_length )
              goto LABEL_395;
            gameObject = (__int64)v70->m_Items[v69];
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              v68 = this->fields.skillIconList;
              ++v69;
              if ( v68 )
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
LABEL_164:
              if ( item->fields.servantEntity )
              {
                gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v181, v71);
                appendSkillIconList = this->fields.appendSkillIconList;
                if ( !appendSkillIconList )
                  goto LABEL_183;
                v90 = *(_QWORD *)&appendSkillIconList->max_length;
                if ( v90 << 32 < 1 )
                {
                  v91 = 0;
                }
                else
                {
                  v91 = 0;
                  v92 = 0LL;
                  do
                  {
                    if ( v181 )
                    {
                      v93 = v181->max_length;
                      if ( v92 < (int)v93 )
                      {
                        if ( v92 >= v93 )
                          goto LABEL_395;
                        v94 = v181->m_Items[v92];
                        if ( v94 && v94->fields.id >= 1 )
                          v91 = v92 + 1;
                      }
                    }
                    ++v92;
                  }
                  while ( v92 < (int)v90 );
                }
                if ( (int)v90 >= 1 )
                {
                  v98 = 0LL;
                  v99 = v91;
                  do
                  {
                    if ( (__int64)v98 >= v99 )
                    {
                      appendSkillBaseList = this->fields.appendSkillBaseList;
                      if ( !appendSkillBaseList )
                        goto LABEL_183;
                      if ( v98 >= appendSkillBaseList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillBaseList->m_Items[v98];
                      if ( !gameObject )
                        goto LABEL_183;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    }
                    else
                    {
                      if ( !v181 )
                        goto LABEL_183;
                      if ( v98 >= v181->max_length )
                        goto LABEL_395;
                      v100 = this->fields.appendSkillBaseList;
                      if ( !v100 )
                        goto LABEL_183;
                      if ( v98 >= v100->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)v100->m_Items[v98];
                      if ( !gameObject )
                        goto LABEL_183;
                      v101 = v181->m_Items[v98];
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                      v102 = this->fields.appendSkillIconList;
                      if ( !v102 )
                        goto LABEL_183;
                      if ( v98 >= v102->max_length )
                        goto LABEL_395;
                      if ( !v101 )
                        goto LABEL_183;
                      gameObject = (__int64)v102->m_Items[v98];
                      if ( !gameObject )
                        goto LABEL_183;
                      SkillIconComponent__Set_39479592(
                        (SkillIconComponent_o *)gameObject,
                        v101->fields.id,
                        v101->fields.lv,
                        v101->fields.strengthStatus,
                        v101->fields.skillRecord,
                        0LL);
                      appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                      if ( !appendSkillLevelIconLabelList )
                        goto LABEL_183;
                      if ( v98 >= appendSkillLevelIconLabelList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillLevelIconLabelList->m_Items[v98];
                      if ( !gameObject )
                        goto LABEL_183;
                      UIIconLabel__Set_39480396(
                        (UIIconLabel_o *)gameObject,
                        48,
                        v101->fields.lv,
                        0,
                        0,
                        0LL,
                        0,
                        0,
                        0,
                        0LL);
                      gameObject = ConstantMaster__IsFLAG20240804(0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        gameObject = (__int64)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          gameObject = (__int64)BalanceConfig_TypeInfo;
                        }
                        v104 = *(_QWORD *)(gameObject + 184);
                        v105 = *(_DWORD *)(v104 + 1196);
                        if ( v98 )
                          v105 += *(_DWORD *)(v104 + 1200) * v98;
                        v106 = this->fields.appendSkillBaseList;
                        if ( !v106 )
                          goto LABEL_183;
                        if ( v98 >= v106->max_length )
                          goto LABEL_395;
                        GameObjectExtensions__SetLocalPositionX(v106->m_Items[v98], (float)v105, 0LL);
                      }
                    }
                    v108 = this->fields.appendSkillIconList;
                    if ( !v108 )
                      goto LABEL_183;
                  }
                  while ( (__int64)++v98 < (int)v108->max_length );
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
                v109 = *(_QWORD *)(gameObject + 16);
                v110 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(gameObject + 28);
                if ( !v109 )
                  goto LABEL_183;
                v111 = *(int *)(gameObject + 24);
                if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                }
                else
                {
                  v112 = v109 + 8 * v111;
                  *(_DWORD *)(gameObject + 24) = v111 + 1;
                  *(_QWORD *)(v112 + 32) = skillInfoUiWidget;
                  sub_1C21DDC(v112 + 32, skillInfoUiWidget);
                }
              }
              else
              {
                v95 = this->fields.appendSkillIconList;
                if ( !v95 )
                  goto LABEL_183;
                v96 = 0LL;
                while ( (int)v96 < (signed int)v95->max_length )
                {
                  v97 = this->fields.appendSkillBaseList;
                  if ( !v97 )
                    goto LABEL_183;
                  if ( (unsigned int)v96 >= v97->max_length )
                    goto LABEL_395;
                  gameObject = (__int64)v97->m_Items[v96];
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    v95 = this->fields.appendSkillIconList;
                    ++v96;
                    if ( v95 )
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
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
                v116 = this->fields.svtCommandCardList;
                if ( v16 & 1 | (servantEntity == 0LL) )
                {
                  if ( !v116 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
                }
                else
                {
                  v118 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
                  v117 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v186.fields.currentCryptoKey = v118;
                  *(_QWORD *)&v186.fields.fakeValue = v117;
                  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v186, 0LL);
                  if ( !v18 )
                    goto LABEL_183;
                  commandCardParam = v18->fields.commandCardParam;
                  v120 = gameObject;
                  gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v18, 0LL);
                  if ( !v116 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Set_39457436(
                    v116,
                    v120,
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
              *(UnityEngine_Vector3_o *)&v121 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.removeButton;
              if ( !gameObject )
                goto LABEL_183;
              v123 = v121;
              v124 = v122;
              gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_183;
              v187.fields.y = -45.0;
              v187.fields.x = v123;
              v187.fields.z = v124;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v187, 0LL);
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
              if ( !ConstantMaster__IsFLAG20240804(0LL) )
                goto LABEL_295;
              offerBackSprite = this->fields.offerBackSprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              gameObject = AtlasManager__SetDownloadCommonSprite(
                             offerBackSprite,
                             (System_String_o *)StringLiteral_17772/*"btn_bg_26_2"*/,
                             0LL);
              OFFER_BUTTON_SIZE = this->fields.OFFER_BUTTON_SIZE;
              if ( !OFFER_BUTTON_SIZE )
                goto LABEL_183;
              if ( OFFER_BUTTON_SIZE->max_length )
              {
                gameObject = (__int64)this->fields.offerBackSprite;
                if ( !gameObject )
                  goto LABEL_183;
                UIWidget__set_width((UIWidget_o *)gameObject, OFFER_BUTTON_SIZE->m_Items[1], 0LL);
                v127 = this->fields.OFFER_BUTTON_SIZE;
                if ( !v127 )
                  goto LABEL_183;
                if ( v127->max_length > 1 )
                {
                  gameObject = (__int64)this->fields.offerBackSprite;
                  if ( !gameObject )
                    goto LABEL_183;
                  UIWidget__set_height((UIWidget_o *)gameObject, v127->m_Items[2], 0LL);
                  gameObject = (__int64)this->fields.offerButton;
                  if ( !gameObject )
                    goto LABEL_183;
                  v128 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v128, 343.5, 0LL);
                  gameObject = AtlasManager__SetDownloadCommonSprite(
                                 this->fields.removeBackSprite,
                                 (System_String_o *)StringLiteral_17773/*"btn_bg_27_2"*/,
                                 0LL);
                  v129 = this->fields.OFFER_BUTTON_SIZE;
                  if ( !v129 )
                    goto LABEL_183;
                  if ( v129->max_length )
                  {
                    gameObject = (__int64)this->fields.removeBackSprite;
                    if ( !gameObject )
                      goto LABEL_183;
                    UIWidget__set_width((UIWidget_o *)gameObject, v129->m_Items[1], 0LL);
                    v130 = this->fields.OFFER_BUTTON_SIZE;
                    if ( !v130 )
                      goto LABEL_183;
                    if ( v130->max_length > 1 )
                    {
                      gameObject = (__int64)this->fields.removeBackSprite;
                      if ( !gameObject )
                        goto LABEL_183;
                      UIWidget__set_height((UIWidget_o *)gameObject, v130->m_Items[2], 0LL);
                      gameObject = (__int64)this->fields.removeButton;
                      if ( !gameObject )
                        goto LABEL_183;
                      v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      GameObjectExtensions__SetLocalPositionX(v131, 343.5, 0LL);
                      gameObject = AtlasManager__SetDownloadCommonSprite(
                                     this->fields.registBackSprite,
                                     (System_String_o *)StringLiteral_17772/*"btn_bg_26_2"*/,
                                     0LL);
                      v132 = this->fields.OFFER_BUTTON_SIZE;
                      if ( !v132 )
                        goto LABEL_183;
                      if ( v132->max_length )
                      {
                        gameObject = (__int64)this->fields.registBackSprite;
                        if ( !gameObject )
                          goto LABEL_183;
                        UIWidget__set_width((UIWidget_o *)gameObject, v132->m_Items[1], 0LL);
                        v133 = this->fields.OFFER_BUTTON_SIZE;
                        if ( !v133 )
                          goto LABEL_183;
                        if ( v133->max_length > 1 )
                        {
                          gameObject = (__int64)this->fields.registBackSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          UIWidget__set_height((UIWidget_o *)gameObject, v133->m_Items[2], 0LL);
                          gameObject = (__int64)this->fields.registButton;
                          if ( !gameObject )
                            goto LABEL_183;
                          v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v134, 343.5, 0LL);
                          gameObject = (__int64)this->fields.registTitleSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v135, this->fields.BLACK_LIST_BUTTON_TITLE_POS_X, 0LL);
                          gameObject = AtlasManager__SetDownloadCommonSprite(
                                         this->fields.removeBackSprite2,
                                         (System_String_o *)StringLiteral_17773/*"btn_bg_27_2"*/,
                                         0LL);
                          v136 = this->fields.OFFER_BUTTON_SIZE;
                          if ( !v136 )
                            goto LABEL_183;
                          if ( v136->max_length )
                          {
                            gameObject = (__int64)this->fields.removeBackSprite2;
                            if ( !gameObject )
                              goto LABEL_183;
                            UIWidget__set_width((UIWidget_o *)gameObject, v136->m_Items[1], 0LL);
                            v137 = this->fields.OFFER_BUTTON_SIZE;
                            if ( !v137 )
                              goto LABEL_183;
                            if ( v137->max_length > 1 )
                            {
                              gameObject = (__int64)this->fields.removeBackSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              UIWidget__set_height((UIWidget_o *)gameObject, v137->m_Items[2], 0LL);
                              gameObject = (__int64)this->fields.removeButton2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(v138, 343.5, 0LL);
                              gameObject = (__int64)this->fields.removeTitleSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v139 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(
                                v139,
                                this->fields.BLACK_LIST_BUTTON_TITLE_POS_X,
                                0LL);
LABEL_295:
                              switch ( item->fields.kind )
                              {
                                case 0:
                                  gameObject = (__int64)this->fields.offerButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  goto LABEL_341;
                                case 1:
                                  gameObject = (__int64)this->fields.cancelButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  cancelLabel = this->fields.cancelLabel;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  gameObject = (__int64)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_6661/*"FRIEND_BUTTON_CANCEL"*/,
                                                          0LL);
                                  if ( !cancelLabel )
                                    goto LABEL_183;
                                  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                  goto LABEL_341;
                                case 2:
                                  gameObject = (__int64)this->fields.acceptButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.rejectButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  if ( !ConstantMaster__IsFLAG20240804(0LL) )
                                    goto LABEL_341;
                                  gameObject = (__int64)this->fields.rejectButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v141 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v141,
                                    (float)this->fields.REJECT_BUTTON_POS_Y,
                                    0LL);
LABEL_341:
                                  v147 = item->fields.otherUserGameEntity;
                                  if ( !Grade_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
                                  Kind_38931288 = Grade__GetKind_38931288(v147, 0LL);
                                  SupportBgImage = Grade__GetSupportBgImage(Kind_38931288, 0LL);
                                  baseSpr = this->fields.baseSpr;
                                  v151 = SupportBgImage;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetGradeIcon(baseSpr, v151, 0LL);
                                  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( !UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
                                    goto LABEL_354;
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  LODWORD(v154) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v155 = v154;
                                  LODWORD(v156) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                                                (UserGradeComponent_o *)gameObject,
                                                                0LL);
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v157 = v156;
                                  v158 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  LocalPositionX = GameObjectExtensions__GetLocalPositionX(v158, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v160 = LocalPositionX;
                                  v161 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionX(
                                    v161,
                                    (float)(v157 * 0.5) + (float)(v155 + v160),
                                    0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_38931288, 0LL);
LABEL_354:
                                  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v153);
                                  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( !UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
                                    goto LABEL_369;
                                  gameObject = (__int64)this->fields.pushSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                                  gameObject = (__int64)item->fields.otherUserGameEntity;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v163 = *(_QWORD *)(gameObject + 96);
                                  if ( !v163 )
                                    goto LABEL_183;
                                  if ( !*(_DWORD *)(v163 + 24) )
                                    goto LABEL_395;
                                  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)gameObject,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          *(_DWORD *)(v163 + 32),
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_369;
                                  v164 = *(_QWORD *)(gameObject + 40);
                                  if ( v164 < 1 )
                                    goto LABEL_369;
                                  v165 = item->fields.otherUserGameEntity;
                                  if ( !v165 )
                                    goto LABEL_183;
                                  if ( v165->fields.pushUserSvtId != v164 )
                                    goto LABEL_369;
                                  gameObject = (__int64)this->fields.pushSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_369:
                                  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( !UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL)
                                    || (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
                                  {
                                    goto LABEL_378;
                                  }
                                  if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                                    v170 = (Il2CppObject **)&StringLiteral_6536/*"FFFF00"*/;
                                  else
                                    v170 = (Il2CppObject **)&StringLiteral_6537/*"FFFFFF"*/;
                                  v171 = *v170;
                                  OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                                  v172 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                           int_TypeInfo,
                                                           &OpenClassBoardNum_k__BackingField,
                                                           v167,
                                                           v168,
                                                           v169);
                                  gameObject = (__int64)System_String__Format_63129848(
                                                          (System_String_o *)StringLiteral_16302/*"[{0}]+{1}[-]"*/,
                                                          v171,
                                                          v172,
                                                          0LL);
                                  if ( !this->fields.openClassBoardNumLabel )
                                    goto LABEL_183;
                                  UILabel__set_text(
                                    this->fields.openClassBoardNumLabel,
                                    (System_String_o *)gameObject,
                                    0LL);
LABEL_378:
                                  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
                                    return;
                                  gameObject = (__int64)this->fields.classBoardOpenButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive(
                                    (UnityEngine_GameObject_o *)gameObject,
                                    item->fields._OpenClassBoardNum_k__BackingField >= 0,
                                    0LL);
                                  if ( !ConstantMaster__IsFLAG20240804(0LL) )
                                    return;
                                  gameObject = (__int64)this->fields.classBoardOpenButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v174 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  v175 = BalanceConfig_TypeInfo;
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                    v175 = BalanceConfig_TypeInfo;
                                  }
                                  GameObjectExtensions__SetLocalPosition_34797564(
                                    v174,
                                    v175->static_fields->CLASS_BOARD_BUTTON_POS,
                                    0LL);
                                  classBoardBackSprite = this->fields.classBoardBackSprite;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetDownloadCommonSprite(
                                    classBoardBackSprite,
                                    (System_String_o *)StringLiteral_17774/*"btn_bg_29_2"*/,
                                    0LL);
                                  gameObject = (__int64)this->fields.classBoardBackSprite;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                                    gameObject,
                                    *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
                                  gameObject = (__int64)this->fields.classBoardLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v177 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPosition_34797564(
                                    v177,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                                    0LL);
                                  gameObject = (__int64)this->fields.classBoardLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v178 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalScaleX(
                                    v178,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                                    0LL);
                                  gameObject = (__int64)this->fields.openClassBoardNumLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v179 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v179,
                                    (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                                    0LL);
                                  break;
                                case 3:
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.removeMarkSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.removeMarkSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v142 = &StringLiteral_20507/*"icon_friend"*/;
                                  goto LABEL_340;
                                case 7:
                                  gameObject = (__int64)this->fields.registButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.loginDataSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v142 = &StringLiteral_20630/*"img_blacklist_requestdate"*/;
                                  goto LABEL_340;
                                case 8:
                                  gameObject = (__int64)this->fields.removeButton2;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.registButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                                  gameObject = (__int64)this->fields.loginDataSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v142 = &StringLiteral_20629/*"img_blacklist_recorddate"*/;
                                  goto LABEL_340;
                                case 9:
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  *(UnityEngine_Vector3_o *)&v143 = UnityEngine_Transform__get_localPosition(
                                                                      (UnityEngine_Transform_o *)gameObject,
                                                                      0LL);
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v145 = v143;
                                  v146 = v144;
                                  gameObject = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v188.fields.y = 0.0;
                                  v188.fields.x = v145;
                                  v188.fields.z = v146;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)gameObject,
                                    v188,
                                    0LL);
                                  gameObject = (__int64)this->fields.offerButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.removeMarkSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                  gameObject = (__int64)this->fields.removeMarkSpr;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v142 = &StringLiteral_20506/*"icon_follow"*/;
LABEL_340:
                                  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v142, 0LL);
                                  goto LABEL_341;
                                default:
                                  goto LABEL_341;
                              }
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_395:
              sub_1C2209C(gameObject, skillInfoUiWidget);
            }
          }
        }
      }
LABEL_183:
      sub_1C22094(gameObject, skillInfoUiWidget);
    }
  }
  else
  {
    if ( v8 )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v14 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
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

  if ( (byte_4BD7649 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7649 = 1;
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
      sub_1C22094(removeButton, v6);
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
    sub_1C22094(messageDispButton, isHide);
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
  float v7; // s0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  float v9; // s3
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float v13; // s3
  float v14; // s1
  float v15; // s2
  UILabel_o *messageLabel; // x21
  System_String_o **v17; // x8

  v5 = item;
  v6 = this;
  if ( (byte_4BD7648 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17814/*"btn_message_on"*/);
    sub_1C21E38(&StringLiteral_6669/*"FRIEND_HIDE_MESSAGE"*/);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C21E38(&StringLiteral_17813/*"btn_message_off"*/);
    byte_4BD7648 = 1;
  }
  if ( !v5 )
    goto LABEL_22;
  v7 = 0.73725;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v7 = 1.0;
  if ( !this )
    goto LABEL_22;
  otherUserGameEntity = v5->fields.otherUserGameEntity;
  v9 = 1.0;
  v10 = v7;
  v11 = v7;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v7, 0LL);
  v12 = 0.50196;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v12 = 0.0;
  if ( !this )
    goto LABEL_22;
  v13 = 1.0;
  v14 = v12;
  v15 = v12;
  UILabel__set_effectColor((UILabel_o *)this, *(UnityEngine_Color_o *)&v12, 0LL);
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
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6669/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1C22094(this, item);
  }
  v17 = (System_String_o **)&StringLiteral_17813/*"btn_message_off"*/;
  if ( !isDisp )
    v17 = (System_String_o **)&StringLiteral_17814/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v17, 0LL);
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
  if ( (byte_4BD764A & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C21E38(&OptionManager_TypeInfo);
    byte_4BD764A = 1;
  }
  if ( !item )
LABEL_15:
    sub_1C22094(this, item);
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