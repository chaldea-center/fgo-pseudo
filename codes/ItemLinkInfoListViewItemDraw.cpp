void __fastcall ItemLinkInfoListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  struct ItemLinkInfoListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BDE603 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo);
    sub_1C21E38(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_23718/*"shortcut_board_icon_shop_burning"*/);
    sub_1C21E38(&StringLiteral_23726/*"shortcut_board_icon_war_1002"*/);
    sub_1C21E38(&StringLiteral_23713/*"shortcut_board_icon_holy_grail_casting"*/);
    sub_1C21E38(&StringLiteral_23724/*"shortcut_board_icon_summon"*/);
    sub_1C21E38(&StringLiteral_23723/*"shortcut_board_icon_shop_rare_prism"*/);
    sub_1C21E38(&StringLiteral_23720/*"shortcut_board_icon_shop_evocation"*/);
    sub_1C21E38(&StringLiteral_23714/*"shortcut_board_icon_holy_grail_drop"*/);
    sub_1C21E38(&StringLiteral_23721/*"shortcut_board_icon_shop_mana_prism"*/);
    sub_1C21E38(&StringLiteral_23715/*"shortcut_board_icon_mainquest"*/);
    sub_1C21E38(&StringLiteral_23716/*"shortcut_board_icon_master_mission"*/);
    sub_1C21E38(&StringLiteral_23712/*"shortcut_board_icon_friend"*/);
    sub_1C21E38(&StringLiteral_23727/*"shortcut_board_icon_war_9999"*/);
    sub_1C21E38(&StringLiteral_23709/*"shortcut_board_icon_bronze_sapling"*/);
    sub_1C21E38(&StringLiteral_23717/*"shortcut_board_icon_ordeal_call"*/);
    sub_1C21E38(&StringLiteral_23722/*"shortcut_board_icon_shop_pure_prism"*/);
    sub_1C21E38(&StringLiteral_23719/*"shortcut_board_icon_shop_event"*/);
    sub_1C21E38(&StringLiteral_23711/*"shortcut_board_icon_freequest"*/);
    byte_4BDE603 = 1;
  }
  ItemLinkInfoListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200.0;
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
  if ( !v1 )
    sub_1C22094(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23719/*"shortcut_board_icon_shop_event"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23717/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23717/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23727/*"shortcut_board_icon_war_9999"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_23711/*"shortcut_board_icon_freequest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_23726/*"shortcut_board_icon_war_1002"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_23715/*"shortcut_board_icon_mainquest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_23716/*"shortcut_board_icon_master_mission"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_23709/*"shortcut_board_icon_bronze_sapling"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23714/*"shortcut_board_icon_holy_grail_drop"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23713/*"shortcut_board_icon_holy_grail_casting"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23718/*"shortcut_board_icon_shop_burning"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23712/*"shortcut_board_icon_friend"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_23721/*"shortcut_board_icon_shop_mana_prism"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_23722/*"shortcut_board_icon_shop_pure_prism"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_23723/*"shortcut_board_icon_shop_rare_prism"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_23724/*"shortcut_board_icon_summon"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_23720/*"shortcut_board_icon_shop_evocation"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  static_fields = ItemLinkInfoListViewItemDraw_TypeInfo->static_fields;
  static_fields->boardIconNameList = (struct System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->boardIconNameList, (int64_t)v1, v5, v6, v7, v8, v9, v10);
}


void __fastcall ItemLinkInfoListViewItemDraw___ctor(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( !byte_4BD6AAA )
  {
    sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
    byte_4BD6AAA = 1;
  }
  this->fields.frameSize = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__Awake(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4BDE5F7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5F7 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_1C22094(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__CheckSerializeFieldAssertion(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ItemLinkInfoListViewItemDraw__DeleteCallback(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardInformationComponent; // x20
  __int64 v4; // x1
  HorizontalQuestInformationIconListComponent_o *v5; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_4BDE602 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE602 = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.rewardInformationComponent;
    if ( !v5 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0LL);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.enemyInformationComponent;
    if ( v5 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(v5, v4);
  }
}


System_String_o *__fastcall ItemLinkInfoListViewItemDraw__GetBoardIconName(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_c *v4; // x0
  ItemLinkInfoListViewItemDraw_c *v5; // x0

  if ( (byte_4BDE600 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
    sub_1C21E38(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1C21E38(&StringLiteral_23708/*"shortcut_board_icon_"*/);
    byte_4BDE600 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0LL) )
    return System_String__Concat_63115476(
             (System_String_o *)StringLiteral_23708/*"shortcut_board_icon_"*/,
             item->fields._IconName_k__BackingField,
             0LL);
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
         (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
LABEL_15:
    sub_1C22094(this, item);
  }
  return string_TypeInfo->static_fields->Empty;
}


float __fastcall ItemLinkInfoListViewItemDraw__GetHeight(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  float result; // s0
  ItemLinkInfoListViewItemDraw_c *v4; // x0

  if ( (byte_4BDE601 & 1) == 0 )
  {
    sub_1C21E38(&ItemLinkInfoListViewItemDraw_TypeInfo);
    byte_4BDE601 = 1;
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


System_String_o *__fastcall ItemLinkInfoListViewItemDraw__ModifyNameText(
        ItemLinkInfoListViewItemDraw_o *this,
        System_String_o *displayName,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_o *v4; // x20
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  int v8; // w1
  int32_t stringLength; // w8
  float v10; // s8
  float v11; // s8
  System_String_o *v12; // x2
  unsigned int v13; // w8

  v4 = this;
  if ( (byte_4BDE5F9 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1C21E38(&StringLiteral_43/*"\n"*/);
    byte_4BDE5F9 = 1;
  }
  if ( !displayName )
    goto LABEL_21;
  this = (ItemLinkInfoListViewItemDraw_o *)System_String__Contains(
                                             displayName,
                                             (System_String_o *)StringLiteral_43/*"\n"*/,
                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return displayName;
  nameLabel = v4->fields.nameLabel;
  if ( !nameLabel )
LABEL_21:
    sub_1C22094(this, displayName);
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
    if ( !byte_4BD7265 )
    {
      sub_1C21E38(&System_Math_TypeInfo);
      byte_4BD7265 = 1;
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
  return System_String__Insert(displayName, v8, v12, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__OnClickButton(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct ItemLinkInfoListViewItem_o *viewItem; // x8

  viewItem = this->fields.viewItem;
  if ( !viewItem )
    sub_1C22094(this, method);
  ActionExtensions__Call(viewItem->fields._LinkAction_k__BackingField, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__SetBaseButtonState(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x8
  float v9; // s1

  if ( (byte_4BDE5FA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5FA = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
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
          (v6 = this->fields.baseButton) == 0LL) )
    {
LABEL_12:
      sub_1C22094(v6, v7);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
      v6,
      !boardItem->fields._IsLocked_k__BackingField,
      v6->klass->vtable._6_OnInit.methodPtr);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetBoardImage(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  UISprite_o *v4; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4BDE5FC & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20699/*"img_list_bg03"*/);
    byte_4BDE5FC = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v4 = this->fields.baseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v4, (System_String_o *)StringLiteral_20699/*"img_list_bg03"*/, 0LL);
    v6 = this->fields.baseSprite;
    if ( !v6 )
      sub_1C22094(0LL, v5);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(
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

  if ( (byte_4BDE5FF & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5FF = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL);
  if ( !v6 )
  {
    BoardIconName = ItemLinkInfoListViewItemDraw__GetBoardIconName((ItemLinkInfoListViewItemDraw_o *)v6, item, v7);
    if ( !System_String__IsNullOrEmpty(BoardIconName, 0LL) )
    {
      v9 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v9, BoardIconName, 0LL);
      v11 = this->fields.iconSprite;
      if ( !v11 )
        sub_1C22094(0LL, v10);
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v11->klass->vtable._33_MakePixelPerfect.method)(
        v11,
        v11->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetDispItemIcon(
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

  if ( (byte_4BDE5FB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5FB = 1;
  }
  arrowObject = (UnityEngine_Object_o *)this->fields.arrowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(arrowObject, 0LL, 0LL);
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
      IsFirst_k__BackingField = 0LL;
      if ( !v6 )
        goto LABEL_42;
    }
    UnityEngine_GameObject__SetActive(v6, IsFirst_k__BackingField, 0LL);
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
    if ( UnityEngine_Object__op_Inequality(itemIconRoot, 0LL, 0LL) )
    {
      itemInfoBasePrefab = (UnityEngine_Object_o *)this->fields.itemInfoBasePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(itemInfoBasePrefab, 0LL, 0LL) )
      {
        v6 = this->fields.itemIconRoot;
        if ( !v6 )
          goto LABEL_42;
        v10 = (Il2CppObject *)this->fields.itemInfoBasePrefab;
        transform = UnityEngine_GameObject__get_transform(v6, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__Instantiate_object__50551272(
                v10,
                transform,
                (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
        v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_42;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v12,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BD6FF5 )
            {
              sub_1C21E38(&NetworkManager_TypeInfo);
              byte_4BD6FF5 = 1;
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
                *(_QWORD *)(*(_QWORD *)&v6[7].fields.m_CachedPtr + 64LL),
                id,
                boardItem->fields._ItemNeedNum_k__BackingField,
                0LL);
              return;
            }
LABEL_42:
            sub_1C22094(v6, IsFirst_k__BackingField);
          }
        }
      }
    }
  }
}


bool __fastcall ItemLinkInfoListViewItemDraw__SetItem(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 endTime; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  int64_t v24; // x1
  int64_t v25; // x0
  int32_t TargetId_k__BackingField; // w21
  char *v27; // x21
  Il2CppObject *RestTime2; // x0
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  UILabel_o *restTimeLabel; // x21
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDE5F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C21E38(&StringLiteral_8839/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/);
    byte_4BDE5F8 = 1;
  }
  entity = 0LL;
  if ( item )
  {
    this->fields.viewItem = item;
    p_viewItem = &this->fields.viewItem;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.viewItem,
      (int64_t)item,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !this->fields.viewItem )
      goto LABEL_51;
    nameLabel = this->fields.nameLabel;
    Master_object = ItemLinkInfoListViewItemDraw__ModifyNameText(
                      this,
                      this->fields.viewItem->fields._Name_k__BackingField,
                      v13);
    if ( !nameLabel )
      goto LABEL_51;
    UILabel__set_text(nameLabel, Master_object, 0LL);
    v15 = *p_viewItem;
    if ( !*p_viewItem )
      goto LABEL_51;
    Type_k__BackingField = v15->fields._Type_k__BackingField;
    if ( (unsigned int)(Type_k__BackingField - 2) >= 4 )
    {
      if ( Type_k__BackingField != 1 )
        goto LABEL_49;
      TargetId_k__BackingField = v15->fields._TargetId_k__BackingField;
      if ( !TargetId_k__BackingField || v15->fields._TargetValueType_k__BackingField != 4 )
        goto LABEL_49;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Master_object )
        goto LABEL_51;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             TargetId_k__BackingField,
             (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (System_String_o *)NetworkManager__getTime(0LL);
        if ( !entity )
          goto LABEL_51;
        v27 = (char *)(entity[6].monitor - (void *)Master_object);
        if ( (__int64)v27 >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
          v25 = (int64_t)v27;
          v24 = 0LL;
LABEL_44:
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v25, v24, 0LL);
          Master_object = System_String__Format(v23, RestTime2, 0LL);
          viewItem = this->fields.viewItem;
          if ( viewItem )
          {
            restTimeLabel = this->fields.restTimeLabel;
            v12 = Master_object;
            if ( viewItem->fields._IsLocked_k__BackingField )
            {
              Master_object = System_String__Format(v22, (Il2CppObject *)Master_object, 0LL);
              v12 = Master_object;
            }
            if ( restTimeLabel )
            {
              UILabel__set_text(restTimeLabel, v12, 0LL);
              goto LABEL_49;
            }
          }
          goto LABEL_51;
        }
      }
    }
    else
    {
      v17 = v15->fields._TargetId_k__BackingField;
      if ( !v17 || v15->fields._TargetValueType_k__BackingField != 1 )
        goto LABEL_49;
      if ( !v15->fields._IsNotDisplayQuestInfo_k__BackingField && !v15->fields._IsLocked_k__BackingField )
      {
        rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL) )
        {
          Master_object = (System_String_o *)this->fields.rewardInformationComponent;
          if ( !Master_object )
            goto LABEL_51;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v17,
            0LL);
        }
        enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL) )
        {
          Master_object = (System_String_o *)this->fields.enemyInformationComponent;
          if ( !Master_object )
            goto LABEL_51;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v17,
            0LL);
        }
      }
      Master_object = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_51;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Master_object, v17, 0LL);
      if ( !QuestInfo )
        goto LABEL_49;
      endTime = QuestInfo->fields.endTime;
      if ( endTime < 1 )
        goto LABEL_49;
      Master_object = (System_String_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Master_object )
LABEL_51:
        sub_1C22094(Master_object, v12);
      if ( !QuestEntity__HasFlag((QuestEntity_o *)Master_object, 32LL, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
        v24 = -1LL;
        v25 = endTime;
        goto LABEL_44;
      }
    }
LABEL_49:
    ItemLinkInfoListViewItemDraw__SetBoardImage(this, (const MethodInfo *)v12);
    ItemLinkInfoListViewItemDraw__SetMaskImage(this, v31);
    ItemLinkInfoListViewItemDraw__SetRecommendIcon(this, this->fields.viewItem, v32);
    ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(this, this->fields.viewItem, v33);
    ItemLinkInfoListViewItemDraw__SetDispItemIcon(this, this->fields.viewItem, v34);
    ItemLinkInfoListViewItemDraw__SetLockBoard(this, this->fields.viewItem, v35);
  }
  return item != 0LL;
}


void __fastcall ItemLinkInfoListViewItemDraw__SetLockBoard(
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
      UILabel__set_text((UILabel_o *)this, boardItem->fields._ClosedMessage_k__BackingField, 0LL);
      this = (ItemLinkInfoListViewItemDraw_o *)v4->fields.enableMask;
      if ( this )
      {
        this = (ItemLinkInfoListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          ItemLinkInfoListViewItemDraw__SetBaseButtonState(v4, boardItem, v5);
          return;
        }
      }
    }
LABEL_8:
    sub_1C22094(this, boardItem);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetMaskImage(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *enableMask; // x20
  UISprite_o *v4; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4BDE5FD & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20699/*"img_list_bg03"*/);
    byte_4BDE5FD = 1;
  }
  enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(enableMask, 0LL, 0LL) )
  {
    v4 = this->fields.enableMask;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v4, (System_String_o *)StringLiteral_20699/*"img_list_bg03"*/, 0LL);
    v6 = this->fields.enableMask;
    if ( !v6 )
      sub_1C22094(0LL, v5);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetRecommendIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recommendIconSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v8; // x19

  if ( (byte_4BDE5FE & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20547/*"icon_support_recommend_yellow"*/);
    byte_4BDE5FE = 1;
  }
  recommendIconSprite = (UnityEngine_Object_o *)this->fields.recommendIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recommendIconSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.recommendIconSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL), !item)
      || !gameObject )
    {
      sub_1C22094(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._IsRecommend_k__BackingField && !item->fields._IsLocked_k__BackingField,
      0LL);
    v8 = this->fields.recommendIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v8, (System_String_o *)StringLiteral_20547/*"icon_support_recommend_yellow"*/, 0LL);
  }
}