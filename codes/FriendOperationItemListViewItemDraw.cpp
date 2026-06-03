void FriendOperationItemListViewItemDraw___ctor(FriendOperationItemListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  struct SkillIconComponent_array *v5; // x0
  struct UIIconLabel_array *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  struct UIIconLabel_array *v9; // x0

  if ( (byte_4E72003 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&UnityEngine_GameObject___TypeInfo);
    sub_1D0F0B4(&SkillIconComponent___TypeInfo);
    sub_1D0F0B4(&UIIconLabel___TypeInfo);
    byte_4E72003 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1D0F15C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1D0F058(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1D0F15C(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1D0F058(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1D0F15C(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1D0F058(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1D0F15C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1D0F058(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1D0F15C(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1D0F058(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1D0F15C(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1D0F058(&this->fields.appendSkillLevelIconLabelList, v9);
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

  if ( (byte_4E71FFD & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_20612/*"icon_skill_mini"*/);
    sub_1D0F0B4(&StringLiteral_20798/*"img_friend_skill"*/);
    sub_1D0F0B4(&StringLiteral_20505/*"icon_append_mini"*/);
    sub_1D0F0B4(&StringLiteral_20797/*"img_friend_appendskill"*/);
    byte_4E71FFD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1D0F058(&this->fields.switchSkillUIList, v3);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v5 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_20612/*"icon_skill_mini"*/, 0);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0, 0) )
  {
    v7 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_20798/*"img_friend_skill"*/, 0);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0, 0) )
  {
    v9 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20505/*"icon_append_mini"*/, 0);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0, 0) )
  {
    v11 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_20797/*"img_friend_appendskill"*/, 0);
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
  struct UISprite_o *loginDataSpr; // x8
  struct UISprite_o *v18; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9

  v6 = this;
  if ( (byte_4E72002 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72002 = 1;
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
      sub_1D0F314(this);
    }
  }
LABEL_24:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
LABEL_23:
    sub_1D0F30C(this, item);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_23;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                        (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_23;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_23;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
        loginDataSpr = this->fields.loginDataSpr;
        if ( !loginDataSpr )
          goto LABEL_23;
        if ( !LODWORD(loginDataSpr->fields.m_CancellationTokenSource) )
          goto LABEL_95;
        this = (FriendOperationItemListViewItemDraw_o *)OtherUserGameEntity__getServantLeaderInfo(
                                                          (OtherUserGameEntity_o *)this,
                                                          item->fields.classPos,
                                                          1,
                                                          item->fields.displayServantType,
                                                          (int32_t)loginDataSpr->fields.leftAnchor,
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v11; // x22
  int32_t kind; // w8
  bool v13; // w22
  UnityEngine_Object_o *addRangeSprite; // x20
  _DWORD *monitor; // x8
  char v16; // w25
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v18; // x21
  const MethodInfo *v19; // x2
  UILabel_o *playerNameLabel; // x22
  UIIconLabel_o *playerLevelIconLabel; // x22
  UIRangeLabel_o *servantNameLabel; // x22
  int32_t TreasureDeviceLevelIcon; // w22
  long double v24; // q0
  __int64 v25; // x0
  __int64 v26; // x0
  ServantLimitAddMaster_o *v27; // x23
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w24
  System_String_o *OverwriteTDName; // x0
  System_String_o **v30; // x9
  bool v31; // cc
  Il2CppObject *v32; // x22
  System_String_o *v33; // x23
  System_String_o *v34; // x0
  System_String_o *v35; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  UnityEngine_Object_o *svtNpCommandCard; // x22
  UIRangeLabel_o *v38; // x22
  UnityEngine_Object_o *v39; // x22
  int32_t v40; // w8
  UILabel_o *loginDataLabel; // x22
  System_String_o *v42; // x23
  int64_t friendReqDate; // x0
  Il2CppObject *v44; // x0
  struct SkillIconComponent_array *v45; // x8
  il2cpp_array_size_t max_length; // x8
  int v47; // w9
  unsigned __int64 v48; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v50; // x14
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v52; // x22
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v55; // x23
  __int64 v56; // x24
  __int64 v57; // x22
  __int64 v58; // x23
  unsigned __int64 v59; // x24
  struct UnityEngine_GameObject_array *v60; // x9
  int32_t *v61; // x27
  struct SkillIconComponent_array *v62; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v64; // x8
  struct SkillIconComponent_array *v65; // x8
  __int64 v66; // x9
  intptr_t m_CachedPtr; // x8
  _QWORD *v68; // x9
  __int64 klass_low; // x10
  intptr_t v70; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  il2cpp_array_size_t v72; // x8
  int v73; // w9
  signed __int64 v74; // x10
  unsigned __int64 v75; // x14
  SkillInfo_o *v76; // x14
  struct SkillIconComponent_array *v77; // x8
  __int64 v78; // x22
  struct UnityEngine_GameObject_array *v79; // x8
  __int64 v80; // x22
  __int64 v81; // x23
  unsigned __int64 v82; // x24
  struct UnityEngine_GameObject_array *v83; // x9
  int32_t *v84; // x27
  struct SkillIconComponent_array *v85; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v88; // x8
  __int64 v89; // x9
  intptr_t v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  intptr_t v93; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantCommandCardListComponent_o *v96; // x22
  __int64 v97; // x23
  __int64 v98; // x24
  int32_t v99; // w23
  int32_t ServantId; // w0
  System_Int32_array *commandCardParam; // x24
  int32_t v102; // w25
  float x; // s8
  float z; // s9
  UISprite_o *offerBackSprite; // x21
  UILabel_o *cancelLabel; // x21
  __int64 *v107; // x8
  float v108; // s8
  float v109; // s9
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  int32_t Kind_41786868; // w21
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x23
  System_String_o *v114; // x22
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v116; // x2
  float v117; // s0
  float v118; // s8
  float v119; // s0
  float v120; // s9
  UnityEngine_GameObject_o *v121; // x0
  float LocalPositionX; // s0
  float v123; // s10
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_Object_o *pushSpr; // x21
  _DWORD *v126; // x8
  __int64 v127; // x8
  struct OtherUserGameEntity_o *v128; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  Il2CppObject **v130; // x9
  Il2CppObject *v131; // x21
  Il2CppObject *v132; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UISprite_o *classBoardBackSprite; // x20
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  SkillInfo_array *v136; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E71FFE & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Grade_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&StringLiteral_20722/*"img_blacklist_requestdate"*/);
    sub_1D0F0B4(&StringLiteral_17714/*"btn_bg_27_2"*/);
    sub_1D0F0B4(&StringLiteral_6467/*"FFFFFF"*/);
    sub_1D0F0B4(&StringLiteral_13581/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1D0F0B4(&StringLiteral_17715/*"btn_bg_29_2"*/);
    sub_1D0F0B4(&StringLiteral_9474/*"NP_MAX_COLOR_NAME"*/);
    sub_1D0F0B4(&StringLiteral_17713/*"btn_bg_26_2"*/);
    sub_1D0F0B4(&StringLiteral_20721/*"img_blacklist_recorddate"*/);
    sub_1D0F0B4(&StringLiteral_6466/*"FFFF00"*/);
    sub_1D0F0B4(&StringLiteral_9437/*"NO_ENTRY_NAME"*/);
    sub_1D0F0B4(&StringLiteral_9467/*"NP_COLOR_NAME"*/);
    sub_1D0F0B4(&StringLiteral_16222/*"[{0}]+{1}[-]"*/);
    sub_1D0F0B4(&StringLiteral_6597/*"FRIEND_BUTTON_CANCEL"*/);
    sub_1D0F0B4(&StringLiteral_20582/*"icon_friend"*/);
    sub_1D0F0B4(&StringLiteral_20581/*"icon_follow"*/);
    byte_4E71FFE = 1;
  }
  tdInfo = 0;
  v136 = 0;
  skillInfoList = 0;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(rangeSprite, 0, 0);
  if ( !item )
  {
    if ( v8 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    return;
  }
  if ( v8 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_159;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive(gameObject, mode == 0, 0);
  }
  v11 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_159;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive(gameObject, item->fields.isTerminationSpace, 0);
  }
  if ( !mode )
    return;
  kind = item->fields.kind;
  v13 = kind == 9 || kind == 3;
  gameObject = (UnityEngine_GameObject_o *)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_159;
  monitor = gameObject[4].monitor;
  if ( !monitor )
    goto LABEL_159;
  if ( !monitor[6] )
    goto LABEL_322;
  v16 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        monitor[8],
                        item->fields._FollowerGrandGraphId_k__BackingField,
                        0);
  v18 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_36;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_36;
    v56 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v55 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v139.fields.currentCryptoKey = v56;
    *(_QWORD *)&v139.fields.fakeValue = v55;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v139, 0) )
    {
LABEL_36:
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v18, 0);
      v16 = 0;
    }
    else
    {
      v18 = 0;
      v16 = 1;
    }
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_159;
  ServantFaceIconComponent__Set_42458904(
    (ServantFaceIconComponent_o *)gameObject,
    v18,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v13,
    0,
    0,
    0,
    0);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v19);
  playerNameLabel = this->fields.playerNameLabel;
  gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_PlayerNameText(item, 0);
  if ( !playerNameLabel )
    goto LABEL_159;
  UILabel__set_text(playerNameLabel, (System_String_o *)gameObject, 0);
  playerLevelIconLabel = this->fields.playerLevelIconLabel;
  gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_PlayerLevel(item, 0);
  if ( !playerLevelIconLabel )
    goto LABEL_159;
  UIIconLabel__Set_42477084(playerLevelIconLabel, 2, (int32_t)gameObject, 0, 0, 0, 0, 0, 0, 0, 0);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtNameText(item, 0);
  if ( !servantNameLabel )
    goto LABEL_159;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, 0);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, 0);
  if ( FriendOperationItemListViewItem__get_SvtEntity(item, 0) )
  {
    v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1CE513C(v24);
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1CE513C(v24);
    gameObject = **(UnityEngine_GameObject_o ***)(v26 + 184);
    if ( !gameObject )
      goto LABEL_159;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v18 )
      goto LABEL_159;
    v27 = (ServantLimitAddMaster_o *)gameObject;
    DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                      v18,
                                                      0);
    gameObject = (UnityEngine_GameObject_o *)ServantLeaderInfo__GetServantId(v18, -1, 0);
    if ( !tdInfo || !v27 )
      goto LABEL_159;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v27,
                        (int32_t)gameObject,
                        DispLimitCountStageSealAfterAtStageLimitCount,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0);
    v30 = (System_String_o **)&StringLiteral_9474/*"NP_MAX_COLOR_NAME"*/;
    v31 = TreasureDeviceLevelIcon <= 1;
    v32 = (Il2CppObject *)OverwriteTDName;
    if ( v31 )
      v30 = (System_String_o **)&StringLiteral_9467/*"NP_COLOR_NAME"*/;
    v33 = *v30;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get(v33, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v34, v32, 0);
    if ( !tdInfo )
      goto LABEL_159;
    v35 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0);
    if ( !svtNpTitleLabel )
      goto LABEL_159;
    UIRangeLabel__Set(svtNpTitleLabel, v35, (System_String_o *)gameObject, 0, 0, 0, 0);
    svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_159;
      ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)gameObject, tdInfo, 0);
    }
  }
  else
  {
    v38 = this->fields.svtNpTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9437/*"NO_ENTRY_NAME"*/, 0);
    if ( !v38 )
      goto LABEL_159;
    UIRangeLabel__Set(v38, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
    v39 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_159;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0);
    }
  }
  v40 = item->fields.kind;
  if ( v40 == 7 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    friendReqDate = FriendOperationItemListViewItem__get_friendReqDate(item, 0);
  }
  else if ( v40 == 8 )
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    friendReqDate = FriendOperationItemListViewItem__get_blacklistRegistDate(item, 0);
  }
  else
  {
    loginDataLabel = this->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    friendReqDate = FriendOperationItemListViewItem__get_LoginTime(item, 0);
  }
  v44 = (Il2CppObject *)LocalizationManager__GetBeforeTime(friendReqDate, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v42, v44, 0);
  if ( !loginDataLabel )
    goto LABEL_159;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtEntity(item, 0);
  if ( !gameObject )
  {
    skillIconList = this->fields.skillIconList;
    if ( skillIconList )
    {
      v52 = 0;
      while ( (int)v52 < SLODWORD(skillIconList->max_length) )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_159;
        if ( (unsigned int)v52 >= LODWORD(skillBaseList->max_length) )
          goto LABEL_322;
        gameObject = skillBaseList->m_Items[v52];
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          skillIconList = this->fields.skillIconList;
          ++v52;
          if ( skillIconList )
            continue;
        }
        goto LABEL_159;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillInfoUiWidget;
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          goto LABEL_140;
        }
      }
    }
LABEL_159:
    sub_1D0F30C(gameObject, skillInfoUiWidget);
  }
  gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, 0);
  v45 = this->fields.skillIconList;
  if ( !v45 )
    goto LABEL_159;
  max_length = v45->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v47 = 0;
    v48 = 0;
    while ( skillInfoList )
    {
      max_length_low = LODWORD(skillInfoList->max_length);
      if ( (__int64)v48 < (int)max_length_low )
      {
        if ( v48 >= max_length_low )
          goto LABEL_322;
        v50 = skillInfoList->m_Items[v48];
        if ( v50 && v50->fields.id >= 1 )
          v47 = v48 + 1;
      }
      if ( (__int64)++v48 >= (int)max_length )
        goto LABEL_111;
    }
    goto LABEL_159;
  }
  v47 = 0;
LABEL_111:
  if ( (int)max_length >= 1 )
  {
    v57 = v47;
    v58 = 4;
    do
    {
      v59 = v58 - 4;
      if ( v58 - 4 >= v57 )
      {
        v64 = this->fields.skillBaseList;
        if ( !v64 )
          goto LABEL_159;
        if ( v59 >= LODWORD(v64->max_length) )
          goto LABEL_322;
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v64->obj.klass + v58);
        if ( !gameObject )
          goto LABEL_159;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      }
      else
      {
        if ( !skillInfoList )
          goto LABEL_159;
        if ( v59 >= LODWORD(skillInfoList->max_length) )
          goto LABEL_322;
        v60 = this->fields.skillBaseList;
        if ( !v60 )
          goto LABEL_159;
        if ( v59 >= LODWORD(v60->max_length) )
          goto LABEL_322;
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v60->obj.klass + v58);
        if ( !gameObject )
          goto LABEL_159;
        v61 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v58);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        v62 = this->fields.skillIconList;
        if ( !v62 )
          goto LABEL_159;
        if ( v59 >= LODWORD(v62->max_length) )
          goto LABEL_322;
        if ( !v61 )
          goto LABEL_159;
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v62->obj.klass + v58);
        if ( !gameObject )
          goto LABEL_159;
        SkillIconComponent__Set_42472220((SkillIconComponent_o *)gameObject, v61[4], v61[5], v61[12], v61[13], 0);
        skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
        if ( !skillLevelIconLabelList )
          goto LABEL_159;
        if ( v59 >= LODWORD(skillLevelIconLabelList->max_length) )
          goto LABEL_322;
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v58);
        if ( !gameObject )
          goto LABEL_159;
        UIIconLabel__Set_42477084((UIIconLabel_o *)gameObject, 48, v61[5], 0, 0, 0, 0, 0, 0, 0, 0);
      }
      v65 = this->fields.skillIconList;
      if ( !v65 )
        goto LABEL_159;
      v66 = v58 - 3;
      ++v58;
    }
    while ( v66 < SLODWORD(v65->max_length) );
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillInfoUiWidget;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_159;
  skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
  m_CachedPtr = gameObject->fields.m_CachedPtr;
  v68 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(gameObject[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_159;
  klass_low = SLODWORD(gameObject[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      skillInfoUiWidget,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = m_CachedPtr + 8 * klass_low;
    LODWORD(gameObject[1].klass) = klass_low + 1;
    *(_QWORD *)(v70 + 32) = skillInfoUiWidget;
    sub_1D0F058(v70 + 32, skillInfoUiWidget);
  }
LABEL_140:
  gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtEntity(item, 0);
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v136, 0);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_159;
    v72 = appendSkillIconList->max_length;
    if ( (__int64)(v72 << 32) < 1 )
    {
      v73 = 0;
    }
    else
    {
      v73 = 0;
      v74 = 0;
      do
      {
        if ( v136 )
        {
          v75 = LODWORD(v136->max_length);
          if ( v74 < (int)v75 )
          {
            if ( v74 >= v75 )
              goto LABEL_322;
            v76 = v136->m_Items[v74];
            if ( v76 && v76->fields.id >= 1 )
              v73 = v74 + 1;
          }
        }
        ++v74;
      }
      while ( v74 < (int)v72 );
    }
    if ( (int)v72 >= 1 )
    {
      v80 = v73;
      v81 = 4;
      do
      {
        v82 = v81 - 4;
        if ( v81 - 4 >= v80 )
        {
          appendSkillBaseList = this->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_159;
          if ( v82 >= LODWORD(appendSkillBaseList->max_length) )
            goto LABEL_322;
          gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v81);
          if ( !gameObject )
            goto LABEL_159;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
        else
        {
          if ( !v136 )
            goto LABEL_159;
          if ( v82 >= LODWORD(v136->max_length) )
            goto LABEL_322;
          v83 = this->fields.appendSkillBaseList;
          if ( !v83 )
            goto LABEL_159;
          if ( v82 >= LODWORD(v83->max_length) )
            goto LABEL_322;
          gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v83->obj.klass + v81);
          if ( !gameObject )
            goto LABEL_159;
          v84 = (int32_t *)*((_QWORD *)&v136->obj.klass + v81);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          v85 = this->fields.appendSkillIconList;
          if ( !v85 )
            goto LABEL_159;
          if ( v82 >= LODWORD(v85->max_length) )
            goto LABEL_322;
          if ( !v84 )
            goto LABEL_159;
          gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v85->obj.klass + v81);
          if ( !gameObject )
            goto LABEL_159;
          SkillIconComponent__Set_42472220((SkillIconComponent_o *)gameObject, v84[4], v84[5], v84[12], v84[13], 0);
          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_159;
          if ( v82 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
            goto LABEL_322;
          gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v81);
          if ( !gameObject )
            goto LABEL_159;
          UIIconLabel__Set_42477084((UIIconLabel_o *)gameObject, 48, v84[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
        v88 = this->fields.appendSkillIconList;
        if ( !v88 )
          goto LABEL_159;
        v89 = v81 - 3;
        ++v81;
      }
      while ( v89 < SLODWORD(v88->max_length) );
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_159;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.switchSkillUIList;
    if ( !gameObject )
      goto LABEL_159;
    skillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
    v90 = gameObject->fields.m_CachedPtr;
    v91 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(gameObject[1].klass);
    if ( !v90 )
      goto LABEL_159;
    v92 = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        skillInfoUiWidget,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = v90 + 8 * v92;
      LODWORD(gameObject[1].klass) = v92 + 1;
      *(_QWORD *)(v93 + 32) = skillInfoUiWidget;
      sub_1D0F058(v93 + 32, skillInfoUiWidget);
    }
  }
  else
  {
    v77 = this->fields.appendSkillIconList;
    if ( !v77 )
      goto LABEL_159;
    v78 = 0;
    while ( (int)v78 < SLODWORD(v77->max_length) )
    {
      v79 = this->fields.appendSkillBaseList;
      if ( !v79 )
        goto LABEL_159;
      if ( (unsigned int)v78 >= LODWORD(v79->max_length) )
        goto LABEL_322;
      gameObject = v79->m_Items[v78];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        v77 = this->fields.appendSkillIconList;
        ++v78;
        if ( v77 )
          continue;
      }
      goto LABEL_159;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_159;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_159;
  if ( SLODWORD(gameObject[1].klass) >= 2 )
  {
    switchSkillInfo = this->fields.switchSkillInfo;
    gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___ToArray(
                                               (System_Collections_Generic_List_object__o *)gameObject,
                                               (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_159;
    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0, 0);
  }
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)FriendOperationItemListViewItem__get_SvtEntity(item, 0);
    v96 = this->fields.svtCommandCardList;
    if ( v16 & 1 | (gameObject == 0) )
    {
      if ( !v96 )
        goto LABEL_159;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0);
    }
    else
    {
      if ( !v18 )
        goto LABEL_159;
      v98 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
      v97 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v140.fields.currentCryptoKey = v98;
      *(_QWORD *)&v140.fields.fakeValue = v97;
      v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v140, 0);
      ServantId = ServantLeaderInfo__GetServantId(v18, -1, 0);
      commandCardParam = v18->fields.commandCardParam;
      v102 = ServantId;
      gameObject = (UnityEngine_GameObject_o *)ServantLeaderInfo__getCommandCodeIdList(v18, 0);
      if ( !v96 )
        goto LABEL_159;
      ServantCommandCardListComponent__Set_42443692(
        v96,
        v99,
        v102,
        commandCardParam,
        (System_Int32_array *)gameObject,
        2,
        1,
        0);
    }
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_159;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_159;
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_159;
  v142.fields.y = -45.0;
  v142.fields.x = x;
  v142.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v142, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.acceptButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rejectButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton2;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.registButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.offerButton;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  offerBackSprite = this->fields.offerBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_17713/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite, (System_String_o *)StringLiteral_17714/*"btn_bg_27_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.registBackSprite, (System_String_o *)StringLiteral_17713/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite2, (System_String_o *)StringLiteral_17714/*"btn_bg_27_2"*/, 0);
  switch ( item->fields.kind )
  {
    case 0:
      gameObject = (UnityEngine_GameObject_o *)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_159;
      goto LABEL_244;
    case 1:
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      cancelLabel = this->fields.cancelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6597/*"FRIEND_BUTTON_CANCEL"*/, 0);
      if ( !cancelLabel )
        goto LABEL_159;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
      break;
    case 2:
      gameObject = (UnityEngine_GameObject_o *)this->fields.acceptButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.rejectButton;
      if ( !gameObject )
        goto LABEL_159;
LABEL_244:
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      break;
    case 3:
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_159;
      v107 = &StringLiteral_20582/*"icon_friend"*/;
      goto LABEL_274;
    case 7:
      gameObject = (UnityEngine_GameObject_o *)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_159;
      v107 = &StringLiteral_20722/*"img_blacklist_requestdate"*/;
      goto LABEL_274;
    case 8:
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton2;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_159;
      v107 = &StringLiteral_20721/*"img_blacklist_recorddate"*/;
      goto LABEL_274;
    case 9:
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        goto LABEL_159;
      v143 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_159;
      v108 = v143.fields.x;
      v109 = v143.fields.z;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        goto LABEL_159;
      v144.fields.y = 0.0;
      v144.fields.x = v108;
      v144.fields.z = v109;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v144, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_159;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_159;
      v107 = &StringLiteral_20581/*"icon_follow"*/;
LABEL_274:
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v107, 0);
      break;
    default:
      break;
  }
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_41786868 = Grade__GetKind_41786868(otherUserGameEntity, 0);
  SupportBgImage = Grade__GetSupportBgImage(Kind_41786868, 0);
  baseSpr = this->fields.baseSpr;
  v114 = SupportBgImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon(baseSpr, v114, 0);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_159;
    LODWORD(v117) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_159;
    v118 = v117;
    LODWORD(v119) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_159;
    v120 = v119;
    v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v121, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_159;
    v123 = LocalPositionX;
    v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionX(v124, (float)(v120 * 0.5) + (float)(v118 + v123), 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_159;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_41786868, 0);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v116);
  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(pushSpr, 0, 0) )
    goto LABEL_303;
  gameObject = (UnityEngine_GameObject_o *)this->fields.pushSpr;
  if ( !gameObject )
    goto LABEL_159;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_159;
  v126 = gameObject[4].monitor;
  if ( !v126 )
    goto LABEL_159;
  if ( !v126[6] )
LABEL_322:
    sub_1D0F314(gameObject);
  gameObject = (UnityEngine_GameObject_o *)OtherUserGameEntity__getServantLeaderInfo(
                                             (OtherUserGameEntity_o *)gameObject,
                                             item->fields.classPos,
                                             1,
                                             item->fields.displayServantType,
                                             v126[8],
                                             item->fields._FollowerGrandGraphId_k__BackingField,
                                             0);
  if ( gameObject )
  {
    v127 = gameObject[1].fields.m_CachedPtr;
    if ( v127 >= 1 )
    {
      v128 = item->fields.otherUserGameEntity;
      if ( !v128 )
        goto LABEL_159;
      if ( v128->fields.pushUserSvtId == v127 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.pushSpr;
        if ( !gameObject )
          goto LABEL_159;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_159;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      }
    }
  }
LABEL_303:
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0, 0)
    && (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) == 0 )
  {
    if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
      v130 = (Il2CppObject **)&StringLiteral_6466/*"FFFF00"*/;
    else
      v130 = (Il2CppObject **)&StringLiteral_6467/*"FFFFFF"*/;
    v131 = *v130;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OpenClassBoardNum_k__BackingField);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_65604080(
                                               (System_String_o *)StringLiteral_16222/*"[{0}]+{1}[-]"*/,
                                               v131,
                                               v132,
                                               0);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_159;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0);
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardOpenButton;
    if ( !gameObject )
      goto LABEL_159;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive(gameObject, item->fields._OpenClassBoardNum_k__BackingField >= 0, 0);
    classBoardBackSprite = this->fields.classBoardBackSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17715/*"btn_bg_29_2"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardBackSprite;
    if ( !gameObject )
      goto LABEL_159;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[2]._1.parent)(
      gameObject,
      gameObject->klass[2]._1.generic_class);
  }
}


void FriendOperationItemListViewItemDraw__UpdateLockUI(
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

  if ( (byte_4E72000 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72000 = 1;
  }
  if ( item )
  {
    lockMarkObj = (UnityEngine_Object_o *)this->fields.lockMarkObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockMarkObj, 0, 0) )
    {
      v6 = this->fields.lockMarkObj;
      IsLockDisp = FriendOperationItemListViewItem__get_IsLockDisp(item, 0);
      if ( !v6 )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(v6, IsLockDisp, 0);
    }
    kind = item->fields.kind;
    if ( kind != 9 && kind != 3 )
      return;
    IsLockDisp = FriendOperationItemListViewItem__get_IsLockDisp(item, 0);
    removeButton = this->fields.removeButton;
    if ( removeButton )
    {
      if ( IsLockDisp )
        v11 = 3;
      else
        v11 = 0;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeButton->klass->vtable._14_SetState.methodPtr)(
        removeButton,
        v11,
        1,
        removeButton->klass->vtable._14_SetState.method);
      return;
    }
LABEL_17:
    sub_1D0F30C(IsLockDisp, v8);
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
    sub_1D0F30C(messageDispButton, isHide);
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
  if ( (byte_4E71FFF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17764/*"btn_message_on"*/);
    sub_1D0F0B4(&StringLiteral_6605/*"FRIEND_HIDE_MESSAGE"*/);
    this = (FriendOperationItemListViewItemDraw_o *)sub_1D0F0B4(&StringLiteral_17763/*"btn_message_off"*/);
    byte_4E71FFF = 1;
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
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6605/*"FRIEND_HIDE_MESSAGE"*/, 0);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
  {
LABEL_22:
    sub_1D0F30C(this, item);
  }
  v17 = (System_String_o **)&StringLiteral_17763/*"btn_message_off"*/;
  if ( !isDisp )
    v17 = (System_String_o **)&StringLiteral_17764/*"btn_message_on"*/;
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
  if ( (byte_4E72001 & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_1D0F0B4(&OptionManager_TypeInfo);
    byte_4E72001 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1D0F30C(this, item);
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