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
    sub_1B86614(this, method);
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
      0LL);
    type = itemEnt->fields.type;
    itemIcon = this->fields.itemIcon;
    ImageId = ItemEntity__GetImageId(itemEnt, 0LL);
    if ( !itemIcon )
      sub_1B86614(ImageId, v10);
    ItemIconComponent__SetCombineItemImage(itemIcon, ImageId, itemEnt->fields.bgImageId, -1, type == 29, 0LL);
  }
  if ( isDispStoneDetail )
    ItemLinkInfoDetailObject__SetupStoneDetail(this, (const MethodInfo *)itemEnt);
}


void __fastcall ItemLinkInfoDetailObject__SetupStoneDetail(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  System_String_o *UnitInfo; // x0
  UnityEngine_Object_o *payStoneNumLabel; // x20
  UILabel_o *v11; // x20
  int32_t v12; // w21
  UnityEngine_Object_o *freeStoneNumLabel; // x20
  UILabel_o *v14; // x20
  int32_t freeStone; // w21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20
  UILabel_o *v17; // x19
  int32_t stone; // w20
  UserExternalPaymentStoneEntity_o *v19; // [xsp+8h] [xbp-38h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A504D3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A504D3 = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v7);
      byte_4A48C25 = 1;
    }
    UnitInfo = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UnitInfo = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_40;
    if ( !UserExternalPaymentStoneMaster__TryGetEntity(
            (UserExternalPaymentStoneMaster_o *)Master_object,
            &v19,
            *(_QWORD *)(*(_QWORD *)&UnitInfo[7].fields + 64LL),
            4,
            0LL) )
      return;
    payStoneNumLabel = (UnityEngine_Object_o *)this->fields.payStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(payStoneNumLabel, 0LL, 0LL);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity || !v19 )
        goto LABEL_40;
      v11 = this->fields.payStoneNumLabel;
      v12 = entity->fields.chargeStone - v19->fields.stone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(v12, 0LL);
      if ( !v11 )
        goto LABEL_40;
      UILabel__set_text(v11, UnitInfo, 0LL);
    }
    freeStoneNumLabel = (UnityEngine_Object_o *)this->fields.freeStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(freeStoneNumLabel, 0LL, 0LL);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_40;
      v14 = this->fields.freeStoneNumLabel;
      freeStone = entity->fields.freeStone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(freeStone, 0LL);
      if ( !v14 )
        goto LABEL_40;
      UILabel__set_text(v14, UnitInfo, 0LL);
    }
    externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0LL, 0LL);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( v19 )
      {
        v17 = this->fields.externalPayStoneNumLabel;
        stone = v19->fields.stone;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        UnitInfo = LocalizationManager__GetUnitInfo(stone, 0LL);
        if ( v17 )
        {
          UILabel__set_text(v17, UnitInfo, 0LL);
          return;
        }
      }
LABEL_40:
      sub_1B86614(UnitInfo, v7);
    }
  }
}


float __fastcall ItemLinkInfoDetailObject__get_AreaHeight(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UILabel_o *itemDetailLabel; // x8

  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !itemDetailLabel )
    sub_1B86614(this, method);
  return this->fields.itemDetailLabelMargin + (float)itemDetailLabel->fields.mHeight;
}


float __fastcall ItemLinkInfoDetailObject__get_Height(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1B86614(this, method);
  return (float)widget->fields.mHeight;
}