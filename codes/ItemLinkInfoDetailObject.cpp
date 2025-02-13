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
    sub_1C22094(this, method);
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
      sub_1C22094(ImageId, v10);
    ItemIconComponent__SetCombineItemImage(itemIcon, ImageId, itemEnt->fields.bgImageId, -1, type == 29, 0LL);
  }
  if ( isDispStoneDetail )
    ItemLinkInfoDetailObject__SetupStoneDetail(this, (const MethodInfo *)itemEnt);
}


void __fastcall ItemLinkInfoDetailObject__SetupStoneDetail(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  System_String_o *UnitInfo; // x0
  UnityEngine_Object_o *payStoneNumLabel; // x20
  UILabel_o *v7; // x20
  int32_t v8; // w21
  UnityEngine_Object_o *freeStoneNumLabel; // x20
  UILabel_o *v10; // x20
  int32_t freeStone; // w21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20
  UILabel_o *v13; // x19
  int32_t stone; // w20
  UserExternalPaymentStoneEntity_o *v15; // [xsp+8h] [xbp-38h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BDE5F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5F5 = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
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
            &v15,
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
      if ( !entity || !v15 )
        goto LABEL_40;
      v7 = this->fields.payStoneNumLabel;
      v8 = entity->fields.chargeStone - v15->fields.stone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(v8, 0LL);
      if ( !v7 )
        goto LABEL_40;
      UILabel__set_text(v7, UnitInfo, 0LL);
    }
    freeStoneNumLabel = (UnityEngine_Object_o *)this->fields.freeStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(freeStoneNumLabel, 0LL, 0LL);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_40;
      v10 = this->fields.freeStoneNumLabel;
      freeStone = entity->fields.freeStone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(freeStone, 0LL);
      if ( !v10 )
        goto LABEL_40;
      UILabel__set_text(v10, UnitInfo, 0LL);
    }
    externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0LL, 0LL);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( v15 )
      {
        v13 = this->fields.externalPayStoneNumLabel;
        stone = v15->fields.stone;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        UnitInfo = LocalizationManager__GetUnitInfo(stone, 0LL);
        if ( v13 )
        {
          UILabel__set_text(v13, UnitInfo, 0LL);
          return;
        }
      }
LABEL_40:
      sub_1C22094(UnitInfo, v3);
    }
  }
}


float __fastcall ItemLinkInfoDetailObject__get_AreaHeight(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UILabel_o *itemDetailLabel; // x8

  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !itemDetailLabel )
    sub_1C22094(this, method);
  return this->fields.itemDetailLabelMargin + (float)itemDetailLabel->fields.mHeight;
}


float __fastcall ItemLinkInfoDetailObject__get_Height(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1C22094(this, method);
  return (float)widget->fields.mHeight;
}