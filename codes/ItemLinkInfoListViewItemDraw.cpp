void __fastcall ItemLinkInfoListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x19
  __int64 v24; // x0
  struct ItemLinkInfoListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49FE623 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo, v4);
    sub_1B640C8(&ItemLinkInfoListViewItemDraw_TypeInfo, v5);
    sub_1B640C8(&string_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_23195/*"shortcut_board_icon_shop_burning"*/, v7);
    sub_1B640C8(&StringLiteral_23202/*"shortcut_board_icon_war_1002"*/, v8);
    sub_1B640C8(&StringLiteral_23190/*"shortcut_board_icon_holy_grail_casting"*/, v9);
    sub_1B640C8(&StringLiteral_23200/*"shortcut_board_icon_summon"*/, v10);
    sub_1B640C8(&StringLiteral_23199/*"shortcut_board_icon_shop_rare_prism"*/, v11);
    sub_1B640C8(&StringLiteral_23191/*"shortcut_board_icon_holy_grail_drop"*/, v12);
    sub_1B640C8(&StringLiteral_23197/*"shortcut_board_icon_shop_mana_prism"*/, v13);
    sub_1B640C8(&StringLiteral_23192/*"shortcut_board_icon_mainquest"*/, v14);
    sub_1B640C8(&StringLiteral_23193/*"shortcut_board_icon_master_mission"*/, v15);
    sub_1B640C8(&StringLiteral_23189/*"shortcut_board_icon_friend"*/, v16);
    sub_1B640C8(&StringLiteral_23203/*"shortcut_board_icon_war_9999"*/, v17);
    sub_1B640C8(&StringLiteral_23186/*"shortcut_board_icon_bronze_sapling"*/, v18);
    sub_1B640C8(&StringLiteral_23194/*"shortcut_board_icon_ordeal_call"*/, v19);
    sub_1B640C8(&StringLiteral_23198/*"shortcut_board_icon_shop_pure_prism"*/, v20);
    sub_1B640C8(&StringLiteral_23196/*"shortcut_board_icon_shop_event"*/, v21);
    sub_1B640C8(&StringLiteral_23188/*"shortcut_board_icon_freequest"*/, v22);
    byte_49FE623 = 1;
  }
  ItemLinkInfoListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200.0;
  v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__TypeInfo,
                                                                   v1,
                                                                   v2);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v23,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string___ctor__);
  if ( !v23 )
    sub_1B64324(v24);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    0,
    (Il2CppObject *)string_TypeInfo->static_fields->Empty,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    1,
    (Il2CppObject *)StringLiteral_23196/*"shortcut_board_icon_shop_event"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    2,
    (Il2CppObject *)StringLiteral_23194/*"shortcut_board_icon_ordeal_call"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    3,
    (Il2CppObject *)StringLiteral_23203/*"shortcut_board_icon_war_9999"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    4,
    (Il2CppObject *)StringLiteral_23188/*"shortcut_board_icon_freequest"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    5,
    (Il2CppObject *)StringLiteral_23202/*"shortcut_board_icon_war_1002"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    6,
    (Il2CppObject *)StringLiteral_23192/*"shortcut_board_icon_mainquest"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    7,
    (Il2CppObject *)StringLiteral_23193/*"shortcut_board_icon_master_mission"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    8,
    (Il2CppObject *)StringLiteral_23186/*"shortcut_board_icon_bronze_sapling"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    9,
    (Il2CppObject *)StringLiteral_23191/*"shortcut_board_icon_holy_grail_drop"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    10,
    (Il2CppObject *)StringLiteral_23190/*"shortcut_board_icon_holy_grail_casting"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    11,
    (Il2CppObject *)StringLiteral_23195/*"shortcut_board_icon_shop_burning"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    12,
    (Il2CppObject *)StringLiteral_23189/*"shortcut_board_icon_friend"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    13,
    (Il2CppObject *)StringLiteral_23197/*"shortcut_board_icon_shop_mana_prism"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    14,
    (Il2CppObject *)StringLiteral_23198/*"shortcut_board_icon_shop_pure_prism"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    15,
    (Il2CppObject *)StringLiteral_23199/*"shortcut_board_icon_shop_rare_prism"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v23,
    16,
    (Il2CppObject *)StringLiteral_23200/*"shortcut_board_icon_summon"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__Add__);
  static_fields = ItemLinkInfoListViewItemDraw_TypeInfo->static_fields;
  static_fields->boardIconNameList = (struct System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->boardIconNameList, (int32_t)v23, v26, v27);
}


void __fastcall ItemLinkInfoListViewItemDraw___ctor(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( !byte_49F700A )
  {
    sub_1B640C8(&UnityEngine_Vector2_TypeInfo, method);
    byte_49F700A = 1;
  }
  this->fields.frameSize = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__Awake(ItemLinkInfoListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_49FE617 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE617 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v7 = this->fields.baseSprite;
    if ( !v7
      || (mAtlas = v7->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v5, v6),
          (v11 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B64324(v4);
    }
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v9, v10);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__CheckSerializeFieldAssertion(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall ItemLinkInfoListViewItemDraw__GetBoardIconName(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ItemLinkInfoListViewItemDraw_c *v8; // x0
  ItemLinkInfoListViewItemDraw_c *v9; // x0

  if ( (byte_49FE620 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__, item);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__, v4);
    sub_1B640C8(&ItemLinkInfoListViewItemDraw_TypeInfo, v5);
    sub_1B640C8(&string_TypeInfo, v6);
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1B640C8(&StringLiteral_23185/*"shortcut_board_icon_"*/, v7);
    byte_49FE620 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0LL) )
    return System_String__Concat_61375396(
             (System_String_o *)StringLiteral_23185/*"shortcut_board_icon_"*/,
             item->fields._IconName_k__BackingField,
             0LL);
  v8 = ItemLinkInfoListViewItemDraw_TypeInfo;
  if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo);
    v8 = ItemLinkInfoListViewItemDraw_TypeInfo;
  }
  this = (ItemLinkInfoListViewItemDraw_o *)v8->static_fields->boardIconNameList;
  if ( !this )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         item->fields._Type_k__BackingField,
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__ContainsKey__) )
  {
    v9 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo);
      v9 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    this = (ItemLinkInfoListViewItemDraw_o *)v9->static_fields->boardIconNameList;
    if ( this )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                  item->fields._Type_k__BackingField,
                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_ItemTransitionType_Type__string__get_Item__);
LABEL_15:
    sub_1B64324(this);
  }
  return string_TypeInfo->static_fields->Empty;
}


float __fastcall ItemLinkInfoListViewItemDraw__GetHeight(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  float result; // s0
  ItemLinkInfoListViewItemDraw_c *v4; // x0

  if ( (byte_49FE621 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoListViewItemDraw_TypeInfo, method);
    byte_49FE621 = 1;
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
  __int64 v8; // x1
  int32_t stringLength; // w8
  float v10; // s8
  float v11; // s8
  System_String_o *v12; // x2
  unsigned int v13; // w8

  v4 = this;
  if ( (byte_49FE619 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1B640C8(&StringLiteral_43/*"\n"*/, displayName);
    byte_49FE619 = 1;
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
    sub_1B64324(this);
  mFontSize = nameLabel->fields.mFontSize;
  if ( mFontSize < 1 )
    v8 = 0LL;
  else
    v8 = (unsigned int)(nameLabel->fields.mWidth / mFontSize);
  stringLength = displayName->fields._stringLength;
  if ( stringLength <= 2 * (int)v8 )
  {
    if ( stringLength <= (int)v8 )
      return displayName;
    v12 = (System_String_o *)StringLiteral_43/*"\n"*/;
  }
  else
  {
    v10 = (float)stringLength;
    if ( !byte_49F779D )
    {
      sub_1B640C8(&System_Math_TypeInfo, v8);
      byte_49F779D = 1;
    }
    v11 = v10 * 0.5;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = (System_String_o *)StringLiteral_43/*"\n"*/;
    v13 = vcvtps_s32_f32(v11);
    if ( ceilf(v11) == INFINITY )
      LODWORD(v8) = 0x80000000;
    else
      LODWORD(v8) = v13;
  }
  return System_String__Insert(displayName, v8, v12, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__OnClickButton(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ItemLinkInfoListViewItemDraw_o *v2; // x19
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  int32_t IsLocked_k__BackingField; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct ItemLinkInfoListViewItem_o *v7; // x8

  v2 = this;
  if ( (byte_49FE622 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewItemDraw_o *)sub_1B640C8(&Method_ItemLinkInfoListViewItemDraw_OnClickButton__, method);
    byte_49FE622 = 1;
  }
  viewItem = v2->fields.viewItem;
  if ( !viewItem )
    goto LABEL_8;
  IsLocked_k__BackingField = viewItem->fields._IsLocked_k__BackingField;
  v5 = Method_ItemLinkInfoListViewItemDraw_OnClickButton__;
  if ( (*((_BYTE *)Method_ItemLinkInfoListViewItemDraw_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_ItemLinkInfoListViewItemDraw_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, IsLocked_k__BackingField, 0LL);
  v7 = v2->fields.viewItem;
  if ( !v7 )
LABEL_8:
    sub_1B64324(this);
  ActionExtensions__Call(v7->fields._LinkAction_k__BackingField, 0LL);
}


void __fastcall ItemLinkInfoListViewItemDraw__SetBaseButtonState(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  struct UICommonButton_o *v7; // x8
  float v8; // s1

  if ( (byte_49FE61A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, boardItem);
    byte_49FE61A = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
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
          (v6 = this->fields.baseButton) == 0LL) )
    {
LABEL_12:
      sub_1B64324(v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *baseSprite; // x20
  UISprite_o *v6; // x20
  struct UISprite_o *v7; // x0

  if ( (byte_49FE61C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_20254/*"img_list_bg03"*/, v4);
    byte_49FE61C = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v6 = this->fields.baseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v6, (System_String_o *)StringLiteral_20254/*"img_list_bg03"*/, 0LL);
    v7 = this->fields.baseSprite;
    if ( !v7 )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *iconSprite; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  System_String_o *BoardIconName; // x20
  UISprite_o *v10; // x21
  struct UISprite_o *v11; // x0

  if ( (byte_49FE61F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FE61F = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL);
  if ( !v7 )
  {
    BoardIconName = ItemLinkInfoListViewItemDraw__GetBoardIconName((ItemLinkInfoListViewItemDraw_o *)v7, item, v8);
    if ( !System_String__IsNullOrEmpty(BoardIconName, 0LL) )
    {
      v10 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v10, BoardIconName, 0LL);
      v11 = this->fields.iconSprite;
      if ( !v11 )
        sub_1B64324(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *arrowObject; // x21
  int64_t UserId; // x0
  bool IsFirst_k__BackingField; // w1
  UnityEngine_Object_o *itemIconRoot; // x21
  UnityEngine_Object_o *itemInfoBasePrefab; // x21
  Il2CppObject *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v15; // x20
  Il2CppObject *Component_object; // x20
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8
  int32_t id; // w2

  if ( (byte_49FE61B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, boardItem);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FE61B = 1;
  }
  arrowObject = (UnityEngine_Object_o *)this->fields.arrowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      IsFirst_k__BackingField = 0;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemIconRoot, 0LL, 0LL) )
    {
      itemInfoBasePrefab = (UnityEngine_Object_o *)this->fields.itemInfoBasePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(itemInfoBasePrefab, 0LL, 0LL) )
      {
        UserId = (int64_t)this->fields.itemIconRoot;
        if ( !UserId )
          goto LABEL_38;
        v13 = (Il2CppObject *)this->fields.itemInfoBasePrefab;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)UserId, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v15 = UnityEngine_Object__Instantiate_object__49003980(
                v13,
                transform,
                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        UserId = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
        if ( (UserId & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_38;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v15,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            ItemEnt_k__BackingField = boardItem->fields._ItemEnt_k__BackingField;
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
            sub_1B64324(UserId);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ItemLinkInfoListViewItem_o **p_viewItem; // x21
  System_String_o *Master_object; // x0
  const MethodInfo *v16; // x2
  UILabel_o *nameLabel; // x22
  const MethodInfo *v18; // x1
  struct ItemLinkInfoListViewItem_o *v19; // x8
  int32_t Type_k__BackingField; // w9
  int32_t v21; // w21
  UnityEngine_Object_o *rewardInformationComponent; // x22
  UnityEngine_Object_o *enemyInformationComponent; // x22
  MapControl_QuestInfo_o *QuestInfo; // x0
  char *endTime; // x21
  int32_t TargetId_k__BackingField; // w21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  Il2CppObject *RestTime2; // x0
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  UILabel_o *restTimeLabel; // x21
  System_String_o *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FE618 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, item);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_13277/*"TIME_REST_QUEST_BOARD_QUEST"*/, v12);
    sub_1B640C8(&StringLiteral_8614/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, v13);
    byte_49FE618 = 1;
  }
  entity = 0LL;
  if ( item )
  {
    this->fields.viewItem = item;
    p_viewItem = &this->fields.viewItem;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.viewItem, (int32_t)item, (int32_t)method, v3);
    if ( !this->fields.viewItem )
      goto LABEL_47;
    nameLabel = this->fields.nameLabel;
    Master_object = ItemLinkInfoListViewItemDraw__ModifyNameText(
                      this,
                      this->fields.viewItem->fields._Name_k__BackingField,
                      v16);
    if ( !nameLabel )
      goto LABEL_47;
    UILabel__set_text(nameLabel, Master_object, 0LL);
    v19 = *p_viewItem;
    if ( !*p_viewItem )
      goto LABEL_47;
    Type_k__BackingField = v19->fields._Type_k__BackingField;
    if ( (unsigned int)(Type_k__BackingField - 2) >= 4 )
    {
      if ( Type_k__BackingField != 1 )
        goto LABEL_45;
      TargetId_k__BackingField = v19->fields._TargetId_k__BackingField;
      if ( !TargetId_k__BackingField || v19->fields._TargetValueType_k__BackingField != 4 )
        goto LABEL_45;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Master_object )
        goto LABEL_47;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             TargetId_k__BackingField,
             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (System_String_o *)NetworkManager__getTime(0LL);
        if ( !entity )
          goto LABEL_47;
        endTime = (char *)((char *)entity[6].klass - (char *)Master_object);
        if ( (__int64)endTime >= 1 )
          goto LABEL_38;
      }
    }
    else
    {
      v21 = v19->fields._TargetId_k__BackingField;
      if ( !v21 || v19->fields._TargetValueType_k__BackingField != 1 )
        goto LABEL_45;
      if ( !v19->fields._IsLocked_k__BackingField )
      {
        rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL) )
        {
          Master_object = (System_String_o *)this->fields.rewardInformationComponent;
          if ( !Master_object )
            goto LABEL_47;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v21,
            0LL);
        }
        enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL) )
        {
          Master_object = (System_String_o *)this->fields.enemyInformationComponent;
          if ( !Master_object )
            goto LABEL_47;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Master_object,
            v21,
            0LL);
        }
      }
      Master_object = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_47;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Master_object, v21, 0LL);
      if ( !QuestInfo )
        goto LABEL_45;
      endTime = (char *)QuestInfo->fields.endTime;
      if ( (__int64)endTime < 1 )
        goto LABEL_45;
      Master_object = (System_String_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Master_object )
LABEL_47:
        sub_1B64324(Master_object);
      if ( !QuestEntity__HasFlag((QuestEntity_o *)Master_object, 32LL, 0LL) )
      {
LABEL_38:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8614/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13277/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
        RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)endTime, -1LL, 0LL);
        Master_object = System_String__Format(v28, RestTime2, 0LL);
        viewItem = this->fields.viewItem;
        if ( viewItem )
        {
          restTimeLabel = this->fields.restTimeLabel;
          v32 = Master_object;
          if ( viewItem->fields._IsLocked_k__BackingField )
          {
            Master_object = System_String__Format(v27, (Il2CppObject *)Master_object, 0LL);
            v32 = Master_object;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, v32, 0LL);
            goto LABEL_45;
          }
        }
        goto LABEL_47;
      }
    }
LABEL_45:
    ItemLinkInfoListViewItemDraw__SetBoardImage(this, v18);
    ItemLinkInfoListViewItemDraw__SetMaskImage(this, v33);
    ItemLinkInfoListViewItemDraw__SetRecommendIcon(this, this->fields.viewItem, v34);
    ItemLinkInfoListViewItemDraw__SetBoardTypeIconImage(this, this->fields.viewItem, v35);
    ItemLinkInfoListViewItemDraw__SetDispItemIcon(this, this->fields.viewItem, v36);
    ItemLinkInfoListViewItemDraw__SetLockBoard(this, this->fields.viewItem, v37);
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
    sub_1B64324(this);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetMaskImage(
        ItemLinkInfoListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *enableMask; // x20
  UISprite_o *v6; // x20
  struct UISprite_o *v7; // x0

  if ( (byte_49FE61D & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_20254/*"img_list_bg03"*/, v4);
    byte_49FE61D = 1;
  }
  enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(enableMask, 0LL, 0LL) )
  {
    v6 = this->fields.enableMask;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v6, (System_String_o *)StringLiteral_20254/*"img_list_bg03"*/, 0LL);
    v7 = this->fields.enableMask;
    if ( !v7 )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall ItemLinkInfoListViewItemDraw__SetRecommendIcon(
        ItemLinkInfoListViewItemDraw_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *recommendIconSprite; // x21
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v9; // x19

  if ( (byte_49FE61E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_20112/*"icon_support_recommend_yellow"*/, v6);
    byte_49FE61E = 1;
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
      sub_1B64324(gameObject);
    }
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields._IsRecommend_k__BackingField && !item->fields._IsLocked_k__BackingField,
      0LL);
    v9 = this->fields.recommendIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v9, (System_String_o *)StringLiteral_20112/*"icon_support_recommend_yellow"*/, 0LL);
  }
}