void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BalanceConfig_c *v12; // x0
  struct UnityEngine_GameObject_array *v13; // x0
  struct SkillIconComponent_array *v14; // x0
  struct UIIconLabel_array *v15; // x0
  struct UnityEngine_GameObject_array *v16; // x0
  struct SkillIconComponent_array *v17; // x0
  struct UIIconLabel_array *v18; // x0
  struct System_Int32_array *v19; // x0
  __int64 v20; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B11411 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&int___TypeInfo, v6, v7);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v8, v9);
    sub_1BCA7E0(&UIIconLabel___TypeInfo, v10, v11);
    byte_4B11411 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v12->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v13;
  sub_1BCA784(&this->fields.skillBaseList, v13);
  v14 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v14;
  sub_1BCA784(&this->fields.skillIconList, v14);
  v15 = (struct UIIconLabel_array *)sub_1BCA888(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v15;
  sub_1BCA784(&this->fields.skillLevelIconLabelList, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1BCA784(&this->fields.appendSkillBaseList, v16);
  v17 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v17;
  sub_1BCA784(&this->fields.appendSkillIconList, v17);
  v18 = (struct UIIconLabel_array *)sub_1BCA888(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v18;
  sub_1BCA784(&this->fields.appendSkillLevelIconLabelList, v18);
  v19 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v19 )
    sub_1BCAA3C(0LL, v20);
  max_length = v19->max_length;
  if ( !max_length || (v19->m_Items[1] = 95, max_length == 1) )
    sub_1BCAA44(v19, v19);
  v19->m_Items[2] = 46;
  this->fields.OFFER_BUTTON_SIZE = v19;
  sub_1BCA784(&this->fields.OFFER_BUTTON_SIZE, v19);
  *(_QWORD *)&this->fields.REJECT_BUTTON_POS_Y = 0x3F000000FFFFFFCFLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__Awake(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  UnityEngine_Object_o *skillIconSprite; // x20
  __int64 v22; // x1
  UISprite_o *v23; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  __int64 v25; // x1
  UISprite_o *v26; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  __int64 v28; // x1
  UISprite_o *v29; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  __int64 v31; // x1
  UISprite_o *v32; // x19

  if ( (byte_4B1140B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_20392/*"icon_skill_mini"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20539/*"img_friend_skill"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20291/*"icon_append_mini"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20538/*"img_friend_appendskill"*/, v17, v18);
    byte_4B1140B = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v19;
  sub_1BCA784(&this->fields.switchSkillUIList, v19);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v23 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
    AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_20392/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v26 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
    AtlasManager__SetEventSprite(v26, (System_String_o *)StringLiteral_20539/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v29 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
    AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_20291/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v32 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
    AtlasManager__SetEventSprite(v32, (System_String_o *)StringLiteral_20538/*"img_friend_appendskill"*/, 0LL);
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
  __int64 v8; // x2
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Object_o *addRangeSprite; // x22
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w24
  il2cpp_array_size_t v13; // w25
  UnityEngine_Behaviour_o *v14; // x22
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22
  __int64 v17; // x1
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  UnityEngine_Object_o *pushSpr; // x21
  struct UILabel_o *loginDataLabel; // x8
  struct UISprite_o *v23; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9

  v6 = this;
  if ( (byte_4B11410 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, item, isInput);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B11410 = 1;
  }
  if ( !item )
  {
    rangeSprite = (UnityEngine_Object_o *)v6->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      v13 = 0;
      while ( v13 < skillButtonList->max_length )
      {
        v14 = (UnityEngine_Behaviour_o *)skillButtonList->m_Items[v13];
        if ( !v14 )
          goto LABEL_23;
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))v14->klass[1]._1.namespaze)(
          v14,
          1LL,
          v14->klass[1]._1.byval_arg.data,
          method);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v14->klass[1]._1.implementedInterfaces)(
          v14,
          0LL,
          0LL,
          v14->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v14, isInput, 0LL);
        if ( max_length == ++v13 )
          goto LABEL_24;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_23;
      }
LABEL_95:
      sub_1BCAA44(this, item);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1BCAA3C(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_23;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v19);
      pushSpr = (UnityEngine_Object_o *)v6->fields.pushSpr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
          v23 = this->fields.addRangeSprite;
          if ( (__int64)v23 >= 1 )
          {
            otherUserGameEntity = item->fields.otherUserGameEntity;
            if ( !otherUserGameEntity )
              goto LABEL_23;
            if ( (struct UISprite_o *)otherUserGameEntity->fields.pushUserSvtId == v23 )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  UnityEngine_Object_o *rangeSprite; // x22
  bool v70; // w0
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  int32_t kind; // w8
  bool v75; // w22
  UnityEngine_Object_o *v76; // x20
  __int64 v77; // x8
  char v78; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v80; // x21
  const MethodInfo *v81; // x2
  __int64 v82; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v86; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  long double v93; // q0
  int v94; // w22
  __int64 v95; // x0
  __int64 v96; // x0
  ServantLimitAddMaster_o *v97; // x23
  __int64 v98; // x1
  int32_t FriendNpNameDispLimitCount; // w24
  __int64 v100; // x1
  Il2CppObject *Master_object; // x0
  __int64 v102; // x1
  __int64 v103; // x26
  __int64 v104; // x27
  ServantLimitImageMaster_o *v105; // x25
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *OverwriteTDName; // x0
  __int64 v108; // x1
  System_String_o **v109; // x9
  bool v110; // cc
  Il2CppObject *v111; // x22
  System_String_o *v112; // x23
  System_String_o *v113; // x0
  System_String_o *v114; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  __int64 v116; // x1
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v118; // x22
  __int64 v119; // x1
  UnityEngine_Object_o *v120; // x22
  int32_t v121; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v123; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v125; // x23
  int64_t createdAt; // x0
  System_String_o *v127; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v129; // x0
  const MethodInfo *v130; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v132; // x8
  int v133; // w9
  unsigned __int64 v134; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v136; // x14
  struct SkillIconComponent_array *v137; // x8
  __int64 v138; // x22
  struct UnityEngine_GameObject_array *v139; // x8
  const MethodInfo *v140; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v142; // x23
  __int64 v143; // x24
  __int64 v144; // x22
  __int64 v145; // x23
  unsigned __int64 v146; // x24
  struct UnityEngine_GameObject_array *v147; // x9
  int32_t *v148; // x25
  struct SkillIconComponent_array *v149; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v152; // x8
  __int64 v153; // x9
  __int64 v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  __int64 v157; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v159; // x8
  int v160; // w9
  signed __int64 v161; // x10
  unsigned __int64 v162; // x14
  SkillInfo_o *v163; // x14
  struct SkillIconComponent_array *v164; // x8
  __int64 v165; // x22
  struct UnityEngine_GameObject_array *v166; // x8
  unsigned __int64 v167; // x22
  signed __int64 v168; // x23
  struct UnityEngine_GameObject_array *v169; // x9
  SkillInfo_o *v170; // x25
  struct SkillIconComponent_array *v171; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  __int64 v173; // x9
  int v174; // w8
  struct UnityEngine_GameObject_array *v175; // x9
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v177; // x8
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  __int64 v181; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v185; // x22
  __int64 v186; // x23
  __int64 v187; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v189; // w23
  float v190; // s0
  float v191; // s2
  float v192; // s8
  float v193; // s9
  UISprite_o *offerBackSprite; // x21
  struct System_Int32_array *OFFER_BUTTON_SIZE; // x8
  struct System_Int32_array *v196; // x8
  UnityEngine_GameObject_o *v197; // x0
  struct System_Int32_array *v198; // x8
  struct System_Int32_array *v199; // x8
  UnityEngine_GameObject_o *v200; // x0
  struct System_Int32_array *v201; // x8
  struct System_Int32_array *v202; // x8
  UnityEngine_GameObject_o *v203; // x0
  UnityEngine_GameObject_o *v204; // x0
  struct System_Int32_array *v205; // x8
  struct System_Int32_array *v206; // x8
  UnityEngine_GameObject_o *v207; // x0
  UnityEngine_GameObject_o *v208; // x0
  __int64 v209; // x1
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v211; // x0
  __int64 *v212; // x8
  float v213; // s0
  float v214; // s2
  float v215; // s8
  float v216; // s9
  OtherUserGameEntity_o *v217; // x21
  int32_t Kind_38402356; // w21
  System_String_o *SupportBgImage; // x0
  __int64 v220; // x1
  UISprite_o *baseSpr; // x23
  System_String_o *v222; // x22
  __int64 v223; // x1
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v225; // x2
  float v226; // s0
  float v227; // s8
  float v228; // s0
  float v229; // s9
  UnityEngine_GameObject_o *v230; // x0
  float LocalPositionX; // s0
  float v232; // s10
  UnityEngine_GameObject_o *v233; // x0
  __int64 v234; // x1
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v236; // x8
  __int64 v237; // x8
  struct OtherUserGameEntity_o *v238; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v240; // x1
  Il2CppObject **v241; // x9
  Il2CppObject *v242; // x21
  Il2CppObject *v243; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  __int64 v245; // x1
  UnityEngine_GameObject_o *v246; // x20
  BalanceConfig_c *v247; // x8
  __int64 v248; // x1
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v250; // x0
  UnityEngine_GameObject_o *v251; // x0
  UnityEngine_GameObject_o *v252; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v254; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v257; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v258; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v259; // 0:x0.16
  UnityEngine_Vector3_o v260; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v261; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1140C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Grade_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
    sub_1BCA7E0(&OptionManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&StringLiteral_20485/*"img_blacklist_requestdate"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_17657/*"btn_bg_27_2"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_6489/*"FFFFFF"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_17658/*"btn_bg_29_2"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_17656/*"btn_bg_26_2"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_20484/*"img_blacklist_recorddate"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_6488/*"FFFF00"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_9430/*"NO_ENTRY_NAME"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_9454/*"NP_COLOR_NAME"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_16194/*"[{0}]+{1}[-]"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_6612/*"FRIEND_BUTTON_CANCEL"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_20366/*"icon_friend"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_20365/*"icon_follow"*/, v67, v68);
    byte_4B1140C = 1;
  }
  tdInfo = 0LL;
  v254 = 0LL;
  skillInfoList = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v70 = UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
  if ( item )
  {
    if ( v70 )
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget);
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
      v75 = kind == 9 || kind == 3;
      gameObject = (__int64)item->fields.otherUserGameEntity;
      if ( !gameObject )
        goto LABEL_183;
      v77 = *(_QWORD *)(gameObject + 96);
      if ( !v77 )
        goto LABEL_183;
      if ( !*(_DWORD *)(v77 + 24) )
        goto LABEL_395;
      v78 = 1;
      ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)gameObject,
                            item->fields.classPos,
                            1,
                            item->fields.displayServantType,
                            *(_DWORD *)(v77 + 32),
                            0LL);
      v80 = ServantLeaderInfo;
      if ( ServantLeaderInfo )
      {
        if ( ServantLeaderInfo->fields.userSvtId )
          goto LABEL_36;
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( !equipTarget1 )
          goto LABEL_36;
        v143 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v142 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoUiWidget);
        *(_QWORD *)&v258.fields.currentCryptoKey = v143;
        *(_QWORD *)&v258.fields.fakeValue = v142;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v258, 0LL) )
        {
LABEL_36:
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v80, 0LL);
          v78 = 0;
        }
        else
        {
          v80 = 0LL;
          v78 = 1;
        }
      }
      gameObject = (__int64)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_183;
      ServantFaceIconComponent__Set_38935648(
        (ServantFaceIconComponent_o *)gameObject,
        v80,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        v75,
        0,
        0LL);
      FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v81);
      playerNameLabel = this->fields.playerNameLabel;
      if ( (byte_4B11406 & 1) == 0 )
      {
        gameObject = sub_1BCA7E0(&StringLiteral_19249/*"error"*/, skillInfoUiWidget, v82);
        byte_4B11406 = 1;
      }
      if ( !playerNameLabel )
        goto LABEL_183;
      otherUserGameEntity = item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
        p_userName = &otherUserGameEntity->fields.userName;
      else
        p_userName = (System_String_o **)&StringLiteral_19249/*"error"*/;
      UILabel__set_text(playerNameLabel, *p_userName, 0LL);
      v86 = item->fields.otherUserGameEntity;
      gameObject = (__int64)this->fields.playerLevelIconLabel;
      if ( v86 )
      {
        userLv = v86->fields.userLv;
        if ( !gameObject )
          goto LABEL_183;
      }
      else
      {
        userLv = 1;
        if ( !gameObject )
          goto LABEL_183;
      }
      UIIconLabel__Set_38947284((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
      servantNameLabel = this->fields.servantNameLabel;
      gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v89);
      if ( !servantNameLabel )
        goto LABEL_183;
      UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v90);
      TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v91);
      if ( item->fields.servantEntity )
      {
        v94 = TreasureDeviceLevelIcon;
        v95 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v95 + 309) & 1) == 0 )
          v95 = sub_1C1C6BC(v93);
        v96 = *(_QWORD *)(*(_QWORD *)(v95 + 192) + 16LL);
        if ( (*(_BYTE *)(v96 + 309) & 1) == 0 )
          v96 = sub_1C1C6BC(v93);
        gameObject = **(_QWORD **)(v96 + 184);
        if ( !gameObject )
          goto LABEL_183;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        if ( !v80 )
          goto LABEL_183;
        v97 = (ServantLimitAddMaster_o *)gameObject;
        FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v80, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v98);
        if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v80, 0LL) )
        {
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_183;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
          if ( !gameObject )
            goto LABEL_183;
          FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                         (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                         v80->fields.svtId,
                                         FriendNpNameDispLimitCount,
                                         0LL);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v100);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v104 = *(_QWORD *)&v80->fields.svtId.fields.currentCryptoKey;
        v103 = *(_QWORD *)&v80->fields.svtId.fields.fakeValue;
        v105 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v102);
        *(_QWORD *)&v257.fields.currentCryptoKey = v104;
        *(_QWORD *)&v257.fields.fakeValue = v103;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v257, 0LL);
        if ( !v105 )
          goto LABEL_183;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v105,
                                       gameObject,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v80->fields.svtId, 0LL);
        if ( !tdInfo || !v97 )
          goto LABEL_183;
        OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                            v97,
                            gameObject,
                            ServantLimitCountSealAfter,
                            tdInfo->fields.name,
                            tdInfo->fields.lv,
                            0LL);
        v109 = (System_String_o **)&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/;
        v110 = v94 <= 1;
        v111 = (Il2CppObject *)OverwriteTDName;
        if ( v110 )
          v109 = (System_String_o **)&StringLiteral_9454/*"NP_COLOR_NAME"*/;
        v112 = *v109;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
        v113 = LocalizationManager__Get(v112, 0LL);
        gameObject = (__int64)System_String__Format(v113, v111, 0LL);
        if ( !tdInfo )
          goto LABEL_183;
        v114 = (System_String_o *)gameObject;
        svtNpTitleLabel = this->fields.svtNpTitleLabel;
        gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
        if ( !svtNpTitleLabel )
          goto LABEL_183;
        UIRangeLabel__Set(svtNpTitleLabel, v114, (System_String_o *)gameObject, 0, 0, 0LL);
        svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v116);
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
        v118 = this->fields.svtNpTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9430/*"NO_ENTRY_NAME"*/, 0LL);
        if ( !v118 )
          goto LABEL_183;
        UIRangeLabel__Set(v118, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
        v120 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v119);
        if ( UnityEngine_Object__op_Inequality(v120, 0LL, 0LL) )
        {
          gameObject = (__int64)this->fields.svtNpCommandCard;
          if ( !gameObject )
            goto LABEL_183;
          ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0LL);
        }
      }
      v121 = item->fields.kind;
      if ( v121 == 7 )
      {
        loginDataLabel = this->fields.loginDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget);
        v127 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
        v125 = v127;
        if ( userFriendRequestHistoryEntity )
        {
          createdAt = userFriendRequestHistoryEntity->fields.createdAt;
          goto LABEL_105;
        }
      }
      else if ( v121 == 8 )
      {
        loginDataLabel = this->fields.loginDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget);
        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        userBlacklistEntity = item->fields.userBlacklistEntity;
        v125 = v123;
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget);
        v125 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( item->fields.otherUserGameEntity )
        {
          createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0LL);
          goto LABEL_105;
        }
      }
      createdAt = 0LL;
LABEL_105:
      v129 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0LL);
      gameObject = (__int64)System_String__Format(v125, v129, 0LL);
      if ( !loginDataLabel )
        goto LABEL_183;
      UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0LL);
      if ( item->fields.servantEntity )
      {
        gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v130);
        skillIconList = this->fields.skillIconList;
        if ( !skillIconList )
          goto LABEL_183;
        v132 = *(_QWORD *)&skillIconList->max_length;
        if ( v132 << 32 >= 1 )
        {
          v133 = 0;
          v134 = 0LL;
          while ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( (__int64)v134 < (int)max_length )
            {
              if ( v134 >= max_length )
                goto LABEL_395;
              v136 = skillInfoList->m_Items[v134];
              if ( v136 && v136->fields.id >= 1 )
                v133 = v134 + 1;
            }
            if ( (__int64)++v134 >= (int)v132 )
              goto LABEL_135;
          }
          goto LABEL_183;
        }
        v133 = 0;
LABEL_135:
        if ( (int)v132 >= 1 )
        {
          v144 = v133;
          v145 = 4LL;
          do
          {
            v146 = v145 - 4;
            if ( v145 - 4 >= v144 )
            {
              skillBaseList = this->fields.skillBaseList;
              if ( !skillBaseList )
                goto LABEL_183;
              if ( v146 >= skillBaseList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillBaseList->obj.klass + v145);
              if ( !gameObject )
                goto LABEL_183;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_183;
              if ( v146 >= skillInfoList->max_length )
                goto LABEL_395;
              v147 = this->fields.skillBaseList;
              if ( !v147 )
                goto LABEL_183;
              if ( v146 >= v147->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&v147->obj.klass + v145);
              if ( !gameObject )
                goto LABEL_183;
              v148 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v145);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              v149 = this->fields.skillIconList;
              if ( !v149 )
                goto LABEL_183;
              if ( v146 >= v149->max_length )
                goto LABEL_395;
              if ( !v148 )
                goto LABEL_183;
              gameObject = *((_QWORD *)&v149->obj.klass + v145);
              if ( !gameObject )
                goto LABEL_183;
              SkillIconComponent__Set_38946480(
                (SkillIconComponent_o *)gameObject,
                v148[4],
                v148[5],
                v148[12],
                v148[13],
                0LL);
              skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
              if ( !skillLevelIconLabelList )
                goto LABEL_183;
              if ( v146 >= skillLevelIconLabelList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v145);
              if ( !gameObject )
                goto LABEL_183;
              UIIconLabel__Set_38947284((UIIconLabel_o *)gameObject, 48, v148[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
            v152 = this->fields.skillIconList;
            if ( !v152 )
              goto LABEL_183;
            v153 = v145 - 3;
            ++v145;
          }
          while ( v153 < (int)v152->max_length );
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
              v154 = *(_QWORD *)(gameObject + 16);
              v155 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(gameObject + 28);
              if ( v154 )
              {
                v156 = *(int *)(gameObject + 24);
                if ( (unsigned int)v156 >= *(_DWORD *)(v154 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
                }
                else
                {
                  v157 = v154 + 8 * v156;
                  *(_DWORD *)(gameObject + 24) = v156 + 1;
                  *(_QWORD *)(v157 + 32) = skillInfoUiWidget;
                  gameObject = sub_1BCA784(v157 + 32, skillInfoUiWidget);
                }
                goto LABEL_164;
              }
            }
          }
        }
      }
      else
      {
        v137 = this->fields.skillIconList;
        if ( v137 )
        {
          v138 = 0LL;
          while ( (int)v138 < (signed int)v137->max_length )
          {
            v139 = this->fields.skillBaseList;
            if ( !v139 )
              goto LABEL_183;
            if ( (unsigned int)v138 >= v139->max_length )
              goto LABEL_395;
            gameObject = (__int64)v139->m_Items[v138];
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              v137 = this->fields.skillIconList;
              ++v138;
              if ( v137 )
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
                gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v254, v140);
                appendSkillIconList = this->fields.appendSkillIconList;
                if ( !appendSkillIconList )
                  goto LABEL_183;
                v159 = *(_QWORD *)&appendSkillIconList->max_length;
                if ( v159 << 32 < 1 )
                {
                  v160 = 0;
                }
                else
                {
                  v160 = 0;
                  v161 = 0LL;
                  do
                  {
                    if ( v254 )
                    {
                      v162 = v254->max_length;
                      if ( v161 < (int)v162 )
                      {
                        if ( v161 >= v162 )
                          goto LABEL_395;
                        v163 = v254->m_Items[v161];
                        if ( v163 && v163->fields.id >= 1 )
                          v160 = v161 + 1;
                      }
                    }
                    ++v161;
                  }
                  while ( v161 < (int)v159 );
                }
                if ( (int)v159 >= 1 )
                {
                  v167 = 0LL;
                  v168 = v160;
                  do
                  {
                    if ( (__int64)v167 >= v168 )
                    {
                      appendSkillBaseList = this->fields.appendSkillBaseList;
                      if ( !appendSkillBaseList )
                        goto LABEL_183;
                      if ( v167 >= appendSkillBaseList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillBaseList->m_Items[v167];
                      if ( !gameObject )
                        goto LABEL_183;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    }
                    else
                    {
                      if ( !v254 )
                        goto LABEL_183;
                      if ( v167 >= v254->max_length )
                        goto LABEL_395;
                      v169 = this->fields.appendSkillBaseList;
                      if ( !v169 )
                        goto LABEL_183;
                      if ( v167 >= v169->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)v169->m_Items[v167];
                      if ( !gameObject )
                        goto LABEL_183;
                      v170 = v254->m_Items[v167];
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                      v171 = this->fields.appendSkillIconList;
                      if ( !v171 )
                        goto LABEL_183;
                      if ( v167 >= v171->max_length )
                        goto LABEL_395;
                      if ( !v170 )
                        goto LABEL_183;
                      gameObject = (__int64)v171->m_Items[v167];
                      if ( !gameObject )
                        goto LABEL_183;
                      SkillIconComponent__Set_38946480(
                        (SkillIconComponent_o *)gameObject,
                        v170->fields.id,
                        v170->fields.lv,
                        v170->fields.strengthStatus,
                        v170->fields.skillRecord,
                        0LL);
                      appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                      if ( !appendSkillLevelIconLabelList )
                        goto LABEL_183;
                      if ( v167 >= appendSkillLevelIconLabelList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillLevelIconLabelList->m_Items[v167];
                      if ( !gameObject )
                        goto LABEL_183;
                      UIIconLabel__Set_38947284(
                        (UIIconLabel_o *)gameObject,
                        48,
                        v170->fields.lv,
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
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoUiWidget);
                          gameObject = (__int64)BalanceConfig_TypeInfo;
                        }
                        v173 = *(_QWORD *)(gameObject + 184);
                        v174 = *(_DWORD *)(v173 + 1188);
                        if ( v167 )
                          v174 += *(_DWORD *)(v173 + 1192) * v167;
                        v175 = this->fields.appendSkillBaseList;
                        if ( !v175 )
                          goto LABEL_183;
                        if ( v167 >= v175->max_length )
                          goto LABEL_395;
                        GameObjectExtensions__SetLocalPositionX(v175->m_Items[v167], (float)v174, 0LL);
                      }
                    }
                    v177 = this->fields.appendSkillIconList;
                    if ( !v177 )
                      goto LABEL_183;
                  }
                  while ( (__int64)++v167 < (int)v177->max_length );
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
                v178 = *(_QWORD *)(gameObject + 16);
                v179 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(gameObject + 28);
                if ( !v178 )
                  goto LABEL_183;
                v180 = *(int *)(gameObject + 24);
                if ( (unsigned int)v180 >= *(_DWORD *)(v178 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
                }
                else
                {
                  v181 = v178 + 8 * v180;
                  *(_DWORD *)(gameObject + 24) = v180 + 1;
                  *(_QWORD *)(v181 + 32) = skillInfoUiWidget;
                  sub_1BCA784(v181 + 32, skillInfoUiWidget);
                }
              }
              else
              {
                v164 = this->fields.appendSkillIconList;
                if ( !v164 )
                  goto LABEL_183;
                v165 = 0LL;
                while ( (int)v165 < (signed int)v164->max_length )
                {
                  v166 = this->fields.appendSkillBaseList;
                  if ( !v166 )
                    goto LABEL_183;
                  if ( (unsigned int)v165 >= v166->max_length )
                    goto LABEL_395;
                  gameObject = (__int64)v166->m_Items[v165];
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    v164 = this->fields.appendSkillIconList;
                    ++v165;
                    if ( v164 )
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
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                if ( !switchSkillInfo )
                  goto LABEL_183;
                SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0LL);
              }
              svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget);
              gameObject = UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
              if ( (gameObject & 1) != 0 )
              {
                servantEntity = item->fields.servantEntity;
                v185 = this->fields.svtCommandCardList;
                if ( v78 & 1 | (servantEntity == 0LL) )
                {
                  if ( !v185 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
                }
                else
                {
                  v187 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
                  v186 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(
                      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                      skillInfoUiWidget);
                  *(_QWORD *)&v259.fields.currentCryptoKey = v187;
                  *(_QWORD *)&v259.fields.fakeValue = v186;
                  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v259, 0LL);
                  if ( !v80 )
                    goto LABEL_183;
                  commandCardParam = v80->fields.commandCardParam;
                  v189 = gameObject;
                  gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v80, 0LL);
                  if ( !v185 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Set_38924900(
                    v185,
                    v189,
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
              *(UnityEngine_Vector3_o *)&v190 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.removeButton;
              if ( !gameObject )
                goto LABEL_183;
              v192 = v190;
              v193 = v191;
              gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_183;
              v260.fields.y = -45.0;
              v260.fields.x = v192;
              v260.fields.z = v193;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v260, 0LL);
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
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, skillInfoUiWidget);
              gameObject = AtlasManager__SetDownloadCommonSprite(
                             offerBackSprite,
                             (System_String_o *)StringLiteral_17656/*"btn_bg_26_2"*/,
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
                v196 = this->fields.OFFER_BUTTON_SIZE;
                if ( !v196 )
                  goto LABEL_183;
                if ( v196->max_length > 1 )
                {
                  gameObject = (__int64)this->fields.offerBackSprite;
                  if ( !gameObject )
                    goto LABEL_183;
                  UIWidget__set_height((UIWidget_o *)gameObject, v196->m_Items[2], 0LL);
                  gameObject = (__int64)this->fields.offerButton;
                  if ( !gameObject )
                    goto LABEL_183;
                  v197 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v197, 343.5, 0LL);
                  gameObject = AtlasManager__SetDownloadCommonSprite(
                                 this->fields.removeBackSprite,
                                 (System_String_o *)StringLiteral_17657/*"btn_bg_27_2"*/,
                                 0LL);
                  v198 = this->fields.OFFER_BUTTON_SIZE;
                  if ( !v198 )
                    goto LABEL_183;
                  if ( v198->max_length )
                  {
                    gameObject = (__int64)this->fields.removeBackSprite;
                    if ( !gameObject )
                      goto LABEL_183;
                    UIWidget__set_width((UIWidget_o *)gameObject, v198->m_Items[1], 0LL);
                    v199 = this->fields.OFFER_BUTTON_SIZE;
                    if ( !v199 )
                      goto LABEL_183;
                    if ( v199->max_length > 1 )
                    {
                      gameObject = (__int64)this->fields.removeBackSprite;
                      if ( !gameObject )
                        goto LABEL_183;
                      UIWidget__set_height((UIWidget_o *)gameObject, v199->m_Items[2], 0LL);
                      gameObject = (__int64)this->fields.removeButton;
                      if ( !gameObject )
                        goto LABEL_183;
                      v200 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      GameObjectExtensions__SetLocalPositionX(v200, 343.5, 0LL);
                      gameObject = AtlasManager__SetDownloadCommonSprite(
                                     this->fields.registBackSprite,
                                     (System_String_o *)StringLiteral_17656/*"btn_bg_26_2"*/,
                                     0LL);
                      v201 = this->fields.OFFER_BUTTON_SIZE;
                      if ( !v201 )
                        goto LABEL_183;
                      if ( v201->max_length )
                      {
                        gameObject = (__int64)this->fields.registBackSprite;
                        if ( !gameObject )
                          goto LABEL_183;
                        UIWidget__set_width((UIWidget_o *)gameObject, v201->m_Items[1], 0LL);
                        v202 = this->fields.OFFER_BUTTON_SIZE;
                        if ( !v202 )
                          goto LABEL_183;
                        if ( v202->max_length > 1 )
                        {
                          gameObject = (__int64)this->fields.registBackSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          UIWidget__set_height((UIWidget_o *)gameObject, v202->m_Items[2], 0LL);
                          gameObject = (__int64)this->fields.registButton;
                          if ( !gameObject )
                            goto LABEL_183;
                          v203 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v203, 343.5, 0LL);
                          gameObject = (__int64)this->fields.registTitleSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          v204 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v204, this->fields.BLACK_LIST_BUTTON_TITLE_POS_X, 0LL);
                          gameObject = AtlasManager__SetDownloadCommonSprite(
                                         this->fields.removeBackSprite2,
                                         (System_String_o *)StringLiteral_17657/*"btn_bg_27_2"*/,
                                         0LL);
                          v205 = this->fields.OFFER_BUTTON_SIZE;
                          if ( !v205 )
                            goto LABEL_183;
                          if ( v205->max_length )
                          {
                            gameObject = (__int64)this->fields.removeBackSprite2;
                            if ( !gameObject )
                              goto LABEL_183;
                            UIWidget__set_width((UIWidget_o *)gameObject, v205->m_Items[1], 0LL);
                            v206 = this->fields.OFFER_BUTTON_SIZE;
                            if ( !v206 )
                              goto LABEL_183;
                            if ( v206->max_length > 1 )
                            {
                              gameObject = (__int64)this->fields.removeBackSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              UIWidget__set_height((UIWidget_o *)gameObject, v206->m_Items[2], 0LL);
                              gameObject = (__int64)this->fields.removeButton2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v207 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(v207, 343.5, 0LL);
                              gameObject = (__int64)this->fields.removeTitleSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v208 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(
                                v208,
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
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v209);
                                  gameObject = (__int64)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_6612/*"FRIEND_BUTTON_CANCEL"*/,
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
                                  v211 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v211,
                                    (float)this->fields.REJECT_BUTTON_POS_Y,
                                    0LL);
LABEL_341:
                                  v217 = item->fields.otherUserGameEntity;
                                  if ( !Grade_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, skillInfoUiWidget);
                                  Kind_38402356 = Grade__GetKind_38402356(v217, 0LL);
                                  SupportBgImage = Grade__GetSupportBgImage(Kind_38402356, 0LL);
                                  baseSpr = this->fields.baseSpr;
                                  v222 = SupportBgImage;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v220);
                                  AtlasManager__SetGradeIcon(baseSpr, v222, 0LL);
                                  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v223);
                                  if ( !UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
                                    goto LABEL_354;
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  LODWORD(v226) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v227 = v226;
                                  LODWORD(v228) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                                                (UserGradeComponent_o *)gameObject,
                                                                0LL);
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v229 = v228;
                                  v230 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  LocalPositionX = GameObjectExtensions__GetLocalPositionX(v230, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v232 = LocalPositionX;
                                  v233 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionX(
                                    v233,
                                    (float)(v229 * 0.5) + (float)(v227 + v232),
                                    0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_38402356, 0LL);
LABEL_354:
                                  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v225);
                                  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v234);
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
                                  v236 = *(_QWORD *)(gameObject + 96);
                                  if ( !v236 )
                                    goto LABEL_183;
                                  if ( !*(_DWORD *)(v236 + 24) )
                                    goto LABEL_395;
                                  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)gameObject,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          *(_DWORD *)(v236 + 32),
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_369;
                                  v237 = *(_QWORD *)(gameObject + 40);
                                  if ( v237 < 1 )
                                    goto LABEL_369;
                                  v238 = item->fields.otherUserGameEntity;
                                  if ( !v238 )
                                    goto LABEL_183;
                                  if ( v238->fields.pushUserSvtId != v237 )
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
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget);
                                  if ( !UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL)
                                    || (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
                                  {
                                    goto LABEL_378;
                                  }
                                  if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                                    v241 = (Il2CppObject **)&StringLiteral_6488/*"FFFF00"*/;
                                  else
                                    v241 = (Il2CppObject **)&StringLiteral_6489/*"FFFFFF"*/;
                                  v242 = *v241;
                                  OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                                  v243 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                           int_TypeInfo,
                                                           &OpenClassBoardNum_k__BackingField);
                                  gameObject = (__int64)System_String__Format_62415592(
                                                          (System_String_o *)StringLiteral_16194/*"[{0}]+{1}[-]"*/,
                                                          v242,
                                                          v243,
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
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v240);
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
                                  v246 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  v247 = BalanceConfig_TypeInfo;
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v245);
                                    v247 = BalanceConfig_TypeInfo;
                                  }
                                  GameObjectExtensions__SetLocalPosition_34330940(
                                    v246,
                                    v247->static_fields->CLASS_BOARD_BUTTON_POS,
                                    0LL);
                                  classBoardBackSprite = this->fields.classBoardBackSprite;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v248);
                                  AtlasManager__SetDownloadCommonSprite(
                                    classBoardBackSprite,
                                    (System_String_o *)StringLiteral_17658/*"btn_bg_29_2"*/,
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
                                  v250 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPosition_34330940(
                                    v250,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                                    0LL);
                                  gameObject = (__int64)this->fields.classBoardLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v251 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalScaleX(
                                    v251,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                                    0LL);
                                  gameObject = (__int64)this->fields.openClassBoardNumLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v252 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v252,
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
                                  v212 = &StringLiteral_20366/*"icon_friend"*/;
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
                                  v212 = &StringLiteral_20485/*"img_blacklist_requestdate"*/;
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
                                  v212 = &StringLiteral_20484/*"img_blacklist_recorddate"*/;
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
                                  *(UnityEngine_Vector3_o *)&v213 = UnityEngine_Transform__get_localPosition(
                                                                      (UnityEngine_Transform_o *)gameObject,
                                                                      0LL);
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v215 = v213;
                                  v216 = v214;
                                  gameObject = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v261.fields.y = 0.0;
                                  v261.fields.x = v215;
                                  v261.fields.z = v216;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)gameObject,
                                    v261,
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
                                  v212 = &StringLiteral_20365/*"icon_follow"*/;
LABEL_340:
                                  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v212, 0LL);
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
              sub_1BCAA44(gameObject, skillInfoUiWidget);
            }
          }
        }
      }
LABEL_183:
      sub_1BCAA3C(gameObject, skillInfoUiWidget);
    }
  }
  else
  {
    if ( v70 )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v76 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget);
    if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
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

  if ( (byte_4B1140E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B1140E = 1;
  }
  if ( item )
  {
    lockMarkObj = (UnityEngine_Object_o *)this->fields.lockMarkObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      sub_1BCAA3C(removeButton, v6);
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
    sub_1BCAA3C(messageDispButton, isHide);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  float v15; // s0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  float v17; // s3
  float v18; // s1
  float v19; // s2
  float v20; // s0
  float v21; // s3
  float v22; // s1
  float v23; // s2
  UILabel_o *messageLabel; // x21
  System_String_o **v25; // x8

  v5 = item;
  v6 = this;
  if ( (byte_4B1140D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item, isDisp);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_17698/*"btn_message_on"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_6620/*"FRIEND_HIDE_MESSAGE"*/, v11, v12);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_17697/*"btn_message_off"*/, v13, v14);
    byte_4B1140D = 1;
  }
  if ( !v5 )
    goto LABEL_22;
  v15 = 0.73725;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v15 = 1.0;
  if ( !this )
    goto LABEL_22;
  otherUserGameEntity = v5->fields.otherUserGameEntity;
  v17 = 1.0;
  v18 = v15;
  v19 = v15;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v15, 0LL);
  v20 = 0.50196;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v20 = 0.0;
  if ( !this )
    goto LABEL_22;
  v21 = 1.0;
  v22 = v20;
  v23 = v20;
  UILabel__set_effectColor((UILabel_o *)this, *(UnityEngine_Color_o *)&v20, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6620/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(this, item);
  }
  v25 = (System_String_o **)&StringLiteral_17697/*"btn_message_off"*/;
  if ( !isDisp )
    v25 = (System_String_o **)&StringLiteral_17698/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v25, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__setupMessageUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *v4; // x19
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  bool v8; // w2
  FriendOperationItemListViewItemDraw_o *v9; // x0
  FriendOperationItemListViewItem_o *v10; // x1

  v4 = this;
  if ( (byte_4B1140F & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1BCA7E0(&OptionManager_TypeInfo, item, method);
    byte_4B1140F = 1;
  }
  if ( !item )
LABEL_15:
    sub_1BCAA3C(this, item);
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
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v6);
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
          v8 = 1;
          v9 = v4;
          v10 = item;
        }
        else
        {
          v9 = v4;
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