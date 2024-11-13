void __fastcall ItemLinkInfoDetailObject___ctor(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemDetailLabelMargin = 0x1441A80000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemLinkInfoDetailObject__Awake(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x9
  struct UILabel_o *itemDetailLabel; // x8

  widget = this->fields.widget;
  if ( !widget || (itemDetailLabel = this->fields.itemDetailLabel) == 0LL )
    sub_1BCAA3C(this, method);
  this->fields.itemDetailLabelMargin = (float)widget->fields.mHeight - (float)itemDetailLabel->fields.mHeight;
  this->fields.itemDetailLabelFontSize = itemDetailLabel->fields.mFontSize;
}


void __fastcall ItemLinkInfoDetailObject__Setup(
        ItemLinkInfoDetailObject_o *this,
        ItemEntity_o *itemEnt,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  int32_t type; // w23
  ItemIconComponent_o *itemIcon; // x22
  __int64 ImageId; // x0
  __int64 v10; // x1

  if ( itemEnt )
  {
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemEnt->fields.detail,
      this->fields.itemDetailLabelFontSize,
      this->fields.itemDetailLabelFontSize,
      0,
      0LL);
    type = itemEnt->fields.type;
    itemIcon = this->fields.itemIcon;
    ImageId = ItemEntity__GetImageId(itemEnt, 0LL);
    if ( !itemIcon )
      sub_1BCAA3C(ImageId, v10);
    ItemIconComponent__SetCombineItemImage(itemIcon, ImageId, itemEnt->fields.bgImageId, -1, type == 29, 0LL);
  }
  if ( isDispStoneDetail )
    ItemLinkInfoDetailObject__SetupStoneDetail(this, (const MethodInfo *)itemEnt);
}


void __fastcall ItemLinkInfoDetailObject__SetupStoneDetail(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *payStoneNumLabel; // x20
  UILabel_o *v19; // x20
  int32_t v20; // w21
  UnityEngine_Object_o *freeStoneNumLabel; // x20
  UILabel_o *v22; // x20
  int32_t freeStone; // w21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20
  UILabel_o *v25; // x19
  int32_t stone; // w20
  UserExternalPaymentStoneEntity_o *v27; // [xsp+8h] [xbp-38h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B181E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B181E9 = 1;
  }
  entity = 0LL;
  v27 = 0LL;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_36;
    if ( !UserExternalPaymentStoneMaster__TryGetEntity(
            (UserExternalPaymentStoneMaster_o *)Master_object,
            &v27,
            UserId,
            4,
            0LL) )
      return;
    payStoneNumLabel = (UnityEngine_Object_o *)this->fields.payStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UserId = UnityEngine_Object__op_Inequality(payStoneNumLabel, 0LL, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !entity || !v27 )
        goto LABEL_36;
      v19 = this->fields.payStoneNumLabel;
      v20 = entity->fields.chargeStone - v27->fields.stone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
      UserId = (int64_t)LocalizationManager__GetUnitInfo(v20, 0LL);
      if ( !v19 )
        goto LABEL_36;
      UILabel__set_text(v19, (System_String_o *)UserId, 0LL);
    }
    freeStoneNumLabel = (UnityEngine_Object_o *)this->fields.freeStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UserId = UnityEngine_Object__op_Inequality(freeStoneNumLabel, 0LL, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_36;
      v22 = this->fields.freeStoneNumLabel;
      freeStone = entity->fields.freeStone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
      UserId = (int64_t)LocalizationManager__GetUnitInfo(freeStone, 0LL);
      if ( !v22 )
        goto LABEL_36;
      UILabel__set_text(v22, (System_String_o *)UserId, 0LL);
    }
    externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UserId = UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0LL, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( v27 )
      {
        v25 = this->fields.externalPayStoneNumLabel;
        stone = v27->fields.stone;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
        UserId = (int64_t)LocalizationManager__GetUnitInfo(stone, 0LL);
        if ( v25 )
        {
          UILabel__set_text(v25, (System_String_o *)UserId, 0LL);
          return;
        }
      }
LABEL_36:
      sub_1BCAA3C(UserId, v16);
    }
  }
}


float __fastcall ItemLinkInfoDetailObject__get_AreaHeight(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UILabel_o *itemDetailLabel; // x8

  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !itemDetailLabel )
    sub_1BCAA3C(this, method);
  return this->fields.itemDetailLabelMargin + (float)itemDetailLabel->fields.mHeight;
}


float __fastcall ItemLinkInfoDetailObject__get_Height(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1BCAA3C(this, method);
  return (float)widget->fields.mHeight;
}