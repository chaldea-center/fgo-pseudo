void FriendOperationItemListViewItemDraw___ctor(FriendOperationItemListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0

  if ( (byte_4C21EBA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&SkillIconComponent___TypeInfo);
    sub_1C2D490(&UIIconLabel___TypeInfo);
    byte_4C21EBA = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v3->static_fields->SvtSkillListMax);
  sub_1C2D434(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1C2D538(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1C2D434(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1C2D538(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1C2D434(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C2D434(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1C2D538(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C2D434(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1C2D538(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C2D434(&this->fields.appendSkillLevelIconLabelList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FriendOperationItemListViewItemDraw__Awake(FriendOperationItemListViewItemDraw_o *this, const MethodInfo *method)
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

  if ( (byte_4C21EB4 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20215/*"icon_skill_mini"*/);
    sub_1C2D490(&StringLiteral_20397/*"img_friend_skill"*/);
    sub_1C2D490(&StringLiteral_20111/*"icon_append_mini"*/);
    sub_1C2D490(&StringLiteral_20396/*"img_friend_appendskill"*/);
    byte_4C21EB4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C2D434(&this->fields.switchSkillUIList);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v5 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_20215/*"icon_skill_mini"*/, 0);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0, 0) )
  {
    v7 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_20397/*"img_friend_skill"*/, 0);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0, 0) )
  {
    v9 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20111/*"icon_append_mini"*/, 0);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0, 0) )
  {
    v11 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20396/*"img_friend_appendskill"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItemDraw__SetInput(
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
  unsigned int v11; // w25
  UnityEngine_Behaviour_o *v12; // x22
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *pushSpr; // x21
  struct UILabel_o *loginDataLabel; // x8
  struct UISprite_o *v18; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9

  v6 = this;
  if ( (byte_4C21EB9 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21EB9 = 1;
  }
  if ( !item )
  {
    rangeSprite = (UnityEngine_Object_o *)v6->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rangeSprite;
      if ( !this )
        goto LABEL_23;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
      if ( !this )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)v6->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.addRangeSprite;
      if ( !this )
        goto LABEL_23;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
      if ( !this )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
  }
  skillButtonList = v6->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( v11 < LODWORD(skillButtonList->max_length) )
      {
        v12 = (UnityEngine_Behaviour_o *)skillButtonList->m_Items[v11];
        if ( !v12 )
          goto LABEL_23;
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *, const MethodInfo *))v12->klass[1]._1.name)(
          v12,
          1,
          v12->klass[1]._1.namespaze,
          method);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))v12->klass[1]._1.nestedTypes)(
          v12,
          0,
          0,
          v12->klass[1]._1.implementedInterfaces);
        UnityEngine_Behaviour__set_enabled(v12, isInput, 0);
        if ( max_length == ++v11 )
          goto LABEL_24;
        skillButtonList = v6->fields.skillButtonList;
        if ( !skillButtonList )
          goto LABEL_23;
      }
LABEL_95:
      sub_1C2D6F4(this, item, isInput);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1C2D6EC(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_23;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !this )
        goto LABEL_23;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_23;
      ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
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
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
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
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
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
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
          if ( !this )
            goto LABEL_23;
          ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
            this,
            0,
            1,
            this->klass[1]._1.implementedInterfaces);
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
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          break;
        case 7:
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
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
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_23;
          ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
            this,
            0,
            1,
            this->klass[1]._1.implementedInterfaces);
          break;
        default:
          goto LABEL_79;
      }
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
      if ( !this )
        goto LABEL_23;
LABEL_78:
      ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
LABEL_79:
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v15);
      pushSpr = (UnityEngine_Object_o *)v6->fields.pushSpr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(pushSpr, 0, 0) )
      {
        this = (FriendOperationItemListViewItemDraw_o *)v6->fields.pushSpr;
        if ( !this )
          goto LABEL_23;
        this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
        if ( !this )
          goto LABEL_23;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
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
                                                          0);
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
                                                                  0);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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


void FriendOperationItemListViewItemDraw__SetItem(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rangeSprite; // x22
  bool v8; // w0
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *v11; // x22
  const MethodInfo *v12; // x2
  int32_t kind; // w8
  bool v14; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  __int64 v16; // x8
  char v17; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v19; // x21
  const MethodInfo *v20; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v24; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  long double v31; // q0
  int v32; // w22
  __int64 v33; // x0
  __int64 v34; // x0
  ServantLimitAddMaster_o *v35; // x23
  int32_t FriendNpNameDispLimitCount; // w24
  Il2CppObject *Master_object; // x0
  __int64 v38; // x26
  __int64 v39; // x27
  ServantLimitImageMaster_o *v40; // x25
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *OverwriteTDName; // x0
  System_String_o **v43; // x9
  bool v44; // cc
  Il2CppObject *v45; // x22
  System_String_o *v46; // x23
  System_String_o *v47; // x0
  System_String_o *v48; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v51; // x22
  UnityEngine_Object_o *v52; // x22
  int32_t v53; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v55; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v57; // x23
  int64_t createdAt; // x0
  System_String_o *v59; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v61; // x0
  struct SkillIconComponent_array *v62; // x8
  il2cpp_array_size_t max_length; // x8
  int v64; // w9
  unsigned __int64 v65; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v67; // x14
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v69; // x22
  struct UnityEngine_GameObject_array *skillBaseList; // x8
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
  struct UnityEngine_GameObject_array *v81; // x8
  struct SkillIconComponent_array *v82; // x8
  __int64 v83; // x9
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  il2cpp_array_size_t v89; // x8
  int v90; // w9
  signed __int64 v91; // x10
  unsigned __int64 v92; // x14
  SkillInfo_o *v93; // x14
  struct SkillIconComponent_array *v94; // x8
  __int64 v95; // x22
  struct UnityEngine_GameObject_array *v96; // x8
  __int64 v97; // x22
  __int64 v98; // x23
  unsigned __int64 v99; // x24
  struct UnityEngine_GameObject_array *v100; // x9
  int32_t *v101; // x25
  struct SkillIconComponent_array *v102; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v105; // x8
  __int64 v106; // x9
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantCommandCardListComponent_o *v114; // x22
  __int64 v115; // x23
  __int64 v116; // x24
  System_Int32_array *commandCardParam; // x24
  int32_t v118; // w23
  float x; // s8
  float z; // s9
  UISprite_o *offerBackSprite; // x21
  UILabel_o *cancelLabel; // x21
  __int64 *v123; // x8
  float v124; // s8
  float v125; // s9
  OtherUserGameEntity_o *v126; // x21
  int32_t Kind_40206396; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v130; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v132; // x2
  float v133; // s0
  float v134; // s8
  float v135; // s0
  float v136; // s9
  UnityEngine_GameObject_o *v137; // x0
  float LocalPositionX; // s0
  float v139; // s10
  UnityEngine_GameObject_o *v140; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v142; // x8
  __int64 v143; // x8
  struct OtherUserGameEntity_o *v144; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  Il2CppObject **v149; // x9
  Il2CppObject *v150; // x21
  Il2CppObject *v151; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UISprite_o *classBoardBackSprite; // x20
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v155; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21EB5 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Grade_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_20321/*"img_blacklist_requestdate"*/);
    sub_1C2D490(&StringLiteral_17446/*"btn_bg_27_2"*/);
    sub_1C2D490(&StringLiteral_6394/*"FFFFFF"*/);
    sub_1C2D490(&StringLiteral_13389/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1C2D490(&StringLiteral_17447/*"btn_bg_29_2"*/);
    sub_1C2D490(&StringLiteral_9354/*"NP_MAX_COLOR_NAME"*/);
    sub_1C2D490(&StringLiteral_17445/*"btn_bg_26_2"*/);
    sub_1C2D490(&StringLiteral_20320/*"img_blacklist_recorddate"*/);
    sub_1C2D490(&StringLiteral_6393/*"FFFF00"*/);
    sub_1C2D490(&StringLiteral_9318/*"NO_ENTRY_NAME"*/);
    sub_1C2D490(&StringLiteral_9347/*"NP_COLOR_NAME"*/);
    sub_1C2D490(&StringLiteral_16015/*"[{0}]+{1}[-]"*/);
    sub_1C2D490(&StringLiteral_6519/*"FRIEND_BUTTON_CANCEL"*/);
    sub_1C2D490(&StringLiteral_20188/*"icon_friend"*/);
    sub_1C2D490(&StringLiteral_20187/*"icon_follow"*/);
    byte_4C21EB5 = 1;
  }
  tdInfo = 0;
  v155 = 0;
  skillInfoList = 0;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(rangeSprite, 0, 0);
  if ( !item )
  {
    if ( v8 )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    return;
  }
  if ( v8 )
  {
    gameObject = (__int64)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
  }
  v11 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    gameObject = (__int64)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isTerminationSpace, 0);
  }
  if ( !mode )
    return;
  kind = item->fields.kind;
  v14 = kind == 9 || kind == 3;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_183;
  v16 = *(_QWORD *)(gameObject + 96);
  if ( !v16 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_346;
  v17 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v16 + 32),
                        item->fields._FollowerGrandGraphId_k__BackingField,
                        0);
  v19 = ServantLeaderInfo;
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
    *(_QWORD *)&v159.fields.currentCryptoKey = v73;
    *(_QWORD *)&v159.fields.fakeValue = v72;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v159, 0) )
    {
LABEL_36:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v19, 0);
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v19, 0);
      v17 = 0;
    }
    else
    {
      v19 = 0;
      v17 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_183;
  ServantFaceIconComponent__Set_40787620(
    (ServantFaceIconComponent_o *)gameObject,
    v19,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v14,
    0,
    0);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v20);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_4C21EAF & 1) == 0 )
  {
    gameObject = sub_1C2D490(&StringLiteral_19056/*"error"*/);
    byte_4C21EAF = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_183;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19056/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0);
  v24 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v24 )
  {
    userLv = v24->fields.userLv;
    if ( !gameObject )
      goto LABEL_183;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_183;
  }
  UIIconLabel__Set_40889008((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0, 0, 0, 0, 0, 0);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v27);
  if ( !servantNameLabel )
    goto LABEL_183;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v28);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v29);
  if ( item->fields.servantEntity )
  {
    v32 = TreasureDeviceLevelIcon;
    v33 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1C7DBA4(v31);
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C7DBA4(v31);
    gameObject = **(_QWORD **)(v34 + 184);
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v19 )
      goto LABEL_183;
    v35 = (ServantLimitAddMaster_o *)gameObject;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v19, 0);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0) && !ServantLeaderInfo__IsNpc(v19, 0) )
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !gameObject )
        goto LABEL_183;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                     v19->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v39 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
    v40 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v158.fields.currentCryptoKey = v39;
    *(_QWORD *)&v158.fields.fakeValue = v38;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v158, 0);
    if ( !v40 )
      goto LABEL_183;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v40,
                                   gameObject,
                                   FriendNpNameDispLimitCount,
                                   0);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v19->fields.svtId, 0);
    if ( !tdInfo || !v35 )
      goto LABEL_183;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v35,
                        gameObject,
                        ServantLimitCountSealAfter,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0);
    v43 = (System_String_o **)&StringLiteral_9354/*"NP_MAX_COLOR_NAME"*/;
    v44 = v32 <= 1;
    v45 = (Il2CppObject *)OverwriteTDName;
    if ( v44 )
      v43 = (System_String_o **)&StringLiteral_9347/*"NP_COLOR_NAME"*/;
    v46 = *v43;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = LocalizationManager__Get(v46, 0);
    gameObject = (__int64)System_String__Format(v47, v45, 0);
    if ( !tdInfo )
      goto LABEL_183;
    v48 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0);
    if ( !svtNpTitleLabel )
      goto LABEL_183;
    UIRangeLabel__Set(svtNpTitleLabel, v48, (System_String_o *)gameObject, 0, 0, 0, 0);
    svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_183;
      ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)gameObject, tdInfo, 0);
    }
  }
  else
  {
    v51 = this->fields.svtNpTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9318/*"NO_ENTRY_NAME"*/, 0);
    if ( !v51 )
      goto LABEL_183;
    UIRangeLabel__Set(v51, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
    v52 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_183;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0);
    }
  }
  v53 = item->fields.kind;
  if ( v53 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_13389/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v57 = v59;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_105;
    }
  }
  else if ( v53 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13389/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v57 = v55;
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
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13389/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0);
      goto LABEL_105;
    }
  }
  createdAt = 0;
LABEL_105:
  v61 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0);
  gameObject = (__int64)System_String__Format(v57, v61, 0);
  if ( !loginDataLabel )
    goto LABEL_183;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0);
  if ( !item->fields.servantEntity )
  {
    skillIconList = this->fields.skillIconList;
    if ( skillIconList )
    {
      v69 = 0;
      while ( (int)v69 < SLODWORD(skillIconList->max_length) )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_183;
        if ( (unsigned int)v69 >= LODWORD(skillBaseList->max_length) )
          goto LABEL_346;
        gameObject = (__int64)skillBaseList->m_Items[v69];
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          skillIconList = this->fields.skillIconList;
          ++v69;
          if ( skillIconList )
            continue;
        }
        goto LABEL_183;
      }
      gameObject = (__int64)this->fields.skillInfoUiWidget;
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          goto LABEL_164;
        }
      }
    }
LABEL_183:
    sub_1C2D6EC(gameObject, skillInfoUiWidget);
  }
  gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v12);
  v62 = this->fields.skillIconList;
  if ( !v62 )
    goto LABEL_183;
  max_length = v62->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v64 = 0;
    v65 = 0;
    while ( skillInfoList )
    {
      max_length_low = LODWORD(skillInfoList->max_length);
      if ( (__int64)v65 < (int)max_length_low )
      {
        if ( v65 >= max_length_low )
          goto LABEL_346;
        v67 = skillInfoList->m_Items[v65];
        if ( v67 && v67->fields.id >= 1 )
          v64 = v65 + 1;
      }
      if ( (__int64)++v65 >= (int)max_length )
        goto LABEL_135;
    }
    goto LABEL_183;
  }
  v64 = 0;
LABEL_135:
  if ( (int)max_length >= 1 )
  {
    v74 = v64;
    v75 = 4;
    do
    {
      v76 = v75 - 4;
      if ( v75 - 4 >= v74 )
      {
        v81 = this->fields.skillBaseList;
        if ( !v81 )
          goto LABEL_183;
        if ( v76 >= LODWORD(v81->max_length) )
          goto LABEL_346;
        gameObject = *((_QWORD *)&v81->obj.klass + v75);
        if ( !gameObject )
          goto LABEL_183;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      else
      {
        if ( !skillInfoList )
          goto LABEL_183;
        if ( v76 >= LODWORD(skillInfoList->max_length) )
          goto LABEL_346;
        v77 = this->fields.skillBaseList;
        if ( !v77 )
          goto LABEL_183;
        if ( v76 >= LODWORD(v77->max_length) )
          goto LABEL_346;
        gameObject = *((_QWORD *)&v77->obj.klass + v75);
        if ( !gameObject )
          goto LABEL_183;
        v78 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v75);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v79 = this->fields.skillIconList;
        if ( !v79 )
          goto LABEL_183;
        if ( v76 >= LODWORD(v79->max_length) )
          goto LABEL_346;
        if ( !v78 )
          goto LABEL_183;
        gameObject = *((_QWORD *)&v79->obj.klass + v75);
        if ( !gameObject )
          goto LABEL_183;
        SkillIconComponent__Set_40800888((SkillIconComponent_o *)gameObject, v78[4], v78[5], v78[12], v78[13], 0);
        skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
        if ( !skillLevelIconLabelList )
          goto LABEL_183;
        if ( v76 >= LODWORD(skillLevelIconLabelList->max_length) )
          goto LABEL_346;
        gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v75);
        if ( !gameObject )
          goto LABEL_183;
        UIIconLabel__Set_40889008((UIIconLabel_o *)gameObject, 48, v78[5], 0, 0, 0, 0, 0, 0, 0, 0);
      }
      v82 = this->fields.skillIconList;
      if ( !v82 )
        goto LABEL_183;
      v83 = v75 - 3;
      ++v75;
    }
    while ( v83 < SLODWORD(v82->max_length) );
  }
  gameObject = (__int64)this->fields.skillInfoUiWidget;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_183;
  skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
  v84 = *(_QWORD *)(gameObject + 16);
  v85 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(gameObject + 28);
  if ( !v84 )
    goto LABEL_183;
  v86 = *(int *)(gameObject + 24);
  if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      skillInfoUiWidget,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = v84 + 8 * v86;
    *(_DWORD *)(gameObject + 24) = v86 + 1;
    *(_QWORD *)(v87 + 32) = skillInfoUiWidget;
    gameObject = sub_1C2D434(v87 + 32);
  }
LABEL_164:
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v155, v12);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_183;
    v89 = appendSkillIconList->max_length;
    if ( (__int64)(v89 << 32) < 1 )
    {
      v90 = 0;
    }
    else
    {
      v90 = 0;
      v91 = 0;
      do
      {
        if ( v155 )
        {
          v92 = LODWORD(v155->max_length);
          if ( v91 < (int)v92 )
          {
            if ( v91 >= v92 )
              goto LABEL_346;
            v93 = v155->m_Items[v91];
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
      v97 = v90;
      v98 = 4;
      do
      {
        v99 = v98 - 4;
        if ( v98 - 4 >= v97 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_183;
          if ( v99 >= LODWORD(appendSkillBaseList->max_length) )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v98);
          if ( !gameObject )
            goto LABEL_183;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          if ( !v155 )
            goto LABEL_183;
          if ( v99 >= LODWORD(v155->max_length) )
            goto LABEL_346;
          v100 = this->fields.appendSkillBaseList;
          if ( !v100 )
            goto LABEL_183;
          if ( v99 >= LODWORD(v100->max_length) )
            goto LABEL_346;
          gameObject = *((_QWORD *)&v100->obj.klass + v98);
          if ( !gameObject )
            goto LABEL_183;
          v101 = (int32_t *)*((_QWORD *)&v155->obj.klass + v98);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v102 = this->fields.appendSkillIconList;
          if ( !v102 )
            goto LABEL_183;
          if ( v99 >= LODWORD(v102->max_length) )
            goto LABEL_346;
          if ( !v101 )
            goto LABEL_183;
          gameObject = *((_QWORD *)&v102->obj.klass + v98);
          if ( !gameObject )
            goto LABEL_183;
          SkillIconComponent__Set_40800888((SkillIconComponent_o *)gameObject, v101[4], v101[5], v101[12], v101[13], 0);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_183;
          if ( v99 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v98);
          if ( !gameObject )
            goto LABEL_183;
          UIIconLabel__Set_40889008((UIIconLabel_o *)gameObject, 48, v101[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
        v105 = this->fields.appendSkillIconList;
        if ( !v105 )
          goto LABEL_183;
        v106 = v98 - 3;
        ++v98;
      }
      while ( v106 < SLODWORD(v105->max_length) );
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( !gameObject )
      goto LABEL_183;
    skillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
    v107 = *(_QWORD *)(gameObject + 16);
    v108 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v107 )
      goto LABEL_183;
    v109 = *(int *)(gameObject + 24);
    if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        skillInfoUiWidget,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    }
    else
    {
      v110 = v107 + 8 * v109;
      *(_DWORD *)(gameObject + 24) = v109 + 1;
      *(_QWORD *)(v110 + 32) = skillInfoUiWidget;
      sub_1C2D434(v110 + 32);
    }
  }
  else
  {
    v94 = this->fields.appendSkillIconList;
    if ( !v94 )
      goto LABEL_183;
    v95 = 0;
    while ( (int)v95 < SLODWORD(v94->max_length) )
    {
      v96 = this->fields.appendSkillBaseList;
      if ( !v96 )
        goto LABEL_183;
      if ( (unsigned int)v95 >= LODWORD(v96->max_length) )
        goto LABEL_346;
      gameObject = (__int64)v96->m_Items[v95];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
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
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_183;
  if ( *(int *)(gameObject + 24) >= 2 )
  {
    switchSkillInfo = this->fields.switchSkillInfo;
    gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)gameObject,
                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_183;
    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0, 0);
  }
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    servantEntity = item->fields.servantEntity;
    v114 = this->fields.svtCommandCardList;
    if ( v17 & 1 | (servantEntity == 0) )
    {
      if ( !v114 )
        goto LABEL_183;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0);
    }
    else
    {
      v116 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v115 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v160.fields.currentCryptoKey = v116;
      *(_QWORD *)&v160.fields.fakeValue = v115;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v160, 0);
      if ( !v19 )
        goto LABEL_183;
      commandCardParam = v19->fields.commandCardParam;
      v118 = gameObject;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v19, 0);
      if ( !v114 )
        goto LABEL_183;
      ServantCommandCardListComponent__Set_40772840(
        v114,
        v118,
        commandCardParam,
        (System_Int32_array *)gameObject,
        2,
        1,
        0);
    }
  }
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  v162.fields.y = -45.0;
  v162.fields.x = x;
  v162.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v162, 0);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.acceptButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.rejectButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.removeButton2;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.removeMarkSpr;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.registButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.offerButton;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  offerBackSprite = this->fields.offerBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_17445/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite, (System_String_o *)StringLiteral_17446/*"btn_bg_27_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.registBackSprite, (System_String_o *)StringLiteral_17445/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite2, (System_String_o *)StringLiteral_17446/*"btn_bg_27_2"*/, 0);
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
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      cancelLabel = this->fields.cancelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6519/*"FRIEND_BUTTON_CANCEL"*/, 0);
      if ( !cancelLabel )
        goto LABEL_183;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
      break;
    case 2:
      gameObject = (__int64)this->fields.acceptButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.rejectButton;
      if ( !gameObject )
        goto LABEL_183;
LABEL_268:
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      break;
    case 3:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      v123 = &StringLiteral_20188/*"icon_friend"*/;
      goto LABEL_298;
    case 7:
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_183;
      v123 = &StringLiteral_20321/*"img_blacklist_requestdate"*/;
      goto LABEL_298;
    case 8:
      gameObject = (__int64)this->fields.removeButton2;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_183;
      v123 = &StringLiteral_20320/*"img_blacklist_recorddate"*/;
      goto LABEL_298;
    case 9:
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      v163 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      v124 = v163.fields.x;
      v125 = v163.fields.z;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      v164.fields.y = 0.0;
      v164.fields.x = v124;
      v164.fields.z = v125;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v164, 0);
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_183;
      v123 = &StringLiteral_20187/*"icon_follow"*/;
LABEL_298:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v123, 0);
      break;
    default:
      break;
  }
  v126 = item->fields.otherUserGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_40206396 = Grade__GetKind_40206396(v126, 0);
  SupportBgImage = Grade__GetSupportBgImage(Kind_40206396, 0);
  baseSpr = this->fields.baseSpr;
  v130 = SupportBgImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v130, 0);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0, 0) )
  {
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    LODWORD(v133) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v134 = v133;
    LODWORD(v135) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    v136 = v135;
    v137 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v137, 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v139 = LocalPositionX;
    v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionX(v140, (float)(v136 * 0.5) + (float)(v134 + v139), 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_40206396, 0);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v132);
  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(pushSpr, 0, 0) )
    goto LABEL_327;
  gameObject = (__int64)this->fields.pushSpr;
  if ( !gameObject )
    goto LABEL_183;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_183;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_183;
  v142 = *(_QWORD *)(gameObject + 96);
  if ( !v142 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v142 + 24) )
LABEL_346:
    sub_1C2D6F4(gameObject, skillInfoUiWidget, v12);
  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                          (OtherUserGameEntity_o *)gameObject,
                          item->fields.classPos,
                          1,
                          item->fields.displayServantType,
                          *(_DWORD *)(v142 + 32),
                          item->fields._FollowerGrandGraphId_k__BackingField,
                          0);
  if ( gameObject )
  {
    v143 = *(_QWORD *)(gameObject + 40);
    if ( v143 >= 1 )
    {
      v144 = item->fields.otherUserGameEntity;
      if ( !v144 )
        goto LABEL_183;
      if ( v144->fields.pushUserSvtId == v143 )
      {
        gameObject = (__int64)this->fields.pushSpr;
        if ( !gameObject )
          goto LABEL_183;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_183;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
    }
  }
LABEL_327:
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0, 0)
    && (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) == 0 )
  {
    if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
      v149 = (Il2CppObject **)&StringLiteral_6393/*"FFFF00"*/;
    else
      v149 = (Il2CppObject **)&StringLiteral_6394/*"FFFFFF"*/;
    v150 = *v149;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField, v146, v147, v148);
    gameObject = (__int64)System_String__Format_63499156((System_String_o *)StringLiteral_16015/*"[{0}]+{1}[-]"*/, v150, v151, 0);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_183;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0);
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.classBoardOpenButton;
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_183;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._OpenClassBoardNum_k__BackingField >= 0,
      0);
    classBoardBackSprite = this->fields.classBoardBackSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17447/*"btn_bg_29_2"*/, 0);
    gameObject = (__int64)this->fields.classBoardBackSprite;
    if ( !gameObject )
      goto LABEL_183;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
  }
}


void FriendOperationItemListViewItemDraw__UpdateLockUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *lockMarkObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *removeButton; // x0
  bool isLock; // w1
  int32_t kind; // w8

  if ( (byte_4C21EB7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21EB7 = 1;
  }
  if ( item )
  {
    lockMarkObj = (UnityEngine_Object_o *)this->fields.lockMarkObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockMarkObj, 0, 0) )
    {
      removeButton = this->fields.lockMarkObj;
      if ( !removeButton )
        goto LABEL_17;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive(removeButton, isLock, 0);
    }
    kind = item->fields.kind;
    if ( kind == 9 || kind == 3 )
    {
      removeButton = (UnityEngine_GameObject_o *)this->fields.removeButton;
      if ( removeButton )
      {
        ((void (*)(void))removeButton->klass[1]._1.nestedTypes)();
        return;
      }
LABEL_17:
      sub_1C2D6EC(removeButton, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItemDraw__dispMessageUI(
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
      UnityEngine_GameObject__SetActive(messageDispButton, 1, 0);
      messageDispButton = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( messageDispButton )
      {
        messageDispButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0);
        if ( messageDispButton )
        {
          UnityEngine_GameObject__SetActive(messageDispButton, 1, 0);
          GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -1.0, 0);
          GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, -1.0, 0);
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
    sub_1C2D6EC(messageDispButton, isHide);
  }
  messageDispButton = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !messageDispButton )
    goto LABEL_13;
  messageDispButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0);
  if ( !messageDispButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(messageDispButton, 0, 0);
  messageDispButton = this->fields.messageDispButton;
  if ( !messageDispButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(messageDispButton, 0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -11.0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, 10.0, 0);
  messageDispButton = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
  if ( !messageDispButton )
    goto LABEL_13;
  v5 = 1113849856;
LABEL_12:
  v6 = *(float *)&v5;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageDispButton, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItemDraw__setMessageButtonUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isDisp,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *v5; // x21
  FriendOperationItemListViewItemDraw_o *v6; // x20
  float v7; // s0 OVERLAPPED
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  float v9; // s3
  float v10; // s1
  float v11; // s2
  float v12; // s0 OVERLAPPED
  float v13; // s3
  float v14; // s1
  float v15; // s2
  UILabel_o *messageLabel; // x21
  System_String_o **v17; // x8

  v5 = item;
  v6 = this;
  if ( (byte_4C21EB6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17496/*"btn_message_on"*/);
    sub_1C2D490(&StringLiteral_6527/*"FRIEND_HIDE_MESSAGE"*/);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_17495/*"btn_message_off"*/);
    byte_4C21EB6 = 1;
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
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v7, 0);
  v12 = 0.50196;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v12 = 0.0;
  if ( !this )
    goto LABEL_22;
  v13 = 1.0;
  v14 = v12;
  v15 = v12;
  UILabel__set_effectColor((UILabel_o *)this, *(UnityEngine_Color_o *)&v12, 0);
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
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6527/*"FRIEND_HIDE_MESSAGE"*/, 0);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
  {
LABEL_22:
    sub_1C2D6EC(this, item);
  }
  v17 = (System_String_o **)&StringLiteral_17495/*"btn_message_off"*/;
  if ( !isDisp )
    v17 = (System_String_o **)&StringLiteral_17496/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v17, 0);
}


void FriendOperationItemListViewItemDraw__setupMessageUI(
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
  if ( (byte_4C21EB8 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C2D490(&OptionManager_TypeInfo);
    byte_4C21EB8 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1C2D6EC(this, item);
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
      if ( System_String__IsNullOrEmpty(otherUserGameEntity->fields.message, 0) )
        goto LABEL_5;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetMessageDisp(0) )
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