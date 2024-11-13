void __fastcall ItemLinkInfoListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v46; // x19
  __int64 v47; // x0
  __int64 v48; // x1
  struct ItemLinkInfoListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B181F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo, v6, v7);
    sub_1BCA7E0(&ItemLinkInfoListViewItemDraw_TypeInfo, v8, v9);
    sub_1BCA7E0(&string_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_23539/*"shortcut_board_icon_shop_burning"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_23547/*"shortcut_board_icon_war_1002"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_23534/*"shortcut_board_icon_holy_grail_casting"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_23545/*"shortcut_board_icon_summon"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_23544/*"shortcut_board_icon_shop_rare_prism"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_23541/*"shortcut_board_icon_shop_evocation"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_23535/*"shortcut_board_icon_holy_grail_drop"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_23542/*"shortcut_board_icon_shop_mana_prism"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_23536/*"shortcut_board_icon_mainquest"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_23537/*"shortcut_board_icon_master_mission"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_23533/*"shortcut_board_icon_friend"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_23548/*"shortcut_board_icon_war_9999"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_23530/*"shortcut_board_icon_bronze_sapling"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_23538/*"shortcut_board_icon_ordeal_call"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_23543/*"shortcut_board_icon_shop_pure_prism"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_23540/*"shortcut_board_icon_shop_event"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_23532/*"shortcut_board_icon_freequest"*/, v44, v45);
    byte_4B181F7 = 1;
  }
  ItemLinkInfoListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200.0;
  v46 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v46,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
  if ( !v46 )
    sub_1BCAA3C(v47, v48);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    0,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    1,
    (Il2CppObject *)StringLiteral_23540/*"shortcut_board_icon_shop_event"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    2,
    (Il2CppObject *)StringLiteral_23538/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    18,
    (Il2CppObject *)StringLiteral_23538/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    3,
    (Il2CppObject *)StringLiteral_23548/*"shortcut_board_icon_war_9999"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    4,
    (Il2CppObject *)StringLiteral_23532/*"shortcut_board_icon_freequest"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    5,
    (Il2CppObject *)StringLiteral_23547/*"shortcut_board_icon_war_1002"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    6,
    (Il2CppObject *)StringLiteral_23536/*"shortcut_board_icon_mainquest"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    7,
    (Il2CppObject *)StringLiteral_23537/*"shortcut_board_icon_master_mission"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    8,
    (Il2CppObject *)StringLiteral_23530/*"shortcut_board_icon_bronze_sapling"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    9,
    (Il2CppObject *)StringLiteral_23535/*"shortcut_board_icon_holy_grail_drop"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    10,
    (Il2CppObject *)StringLiteral_23534/*"shortcut_board_icon_holy_grail_casting"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    11,
    (Il2CppObject *)StringLiteral_23539/*"shortcut_board_icon_shop_burning"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    12,
    (Il2CppObject *)StringLiteral_23533/*"shortcut_board_icon_friend"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    13,
    (Il2CppObject *)StringLiteral_23542/*"shortcut_board_icon_shop_mana_prism"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    14,
    (Il2CppObject *)StringLiteral_23543/*"shortcut_board_icon_shop_pure_prism"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    15,
    (Il2CppObject *)StringLiteral_23544/*"shortcut_board_icon_shop_rare_prism"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    16,
    (Il2CppObject *)StringLiteral_23545/*"shortcut_board_icon_summon"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v46,
    17,
    (Il2CppObject *)StringLiteral_23541/*"shortcut_board_icon_shop_evocation"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  static_fields = ItemLinkInfoListViewItemDraw_TypeInfo->static_fields;
  static_fields->boardIconNameList = (struct System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__o *)v46;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->boardIconNameList,
    (int64_t)v46,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
}


void __fastcall ItemLinkInfoListViewItemDraw___ctor(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, method, v2);
    byte_4B108BA = 1;
  }
  this->fields.frameSize = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__Awake(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B181EB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B181EB = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12),
          (v21 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
  __int64 v2; // x2
  UnityEngine_Object_o *rewardInformationComponent; // x20
  __int64 v5; // x1
  HorizontalQuestInformationIconListComponent_o *v6; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_4B181F6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B181F6 = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.rewardInformationComponent;
    if ( !v6 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v6, 0LL);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.enemyInformationComponent;
    if ( v6 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v6, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v6, v5);
  }
}


System_String_o *__fastcall ItemLinkInfoListViewItemDraw__GetBoardIconName(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ItemLinkInfoListViewItemDraw_c *v12; // x0
  ItemLinkInfoListViewItemDraw_c *v13; // x0

  if ( (byte_4B181F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__,
      item,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__, v4, v5);
    sub_1BCA7E0(&ItemLinkInfoListViewItemDraw_TypeInfo, v6, v7);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_23529/*"shortcut_board_icon_"*/, v10, v11);
    byte_4B181F4 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0LL) )
    return System_String__Concat_62401220(
             (System_String_o *)StringLiteral_23529/*"shortcut_board_icon_"*/,
             item->fields._IconName_k__BackingField,
             0LL);
  v12 = ItemLinkInfoListViewItemDraw_TypeInfo;
  if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo, item);
    v12 = ItemLinkInfoListViewItemDraw_TypeInfo;
  }
  this = (ItemLinkInfoListViewItemDraw_o *)v12->static_fields->boardIconNameList;
  if ( !this )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         item->fields._Type_k__BackingField,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__) )
  {
    v13 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo, item);
      v13 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    this = (ItemLinkInfoListViewItemDraw_o *)v13->static_fields->boardIconNameList;
    if ( this )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                  item->fields._Type_k__BackingField,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
LABEL_15:
    sub_1BCAA3C(this, item);
  }
  return string_TypeInfo->static_fields->Empty;
}


float __fastcall ItemLinkInfoListViewItemDraw__GetHeight(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float result; // s0
  ItemLinkInfoListViewItemDraw_c *v5; // x0

  if ( (byte_4B181F5 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoListViewItemDraw_TypeInfo, method, v2);
    byte_4B181F5 = 1;
  }
  result = this->fields.frameSize.fields.y;
  if ( result <= 0.0 )
  {
    v5 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo, method);
      v5 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    return v5->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
  return result;
}


System_String_o *__fastcall ItemLinkInfoListViewItemDraw__ModifyNameText(
        ItemLinkInfoListViewItemDraw_o *this,
        System_String_o *displayName,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_o *v4; // x20
  __int64 v5; // x2
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  __int64 v9; // x1
  int32_t stringLength; // w8
  float v11; // s8
  float v12; // s8
  System_String_o *v13; // x2
  unsigned int v14; // w8

  v4 = this;
  if ( (byte_4B181ED & 1) == 0 )
  {
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_43/*"\n"*/, displayName, method);
    byte_4B181ED = 1;
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
    sub_1BCAA3C(this, displayName);
  mFontSize = nameLabel->fields.mFontSize;
  if ( mFontSize < 1 )
    v9 = 0LL;
  else
    v9 = (unsigned int)(nameLabel->fields.mWidth / mFontSize);
  stringLength = displayName->fields._stringLength;
  if ( stringLength <= 2 * (int)v9 )
  {
    if ( stringLength <= (int)v9 )
      return displayName;
    v13 = (System_String_o *)StringLiteral_43/*"\n"*/;
  }
  else
  {
    v11 = (float)stringLength;
    if ( !byte_4B1103A )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, v9, v5);
      byte_4B1103A = 1;
    }
    v12 = v11 * 0.5;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v13 = (System_String_o *)StringLiteral_43/*"\n"*/;
    v14 = vcvtps_s32_f32(v12);
    if ( ceilf(v12) == INFINITY )
      LODWORD(v9) = 0x80000000;
    else
      LODWORD(v9) = v14;
  }
  return System_String__Insert(displayName, v9, v13, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__OnClickButton(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct ItemLinkInfoListViewItem_o *viewItem; // x8

  viewItem = this->fields.viewItem;
  if ( !viewItem )
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B181EE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, boardItem, method);
    byte_4B181EE = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boardItem);
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
      sub_1BCAA3C(v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x20
  __int64 v11; // x1
  struct UISprite_o *v12; // x0

  if ( (byte_4B181F0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_20553/*"img_list_bg03"*/, v6, v7);
    byte_4B181F0 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v10 = this->fields.baseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetBanner(v10, (System_String_o *)StringLiteral_20553/*"img_list_bg03"*/, 0LL);
    v12 = this->fields.baseSprite;
    if ( !v12 )
      sub_1BCAA3C(0LL, v11);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
      v12,
      v12->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *iconSprite; // x21
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x2
  System_String_o *BoardIconName; // x20
  __int64 v11; // x1
  UISprite_o *v12; // x21
  __int64 v13; // x1
  struct UISprite_o *v14; // x0

  if ( (byte_4B181F3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B181F3 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v8 = UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL);
  if ( !v8 )
  {
    BoardIconName = ItemLinkInfoListViewItemDraw__GetBoardIconName((ItemLinkInfoListViewItemDraw_o *)v8, item, v9);
    if ( !System_String__IsNullOrEmpty(BoardIconName, 0LL) )
    {
      v12 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
      AtlasManager__SetBanner(v12, BoardIconName, 0LL);
      v14 = this->fields.iconSprite;
      if ( !v14 )
        sub_1BCAA3C(0LL, v13);
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v14->klass->vtable._33_MakePixelPerfect.method)(
        v14,
        v14->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetDispItemIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *arrowObject; // x21
  int64_t UserId; // x0
  _BOOL8 IsFirst_k__BackingField; // x1
  UnityEngine_Object_o *itemIconRoot; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *itemInfoBasePrefab; // x21
  Il2CppObject *v17; // x20
  __int64 v18; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v20; // x20
  __int64 v21; // x1
  Il2CppObject *Component_object; // x20
  __int64 v23; // x1
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8
  int32_t id; // w2

  if ( (byte_4B181EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, boardItem, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B181EF = 1;
  }
  arrowObject = (UnityEngine_Object_o *)this->fields.arrowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boardItem);
  UserId = UnityEngine_Object__op_Inequality(arrowObject, 0LL, 0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( !boardItem )
      goto LABEL_38;
    UserId = (int64_t)this->fields.arrowObject;
    if ( boardItem->fields._IsItemGetInfoList_k__BackingField )
    {
      IsFirst_k__BackingField = boardItem->fields._IsFirst_k__BackingField;
      if ( !UserId )
        goto LABEL_38;
    }
    else
    {
      IsFirst_k__BackingField = 0LL;
      if ( !UserId )
        goto LABEL_38;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UserId, IsFirst_k__BackingField, 0LL);
  }
  else if ( !boardItem )
  {
    goto LABEL_38;
  }
  if ( boardItem->fields._IsItemGetInfoList_k__BackingField && boardItem->fields._IsFirst_k__BackingField )
  {
    itemIconRoot = (UnityEngine_Object_o *)this->fields.itemIconRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsFirst_k__BackingField);
    if ( UnityEngine_Object__op_Inequality(itemIconRoot, 0LL, 0LL) )
    {
      itemInfoBasePrefab = (UnityEngine_Object_o *)this->fields.itemInfoBasePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality(itemInfoBasePrefab, 0LL, 0LL) )
      {
        UserId = (int64_t)this->fields.itemIconRoot;
        if ( !UserId )
          goto LABEL_38;
        v17 = (Il2CppObject *)this->fields.itemInfoBasePrefab;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)UserId, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        v20 = UnityEngine_Object__Instantiate_object__49903816(
                v17,
                transform,
                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        UserId = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
        if ( (UserId & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_38;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v20,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
            UserId = NetworkManager__get_UserId(0LL);
            ItemEnt_k__BackingField = boardItem->fields._ItemEnt_k__BackingField;
            IsFirst_k__BackingField = UserId;
            if ( ItemEnt_k__BackingField )
              id = ItemEnt_k__BackingField->fields.id;
            else
              id = 0;
            if ( Component_object )
            {
              LimitCntUpItemComponent__setLimitUpItemInfo(
                (LimitCntUpItemComponent_o *)Component_object,
                UserId,
                id,
                boardItem->fields._ItemNeedNum_k__BackingField,
                0LL);
              return;
            }
LABEL_38:
            sub_1BCAA3C(UserId, IsFirst_k__BackingField);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct ItemLinkInfoListViewItem_o **p_viewItem; // x21
  System_String_o *Master_object; // x0
  System_String_o *v28; // x1
  const MethodInfo *v29; // x2
  UILabel_o *nameLabel; // x22
  struct ItemLinkInfoListViewItem_o *v31; // x8
  int32_t Type_k__BackingField; // w9
  int32_t v33; // w21
  UnityEngine_Object_o *rewardInformationComponent; // x22
  UnityEngine_Object_o *enemyInformationComponent; // x22
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 endTime; // x21
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  int64_t v40; // x1
  int64_t v41; // x0
  int32_t TargetId_k__BackingField; // w21
  char *v43; // x21
  Il2CppObject *RestTime2; // x0
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  UILabel_o *restTimeLabel; // x21
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B181EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, item, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v20, v21);
    sub_1BCA7E0(&StringLiteral_13504/*"TIME_REST_QUEST_BOARD_QUEST"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_8780/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, v24, v25);
    byte_4B181EC = 1;
  }
  entity = 0LL;
  if ( item )
  {
    this->fields.viewItem = item;
    p_viewItem = &this->fields.viewItem;
    sub_1BCA784(
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
                      v29);
    if ( !nameLabel )
      goto LABEL_51;
    UILabel__set_text(nameLabel, Master_object, 0LL);
    v31 = *p_viewItem;
    if ( !*p_viewItem )
      goto LABEL_51;
    Type_k__BackingField = v31->fields._Type_k__BackingField;
    if ( (unsigned int)(Type_k__BackingField - 2) >= 4 )
    {
      if ( Type_k__BackingField != 1 )
        goto LABEL_49;
      TargetId_k__BackingField = v31->fields._TargetId_k__BackingField;
      if ( !TargetId_k__BackingField || v31->fields._TargetValueType_k__BackingField != 4 )
        goto LABEL_49;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Master_object )
        goto LABEL_51;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             TargetId_k__BackingField,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
        Master_object = (System_String_o *)NetworkManager__getTime(0LL);
        if ( !entity )
          goto LABEL_51;
        v43 = (char *)(entity[6].monitor - (void *)Master_object);
        if ( (__int64)v43 >= 1 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8780/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13504/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
          v41 = (int64_t)v43;
          v40 = 0LL;
LABEL_44:
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v41, v40, 0LL);
          Master_object = System_String__Format(v39, RestTime2, 0LL);
          viewItem = this->fields.viewItem;
          if ( viewItem )
          {
            restTimeLabel = this->fields.restTimeLabel;
            v28 = Master_object;
            if ( viewItem->fields._IsLocked_k__BackingField )
            {
              Master_object = System_String__Format(v38, (Il2CppObject *)Master_object, 0LL);
              v28 = Master_object;
            }
            if ( restTimeLabel )
            {
              UILabel__set_text(restTimeLabel, v28, 0LL);
              goto LABEL_49;
            }
          }
          goto LABEL_51;
        }
      }
    }
    else
    {
      v33 = v31->fields._TargetId_k__BackingField;
      if ( !v33 || v31->fields._TargetValueType_k__BackingField != 1 )
        goto LABEL_49;
      if ( !v31->fields._IsNotDisplayQuestInfo_k__BackingField && !v31->fields._IsLocked_k__BackingField )
      {
        rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
        if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL) )
        {
          Master_object = (System_String_o *)this->fields.rewardInformationComponent;
          if ( !Master_object )
            goto LABEL_51;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v33,
            0LL);
        }
        enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
        if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL) )
        {
          Master_object = (System_String_o *)this->fields.enemyInformationComponent;
          if ( !Master_object )
            goto LABEL_51;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v33,
            0LL);
        }
      }
      Master_object = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_51;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Master_object, v33, 0LL);
      if ( !QuestInfo )
        goto LABEL_49;
      endTime = QuestInfo->fields.endTime;
      if ( endTime < 1 )
        goto LABEL_49;
      Master_object = (System_String_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Master_object )
LABEL_51:
        sub_1BCAA3C(Master_object, v28);
      if ( !QuestEntity__HasFlag((QuestEntity_o *)Master_object, 32LL, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8780/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13504/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
        v40 = -1LL;
        v41 = endTime;
        goto LABEL_44;
      }
    }
LABEL_49:
    ItemLinkInfoListViewItemDraw__SetBoardImage(this, (const MethodInfo *)v28);
    ItemLinkInfoListViewItemDraw__SetMaskImage(this, v47);
    ItemLinkInfoListViewItemDraw__SetRecommendIcon(this, this->fields.viewItem, v48);
    ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(this, this->fields.viewItem, v49);
    ItemLinkInfoListViewItemDraw__SetDispItemIcon(this, this->fields.viewItem, v50);
    ItemLinkInfoListViewItemDraw__SetLockBoard(this, this->fields.viewItem, v51);
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
    sub_1BCAA3C(this, boardItem);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetMaskImage(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *enableMask; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x20
  __int64 v11; // x1
  struct UISprite_o *v12; // x0

  if ( (byte_4B181F1 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_20553/*"img_list_bg03"*/, v6, v7);
    byte_4B181F1 = 1;
  }
  enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(enableMask, 0LL, 0LL) )
  {
    v10 = this->fields.enableMask;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetBanner(v10, (System_String_o *)StringLiteral_20553/*"img_list_bg03"*/, 0LL);
    v12 = this->fields.enableMask;
    if ( !v12 )
      sub_1BCAA3C(0LL, v11);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
      v12,
      v12->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetRecommendIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *recommendIconSprite; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v12; // x1
  UISprite_o *v13; // x19

  if ( (byte_4B181F2 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_20406/*"icon_support_recommend_yellow"*/, v7, v8);
    byte_4B181F2 = 1;
  }
  recommendIconSprite = (UnityEngine_Object_o *)this->fields.recommendIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(recommendIconSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.recommendIconSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL), !item)
      || !gameObject )
    {
      sub_1BCAA3C(gameObject, v10);
    }
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._IsRecommend_k__BackingField && !item->fields._IsLocked_k__BackingField,
      0LL);
    v13 = this->fields.recommendIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetDownloadCommonSprite(v13, (System_String_o *)StringLiteral_20406/*"icon_support_recommend_yellow"*/, 0LL);
  }
}