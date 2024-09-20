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

  if ( (byte_4A564EF & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&SkillIconComponent___TypeInfo);
    sub_1B885B0(&UIIconLabel___TypeInfo);
    byte_4A564EF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1B88554(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1B88658(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1B88554(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1B88658(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1B88554(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1B88554(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1B88658(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1B88554(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1B88658(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1B88554(&this->fields.appendSkillLevelIconLabelList, v9);
  v10 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  if ( !v10 )
    sub_1B8880C(0LL, v11);
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[1] = 95, max_length == 1) )
    sub_1B88814(v10, v10);
  v10->m_Items[2] = 46;
  this->fields.OFFER_BUTTON_SIZE = v10;
  sub_1B88554(&this->fields.OFFER_BUTTON_SIZE, v10);
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

  if ( (byte_4A564E9 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20178/*"icon_skill_mini"*/);
    sub_1B885B0(&StringLiteral_20320/*"img_friend_skill"*/);
    sub_1B885B0(&StringLiteral_20083/*"icon_append_mini"*/);
    sub_1B885B0(&StringLiteral_20319/*"img_friend_appendskill"*/);
    byte_4A564E9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1B88554(&this->fields.switchSkillUIList, v3);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_20178/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v7 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_20320/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v9 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20083/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v11 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20319/*"img_friend_appendskill"*/, 0LL);
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
  if ( (byte_4A564EE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A564EE = 1;
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
      sub_1B88814(this, item);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1B8880C(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
  int v30; // w22
  __int64 v31; // x0
  __int64 v32; // x0
  ServantLimitAddMaster_o *v33; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  Il2CppObject *Master_object; // x0
  __int64 v36; // x26
  __int64 v37; // x27
  ServantLimitImageMaster_o *v38; // x25
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *OverwriteTDName; // x0
  System_String_o **v41; // x9
  bool v42; // cc
  Il2CppObject *v43; // x22
  System_String_o *v44; // x23
  System_String_o *v45; // x0
  System_String_o *v46; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v49; // x22
  UnityEngine_Object_o *v50; // x22
  int32_t v51; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v53; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v55; // x23
  int64_t createdAt; // x0
  System_String_o *v57; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v59; // x0
  const MethodInfo *v60; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v62; // x8
  int v63; // w9
  unsigned __int64 v64; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v66; // x14
  struct SkillIconComponent_array *v67; // x8
  __int64 v68; // x22
  struct UnityEngine_GameObject_array *v69; // x8
  const MethodInfo *v70; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v72; // x23
  __int64 v73; // x24
  __int64 v74; // x22
  __int64 v75; // x23
  unsigned __int64 v76; // x24
  struct UnityEngine_GameObject_array *v77; // x9
  int32_t *v78; // x25
  struct SkillIconComponent_array *v79; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v82; // x8
  __int64 v83; // x9
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v89; // x8
  int v90; // w9
  signed __int64 v91; // x10
  unsigned __int64 v92; // x14
  SkillInfo_o *v93; // x14
  struct SkillIconComponent_array *v94; // x8
  __int64 v95; // x22
  struct UnityEngine_GameObject_array *v96; // x8
  unsigned __int64 v97; // x22
  signed __int64 v98; // x23
  struct UnityEngine_GameObject_array *v99; // x9
  SkillInfo_o *v100; // x25
  struct SkillIconComponent_array *v101; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  __int64 v103; // x9
  int v104; // w8
  struct UnityEngine_GameObject_array *v105; // x9
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v107; // x8
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v115; // x22
  __int64 v116; // x23
  __int64 v117; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v119; // w23
  float v120; // s0
  float v121; // s2
  float v122; // s8
  float v123; // s9
  UISprite_o *offerBackSprite; // x21
  struct System_Int32_array *OFFER_BUTTON_SIZE; // x8
  struct System_Int32_array *v126; // x8
  UnityEngine_GameObject_o *v127; // x0
  struct System_Int32_array *v128; // x8
  struct System_Int32_array *v129; // x8
  UnityEngine_GameObject_o *v130; // x0
  struct System_Int32_array *v131; // x8
  struct System_Int32_array *v132; // x8
  UnityEngine_GameObject_o *v133; // x0
  UnityEngine_GameObject_o *v134; // x0
  struct System_Int32_array *v135; // x8
  struct System_Int32_array *v136; // x8
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_GameObject_o *v138; // x0
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v140; // x0
  __int64 *v141; // x8
  float v142; // s0
  float v143; // s2
  float v144; // s8
  float v145; // s9
  OtherUserGameEntity_o *v146; // x21
  int32_t Kind_37688668; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v150; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v152; // x2
  float v153; // s0
  float v154; // s8
  float v155; // s0
  float v156; // s9
  UnityEngine_GameObject_o *v157; // x0
  float LocalPositionX; // s0
  float v159; // s10
  UnityEngine_GameObject_o *v160; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v162; // x8
  __int64 v163; // x8
  struct OtherUserGameEntity_o *v164; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  Il2CppObject **v169; // x9
  Il2CppObject *v170; // x21
  Il2CppObject *v171; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UnityEngine_GameObject_o *v173; // x20
  BalanceConfig_c *v174; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v176; // x0
  UnityEngine_GameObject_o *v177; // x0
  UnityEngine_GameObject_o *v178; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v180; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A564EA & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Grade_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20270/*"img_blacklist_requestdate"*/);
    sub_1B885B0(&StringLiteral_17484/*"btn_bg_27_2"*/);
    sub_1B885B0(&StringLiteral_6366/*"FFFFFF"*/);
    sub_1B885B0(&StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1B885B0(&StringLiteral_17485/*"btn_bg_29_2"*/);
    sub_1B885B0(&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/);
    sub_1B885B0(&StringLiteral_17483/*"btn_bg_26_2"*/);
    sub_1B885B0(&StringLiteral_20269/*"img_blacklist_recorddate"*/);
    sub_1B885B0(&StringLiteral_6365/*"FFFF00"*/);
    sub_1B885B0(&StringLiteral_9298/*"NO_ENTRY_NAME"*/);
    sub_1B885B0(&StringLiteral_9322/*"NP_COLOR_NAME"*/);
    sub_1B885B0(&StringLiteral_16027/*"[{0}]+{1}[-]"*/);
    sub_1B885B0(&StringLiteral_6493/*"FRIEND_BUTTON_CANCEL"*/);
    sub_1B885B0(&StringLiteral_20153/*"icon_friend"*/);
    sub_1B885B0(&StringLiteral_20152/*"icon_follow"*/);
    byte_4A564EA = 1;
  }
  tdInfo = 0LL;
  v180 = 0LL;
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
        v73 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v184.fields.currentCryptoKey = v73;
        *(_QWORD *)&v184.fields.fakeValue = v72;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v184, 0LL) )
        {
LABEL_36:
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
        goto LABEL_183;
      ServantFaceIconComponent__Set_38133256(
        (ServantFaceIconComponent_o *)gameObject,
        v18,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        v13,
        0,
        0LL);
      FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v19);
      playerNameLabel = this->fields.playerNameLabel;
      if ( (byte_4A564E4 & 1) == 0 )
      {
        gameObject = sub_1B885B0(&StringLiteral_19052/*"error"*/);
        byte_4A564E4 = 1;
      }
      if ( !playerNameLabel )
        goto LABEL_183;
      otherUserGameEntity = item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
        p_userName = &otherUserGameEntity->fields.userName;
      else
        p_userName = (System_String_o **)&StringLiteral_19052/*"error"*/;
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
      UIIconLabel__Set_38235604((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
      servantNameLabel = this->fields.servantNameLabel;
      gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v26);
      if ( !servantNameLabel )
        goto LABEL_183;
      UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v27);
      TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v28);
      if ( item->fields.servantEntity )
      {
        v30 = TreasureDeviceLevelIcon;
        v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
          v31 = sub_1BDA48C();
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
        if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
          v32 = sub_1BDA48C();
        gameObject = **(_QWORD **)(v32 + 184);
        if ( !gameObject )
          goto LABEL_183;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        if ( !v18 )
          goto LABEL_183;
        v33 = (ServantLimitAddMaster_o *)gameObject;
        FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v18, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v18, 0LL) )
        {
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_183;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v37 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        v38 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v183.fields.currentCryptoKey = v37;
        *(_QWORD *)&v183.fields.fakeValue = v36;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v183, 0LL);
        if ( !v38 )
          goto LABEL_183;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v38,
                                       gameObject,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18->fields.svtId, 0LL);
        if ( !tdInfo || !v33 )
          goto LABEL_183;
        OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                            v33,
                            gameObject,
                            ServantLimitCountSealAfter,
                            tdInfo->fields.name,
                            tdInfo->fields.lv,
                            0LL);
        v41 = (System_String_o **)&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/;
        v42 = v30 <= 1;
        v43 = (Il2CppObject *)OverwriteTDName;
        if ( v42 )
          v41 = (System_String_o **)&StringLiteral_9322/*"NP_COLOR_NAME"*/;
        v44 = *v41;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v45 = LocalizationManager__Get(v44, 0LL);
        gameObject = (__int64)System_String__Format(v45, v43, 0LL);
        if ( !tdInfo )
          goto LABEL_183;
        v46 = (System_String_o *)gameObject;
        svtNpTitleLabel = this->fields.svtNpTitleLabel;
        gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
        if ( !svtNpTitleLabel )
          goto LABEL_183;
        UIRangeLabel__Set(svtNpTitleLabel, v46, (System_String_o *)gameObject, 0, 0, 0LL);
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
        v49 = this->fields.svtNpTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NO_ENTRY_NAME"*/, 0LL);
        if ( !v49 )
          goto LABEL_183;
        UIRangeLabel__Set(v49, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
        v50 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
        {
          gameObject = (__int64)this->fields.svtNpCommandCard;
          if ( !gameObject )
            goto LABEL_183;
          ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
        }
      }
      v51 = item->fields.kind;
      if ( v51 == 7 )
      {
        loginDataLabel = this->fields.loginDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
        v55 = v57;
        if ( userFriendRequestHistoryEntity )
        {
          createdAt = userFriendRequestHistoryEntity->fields.createdAt;
          goto LABEL_105;
        }
      }
      else if ( v51 == 8 )
      {
        loginDataLabel = this->fields.loginDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        userBlacklistEntity = item->fields.userBlacklistEntity;
        v55 = v53;
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
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( item->fields.otherUserGameEntity )
        {
          createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
          goto LABEL_105;
        }
      }
      createdAt = 0LL;
LABEL_105:
      v59 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
      gameObject = (__int64)System_String__Format(v55, v59, 0LL);
      if ( !loginDataLabel )
        goto LABEL_183;
      UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
      if ( item->fields.servantEntity )
      {
        gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v60);
        skillIconList = this->fields.skillIconList;
        if ( !skillIconList )
          goto LABEL_183;
        v62 = *(_QWORD *)&skillIconList->max_length;
        if ( v62 << 32 >= 1 )
        {
          v63 = 0;
          v64 = 0LL;
          while ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( (__int64)v64 < (int)max_length )
            {
              if ( v64 >= max_length )
                goto LABEL_395;
              v66 = skillInfoList->m_Items[v64];
              if ( v66 && v66->fields.id >= 1 )
                v63 = v64 + 1;
            }
            if ( (__int64)++v64 >= (int)v62 )
              goto LABEL_135;
          }
          goto LABEL_183;
        }
        v63 = 0;
LABEL_135:
        if ( (int)v62 >= 1 )
        {
          v74 = v63;
          v75 = 4LL;
          do
          {
            v76 = v75 - 4;
            if ( v75 - 4 >= v74 )
            {
              skillBaseList = this->fields.skillBaseList;
              if ( !skillBaseList )
                goto LABEL_183;
              if ( v76 >= skillBaseList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillBaseList->obj.klass + v75);
              if ( !gameObject )
                goto LABEL_183;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_183;
              if ( v76 >= skillInfoList->max_length )
                goto LABEL_395;
              v77 = this->fields.skillBaseList;
              if ( !v77 )
                goto LABEL_183;
              if ( v76 >= v77->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&v77->obj.klass + v75);
              if ( !gameObject )
                goto LABEL_183;
              v78 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v75);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              v79 = this->fields.skillIconList;
              if ( !v79 )
                goto LABEL_183;
              if ( v76 >= v79->max_length )
                goto LABEL_395;
              if ( !v78 )
                goto LABEL_183;
              gameObject = *((_QWORD *)&v79->obj.klass + v75);
              if ( !gameObject )
                goto LABEL_183;
              SkillIconComponent__Set_38234800(
                (SkillIconComponent_o *)gameObject,
                v78[4],
                v78[5],
                v78[12],
                v78[13],
                0LL);
              skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
              if ( !skillLevelIconLabelList )
                goto LABEL_183;
              if ( v76 >= skillLevelIconLabelList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v75);
              if ( !gameObject )
                goto LABEL_183;
              UIIconLabel__Set_38235604((UIIconLabel_o *)gameObject, 48, v78[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
            v82 = this->fields.skillIconList;
            if ( !v82 )
              goto LABEL_183;
            v83 = v75 - 3;
            ++v75;
          }
          while ( v83 < (int)v82->max_length );
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
              v84 = *(_QWORD *)(gameObject + 16);
              v85 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(gameObject + 28);
              if ( v84 )
              {
                v86 = *(int *)(gameObject + 24);
                if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                }
                else
                {
                  v87 = v84 + 8 * v86;
                  *(_DWORD *)(gameObject + 24) = v86 + 1;
                  *(_QWORD *)(v87 + 32) = skillInfoUiWidget;
                  gameObject = sub_1B88554(v87 + 32, skillInfoUiWidget);
                }
                goto LABEL_164;
              }
            }
          }
        }
      }
      else
      {
        v67 = this->fields.skillIconList;
        if ( v67 )
        {
          v68 = 0LL;
          while ( (int)v68 < (signed int)v67->max_length )
          {
            v69 = this->fields.skillBaseList;
            if ( !v69 )
              goto LABEL_183;
            if ( (unsigned int)v68 >= v69->max_length )
              goto LABEL_395;
            gameObject = (__int64)v69->m_Items[v68];
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              v67 = this->fields.skillIconList;
              ++v68;
              if ( v67 )
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
                gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v180, v70);
                appendSkillIconList = this->fields.appendSkillIconList;
                if ( !appendSkillIconList )
                  goto LABEL_183;
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
                    if ( v180 )
                    {
                      v92 = v180->max_length;
                      if ( v91 < (int)v92 )
                      {
                        if ( v91 >= v92 )
                          goto LABEL_395;
                        v93 = v180->m_Items[v91];
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
                  v97 = 0LL;
                  v98 = v90;
                  do
                  {
                    if ( (__int64)v97 >= v98 )
                    {
                      appendSkillBaseList = this->fields.appendSkillBaseList;
                      if ( !appendSkillBaseList )
                        goto LABEL_183;
                      if ( v97 >= appendSkillBaseList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillBaseList->m_Items[v97];
                      if ( !gameObject )
                        goto LABEL_183;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    }
                    else
                    {
                      if ( !v180 )
                        goto LABEL_183;
                      if ( v97 >= v180->max_length )
                        goto LABEL_395;
                      v99 = this->fields.appendSkillBaseList;
                      if ( !v99 )
                        goto LABEL_183;
                      if ( v97 >= v99->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)v99->m_Items[v97];
                      if ( !gameObject )
                        goto LABEL_183;
                      v100 = v180->m_Items[v97];
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                      v101 = this->fields.appendSkillIconList;
                      if ( !v101 )
                        goto LABEL_183;
                      if ( v97 >= v101->max_length )
                        goto LABEL_395;
                      if ( !v100 )
                        goto LABEL_183;
                      gameObject = (__int64)v101->m_Items[v97];
                      if ( !gameObject )
                        goto LABEL_183;
                      SkillIconComponent__Set_38234800(
                        (SkillIconComponent_o *)gameObject,
                        v100->fields.id,
                        v100->fields.lv,
                        v100->fields.strengthStatus,
                        v100->fields.skillRecord,
                        0LL);
                      appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                      if ( !appendSkillLevelIconLabelList )
                        goto LABEL_183;
                      if ( v97 >= appendSkillLevelIconLabelList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillLevelIconLabelList->m_Items[v97];
                      if ( !gameObject )
                        goto LABEL_183;
                      UIIconLabel__Set_38235604(
                        (UIIconLabel_o *)gameObject,
                        48,
                        v100->fields.lv,
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
                        v103 = *(_QWORD *)(gameObject + 184);
                        v104 = *(_DWORD *)(v103 + 1180);
                        if ( v97 )
                          v104 += *(_DWORD *)(v103 + 1184) * v97;
                        v105 = this->fields.appendSkillBaseList;
                        if ( !v105 )
                          goto LABEL_183;
                        if ( v97 >= v105->max_length )
                          goto LABEL_395;
                        GameObjectExtensions__SetLocalPositionX(v105->m_Items[v97], (float)v104, 0LL);
                      }
                    }
                    v107 = this->fields.appendSkillIconList;
                    if ( !v107 )
                      goto LABEL_183;
                  }
                  while ( (__int64)++v97 < (int)v107->max_length );
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
                v108 = *(_QWORD *)(gameObject + 16);
                v109 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(gameObject + 28);
                if ( !v108 )
                  goto LABEL_183;
                v110 = *(int *)(gameObject + 24);
                if ( (unsigned int)v110 >= *(_DWORD *)(v108 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
                }
                else
                {
                  v111 = v108 + 8 * v110;
                  *(_DWORD *)(gameObject + 24) = v110 + 1;
                  *(_QWORD *)(v111 + 32) = skillInfoUiWidget;
                  sub_1B88554(v111 + 32, skillInfoUiWidget);
                }
              }
              else
              {
                v94 = this->fields.appendSkillIconList;
                if ( !v94 )
                  goto LABEL_183;
                v95 = 0LL;
                while ( (int)v95 < (signed int)v94->max_length )
                {
                  v96 = this->fields.appendSkillBaseList;
                  if ( !v96 )
                    goto LABEL_183;
                  if ( (unsigned int)v95 >= v96->max_length )
                    goto LABEL_395;
                  gameObject = (__int64)v96->m_Items[v95];
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    v94 = this->fields.appendSkillIconList;
                    ++v95;
                    if ( v94 )
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
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
                v115 = this->fields.svtCommandCardList;
                if ( v16 & 1 | (servantEntity == 0LL) )
                {
                  if ( !v115 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
                }
                else
                {
                  v117 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
                  v116 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v185.fields.currentCryptoKey = v117;
                  *(_QWORD *)&v185.fields.fakeValue = v116;
                  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v185, 0LL);
                  if ( !v18 )
                    goto LABEL_183;
                  commandCardParam = v18->fields.commandCardParam;
                  v119 = gameObject;
                  gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v18, 0LL);
                  if ( !v115 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Set_38135136(
                    v115,
                    v119,
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
              *(UnityEngine_Vector3_o *)&v120 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.removeButton;
              if ( !gameObject )
                goto LABEL_183;
              v122 = v120;
              v123 = v121;
              gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_183;
              v186.fields.y = -45.0;
              v186.fields.x = v122;
              v186.fields.z = v123;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v186, 0LL);
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
                             (System_String_o *)StringLiteral_17483/*"btn_bg_26_2"*/,
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
                v126 = this->fields.OFFER_BUTTON_SIZE;
                if ( !v126 )
                  goto LABEL_183;
                if ( v126->max_length > 1 )
                {
                  gameObject = (__int64)this->fields.offerBackSprite;
                  if ( !gameObject )
                    goto LABEL_183;
                  UIWidget__set_height((UIWidget_o *)gameObject, v126->m_Items[2], 0LL);
                  gameObject = (__int64)this->fields.offerButton;
                  if ( !gameObject )
                    goto LABEL_183;
                  v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v127, 343.5, 0LL);
                  gameObject = AtlasManager__SetDownloadCommonSprite(
                                 this->fields.removeBackSprite,
                                 (System_String_o *)StringLiteral_17484/*"btn_bg_27_2"*/,
                                 0LL);
                  v128 = this->fields.OFFER_BUTTON_SIZE;
                  if ( !v128 )
                    goto LABEL_183;
                  if ( v128->max_length )
                  {
                    gameObject = (__int64)this->fields.removeBackSprite;
                    if ( !gameObject )
                      goto LABEL_183;
                    UIWidget__set_width((UIWidget_o *)gameObject, v128->m_Items[1], 0LL);
                    v129 = this->fields.OFFER_BUTTON_SIZE;
                    if ( !v129 )
                      goto LABEL_183;
                    if ( v129->max_length > 1 )
                    {
                      gameObject = (__int64)this->fields.removeBackSprite;
                      if ( !gameObject )
                        goto LABEL_183;
                      UIWidget__set_height((UIWidget_o *)gameObject, v129->m_Items[2], 0LL);
                      gameObject = (__int64)this->fields.removeButton;
                      if ( !gameObject )
                        goto LABEL_183;
                      v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      GameObjectExtensions__SetLocalPositionX(v130, 343.5, 0LL);
                      gameObject = AtlasManager__SetDownloadCommonSprite(
                                     this->fields.registBackSprite,
                                     (System_String_o *)StringLiteral_17483/*"btn_bg_26_2"*/,
                                     0LL);
                      v131 = this->fields.OFFER_BUTTON_SIZE;
                      if ( !v131 )
                        goto LABEL_183;
                      if ( v131->max_length )
                      {
                        gameObject = (__int64)this->fields.registBackSprite;
                        if ( !gameObject )
                          goto LABEL_183;
                        UIWidget__set_width((UIWidget_o *)gameObject, v131->m_Items[1], 0LL);
                        v132 = this->fields.OFFER_BUTTON_SIZE;
                        if ( !v132 )
                          goto LABEL_183;
                        if ( v132->max_length > 1 )
                        {
                          gameObject = (__int64)this->fields.registBackSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          UIWidget__set_height((UIWidget_o *)gameObject, v132->m_Items[2], 0LL);
                          gameObject = (__int64)this->fields.registButton;
                          if ( !gameObject )
                            goto LABEL_183;
                          v133 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v133, 343.5, 0LL);
                          gameObject = (__int64)this->fields.registTitleSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v134, this->fields.BLACK_LIST_BUTTON_TITLE_POS_X, 0LL);
                          gameObject = AtlasManager__SetDownloadCommonSprite(
                                         this->fields.removeBackSprite2,
                                         (System_String_o *)StringLiteral_17484/*"btn_bg_27_2"*/,
                                         0LL);
                          v135 = this->fields.OFFER_BUTTON_SIZE;
                          if ( !v135 )
                            goto LABEL_183;
                          if ( v135->max_length )
                          {
                            gameObject = (__int64)this->fields.removeBackSprite2;
                            if ( !gameObject )
                              goto LABEL_183;
                            UIWidget__set_width((UIWidget_o *)gameObject, v135->m_Items[1], 0LL);
                            v136 = this->fields.OFFER_BUTTON_SIZE;
                            if ( !v136 )
                              goto LABEL_183;
                            if ( v136->max_length > 1 )
                            {
                              gameObject = (__int64)this->fields.removeBackSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              UIWidget__set_height((UIWidget_o *)gameObject, v136->m_Items[2], 0LL);
                              gameObject = (__int64)this->fields.removeButton2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v137 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(v137, 343.5, 0LL);
                              gameObject = (__int64)this->fields.removeTitleSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(
                                v138,
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
                                                          (System_String_o *)StringLiteral_6493/*"FRIEND_BUTTON_CANCEL"*/,
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
                                  v140 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v140,
                                    (float)this->fields.REJECT_BUTTON_POS_Y,
                                    0LL);
LABEL_341:
                                  v146 = item->fields.otherUserGameEntity;
                                  if ( !Grade_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
                                  Kind_37688668 = Grade__GetKind_37688668(v146, 0LL);
                                  SupportBgImage = Grade__GetSupportBgImage(Kind_37688668, 0LL);
                                  baseSpr = this->fields.baseSpr;
                                  v150 = SupportBgImage;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetGradeIcon(baseSpr, v150, 0LL);
                                  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( !UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
                                    goto LABEL_354;
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  LODWORD(v153) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v154 = v153;
                                  LODWORD(v155) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                                                (UserGradeComponent_o *)gameObject,
                                                                0LL);
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v156 = v155;
                                  v157 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  LocalPositionX = GameObjectExtensions__GetLocalPositionX(v157, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v159 = LocalPositionX;
                                  v160 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionX(
                                    v160,
                                    (float)(v156 * 0.5) + (float)(v154 + v159),
                                    0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_37688668, 0LL);
LABEL_354:
                                  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v152);
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
                                  v162 = *(_QWORD *)(gameObject + 96);
                                  if ( !v162 )
                                    goto LABEL_183;
                                  if ( !*(_DWORD *)(v162 + 24) )
                                    goto LABEL_395;
                                  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)gameObject,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          *(_DWORD *)(v162 + 32),
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_369;
                                  v163 = *(_QWORD *)(gameObject + 40);
                                  if ( v163 < 1 )
                                    goto LABEL_369;
                                  v164 = item->fields.otherUserGameEntity;
                                  if ( !v164 )
                                    goto LABEL_183;
                                  if ( v164->fields.pushUserSvtId != v163 )
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
                                    v169 = (Il2CppObject **)&StringLiteral_6365/*"FFFF00"*/;
                                  else
                                    v169 = (Il2CppObject **)&StringLiteral_6366/*"FFFFFF"*/;
                                  v170 = *v169;
                                  OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                                  v171 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                           int_TypeInfo,
                                                           &OpenClassBoardNum_k__BackingField,
                                                           v166,
                                                           v167,
                                                           v168);
                                  gameObject = (__int64)System_String__Format_61721404(
                                                          (System_String_o *)StringLiteral_16027/*"[{0}]+{1}[-]"*/,
                                                          v170,
                                                          v171,
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
                                  v173 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  v174 = BalanceConfig_TypeInfo;
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                    v174 = BalanceConfig_TypeInfo;
                                  }
                                  GameObjectExtensions__SetLocalPosition_33724016(
                                    v173,
                                    v174->static_fields->CLASS_BOARD_BUTTON_POS,
                                    0LL);
                                  classBoardBackSprite = this->fields.classBoardBackSprite;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetDownloadCommonSprite(
                                    classBoardBackSprite,
                                    (System_String_o *)StringLiteral_17485/*"btn_bg_29_2"*/,
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
                                  v176 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPosition_33724016(
                                    v176,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                                    0LL);
                                  gameObject = (__int64)this->fields.classBoardLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v177 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalScaleX(
                                    v177,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                                    0LL);
                                  gameObject = (__int64)this->fields.openClassBoardNumLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v178 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v178,
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
                                  v141 = &StringLiteral_20153/*"icon_friend"*/;
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
                                  v141 = &StringLiteral_20270/*"img_blacklist_requestdate"*/;
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
                                  v141 = &StringLiteral_20269/*"img_blacklist_recorddate"*/;
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
                                  *(UnityEngine_Vector3_o *)&v142 = UnityEngine_Transform__get_localPosition(
                                                                      (UnityEngine_Transform_o *)gameObject,
                                                                      0LL);
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v144 = v142;
                                  v145 = v143;
                                  gameObject = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v187.fields.y = 0.0;
                                  v187.fields.x = v144;
                                  v187.fields.z = v145;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)gameObject,
                                    v187,
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
                                  v141 = &StringLiteral_20152/*"icon_follow"*/;
LABEL_340:
                                  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v141, 0LL);
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
              sub_1B88814(gameObject, skillInfoUiWidget);
            }
          }
        }
      }
LABEL_183:
      sub_1B8880C(gameObject, skillInfoUiWidget);
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

  if ( (byte_4A564EC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A564EC = 1;
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
      sub_1B8880C(removeButton, v6);
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
    sub_1B8880C(messageDispButton, isHide);
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
  if ( (byte_4A564EB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17521/*"btn_message_on"*/);
    sub_1B885B0(&StringLiteral_6501/*"FRIEND_HIDE_MESSAGE"*/);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_17520/*"btn_message_off"*/);
    byte_4A564EB = 1;
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
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6501/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1B8880C(this, item);
  }
  v17 = (System_String_o **)&StringLiteral_17520/*"btn_message_off"*/;
  if ( !isDisp )
    v17 = (System_String_o **)&StringLiteral_17521/*"btn_message_on"*/;
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
  if ( (byte_4A564ED & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A564ED = 1;
  }
  if ( !item )
LABEL_15:
    sub_1B8880C(this, item);
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