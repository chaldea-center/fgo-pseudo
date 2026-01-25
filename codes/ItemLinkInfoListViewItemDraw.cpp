void ItemLinkInfoListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  struct ItemLinkInfoListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF0EE2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo);
    sub_1C7BAE8(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23684/*"shortcut_board_icon_shop_burning"*/);
    sub_1C7BAE8(&StringLiteral_23692/*"shortcut_board_icon_war_1002"*/);
    sub_1C7BAE8(&StringLiteral_23679/*"shortcut_board_icon_holy_grail_casting"*/);
    sub_1C7BAE8(&StringLiteral_23690/*"shortcut_board_icon_summon"*/);
    sub_1C7BAE8(&StringLiteral_23689/*"shortcut_board_icon_shop_rare_prism"*/);
    sub_1C7BAE8(&StringLiteral_23686/*"shortcut_board_icon_shop_evocation"*/);
    sub_1C7BAE8(&StringLiteral_23680/*"shortcut_board_icon_holy_grail_drop"*/);
    sub_1C7BAE8(&StringLiteral_23687/*"shortcut_board_icon_shop_mana_prism"*/);
    sub_1C7BAE8(&StringLiteral_23681/*"shortcut_board_icon_mainquest"*/);
    sub_1C7BAE8(&StringLiteral_23682/*"shortcut_board_icon_master_mission"*/);
    sub_1C7BAE8(&StringLiteral_23678/*"shortcut_board_icon_friend"*/);
    sub_1C7BAE8(&StringLiteral_23693/*"shortcut_board_icon_war_9999"*/);
    sub_1C7BAE8(&StringLiteral_23675/*"shortcut_board_icon_bronze_sapling"*/);
    sub_1C7BAE8(&StringLiteral_23683/*"shortcut_board_icon_ordeal_call"*/);
    sub_1C7BAE8(&StringLiteral_23688/*"shortcut_board_icon_shop_pure_prism"*/);
    sub_1C7BAE8(&StringLiteral_23685/*"shortcut_board_icon_shop_event"*/);
    sub_1C7BAE8(&StringLiteral_23677/*"shortcut_board_icon_freequest"*/);
    byte_4CF0EE2 = 1;
  }
  ItemLinkInfoListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200.0;
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34BBB78 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
  if ( !v1 )
    sub_1C7BD40(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23685/*"shortcut_board_icon_shop_event"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23683/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23683/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23693/*"shortcut_board_icon_war_9999"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_23677/*"shortcut_board_icon_freequest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_23692/*"shortcut_board_icon_war_1002"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_23681/*"shortcut_board_icon_mainquest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_23682/*"shortcut_board_icon_master_mission"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_23675/*"shortcut_board_icon_bronze_sapling"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23680/*"shortcut_board_icon_holy_grail_drop"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23679/*"shortcut_board_icon_holy_grail_casting"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23684/*"shortcut_board_icon_shop_burning"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23678/*"shortcut_board_icon_friend"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_23687/*"shortcut_board_icon_shop_mana_prism"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_23688/*"shortcut_board_icon_shop_pure_prism"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_23689/*"shortcut_board_icon_shop_rare_prism"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_23690/*"shortcut_board_icon_summon"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_23686/*"shortcut_board_icon_shop_evocation"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  static_fields = ItemLinkInfoListViewItemDraw_TypeInfo->static_fields;
  static_fields->boardIconNameList = (struct System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->boardIconNameList, (int32_t)v1, v5, v6, v7, v8, v9, v10);
}


void ItemLinkInfoListViewItemDraw___ctor(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
  }
  this->fields.frameSize = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoListViewItemDraw__Awake(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4CF0ED6 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0ED6 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0) )
    {
      sub_1C7BD40(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
  __int64 v4; // x1
  HorizontalQuestInformationIconListComponent_o *v5; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_4CF0EE1 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0EE1 = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0) )
  {
    v5 = this->fields.rewardInformationComponent;
    if ( !v5 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0) )
  {
    v5 = this->fields.enemyInformationComponent;
    if ( v5 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0);
      return;
    }
LABEL_14:
    sub_1C7BD40(v5, v4);
  }
}


System_String_o *ItemLinkInfoListViewItemDraw__GetBoardIconName(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_c *v4; // x0
  ItemLinkInfoListViewItemDraw_c *v5; // x0

  if ( (byte_4CF0EDF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
    sub_1C7BAE8(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1C7BAE8(&StringLiteral_23674/*"shortcut_board_icon_"*/);
    byte_4CF0EDF = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0) )
    return System_String__Concat_64176912(
             (System_String_o *)StringLiteral_23674/*"shortcut_board_icon_"*/,
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
         (const MethodInfo_34BC740 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_34BC4AC *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
LABEL_15:
    sub_1C7BD40(this, item);
  }
  return string_TypeInfo->static_fields->Empty;
}


float ItemLinkInfoListViewItemDraw__GetHeight(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  float result; // s0
  ItemLinkInfoListViewItemDraw_c *v4; // x0

  if ( (byte_4CF0EE0 & 1) == 0 )
  {
    sub_1C7BAE8(&ItemLinkInfoListViewItemDraw_TypeInfo);
    byte_4CF0EE0 = 1;
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
  if ( (byte_4CF0ED8 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    byte_4CF0ED8 = 1;
  }
  if ( !displayName )
    goto LABEL_21;
  this = (ItemLinkInfoListViewItemDraw_o *)System_String__Contains(displayName, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return displayName;
  nameLabel = v4->fields.nameLabel;
  if ( !nameLabel )
LABEL_21:
    sub_1C7BD40(this, displayName);
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
    if ( !byte_4CE84E7 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE84E7 = 1;
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
    sub_1C7BD40(this, method);
  ActionExtensions__Call(viewItem->fields._LinkAction_k__BackingField, 0);
}


void ItemLinkInfoListViewItemDraw__SetBaseButtonState(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x8
  float v9; // s1

  if ( (byte_4CF0ED9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0ED9 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !boardItem )
      goto LABEL_12;
    v8 = this->fields.baseButton;
    v9 = 0.5;
    if ( boardItem->fields._IsLocked_k__BackingField )
      v9 = 1.0;
    if ( !v8
      || (v8->fields.specifyDisabledColor.fields.r = v9,
          v8->fields.specifyDisabledColor.fields.g = v9,
          v8->fields.specifyDisabledColor.fields.b = v9,
          v8->fields.specifyDisabledColor.fields.a = 1.0,
          (v6 = this->fields.baseButton) == 0) )
    {
LABEL_12:
      sub_1C7BD40(v6, v7);
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
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4CF0EDB & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20596/*"img_list_bg03"*/);
    byte_4CF0EDB = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0, 0) )
  {
    v4 = this->fields.baseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v4, (System_String_o *)StringLiteral_20596/*"img_list_bg03"*/, 0);
    v6 = this->fields.baseSprite;
    if ( !v6 )
      sub_1C7BD40(0, v5);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
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
  __int64 v10; // x1
  struct UISprite_o *v11; // x0

  if ( (byte_4CF0EDE & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0EDE = 1;
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
      v11 = this->fields.iconSprite;
      if ( !v11 )
        sub_1C7BD40(0, v10);
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v11->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v11,
        v11->klass->vtable._33_MakePixelPerfect.method);
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
  _BOOL8 IsFirst_k__BackingField; // x1
  UnityEngine_Object_o *itemIconRoot; // x21
  UnityEngine_Object_o *itemInfoBasePrefab; // x21
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v12; // x20
  Il2CppObject *Component_object; // x20
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8
  int32_t id; // w2

  if ( (byte_4CF0EDA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0EDA = 1;
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
        v12 = UnityEngine_Object__Instantiate_object__52412380(
                v10,
                transform,
                (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
        v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_42;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v12,
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4CE827C )
            {
              sub_1C7BAE8(&NetworkManager_TypeInfo);
              byte_4CE827C = 1;
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
            sub_1C7BD40(v6, IsFirst_k__BackingField);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ItemLinkInfoListViewItem_o **p_viewItem; // x21
  System_String_o *Master_object; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  UILabel_o *nameLabel; // x22
  struct ItemLinkInfoListViewItem_o *v15; // x8
  int32_t Type_k__BackingField; // w9
  int32_t v17; // w21
  UnityEngine_Object_o *rewardInformationComponent; // x22
  UnityEngine_Object_o *enemyInformationComponent; // x22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v21; // x23
  Il2CppObject *Empty; // x22
  System_String_o *v23; // x21
  int64_t v24; // x22
  int32_t TargetId_k__BackingField; // w21
  char *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  Il2CppObject *RestTime2; // x0
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  struct UILabel_o *restTimeLabel; // x21
  UILabel_o *v32; // x0
  System_String_o *v33; // x0
  Il2CppObject *v34; // x0
  struct ItemLinkInfoListViewItem_o *v35; // x8
  struct UILabel_o *v36; // x21
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  System_String_o *infoText; // [xsp+8h] [xbp-48h] BYREF
  int64_t endedAt; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CF0ED7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13488/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C7BAE8(&StringLiteral_8709/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/);
    byte_4CF0ED7 = 1;
  }
  endedAt = 0;
  entity = 0;
  infoText = 0;
  if ( item )
  {
    this->fields.viewItem = item;
    p_viewItem = &this->fields.viewItem;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.viewItem,
      (int32_t)item,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !this->fields.viewItem )
      goto LABEL_63;
    nameLabel = this->fields.nameLabel;
    Master_object = ItemLinkInfoListViewItemDraw__ModifyNameText(
                      this,
                      this->fields.viewItem->fields._Name_k__BackingField,
                      v13);
    if ( !nameLabel )
      goto LABEL_63;
    UILabel__set_text(nameLabel, Master_object, 0);
    v15 = *p_viewItem;
    if ( !*p_viewItem )
      goto LABEL_63;
    Type_k__BackingField = v15->fields._Type_k__BackingField;
    if ( (unsigned int)(Type_k__BackingField - 2) >= 4 )
    {
      if ( Type_k__BackingField != 1 )
        goto LABEL_61;
      TargetId_k__BackingField = v15->fields._TargetId_k__BackingField;
      if ( !TargetId_k__BackingField || v15->fields._TargetValueType_k__BackingField != 4 )
        goto LABEL_61;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Master_object )
        goto LABEL_63;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              TargetId_k__BackingField,
              (const MethodInfo_342E348 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        goto LABEL_61;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (System_String_o *)NetworkManager__getTime(0);
      if ( !entity )
        goto LABEL_63;
      v26 = (char *)((char *)entity[6].monitor - (char *)Master_object);
      if ( (__int64)v26 < 1 )
        goto LABEL_61;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8709/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)v26, 0, 0);
      Master_object = System_String__Format(v28, RestTime2, 0);
      viewItem = this->fields.viewItem;
      if ( viewItem )
      {
        restTimeLabel = this->fields.restTimeLabel;
        v12 = Master_object;
        if ( viewItem->fields._IsLocked_k__BackingField )
        {
          Master_object = System_String__Format(v27, (Il2CppObject *)Master_object, 0);
          v12 = Master_object;
        }
        if ( restTimeLabel )
        {
          v32 = restTimeLabel;
LABEL_60:
          UILabel__set_text(v32, v12, 0);
          goto LABEL_61;
        }
      }
    }
    else
    {
      v17 = v15->fields._TargetId_k__BackingField;
      if ( !v17 || v15->fields._TargetValueType_k__BackingField != 1 )
        goto LABEL_61;
      if ( !v15->fields._IsNotDisplayQuestInfo_k__BackingField && !v15->fields._IsLocked_k__BackingField )
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
            v17,
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
            v17,
            0);
        }
      }
      Master_object = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Master_object )
      {
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Master_object, v17, 0);
        if ( !QuestInfo )
          goto LABEL_61;
        v21 = QuestInfo;
        Master_object = (System_String_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0);
        if ( !Master_object )
          goto LABEL_63;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 32, 0) )
          goto LABEL_61;
        endedAt = 0;
        Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( QuestMaster__TryGetPrivilegePeriodMessage(&infoText, &endedAt, v17, 0) )
        {
          v23 = infoText;
          v24 = endedAt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        else
        {
          endedAt = v21->fields.endTime;
          if ( endedAt < 1 )
            goto LABEL_52;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
          v24 = endedAt;
          v23 = v33;
        }
        v34 = (Il2CppObject *)LocalizationManager__GetRestTime2(v24, -1, 0);
        Empty = (Il2CppObject *)System_String__Format(v23, v34, 0);
LABEL_52:
        if ( !System_String__IsNullOrEmpty((System_String_o *)Empty, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8709/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
          v35 = this->fields.viewItem;
          if ( v35 )
          {
            v36 = this->fields.restTimeLabel;
            if ( v35->fields._IsLocked_k__BackingField )
            {
              Master_object = System_String__Format(Master_object, Empty, 0);
              Empty = (Il2CppObject *)Master_object;
            }
            if ( v36 )
            {
              v32 = v36;
              v12 = (System_String_o *)Empty;
              goto LABEL_60;
            }
          }
          goto LABEL_63;
        }
LABEL_61:
        ItemLinkInfoListViewItemDraw__SetBoardImage(this, (const MethodInfo *)v12);
        ItemLinkInfoListViewItemDraw__SetMaskImage(this, v37);
        ItemLinkInfoListViewItemDraw__SetRecommendIcon(this, this->fields.viewItem, v38);
        ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(this, this->fields.viewItem, v39);
        ItemLinkInfoListViewItemDraw__SetDispItemIcon(this, this->fields.viewItem, v40);
        ItemLinkInfoListViewItemDraw__SetLockBoard(this, this->fields.viewItem, v41);
        return item != 0;
      }
    }
LABEL_63:
    sub_1C7BD40(Master_object, v12);
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
    sub_1C7BD40(this, boardItem);
  }
}


void ItemLinkInfoListViewItemDraw__SetMaskImage(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *enableMask; // x20
  UISprite_o *v4; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4CF0EDC & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20596/*"img_list_bg03"*/);
    byte_4CF0EDC = 1;
  }
  enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(enableMask, 0, 0) )
  {
    v4 = this->fields.enableMask;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v4, (System_String_o *)StringLiteral_20596/*"img_list_bg03"*/, 0);
    v6 = this->fields.enableMask;
    if ( !v6 )
      sub_1C7BD40(0, v5);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
}


void ItemLinkInfoListViewItemDraw__SetRecommendIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recommendIconSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v8; // x19

  if ( (byte_4CF0EDD & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20412/*"icon_support_recommend_yellow"*/);
    byte_4CF0EDD = 1;
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
      sub_1C7BD40(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._IsRecommend_k__BackingField && !item->fields._IsLocked_k__BackingField,
      0);
    v8 = this->fields.recommendIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v8, (System_String_o *)StringLiteral_20412/*"icon_support_recommend_yellow"*/, 0);
  }
}