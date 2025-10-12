void FriendOperationItemListViewItemDraw___ctor(FriendOperationItemListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  struct SkillIconComponent_array *v5; // x0
  struct UIIconLabel_array *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  struct UIIconLabel_array *v9; // x0

  if ( (byte_4C32589 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&UnityEngine_GameObject___TypeInfo);
    sub_1C32C20(&SkillIconComponent___TypeInfo);
    sub_1C32C20(&UIIconLabel___TypeInfo);
    byte_4C32589 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C32CC8(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C32BC4(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1C32CC8(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1C32BC4(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1C32CC8(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1C32BC4(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1C32CC8(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1C32BC4(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1C32CC8(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1C32BC4(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1C32CC8(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1C32BC4(&this->fields.appendSkillLevelIconLabelList, v9);
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

  if ( (byte_4C32583 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20227/*"icon_skill_mini"*/);
    sub_1C32C20(&StringLiteral_20409/*"img_friend_skill"*/);
    sub_1C32C20(&StringLiteral_20123/*"icon_append_mini"*/);
    sub_1C32C20(&StringLiteral_20408/*"img_friend_appendskill"*/);
    byte_4C32583 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C32BC4(&this->fields.switchSkillUIList, v3);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v5 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_20227/*"icon_skill_mini"*/, 0);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0, 0) )
  {
    v7 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_20409/*"img_friend_skill"*/, 0);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0, 0) )
  {
    v9 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20123/*"icon_append_mini"*/, 0);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0, 0) )
  {
    v11 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20408/*"img_friend_appendskill"*/, 0);
  }
}


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
  if ( (byte_4C32588 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32588 = 1;
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
      sub_1C32E84(this);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1C32E7C(this);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
  __int64 gameObject; // x0
  UnityEngine_Object_o *v10; // x22
  int32_t kind; // w8
  bool v12; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  __int64 v14; // x8
  char v15; // w29
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v17; // x21
  const MethodInfo *v18; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v22; // x8
  int32_t userLv; // w2
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  long double v29; // q0
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
  struct SkillIconComponent_array *v61; // x8
  il2cpp_array_size_t max_length; // x8
  int v63; // w9
  unsigned __int64 v64; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v66; // x14
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v68; // x22
  struct UnityEngine_GameObject_array *skillBaseList; // x8
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
  struct UnityEngine_GameObject_array *v81; // x8
  struct SkillIconComponent_array *v82; // x8
  __int64 v83; // x9
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  il2cpp_array_size_t v90; // x8
  int v91; // w9
  signed __int64 v92; // x10
  unsigned __int64 v93; // x14
  SkillInfo_o *v94; // x14
  struct SkillIconComponent_array *v95; // x8
  __int64 v96; // x22
  struct UnityEngine_GameObject_array *v97; // x8
  __int64 v98; // x22
  __int64 v99; // x23
  unsigned __int64 v100; // x24
  struct UnityEngine_GameObject_array *v101; // x9
  int32_t *v102; // x25
  struct SkillIconComponent_array *v103; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v106; // x8
  __int64 v107; // x9
  Il2CppObject *appendSkillInfoUiWidget; // x1
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
  float x; // s8
  float z; // s9
  UISprite_o *offerBackSprite; // x21
  UILabel_o *cancelLabel; // x21
  __int64 *v125; // x8
  float v126; // s8
  float v127; // s9
  OtherUserGameEntity_o *v128; // x21
  int32_t Kind_40328624; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v132; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v134; // x2
  float v135; // s0
  float v136; // s8
  float v137; // s0
  float v138; // s9
  UnityEngine_GameObject_o *v139; // x0
  float LocalPositionX; // s0
  float v141; // s10
  UnityEngine_GameObject_o *v142; // x0
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v144; // x8
  __int64 v145; // x8
  struct OtherUserGameEntity_o *v146; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  __int64 v151; // x5
  __int64 v152; // x6
  __int64 v153; // x7
  Il2CppObject **v154; // x9
  Il2CppObject *v155; // x21
  Il2CppObject *v156; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UISprite_o *classBoardBackSprite; // x20
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-94h] BYREF
  SkillInfo_array *v160; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C32584 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Grade_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_20333/*"img_blacklist_requestdate"*/);
    sub_1C32C20(&StringLiteral_17450/*"btn_bg_27_2"*/);
    sub_1C32C20(&StringLiteral_6402/*"FFFFFF"*/);
    sub_1C32C20(&StringLiteral_13392/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1C32C20(&StringLiteral_17451/*"btn_bg_29_2"*/);
    sub_1C32C20(&StringLiteral_9360/*"NP_MAX_COLOR_NAME"*/);
    sub_1C32C20(&StringLiteral_17449/*"btn_bg_26_2"*/);
    sub_1C32C20(&StringLiteral_20332/*"img_blacklist_recorddate"*/);
    sub_1C32C20(&StringLiteral_6401/*"FFFF00"*/);
    sub_1C32C20(&StringLiteral_9324/*"NO_ENTRY_NAME"*/);
    sub_1C32C20(&StringLiteral_9353/*"NP_COLOR_NAME"*/);
    sub_1C32C20(&StringLiteral_16016/*"[{0}]+{1}[-]"*/);
    sub_1C32C20(&StringLiteral_6524/*"FRIEND_BUTTON_CANCEL"*/);
    sub_1C32C20(&StringLiteral_20200/*"icon_friend"*/);
    sub_1C32C20(&StringLiteral_20199/*"icon_follow"*/);
    byte_4C32584 = 1;
  }
  tdInfo = 0;
  v160 = 0;
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
  v10 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
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
  v12 = kind == 9 || kind == 3;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_183;
  v14 = *(_QWORD *)(gameObject + 96);
  if ( !v14 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_346;
  v15 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v14 + 32),
                        item->fields._FollowerGrandGraphId_k__BackingField,
                        0);
  v17 = ServantLeaderInfo;
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
    *(_QWORD *)&v164.fields.currentCryptoKey = v73;
    *(_QWORD *)&v164.fields.fakeValue = v72;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v164, 0) )
    {
LABEL_36:
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v17, 0);
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v17, 0);
      v15 = 0;
    }
    else
    {
      v17 = 0;
      v15 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_183;
  ServantFaceIconComponent__Set_40909724(
    (ServantFaceIconComponent_o *)gameObject,
    v17,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v12,
    0,
    0);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v18);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_4C3257E & 1) == 0 )
  {
    gameObject = sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C3257E = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_183;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19066/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0);
  v22 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v22 )
  {
    userLv = v22->fields.userLv;
    if ( !gameObject )
      goto LABEL_183;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_183;
  }
  UIIconLabel__Set_41010828((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0, 0, 0, 0, 0, 0);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v25);
  if ( !servantNameLabel )
    goto LABEL_183;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v26);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v27);
  if ( item->fields.servantEntity )
  {
    v30 = TreasureDeviceLevelIcon;
    v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1C83334(v29);
    v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1C83334(v29);
    gameObject = **(_QWORD **)(v32 + 184);
    if ( !gameObject )
      goto LABEL_183;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v17 )
      goto LABEL_183;
    v33 = (ServantLimitAddMaster_o *)gameObject;
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v17, 0);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0) && !ServantLeaderInfo__IsNpc(v17, 0) )
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_183;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !gameObject )
        goto LABEL_183;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)gameObject,
                                     v17->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v37 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    v38 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v163.fields.currentCryptoKey = v37;
    *(_QWORD *)&v163.fields.fakeValue = v36;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v163, 0);
    if ( !v38 )
      goto LABEL_183;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v38,
                                   gameObject,
                                   FriendNpNameDispLimitCount,
                                   0);
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v17->fields.svtId, 0);
    if ( !tdInfo || !v33 )
      goto LABEL_183;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v33,
                        gameObject,
                        ServantLimitCountSealAfter,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0);
    v41 = (System_String_o **)&StringLiteral_9360/*"NP_MAX_COLOR_NAME"*/;
    v42 = v30 <= 1;
    v43 = (Il2CppObject *)OverwriteTDName;
    if ( v42 )
      v41 = (System_String_o **)&StringLiteral_9353/*"NP_COLOR_NAME"*/;
    v44 = *v41;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get(v44, 0);
    gameObject = (__int64)System_String__Format(v45, v43, 0);
    if ( !tdInfo )
      goto LABEL_183;
    v46 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0);
    if ( !svtNpTitleLabel )
      goto LABEL_183;
    UIRangeLabel__Set(svtNpTitleLabel, v46, (System_String_o *)gameObject, 0, 0, 0, 0);
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
    v49 = this->fields.svtNpTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NO_ENTRY_NAME"*/, 0);
    if ( !v49 )
      goto LABEL_183;
    UIRangeLabel__Set(v49, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
    v50 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v50, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_183;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0);
    }
  }
  v51 = item->fields.kind;
  if ( v51 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
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
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
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
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0);
      goto LABEL_105;
    }
  }
  createdAt = 0;
LABEL_105:
  v59 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0);
  gameObject = (__int64)System_String__Format(v55, v59, 0);
  if ( !loginDataLabel )
    goto LABEL_183;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0);
  if ( !item->fields.servantEntity )
  {
    skillIconList = this->fields.skillIconList;
    if ( skillIconList )
    {
      v68 = 0;
      while ( (int)v68 < SLODWORD(skillIconList->max_length) )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_183;
        if ( (unsigned int)v68 >= LODWORD(skillBaseList->max_length) )
          goto LABEL_346;
        gameObject = (__int64)skillBaseList->m_Items[v68];
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          skillIconList = this->fields.skillIconList;
          ++v68;
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
    sub_1C32E7C(gameObject);
  }
  gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v60);
  v61 = this->fields.skillIconList;
  if ( !v61 )
    goto LABEL_183;
  max_length = v61->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v63 = 0;
    v64 = 0;
    while ( skillInfoList )
    {
      max_length_low = LODWORD(skillInfoList->max_length);
      if ( (__int64)v64 < (int)max_length_low )
      {
        if ( v64 >= max_length_low )
          goto LABEL_346;
        v66 = skillInfoList->m_Items[v64];
        if ( v66 && v66->fields.id >= 1 )
          v63 = v64 + 1;
      }
      if ( (__int64)++v64 >= (int)max_length )
        goto LABEL_135;
    }
    goto LABEL_183;
  }
  v63 = 0;
LABEL_135:
  if ( (int)max_length >= 1 )
  {
    v74 = v63;
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
        SkillIconComponent__Set_40922992((SkillIconComponent_o *)gameObject, v78[4], v78[5], v78[12], v78[13], 0);
        skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
        if ( !skillLevelIconLabelList )
          goto LABEL_183;
        if ( v76 >= LODWORD(skillLevelIconLabelList->max_length) )
          goto LABEL_346;
        gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v75);
        if ( !gameObject )
          goto LABEL_183;
        UIIconLabel__Set_41010828((UIIconLabel_o *)gameObject, 48, v78[5], 0, 0, 0, 0, 0, 0, 0, 0);
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
  v85 = *(_QWORD *)(gameObject + 16);
  v86 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(gameObject + 28);
  if ( !v85 )
    goto LABEL_183;
  v87 = *(int *)(gameObject + 24);
  if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      skillInfoUiWidget,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v88 = v85 + 8 * v87;
    *(_DWORD *)(gameObject + 24) = v87 + 1;
    *(_QWORD *)(v88 + 32) = skillInfoUiWidget;
    gameObject = sub_1C32BC4(v88 + 32, skillInfoUiWidget);
  }
LABEL_164:
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v160, v70);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_183;
    v90 = appendSkillIconList->max_length;
    if ( (__int64)(v90 << 32) < 1 )
    {
      v91 = 0;
    }
    else
    {
      v91 = 0;
      v92 = 0;
      do
      {
        if ( v160 )
        {
          v93 = LODWORD(v160->max_length);
          if ( v92 < (int)v93 )
          {
            if ( v92 >= v93 )
              goto LABEL_346;
            v94 = v160->m_Items[v92];
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
      v98 = v91;
      v99 = 4;
      do
      {
        v100 = v99 - 4;
        if ( v99 - 4 >= v98 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_183;
          if ( v100 >= LODWORD(appendSkillBaseList->max_length) )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_183;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          if ( !v160 )
            goto LABEL_183;
          if ( v100 >= LODWORD(v160->max_length) )
            goto LABEL_346;
          v101 = this->fields.appendSkillBaseList;
          if ( !v101 )
            goto LABEL_183;
          if ( v100 >= LODWORD(v101->max_length) )
            goto LABEL_346;
          gameObject = *((_QWORD *)&v101->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_183;
          v102 = (int32_t *)*((_QWORD *)&v160->obj.klass + v99);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v103 = this->fields.appendSkillIconList;
          if ( !v103 )
            goto LABEL_183;
          if ( v100 >= LODWORD(v103->max_length) )
            goto LABEL_346;
          if ( !v102 )
            goto LABEL_183;
          gameObject = *((_QWORD *)&v103->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_183;
          SkillIconComponent__Set_40922992((SkillIconComponent_o *)gameObject, v102[4], v102[5], v102[12], v102[13], 0);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_183;
          if ( v100 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
            goto LABEL_346;
          gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v99);
          if ( !gameObject )
            goto LABEL_183;
          UIIconLabel__Set_41010828((UIIconLabel_o *)gameObject, 48, v102[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
        v106 = this->fields.appendSkillIconList;
        if ( !v106 )
          goto LABEL_183;
        v107 = v99 - 3;
        ++v99;
      }
      while ( v107 < SLODWORD(v106->max_length) );
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
    appendSkillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
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
        appendSkillInfoUiWidget,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
    }
    else
    {
      v112 = v109 + 8 * v111;
      *(_DWORD *)(gameObject + 24) = v111 + 1;
      *(_QWORD *)(v112 + 32) = appendSkillInfoUiWidget;
      sub_1C32BC4(v112 + 32, appendSkillInfoUiWidget);
    }
  }
  else
  {
    v95 = this->fields.appendSkillIconList;
    if ( !v95 )
      goto LABEL_183;
    v96 = 0;
    while ( (int)v96 < SLODWORD(v95->max_length) )
    {
      v97 = this->fields.appendSkillBaseList;
      if ( !v97 )
        goto LABEL_183;
      if ( (unsigned int)v96 >= LODWORD(v97->max_length) )
        goto LABEL_346;
      gameObject = (__int64)v97->m_Items[v96];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
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
                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    v116 = this->fields.svtCommandCardList;
    if ( v15 & 1 | (servantEntity == 0) )
    {
      if ( !v116 )
        goto LABEL_183;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0);
    }
    else
    {
      v118 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v117 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v165.fields.currentCryptoKey = v118;
      *(_QWORD *)&v165.fields.fakeValue = v117;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v165, 0);
      if ( !v17 )
        goto LABEL_183;
      commandCardParam = v17->fields.commandCardParam;
      v120 = gameObject;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v17, 0);
      if ( !v116 )
        goto LABEL_183;
      ServantCommandCardListComponent__Set_40894944(
        v116,
        v120,
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
  v167.fields.y = -45.0;
  v167.fields.x = x;
  v167.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v167, 0);
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
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_17449/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite, (System_String_o *)StringLiteral_17450/*"btn_bg_27_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.registBackSprite, (System_String_o *)StringLiteral_17449/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite2, (System_String_o *)StringLiteral_17450/*"btn_bg_27_2"*/, 0);
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
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6524/*"FRIEND_BUTTON_CANCEL"*/, 0);
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
      v125 = &StringLiteral_20200/*"icon_friend"*/;
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
      v125 = &StringLiteral_20333/*"img_blacklist_requestdate"*/;
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
      v125 = &StringLiteral_20332/*"img_blacklist_recorddate"*/;
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
      v168 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_183;
      v126 = v168.fields.x;
      v127 = v168.fields.z;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_183;
      v169.fields.y = 0.0;
      v169.fields.x = v126;
      v169.fields.z = v127;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v169, 0);
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
      v125 = &StringLiteral_20199/*"icon_follow"*/;
LABEL_298:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v125, 0);
      break;
    default:
      break;
  }
  v128 = item->fields.otherUserGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_40328624 = Grade__GetKind_40328624(v128, 0);
  SupportBgImage = Grade__GetSupportBgImage(Kind_40328624, 0);
  baseSpr = this->fields.baseSpr;
  v132 = SupportBgImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v132, 0);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0, 0) )
  {
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    LODWORD(v135) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v136 = v135;
    LODWORD(v137) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_183;
    v138 = v137;
    v139 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v139, 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    v141 = LocalPositionX;
    v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionX(v142, (float)(v138 * 0.5) + (float)(v136 + v141), 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_183;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_40328624, 0);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v134);
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
  v144 = *(_QWORD *)(gameObject + 96);
  if ( !v144 )
    goto LABEL_183;
  if ( !*(_DWORD *)(v144 + 24) )
LABEL_346:
    sub_1C32E84(gameObject);
  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                          (OtherUserGameEntity_o *)gameObject,
                          item->fields.classPos,
                          1,
                          item->fields.displayServantType,
                          *(_DWORD *)(v144 + 32),
                          item->fields._FollowerGrandGraphId_k__BackingField,
                          0);
  if ( gameObject )
  {
    v145 = *(_QWORD *)(gameObject + 40);
    if ( v145 >= 1 )
    {
      v146 = item->fields.otherUserGameEntity;
      if ( !v146 )
        goto LABEL_183;
      if ( v146->fields.pushUserSvtId == v145 )
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
      v154 = (Il2CppObject **)&StringLiteral_6401/*"FFFF00"*/;
    else
      v154 = (Il2CppObject **)&StringLiteral_6402/*"FFFFFF"*/;
    v155 = *v154;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v156 = (Il2CppObject *)j_il2cpp_value_box_0(
                             int_TypeInfo,
                             &OpenClassBoardNum_k__BackingField,
                             v148,
                             v149,
                             v150,
                             v151,
                             v152,
                             v153);
    gameObject = (__int64)System_String__Format_63559836((System_String_o *)StringLiteral_16016/*"[{0}]+{1}[-]"*/, v155, v156, 0);
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
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17451/*"btn_bg_29_2"*/, 0);
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
  UnityEngine_GameObject_o *removeButton; // x0
  bool isLock; // w1
  int32_t kind; // w8

  if ( (byte_4C32586 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32586 = 1;
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
      sub_1C32E7C(removeButton);
    }
  }
}


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
    sub_1C32E7C(messageDispButton);
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
  FriendOperationItemListViewItemDraw_o *message; // x1
  System_String_o **v18; // x8

  v6 = this;
  if ( (byte_4C32585 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17500/*"btn_message_on"*/);
    sub_1C32C20(&StringLiteral_6532/*"FRIEND_HIDE_MESSAGE"*/);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_17499/*"btn_message_off"*/);
    byte_4C32585 = 1;
  }
  if ( !item )
    goto LABEL_22;
  v7 = 0.73725;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( isDisp )
    v7 = 1.0;
  if ( !this )
    goto LABEL_22;
  otherUserGameEntity = item->fields.otherUserGameEntity;
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
    message = (FriendOperationItemListViewItemDraw_o *)otherUserGameEntity->fields.message;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6532/*"FRIEND_HIDE_MESSAGE"*/, 0);
    message = this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)message, 0),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
  {
LABEL_22:
    sub_1C32E7C(this);
  }
  v18 = (System_String_o **)&StringLiteral_17499/*"btn_message_off"*/;
  if ( !isDisp )
    v18 = (System_String_o **)&StringLiteral_17500/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v18, 0);
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
  if ( (byte_4C32587 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C32587 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1C32E7C(this);
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