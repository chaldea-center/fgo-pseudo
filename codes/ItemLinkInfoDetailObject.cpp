void ItemLinkInfoDetailObject___ctor(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemDetailLabelMargin = 0x1441A80000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoDetailObject__Awake(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x9
  struct UILabel_o *itemDetailLabel; // x8
  int mHeight; // s1
  float v5; // s0

  widget = this->fields.widget;
  if ( !widget || (itemDetailLabel = this->fields.itemDetailLabel) == 0 )
    sub_2213CDC(this, method);
  mHeight = itemDetailLabel->fields.mHeight;
  v5 = (float)widget->fields.mHeight;
  this->fields.itemDetailLabelFontSize = itemDetailLabel->fields.mFontSize;
  this->fields.itemDetailLabelMargin = v5 - (float)mHeight;
}


void ItemLinkInfoDetailObject__Setup(
        ItemLinkInfoDetailObject_o *this,
        ItemEntity_o *itemEnt,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  UILabel_o *itemDetailLabel; // x22
  System_String_o *Detail; // x0
  int32_t type; // w23
  ItemIconComponent_o *itemIcon; // x22
  __int64 ImageId; // x0
  __int64 v12; // x1

  if ( itemEnt )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    Detail = ItemEntity__GetDetail(itemEnt, 0);
    WrapControlText__textAdjust(
      itemDetailLabel,
      Detail,
      this->fields.itemDetailLabelFontSize,
      this->fields.itemDetailLabelFontSize,
      0);
    type = itemEnt->fields.type;
    itemIcon = this->fields.itemIcon;
    ImageId = ItemEntity__GetImageId(itemEnt, 0);
    if ( !itemIcon )
      sub_2213CDC(ImageId, v12);
    ItemIconComponent__SetCombineItemImage(itemIcon, ImageId, itemEnt->fields.bgImageId, -1, type == 29, 0);
  }
  if ( isDispStoneDetail )
    ItemLinkInfoDetailObject__SetupStoneDetail(this, (const MethodInfo *)itemEnt);
}


void ItemLinkInfoDetailObject__SetupStoneDetail(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *payStoneNumLabel; // x20
  UILabel_o *v9; // x20
  int32_t v10; // w21
  UnityEngine_Object_o *freeStoneNumLabel; // x20
  UILabel_o *v12; // x20
  int32_t v13; // w21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20
  UILabel_o *v15; // x19
  int32_t stone; // w20
  UserExternalPaymentStoneEntity_o *v17; // [xsp+8h] [xbp-38h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59730C0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59730C0 = 1;
  }
  entity = 0;
  v17 = 0;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    UnitInfo = (System_String_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      UnitInfo = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_40;
    if ( !UserExternalPaymentStoneMaster__TryGetEntity(
            (UserExternalPaymentStoneMaster_o *)Master_object,
            &v17,
            *(_QWORD *)(*(_QWORD *)&UnitInfo[7].fields + 64LL),
            4,
            0) )
      return;
    payStoneNumLabel = (UnityEngine_Object_o *)this->fields.payStoneNumLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(payStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity || !v17 )
        goto LABEL_40;
      v9 = this->fields.payStoneNumLabel;
      v10 = *(int *)((char *)&dword_B4 + (_QWORD)entity) - v17->fields.stone;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      UnitInfo = LocalizationManager__GetUnitInfo(v10, 0);
      if ( !v9 )
        goto LABEL_40;
      UILabel__set_text(v9, UnitInfo, 0);
    }
    freeStoneNumLabel = (UnityEngine_Object_o *)this->fields.freeStoneNumLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(freeStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_40;
      v12 = this->fields.freeStoneNumLabel;
      v13 = *(int *)((char *)&dword_B0 + (_QWORD)entity);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      UnitInfo = LocalizationManager__GetUnitInfo(v13, 0);
      if ( !v12 )
        goto LABEL_40;
      UILabel__set_text(v12, UnitInfo, 0);
    }
    externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnitInfo = (System_String_o *)UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0, 0);
    if ( ((unsigned __int8)UnitInfo & 1) != 0 )
    {
      if ( v17 )
      {
        v15 = this->fields.externalPayStoneNumLabel;
        stone = v17->fields.stone;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
        UnitInfo = LocalizationManager__GetUnitInfo(stone, 0);
        if ( v15 )
        {
          UILabel__set_text(v15, UnitInfo, 0);
          return;
        }
      }
LABEL_40:
      sub_2213CDC(UnitInfo, v4);
    }
  }
}


float ItemLinkInfoDetailObject__get_AreaHeight(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UILabel_o *itemDetailLabel; // x8

  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !itemDetailLabel )
    sub_2213CDC(this, method);
  return this->fields.itemDetailLabelMargin + (float)itemDetailLabel->fields.mHeight;
}


float ItemLinkInfoDetailObject__get_Height(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_2213CDC(this, method);
  return (float)widget->fields.mHeight;
}