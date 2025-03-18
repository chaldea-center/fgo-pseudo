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
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4C1CFAC & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1C3B764(&int___TypeInfo, v4);
    sub_1C3B764(&SkillIconComponent___TypeInfo, v5);
    sub_1C3B764(&UIIconLabel___TypeInfo, v6);
    byte_4C1CFAC = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1C3B80C(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v7->static_fields->SvtSkillListMax);
  sub_1C3B708(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1C3B80C(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1C3B708(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1C3B80C(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1C3B708(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1C3B80C(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C3B708(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1C3B80C(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C3B708(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1C3B80C(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C3B708(&this->fields.appendSkillLevelIconLabelList);
  v8 = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_1C3B9C0(0LL, v9);
  max_length = v8->max_length;
  if ( !max_length || (v8->m_Items[1] = 95, max_length == 1) )
    sub_1C3B9C8(v8, v8);
  v8->m_Items[2] = 46;
  this->fields.OFFER_BUTTON_SIZE = v8;
  sub_1C3B708(&this->fields.OFFER_BUTTON_SIZE);
  *(_QWORD *)&this->fields.REJECT_BUTTON_POS_Y = 0x3F000000FFFFFFCFLL;
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

  if ( (byte_4C1CFA6 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_20579/*"java.io.IOException"*/, v6);
    sub_1C3B764(&StringLiteral_20730/*"leaseManagerPollTime"*/, v7);
    sub_1C3B764(&StringLiteral_20478/*"isPlaying"*/, v8);
    sub_1C3B764(&StringLiteral_20729/*"leader"*/, v9);
    byte_4C1CFA6 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1C3B708(&this->fields.switchSkillUIList);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v12 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v12, (System_String_o *)StringLiteral_20579/*"java.io.IOException"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_20730/*"leaseManagerPollTime"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v16 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20478/*"isPlaying"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_20729/*"leader"*/, 0LL);
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
  if ( (byte_4C1CFAB & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C1CFAB = 1;
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
      sub_1C3B9C8(this, item);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1C3B9C0(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  int32_t kind; // w8
  bool v44; // w22
  UnityEngine_Object_o *v45; // x20
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
  __int64 v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v121; // x8
  int v122; // w9
  signed __int64 v123; // x10
  unsigned __int64 v124; // x14
  SkillInfo_o *v125; // x14
  struct SkillIconComponent_array *v126; // x8
  __int64 v127; // x22
  struct UnityEngine_GameObject_array *v128; // x8
  unsigned __int64 v129; // x22
  signed __int64 v130; // x23
  struct UnityEngine_GameObject_array *v131; // x9
  SkillInfo_o *v132; // x25
  struct SkillIconComponent_array *v133; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  __int64 v135; // x9
  int v136; // w8
  struct UnityEngine_GameObject_array *v137; // x9
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v139; // x8
  __int64 v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  __int64 v143; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v147; // x22
  __int64 v148; // x23
  __int64 v149; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v151; // w23
  float v152; // s0
  float v153; // s2
  float v154; // s8
  float v155; // s9
  UISprite_o *offerBackSprite; // x21
  struct System_Int32_array *OFFER_BUTTON_SIZE; // x8
  struct System_Int32_array *v158; // x8
  UnityEngine_GameObject_o *v159; // x0
  struct System_Int32_array *v160; // x8
  struct System_Int32_array *v161; // x8
  UnityEngine_GameObject_o *v162; // x0
  struct System_Int32_array *v163; // x8
  struct System_Int32_array *v164; // x8
  UnityEngine_GameObject_o *v165; // x0
  UnityEngine_GameObject_o *v166; // x0
  struct System_Int32_array *v167; // x8
  struct System_Int32_array *v168; // x8
  UnityEngine_GameObject_o *v169; // x0
  UnityEngine_GameObject_o *v170; // x0
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v172; // x0
  __int64 *v173; // x8
  float v174; // s0
  float v175; // s2
  float v176; // s8
  float v177; // s9
  OtherUserGameEntity_o *v178; // x21
  int32_t Kind_39109416; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v182; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v184; // x2
  float v185; // s0
  float v186; // s8
  float v187; // s0
  float v188; // s9
  UnityEngine_GameObject_o *v189; // x0
  float LocalPositionX; // s0
  float v191; // s10
  UnityEngine_GameObject_o *v192; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v194; // x8
  __int64 v195; // x8
  struct OtherUserGameEntity_o *v196; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  Il2CppObject **v201; // x9
  Il2CppObject *v202; // x21
  Il2CppObject *v203; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UnityEngine_GameObject_o *v205; // x20
  BalanceConfig_c *v206; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v208; // x0
  UnityEngine_GameObject_o *v209; // x0
  UnityEngine_GameObject_o *v210; // x0
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v212; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  UnityEngine_Vector3_o v218; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v219; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1CFA7 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&BalanceConfig_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Grade_TypeInfo, v12);
    sub_1C3B764(&int_TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v16);
    sub_1C3B764(&LocalizationManager_TypeInfo, v17);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1C3B764(&OptionManager_TypeInfo, v20);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C3B764(&StringLiteral_20676/*"koi8-r"*/, v23);
    sub_1C3B764(&StringLiteral_17818/*"command_code_lock"*/, v24);
    sub_1C3B764(&StringLiteral_6531/*"Feb"*/, v25);
    sub_1C3B764(&StringLiteral_13597/*"The base type is the final extension."*/, v26);
    sub_1C3B764(&StringLiteral_17819/*"command_code_setstatus"*/, v27);
    sub_1C3B764(&StringLiteral_9518/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/, v28);
    sub_1C3B764(&StringLiteral_17817/*"command_code_detach"*/, v29);
    sub_1C3B764(&StringLiteral_20675/*"koi8"*/, v30);
    sub_1C3B764(&StringLiteral_6530/*"Feature requires a process identifier."*/, v31);
    sub_1C3B764(&StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, v32);
    sub_1C3B764(&StringLiteral_9512/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v33);
    sub_1C3B764(&StringLiteral_16343/*"adid"*/, v34);
    sub_1C3B764(&StringLiteral_6655/*"Flags={0}, TryOffset={1}, TryLength={2}, HandlerOffset={3}, HandlerLength={4}"*/, v35);
    sub_1C3B764(&StringLiteral_20553/*"itemData"*/, v36);
    sub_1C3B764(&StringLiteral_20552/*"item/use"*/, v37);
    byte_4C1CFA7 = 1;
  }
  tdInfo = 0LL;
  v212 = 0LL;
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
        *(_QWORD *)&v216.fields.currentCryptoKey = v105;
        *(_QWORD *)&v216.fields.fakeValue = v104;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v216, 0LL) )
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
      ServantFaceIconComponent__Set_39648128(
        (ServantFaceIconComponent_o *)gameObject,
        v49,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        v44,
        0,
        0LL);
      FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v50);
      playerNameLabel = this->fields.playerNameLabel;
      if ( (byte_4C1CFA1 & 1) == 0 )
      {
        gameObject = sub_1C3B764(&StringLiteral_19427/*"getNotificationColor"*/, skillInfoUiWidget);
        byte_4C1CFA1 = 1;
      }
      if ( !playerNameLabel )
        goto LABEL_183;
      otherUserGameEntity = item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
        p_userName = &otherUserGameEntity->fields.userName;
      else
        p_userName = (System_String_o **)&StringLiteral_19427/*"getNotificationColor"*/;
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
      UIIconLabel__Set_39659976((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
      servantNameLabel = this->fields.servantNameLabel;
      gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v57);
      if ( !servantNameLabel )
        goto LABEL_183;
      UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v58);
      TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v59);
      if ( item->fields.servantEntity )
      {
        v62 = TreasureDeviceLevelIcon;
        v63 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
          v63 = sub_1C8D640(v61);
        v64 = *(_QWORD *)(*(_QWORD *)(v63 + 192) + 16LL);
        if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
          v64 = sub_1C8D640(v61);
        gameObject = **(_QWORD **)(v64 + 184);
        if ( !gameObject )
          goto LABEL_183;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        if ( !v49 )
          goto LABEL_183;
        v65 = (ServantLimitAddMaster_o *)gameObject;
        FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v49, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetSpoilerSetting(0LL) && !ServantLeaderInfo__IsNpc(v49, 0LL) )
        {
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_183;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v69 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
        v70 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v215.fields.currentCryptoKey = v69;
        *(_QWORD *)&v215.fields.fakeValue = v68;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v215, 0LL);
        if ( !v70 )
          goto LABEL_183;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v70,
                                       gameObject,
                                       FriendNpNameDispLimitCount,
                                       0LL);
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v49->fields.svtId, 0LL);
        if ( !tdInfo || !v65 )
          goto LABEL_183;
        OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                            v65,
                            gameObject,
                            ServantLimitCountSealAfter,
                            tdInfo->fields.name,
                            tdInfo->fields.lv,
                            0LL);
        v73 = (System_String_o **)&StringLiteral_9518/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/;
        v74 = v62 <= 1;
        v75 = (Il2CppObject *)OverwriteTDName;
        if ( v74 )
          v73 = (System_String_o **)&StringLiteral_9512/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/;
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
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9488/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL);
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
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"The base type is the final extension."*/, 0LL);
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
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"The base type is the final extension."*/, 0LL);
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
        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"The base type is the final extension."*/, 0LL);
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
              SkillIconComponent__Set_39659172(
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
              UIIconLabel__Set_39659976((UIIconLabel_o *)gameObject, 48, v110[5], 0, 0, 0LL, 0, 0, 0, 0LL);
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
              v116 = *(_QWORD *)(gameObject + 16);
              v117 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++*(_DWORD *)(gameObject + 28);
              if ( v116 )
              {
                v118 = *(int *)(gameObject + 24);
                if ( (unsigned int)v118 >= *(_DWORD *)(v116 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
                }
                else
                {
                  v119 = v116 + 8 * v118;
                  *(_DWORD *)(gameObject + 24) = v118 + 1;
                  *(_QWORD *)(v119 + 32) = skillInfoUiWidget;
                  gameObject = sub_1C3B708(v119 + 32);
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
                gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v212, v102);
                appendSkillIconList = this->fields.appendSkillIconList;
                if ( !appendSkillIconList )
                  goto LABEL_183;
                v121 = *(_QWORD *)&appendSkillIconList->max_length;
                if ( v121 << 32 < 1 )
                {
                  v122 = 0;
                }
                else
                {
                  v122 = 0;
                  v123 = 0LL;
                  do
                  {
                    if ( v212 )
                    {
                      v124 = v212->max_length;
                      if ( v123 < (int)v124 )
                      {
                        if ( v123 >= v124 )
                          goto LABEL_395;
                        v125 = v212->m_Items[v123];
                        if ( v125 && v125->fields.id >= 1 )
                          v122 = v123 + 1;
                      }
                    }
                    ++v123;
                  }
                  while ( v123 < (int)v121 );
                }
                if ( (int)v121 >= 1 )
                {
                  v129 = 0LL;
                  v130 = v122;
                  do
                  {
                    if ( (__int64)v129 >= v130 )
                    {
                      appendSkillBaseList = this->fields.appendSkillBaseList;
                      if ( !appendSkillBaseList )
                        goto LABEL_183;
                      if ( v129 >= appendSkillBaseList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillBaseList->m_Items[v129];
                      if ( !gameObject )
                        goto LABEL_183;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    }
                    else
                    {
                      if ( !v212 )
                        goto LABEL_183;
                      if ( v129 >= v212->max_length )
                        goto LABEL_395;
                      v131 = this->fields.appendSkillBaseList;
                      if ( !v131 )
                        goto LABEL_183;
                      if ( v129 >= v131->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)v131->m_Items[v129];
                      if ( !gameObject )
                        goto LABEL_183;
                      v132 = v212->m_Items[v129];
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                      v133 = this->fields.appendSkillIconList;
                      if ( !v133 )
                        goto LABEL_183;
                      if ( v129 >= v133->max_length )
                        goto LABEL_395;
                      if ( !v132 )
                        goto LABEL_183;
                      gameObject = (__int64)v133->m_Items[v129];
                      if ( !gameObject )
                        goto LABEL_183;
                      SkillIconComponent__Set_39659172(
                        (SkillIconComponent_o *)gameObject,
                        v132->fields.id,
                        v132->fields.lv,
                        v132->fields.strengthStatus,
                        v132->fields.skillRecord,
                        0LL);
                      appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                      if ( !appendSkillLevelIconLabelList )
                        goto LABEL_183;
                      if ( v129 >= appendSkillLevelIconLabelList->max_length )
                        goto LABEL_395;
                      gameObject = (__int64)appendSkillLevelIconLabelList->m_Items[v129];
                      if ( !gameObject )
                        goto LABEL_183;
                      UIIconLabel__Set_39659976(
                        (UIIconLabel_o *)gameObject,
                        48,
                        v132->fields.lv,
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
                        v135 = *(_QWORD *)(gameObject + 184);
                        v136 = *(_DWORD *)(v135 + 1196);
                        if ( v129 )
                          v136 += *(_DWORD *)(v135 + 1200) * v129;
                        v137 = this->fields.appendSkillBaseList;
                        if ( !v137 )
                          goto LABEL_183;
                        if ( v129 >= v137->max_length )
                          goto LABEL_395;
                        GameObjectExtensions__SetLocalPositionX(v137->m_Items[v129], (float)v136, 0LL);
                      }
                    }
                    v139 = this->fields.appendSkillIconList;
                    if ( !v139 )
                      goto LABEL_183;
                  }
                  while ( (__int64)++v129 < (int)v139->max_length );
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
                v140 = *(_QWORD *)(gameObject + 16);
                v141 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++*(_DWORD *)(gameObject + 28);
                if ( !v140 )
                  goto LABEL_183;
                v142 = *(int *)(gameObject + 24);
                if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)gameObject,
                    skillInfoUiWidget,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
                }
                else
                {
                  v143 = v140 + 8 * v142;
                  *(_DWORD *)(gameObject + 24) = v142 + 1;
                  *(_QWORD *)(v143 + 32) = skillInfoUiWidget;
                  sub_1C3B708(v143 + 32);
                }
              }
              else
              {
                v126 = this->fields.appendSkillIconList;
                if ( !v126 )
                  goto LABEL_183;
                v127 = 0LL;
                while ( (int)v127 < (signed int)v126->max_length )
                {
                  v128 = this->fields.appendSkillBaseList;
                  if ( !v128 )
                    goto LABEL_183;
                  if ( (unsigned int)v127 >= v128->max_length )
                    goto LABEL_395;
                  gameObject = (__int64)v128->m_Items[v127];
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    v126 = this->fields.appendSkillIconList;
                    ++v127;
                    if ( v126 )
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
                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
                v147 = this->fields.svtCommandCardList;
                if ( v47 & 1 | (servantEntity == 0LL) )
                {
                  if ( !v147 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0LL);
                }
                else
                {
                  v149 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
                  v148 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v217.fields.currentCryptoKey = v149;
                  *(_QWORD *)&v217.fields.fakeValue = v148;
                  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v217, 0LL);
                  if ( !v49 )
                    goto LABEL_183;
                  commandCardParam = v49->fields.commandCardParam;
                  v151 = gameObject;
                  gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v49, 0LL);
                  if ( !v147 )
                    goto LABEL_183;
                  ServantCommandCardListComponent__Set_39637016(
                    v147,
                    v151,
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
              *(UnityEngine_Vector3_o *)&v152 = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0LL);
              gameObject = (__int64)this->fields.removeButton;
              if ( !gameObject )
                goto LABEL_183;
              v154 = v152;
              v155 = v153;
              gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_183;
              v218.fields.y = -45.0;
              v218.fields.x = v154;
              v218.fields.z = v155;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v218, 0LL);
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
                             (System_String_o *)StringLiteral_17817/*"command_code_detach"*/,
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
                v158 = this->fields.OFFER_BUTTON_SIZE;
                if ( !v158 )
                  goto LABEL_183;
                if ( v158->max_length > 1 )
                {
                  gameObject = (__int64)this->fields.offerBackSprite;
                  if ( !gameObject )
                    goto LABEL_183;
                  UIWidget__set_height((UIWidget_o *)gameObject, v158->m_Items[2], 0LL);
                  gameObject = (__int64)this->fields.offerButton;
                  if ( !gameObject )
                    goto LABEL_183;
                  v159 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v159, 343.5, 0LL);
                  gameObject = AtlasManager__SetDownloadCommonSprite(
                                 this->fields.removeBackSprite,
                                 (System_String_o *)StringLiteral_17818/*"command_code_lock"*/,
                                 0LL);
                  v160 = this->fields.OFFER_BUTTON_SIZE;
                  if ( !v160 )
                    goto LABEL_183;
                  if ( v160->max_length )
                  {
                    gameObject = (__int64)this->fields.removeBackSprite;
                    if ( !gameObject )
                      goto LABEL_183;
                    UIWidget__set_width((UIWidget_o *)gameObject, v160->m_Items[1], 0LL);
                    v161 = this->fields.OFFER_BUTTON_SIZE;
                    if ( !v161 )
                      goto LABEL_183;
                    if ( v161->max_length > 1 )
                    {
                      gameObject = (__int64)this->fields.removeBackSprite;
                      if ( !gameObject )
                        goto LABEL_183;
                      UIWidget__set_height((UIWidget_o *)gameObject, v161->m_Items[2], 0LL);
                      gameObject = (__int64)this->fields.removeButton;
                      if ( !gameObject )
                        goto LABEL_183;
                      v162 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      GameObjectExtensions__SetLocalPositionX(v162, 343.5, 0LL);
                      gameObject = AtlasManager__SetDownloadCommonSprite(
                                     this->fields.registBackSprite,
                                     (System_String_o *)StringLiteral_17817/*"command_code_detach"*/,
                                     0LL);
                      v163 = this->fields.OFFER_BUTTON_SIZE;
                      if ( !v163 )
                        goto LABEL_183;
                      if ( v163->max_length )
                      {
                        gameObject = (__int64)this->fields.registBackSprite;
                        if ( !gameObject )
                          goto LABEL_183;
                        UIWidget__set_width((UIWidget_o *)gameObject, v163->m_Items[1], 0LL);
                        v164 = this->fields.OFFER_BUTTON_SIZE;
                        if ( !v164 )
                          goto LABEL_183;
                        if ( v164->max_length > 1 )
                        {
                          gameObject = (__int64)this->fields.registBackSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          UIWidget__set_height((UIWidget_o *)gameObject, v164->m_Items[2], 0LL);
                          gameObject = (__int64)this->fields.registButton;
                          if ( !gameObject )
                            goto LABEL_183;
                          v165 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v165, 343.5, 0LL);
                          gameObject = (__int64)this->fields.registTitleSprite;
                          if ( !gameObject )
                            goto LABEL_183;
                          v166 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v166, this->fields.BLACK_LIST_BUTTON_TITLE_POS_X, 0LL);
                          gameObject = AtlasManager__SetDownloadCommonSprite(
                                         this->fields.removeBackSprite2,
                                         (System_String_o *)StringLiteral_17818/*"command_code_lock"*/,
                                         0LL);
                          v167 = this->fields.OFFER_BUTTON_SIZE;
                          if ( !v167 )
                            goto LABEL_183;
                          if ( v167->max_length )
                          {
                            gameObject = (__int64)this->fields.removeBackSprite2;
                            if ( !gameObject )
                              goto LABEL_183;
                            UIWidget__set_width((UIWidget_o *)gameObject, v167->m_Items[1], 0LL);
                            v168 = this->fields.OFFER_BUTTON_SIZE;
                            if ( !v168 )
                              goto LABEL_183;
                            if ( v168->max_length > 1 )
                            {
                              gameObject = (__int64)this->fields.removeBackSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              UIWidget__set_height((UIWidget_o *)gameObject, v168->m_Items[2], 0LL);
                              gameObject = (__int64)this->fields.removeButton2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v169 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(v169, 343.5, 0LL);
                              gameObject = (__int64)this->fields.removeTitleSprite2;
                              if ( !gameObject )
                                goto LABEL_183;
                              v170 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                              GameObjectExtensions__SetLocalPositionX(
                                v170,
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
                                                          (System_String_o *)StringLiteral_6655/*"Flags={0}, TryOffset={1}, TryLength={2}, HandlerOffset={3}, HandlerLength={4}"*/,
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
                                  v172 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v172,
                                    (float)this->fields.REJECT_BUTTON_POS_Y,
                                    0LL);
LABEL_341:
                                  v178 = item->fields.otherUserGameEntity;
                                  if ( !Grade_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
                                  Kind_39109416 = Grade__GetKind_39109416(v178, 0LL);
                                  SupportBgImage = Grade__GetSupportBgImage(Kind_39109416, 0LL);
                                  baseSpr = this->fields.baseSpr;
                                  v182 = SupportBgImage;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetGradeIcon(baseSpr, v182, 0LL);
                                  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( !UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
                                    goto LABEL_354;
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  LODWORD(v185) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v186 = v185;
                                  LODWORD(v187) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                                                (UserGradeComponent_o *)gameObject,
                                                                0LL);
                                  gameObject = (__int64)this->fields.playerNameLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v188 = v187;
                                  v189 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  LocalPositionX = GameObjectExtensions__GetLocalPositionX(v189, 0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v191 = LocalPositionX;
                                  v192 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionX(
                                    v192,
                                    (float)(v188 * 0.5) + (float)(v186 + v191),
                                    0LL);
                                  gameObject = (__int64)this->fields.gradeIcon;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_39109416, 0LL);
LABEL_354:
                                  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v184);
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
                                  v194 = *(_QWORD *)(gameObject + 96);
                                  if ( !v194 )
                                    goto LABEL_183;
                                  if ( !*(_DWORD *)(v194 + 24) )
                                    goto LABEL_395;
                                  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)gameObject,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          *(_DWORD *)(v194 + 32),
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_369;
                                  v195 = *(_QWORD *)(gameObject + 40);
                                  if ( v195 < 1 )
                                    goto LABEL_369;
                                  v196 = item->fields.otherUserGameEntity;
                                  if ( !v196 )
                                    goto LABEL_183;
                                  if ( v196->fields.pushUserSvtId != v195 )
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
                                    v201 = (Il2CppObject **)&StringLiteral_6530/*"Feature requires a process identifier."*/;
                                  else
                                    v201 = (Il2CppObject **)&StringLiteral_6531/*"Feb"*/;
                                  v202 = *v201;
                                  OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                                  v203 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                           int_TypeInfo,
                                                           &OpenClassBoardNum_k__BackingField,
                                                           v198,
                                                           v199,
                                                           v200);
                                  gameObject = (__int64)System_String__Format_63382984(
                                                          (System_String_o *)StringLiteral_16343/*"adid"*/,
                                                          v202,
                                                          v203,
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
                                  v205 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  v206 = BalanceConfig_TypeInfo;
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                    v206 = BalanceConfig_TypeInfo;
                                  }
                                  GameObjectExtensions__SetLocalPosition_34963288(
                                    v205,
                                    v206->static_fields->CLASS_BOARD_BUTTON_POS,
                                    0LL);
                                  classBoardBackSprite = this->fields.classBoardBackSprite;
                                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                  AtlasManager__SetDownloadCommonSprite(
                                    classBoardBackSprite,
                                    (System_String_o *)StringLiteral_17819/*"command_code_setstatus"*/,
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
                                  v208 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPosition_34963288(
                                    v208,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                                    0LL);
                                  gameObject = (__int64)this->fields.classBoardLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v209 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalScaleX(
                                    v209,
                                    BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                                    0LL);
                                  gameObject = (__int64)this->fields.openClassBoardNumLabel;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v210 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                                  GameObjectExtensions__SetLocalPositionY(
                                    v210,
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
                                  v173 = &StringLiteral_20553/*"itemData"*/;
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
                                  v173 = &StringLiteral_20676/*"koi8-r"*/;
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
                                  v173 = &StringLiteral_20675/*"koi8"*/;
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
                                  *(UnityEngine_Vector3_o *)&v174 = UnityEngine_Transform__get_localPosition(
                                                                      (UnityEngine_Transform_o *)gameObject,
                                                                      0LL);
                                  gameObject = (__int64)this->fields.removeButton;
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v176 = v174;
                                  v177 = v175;
                                  gameObject = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          0LL);
                                  if ( !gameObject )
                                    goto LABEL_183;
                                  v219.fields.y = 0.0;
                                  v219.fields.x = v176;
                                  v219.fields.z = v177;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)gameObject,
                                    v219,
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
                                  v173 = &StringLiteral_20552/*"item/use"*/;
LABEL_340:
                                  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v173, 0LL);
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
              sub_1C3B9C8(gameObject, skillInfoUiWidget);
            }
          }
        }
      }
LABEL_183:
      sub_1C3B9C0(gameObject, skillInfoUiWidget);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *removeButton; // x0
  bool isLock; // w1
  int32_t kind; // w8

  if ( (byte_4C1CFA9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, item);
    byte_4C1CFA9 = 1;
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
      sub_1C3B9C0(removeButton, v6);
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
    sub_1C3B9C0(messageDispButton, isHide);
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
  if ( (byte_4C1CFA8 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, item);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_17859/*"condQuestClearable"*/, v8);
    sub_1C3B764(&StringLiteral_6663/*"FollowerSelectClass"*/, v9);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_17858/*"condIgnoreSealedLimitCount"*/, v10);
    byte_4C1CFA8 = 1;
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
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6663/*"FollowerSelectClass"*/, 0LL);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0LL),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0LL)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
  {
LABEL_22:
    sub_1C3B9C0(this, item);
  }
  v21 = (System_String_o **)&StringLiteral_17858/*"condIgnoreSealedLimitCount"*/;
  if ( !isDisp )
    v21 = (System_String_o **)&StringLiteral_17859/*"condQuestClearable"*/;
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
  if ( (byte_4C1CFAA & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C3B764(&OptionManager_TypeInfo, item);
    byte_4C1CFAA = 1;
  }
  if ( !item )
LABEL_15:
    sub_1C3B9C0(this, item);
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