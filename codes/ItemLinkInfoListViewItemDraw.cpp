void ItemLinkInfoListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  struct ItemLinkInfoListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4580A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo);
    sub_1C37058(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_23465/*"shortcut_board_icon_shop_burning"*/);
    sub_1C37058(&StringLiteral_23473/*"shortcut_board_icon_war_1002"*/);
    sub_1C37058(&StringLiteral_23460/*"shortcut_board_icon_holy_grail_casting"*/);
    sub_1C37058(&StringLiteral_23471/*"shortcut_board_icon_summon"*/);
    sub_1C37058(&StringLiteral_23470/*"shortcut_board_icon_shop_rare_prism"*/);
    sub_1C37058(&StringLiteral_23467/*"shortcut_board_icon_shop_evocation"*/);
    sub_1C37058(&StringLiteral_23461/*"shortcut_board_icon_holy_grail_drop"*/);
    sub_1C37058(&StringLiteral_23468/*"shortcut_board_icon_shop_mana_prism"*/);
    sub_1C37058(&StringLiteral_23462/*"shortcut_board_icon_mainquest"*/);
    sub_1C37058(&StringLiteral_23463/*"shortcut_board_icon_master_mission"*/);
    sub_1C37058(&StringLiteral_23459/*"shortcut_board_icon_friend"*/);
    sub_1C37058(&StringLiteral_23474/*"shortcut_board_icon_war_9999"*/);
    sub_1C37058(&StringLiteral_23456/*"shortcut_board_icon_bronze_sapling"*/);
    sub_1C37058(&StringLiteral_23464/*"shortcut_board_icon_ordeal_call"*/);
    sub_1C37058(&StringLiteral_23469/*"shortcut_board_icon_shop_pure_prism"*/);
    sub_1C37058(&StringLiteral_23466/*"shortcut_board_icon_shop_event"*/);
    sub_1C37058(&StringLiteral_23458/*"shortcut_board_icon_freequest"*/);
    byte_4C4580A = 1;
  }
  ItemLinkInfoListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200.0;
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
  if ( !v1 )
    sub_1C372B4(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23466/*"shortcut_board_icon_shop_event"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23464/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23464/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23474/*"shortcut_board_icon_war_9999"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_23458/*"shortcut_board_icon_freequest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_23473/*"shortcut_board_icon_war_1002"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_23462/*"shortcut_board_icon_mainquest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_23463/*"shortcut_board_icon_master_mission"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_23456/*"shortcut_board_icon_bronze_sapling"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23461/*"shortcut_board_icon_holy_grail_drop"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23460/*"shortcut_board_icon_holy_grail_casting"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23465/*"shortcut_board_icon_shop_burning"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23459/*"shortcut_board_icon_friend"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_23468/*"shortcut_board_icon_shop_mana_prism"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_23469/*"shortcut_board_icon_shop_pure_prism"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_23470/*"shortcut_board_icon_shop_rare_prism"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_23471/*"shortcut_board_icon_summon"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_23467/*"shortcut_board_icon_shop_evocation"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  static_fields = ItemLinkInfoListViewItemDraw_TypeInfo->static_fields;
  static_fields->boardIconNameList = (struct System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->boardIconNameList, (int32_t)v1, v4, v5);
}


void ItemLinkInfoListViewItemDraw___ctor(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  this->fields.frameSize = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoListViewItemDraw__Awake(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C457FE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C457FE = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v4 )
  {
    v7 = this->fields.baseSprite;
    if ( !v7
      || (mAtlas = v7->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v5, v6),
          (v11 = this->fields.baseSprite) == 0) )
    {
      sub_1C372B4(v4);
    }
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v9, v10);
  }
}


void ItemLinkInfoListViewItemDraw__CheckSerializeFieldAssertion(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void ItemLinkInfoListViewItemDraw__DeleteCallback(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rewardInformationComponent; // x20
  HorizontalQuestInformationIconListComponent_o *v4; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_4C45809 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45809 = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0) )
  {
    v4 = this->fields.rewardInformationComponent;
    if ( !v4 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v4, 0);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0) )
  {
    v4 = this->fields.enemyInformationComponent;
    if ( v4 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v4, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v4);
  }
}


System_String_o *ItemLinkInfoListViewItemDraw__GetBoardIconName(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_c *v4; // x0
  ItemLinkInfoListViewItemDraw_c *v5; // x0

  if ( (byte_4C45807 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
    sub_1C37058(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1C37058(&StringLiteral_23455/*"shortcut_board_icon_"*/);
    byte_4C45807 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0) )
    return System_String__Concat_63561656(
             (System_String_o *)StringLiteral_23455/*"shortcut_board_icon_"*/,
             item->fields._IconName_k__BackingField,
             0);
  v4 = ItemLinkInfoListViewItemDraw_TypeInfo;
  if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo);
    v4 = ItemLinkInfoListViewItemDraw_TypeInfo;
  }
  this = (ItemLinkInfoListViewItemDraw_o *)v4->static_fields->boardIconNameList;
  if ( !this )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         item->fields._Type_k__BackingField,
         (const MethodInfo_342D814 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__) )
  {
    v5 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo);
      v5 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    this = (ItemLinkInfoListViewItemDraw_o *)v5->static_fields->boardIconNameList;
    if ( this )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                  item->fields._Type_k__BackingField,
                                  (const MethodInfo_342D580 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
LABEL_15:
    sub_1C372B4(this);
  }
  return string_TypeInfo->static_fields->Empty;
}


float ItemLinkInfoListViewItemDraw__GetHeight(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  float result; // s0
  ItemLinkInfoListViewItemDraw_c *v4; // x0

  if ( (byte_4C45808 & 1) == 0 )
  {
    sub_1C37058(&ItemLinkInfoListViewItemDraw_TypeInfo);
    byte_4C45808 = 1;
  }
  result = this->fields.frameSize.fields.y;
  if ( result <= 0.0 )
  {
    v4 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo);
      v4 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    return v4->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
  return result;
}


System_String_o *ItemLinkInfoListViewItemDraw__ModifyNameText(
        ItemLinkInfoListViewItemDraw_o *this,
        System_String_o *displayName,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_o *v4; // x20
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  int32_t v8; // w1
  int32_t stringLength; // w8
  float v10; // s8
  float v11; // s8
  System_String_o *v12; // x2
  unsigned int v13; // w8

  v4 = this;
  if ( (byte_4C45800 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1C37058(&StringLiteral_43/*"\n"*/);
    byte_4C45800 = 1;
  }
  if ( !displayName )
    goto LABEL_21;
  this = (ItemLinkInfoListViewItemDraw_o *)System_String__Contains(displayName, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return displayName;
  nameLabel = v4->fields.nameLabel;
  if ( !nameLabel )
LABEL_21:
    sub_1C372B4(this);
  mFontSize = nameLabel->fields.mFontSize;
  if ( mFontSize < 1 )
    v8 = 0;
  else
    v8 = nameLabel->fields.mWidth / mFontSize;
  stringLength = displayName->fields._stringLength;
  if ( stringLength <= 2 * v8 )
  {
    if ( stringLength <= v8 )
      return displayName;
    v12 = (System_String_o *)StringLiteral_43/*"\n"*/;
  }
  else
  {
    v10 = (float)stringLength;
    if ( !byte_4C3CFE8 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3CFE8 = 1;
    }
    v11 = v10 * 0.5;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = (System_String_o *)StringLiteral_43/*"\n"*/;
    v13 = vcvtps_s32_f32(v11);
    if ( ceilf(v11) == INFINITY )
      v8 = 0x80000000;
    else
      v8 = v13;
  }
  return System_String__Insert(displayName, v8, v12, 0);
}


void ItemLinkInfoListViewItemDraw__OnClickButton(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  struct ItemLinkInfoListViewItem_o *viewItem; // x8

  viewItem = this->fields.viewItem;
  if ( !viewItem )
    sub_1C372B4(this);
  ActionExtensions__Call(viewItem->fields._LinkAction_k__BackingField, 0);
}


void ItemLinkInfoListViewItemDraw__SetBaseButtonState(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  struct UICommonButton_o *v7; // x8
  float v8; // s1

  if ( (byte_4C45801 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45801 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !boardItem )
      goto LABEL_12;
    v7 = this->fields.baseButton;
    v8 = 0.5;
    if ( boardItem->fields._IsLocked_k__BackingField )
      v8 = 1.0;
    if ( !v7
      || (v7->fields.specifyDisabledColor.fields.r = v8,
          v7->fields.specifyDisabledColor.fields.g = v8,
          v7->fields.specifyDisabledColor.fields.b = v8,
          v7->fields.specifyDisabledColor.fields.a = 1.0,
          (v6 = this->fields.baseButton) == 0) )
    {
LABEL_12:
      sub_1C372B4(v6);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))v6->klass->vtable._5_set_isEnabled.methodPtr)(
      v6,
      !boardItem->fields._IsLocked_k__BackingField,
      v6->klass->vtable._5_set_isEnabled.method);
  }
}


void ItemLinkInfoListViewItemDraw__SetBoardImage(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  UISprite_o *v4; // x20
  struct UISprite_o *v5; // x0

  if ( (byte_4C45803 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20429/*"img_list_bg03"*/);
    byte_4C45803 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0, 0) )
  {
    v4 = this->fields.baseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v4, (System_String_o *)StringLiteral_20429/*"img_list_bg03"*/, 0);
    v5 = this->fields.baseSprite;
    if ( !v5 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v5,
      v5->klass->vtable._33_MakePixelPerfect.method);
  }
}


void ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  System_String_o *BoardIconName; // x20
  UISprite_o *v9; // x21
  struct UISprite_o *v10; // x0

  if ( (byte_4C45806 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45806 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(iconSprite, 0, 0);
  if ( !v6 )
  {
    BoardIconName = ItemLinkInfoListViewItemDraw__GetBoardIconName((ItemLinkInfoListViewItemDraw_o *)v6, item, v7);
    if ( !System_String__IsNullOrEmpty(BoardIconName, 0) )
    {
      v9 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v9, BoardIconName, 0);
      v10 = this->fields.iconSprite;
      if ( !v10 )
        sub_1C372B4(0);
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v10->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v10,
        v10->klass->vtable._33_MakePixelPerfect.method);
    }
  }
}


void ItemLinkInfoListViewItemDraw__SetDispItemIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *arrowObject; // x21
  UnityEngine_GameObject_o *v6; // x0
  bool IsFirst_k__BackingField; // w1
  UnityEngine_Object_o *itemIconRoot; // x21
  UnityEngine_Object_o *itemInfoBasePrefab; // x21
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v12; // x20
  Il2CppObject *Component_object; // x20
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8
  int32_t id; // w2

  if ( (byte_4C45802 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45802 = 1;
  }
  arrowObject = (UnityEngine_Object_o *)this->fields.arrowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(arrowObject, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !boardItem )
      goto LABEL_42;
    v6 = this->fields.arrowObject;
    if ( boardItem->fields._IsItemGetInfoList_k__BackingField )
    {
      IsFirst_k__BackingField = boardItem->fields._IsFirst_k__BackingField;
      if ( !v6 )
        goto LABEL_42;
    }
    else
    {
      IsFirst_k__BackingField = 0;
      if ( !v6 )
        goto LABEL_42;
    }
    UnityEngine_GameObject__SetActive(v6, IsFirst_k__BackingField, 0);
  }
  else if ( !boardItem )
  {
    goto LABEL_42;
  }
  if ( boardItem->fields._IsItemGetInfoList_k__BackingField && boardItem->fields._IsFirst_k__BackingField )
  {
    itemIconRoot = (UnityEngine_Object_o *)this->fields.itemIconRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemIconRoot, 0, 0) )
    {
      itemInfoBasePrefab = (UnityEngine_Object_o *)this->fields.itemInfoBasePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(itemInfoBasePrefab, 0, 0) )
      {
        v6 = this->fields.itemIconRoot;
        if ( !v6 )
          goto LABEL_42;
        v10 = (Il2CppObject *)this->fields.itemInfoBasePrefab;
        transform = UnityEngine_GameObject__get_transform(v6, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__Instantiate_object__51855596(
                v10,
                transform,
                (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
        v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_42;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v12,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C3CD62 )
            {
              sub_1C37058(&NetworkManager_TypeInfo);
              byte_4C3CD62 = 1;
            }
            v6 = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v6 = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
            }
            ItemEnt_k__BackingField = boardItem->fields._ItemEnt_k__BackingField;
            if ( ItemEnt_k__BackingField )
              id = ItemEnt_k__BackingField->fields.id;
            else
              id = 0;
            if ( Component_object )
            {
              LimitCntUpItemComponent__setLimitUpItemInfo(
                (LimitCntUpItemComponent_o *)Component_object,
                *(_QWORD *)(v6[7].fields.m_CachedPtr + 64),
                id,
                boardItem->fields._ItemNeedNum_k__BackingField,
                0);
              return;
            }
LABEL_42:
            sub_1C372B4(v6);
          }
        }
      }
    }
  }
}


bool ItemLinkInfoListViewItemDraw__SetItem(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ItemLinkInfoListViewItem_o **p_viewItem; // x21
  System_String_o *Master_object; // x0
  const MethodInfo *v8; // x2
  UILabel_o *nameLabel; // x22
  const MethodInfo *v10; // x1
  struct ItemLinkInfoListViewItem_o *v11; // x8
  int32_t Type_k__BackingField; // w9
  int32_t v13; // w21
  UnityEngine_Object_o *rewardInformationComponent; // x22
  UnityEngine_Object_o *enemyInformationComponent; // x22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v17; // x23
  Il2CppObject *Empty; // x22
  System_String_o *v19; // x21
  int64_t v20; // x22
  int32_t TargetId_k__BackingField; // w21
  char *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  Il2CppObject *RestTime2; // x0
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  struct UILabel_o *restTimeLabel; // x21
  System_String_o *v28; // x1
  UILabel_o *v29; // x0
  System_String_o *v30; // x0
  Il2CppObject *v31; // x0
  struct ItemLinkInfoListViewItem_o *v32; // x8
  struct UILabel_o *v33; // x21
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  System_String_o *infoText; // [xsp+8h] [xbp-48h] BYREF
  int64_t endedAt; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C457FF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C37058(&StringLiteral_8685/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/);
    byte_4C457FF = 1;
  }
  endedAt = 0;
  entity = 0;
  infoText = 0;
  if ( item )
  {
    this->fields.viewItem = item;
    p_viewItem = &this->fields.viewItem;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.viewItem, (int32_t)item, (int32_t)method, v3);
    if ( !this->fields.viewItem )
      goto LABEL_63;
    nameLabel = this->fields.nameLabel;
    Master_object = ItemLinkInfoListViewItemDraw__ModifyNameText(
                      this,
                      this->fields.viewItem->fields._Name_k__BackingField,
                      v8);
    if ( !nameLabel )
      goto LABEL_63;
    UILabel__set_text(nameLabel, Master_object, 0);
    v11 = *p_viewItem;
    if ( !*p_viewItem )
      goto LABEL_63;
    Type_k__BackingField = v11->fields._Type_k__BackingField;
    if ( (unsigned int)(Type_k__BackingField - 2) >= 4 )
    {
      if ( Type_k__BackingField != 1 )
        goto LABEL_61;
      TargetId_k__BackingField = v11->fields._TargetId_k__BackingField;
      if ( !TargetId_k__BackingField || v11->fields._TargetValueType_k__BackingField != 4 )
        goto LABEL_61;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Master_object )
        goto LABEL_63;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              TargetId_k__BackingField,
              (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        goto LABEL_61;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (System_String_o *)NetworkManager__getTime(0);
      if ( !entity )
        goto LABEL_63;
      v22 = (char *)((char *)entity[6].monitor - (char *)Master_object);
      if ( (__int64)v22 < 1 )
        goto LABEL_61;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8685/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)v22, 0, 0);
      Master_object = System_String__Format(v24, RestTime2, 0);
      viewItem = this->fields.viewItem;
      if ( viewItem )
      {
        restTimeLabel = this->fields.restTimeLabel;
        v28 = Master_object;
        if ( viewItem->fields._IsLocked_k__BackingField )
        {
          Master_object = System_String__Format(v23, (Il2CppObject *)Master_object, 0);
          v28 = Master_object;
        }
        if ( restTimeLabel )
        {
          v29 = restTimeLabel;
LABEL_60:
          UILabel__set_text(v29, v28, 0);
          goto LABEL_61;
        }
      }
    }
    else
    {
      v13 = v11->fields._TargetId_k__BackingField;
      if ( !v13 || v11->fields._TargetValueType_k__BackingField != 1 )
        goto LABEL_61;
      if ( !v11->fields._IsNotDisplayQuestInfo_k__BackingField && !v11->fields._IsLocked_k__BackingField )
      {
        rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0) )
        {
          Master_object = (System_String_o *)this->fields.rewardInformationComponent;
          if ( !Master_object )
            goto LABEL_63;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v13,
            0);
        }
        enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0) )
        {
          Master_object = (System_String_o *)this->fields.enemyInformationComponent;
          if ( !Master_object )
            goto LABEL_63;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v13,
            0);
        }
      }
      Master_object = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Master_object )
      {
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Master_object, v13, 0);
        if ( !QuestInfo )
          goto LABEL_61;
        v17 = QuestInfo;
        Master_object = (System_String_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0);
        if ( !Master_object )
          goto LABEL_63;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 32, 0) )
          goto LABEL_61;
        endedAt = 0;
        Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( QuestMaster__TryGetPrivilegePeriodMessage(&infoText, &endedAt, v13, 0) )
        {
          v19 = infoText;
          v20 = endedAt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        else
        {
          endedAt = v17->fields.endTime;
          if ( endedAt < 1 )
            goto LABEL_52;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
          v20 = endedAt;
          v19 = v30;
        }
        v31 = (Il2CppObject *)LocalizationManager__GetRestTime2(v20, -1, 0);
        Empty = (Il2CppObject *)System_String__Format(v19, v31, 0);
LABEL_52:
        if ( !System_String__IsNullOrEmpty((System_String_o *)Empty, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8685/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
          v32 = this->fields.viewItem;
          if ( v32 )
          {
            v33 = this->fields.restTimeLabel;
            if ( v32->fields._IsLocked_k__BackingField )
            {
              Master_object = System_String__Format(Master_object, Empty, 0);
              Empty = (Il2CppObject *)Master_object;
            }
            if ( v33 )
            {
              v29 = v33;
              v28 = (System_String_o *)Empty;
              goto LABEL_60;
            }
          }
          goto LABEL_63;
        }
LABEL_61:
        ItemLinkInfoListViewItemDraw__SetBoardImage(this, v10);
        ItemLinkInfoListViewItemDraw__SetMaskImage(this, v34);
        ItemLinkInfoListViewItemDraw__SetRecommendIcon(this, this->fields.viewItem, v35);
        ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(this, this->fields.viewItem, v36);
        ItemLinkInfoListViewItemDraw__SetDispItemIcon(this, this->fields.viewItem, v37);
        ItemLinkInfoListViewItemDraw__SetLockBoard(this, this->fields.viewItem, v38);
        return item != 0;
      }
    }
LABEL_63:
    sub_1C372B4(Master_object);
  }
  return item != 0;
}


void ItemLinkInfoListViewItemDraw__SetLockBoard(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( !boardItem )
    goto LABEL_8;
  if ( boardItem->fields._IsLocked_k__BackingField )
  {
    v4 = this;
    this = (ItemLinkInfoListViewItemDraw_o *)this->fields.closedMessageLabel;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, boardItem->fields._ClosedMessage_k__BackingField, 0);
      this = (ItemLinkInfoListViewItemDraw_o *)v4->fields.enableMask;
      if ( this )
      {
        this = (ItemLinkInfoListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          ItemLinkInfoListViewItemDraw__SetBaseButtonState(v4, boardItem, v5);
          return;
        }
      }
    }
LABEL_8:
    sub_1C372B4(this);
  }
}


void ItemLinkInfoListViewItemDraw__SetMaskImage(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *enableMask; // x20
  UISprite_o *v4; // x20
  struct UISprite_o *v5; // x0

  if ( (byte_4C45804 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20429/*"img_list_bg03"*/);
    byte_4C45804 = 1;
  }
  enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(enableMask, 0, 0) )
  {
    v4 = this->fields.enableMask;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v4, (System_String_o *)StringLiteral_20429/*"img_list_bg03"*/, 0);
    v5 = this->fields.enableMask;
    if ( !v5 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v5,
      v5->klass->vtable._33_MakePixelPerfect.method);
  }
}


void ItemLinkInfoListViewItemDraw__SetRecommendIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recommendIconSprite; // x21
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v7; // x19

  if ( (byte_4C45805 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20246/*"icon_support_recommend_yellow"*/);
    byte_4C45805 = 1;
  }
  recommendIconSprite = (UnityEngine_Object_o *)this->fields.recommendIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recommendIconSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.recommendIconSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0), !item)
      || !gameObject )
    {
      sub_1C372B4(gameObject);
    }
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._IsRecommend_k__BackingField && !item->fields._IsLocked_k__BackingField,
      0);
    v7 = this->fields.recommendIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v7, (System_String_o *)StringLiteral_20246/*"icon_support_recommend_yellow"*/, 0);
  }
}