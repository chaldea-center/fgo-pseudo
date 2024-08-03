void __fastcall FriendOperationItemListViewItemDraw___ctor(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *v8; // x0
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49F7833 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B640C8(&int___TypeInfo, v4);
    sub_1B640C8(&SkillIconComponent___TypeInfo, v5);
    sub_1B640C8(&UIIconLabel___TypeInfo, v6);
    byte_49F7833 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v7->static_fields->SvtSkillListMax);
  sub_1B6406C(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1B64170(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B6406C(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B64170(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B6406C(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B6406C(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1B64170(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B6406C(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B64170(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B6406C(&this->fields.appendSkillLevelIconLabelList);
  v8 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_1B64324(0LL);
  max_length = v8->max_length;
  if ( !max_length || (v8->m_Items[1] = 95, max_length == 1) )
    sub_1B6432C(v8, v8);
  v8->m_Items[2] = 46;
  this->fields.OFFER_BUTTON_SIZE = v8;
  sub_1B6406C(&this->fields.OFFER_BUTTON_SIZE);
  *(_QWORD *)&this->fields.REJECT_BUTTON_POS_Y = 0x3F000000FFFFFFCFLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewItemDraw__Awake(
        FriendOperationItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v13; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v15; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v17; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v19; // x19

  if ( (byte_49F782D & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_20098/*"icon_skill_mini"*/, v7);
    sub_1B640C8(&StringLiteral_20240/*"img_friend_skill"*/, v8);
    sub_1B640C8(&StringLiteral_20004/*"icon_append_mini"*/, v9);
    sub_1B640C8(&StringLiteral_20239/*"img_friend_appendskill"*/, v10);
    byte_49F782D = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v11;
  sub_1B6406C(&this->fields.switchSkillUIList);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v13 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_20098/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v15 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_20240/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v17 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v17, (System_String_o *)StringLiteral_20004/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v19 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v19, (System_String_o *)StringLiteral_20239/*"img_friend_appendskill"*/, 0LL);
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
  if ( (byte_49F7832 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F7832 = 1;
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
      sub_1B6432C(this, item);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1B64324(this);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
  __int64 v37; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  bool v39; // w0
  __int64 gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  __int64 v42; // x1
  int32_t kind; // w8
  bool v44; // w22
  UnityEngine_Object_o *v45; // x20
  __int64 v46; // x8
  char v47; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v49; // x21
  const MethodInfo *v50; // x2
  __int64 v51; // x1
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v55; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x1
  int32_t TreasureDeviceLevelIcon; // w0
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
  const MethodInfo *v92; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v94; // x8
  int v95; // w9
  unsigned __int64 v96; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v98; // x14
  struct SkillIconComponent_array *v99; // x8
  __int64 v100; // x22
  struct UnityEngine_GameObject_array *v101; // x8
  const MethodInfo *v102; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v104; // x23
  __int64 v105; // x24
  __int64 v106; // x22
  __int64 v107; // x23
  unsigned __int64 v108; // x24
  struct UnityEngine_GameObject_array *v109; // x9
  int32_t *v110; // x25
  struct SkillIconComponent_array *v111; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v114; // x8
  __int64 v115; // x9
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v122; // x8
  int v123; // w9
  signed __int64 v124; // x10
  unsigned __int64 v125; // x14
  SkillInfo_o *v126; // x14
  struct SkillIconComponent_array *v127; // x8
  __int64 v128; // x22
  struct UnityEngine_GameObject_array *v129; // x8
  unsigned __int64 v130; // x22
  signed __int64 v131; // x23
  struct UnityEngine_GameObject_array *v132; // x9
  SkillInfo_o *v133; // x25
  struct SkillIconComponent_array *v134; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  __int64 v136; // x9
  int v137; // w8
  struct UnityEngine_GameObject_array *v138; // x9
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v140; // x8
  Il2CppObject *appendSkillInfoUiWidget; // x1
  __int64 v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  __int64 v145; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v149; // x22
  __int64 v150; // x23
  __int64 v151; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v153; // w23
  float v154; // s0
  float v155; // s2
  float v156; // s8
  float v157; // s9
  UISprite_o *offerBackSprite; // x21
  struct System_Int32_array *OFFER_BUTTON_SIZE; // x8
  struct System_Int32_array *v160; // x8
  UnityEngine_GameObject_o *v161; // x0
  struct System_Int32_array *v162; // x8
  struct System_Int32_array *v163; // x8
  UnityEngine_GameObject_o *v164; // x0
  struct System_Int32_array *v165; // x8
  struct System_Int32_array *v166; // x8
  UnityEngine_GameObject_o *v167; // x0
  UnityEngine_GameObject_o *v168; // x0
  struct System_Int32_array *v169; // x8
  struct System_Int32_array *v170; // x8
  UnityEngine_GameObject_o *v171; // x0
  UnityEngine_GameObject_o *v172; // x0
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v174; // x0
  __int64 *v175; // x8
  float v176; // s0
  float v177; // s2
  float v178; // s8
  float v179; // s9
  OtherUserGameEntity_o *v180; // x21
  int32_t Kind_37377152; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v184; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v186; // x2
  float v187; // s0
  float v188; // s8
  float v189; // s0
  float v190; // s9
  UnityEngine_GameObject_o *v191; // x0
  float LocalPositionX; // s0
  float v193; // s10
  UnityEngine_GameObject_o *v194; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v196; // x8
  __int64 v197; // x8
  struct OtherUserGameEntity_o *v198; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  Il2CppObject **v200; // x9
  Il2CppObject *v201; // x21
  Il2CppObject *v202; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UnityEngine_GameObject_o *v204; // x20
  BalanceConfig_c *v205; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v207; // x0
  UnityEngine_GameObject_o *v208; // x0
  UnityEngine_GameObject_o *v209; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v211; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  UnityEngine_Vector3_o v217; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v218; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F782E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&BalanceConfig_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Grade_TypeInfo, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&OptionManager_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&StringLiteral_20190/*"img_blacklist_requestdate"*/, v23);
    sub_1B640C8(&StringLiteral_17414/*"btn_bg_27_2"*/, v24);
    sub_1B640C8(&StringLiteral_6338/*"FFFFFF"*/, v25);
    sub_1B640C8(&StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, v26);
    sub_1B640C8(&StringLiteral_17415/*"btn_bg_29_2"*/, v27);
    sub_1B640C8(&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/, v28);
    sub_1B640C8(&StringLiteral_17413/*"btn_bg_26_2"*/, v29);
    sub_1B640C8(&StringLiteral_20189/*"img_blacklist_recorddate"*/, v30);
    sub_1B640C8(&StringLiteral_6337/*"FFFF00"*/, v31);
    sub_1B640C8(&StringLiteral_9256/*"NO_ENTRY_NAME"*/, v32);
    sub_1B640C8(&StringLiteral_9280/*"NP_COLOR_NAME"*/, v33);
    sub_1B640C8(&StringLiteral_15959/*"[{0}]+{1}[-]"*/, v34);
    sub_1B640C8(&StringLiteral_6465/*"FRIEND_BUTTON_CANCEL"*/, v35);
    sub_1B640C8(&StringLiteral_20073/*"icon_friend"*/, v36);
    sub_1B640C8(&StringLiteral_20072/*"icon_follow"*/, v37);
    byte_49F782E = 1;
  }
  tdInfo = 0LL;
  v211 = 0LL;
  skillInfoList = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v39 = UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
  if ( item )
  {
    if ( v39 )
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
      v44 = kind == 9 || kind == 3;
      gameObject = (__int64)item->fields.otherUserGameEntity;
      if ( !gameObject )
        goto LABEL_183;
      v46 = *(_QWORD *)(gameObject + 96);
      if ( !v46 )
        goto LABEL_183;
      if ( !*(_DWORD *)(v46 + 24) )
        goto LABEL_395;
      v47 = 1;
      ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)gameObject,
                            item->fields.classPos,
                            1,
                            item->fields.displayServantType,
                            *(_DWORD *)(v46 + 32),
                            0LL);
      v49 = ServantLeaderInfo;
      if ( ServantLeaderInfo )
      {
        if ( ServantLeaderInfo->fields.userSvtId )
          goto LABEL_36;
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( !equipTarget1 )
          goto LABEL_36;
        v105 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v104 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v215.fields.currentCryptoKey = v105;
        *(_QWORD *)&v215.fields.fakeValue = v104;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v215, 0LL) )
        {
LABEL_36:
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v49, 0LL);
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
      ServantFaceIconComponent__Set_37909296(
        (ServantFaceIconComponent_o *)gameObject,
        v49,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        v44,
        0,
        0LL);
      FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v50);
      playerNameLabel = this->fields.playerNameLabel;
      if ( (byte_49F7828 & 1) == 0 )
      {
        gameObject = sub_1B640C8(&StringLiteral_18979/*"error"*/, v51);
        byte_49F7828 = 1;
      }
      if ( !playerNameLabel )
        goto LABEL_183;
      otherUserGameEntity = item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
        p_userName = &otherUserGameEntity->fields.userName;
      else
        p_userName = (System_String_o **)&StringLiteral_18979/*"error"*/;
      UILabel__set_text(playerNameLabel, *p_userName, 0LL);
      v55 = item->fields.otherUserGameEntity;
      gameObject = (__int64)this->fields.playerLevelIconLabel;
      if ( v55 )
      {
        userLv = v55->fields.userLv;
        if ( !gameObject )
          goto LABEL_183;
      }
      else
      {
        userLv = 1;
        if ( !gameObject )
          goto LABEL_183;
      }
      UIIconLabel__Set_37921148((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
      servantNameLabel = this->fields.servantNameLabel;
      gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v58);
      if ( !servantNameLabel )
        goto LABEL_183;
      UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v59);
      TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v60);
      if ( item->fields.servantEntity )
      {
        v62 = TreasureDeviceLevelIcon;
        v63 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
          v63 = sub_1BB5FA4();
        v64 = *(_QWORD *)(*(_QWORD *)(v63 + 192) + 16LL);
        if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
          v64 = sub_1BB5FA4();
        gameObject = **(_QWORD **)(v64 + 184);
        if ( !gameObject )
          goto LABEL_183;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        if ( !v49 )
          goto LABEL_183;
        v65 = (ServantLimitAddMaster_o *)gameObject;
        FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v49, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v49, 0LL) )
        {
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_183;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v69 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
        v70 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v214.fields.currentCryptoKey = v69;
        *(_QWORD *)&v214.fields.fakeValue = v68;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v214, 0LL);
        if ( !v70 )
          goto LABEL_183;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v70,
                                       gameObject,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v49->fields.svtId, 0LL);
        if ( !tdInfo || !v65 )
          goto LABEL_183;
        OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                            v65,
                            gameObject,
                            ServantLimitCountSealAfter,
                            tdInfo->fields.name,
                            tdInfo->fields.lv,
                            0LL);
        v73 = (System_String_o **)&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/;
        v74 = v62 <= 1;
        v75 = (Il2CppObject *)OverwriteTDName;
        if ( v74 )
          v73 = (System_String_o **)&StringLiteral_9280/*"NP_COLOR_NAME"*/;
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
        UIRangeLabel__Set(svtNpTitleLabel, v78, (System_String_o *)gameObject, 0, 0, 0LL);
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
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9256/*"NO_ENTRY_NAME"*/, 0LL);
        if ( !v81 )
          goto LABEL_183;
        UIRangeLabel__Set(v81, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
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
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
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
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
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
        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
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
      if ( item->fields.servantEntity )
      {
        gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v92);
        skillIconList = this->fields.skillIconList;
        if ( !skillIconList )
          goto LABEL_183;
        v94 = *(_QWORD *)&skillIconList->max_length;
        if ( v94 << 32 >= 1 )
        {
          v95 = 0;
          v96 = 0LL;
          while ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( (__int64)v96 < (int)max_length )
            {
              if ( v96 >= max_length )
                goto LABEL_395;
              v98 = skillInfoList->m_Items[v96];
              if ( v98 && v98->fields.id >= 1 )
                v95 = v96 + 1;
            }
            if ( (__int64)++v96 >= (int)v94 )
              goto LABEL_135;
          }
          goto LABEL_183;
        }
        v95 = 0;
LABEL_135:
        if ( (int)v94 >= 1 )
        {
          v106 = v95;
          v107 = 4LL;
          do
          {
            v108 = v107 - 4;
            if ( v107 - 4 >= v106 )
            {
              skillBaseList = this->fields.skillBaseList;
              if ( !skillBaseList )
                goto LABEL_183;
              if ( v108 >= skillBaseList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillBaseList->obj.klass + v107);
              if ( !gameObject )
                goto LABEL_183;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_183;
              if ( v108 >= skillInfoList->max_length )
                goto LABEL_395;
              v109 = this->fields.skillBaseList;
              if ( !v109 )
                goto LABEL_183;
              if ( v108 >= v109->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&v109->obj.klass + v107);
              if ( !gameObject )
                goto LABEL_183;
              v110 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v107);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              v111 = this->fields.skillIconList;
              if ( !v111 )
                goto LABEL_183;
              if ( v108 >= v111->max_length )
                goto LABEL_395;
              if ( !v110 )
                goto LABEL_183;
              gameObject = *((_QWORD *)&v111->obj.klass + v107);
              if ( !gameObject )
                goto LABEL_183;
              SkillIconComponent__Set_37920336(
                (SkillIconComponent_o *)gameObject,
                v110[4],
                v110[5],
                v110[12],
                v110[13],
                0LL);
              skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
              if ( !skillLevelIconLabelList )
                goto LABEL_183;
              if ( v108 >= skillLevelIconLabelList->max_length )
                goto LABEL_395;
              gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v107);
              if ( !gameObject )
                goto LABEL_183;
              UIIconLabel__Set_37921148((UIIconLabel_o *)gameObject, 48, v110[5], 0, 0, 0LL, 0, 0, 0, 0LL);
            }
            v114 = this->fields.skillIconList;
            if ( !v114 )
              goto LABEL_183;
            v115 = v107 - 3;
            ++v107;
          }
          while ( v115 < (int)v114->max_length );
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
              v117 = *(_QWORD *)(gameObject + 16);
              v118 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(gameObject + 28);
              if ( v117 )
              {
                v119 = *(int *)(gameObject + 24);
                if ( (unsigned int)v119 >= *(_DWORD *)(v117 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
                }
                else
                {
                  v120 = v117 + 8 * v119;
                  *(_DWORD *)(gameObject + 24) = v119 + 1;
                  *(_QWORD *)(v120 + 32) = skillInfoUiWidget;
                  gameObject = sub_1B6406C(v120 + 32);
                }
                goto LABEL_164;
              }
            }
          }
        }
      }
      else
      {
        v99 = this->fields.skillIconList;
        if ( v99 )
        {
          v100 = 0LL;
          while ( (int)v100 < (signed int)v99->max_length )
          {
            v101 = this->fields.skillBaseList;
            if ( !v101 )
              goto LABEL_183;
            if ( (unsigned int)v100 >= v101->max_length )
              goto LABEL_395;
            gameObject = (__int64)v101->m_Items[v100];
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              v99 = this->fields.skillIconList;
              ++v100;
              if ( v99 )
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
                gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v211, v102);
                appendSkillIconList = this->fields.appendSkillIconList;
                if ( !appendSkillIconList )
                  goto LABEL_183;
                v122 = *(_QWORD *)&appendSkillIconList->max_length;
                if ( v122 << 32 < 1 )
                {
                  v123 = 0;
                }
                else
                {
                  v123 = 0;
                  v124 = 0LL;
                  do
                  {
                    if ( v211 )
                    {
                      v125 = v211->max_length;
                      if ( v124 < (int)v125 )
                      {
                        if ( v124 >= v125 )
                          goto LABEL_395;
                        v126 = v211->m_Items[v124];
                        if ( v126 && v126->fields.id >= 1 )
                          v123 = v124 + 1;
                      }
                    }
                    ++v124;
                  }
                  while ( v124 < (int)v122 );
                }
                if ( (int)v122 >= 1 )
                {
                  v130 = 0LL;
                  v131 = v123;
                  do
                  {
                    if ( (__int64)v130 >= v131 )
                    {
                      appendSkillBaseList = this->fields.appendSkillBaseList;
                      if ( !appendSkillBaseList )
                        goto LABEL_183;
                      if ( v130 >= appendSkillBaseList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillBaseList->m_Items[v130];
                      if ( !gameObject )
                        goto LABEL_183;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    }
                    else
                    {
                      if ( !v211 )
                        goto LABEL_183;
                      if ( v130 >= v211->max_length )
                        goto LABEL_395;
                      v132 = this->fields.appendSkillBaseList;
                      if ( !v132 )
                        goto LABEL_183;
                      if ( v130 >= v132->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)v132->m_Items[v130];
                      if ( !gameObject )
                        goto LABEL_183;
                      v133 = v211->m_Items[v130];
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                      v134 = this->fields.appendSkillIconList;
                      if ( !v134 )
                        goto LABEL_183;
                      if ( v130 >= v134->max_length )
                        goto LABEL_395;
                      if ( !v133 )
                        goto LABEL_183;
                      gameObject = (__int64)v134->m_Items[v130];
                      if ( !gameObject )
                        goto LABEL_183;
                      SkillIconComponent__Set_37920336(
                        (SkillIconComponent_o *)gameObject,
                        v133->fields.id,
                        v133->fields.lv,
                        v133->fields.strengthStatus,
                        v133->fields.skillRecord,
                        0LL);
                      appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                      if ( !appendSkillLevelIconLabelList )
                        goto LABEL_183;
                      if ( v130 >= appendSkillLevelIconLabelList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillLevelIconLabelList->m_Items[v130];
                      if ( !gameObject )
                        goto LABEL_183;
                      UIIconLabel__Set_37921148(
                        (UIIconLabel_o *)gameObject,
                        48,
                        v133->fields.lv,
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
                        v136 = *(_QWORD *)(gameObject + 184);
                        v137 = *(_DWORD *)(v136 + 1196);
                        if ( v130 )
                          v137 += *(_DWORD *)(v136 + 1200) * v130;
                        v138 = this->fields.appendSkillBaseList;
                        if ( !v138 )
                          goto LABEL_183;
                        if ( v130 >= v138->max_length )
                          goto LABEL_395;
                        GameObjectExtensions__SetLocalPositionX(v138->m_Items[v130], (float)v137, 0LL);
                      }
                    }
                    v140 = this->fields.appendSkillIconList;
                    if ( !v140 )
                      goto LABEL_183;
                  }
                  while ( (__int64)++v130 < (int)v140->max_length );
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
                appendSkillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
                v142 = *(_QWORD *)(gameObject + 16);
                v143 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(gameObject + 28);
                if ( !v142 )
                  goto LABEL_183;
                v144 = *(int *)(gameObject + 24);
                if ( (unsigned int)v144 >= *(_DWORD *)(v142 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    appendSkillInfoUiWidget,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
                }
                else
                {
                  v145 = v142 + 8 * v144;
                  *(_DWORD *)(gameObject + 24) = v144 + 1;
                  *(_QWORD *)(v145 + 32) = appendSkillInfoUiWidget;
                  sub_1B6406C(v145 + 32);
                }
              }
              else
              {
                v127 = this->fields.appendSkillIconList;
                if ( !v127 )
                  goto LABEL_183;
                v128 = 0LL;
                while ( (int)v128 < (signed int)v127->max_length )
                {
                  v129 = this->fields.appendSkillBaseList;
                  if ( !v129 )
                    goto LABEL_183;
                  if ( (unsigned int)v128 >= v129->max_length )
                    goto LABEL_395;
                  gameObject = (__int64)v129->m_Items[v128];
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    v127 = this->fields.appendSkillIconList;
                    ++v128;
                    if ( v127 )
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
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
                v149 = this->fields.svtCommandCardList;
                if ( v47 & 1 | (servantEntity == 0LL) )
                {
                  if ( !v149 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
                }
                else
                {
                  v151 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
                  v150 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v216.fields.currentCryptoKey = v151;
                  *(_QWORD *)&v216.fields.fakeValue = v150;
                  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v216, 0LL);
                  if ( !v49 )
                    goto LABEL_183;
                  commandCardParam = v49->fields.commandCardParam;
                  v153 = gameObject;
                  gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v49, 0LL);
                  if ( !v149 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Set_37898232(
                    v149,
                    v153,
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
              *(UnityEngine_Vector3_o *)&v154 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.removeButton;
              if ( !gameObject )
                goto LABEL_183;
              v156 = v154;
              v157 = v155;
              gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_183;
              v217.fields.y = -45.0;
              v217.fields.x = v156;
              v217.fields.z = v157;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v217, 0LL);
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
                             (System_String_o *)StringLiteral_17413/*"btn_bg_26_2"*/,
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
                v160 = this->fields.OFFER_BUTTON_SIZE;
                if ( !v160 )
                  goto LABEL_183;
                if ( v160->max_length > 1 )
                {
                  gameObject = (__int64)this->fields.offerBackSprite;
                  if ( !gameObject )
                    goto LABEL_183;
                  UIWidget__set_height((UIWidget_o *)gameObject, v160->m_Items[2], 0LL);
                  gameObject = (__int64)this->fields.offerButton;
                  if ( !gameObject )
                    goto LABEL_183;
                  v161 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v161, 343.5, 0LL);
                  gameObject = AtlasManager__SetDownloadCommonSprite(
                                 this->fields.removeBackSprite,
                                 (System_String_o *)StringLiteral_17414/*"btn_bg_27_2"*/,
                                 0LL);
                  v162 = this->fields.OFFER_BUTTON_SIZE;
                  if ( !v162 )
                    goto LABEL_183;
                  if ( v162->max_length )
                  {
                    gameObject = (__int64)this->fields.removeBackSprite;
                    if ( !gameObject )
                      goto LABEL_183;
                    UIWidget__set_width((UIWidget_o *)gameObject, v162->m_Items[1], 0LL);
                    v163 = this->fields.OFFER_BUTTON_SIZE;
                    if ( !v163 )
                      goto LABEL_183;
                    if ( v163->max_length > 1 )
                    {
                      gameObject = (__int64)this->fields.removeBackSprite;
                      if ( !gameObject )
                        goto LABEL_183;
                      UIWidget__set_height((UIWidget_o *)gameObject, v163->m_Items[2], 0LL);
                      gameObject = (__int64)this->fields.removeButton;
                      if ( !gameObject )
                        goto LABEL_183;
                      v164 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      GameObjectExtensions__SetLocalPositionX(v164, 343.5, 0LL);
                      gameObject = AtlasManager__SetDownloadCommonSprite(
                                     this->fields.registBackSprite,
                                     (System_String_o *)StringLiteral_17413/*"btn_bg_26_2"*/,
                                     0LL);
                      v165 = this->fields.OFFER_BUTTON_SIZE;
                      if ( !v165 )
                        goto LABEL_183;
                      if ( v165->max_length )
                      {
                        gameObject = (__int64)this->fields.registBackSprite;
                        if ( !gameObject )
                          goto LABEL_183;
                        UIWidget__set_width((UIWidget_o *)gameObject, v165->m_Items[1], 0LL);
                        v166 = this->fields.OFFER_BUTTON_SIZE;
                        if ( !v166 )
                          goto LABEL_183;
                        if ( v166->max_length > 1 )
                        {
                          gameObject = (__int64)this->fields.registBackSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          UIWidget__set_height((UIWidget_o *)gameObject, v166->m_Items[2], 0LL);
                          gameObject = (__int64)this->fields.registButton;
                          if ( !gameObject )
                            goto LABEL_183;
                          v167 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v167, 343.5, 0LL);
                          gameObject = (__int64)this->fields.registTitleSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v168, this->fields.BLACK_LIST_BUTTON_TITLE_POS_X, 0LL);
                          gameObject = AtlasManager__SetDownloadCommonSprite(
                                         this->fields.removeBackSprite2,
                                         (System_String_o *)StringLiteral_17414/*"btn_bg_27_2"*/,
                                         0LL);
                          v169 = this->fields.OFFER_BUTTON_SIZE;
                          if ( !v169 )
                            goto LABEL_183;
                          if ( v169->max_length )
                          {
                            gameObject = (__int64)this->fields.removeBackSprite2;
                            if ( !gameObject )
                              goto LABEL_183;
                            UIWidget__set_width((UIWidget_o *)gameObject, v169->m_Items[1], 0LL);
                            v170 = this->fields.OFFER_BUTTON_SIZE;
                            if ( !v170 )
                              goto LABEL_183;
                            if ( v170->max_length > 1 )
                            {
                              gameObject = (__int64)this->fields.removeBackSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              UIWidget__set_height((UIWidget_o *)gameObject, v170->m_Items[2], 0LL);
                              gameObject = (__int64)this->fields.removeButton2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v171 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(v171, 343.5, 0LL);
                              gameObject = (__int64)this->fields.removeTitleSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v172 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(
                                v172,
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
                                                          (System_String_o *)StringLiteral_6465/*"FRIEND_BUTTON_CANCEL"*/,
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
                                  v174 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v174,
                                    (float)this->fields.REJECT_BUTTON_POS_Y,
                                    0LL);
LABEL_341:
                                  v180 = item->fields.otherUserGameEntity;
                                  if ( !Grade_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
                                  Kind_37377152 = Grade__GetKind_37377152(v180, 0LL);
                                  SupportBgImage = Grade__GetSupportBgImage(Kind_37377152, 0LL);
                                  baseSpr = this->fields.baseSpr;
                                  v184 = SupportBgImage;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetGradeIcon(baseSpr, v184, 0LL);
                                  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( !UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
                                    goto LABEL_354;
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  LODWORD(v187) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v188 = v187;
                                  LODWORD(v189) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                                                (UserGradeComponent_o *)gameObject,
                                                                0LL);
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v190 = v189;
                                  v191 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  LocalPositionX = GameObjectExtensions__GetLocalPositionX(v191, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v193 = LocalPositionX;
                                  v194 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionX(
                                    v194,
                                    (float)(v190 * 0.5) + (float)(v188 + v193),
                                    0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_37377152, 0LL);
LABEL_354:
                                  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v186);
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
                                  v196 = *(_QWORD *)(gameObject + 96);
                                  if ( !v196 )
                                    goto LABEL_183;
                                  if ( !*(_DWORD *)(v196 + 24) )
                                    goto LABEL_395;
                                  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)gameObject,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          *(_DWORD *)(v196 + 32),
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_369;
                                  v197 = *(_QWORD *)(gameObject + 40);
                                  if ( v197 < 1 )
                                    goto LABEL_369;
                                  v198 = item->fields.otherUserGameEntity;
                                  if ( !v198 )
                                    goto LABEL_183;
                                  if ( v198->fields.pushUserSvtId != v197 )
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
                                    v200 = (Il2CppObject **)&StringLiteral_6337/*"FFFF00"*/;
                                  else
                                    v200 = (Il2CppObject **)&StringLiteral_6338/*"FFFFFF"*/;
                                  v201 = *v200;
                                  OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                                  v202 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                           int_TypeInfo,
                                                           &OpenClassBoardNum_k__BackingField);
                                  gameObject = (__int64)System_String__Format_61389768(
                                                          (System_String_o *)StringLiteral_15959/*"[{0}]+{1}[-]"*/,
                                                          v201,
                                                          v202,
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
                                  v204 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  v205 = BalanceConfig_TypeInfo;
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                    v205 = BalanceConfig_TypeInfo;
                                  }
                                  GameObjectExtensions__SetLocalPosition_33375356(
                                    v204,
                                    v205->static_fields->CLASS_BOARD_BUTTON_POS,
                                    0LL);
                                  classBoardBackSprite = this->fields.classBoardBackSprite;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetDownloadCommonSprite(
                                    classBoardBackSprite,
                                    (System_String_o *)StringLiteral_17415/*"btn_bg_29_2"*/,
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
                                  v207 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPosition_33375356(
                                    v207,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                                    0LL);
                                  gameObject = (__int64)this->fields.classBoardLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v208 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalScaleX(
                                    v208,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                                    0LL);
                                  gameObject = (__int64)this->fields.openClassBoardNumLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v209 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v209,
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
                                  v175 = &StringLiteral_20073/*"icon_friend"*/;
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
                                  v175 = &StringLiteral_20190/*"img_blacklist_requestdate"*/;
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
                                  v175 = &StringLiteral_20189/*"img_blacklist_recorddate"*/;
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
                                  *(UnityEngine_Vector3_o *)&v176 = UnityEngine_Transform__get_localPosition(
                                                                      (UnityEngine_Transform_o *)gameObject,
                                                                      0LL);
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v178 = v176;
                                  v179 = v177;
                                  gameObject = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v218.fields.y = 0.0;
                                  v218.fields.x = v178;
                                  v218.fields.z = v179;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)gameObject,
                                    v218,
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
                                  v175 = &StringLiteral_20072/*"icon_follow"*/;
LABEL_340:
                                  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v175, 0LL);
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
              sub_1B6432C(gameObject, v42);
            }
          }
        }
      }
LABEL_183:
      sub_1B64324(gameObject);
    }
  }
  else
  {
    if ( v39 )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v45 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
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
  UnityEngine_GameObject_o *removeButton; // x0
  bool isLock; // w1
  int32_t kind; // w8

  if ( (byte_49F7830 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_49F7830 = 1;
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
      sub_1B64324(removeButton);
    }
  }
}


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
    sub_1B64324(messageDispButton);
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
  FriendOperationItemListViewItemDraw_o *message; // x1
  System_String_o **v22; // x8

  v6 = this;
  if ( (byte_49F782F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_17451/*"btn_message_on"*/, v8);
    sub_1B640C8(&StringLiteral_6473/*"FRIEND_HIDE_MESSAGE"*/, v9);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_17450/*"btn_message_off"*/, v10);
    byte_49F782F = 1;
  }
  if ( !item )
    goto LABEL_22;
  v11 = 0.73725;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v11 = 1.0;
  if ( !this )
    goto LABEL_22;
  otherUserGameEntity = item->fields.otherUserGameEntity;
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
    message = (FriendOperationItemListViewItemDraw_o *)otherUserGameEntity->fields.message;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6473/*"FRIEND_HIDE_MESSAGE"*/, 0LL);
    message = this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)message, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1B64324(this);
  }
  v22 = (System_String_o **)&StringLiteral_17450/*"btn_message_off"*/;
  if ( !isDisp )
    v22 = (System_String_o **)&StringLiteral_17451/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v22, 0LL);
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
  if ( (byte_49F7831 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1B640C8(&OptionManager_TypeInfo, item);
    byte_49F7831 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1B64324(this);
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