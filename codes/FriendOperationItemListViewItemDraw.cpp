void FriendOperationItemListViewItemDraw___ctor(FriendOperationItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SkillIconComponent_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UIIconLabel_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UnityEngine_GameObject_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct SkillIconComponent_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UIIconLabel_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_596B02D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&SkillIconComponent___TypeInfo);
    sub_2213A60(&UIIconLabel___TypeInfo);
    byte_596B02D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillBaseList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillIconList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UIIconLabel_array *)sub_2213B20(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillLevelIconLabelList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillBaseList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillIconList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (struct UIIconLabel_array *)sub_2213B20(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillLevelIconLabelList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FriendOperationItemListViewItemDraw__Awake(FriendOperationItemListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *skillIconSprite; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UISprite_o *v15; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UISprite_o *v19; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  UISprite_o *v23; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  UISprite_o *v27; // x19

  if ( (byte_596B027 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21207/*"icon_skill_mini"*/);
    sub_2213A60(&StringLiteral_21394/*"img_friend_skill"*/);
    sub_2213A60(&StringLiteral_21096/*"icon_append_mini"*/);
    sub_2213A60(&StringLiteral_21393/*"img_friend_appendskill"*/);
    byte_596B027 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v15 = this->fields.skillIconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
    AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_21207/*"icon_skill_mini"*/, 0);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0, 0) )
  {
    v19 = this->fields.skillTitleSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v18);
    AtlasManager__SetEventSprite(v19, (System_String_o *)StringLiteral_21394/*"img_friend_skill"*/, 0);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0, 0) )
  {
    v23 = this->fields.appendSkillIconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
    AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_21096/*"icon_append_mini"*/, 0);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0, 0) )
  {
    v27 = this->fields.appendSkillTitleSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25, v26);
    AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_21393/*"img_friend_appendskill"*/, 0);
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
  __int64 v8; // x2
  UnityEngine_Object_o *addRangeSprite; // x22
  struct UICommonButton_array *skillButtonList; // x8
  il2cpp_array_size_t max_length; // x24
  __int64 v12; // x25
  struct UICommonButton_array *v13; // x8
  UnityEngine_Behaviour_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Component_object; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v21; // x2
  int32_t kind; // w8
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *pushSpr; // x21
  struct UISprite_o *loginDataSpr; // x8
  struct UISprite_o *v27; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x9

  v6 = this;
  if ( (byte_596B02C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (FriendOperationItemListViewItemDraw_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B02C = 1;
  }
  if ( !item )
  {
    rangeSprite = (UnityEngine_Object_o *)v6->fields.rangeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rangeSprite;
      if ( !this )
        goto LABEL_102;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)v6->fields.addRangeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v8);
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.addRangeSprite;
      if ( !this )
        goto LABEL_102;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
  }
  skillButtonList = v6->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = v6->fields.skillButtonList;
        if ( !v13 )
          break;
        if ( (unsigned int)v12 >= LODWORD(v13->max_length) )
          goto LABEL_103;
        v14 = (UnityEngine_Behaviour_o *)v13->m_Items[v12];
        if ( !v14 )
          break;
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *, const MethodInfo *))v14->klass[1]._1.name)(
          v14,
          1,
          v14->klass[1]._1.namespaze,
          method);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))v14->klass[1]._1.nestedTypes)(
          v14,
          0,
          0,
          v14->klass[1]._1.implementedInterfaces);
        UnityEngine_Behaviour__set_enabled(v14, isInput, 0);
        if ( (_DWORD)max_length == (_DWORD)++v12 )
          goto LABEL_23;
      }
LABEL_102:
      sub_2213CDC(this, item);
    }
  }
LABEL_23:
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
  if ( !this )
    goto LABEL_102;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
    if ( !this )
      goto LABEL_102;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_102;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
    if ( !this )
      goto LABEL_102;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_102;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
    if ( !this )
      goto LABEL_102;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_102;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
    if ( !this )
      goto LABEL_102;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_102;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
    if ( !this )
      goto LABEL_102;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_102;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
    if ( !this )
      goto LABEL_102;
    this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !this )
      goto LABEL_102;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
    baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_102;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !this )
        goto LABEL_102;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_102;
      ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
    }
    if ( item )
    {
      kind = item->fields.kind;
      if ( kind <= 2 )
      {
        if ( kind )
        {
          if ( kind == 1 )
          {
            this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
            if ( !this )
              goto LABEL_102;
            this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( !this )
              goto LABEL_102;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
            this = (FriendOperationItemListViewItemDraw_o *)v6->fields.cancelButton;
            if ( !this )
              goto LABEL_102;
          }
          else
          {
            if ( kind != 2 )
              goto LABEL_86;
            this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
            if ( !this )
              goto LABEL_102;
            this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( !this )
              goto LABEL_102;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
            this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
            if ( !this )
              goto LABEL_102;
            this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( !this )
              goto LABEL_102;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
            this = (FriendOperationItemListViewItemDraw_o *)v6->fields.acceptButton;
            if ( !this )
              goto LABEL_102;
            ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
              this,
              0,
              1,
              this->klass[1]._1.implementedInterfaces);
            this = (FriendOperationItemListViewItemDraw_o *)v6->fields.rejectButton;
            if ( !this )
              goto LABEL_102;
          }
        }
        else
        {
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_102;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_102;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_102;
        }
        goto LABEL_85;
      }
      if ( kind > 7 )
      {
        if ( kind != 8 )
        {
          if ( kind != 9 )
            goto LABEL_86;
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_102;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_102;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
          if ( !this )
            goto LABEL_102;
          this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !this )
            goto LABEL_102;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
          this = (FriendOperationItemListViewItemDraw_o *)v6->fields.offerButton;
          if ( !this )
            goto LABEL_102;
          ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
            this,
            0,
            1,
            this->klass[1]._1.implementedInterfaces);
          goto LABEL_76;
        }
      }
      else if ( kind != 3 )
      {
        if ( kind != 7 )
          goto LABEL_86;
        this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
        if ( !this )
          goto LABEL_102;
        this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !this )
          goto LABEL_102;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
        this = (FriendOperationItemListViewItemDraw_o *)v6->fields.registButton;
        if ( !this )
          goto LABEL_102;
        goto LABEL_85;
      }
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
      if ( !this )
        goto LABEL_102;
      this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !this )
        goto LABEL_102;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
LABEL_76:
      this = (FriendOperationItemListViewItemDraw_o *)v6->fields.removeButton;
      if ( !this )
        goto LABEL_102;
LABEL_85:
      ((void (__fastcall *)(FriendOperationItemListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
LABEL_86:
      FriendOperationItemListViewItemDraw__UpdateLockUI(v6, item, v21);
      pushSpr = (UnityEngine_Object_o *)v6->fields.pushSpr;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      if ( UnityEngine_Object__op_Inequality(pushSpr, 0, 0) )
      {
        this = (FriendOperationItemListViewItemDraw_o *)v6->fields.pushSpr;
        if ( !this )
          goto LABEL_102;
        this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
        if ( !this )
          goto LABEL_102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (FriendOperationItemListViewItemDraw_o *)item->fields.otherUserGameEntity;
        if ( !this )
          goto LABEL_102;
        loginDataSpr = this->fields.loginDataSpr;
        if ( !loginDataSpr )
          goto LABEL_102;
        if ( !LODWORD(loginDataSpr->fields.m_CancellationTokenSource) )
LABEL_103:
          sub_2213CE4(this);
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
          v27 = this->fields.addRangeSprite;
          if ( (__int64)v27 >= 1 )
          {
            otherUserGameEntity = item->fields.otherUserGameEntity;
            if ( !otherUserGameEntity )
              goto LABEL_102;
            if ( (struct UISprite_o *)otherUserGameEntity->fields.pushUserSvtId == v27 )
            {
              this = (FriendOperationItemListViewItemDraw_o *)v6->fields.pushSpr;
              if ( !this )
                goto LABEL_102;
              this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
              if ( !this )
                goto LABEL_102;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItemDraw__SetItem(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rangeSprite; // x22
  int v8; // w8
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 v10; // x2
  __int64 gameObject; // x0
  UnityEngine_Object_o *v12; // x22
  int32_t kind; // w8
  bool v15; // w22
  __int64 v16; // x8
  int v17; // w25
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v19; // x2
  ServantLeaderInfo_o *v20; // x21
  const MethodInfo *v21; // x2
  UILabel_o *playerNameLabel; // x22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8
  struct OtherUserGameEntity_o *v25; // x8
  int32_t userLv; // w2
  __int64 v27; // x2
  UnityEngine_Object_o *addRangeSprite; // x20
  UIRangeLabel_o *servantNameLabel; // x22
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  int32_t TreasureDeviceLevelIcon; // w0
  __int64 v34; // x2
  long double v35; // q0
  int v36; // w22
  __int64 v37; // x0
  __int64 v38; // x0
  ServantLimitAddMaster_o *v39; // x23
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w24
  System_String_o *OverwriteTDName; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  System_String_o **v44; // x9
  bool v45; // cc
  Il2CppObject *v46; // x22
  System_String_o *v47; // x23
  System_String_o *v48; // x0
  System_String_o *v49; // x22
  UIRangeLabel_o *svtNpTitleLabel; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  UnityEngine_Object_o *svtNpCommandCard; // x22
  __int64 v54; // x2
  UIRangeLabel_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Object_o *v58; // x22
  int32_t v59; // w9
  UILabel_o *loginDataLabel; // x22
  int v61; // w8
  System_String_o *v62; // x0
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  System_String_o *v64; // x23
  int64_t createdAt; // x0
  System_String_o *v66; // x0
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  Il2CppObject *v68; // x0
  const MethodInfo *v69; // x2
  struct SkillIconComponent_array *v70; // x8
  int max_length; // w12
  __int64 v72; // x12
  int v73; // w9
  unsigned __int64 v74; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v76; // x14
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v78; // x22
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  const MethodInfo *v80; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v82; // x23
  __int64 v83; // x24
  signed __int64 v84; // x22
  __int64 v85; // x23
  unsigned __int64 v86; // x24
  struct UnityEngine_GameObject_array *v87; // x9
  int32_t *v88; // x28
  struct SkillIconComponent_array *v89; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v91; // x8
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  int v103; // w12
  __int64 v104; // x12
  int v105; // w9
  unsigned __int64 v106; // x10
  unsigned __int64 v107; // x14
  SkillInfo_o *v108; // x14
  struct SkillIconComponent_array *v109; // x8
  __int64 v110; // x22
  struct UnityEngine_GameObject_array *v111; // x8
  __int64 v112; // x2
  signed __int64 v113; // x22
  __int64 v114; // x23
  unsigned __int64 v115; // x24
  struct UnityEngine_GameObject_array *v116; // x9
  int32_t *v117; // x28
  struct SkillIconComponent_array *v118; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  __int64 v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  __int64 v130; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  __int64 v133; // x2
  ServantCommandCardListComponent_o *v134; // x22
  char v135; // w8
  __int64 v136; // x23
  __int64 v137; // x24
  int32_t v138; // w23
  int32_t ServantId; // w0
  System_Int32_array *commandCardParam; // x24
  int32_t v141; // w25
  __int64 v142; // x1
  __int64 v143; // x2
  UISprite_o *offerBackSprite; // x21
  __int64 v145; // x2
  int32_t v146; // w8
  __int64 *v147; // x8
  __int64 v148; // x1
  __int64 v149; // x2
  UILabel_o *cancelLabel; // x21
  OtherUserGameEntity_o *v151; // x21
  int32_t Kind_47388836; // w21
  System_String_o *SupportBgImage; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  UISprite_o *baseSpr; // x23
  System_String_o *v157; // x22
  __int64 v158; // x1
  __int64 v159; // x2
  UnityEngine_Object_o *gradeIcon; // x22
  const MethodInfo *v161; // x2
  float v162; // s0
  float v163; // s8
  float v164; // s0
  float v165; // s9
  UnityEngine_GameObject_o *v166; // x0
  float LocalPositionX; // s0
  float v168; // s10
  UnityEngine_GameObject_o *v169; // x0
  __int64 v170; // x1
  __int64 v171; // x2
  UnityEngine_Object_o *pushSpr; // x21
  __int64 v173; // x2
  __int64 v174; // x8
  __int64 v175; // x8
  struct OtherUserGameEntity_o *v176; // x9
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v178; // x1
  __int64 v179; // x2
  Il2CppObject **v180; // x10
  Il2CppObject *v181; // x21
  Il2CppObject *v182; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x21
  __int64 v184; // x1
  __int64 v185; // x2
  UISprite_o *classBoardBackSprite; // x20
  int32_t OpenClassBoardNum_k__BackingField; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *v188; // [xsp+28h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v192; // 0:kr14_12.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  UnityEngine_Vector3_o v195; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B028 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Grade_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&StringLiteral_21319/*"img_blacklist_requestdate"*/);
    sub_2213A60(&StringLiteral_18216/*"btn_bg_27_2"*/);
    sub_2213A60(&StringLiteral_6674/*"FFFFFF"*/);
    sub_2213A60(&StringLiteral_13949/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_2213A60(&StringLiteral_18217/*"btn_bg_29_2"*/);
    sub_2213A60(&StringLiteral_9747/*"NP_MAX_COLOR_NAME"*/);
    sub_2213A60(&StringLiteral_18215/*"btn_bg_26_2"*/);
    sub_2213A60(&StringLiteral_21318/*"img_blacklist_recorddate"*/);
    sub_2213A60(&StringLiteral_6673/*"FFFF00"*/);
    sub_2213A60(&StringLiteral_9710/*"NO_ENTRY_NAME"*/);
    sub_2213A60(&StringLiteral_9740/*"NP_COLOR_NAME"*/);
    sub_2213A60(&StringLiteral_16650/*"[{0}]+{1}[-]"*/);
    sub_2213A60(&StringLiteral_6810/*"FRIEND_BUTTON_CANCEL"*/);
    sub_2213A60(&StringLiteral_21177/*"icon_friend"*/);
    sub_2213A60(&StringLiteral_21176/*"icon_follow"*/);
    byte_596B028 = 1;
  }
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  skillInfoList = 0;
  tdInfo = 0;
  v188 = 0;
  v8 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( !item )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget, v27);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    return;
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
  }
  v12 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget, v10);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    gameObject = (__int64)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isTerminationSpace, 0);
  }
  if ( !mode )
    return;
  kind = item->fields.kind;
  gameObject = (__int64)item->fields.otherUserGameEntity;
  v15 = kind == 3 || kind == 9;
  if ( !gameObject )
    goto LABEL_201;
  v16 = *(_QWORD *)(gameObject + 104);
  if ( !v16 )
    goto LABEL_201;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_347;
  v17 = 1;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        (OtherUserGameEntity_o *)gameObject,
                        item->fields.classPos,
                        1,
                        item->fields.displayServantType,
                        *(_DWORD *)(v16 + 32),
                        item->fields._FollowerGrandGraphId_k__BackingField,
                        0);
  v20 = ServantLeaderInfo;
  if ( ServantLeaderInfo )
  {
    if ( ServantLeaderInfo->fields.userSvtId )
      goto LABEL_28;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_28;
    v82 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v83 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoUiWidget, v19);
    *(_QWORD *)&v193.fields.currentCryptoKey = v82;
    *(_QWORD *)&v193.fields.fakeValue = v83;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v193, 0) )
    {
LABEL_28:
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v20, 0);
      v17 = 0;
    }
    else
    {
      v20 = 0;
      v17 = 1;
    }
  }
  gameObject = (__int64)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_201;
  ServantFaceIconComponent__Set_48053420(
    (ServantFaceIconComponent_o *)gameObject,
    v20,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    v15,
    0,
    0,
    0,
    0);
  FriendOperationItemListViewItemDraw__setupMessageUI(this, item, v21);
  playerNameLabel = this->fields.playerNameLabel;
  if ( (byte_596B022 & 1) == 0 )
  {
    gameObject = sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596B022 = 1;
  }
  if ( !playerNameLabel )
    goto LABEL_201;
  otherUserGameEntity = item->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19957/*"error"*/;
  UILabel__set_text(playerNameLabel, *p_userName, 0);
  v25 = item->fields.otherUserGameEntity;
  gameObject = (__int64)this->fields.playerLevelIconLabel;
  if ( v25 )
  {
    userLv = v25->fields.userLv;
    if ( !gameObject )
      goto LABEL_201;
  }
  else
  {
    userLv = 1;
    if ( !gameObject )
      goto LABEL_201;
  }
  UIIconLabel__Set_48071660((UIIconLabel_o *)gameObject, 2, userLv, 0, 0, 0, 0, 0, 0, 0, 0);
  servantNameLabel = this->fields.servantNameLabel;
  gameObject = (__int64)FriendOperationItemListViewItem__get_SvtNameText(item, v30);
  if ( !servantNameLabel )
    goto LABEL_201;
  UIRangeLabel__Set(servantNameLabel, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  FriendOperationItemListViewItem__GetNpInfo(item, &tdInfo, v31);
  TreasureDeviceLevelIcon = FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(item, v32);
  if ( item->fields.servantEntity )
  {
    v36 = TreasureDeviceLevelIcon;
    v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
      v37 = sub_224B908(v35);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
    if ( (*(_WORD *)(v38 + 309) & 1) == 0 )
      v38 = sub_224B908(v35);
    gameObject = **(_QWORD **)(v38 + 184);
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( v17 )
      goto LABEL_201;
    v39 = (ServantLimitAddMaster_o *)gameObject;
    DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                      v20,
                                                      0);
    gameObject = ServantLeaderInfo__GetServantId(v20, -1, 0);
    if ( !tdInfo || !v39 )
      goto LABEL_201;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v39,
                        gameObject,
                        DispLimitCountStageSealAfterAtStageLimitCount,
                        tdInfo->fields.name,
                        tdInfo->fields.lv,
                        0);
    v44 = (System_String_o **)&StringLiteral_9747/*"NP_MAX_COLOR_NAME"*/;
    v45 = v36 <= 1;
    v46 = (Il2CppObject *)OverwriteTDName;
    if ( v45 )
      v44 = (System_String_o **)&StringLiteral_9740/*"NP_COLOR_NAME"*/;
    v47 = *v44;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
    v48 = LocalizationManager__Get(v47, 0);
    gameObject = (__int64)System_String__Format(v48, v46, 0);
    if ( !tdInfo )
      goto LABEL_201;
    v49 = (System_String_o *)gameObject;
    svtNpTitleLabel = this->fields.svtNpTitleLabel;
    gameObject = (__int64)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0);
    if ( !svtNpTitleLabel )
      goto LABEL_201;
    UIRangeLabel__Set(svtNpTitleLabel, v49, (System_String_o *)gameObject, 0, 0, 0, 0);
    svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51, v52);
    if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_201;
      ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)gameObject, tdInfo, 0);
    }
  }
  else
  {
    v55 = this->fields.svtNpTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget, v34);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9710/*"NO_ENTRY_NAME"*/, 0);
    if ( !v55 )
      goto LABEL_201;
    UIRangeLabel__Set(v55, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
    v58 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
    if ( UnityEngine_Object__op_Inequality(v58, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtNpCommandCard;
      if ( !gameObject )
        goto LABEL_201;
      ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)gameObject, 0);
    }
  }
  v59 = item->fields.kind;
  loginDataLabel = this->fields.loginDataLabel;
  v61 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v59 == 7 )
  {
    if ( !v61 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget, v54);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13949/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    userFriendRequestHistoryEntity = item->fields.userFriendRequestHistoryEntity;
    v64 = v66;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
      goto LABEL_97;
    }
  }
  else if ( v59 == 8 )
  {
    if ( !v61 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget, v54);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_13949/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    userBlacklistEntity = item->fields.userBlacklistEntity;
    v64 = v62;
    if ( userBlacklistEntity )
    {
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_97;
    }
  }
  else
  {
    if ( !v61 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillInfoUiWidget, v54);
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_13949/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    if ( item->fields.otherUserGameEntity )
    {
      createdAt = OtherUserGameEntity__getUpdatedAt(item->fields.otherUserGameEntity, item->fields.classPos, 0);
      goto LABEL_97;
    }
  }
  createdAt = 0;
LABEL_97:
  v68 = (Il2CppObject *)LocalizationManager__GetBeforeTime(createdAt, 0);
  gameObject = (__int64)System_String__Format(v64, v68, 0);
  if ( !loginDataLabel )
    goto LABEL_201;
  UILabel__set_text(loginDataLabel, (System_String_o *)gameObject, 0);
  if ( !item->fields.servantEntity )
  {
    skillIconList = this->fields.skillIconList;
    if ( skillIconList )
    {
      v78 = 0;
      while ( (int)v78 < SLODWORD(skillIconList->max_length) )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_201;
        if ( (unsigned int)v78 >= LODWORD(skillBaseList->max_length) )
          goto LABEL_347;
        gameObject = (__int64)skillBaseList->m_Items[v78];
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          skillIconList = this->fields.skillIconList;
          ++v78;
          if ( skillIconList )
            continue;
        }
        goto LABEL_201;
      }
      gameObject = (__int64)this->fields.skillInfoUiWidget;
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          goto LABEL_156;
        }
      }
    }
LABEL_201:
    sub_2213CDC(gameObject, skillInfoUiWidget);
  }
  gameObject = FriendOperationItemListViewItem__GetSkillInfo(item, &skillInfoList, v69);
  v70 = this->fields.skillIconList;
  if ( !v70 )
    goto LABEL_201;
  max_length = v70->max_length;
  if ( max_length >= 1 )
  {
    v72 = max_length & (unsigned int)~(max_length >> 31);
    v73 = 0;
    v74 = 0;
    while ( skillInfoList )
    {
      max_length_low = LODWORD(skillInfoList->max_length);
      if ( (__int64)v74 < (int)max_length_low )
      {
        if ( v74 >= max_length_low )
          goto LABEL_347;
        v76 = skillInfoList->m_Items[v74];
        if ( v76 && v76->fields.id >= 1 )
          v73 = v74 + 1;
      }
      if ( v72 == ++v74 )
        goto LABEL_127;
    }
    goto LABEL_201;
  }
  v73 = 0;
LABEL_127:
  v84 = v73;
  v85 = 4;
  while ( 1 )
  {
    v86 = v85 - 4;
    if ( v85 - 4 >= SLODWORD(v70->max_length) )
      break;
    if ( (__int64)v86 >= v84 )
    {
      v91 = this->fields.skillBaseList;
      if ( !v91 )
        goto LABEL_201;
      if ( v86 >= LODWORD(v91->max_length) )
        goto LABEL_347;
      gameObject = *((_QWORD *)&v91->obj.klass + v85);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_201;
      if ( v86 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_347;
      v87 = this->fields.skillBaseList;
      if ( !v87 )
        goto LABEL_201;
      if ( v86 >= LODWORD(v87->max_length) )
        goto LABEL_347;
      gameObject = *((_QWORD *)&v87->obj.klass + v85);
      if ( !gameObject )
        goto LABEL_201;
      v88 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v85);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v89 = this->fields.skillIconList;
      if ( !v89 )
        goto LABEL_201;
      if ( v86 >= LODWORD(v89->max_length) )
        goto LABEL_347;
      if ( !v88 )
        goto LABEL_201;
      gameObject = *((_QWORD *)&v89->obj.klass + v85);
      if ( !gameObject )
        goto LABEL_201;
      SkillIconComponent__Set_48066780((SkillIconComponent_o *)gameObject, v88[4], v88[5], v88[12], v88[13], 0);
      skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
      if ( !skillLevelIconLabelList )
        goto LABEL_201;
      if ( v86 >= LODWORD(skillLevelIconLabelList->max_length) )
        goto LABEL_347;
      gameObject = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v85);
      if ( !gameObject )
        goto LABEL_201;
      UIIconLabel__Set_48071660((UIIconLabel_o *)gameObject, 48, v88[5], 0, 0, 0, 0, 0, 0, 0, 0);
    }
    v70 = this->fields.skillIconList;
    ++v85;
    if ( !v70 )
      goto LABEL_201;
  }
  gameObject = (__int64)this->fields.skillInfoUiWidget;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_201;
  v98 = *(_QWORD *)(gameObject + 16);
  skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
  v99 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(gameObject + 28);
  if ( !v98 )
    goto LABEL_201;
  v100 = *(int *)(gameObject + 24);
  if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      skillInfoUiWidget,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = v98 + 8 * v100;
    *(_DWORD *)(gameObject + 24) = v100 + 1;
    *(_QWORD *)(v101 + 32) = skillInfoUiWidget;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v101 + 32),
      (int32_t)skillInfoUiWidget,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
  }
LABEL_156:
  if ( item->fields.servantEntity )
  {
    gameObject = FriendOperationItemListViewItem__GetAppendSkillInfo(item, &v188, v80);
    appendSkillIconList = this->fields.appendSkillIconList;
    if ( !appendSkillIconList )
      goto LABEL_201;
    v103 = appendSkillIconList->max_length;
    if ( v103 < 1 )
    {
      v105 = 0;
    }
    else
    {
      v104 = v103 & (unsigned int)~(v103 >> 31);
      v105 = 0;
      v106 = 0;
      do
      {
        if ( v188 )
        {
          v107 = LODWORD(v188->max_length);
          if ( (__int64)v106 < (int)v107 )
          {
            if ( v106 >= v107 )
              goto LABEL_347;
            v108 = v188->m_Items[v106];
            if ( v108 && v108->fields.id >= 1 )
              v105 = v106 + 1;
          }
        }
        ++v106;
      }
      while ( v104 != v106 );
    }
    v113 = v105;
    v114 = 4;
    while ( 1 )
    {
      v115 = v114 - 4;
      if ( v114 - 4 >= SLODWORD(appendSkillIconList->max_length) )
        break;
      if ( (__int64)v115 >= v113 )
      {
        appendSkillBaseList = this->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_201;
        if ( v115 >= LODWORD(appendSkillBaseList->max_length) )
          goto LABEL_347;
        gameObject = *((_QWORD *)&appendSkillBaseList->obj.klass + v114);
        if ( !gameObject )
          goto LABEL_201;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      else
      {
        if ( !v188 )
          goto LABEL_201;
        if ( v115 >= LODWORD(v188->max_length) )
          goto LABEL_347;
        v116 = this->fields.appendSkillBaseList;
        if ( !v116 )
          goto LABEL_201;
        if ( v115 >= LODWORD(v116->max_length) )
          goto LABEL_347;
        gameObject = *((_QWORD *)&v116->obj.klass + v114);
        if ( !gameObject )
          goto LABEL_201;
        v117 = (int32_t *)*((_QWORD *)&v188->obj.klass + v114);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v118 = this->fields.appendSkillIconList;
        if ( !v118 )
          goto LABEL_201;
        if ( v115 >= LODWORD(v118->max_length) )
          goto LABEL_347;
        if ( !v117 )
          goto LABEL_201;
        gameObject = *((_QWORD *)&v118->obj.klass + v114);
        if ( !gameObject )
          goto LABEL_201;
        SkillIconComponent__Set_48066780((SkillIconComponent_o *)gameObject, v117[4], v117[5], v117[12], v117[13], 0);
        appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
        if ( !appendSkillLevelIconLabelList )
          goto LABEL_201;
        if ( v115 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
          goto LABEL_347;
        gameObject = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v114);
        if ( !gameObject )
          goto LABEL_201;
        UIIconLabel__Set_48071660((UIIconLabel_o *)gameObject, 48, v117[5], 0, 0, 0, 0, 0, 0, 0, 0);
      }
      appendSkillIconList = this->fields.appendSkillIconList;
      ++v114;
      if ( !appendSkillIconList )
        goto LABEL_201;
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( !gameObject )
      goto LABEL_201;
    v127 = *(_QWORD *)(gameObject + 16);
    skillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
    v128 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v127 )
      goto LABEL_201;
    v129 = *(int *)(gameObject + 24);
    if ( (unsigned int)v129 >= *(_DWORD *)(v127 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        skillInfoUiWidget,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
    }
    else
    {
      v130 = v127 + 8 * v129;
      *(_DWORD *)(gameObject + 24) = v129 + 1;
      *(_QWORD *)(v130 + 32) = skillInfoUiWidget;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v130 + 32),
        (int32_t)skillInfoUiWidget,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126);
    }
  }
  else
  {
    v109 = this->fields.appendSkillIconList;
    if ( !v109 )
      goto LABEL_201;
    v110 = 0;
    while ( (int)v110 < SLODWORD(v109->max_length) )
    {
      v111 = this->fields.appendSkillBaseList;
      if ( !v111 )
        goto LABEL_201;
      if ( (unsigned int)v110 >= LODWORD(v111->max_length) )
        goto LABEL_347;
      gameObject = (__int64)v111->m_Items[v110];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        v109 = this->fields.appendSkillIconList;
        ++v110;
        if ( v109 )
          continue;
      }
      goto LABEL_201;
    }
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_201;
  if ( *(int *)(gameObject + 24) >= 2 )
  {
    switchSkillInfo = this->fields.switchSkillInfo;
    gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)gameObject,
                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchSkillInfo )
      goto LABEL_201;
    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)gameObject, 0, 0);
  }
  svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget, v112);
  gameObject = UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    v134 = this->fields.svtCommandCardList;
    if ( item->fields.servantEntity )
      v135 = v17;
    else
      v135 = 1;
    if ( (v135 & 1) != 0 )
    {
      if ( !v134 )
        goto LABEL_201;
      ServantCommandCardListComponent__Clear(this->fields.svtCommandCardList, 0);
    }
    else
    {
      v136 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
      v137 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoUiWidget, v133);
      *(_QWORD *)&v194.fields.currentCryptoKey = v136;
      *(_QWORD *)&v194.fields.fakeValue = v137;
      v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v194, 0);
      ServantId = ServantLeaderInfo__GetServantId(v20, -1, 0);
      commandCardParam = v20->fields.commandCardParam;
      v141 = ServantId;
      gameObject = (__int64)ServantLeaderInfo__getCommandCodeIdList(v20, 0);
      if ( !v134 )
        goto LABEL_201;
      ServantCommandCardListComponent__Set_48038284(
        v134,
        v138,
        v141,
        commandCardParam,
        (System_Int32_array *)gameObject,
        2,
        1,
        0);
    }
  }
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  v195.fields.x = localPosition.fields.x;
  v195.fields.z = localPosition.fields.z;
  v195.fields.y = -45.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v195, 0);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.acceptButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.rejectButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.removeButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.removeButton2;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.removeMarkSpr;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.registButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.offerButton;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  offerBackSprite = this->fields.offerBackSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v142, v143);
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_18215/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite, (System_String_o *)StringLiteral_18216/*"btn_bg_27_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.registBackSprite, (System_String_o *)StringLiteral_18215/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.removeBackSprite2, (System_String_o *)StringLiteral_18216/*"btn_bg_27_2"*/, 0);
  v146 = item->fields.kind;
  if ( v146 <= 2 )
  {
    if ( v146 )
    {
      if ( v146 == 1 )
      {
        gameObject = (__int64)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_201;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_201;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        cancelLabel = this->fields.cancelLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v148, v149);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6810/*"FRIEND_BUTTON_CANCEL"*/, 0);
        if ( !cancelLabel )
          goto LABEL_201;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
        goto LABEL_301;
      }
      if ( v146 != 2 )
        goto LABEL_301;
      gameObject = (__int64)this->fields.acceptButton;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.rejectButton;
      if ( !gameObject )
        goto LABEL_201;
    }
    else
    {
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_201;
    }
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    goto LABEL_301;
  }
  if ( v146 > 7 )
  {
    if ( v146 == 8 )
    {
      gameObject = (__int64)this->fields.removeButton2;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.registButton;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.loginDataSpr;
      if ( !gameObject )
        goto LABEL_201;
      v147 = &StringLiteral_21318/*"img_blacklist_recorddate"*/;
    }
    else
    {
      if ( v146 != 9 )
        goto LABEL_301;
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      v192 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
      gameObject = (__int64)this->fields.removeButton;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      v196.fields.y = 0.0;
      v196.fields.x = v192.fields.x;
      v196.fields.z = v192.fields.z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v196, 0);
      gameObject = (__int64)this->fields.offerButton;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_201;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.removeMarkSpr;
      if ( !gameObject )
        goto LABEL_201;
      v147 = &StringLiteral_21176/*"icon_follow"*/;
    }
  }
  else if ( v146 == 3 )
  {
    gameObject = (__int64)this->fields.removeButton;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.removeMarkSpr;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.removeMarkSpr;
    if ( !gameObject )
      goto LABEL_201;
    v147 = &StringLiteral_21177/*"icon_friend"*/;
  }
  else
  {
    if ( v146 != 7 )
      goto LABEL_301;
    gameObject = (__int64)this->fields.registButton;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.loginDataSpr;
    if ( !gameObject )
      goto LABEL_201;
    v147 = &StringLiteral_21319/*"img_blacklist_requestdate"*/;
  }
  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v147, 0);
LABEL_301:
  v151 = item->fields.otherUserGameEntity;
  if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, skillInfoUiWidget, v145);
  Kind_47388836 = Grade__GetKind_47388836(v151, 0);
  SupportBgImage = Grade__GetSupportBgImage(Kind_47388836, 0);
  baseSpr = this->fields.baseSpr;
  v157 = SupportBgImage;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v154, v155);
  AtlasManager__SetGradeIcon(baseSpr, v157, 0);
  gradeIcon = (UnityEngine_Object_o *)this->fields.gradeIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v158, v159);
  if ( UnityEngine_Object__op_Inequality(gradeIcon, 0, 0) )
  {
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_201;
    LODWORD(v162) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_201;
    v163 = v162;
    LODWORD(v164) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)gameObject, 0);
    gameObject = (__int64)this->fields.playerNameLabel;
    if ( !gameObject )
      goto LABEL_201;
    v165 = v164;
    v166 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v166, 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_201;
    v168 = LocalPositionX;
    v169 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionX(v169, (float)(v165 * 0.5) + (float)(v163 + v168), 0);
    gameObject = (__int64)this->fields.gradeIcon;
    if ( !gameObject )
      goto LABEL_201;
    UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind_47388836, 0);
  }
  FriendOperationItemListViewItemDraw__UpdateLockUI(this, item, v161);
  pushSpr = (UnityEngine_Object_o *)this->fields.pushSpr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v170, v171);
  if ( !UnityEngine_Object__op_Inequality(pushSpr, 0, 0) )
    goto LABEL_329;
  gameObject = (__int64)this->fields.pushSpr;
  if ( !gameObject )
    goto LABEL_201;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)item->fields.otherUserGameEntity;
  if ( !gameObject )
    goto LABEL_201;
  v174 = *(_QWORD *)(gameObject + 104);
  if ( !v174 )
    goto LABEL_201;
  if ( !*(_DWORD *)(v174 + 24) )
LABEL_347:
    sub_2213CE4(gameObject);
  gameObject = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                          (OtherUserGameEntity_o *)gameObject,
                          item->fields.classPos,
                          1,
                          item->fields.displayServantType,
                          *(_DWORD *)(v174 + 32),
                          item->fields._FollowerGrandGraphId_k__BackingField,
                          0);
  if ( gameObject )
  {
    v175 = *(_QWORD *)(gameObject + 40);
    if ( v175 >= 1 )
    {
      v176 = item->fields.otherUserGameEntity;
      if ( !v176 )
        goto LABEL_201;
      if ( v176->fields.pushUserSvtId == v175 )
      {
        gameObject = (__int64)this->fields.pushSpr;
        if ( !gameObject )
          goto LABEL_201;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_201;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
    }
  }
LABEL_329:
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfoUiWidget, v173);
  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0, 0)
    && (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) == 0 )
  {
    v180 = (Il2CppObject **)&StringLiteral_6674/*"FFFFFF"*/;
    if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
      v180 = (Il2CppObject **)&StringLiteral_6673/*"FFFF00"*/;
    v181 = *v180;
    OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
    v182 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &OpenClassBoardNum_k__BackingField);
    gameObject = (__int64)System_String__Format_75697880((System_String_o *)StringLiteral_16650/*"[{0}]+{1}[-]"*/, v181, v182, 0);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_201;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0);
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v178, v179);
  if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.classBoardOpenButton;
    if ( !gameObject )
      goto LABEL_201;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._OpenClassBoardNum_k__BackingField >= 0,
      0);
    classBoardBackSprite = this->fields.classBoardBackSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v184, v185);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_18217/*"btn_bg_29_2"*/, 0);
    gameObject = (__int64)this->fields.classBoardBackSprite;
    if ( !gameObject )
      goto LABEL_201;
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

  if ( (byte_596B02A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B02A = 1;
  }
  if ( item )
  {
    lockMarkObj = (UnityEngine_Object_o *)this->fields.lockMarkObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
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
      sub_2213CDC(removeButton, v6);
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
    sub_2213CDC(messageDispButton, isHide);
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


void FriendOperationItemListViewItemDraw__setMessageButtonUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        bool isDisp,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *v5; // x21
  FriendOperationItemListViewItemDraw_o *v6; // x20
  struct OtherUserGameEntity_o *otherUserGameEntity; // x22
  __int64 v10; // x2
  UILabel_o *messageLabel; // x21
  System_String_o **v12; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = item;
  v6 = this;
  if ( (byte_596B029 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18271/*"btn_message_on"*/);
    sub_2213A60(&StringLiteral_6818/*"FRIEND_HIDE_MESSAGE"*/);
    this = (FriendOperationItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_18270/*"btn_message_off"*/);
    byte_596B029 = 1;
  }
  if ( !v5 )
    goto LABEL_22;
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( !this )
    goto LABEL_22;
  v13.fields.r = 1.0;
  v13.fields.a = 1.0;
  otherUserGameEntity = v5->fields.otherUserGameEntity;
  if ( !isDisp )
    v13.fields.r = 0.73725;
  v13.fields.g = v13.fields.r;
  v13.fields.b = v13.fields.r;
  UIWidget__set_color((UIWidget_o *)this, v13, 0);
  this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageLabel;
  if ( !this )
    goto LABEL_22;
  v14.fields.r = 0.0;
  v14.fields.a = 1.0;
  if ( !isDisp )
    v14.fields.r = 0.50196;
  v14.fields.g = v14.fields.r;
  v14.fields.b = v14.fields.r;
  UILabel__set_effectColor((UILabel_o *)this, v14, 0);
  messageLabel = v6->fields.messageLabel;
  if ( isDisp )
  {
    if ( !otherUserGameEntity )
      goto LABEL_22;
    item = (FriendOperationItemListViewItem_o *)otherUserGameEntity->fields.message;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v10);
    this = (FriendOperationItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6818/*"FRIEND_HIDE_MESSAGE"*/, 0);
    item = (FriendOperationItemListViewItem_o *)this;
  }
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)item, 0),
        (this = (FriendOperationItemListViewItemDraw_o *)v6->fields.messageDispButton) == 0)
    || (this = (FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
  {
LABEL_22:
    sub_2213CDC(this, item);
  }
  v12 = (System_String_o **)&StringLiteral_18270/*"btn_message_off"*/;
  if ( !isDisp )
    v12 = (System_String_o **)&StringLiteral_18271/*"btn_message_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v12, 0);
}


void FriendOperationItemListViewItemDraw__setupMessageUI(
        FriendOperationItemListViewItemDraw_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *v4; // x19
  int32_t kind; // w8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_596B02B & 1) == 0 )
  {
    this = (FriendOperationItemListViewItemDraw_o *)sub_2213A60(&OptionManager_TypeInfo);
    byte_596B02B = 1;
  }
  if ( !item )
    goto LABEL_21;
  kind = item->fields.kind;
  if ( kind <= 2 )
  {
    if ( (unsigned int)kind < 3 )
      goto LABEL_20;
  }
  else
  {
    if ( kind <= 7 )
    {
      if ( kind != 3 )
      {
        if ( kind != 7 )
          return;
LABEL_20:
        FriendOperationItemListViewItemDraw__dispMessageUI(v4, 1, method);
        return;
      }
      otherUserGameEntity = item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        if ( !System_String__IsNullOrEmpty(otherUserGameEntity->fields.message, 0) )
        {
          if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7, method);
          if ( OptionManager__GetMessageDisp(0) )
          {
            FriendOperationItemListViewItemDraw__dispMessageUI(v4, 0, method);
            FriendOperationItemListViewItemDraw__setMessageButtonUI(v4, item, item->fields.swapMessageDisp, v8);
            return;
          }
        }
        goto LABEL_20;
      }
LABEL_21:
      sub_2213CDC(this, item);
    }
    if ( kind == 8 || kind == 9 )
      goto LABEL_20;
  }
}