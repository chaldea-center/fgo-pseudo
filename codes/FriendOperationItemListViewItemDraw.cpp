void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct SkillIconComponent_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UIIconLabel_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_GameObject_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct SkillIconComponent_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct UIIconLabel_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_48E6B14 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B00CCC(&SkillIconComponent___TypeInfo, v4);
    sub_1B00CCC(&UIIconLabel___TypeInfo, v5);
    byte_48E6B14 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1B00D74(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1B00D74(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v10, v11, v12);
  v13 = (struct UIIconLabel_array *)sub_1B00D74(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1B00D74(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillBaseList, (int32_t)v16, v17, v18);
  v19 = (struct SkillIconComponent_array *)sub_1B00D74(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v19;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillIconList, (int32_t)v19, v20, v21);
  v22 = (struct UIIconLabel_array *)sub_1B00D74(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v22;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v22, v23, v24);
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
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v14; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v16; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v20; // x19

  if ( (byte_48E6B0E & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_19906/*"icon_skill_mini"*/, v6);
    sub_1B00CCC(&StringLiteral_20045/*"img_friend_skill"*/, v7);
    sub_1B00CCC(&StringLiteral_19812/*"icon_append_mini"*/, v8);
    sub_1B00CCC(&StringLiteral_20044/*"img_friend_appendskill"*/, v9);
    byte_48E6B0E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v10, v11, v12);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_19906/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v16 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20045/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_19812/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_20044/*"img_friend_appendskill"*/, 0LL);
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
  struct ServantNpCommandCardComponent_o *svtNpCommandCard; // x8
  struct UISprite_o *v19; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9

  v6 = this;
  if ( (byte_48E6B13 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E6B13 = 1;
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
      sub_1B00F30(this, item);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1B00F28(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
        svtNpCommandCard = this->fields.svtNpCommandCard;
        if ( !svtNpCommandCard )
          goto LABEL_23;
        if ( !LODWORD(svtNpCommandCard->fields.m_CancellationTokenSource) )
          goto LABEL_95;
        this = (FriendOperationItemListViewItemDraw_o *)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)this,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          (int32_t)svtNpCommandCard->fields.cardSprite,
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
  UnityEngine_Object_o *rangeSprite; // x22
  bool v35; // w0
  Il2CppObject *skillInfoUiWidget; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  int32_t kind; // w8
  bool v40; // w22
  UnityEngine_Object_o *v41; // x20
  bool v42; // w1
  __int64 v43; // x8
  char v44; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v46; // x21
  const MethodInfo *v47; // x2
  UILabel_o *playerNameLabel; // x22
  UIIconLabel_o *playerLevelIconLabel; // x22
  UIRangeLabel_o *servantNameLabel; // x22
  int32_t TreasureDeviceLevelIcon; // w22
  __int64 v52; // x0
  __int64 v53; // x0
  ServantLimitAddMaster_o *v54; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  Il2CppObject *Master_object; // x0
  __int64 v57; // x26
  __int64 v58; // x27
  ServantLimitImageMaster_o *v59; // x25
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *OverwriteTDName; // x0
  System_String_o **v62; // x9
  bool v63; // cc
  Il2CppObject *v64; // x22
  System_String_o *v65; // x23
  System_String_o *v66; // x0
  System_String_o *v67; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v70; // x22
  UnityEngine_Object_o *v71; // x22
  int32_t v72; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v74; // x23
  int64_t friendReqDate; // x0
  Il2CppObject *v76; // x0
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v78; // x8
  int v79; // w9
  unsigned __int64 v80; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v82; // x14
  struct SkillIconComponent_array *v83; // x8
  __int64 v84; // x22
  struct UnityEngine_GameObject_array *v85; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v87; // x23
  __int64 v88; // x24
  __int64 v89; // x22
  __int64 v90; // x23
  unsigned __int64 v91; // x24
  struct UnityEngine_GameObject_array *v92; // x9
  int32_t *v93; // x25
  struct SkillIconComponent_array *v94; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v97; // x8
  __int64 v98; // x9
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x8
  _QWORD *v102; // x9
  __int64 klass_low; // x10
  __int64 v104; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v106; // x8
  int v107; // w9
  signed __int64 v108; // x10
  unsigned __int64 v109; // x14
  SkillInfo_o *v110; // x14
  struct SkillIconComponent_array *v111; // x8
  __int64 v112; // x22
  struct UnityEngine_GameObject_array *v113; // x8
  __int64 v114; // x22
  __int64 v115; // x23
  unsigned __int64 v116; // x24
  struct UnityEngine_GameObject_array *v117; // x9
  int32_t *v118; // x25
  struct SkillIconComponent_array *v119; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v122; // x8
  __int64 v123; // x9
  int32_t v124; // w2
  int32_t v125; // w3
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantCommandCardListComponent_o *v132; // x22
  UnityEngine_GameObject_c *klass; // x23
  __int64 v134; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v136; // w23
  float v137; // s0
  float v138; // s2
  float v139; // s8
  float v140; // s9
  UILabel_o *cancelLabel; // x21
  __int64 *v142; // x8
  float v143; // s0
  float v144; // s2
  float v145; // s8
  float v146; // s9
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  int32_t Kind_36489764; // w21
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
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v175; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E6B0F & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, item);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1B00CCC(&DataManager_TypeInfo, v10);
    sub_1B00CCC(&Grade_TypeInfo, v11);
    sub_1B00CCC(&int_TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v15);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v16);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v17);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B00CCC(&OptionManager_TypeInfo, v19);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B00CCC(&StringLiteral_19996/*"img_blacklist_requestdate"*/, v22);
    sub_1B00CCC(&StringLiteral_6301/*"FFFFFF"*/, v23);
    sub_1B00CCC(&StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, v24);
    sub_1B00CCC(&StringLiteral_9225/*"NP_MAX_COLOR_NAME"*/, v25);
    sub_1B00CCC(&StringLiteral_19995/*"img_blacklist_recorddate"*/, v26);
    sub_1B00CCC(&StringLiteral_6300/*"FFFF00"*/, v27);
    sub_1B00CCC(&StringLiteral_9195/*"NO_ENTRY_NAME"*/, v28);
    sub_1B00CCC(&StringLiteral_9219/*"NP_COLOR_NAME"*/, v29);
    sub_1B00CCC(&StringLiteral_15796/*"[{0}]+{1}[-]"*/, v30);
    sub_1B00CCC(&StringLiteral_6428/*"FRIEND_BUTTON_CANCEL"*/, v31);
    sub_1B00CCC(&StringLiteral_19881/*"icon_friend"*/, v32);
    sub_1B00CCC(&StringLiteral_19880/*"icon_follow"*/, v33);
    byte_48E6B0F = 1;
  }
  tdInfo = 0LL;
  v175 = 0LL;
  skillInfoList = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
  if ( item )
  {
    if ( v35 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_171;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_171;
      UnityEngine_GameObject__SetActive(gameObject, mode == 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_171;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_171;
      UnityEngine_GameObject__SetActive(gameObject, item->fields.isTerminationSpace, 0LL);
    }
    if ( !mode )
      return;
    kind = item->fields.kind;
    v40 = kind == 9 || kind == 3;
    gameObject = (UnityEngine_GameObject_o *)item->fields.otherUserGameEntity;
    if ( !gameObject )
      goto LABEL_171;
    v43 = *(_QWORD *)&gameObject[3].fields.m_CachedPtr;
    if ( !v43 )
      goto LABEL_171;
    if ( !*(_DWORD *)(v43 + 24) )
      goto LABEL_331;
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
        goto LABEL_36;
      equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
      if ( !equipTarget1 )
        goto LABEL_36;
      v88 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v87 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v179.fields.currentCryptoKey = v88;
      *(_QWORD *)&v179.fields.fakeValue = v87;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v179, 0LL) )
      {
LABEL_36:
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v46, 0LL);
        v44 = 0;
      }
      else
      {
        v46 = 0LL;
        v44 = 1;
      }
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.servantFaceIcon;
    if ( !gameObject )
      goto LABEL_171;
    ServantFaceIconComponent__Set_37012136(
      (ServantFaceIconComponent_o *)gameObject,
      v46,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      v40,
      0,
      0LL);
    FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v47);
    playerNameLabel = this->fields.playerNameLabel;
    gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_PlayerNameText(item, 0LL);
    if ( !playerNameLabel )
      goto LABEL_171;
    UILabel__set_text(playerNameLabel, (System_String_o *)gameObject, 0LL);
    playerLevelIconLabel = this->fields.playerLevelIconLabel;
    gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_PlayerLevel(item, 0LL);
    if ( !playerLevelIconLabel )
      goto LABEL_171;
    UIIconLabel__Set_37024000(playerLevelIconLabel, 2, (int32_t)gameObject, 0, 0, 0LL, 0, 0, 0, 0LL);
    servantNameLabel = this->fields.servantNameLabel;
    gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtNameText(item, 0LL);
    if ( !servantNameLabel )
      goto LABEL_171;
    UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
    FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, 0LL);
    TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, 0LL);
    if ( FriendOperationItemListViewItem__get_SvtEntity(item, 0LL) )
    {
      v52 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1B52BA8(v52);
      v53 = *(_QWORD *)(*(_QWORD *)(v52 + 192) + 16LL);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1B52BA8(v53);
      gameObject = **(UnityEngine_GameObject_o ***)(v53 + 184);
      if ( !gameObject )
        goto LABEL_171;
      gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)gameObject,
                                                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !v46 )
        goto LABEL_171;
      v54 = (ServantLimitAddMaster_o *)gameObject;
      FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v46, 0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v46, 0LL) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_171;
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !gameObject )
          goto LABEL_171;
        FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                       (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                       v46->fields.svtId,
                                       FriendNpNameDispLimitCount,
                                       0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v58 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
      v57 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
      v59 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v178.fields.currentCryptoKey = v58;
      *(_QWORD *)&v178.fields.fakeValue = v57;
      gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                 v178,
                                                 0LL);
      if ( !v59 )
        goto LABEL_171;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v59,
                                     (int32_t)gameObject,
                                     FriendNpNameDispLimitCount,
                                     0LL);
      gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                 v46->fields.svtId,
                                                 0LL);
      if ( !tdInfo || !v54 )
        goto LABEL_171;
      OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                          v54,
                          (int32_t)gameObject,
                          ServantLimitCountSealAfter,
                          tdInfo->fields.name,
                          tdInfo->fields.lv,
                          0LL);
      v62 = (System_String_o **)&StringLiteral_9225/*"NP_MAX_COLOR_NAME"*/;
      v63 = TreasureDeviceLevelIcon <= 1;
      v64 = (Il2CppObject *)OverwriteTDName;
      if ( v63 )
        v62 = (System_String_o **)&StringLiteral_9219/*"NP_COLOR_NAME"*/;
      v65 = *v62;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get(v65, 0LL);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v66, v64, 0LL);
      if ( !tdInfo )
        goto LABEL_171;
      v67 = (System_String_o *)gameObject;
      svtNpTitleLabel = this->fields.svtNpTitleLabel;
      gameObject = (UnityEngine_GameObject_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
      if ( !svtNpTitleLabel )
        goto LABEL_171;
      UIRangeLabel__Set(svtNpTitleLabel, v67, (System_String_o *)gameObject, 0, 0, 0LL);
      svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.svtNpCommandCard;
        if ( !gameObject )
          goto LABEL_171;
        ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)gameObject, tdInfo, 0LL);
      }
    }
    else
    {
      v70 = this->fields.svtNpTitleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9195/*"NO_ENTRY_NAME"*/, 0LL);
      if ( !v70 )
        goto LABEL_171;
      UIRangeLabel__Set(v70, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      v71 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.svtNpCommandCard;
        if ( !gameObject )
          goto LABEL_171;
        ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
      }
    }
    v72 = item->fields.kind;
    if ( v72 == 7 )
    {
      loginDataLabel = this->fields.loginDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
      friendReqDate = FriendOperationItemListViewItem__get_friendReqDate(item, 0LL);
    }
    else if ( v72 == 8 )
    {
      loginDataLabel = this->fields.loginDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
      friendReqDate = FriendOperationItemListViewItem__get_blacklistRegistDate(item, 0LL);
    }
    else
    {
      loginDataLabel = this->fields.loginDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
      friendReqDate = FriendOperationItemListViewItem__get_LoginTime(item, 0LL);
    }
    v76 = (Il2CppObject *)LocalizationManager__GetBeforeTime(friendReqDate, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v74, v76, 0LL);
    if ( !loginDataLabel )
      goto LABEL_171;
    UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtEntity(item, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
      skillIconList = this->fields.skillIconList;
      if ( !skillIconList )
        goto LABEL_171;
      v78 = *(_QWORD *)&skillIconList->max_length;
      if ( v78 << 32 >= 1 )
      {
        v79 = 0;
        v80 = 0LL;
        while ( skillInfoList )
        {
          max_length = skillInfoList->max_length;
          if ( (__int64)v80 < (int)max_length )
          {
            if ( v80 >= max_length )
              goto LABEL_331;
            v82 = skillInfoList->m_Items[v80];
            if ( v82 && v82->fields.id >= 1 )
              v79 = v80 + 1;
          }
          if ( (__int64)++v80 >= (int)v78 )
            goto LABEL_123;
        }
        goto LABEL_171;
      }
      v79 = 0;
LABEL_123:
      if ( (int)v78 >= 1 )
      {
        v89 = v79;
        v90 = 4LL;
        do
        {
          v91 = v90 - 4;
          if ( v90 - 4 >= v89 )
          {
            skillBaseList = this->fields.skillBaseList;
            if ( !skillBaseList )
              goto LABEL_171;
            if ( v91 >= skillBaseList->max_length )
              goto LABEL_331;
            gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&skillBaseList->obj.klass + v90);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
          else
          {
            if ( !skillInfoList )
              goto LABEL_171;
            if ( v91 >= skillInfoList->max_length )
              goto LABEL_331;
            v92 = this->fields.skillBaseList;
            if ( !v92 )
              goto LABEL_171;
            if ( v91 >= v92->max_length )
              goto LABEL_331;
            gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v92->obj.klass + v90);
            if ( !gameObject )
              goto LABEL_171;
            v93 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v90);
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            v94 = this->fields.skillIconList;
            if ( !v94 )
              goto LABEL_171;
            if ( v91 >= v94->max_length )
              goto LABEL_331;
            if ( !v93 )
              goto LABEL_171;
            gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v94->obj.klass + v90);
            if ( !gameObject )
              goto LABEL_171;
            SkillIconComponent__Set_37023188((SkillIconComponent_o *)gameObject, v93[4], v93[5], v93[12], v93[13], 0LL);
            skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_171;
            if ( v91 >= skillLevelIconLabelList->max_length )
              goto LABEL_331;
            gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v90);
            if ( !gameObject )
              goto LABEL_171;
            UIIconLabel__Set_37024000((UIIconLabel_o *)gameObject, 48, v93[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
          v97 = this->fields.skillIconList;
          if ( !v97 )
            goto LABEL_171;
          v98 = v90 - 3;
          ++v90;
        }
        while ( v98 < (int)v97->max_length );
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillInfoUiWidget;
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.switchSkillUIList;
          if ( gameObject )
          {
            skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
            v101 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
            v102 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(gameObject[1].klass);
            if ( v101 )
            {
              klass_low = SLODWORD(gameObject[1].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(v101 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)gameObject,
                  skillInfoUiWidget,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
              }
              else
              {
                v104 = v101 + 8 * klass_low;
                LODWORD(gameObject[1].klass) = klass_low + 1;
                *(_QWORD *)(v104 + 32) = skillInfoUiWidget;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v104 + 32), (int32_t)skillInfoUiWidget, v99, v100);
              }
              goto LABEL_152;
            }
          }
        }
      }
    }
    else
    {
      v83 = this->fields.skillIconList;
      if ( v83 )
      {
        v84 = 0LL;
        while ( (int)v84 < (signed int)v83->max_length )
        {
          v85 = this->fields.skillBaseList;
          if ( !v85 )
            goto LABEL_171;
          if ( (unsigned int)v84 >= v85->max_length )
            goto LABEL_331;
          gameObject = v85->m_Items[v84];
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            v83 = this->fields.skillIconList;
            ++v84;
            if ( v83 )
              continue;
          }
          goto LABEL_171;
        }
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillInfoUiWidget;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
LABEL_152:
            gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtEntity(item, 0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                         item,
                                                         &v175,
                                                         0LL);
              appendSkillIconList = this->fields.appendSkillIconList;
              if ( !appendSkillIconList )
                goto LABEL_171;
              v106 = *(_QWORD *)&appendSkillIconList->max_length;
              if ( v106 << 32 < 1 )
              {
                v107 = 0;
              }
              else
              {
                v107 = 0;
                v108 = 0LL;
                do
                {
                  if ( v175 )
                  {
                    v109 = v175->max_length;
                    if ( v108 < (int)v109 )
                    {
                      if ( v108 >= v109 )
                        goto LABEL_331;
                      v110 = v175->m_Items[v108];
                      if ( v110 && v110->fields.id >= 1 )
                        v107 = v108 + 1;
                    }
                  }
                  ++v108;
                }
                while ( v108 < (int)v106 );
              }
              if ( (int)v106 >= 1 )
              {
                v114 = v107;
                v115 = 4LL;
                do
                {
                  v116 = v115 - 4;
                  if ( v115 - 4 >= v114 )
                  {
                    appendSkillBaseList = this->fields.appendSkillBaseList;
                    if ( !appendSkillBaseList )
                      goto LABEL_171;
                    if ( v116 >= appendSkillBaseList->max_length )
                      goto LABEL_331;
                    gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v115);
                    if ( !gameObject )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                  }
                  else
                  {
                    if ( !v175 )
                      goto LABEL_171;
                    if ( v116 >= v175->max_length )
                      goto LABEL_331;
                    v117 = this->fields.appendSkillBaseList;
                    if ( !v117 )
                      goto LABEL_171;
                    if ( v116 >= v117->max_length )
                      goto LABEL_331;
                    gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v117->obj.klass + v115);
                    if ( !gameObject )
                      goto LABEL_171;
                    v118 = (int32_t *)*((_QWORD *)&v175->obj.klass + v115);
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    v119 = this->fields.appendSkillIconList;
                    if ( !v119 )
                      goto LABEL_171;
                    if ( v116 >= v119->max_length )
                      goto LABEL_331;
                    if ( !v118 )
                      goto LABEL_171;
                    gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v119->obj.klass + v115);
                    if ( !gameObject )
                      goto LABEL_171;
                    SkillIconComponent__Set_37023188(
                      (SkillIconComponent_o *)gameObject,
                      v118[4],
                      v118[5],
                      v118[12],
                      v118[13],
                      0LL);
                    appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                    if ( !appendSkillLevelIconLabelList )
                      goto LABEL_171;
                    if ( v116 >= appendSkillLevelIconLabelList->max_length )
                      goto LABEL_331;
                    gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v115);
                    if ( !gameObject )
                      goto LABEL_171;
                    UIIconLabel__Set_37024000((UIIconLabel_o *)gameObject, 48, v118[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                  }
                  v122 = this->fields.appendSkillIconList;
                  if ( !v122 )
                    goto LABEL_171;
                  v123 = v115 - 3;
                  ++v115;
                }
                while ( v123 < (int)v122->max_length );
              }
              gameObject = (UnityEngine_GameObject_o *)this->fields.appendSkillInfoUiWidget;
              if ( !gameObject )
                goto LABEL_171;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_171;
              UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.switchSkillUIList;
              if ( !gameObject )
                goto LABEL_171;
              skillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
              v126 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
              v127 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++HIDWORD(gameObject[1].klass);
              if ( !v126 )
                goto LABEL_171;
              v128 = SLODWORD(gameObject[1].klass);
              if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)gameObject,
                  skillInfoUiWidget,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
              }
              else
              {
                v129 = v126 + 8 * v128;
                LODWORD(gameObject[1].klass) = v128 + 1;
                *(_QWORD *)(v129 + 32) = skillInfoUiWidget;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v129 + 32), (int32_t)skillInfoUiWidget, v124, v125);
              }
            }
            else
            {
              v111 = this->fields.appendSkillIconList;
              if ( !v111 )
                goto LABEL_171;
              v112 = 0LL;
              while ( (int)v112 < (signed int)v111->max_length )
              {
                v113 = this->fields.appendSkillBaseList;
                if ( !v113 )
                  goto LABEL_171;
                if ( (unsigned int)v112 >= v113->max_length )
                  goto LABEL_331;
                gameObject = v113->m_Items[v112];
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                  v111 = this->fields.appendSkillIconList;
                  ++v112;
                  if ( v111 )
                    continue;
                }
                goto LABEL_171;
              }
              gameObject = (UnityEngine_GameObject_o *)this->fields.appendSkillInfoUiWidget;
              if ( !gameObject )
                goto LABEL_171;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_171;
              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            }
            gameObject = (UnityEngine_GameObject_o *)this->fields.switchSkillUIList;
            if ( !gameObject )
              goto LABEL_171;
            if ( SLODWORD(gameObject[1].klass) >= 2 )
            {
              switchSkillInfo = this->fields.switchSkillInfo;
              gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___ToArray(
                                                         (System_Collections_Generic_List_object__o *)gameObject,
                                                         (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !switchSkillInfo )
                goto LABEL_171;
              SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0LL);
            }
            svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
            {
              gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtEntity(item, 0LL);
              v132 = this->fields.svtCommandCardList;
              if ( v44 & 1 | (gameObject == 0LL) )
              {
                if ( !v132 )
                  goto LABEL_171;
                ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
              }
              else
              {
                gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtEntity(item, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                v134 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
                klass = gameObject[1].klass;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v180.fields.currentCryptoKey = v134;
                *(_QWORD *)&v180.fields.fakeValue = klass;
                gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                           v180,
                                                           0LL);
                if ( !v46 )
                  goto LABEL_171;
                commandCardParam = v46->fields.commandCardParam;
                v136 = (int)gameObject;
                gameObject = (UnityEngine_GameObject_o *)ServantLeaderInfo__getCommandCodeIdList(v46, 0LL);
                if ( !v132 )
                  goto LABEL_171;
                ServantCommandCardListComponent__Set_37001068(
                  v132,
                  v136,
                  commandCardParam,
                  (System_Int32_array *)gameObject,
                  2,
                  1,
                  0LL);
              }
            }
            gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0LL);
            if ( !gameObject )
              goto LABEL_171;
            *(UnityEngine_Vector3_o *)&v137 = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)gameObject,
                                                0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
            if ( !gameObject )
              goto LABEL_171;
            v139 = v137;
            v140 = v138;
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0LL);
            if ( !gameObject )
              goto LABEL_171;
            v181.fields.y = -45.0;
            v181.fields.x = v139;
            v181.fields.z = v140;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v181, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.acceptButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.rejectButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton2;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.registButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.offerButton;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            switch ( item->fields.kind )
            {
              case 0:
                gameObject = (UnityEngine_GameObject_o *)this->fields.offerButton;
                if ( !gameObject )
                  goto LABEL_171;
                goto LABEL_255;
              case 1:
                gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                cancelLabel = this->fields.cancelLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6428/*"FRIEND_BUTTON_CANCEL"*/,
                                                           0LL);
                if ( !cancelLabel )
                  goto LABEL_171;
                UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                break;
              case 2:
                gameObject = (UnityEngine_GameObject_o *)this->fields.acceptButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.rejectButton;
                if ( !gameObject )
                  goto LABEL_171;
LABEL_255:
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                break;
              case 3:
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
                if ( !gameObject )
                  goto LABEL_171;
                v142 = &StringLiteral_19881/*"icon_friend"*/;
                goto LABEL_285;
              case 7:
                gameObject = (UnityEngine_GameObject_o *)this->fields.registButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.loginDataSpr;
                if ( !gameObject )
                  goto LABEL_171;
                v142 = &StringLiteral_19996/*"img_blacklist_requestdate"*/;
                goto LABEL_285;
              case 8:
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton2;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.registButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.loginDataSpr;
                if ( !gameObject )
                  goto LABEL_171;
                v142 = &StringLiteral_19995/*"img_blacklist_recorddate"*/;
                goto LABEL_285;
              case 9:
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0LL);
                if ( !gameObject )
                  goto LABEL_171;
                *(UnityEngine_Vector3_o *)&v143 = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)gameObject,
                                                    0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
                if ( !gameObject )
                  goto LABEL_171;
                v145 = v143;
                v146 = v144;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0LL);
                if ( !gameObject )
                  goto LABEL_171;
                v182.fields.y = 0.0;
                v182.fields.x = v145;
                v182.fields.z = v146;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v182, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.offerButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
                if ( !gameObject )
                  goto LABEL_171;
                v142 = &StringLiteral_19880/*"icon_follow"*/;
LABEL_285:
                UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v142, 0LL);
                break;
              default:
                break;
            }
            otherUserGameEntity = item->fields.otherUserGameEntity;
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_36489764 = Grade__GetKind_36489764(otherUserGameEntity, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_36489764, 0LL);
            baseSpr = this->fields.baseSpr;
            v151 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v151, 0LL);
            gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
            {
              gameObject = (UnityEngine_GameObject_o *)this->fields.playerNameLabel;
              if ( !gameObject )
                goto LABEL_171;
              LODWORD(v154) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
              if ( !gameObject )
                goto LABEL_171;
              v155 = v154;
              LODWORD(v156) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.playerNameLabel;
              if ( !gameObject )
                goto LABEL_171;
              v157 = v156;
              v158 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(v158, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
              if ( !gameObject )
                goto LABEL_171;
              v160 = LocalPositionX;
              v161 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionX(v161, (float)(v157 * 0.5) + (float)(v155 + v160), 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
              if ( !gameObject )
                goto LABEL_171;
              UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_36489764, 0LL);
            }
            FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v153);
            pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(pushSpr, 0LL, 0LL) )
            {
LABEL_314:
              openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL)
                && (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) == 0 )
              {
                if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                  v170 = (Il2CppObject **)&StringLiteral_6300/*"FFFF00"*/;
                else
                  v170 = (Il2CppObject **)&StringLiteral_6301/*"FFFFFF"*/;
                v171 = *v170;
                OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                v172 = (Il2CppObject *)j_il2cpp_value_box_0(
                                         int_TypeInfo,
                                         &OpenClassBoardNum_k__BackingField,
                                         v167,
                                         v168,
                                         v169);
                gameObject = (UnityEngine_GameObject_o *)System_String__Format_60340120(
                                                           (System_String_o *)StringLiteral_15796/*"[{0}]+{1}[-]"*/,
                                                           v171,
                                                           v172,
                                                           0LL);
                if ( !this->fields.openClassBoardNumLabel )
                  goto LABEL_171;
                UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0LL);
              }
              classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardOpenButton;
                if ( !gameObject )
                  goto LABEL_171;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_171;
                v42 = item->fields._OpenClassBoardNum_k__BackingField >= 0;
LABEL_329:
                UnityEngine_GameObject__SetActive(gameObject, v42, 0LL);
                return;
              }
              return;
            }
            gameObject = (UnityEngine_GameObject_o *)this->fields.pushSpr;
            if ( !gameObject )
              goto LABEL_171;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_171;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)item->fields.otherUserGameEntity;
            if ( !gameObject )
              goto LABEL_171;
            v163 = *(_QWORD *)&gameObject[3].fields.m_CachedPtr;
            if ( !v163 )
              goto LABEL_171;
            if ( *(_DWORD *)(v163 + 24) )
            {
              gameObject = (UnityEngine_GameObject_o *)OtherUserGameEntity__getServantLeaderInfo(
                                                         (OtherUserGameEntity_o *)gameObject,
                                                         item->fields.classPos,
                                                         1,
                                                         item->fields.displayServantType,
                                                         *(_DWORD *)(v163 + 32),
                                                         0LL);
              if ( gameObject )
              {
                v164 = *(_QWORD *)&gameObject[1].fields.m_CachedPtr;
                if ( v164 >= 1 )
                {
                  v165 = item->fields.otherUserGameEntity;
                  if ( !v165 )
                    goto LABEL_171;
                  if ( v165->fields.pushUserSvtId == v164 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.pushSpr;
                    if ( !gameObject )
                      goto LABEL_171;
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                    if ( !gameObject )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                  }
                }
              }
              goto LABEL_314;
            }
LABEL_331:
            sub_1B00F30(gameObject, skillInfoUiWidget);
          }
        }
      }
    }
LABEL_171:
    sub_1B00F28(gameObject, skillInfoUiWidget);
  }
  if ( v35 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_171;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_171;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  v41 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_171;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_171;
    v42 = 0;
    goto LABEL_329;
  }
}


void __fastcall FriendOperationItemListViewItemDraw__UpdateLockUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *lockMarkObj; // x21
  UnityEngine_GameObject_o *v6; // x21
  _BOOL8 IsLockDisp; // x0
  __int64 v8; // x1
  int32_t kind; // w8
  struct UICommonButton_o *removeButton; // x8
  __int64 v11; // x1

  if ( (byte_48E6B11 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, item);
    byte_48E6B11 = 1;
  }
  if ( item )
  {
    lockMarkObj = (UnityEngine_Object_o *)this->fields.lockMarkObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockMarkObj, 0LL, 0LL) )
    {
      v6 = this->fields.lockMarkObj;
      IsLockDisp = FriendOperationItemListViewItem__get_IsLockDisp(item, 0LL);
      if ( !v6 )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(v6, IsLockDisp, 0LL);
    }
    kind = item->fields.kind;
    if ( kind != 9 && kind != 3 )
      return;
    IsLockDisp = FriendOperationItemListViewItem__get_IsLockDisp(item, 0LL);
    removeButton = this->fields.removeButton;
    if ( removeButton )
    {
      if ( IsLockDisp )
        v11 = 3LL;
      else
        v11 = 0LL;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeButton->klass->vtable._14_SetState.method)(
        removeButton,
        v11,
        1LL,
        removeButton->klass->vtable._15_OnPress.methodPtr);
      return;
    }
LABEL_17:
    sub_1B00F28(IsLockDisp, v8);
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
    sub_1B00F28(messageDispButton, isHide);
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
  if ( (byte_48E6B10 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_17280/*"btn_message_on"*/, v8);
    sub_1B00CCC(&StringLiteral_6436/*"FRIEND_HIDE_MESSAGE"*/, v9);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_17279/*"btn_message_off"*/, v10);
    byte_48E6B10 = 1;
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
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6436/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1B00F28(this, item);
  }
  v21 = (System_String_o **)&StringLiteral_17279/*"btn_message_off"*/;
  if ( !isDisp )
    v21 = (System_String_o **)&StringLiteral_17280/*"btn_message_on"*/;
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
  if ( (byte_48E6B12 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B00CCC(&OptionManager_TypeInfo, item);
    byte_48E6B12 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1B00F28(this, item);
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