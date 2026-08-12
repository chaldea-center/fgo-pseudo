void ItemLinkInfoListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__c *v1; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  struct ItemLinkInfoListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59730CE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo);
    sub_2213A60(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_24693/*"shortcut_board_icon_shop_burning"*/);
    sub_2213A60(&StringLiteral_24701/*"shortcut_board_icon_war_1002"*/);
    sub_2213A60(&StringLiteral_24688/*"shortcut_board_icon_holy_grail_casting"*/);
    sub_2213A60(&StringLiteral_24699/*"shortcut_board_icon_summon"*/);
    sub_2213A60(&StringLiteral_24698/*"shortcut_board_icon_shop_rare_prism"*/);
    sub_2213A60(&StringLiteral_24695/*"shortcut_board_icon_shop_evocation"*/);
    sub_2213A60(&StringLiteral_24689/*"shortcut_board_icon_holy_grail_drop"*/);
    sub_2213A60(&StringLiteral_24696/*"shortcut_board_icon_shop_mana_prism"*/);
    sub_2213A60(&StringLiteral_24702/*"shortcut_board_icon_war_1007"*/);
    sub_2213A60(&StringLiteral_24690/*"shortcut_board_icon_mainquest"*/);
    sub_2213A60(&StringLiteral_24691/*"shortcut_board_icon_master_mission"*/);
    sub_2213A60(&StringLiteral_24687/*"shortcut_board_icon_friend"*/);
    sub_2213A60(&StringLiteral_24704/*"shortcut_board_icon_war_9999"*/);
    sub_2213A60(&StringLiteral_24684/*"shortcut_board_icon_bronze_sapling"*/);
    sub_2213A60(&StringLiteral_24692/*"shortcut_board_icon_ordeal_call"*/);
    sub_2213A60(&StringLiteral_24697/*"shortcut_board_icon_shop_pure_prism"*/);
    sub_2213A60(&StringLiteral_24694/*"shortcut_board_icon_shop_event"*/);
    sub_2213A60(&StringLiteral_24686/*"shortcut_board_icon_freequest"*/);
    sub_2213A60(&StringLiteral_24703/*"shortcut_board_icon_war_1008"*/);
    byte_59730CE = 1;
  }
  v1 = System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo;
  ItemLinkInfoListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200.0;
  v2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(v1);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v2,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
  if ( !v2 )
    sub_2213CDC(v3, v4);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    0,
    **(Il2CppObject ***)(qword_5984390 + 184),
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    1,
    (Il2CppObject *)StringLiteral_24694/*"shortcut_board_icon_shop_event"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    2,
    (Il2CppObject *)StringLiteral_24692/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    18,
    (Il2CppObject *)StringLiteral_24692/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    3,
    (Il2CppObject *)StringLiteral_24704/*"shortcut_board_icon_war_9999"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    4,
    (Il2CppObject *)StringLiteral_24686/*"shortcut_board_icon_freequest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    5,
    (Il2CppObject *)StringLiteral_24701/*"shortcut_board_icon_war_1002"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    6,
    (Il2CppObject *)StringLiteral_24690/*"shortcut_board_icon_mainquest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    7,
    (Il2CppObject *)StringLiteral_24691/*"shortcut_board_icon_master_mission"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    8,
    (Il2CppObject *)StringLiteral_24684/*"shortcut_board_icon_bronze_sapling"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    9,
    (Il2CppObject *)StringLiteral_24689/*"shortcut_board_icon_holy_grail_drop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    10,
    (Il2CppObject *)StringLiteral_24688/*"shortcut_board_icon_holy_grail_casting"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    11,
    (Il2CppObject *)StringLiteral_24693/*"shortcut_board_icon_shop_burning"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    12,
    (Il2CppObject *)StringLiteral_24687/*"shortcut_board_icon_friend"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    13,
    (Il2CppObject *)StringLiteral_24696/*"shortcut_board_icon_shop_mana_prism"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    14,
    (Il2CppObject *)StringLiteral_24697/*"shortcut_board_icon_shop_pure_prism"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    15,
    (Il2CppObject *)StringLiteral_24698/*"shortcut_board_icon_shop_rare_prism"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    16,
    (Il2CppObject *)StringLiteral_24699/*"shortcut_board_icon_summon"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    17,
    (Il2CppObject *)StringLiteral_24695/*"shortcut_board_icon_shop_evocation"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    20,
    (Il2CppObject *)StringLiteral_24702/*"shortcut_board_icon_war_1007"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    21,
    (Il2CppObject *)StringLiteral_24702/*"shortcut_board_icon_war_1007"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v2,
    22,
    (Il2CppObject *)StringLiteral_24703/*"shortcut_board_icon_war_1008"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  static_fields = ItemLinkInfoListViewItemDraw_TypeInfo->static_fields;
  static_fields->boardIconNameList = (struct System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__o *)v2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->boardIconNameList,
    (int32_t)v2,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void ItemLinkInfoListViewItemDraw___ctor(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  this->fields.frameSize = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoListViewItemDraw__Awake(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_59730C2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59730C2 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
            (int32_t)mAtlas,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v20 = this->fields.baseSprite) == 0) )
    {
      sub_2213CDC(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
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

  if ( (byte_59730CD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59730CD = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0) )
  {
    v5 = this->fields.rewardInformationComponent;
    if ( !v5 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0) )
  {
    v5 = this->fields.enemyInformationComponent;
    if ( v5 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v5, v4);
  }
}


System_String_o *ItemLinkInfoListViewItemDraw__GetBoardIconName(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_c *v4; // x0
  ItemLinkInfoListViewItemDraw_c *v5; // x0

  if ( (byte_59730CB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
    sub_2213A60(&ItemLinkInfoListViewItemDraw_TypeInfo);
    this = (ItemLinkInfoListViewItemDraw_o *)sub_2213A60(&StringLiteral_24683/*"shortcut_board_icon_"*/);
    byte_59730CB = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0) )
    return System_String__Concat_75651716(
             (System_String_o *)StringLiteral_24683/*"shortcut_board_icon_"*/,
             item->fields._IconName_k__BackingField,
             0);
  v4 = ItemLinkInfoListViewItemDraw_TypeInfo;
  if ( !*(&ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo, item);
    v4 = ItemLinkInfoListViewItemDraw_TypeInfo;
  }
  this = (ItemLinkInfoListViewItemDraw_o *)v4->static_fields->boardIconNameList;
  if ( !this )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         item->fields._Type_k__BackingField,
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__) )
  {
    v5 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !*(&ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo, item);
      v5 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    this = (ItemLinkInfoListViewItemDraw_o *)v5->static_fields->boardIconNameList;
    if ( this )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                  item->fields._Type_k__BackingField,
                                  (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
LABEL_15:
    sub_2213CDC(this, item);
  }
  return **(System_String_o ***)(qword_5984390 + 184);
}


float ItemLinkInfoListViewItemDraw__GetHeight(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  float result; // s0
  ItemLinkInfoListViewItemDraw_c *v4; // x0

  if ( (byte_59730CC & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoListViewItemDraw_TypeInfo);
    byte_59730CC = 1;
  }
  result = this->fields.frameSize.fields.y;
  if ( result <= 0.0 )
  {
    v4 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !*(&ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo, method);
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
  __int64 v8; // x1
  int32_t stringLength; // w20
  float v10; // s8
  unsigned int v11; // w9

  v4 = this;
  if ( (byte_59730C4 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewItemDraw_o *)sub_2213A60(&StringLiteral_43/*"\n"*/);
    byte_59730C4 = 1;
  }
  if ( !displayName )
    goto LABEL_20;
  this = (ItemLinkInfoListViewItemDraw_o *)System_String__Contains(displayName, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return displayName;
  nameLabel = v4->fields.nameLabel;
  if ( !nameLabel )
LABEL_20:
    sub_2213CDC(this, displayName);
  mFontSize = nameLabel->fields.mFontSize;
  if ( mFontSize < 1 )
    v8 = 0;
  else
    v8 = (unsigned int)(nameLabel->fields.mWidth / mFontSize);
  stringLength = displayName->fields._stringLength;
  if ( stringLength <= 2 * (int)v8 )
  {
    if ( stringLength <= (int)v8 )
      return displayName;
  }
  else
  {
    if ( !byte_596A15B )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A15B = 1;
    }
    v10 = vcvts_n_f32_s32(stringLength, 1u);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
    v11 = vcvtps_s32_f32(v10);
    if ( ceilf(v10) == INFINITY )
      LODWORD(v8) = 0x80000000;
    else
      LODWORD(v8) = v11;
  }
  return System_String__Insert(displayName, v8, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
}


void ItemLinkInfoListViewItemDraw__OnClickButton(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  struct ItemLinkInfoListViewItem_o *viewItem; // x8

  viewItem = this->fields.viewItem;
  if ( !viewItem )
    sub_2213CDC(this, method);
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
  float v9; // s0

  if ( (byte_59730C5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59730C5 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boardItem);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !boardItem )
      goto LABEL_12;
    v8 = this->fields.baseButton;
    if ( !v8 )
      goto LABEL_12;
    v9 = 1.0;
    if ( !boardItem->fields._IsLocked_k__BackingField )
      v9 = 0.5;
    v8->fields.specifyDisabledColor.fields.a = 1.0;
    v8->fields.specifyDisabledColor.fields.r = v9;
    v8->fields.specifyDisabledColor.fields.g = v9;
    v8->fields.specifyDisabledColor.fields.b = v9;
    v6 = this->fields.baseButton;
    if ( !v6 )
LABEL_12:
      sub_2213CDC(v6, v7);
    ((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))v6->klass->vtable._5_set_isEnabled.methodPtr)(
      v6,
      !boardItem->fields._IsLocked_k__BackingField,
      v6->klass->vtable._5_set_isEnabled.method);
  }
}


void ItemLinkInfoListViewItemDraw__SetBoardImage(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x20
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_59730C7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21411/*"img_list_bg03"*/);
    byte_59730C7 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0, 0) )
  {
    v5 = this->fields.baseSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetBanner(v5, (System_String_o *)StringLiteral_21411/*"img_list_bg03"*/, 0);
    v7 = this->fields.baseSprite;
    if ( !v7 )
      sub_2213CDC(0, v6);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
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
  __int64 v9; // x1
  UISprite_o *v10; // x21
  __int64 v11; // x1
  struct UISprite_o *v12; // x0

  if ( (byte_59730CA & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59730CA = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v6 = UnityEngine_Object__op_Equality(iconSprite, 0, 0);
  if ( !v6 )
  {
    BoardIconName = ItemLinkInfoListViewItemDraw__GetBoardIconName((ItemLinkInfoListViewItemDraw_o *)v6, item, v7);
    if ( !System_String__IsNullOrEmpty(BoardIconName, 0) )
    {
      v10 = this->fields.iconSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
      AtlasManager__SetBanner(v10, BoardIconName, 0);
      v12 = this->fields.iconSprite;
      if ( !v12 )
        sub_2213CDC(0, v11);
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v12->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v12,
        v12->klass->vtable._33_MakePixelPerfect.method);
    }
  }
}


void ItemLinkInfoListViewItemDraw__SetDispItemIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *arrowObject; // x21
  int64_t v6; // x0
  _BOOL8 IsFirst_k__BackingField; // x1
  UnityEngine_Object_o *itemIconRoot; // x21
  __int64 v9; // x1
  UnityEngine_Object_o *itemInfoBasePrefab; // x21
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v14; // x20
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  __int64 v17; // x1
  long double v18; // q0
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8
  int32_t id; // w2

  if ( (byte_59730C6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59730C6 = 1;
  }
  arrowObject = (UnityEngine_Object_o *)this->fields.arrowObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boardItem);
  v6 = UnityEngine_Object__op_Inequality(arrowObject, 0, 0);
  if ( (v6 & 1) != 0 )
  {
    if ( !boardItem )
      goto LABEL_38;
    v6 = (int64_t)this->fields.arrowObject;
    if ( boardItem->fields._IsItemGetInfoList_k__BackingField )
    {
      IsFirst_k__BackingField = boardItem->fields._IsFirst_k__BackingField;
      if ( !v6 )
        goto LABEL_38;
    }
    else
    {
      IsFirst_k__BackingField = 0;
      if ( !v6 )
        goto LABEL_38;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, IsFirst_k__BackingField, 0);
  }
  else if ( !boardItem )
  {
    goto LABEL_38;
  }
  if ( boardItem->fields._IsItemGetInfoList_k__BackingField && boardItem->fields._IsFirst_k__BackingField )
  {
    itemIconRoot = (UnityEngine_Object_o *)this->fields.itemIconRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsFirst_k__BackingField);
    if ( UnityEngine_Object__op_Inequality(itemIconRoot, 0, 0) )
    {
      itemInfoBasePrefab = (UnityEngine_Object_o *)this->fields.itemInfoBasePrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Inequality(itemInfoBasePrefab, 0, 0) )
      {
        v6 = (int64_t)this->fields.itemIconRoot;
        if ( !v6 )
          goto LABEL_38;
        v11 = (Il2CppObject *)this->fields.itemInfoBasePrefab;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        v14 = UnityEngine_Object__Instantiate_object__59717116(
                v11,
                transform,
                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
        if ( (v6 & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_38;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v14,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v18 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
            v6 = sub_2417958(0, v18);
            ItemEnt_k__BackingField = boardItem->fields._ItemEnt_k__BackingField;
            IsFirst_k__BackingField = v6;
            if ( ItemEnt_k__BackingField )
              id = ItemEnt_k__BackingField->fields.id;
            else
              id = 0;
            if ( Component_object )
            {
              LimitCntUpItemComponent__setLimitUpItemInfo(
                (LimitCntUpItemComponent_o *)Component_object,
                v6,
                id,
                boardItem->fields._ItemNeedNum_k__BackingField,
                0);
              return;
            }
LABEL_38:
            sub_2213CDC(v6, IsFirst_k__BackingField);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ItemLinkInfoListViewItem_o **p_viewItem; // x21
  int64_t Master_object; // x0
  MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  UILabel_o *nameLabel; // x22
  struct ItemLinkInfoListViewItem_o *v15; // x8
  int Type_k__BackingField; // w9
  int32_t TargetId_k__BackingField; // w21
  char *v18; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  int64_t v21; // x0
  int64_t v22; // x1
  System_Collections_Generic_List_ShopEntity__o *TargetShopEntities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  System_Func_object__bool__o *v25; // x22
  Il2CppObject *v26; // x0
  __int64 klass; // x21
  int32_t v28; // w21
  UnityEngine_Object_o *rewardInformationComponent; // x22
  UnityEngine_Object_o *enemyInformationComponent; // x22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v32; // x23
  System_String_o *v33; // x22
  __int64 v34; // x1
  System_String_o *v35; // x21
  int64_t v36; // x22
  System_String_o *v37; // x0
  Il2CppObject *v38; // x0
  struct ItemLinkInfoListViewItem_o *v39; // x8
  struct UILabel_o *v40; // x21
  UILabel_o *v41; // x0
  Il2CppObject *RestTime2; // x0
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  struct UILabel_o *restTimeLabel; // x21
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  Il2CppObject *v51; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *infoText; // [xsp+8h] [xbp-48h] BYREF
  int64_t endedAt; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59730C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity____91752768);
    sub_2213A60(&System_Func_ShopEntity__bool__TypeInfo);
    sub_2213A60(&Method_ItemLinkInfoListViewItemDraw__SetItem_b__22_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_13987/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_2213A60(&StringLiteral_9048/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/);
    byte_59730C3 = 1;
  }
  endedAt = 0;
  entity = 0;
  v51 = 0;
  infoText = 0;
  if ( item )
  {
    this->fields.viewItem = item;
    p_viewItem = &this->fields.viewItem;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.viewItem,
      (int32_t)item,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !this->fields.viewItem )
      goto LABEL_88;
    nameLabel = this->fields.nameLabel;
    Master_object = (int64_t)ItemLinkInfoListViewItemDraw__ModifyNameText(
                               this,
                               this->fields.viewItem->fields._Name_k__BackingField,
                               v13);
    if ( !nameLabel )
      goto LABEL_88;
    UILabel__set_text(nameLabel, (System_String_o *)Master_object, 0);
    v15 = *p_viewItem;
    if ( !*p_viewItem )
      goto LABEL_88;
    Type_k__BackingField = v15->fields._Type_k__BackingField;
    if ( Type_k__BackingField > 19 )
    {
      if ( Type_k__BackingField != 20 )
      {
        if ( Type_k__BackingField == 21 )
        {
          if ( !v15->fields._TargetId_k__BackingField )
            goto LABEL_86;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionMaster___);
          if ( !*p_viewItem || !Master_object )
            goto LABEL_88;
          Master_object = DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &v51,
                            (*p_viewItem)->fields._TargetId_k__BackingField,
                            (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
          if ( (Master_object & 1) == 0 )
            goto LABEL_86;
          if ( !v51 )
            goto LABEL_88;
          klass = (__int64)v51[4].klass;
        }
        else
        {
          if ( Type_k__BackingField != 22 )
            goto LABEL_86;
          if ( !v15->fields._TargetId_k__BackingField )
            goto LABEL_86;
          TargetShopEntities = ExRoomShopComponent__GetTargetShopEntities(0);
          if ( !TargetShopEntities )
            goto LABEL_86;
          v24 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetShopEntities;
          v25 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ShopEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v25,
            (Il2CppObject *)this,
            Method_ItemLinkInfoListViewItemDraw__SetItem_b__22_0__,
            0);
          v26 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                  v24,
                  (System_Func_TSource__bool__o *)v25,
                  (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ShopEntity____91752768);
          if ( !v26 )
            goto LABEL_86;
          if ( LODWORD(v26[4].monitor) == 20 )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
            klass = NetworkManager__getNextDayStartTime(0);
          }
          else
          {
            klass = (__int64)v26[8].monitor;
          }
        }
        if ( klass >= 1 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9048/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13987/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
          v21 = klass;
          v22 = -1;
LABEL_80:
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v21, v22, 0);
          Master_object = (int64_t)System_String__Format(v20, RestTime2, 0);
          viewItem = this->fields.viewItem;
          if ( viewItem )
          {
            restTimeLabel = this->fields.restTimeLabel;
            v12 = (MethodInfo *)Master_object;
            if ( viewItem->fields._IsLocked_k__BackingField )
            {
              Master_object = (int64_t)System_String__Format(v19, (Il2CppObject *)Master_object, 0);
              v12 = (MethodInfo *)Master_object;
            }
            if ( restTimeLabel )
            {
              v41 = restTimeLabel;
              goto LABEL_85;
            }
          }
          goto LABEL_88;
        }
LABEL_86:
        ItemLinkInfoListViewItemDraw__SetBoardImage(this, v12);
        ItemLinkInfoListViewItemDraw__SetMaskImage(this, v45);
        ItemLinkInfoListViewItemDraw__SetRecommendIcon(this, this->fields.viewItem, v46);
        ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(this, this->fields.viewItem, v47);
        ItemLinkInfoListViewItemDraw__SetDispItemIcon(this, this->fields.viewItem, v48);
        ItemLinkInfoListViewItemDraw__SetLockBoard(this, this->fields.viewItem, v49);
        return item != 0;
      }
    }
    else if ( (unsigned int)(Type_k__BackingField - 2) >= 4 )
    {
      if ( Type_k__BackingField != 1 )
        goto LABEL_86;
      TargetId_k__BackingField = v15->fields._TargetId_k__BackingField;
      if ( !TargetId_k__BackingField || v15->fields._TargetValueType_k__BackingField != 4 )
        goto LABEL_86;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Master_object )
        goto LABEL_88;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             TargetId_k__BackingField,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
        Master_object = NetworkManager__getTime(0);
        if ( !entity )
          goto LABEL_88;
        v18 = (char *)entity[6].monitor - Master_object;
        if ( (__int64)v18 >= 1 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9048/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13987/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
          v21 = (int64_t)v18;
          v22 = 0;
          goto LABEL_80;
        }
      }
      goto LABEL_86;
    }
    v28 = v15->fields._TargetId_k__BackingField;
    if ( !v28 || v15->fields._TargetValueType_k__BackingField != 1 )
      goto LABEL_86;
    if ( !v15->fields._IsNotDisplayQuestInfo_k__BackingField && !v15->fields._IsLocked_k__BackingField )
    {
      rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0) )
      {
        Master_object = (int64_t)this->fields.rewardInformationComponent;
        if ( !Master_object )
          goto LABEL_88;
        HorizontalQuestInformationIconListComponent__Setup(
          (HorizontalQuestInformationIconListComponent_o *)Master_object,
          v28,
          0);
      }
      enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0) )
      {
        Master_object = (int64_t)this->fields.enemyInformationComponent;
        if ( !Master_object )
          goto LABEL_88;
        HorizontalQuestInformationIconListComponent__Setup(
          (HorizontalQuestInformationIconListComponent_o *)Master_object,
          v28,
          0);
      }
    }
    Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Master_object )
LABEL_88:
      sub_2213CDC(Master_object, v12);
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Master_object, v28, 0);
    if ( !QuestInfo )
      goto LABEL_86;
    v32 = QuestInfo;
    Master_object = (int64_t)MapControl_QuestInfo__GetMine(QuestInfo, 0);
    if ( !Master_object )
      goto LABEL_88;
    if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 32, 0) )
      goto LABEL_86;
    endedAt = 0;
    v33 = **(System_String_o ***)(qword_5984390 + 184);
    if ( QuestMaster__TryGetPrivilegePeriodMessage(&infoText, &endedAt, v28, 0) )
    {
      v35 = infoText;
      v36 = endedAt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    }
    else
    {
      endedAt = v32->fields.endTime;
      if ( endedAt < 1 )
      {
LABEL_67:
        if ( System_String__IsNullOrEmpty(v33, 0) )
          goto LABEL_86;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
        Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9048/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
        v39 = this->fields.viewItem;
        if ( v39 )
        {
          v40 = this->fields.restTimeLabel;
          if ( v39->fields._IsLocked_k__BackingField )
          {
            Master_object = (int64_t)System_String__Format((System_String_o *)Master_object, (Il2CppObject *)v33, 0);
            v33 = (System_String_o *)Master_object;
          }
          if ( v40 )
          {
            v41 = v40;
            v12 = (MethodInfo *)v33;
LABEL_85:
            UILabel__set_text(v41, (System_String_o *)v12, 0);
            goto LABEL_86;
          }
        }
        goto LABEL_88;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13987/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      v36 = endedAt;
      v35 = v37;
    }
    v38 = (Il2CppObject *)LocalizationManager__GetRestTime2(v36, -1, 0);
    v33 = System_String__Format(v35, v38, 0);
    goto LABEL_67;
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
    sub_2213CDC(this, boardItem);
  }
}


void ItemLinkInfoListViewItemDraw__SetMaskImage(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *enableMask; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x20
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_59730C8 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21411/*"img_list_bg03"*/);
    byte_59730C8 = 1;
  }
  enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(enableMask, 0, 0) )
  {
    v5 = this->fields.enableMask;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetBanner(v5, (System_String_o *)StringLiteral_21411/*"img_list_bg03"*/, 0);
    v7 = this->fields.enableMask;
    if ( !v7 )
      sub_2213CDC(0, v6);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
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
  bool v9; // w1
  __int64 v10; // x1
  UISprite_o *v11; // x19

  if ( (byte_59730C9 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21224/*"icon_support_recommend_yellow"*/);
    byte_59730C9 = 1;
  }
  recommendIconSprite = (UnityEngine_Object_o *)this->fields.recommendIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(recommendIconSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.recommendIconSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0), !item)
      || !gameObject )
    {
      sub_2213CDC(gameObject, v6);
    }
    v9 = item->fields._IsRecommend_k__BackingField && !item->fields._IsLocked_k__BackingField;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0);
    v11 = this->fields.recommendIconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
    AtlasManager__SetDownloadCommonSprite(v11, (System_String_o *)StringLiteral_21224/*"icon_support_recommend_yellow"*/, 0);
  }
}


bool ItemLinkInfoListViewItemDraw___SetItem_b__22_0(
        ItemLinkInfoListViewItemDraw_o *this,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x0
  struct ItemLinkInfoListViewItem_o *viewItem; // x8

  if ( (byte_59730CF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_59730CF = 1;
  }
  if ( !entity )
    return 0;
  targetIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetIds;
  if ( !targetIds )
    return 0;
  viewItem = this->fields.viewItem;
  if ( !viewItem )
    sub_2213CDC(targetIds, entity);
  return System_Linq_Enumerable__Contains_int_(
           targetIds,
           viewItem->fields._TargetId_k__BackingField,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}