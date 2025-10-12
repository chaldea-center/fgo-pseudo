void ItemLinkInfoDetailObject___ctor(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemDetailLabelMargin = 0x1441A80000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoDetailObject__Awake(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x9
  struct UILabel_o *itemDetailLabel; // x8

  widget = this->fields.widget;
  if ( !widget || (itemDetailLabel = this->fields.itemDetailLabel) == 0 )
    sub_1C32E7C(this);
  this->fields.itemDetailLabelMargin = (float)widget->fields.mHeight - (float)itemDetailLabel->fields.mHeight;
  this->fields.itemDetailLabelFontSize = itemDetailLabel->fields.mFontSize;
}


void ItemLinkInfoDetailObject__Setup(
        ItemLinkInfoDetailObject_o *this,
        ItemEntity_o *itemEnt,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  int32_t type; // w23
  ItemIconComponent_o *itemIcon; // x22
  __int64 ImageId; // x0

  if ( itemEnt )
  {
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemEnt->fields.detail,
      this->fields.itemDetailLabelFontSize,
      this->fields.itemDetailLabelFontSize,
      0);
    type = itemEnt->fields.type;
    itemIcon = this->fields.itemIcon;
    ImageId = ItemEntity__GetImageId(itemEnt, 0);
    if ( !itemIcon )
      sub_1C32E7C(ImageId);
    ItemIconComponent__SetCombineItemImage(itemIcon, ImageId, itemEnt->fields.bgImageId, -1, type == 29, 0);
  }
  if ( isDispStoneDetail )
    ItemLinkInfoDetailObject__SetupStoneDetail(this, (const MethodInfo *)itemEnt);
}


void ItemLinkInfoDetailObject__SetupStoneDetail(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  System_String_o *UnitInfo; // x0
  UnityEngine_Object_o *payStoneNumLabel; // x20
  UILabel_o *v6; // x20
  int32_t v7; // w21
  UnityEngine_Object_o *freeStoneNumLabel; // x20
  UILabel_o *v9; // x20
  int32_t v10; // w21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20
  UILabel_o *v12; // x19
  int32_t stone; // w20
  UserExternalPaymentStoneEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3A309 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A309 = 1;
  }
  entity = 0;
  v14 = 0;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
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
            &v14,
            *(_QWORD *)(*(_QWORD *)&UnitInfo[7].fields + 64LL),
            4,
            0) )
      return;
    payStoneNumLabel = (UnityEngine_Object_o *)this->fields.payStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(payStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity || !v14 )
        goto LABEL_40;
      v6 = this->fields.payStoneNumLabel;
      v7 = *(int *)((char *)&dword_B4 + (_QWORD)entity) - v14->fields.stone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(v7, 0);
      if ( !v6 )
        goto LABEL_40;
      UILabel__set_text(v6, UnitInfo, 0);
    }
    freeStoneNumLabel = (UnityEngine_Object_o *)this->fields.freeStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(freeStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_40;
      v9 = this->fields.freeStoneNumLabel;
      v10 = *(int *)((char *)&dword_B0 + (_QWORD)entity);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(v10, 0);
      if ( !v9 )
        goto LABEL_40;
      UILabel__set_text(v9, UnitInfo, 0);
    }
    externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( v14 )
      {
        v12 = this->fields.externalPayStoneNumLabel;
        stone = v14->fields.stone;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        UnitInfo = LocalizationManager__GetUnitInfo(stone, 0);
        if ( v12 )
        {
          UILabel__set_text(v12, UnitInfo, 0);
          return;
        }
      }
LABEL_40:
      sub_1C32E7C(UnitInfo);
    }
  }
}


float ItemLinkInfoDetailObject__get_AreaHeight(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UILabel_o *itemDetailLabel; // x8

  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !itemDetailLabel )
    sub_1C32E7C(this);
  return this->fields.itemDetailLabelMargin + (float)itemDetailLabel->fields.mHeight;
}


float ItemLinkInfoDetailObject__get_Height(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1C32E7C(this);
  return (float)widget->fields.mHeight;
}