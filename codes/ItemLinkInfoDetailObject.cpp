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
    sub_1C7BD40(this, method);
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
  __int64 v10; // x1

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
      sub_1C7BD40(ImageId, v10);
    ItemIconComponent__SetCombineItemImage(itemIcon, ImageId, itemEnt->fields.bgImageId, -1, type == 29, 0);
  }
  if ( isDispStoneDetail )
    ItemLinkInfoDetailObject__SetupStoneDetail(this, (const MethodInfo *)itemEnt);
}


void ItemLinkInfoDetailObject__SetupStoneDetail(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  System_String_o *UnitInfo; // x0
  UnityEngine_Object_o *payStoneNumLabel; // x20
  UILabel_o *v7; // x20
  int32_t v8; // w21
  UnityEngine_Object_o *freeStoneNumLabel; // x20
  UILabel_o *v10; // x20
  int32_t v11; // w21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20
  UILabel_o *v13; // x19
  int32_t stone; // w20
  UserExternalPaymentStoneEntity_o *v15; // [xsp+8h] [xbp-38h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CF0ED4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0ED4 = 1;
  }
  entity = 0;
  v15 = 0;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
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
            0) )
      return;
    payStoneNumLabel = (UnityEngine_Object_o *)this->fields.payStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(payStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity || !v15 )
        goto LABEL_40;
      v7 = this->fields.payStoneNumLabel;
      v8 = *(int *)((char *)&dword_B4 + (_QWORD)entity) - v15->fields.stone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(v8, 0);
      if ( !v7 )
        goto LABEL_40;
      UILabel__set_text(v7, UnitInfo, 0);
    }
    freeStoneNumLabel = (UnityEngine_Object_o *)this->fields.freeStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(freeStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_40;
      v10 = this->fields.freeStoneNumLabel;
      v11 = *(int *)((char *)&dword_B0 + (_QWORD)entity);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UnitInfo = LocalizationManager__GetUnitInfo(v11, 0);
      if ( !v10 )
        goto LABEL_40;
      UILabel__set_text(v10, UnitInfo, 0);
    }
    externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( v15 )
      {
        v13 = this->fields.externalPayStoneNumLabel;
        stone = v15->fields.stone;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        UnitInfo = LocalizationManager__GetUnitInfo(stone, 0);
        if ( v13 )
        {
          UILabel__set_text(v13, UnitInfo, 0);
          return;
        }
      }
LABEL_40:
      sub_1C7BD40(UnitInfo, v3);
    }
  }
}


float ItemLinkInfoDetailObject__get_AreaHeight(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UILabel_o *itemDetailLabel; // x8

  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !itemDetailLabel )
    sub_1C7BD40(this, method);
  return this->fields.itemDetailLabelMargin + (float)itemDetailLabel->fields.mHeight;
}


float ItemLinkInfoDetailObject__get_Height(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1C7BD40(this, method);
  return (float)widget->fields.mHeight;
}